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
      'tcp',
      'udp',
      'icmp',
      'ip',
      'http',
      'ftp',
      'tls',
      'smb',
      'dns',
      'dcerpc',
      'ssh',
      'smtp',
      'imap',
      'modbus',
      'dnp3',
      'enip',
      'nfs',
      'ikev2',
      'krb5',
      'ntp',
      'dhcp',
      'rfb',
      'rdp',
      'snmp',
      'tftp',
      'sip',
      'http2'
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

    direction: $ => choice(
      '->',
      '<>'
    ),

    options: $ => seq(
      '(',
      optional(
        seq($._opt, ";", repeat(seq($._opt, ";")))
      ),
      ')'
    ),

    _opt: $ => seq(
      alias($.text, $.keyword),
      optional(seq(alias($.colon, $.separator), $.value))
    ),

    digit: $ => seq(
      optional(choice('>', '<')),
      /\d+/
    ),

    text: $ => seq( // String with no quotes, terminated at ':' or ';' or '\n'
      repeat1(
        token.immediate(/[^"!:;\(\)\n]+/)
        //token.immediate(/[^(^\d+$)][^"!:;\(\)\n]+/)
        //token.immediate(/^[^(\d+)]+$|[^(^\d+$)][^"!:;\(\)\n]+/)
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

    value: $ => seq(
      optional($.negation),
      choice( // Here will be where all values are defined for every possible keyword
        $.string,
        $.digit,
        $.decimal,
        $.hexidecimal,
        alias($.text, $.other),
      )
    ),

  }

});
