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

    content: $ => seq('content:', optional($.negation), $.string),

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

    digit: $ => seq(
      optional(choice('>', '<')),
      /\d+/
    ),

    decimal: $ => /\d+.\d+/,

  }

});
