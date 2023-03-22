module.exports = grammar({
  name: 'suricataRules',

  rules: {
    source_file: $ => repeat($._lines),

    _lines: $ => choice(
      $.comment,
      $._rule,
    ),

    comment: $ => seq("#", /.*/),

    _rule: $ => seq(
      $.action,
      $.header,
      $.options
    ),

    action: $ => choice(
      'alert',
      'pass',
      'drop',
      'reject',
      'rejectsrc',
      'rejectdst',
      'rejectboth'
    ),

    header: $ => seq(
      $.protocol,
      $._location,
      $._port_choices,
      $.direction,
      $._location,
      $._port_choices
    ),

    protocol: $ => choice(
      'tcp', 'udp', 'icmp', 'ip', 'http', 'ftp', 'tls', 'smb', 'dns', 'dcerpc',
      'ssh', 'smtp', 'imap', 'modbus', 'dnp3', 'enip', 'nfs', 'ikev2', 'krb5',
      'ntp', 'dhcp', 'rfb', 'rdp', 'snmp', 'tftp', 'sip', 'http2'
    ),

    // The location can be IPv4, IPv6, CIDR notation, grouping, exception/negation, var
    _location: $ => choice(
      $._standalone_location,
      $.group_location,
    ),

    _standalone_location: $ => seq(
      optional($.negation),
      choice(
        $.variable,
        $.ipv4,
        $.ipv6,
      )
    ),

    group_location: $ => seq(
      optional($.negation),
      "[",
      optional(
        seq($._location, repeat(seq(",", $._location)))
      ),
      "]"
    ),

    negation: $ => '!',

    variable: $ => seq('$', /[a-zA-Z_]*/),

    ipv4: $ => seq(
      /\d+\.\d+\.\d+\.\d+/,
      optional(/\/\d+/) // CIDR
    ),

    ipv6: $ => seq(
      repeat1(
        $._ipv6_octet
      ),
      optional(/\/\d+/) // CIDR
    ),

    _ipv6_octet: $ => /[0-9a-fA-F]{1,4}:{0,2}/,

    _port_choices: $ => choice(
      $.port,
      $.group_port
    ),

    port: $ => choice(
      'any',
      seq(
        optional($.negation),
        /\d{1,4}/,
        optional(alias($.colon, $.port_range))
      )
    ),

    group_port: $ => seq(
      optional($.negation),
      "[",
      optional(
        seq($._port_choices, repeat(seq(",", $._port_choices)))
      ),
      "]"
    ),

    colon: $ => ':',

    semicolon: $ => ';',

    comma: $ => ',',

    bitwise_and: $ => '&',

    bitwise_or: $ => '^',

    math_operator: $ => choice(
      '+',
      '-',
      prec(-1, '*'), // Since this alone is also a valid constant
      '/',
      '<<',
      '>>',
      '=',
      '>=',
      '<=',
      '==',
      '!-',
      '<>',
      '>',
      '<'
    ),

    direction: $ => choice(
      '->',
      '<>'
    ),

    options: $ => seq(
      '(',
      optional(
        seq($._opt, $.semicolon, repeat(seq($._opt, $.semicolon)))
      ),
      ')'
    ),

    _opt: $ => seq(
      alias($.text, $.keyword),
      optional(seq(alias($.colon, $.separator), $.value))
    ),

    /**
      Digits:
        Intended to capture everything from '1', '12345'
        Also intends to capture anything espexed as a generic numerical value:
        ex. '>1', '10<>20' - From urilen (6.12.6)
        ex. Any generic comparison operator
        ex. '1-9' for numeric ranges
    */
    digit: $ => seq(
      optional(
        alias($.math_operator, $.operator)
      ),
      /\d+/,
      optional(seq(
        alias('-', $.min_max),
        /\d+/
      )),
      optional($.unit)
    ),

    unit: $ => choice(
      'KB',
      'MB',
      'GB'
    ),

    text: $ => seq( // String with no quotes, terminated at ':' or ';' or '\n'
      repeat1(
        token.immediate(/[^"!:;,\(\)\n]+/)
      )
    ),

    string: $ => seq(
      '"',
      repeat(
        token.immediate(/[^"\n]+/)
      ),
      '"'
    ),

    decimal: $ => /\d+.\d+/,

    hexidecimal: $ => seq('x', /[0-9a-fA-F]{1,4}/),

    hexstring: $ => seq(/\d/, 'x', /[0-9a-fA-F]{1,4}/),

    // Complex Values TODO:
    // 6.18 Support for Modbus functions
    // 6.7.12 Support for hex, dec, and oct would be nice
    value: $ => seq(
      optional($.negation),
      choice( // Here will be where all values are defined for every possible keyword
        $.string,
        $.digit,
        $.decimal,
        $.hexidecimal,
        $.hexstring,
        $.constant,
        $.bitwise_or,
        $.bitwise_and,
        $.math_operator,
        alias($.text, $.other),
      ),
      optional(seq($.comma, $.value)), // Let a list of values exist
      //optional(seq($.comma, $._opt, $.semicolon)), // Check for validity, should support comma seperated options per 6.20
    ),

    constant: $ => choice( // Since many strings are official values or constants we will scope those
      'rr', 'eol', 'nop', 'ts', 'sec', 'esec', 'lsrr', 'ssrr', 'satid', 'any', // ipopts constants
      'only', // fastpattern constant
      '*', // rpc constant
      'set', 'isset', 'toggle', 'unset', 'isnotset', 'noalert', // flowbits constants
      'to_client', 'to_server', 'from_client', 'from_server', 'established', 'not_established',
      'stateless', 'only_stream', 'no_stream', 'only_frag', 'no_frag', // flow constants
      'request/to_server', 'response/to_client', 'both', 'file', 'tx', 'ssn/flow', // filestore constants
      'sslv2', 'sslv3', 'tls1.0', 'tls1.1', 'tls1.2', 'tls1.3', // ssl_version constants
      'client_hello', 'server_hello', 'client_kyx', 'server_keyx', 'unkown', // ssl_state constants
      '2_compat', // ssh.protoversion constants

      'confirm', 'read', 'write', 'select', 'operate', 'direct_operate', 'direct_operate_nr',
      'immed_freeze', 'immed_freeze_nr', 'freeze_clear', 'freeze_clear_nr', 'freeze_at_time',
      'freeze_at_time_nr', 'cold_restart', 'warm_restart', 'initialize_data', 'initialize_appl',
      'start_appl', 'stop_appl', 'save_config', 'enable_unsolicited', 'disable_unsolicited', 'assign_class',
      'delay_measure', 'record_current_time', 'open_file', 'close_file', 'delete_file', 'get_file_info',
      'authenticate_file', 'abort_file', 'activate_config', 'authenticate_req', 'authenticate_err', 'response',
      'unsolicited_response', 'authenticate_respo', // dnp3_func constants

      'all_stations', 'class_1_events', 'class_2_events', 'class_3_events', 'need_time', 'local_control',
      'device_trouble', 'device_restart', 'no_func_code_support', 'object_unknown', 'parameter_error',
      'event_buffer_overflow', 'alread_executing', 'config_corrupt', 'reserved_2', 'reserved_1', // dnp3_ind constants

      'retr', 'stor', // FTP/FTP_DATA constants
      'INVITE', 'BYTE', 'REGISTER', 'CANCEL', 'ACK', 'OPTIONS', // SIP method constants
      'CONNECT', 'CONNACK', 'PUBLISH', 'PUBACK', 'PUBREC', 'PUBREL', 'PUBCOMP', 'SUBSCRIBE',
      'SUBACK', 'PINGREQ', 'PINGRESP', 'DISCONNECT', 'AUTH', 'UNASSIGNED', // mqtt.type constants

      'dup', 'retain', // mqtt.flags constants

      'yes', 'true', 'no', 'false', // mqtt.connack.session_present
      'username', 'password', 'will', 'will_retain', 'clean_session', // mqtt.connect.flags constants
      'type', 'threshold', 'limit', 'both', 'track', 'by_src', 'by_dst', 'by_rule', 'by_both', 'count', 'seconds', // threshold constants

      'src', 'dst', 'both', // IP Repuation constants
      'load', 'state', 'save', 'memcap', 'hashsize', // rule dataset constants

      'relative', 'endian', 'dce', 'bitmask', 'string', // byte_test constants
      'offset', 'depth', 'distance', 'within', 'oper', 'rvalue', 'result', // byte_math constants

      'server', 'client', 'both', 'either', // steam_size constants

      'name', 'ip_src', 'ip_dst', 'ip_pair', 'expire', // xbits keyword
    ),

  }

});
