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

    // The location can be IPv4, IPv6, DIR notation, grouping, exception/negation, var
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
      'any',
      $.port,
      $.group_port
    ),

    port: $ => seq(
      optional($.negation),
      /\d{1,4}/,
      optional($.port_range)
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
      $.msg,
      $.content,
      $.sid,
      $.rev,
      $.gid,
      $.classtype,
      $.reference,
      $.priority,
      $.metadata,
      $.target,
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
    ),

    msg: $ => seq('msg:', $.string),

    content: $ => seq( 'content:', $.string),

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

    string: $ => seq(
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

    digit: $ => /\d+/,

  }

});
