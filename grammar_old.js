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
        optional($.port_range)
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

    port_range: $ => ':',

    direction: $ => choice(
      '->',
      '<>'
    ),

    options: $ => seq(
      '(',
      optional(
        seq($._opts, ";", repeat(seq($._opts, ";")))
      ),
      ')'
    ),

    _opts: $ => choice(
      // Meta Keywords
      $.msg,
      $.sid,
      $.rev,
      $.gid,
      $.classtype,
      $.reference,
      $.priority,
      $.metadata,
      $.target,
      // IP Keywords
      $.ttl,
      $.ipopts,
      $.sameip,
      $.ip_proto,
      $.ipv4_hdr,
      $.ipv6_hdr,
      $.id,
      $.geoip,
      $.fragbits,
      $.fragoffset,
      $.tos,
      // TCP Keywords
      $.seq,
      $.ack,
      $.window,
      $.tcp_mss,
      $.tcp_hdr,
      // UDP Keywords
      $.udp_hdr,
      // ICMP Keywords
      $.itype,
      $.icode,
      $.icmp_id,
      $.icmp_seq,
      $.icmpv6_hdr,
      $.icmpv6_mtu,
      // Payload Keywords
      $.content,
      $.nocase,
      $.depth,
      $.startswith,
      $.endswith,
      $.offset,
      $.distance,
      $.within,
      $.isdataat,
      $.bsize,
      $.dsize,
      // TODO byte_test 6.7.12
      // TODO byte_math 6.7.3
      // TODO byte_jump 6.7.14
      // TODO byte_extract 6.7.15
      $.rpc,
      $.replace,
      $.pcre,
      // Transformations
      $.dotprefix,
      $.strip_whitespace,
      $.compress_whitespace,
      $.to_md5,
      $.to_sha1,
      $.to_sha256,
      $.pcrexform,
      $.url_decode,
      // Prefiltering Keywords
      $.fast_pattern,
      $.prefilter,
      // Flow Keywords
      $.flowbits,
      $.flow,
      $.flowint,
      $.stream_size,
      // Bypass Keyword
      $.bypass,
      // HTTP Keywords
      $.http_uri,
      // TODO: Most HTTP Keywords have been skiped
      // File Keywords
      $.filename,
      $.fileext,
      $.filemagic,
      $.filestore,
      $.filemd5,
      $.filesha1,
      $.filesha256,
      $.filesize,
      // DNS Keywords
      $.dns_opcode,
      $.dns_query,
      // SSL/TLS Keywords
      $.tls_cert_subject,
      $.tls_cert_issuer,
      $.tls_cert_serial,
      $.tls_cert_fingerprint,
      $.tls_sni,
      $.tls_cert_notbefore,
      $.tls_cert_notafter,
      $.tls_cert_expired,
      $.tls_cert_valid,
      $.tls_certs,
      $.tls_version,
      $.ssl_version,
      $.tls_subject,
      $.tls_issuerdn,
      $.tls_fingerprint,
      $.tls_store,
      $.ssl_state,
      // SSH Keywords
      $.ssh_proto,
      $.ssh_software,
      $.ssh_protoversion,
      $.ssh_softwareversion,
      $.ssh_hassh,
      $.ssh_hassh_string,
      $.ssh_hassh_server,
      $.ssh_hassh_server_string,
      // JA3 Keywords
      $.ja3_hash,
      $.ja3_string,
      $.ja3_string,
      $.ja3s_hash,
      $.ja3s_string,
      // Modbus Keywords
      $.modbus,
      // DNP3 Keywords
      $.dnp3_func,
      $.dnp3_ind,
      $.dnp3_obj,
      $.dnp3_data,
      // ENIP/CIP Keywords

      // FTP/FTP-DATA Keywords
      // Kerberos Keywords
      // SNMP Keywords
      // Base64 Keywords
      // SIP Keywords
      // RFB Keywords
      // MQTT Keywords
      // HTTP2 Keywords
      // Generic App Layer Keywords
      // XBits Keywords
      // Thresholding Keywords
      // IP Repuation Keyword
    ),

    msg: $ => seq('msg:', $.string),

    sid: $ => seq('sid:', $.digit),

    rev: $ => seq('rev:', $.digit),

    gid: $ => seq('gid:', $.digit),

    classtype: $ => seq('classtype:', $.text),

    reference: $ => seq('reference:', $.text),

    priority: $ => seq('priority:', $.digit),

    metadata: $ => seq('metadata:', $.text),

    target: $ => seq('target:', $.text),

    ttl: $ => seq('ttl:', $.digit),

    ipopts: $ => seq('ipopts:', choice('rr', 'eol', 'nop', 'ts', 'sec', 'esec', 'lsrr', 'ssrr', 'satid', 'any')),

    sameip: $ => 'sameip',

    ip_proto: $ => seq('ip_proto:', choice($.digit, $.text)),

    ipv4_hdr: $ => 'ipv4.hdr',

    ipv6_hdr: $ => 'ipv6.hdr',

    geoip: $ => seq('geoip:', $.text),

    id: $ => seq('id:', $.digit),

    fragbits: $ => seq('fragbits:', $.text),

    fragoffset: $ => seq('fragoffset:', $.text),

    tos: $ => seq('tos:', optional($.negation), optional('x'), $.digit),

    seq: $ => seq('seq:', $.digit),

    ack: $ => seq('ack:', $.digit),

    window: $ => seq('window:', optional($.negation), choice($.digit, $.decimal)),

    tcp_mss: $ => seq('tcp.mss:', $.text),

    tcp_hdr: $ => 'tcp.hdr',

    udp_hdr: $ => 'udp.hdr',

    // TODO:
    // itype, icode, and icmpv6_mtu could be much more exact, as they support some operators
    // and then a digit, but as the exact syntax is unclear I'll go with text for now until
    // I can find some clarification on the exact syntax
    itype: $ => seq('itype:', $.text),

    icode: $ => seq('icode:', $.text),

    icmp_id: $ => seq('icmp_id:', $.digit),

    icmp_seq: $ => seq('icmp_seq:', $.digit),

    icmpv6_hdr: $ => 'icmpv6.hdr',

    icmpv6_mtu: $ => seq('icmpv6.mtu:', $.text),

    content: $ => seq('content:', $.string),

    nocase: $ => 'nocase',

    depth: $ => seq('depth:', $.digit),

    startswith: $ => 'startswith',

    endswith: $ => 'endswith',

    offset: $ => seq('offset:', $.digit),

    distance: $ => seq('distance:', $.digit),

    within: $ => seq('within:', $.digit),

    isdataat: $ => seq('isdataat:', optional($.negation), $.digit, optional(seq(',', 'relative'))),

    bsize: $ => seq('bsize:', $.digit),

    dsize: $ => seq('dsize:', $.digit),

    rpc: $ => seq('rpc:', $.digit, ',', choice($.digit, '*'), ',', choice($.digit, '*')),

    replace: $ => seq('replace:', $.string),

    pcre: $ => seq('pcre:', $.string),

    dotprefix: $ => 'dotprefix',

    strip_whitespace: $ => 'strip_whitespace',

    compress_whitespace: $ => 'compress_whitespace',

    to_md5: $ => 'to_md5',

    to_sha1: $ => 'to_sha1',

    to_sha256: $ => 'to_sha256',

    pcrexform: $ => seq('pcrexform:', $.string),

    url_decode: $ => 'url_decode',

    fast_pattern: $ => seq('fastpattern', optional(choice(seq(':', 'only'), $.digit))),

    prefilter: $ => 'prefilter',

    flowbits: $ => seq('flowbits:', choice(seq('set', ',', $.text), seq('isset', ',', $.text), seq('toggle', ',', $.text), seq('unset', ',', $.text), seq('isnotset', ',', $.text), 'noalert')),

    flow: $ => seq('flow:', repeat1(seq(choice('to_client', 'to_server', 'from_client', 'from_server', 'established', 'not_established', 'stateless', 'only_stream', 'no_stream', 'only_frag', 'no_frag'), optional(',')))),

    // TODO The syntax here is much more complex, but we will be lazy
    flowint: $ => seq('flowint:', $.text),

    // TODO The syntax here is mildly complex, but could interact weirdly with other portions of parsing, so lazy for now
    stream_size: $ => seq('stream_size:', $.text),

    bypass: $ => 'bypass',

    http_uri: $ => 'http.uri',

    // TODO Skipped HTTP Keywords

    filename: $ => seq('filename:', $.string),

    fileext: $ => seq('fileext:', $.string),

    filemagic: $ => seq('filemagic:', $.string),

    filestore: $ => seq('filestore:', optional(choice('request/to_server', 'response/to_client', 'both')), optional(seq(',', choice('file', 'tx', 'ssn/flow')))),

    filemd5: $ => seq('filemd5:', optional($.negation), $.text),

    filesha1: $ => seq('filesha1:', optional($.negation), $.text),

    filesha256: $ => seq('filesha256:', optional($.negation), $.text),

    filesize: $ => seq('filesize:', $.text), // TODO 6.13.8 This could be more exact

    dns_opcode: $ => seq('dns.opcode:', optional($.negation), $.digit),

    dns_query: $ => 'dns.query',

    tls_cert_subject: $ => choice('tls_cert_subject', 'tls.cert_subject'),

    tls_cert_issuer: $ => choice('tls_cert_issuer', 'tls.cert_issuer'),

    tls_cert_serial: $ => choice('tls_cert_serial', 'tls.cert_serial'),

    tls_cert_fingerprint: $ => choice('tls_cert_fingerprint', 'tls.cert_fingerprint'),

    tls_sni: $ => choice('tls_sni', 'tls.sni'),

    tls_cert_notbefore: $ => 'tls_cert_notbefore',

    tls_cert_notafter: $ => 'tls_cert_notafter',

    tls_cert_expired: $ => 'tls_cert_expired',

    tls_cert_valid: $ => 'tls_cert_valid',

    tls_certs: $ => 'tls.certs',

    tls_version: $ => seq('tls.version:', $.text), // TODO 6.15.11

    ssl_version: $ => seq('ssl_version:', repeat1(seq(choice('sslv2', 'sslv3', 'tls1.0', 'tls1.1', 'tls1.2', 'tls1.3'), optional(',')))),

    tls_subject: $ => seq('tls.subject:', $.string),

    tls_issuerdn: $ => seq('tls.issuerdn:', $.string),

    tls_fingerprint: $ => seq('tls.fingerprint', $.string),

    tls_store: $ => 'tls.store',

    ssl_state: $ => seq('ssl_state:', repeat(seq(choice('client_hello', 'server_hello', 'client_keyx', 'server_keyx', 'unkown'), optional('|')))),

    ssh_proto: $ => choice(
      'ssh.proto',
      'ssh_proto',
    ),

    ssh_software: $ => choice(
      'ssh.software',
      'ssh_software',
    ),

    ssh_protoversion: $ => seq('ssh.protoversion:', choice($.decimal, '2_compat')),

    ssh_softwareversion: $ => seq('ssh.softwareversion:', $.string),

    ssh_hassh: $ => 'ssh.hassh',

    ssh_hassh_string: $ => 'ssh.hassh.string',

    ssh_hassh_server: $ => 'ssh.hassh.server',

    ssh_hassh_server_string: $ => 'ssh.hassh.server.string',

    ja3_hash: $ => choice(
      'ja3.hash',
      'ja3_hash',
    ),

    ja3_string: $ => choice(
      'ja3.string',
      'ja3_string',
    ),

    ja3s_hash: $ => 'ja3s.hash',

    ja3s_string: $ => 'ja3s.string',

    modbus: $ => seq('modbus:', $.text), // TODO 66.18 This is much more complex syntax

    dnp3_func: $ => seq('dnp3_func:', choice($.digit, 'confirm', 'read', 'write', 'select', 'operate', 'direct_operate', 'direct_operate_nr', 'immed_freeze', 'immed_freeze_nr', 'freeze_clear', 'freeze_clear_nr', 'freeze_at_time', 'freeze_at_time_nr', 'cold_restart', 'warm_restart', 'initialize_data', 'initialize_appl', 'start_appl', 'stop_appl', 'save_config', 'enable_unsolicited', 'disable_unsolicited', 'assign_class', 'delay_measure', 'record_current_time', 'open_file', 'close_file', 'delete_file', 'get_file_info', 'authenticate_file', 'abort_file', 'activate_config', 'authenticate_req', 'authenticate_err', 'response', 'unsolicited_response', 'authenticate_respo')),

    dnp3_ind: $ => seq('dnp3_ind:', repeat1(seq(choice('all_stations', 'class_1_events', 'class_2_events', 'class_3_events', 'need_time', 'local_control', 'device_trouble', 'device_restart', 'no_func_code_support', 'object_unknown', 'parameter_error', 'event_buffer_overflow', 'alread_executing', 'config_corrupt', 'reserved_2', 'reserved_1'), optional(',')))),

    dnp3_obj: $ => seq('dnp3_obj:', $.digit, ',', $.digit),

    dnp3_data: $ => 'dnp3_data',

    string: $ => seq(
      optional($.negation),
      '"',
      repeat(
        token.immediate(/[^"\n]+/)
      ),
      '"'
    ),

    text: $ => seq( // Strings with no quotes, terminated at ';'
      repeat1(
        token.immediate(/[^";\n]+/)
      )
    ),

    digit: $ => seq( // Check if the other digits should match 6.12.5
      optional(choice('>', '<')),
      /\d+/
    ),

    decimal: $ => /\d+.\d+/,

  }

});
