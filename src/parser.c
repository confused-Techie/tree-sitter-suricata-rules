#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 179
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 199
#define ALIAS_COUNT 0
#define TOKEN_COUNT 130
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_POUND = 1,
  aux_sym_comment_token1 = 2,
  anon_sym_alert = 3,
  anon_sym_pass = 4,
  anon_sym_drop = 5,
  anon_sym_reject = 6,
  anon_sym_rejectsrc = 7,
  anon_sym_rejectdst = 8,
  anon_sym_rejectboth = 9,
  anon_sym_tcp = 10,
  anon_sym_udp = 11,
  anon_sym_icmp = 12,
  anon_sym_ip = 13,
  anon_sym_http = 14,
  anon_sym_ftp = 15,
  anon_sym_tls = 16,
  anon_sym_smb = 17,
  anon_sym_dns = 18,
  anon_sym_dcerpc = 19,
  anon_sym_ssh = 20,
  anon_sym_smtp = 21,
  anon_sym_imap = 22,
  anon_sym_modbus = 23,
  anon_sym_dnp3 = 24,
  anon_sym_enip = 25,
  anon_sym_nfs = 26,
  anon_sym_ikev2 = 27,
  anon_sym_krb5 = 28,
  anon_sym_ntp = 29,
  anon_sym_dhcp = 30,
  anon_sym_rfb = 31,
  anon_sym_rdp = 32,
  anon_sym_snmp = 33,
  anon_sym_tftp = 34,
  anon_sym_sip = 35,
  anon_sym_http2 = 36,
  anon_sym_LBRACK = 37,
  anon_sym_COMMA = 38,
  anon_sym_RBRACK = 39,
  sym_negation = 40,
  anon_sym_DOLLAR = 41,
  aux_sym_variable_token1 = 42,
  aux_sym_ipv4_token1 = 43,
  aux_sym_ipv4_token2 = 44,
  sym__ipv6_octet = 45,
  anon_sym_any = 46,
  aux_sym_port_token1 = 47,
  anon_sym_COLON = 48,
  anon_sym_DASH_GT = 49,
  anon_sym_LT_GT = 50,
  anon_sym_LPAREN = 51,
  anon_sym_SEMI = 52,
  anon_sym_RPAREN = 53,
  anon_sym_msg_COLON = 54,
  anon_sym_sid_COLON = 55,
  anon_sym_rev_COLON = 56,
  anon_sym_gid_COLON = 57,
  anon_sym_classtype_COLON = 58,
  anon_sym_reference_COLON = 59,
  anon_sym_priority_COLON = 60,
  anon_sym_metadata_COLON = 61,
  anon_sym_target_COLON = 62,
  anon_sym_ttl_COLON = 63,
  anon_sym_ipopts_COLON = 64,
  anon_sym_rr = 65,
  anon_sym_eol = 66,
  anon_sym_nop = 67,
  anon_sym_ts = 68,
  anon_sym_sec = 69,
  anon_sym_esec = 70,
  anon_sym_lsrr = 71,
  anon_sym_ssrr = 72,
  anon_sym_satid = 73,
  sym_sameip = 74,
  anon_sym_ip_proto_COLON = 75,
  sym_ipv4_hdr = 76,
  sym_ipv6_hdr = 77,
  anon_sym_geoip_COLON = 78,
  anon_sym_id_COLON = 79,
  anon_sym_fragbits_COLON = 80,
  anon_sym_fragoffset_COLON = 81,
  anon_sym_tos_COLON = 82,
  anon_sym_x = 83,
  anon_sym_seq_COLON = 84,
  anon_sym_ack_COLON = 85,
  anon_sym_window_COLON = 86,
  anon_sym_tcp_DOTmss_COLON = 87,
  sym_tcp_hdr = 88,
  sym_udp_hdr = 89,
  anon_sym_itype_COLON = 90,
  anon_sym_icode_COLON = 91,
  anon_sym_icmp_id_COLON = 92,
  anon_sym_icmp_seq_COLON = 93,
  sym_icmpv6_hdr = 94,
  anon_sym_icmpv6_DOTmtu_COLON = 95,
  anon_sym_content_COLON = 96,
  sym_nocase = 97,
  anon_sym_depth_COLON = 98,
  sym_startswith = 99,
  sym_endswith = 100,
  anon_sym_offset_COLON = 101,
  anon_sym_distance_COLON = 102,
  anon_sym_within_COLON = 103,
  anon_sym_isdataat_COLON = 104,
  anon_sym_relative = 105,
  anon_sym_bsize_COLON = 106,
  anon_sym_dsize_COLON = 107,
  anon_sym_rpc_COLON = 108,
  anon_sym_STAR = 109,
  anon_sym_replace_COLON = 110,
  anon_sym_pcre_COLON = 111,
  sym_dotprefix = 112,
  sym_strip_whitespace = 113,
  sym_compress_whitespace = 114,
  sym_to_md5 = 115,
  sym_to_sha1 = 116,
  sym_to_sha256 = 117,
  anon_sym_pcrexform_COLON = 118,
  sym_url_decode = 119,
  anon_sym_fastpattern = 120,
  anon_sym_only = 121,
  sym_prefilter = 122,
  anon_sym_DQUOTE = 123,
  aux_sym_string_token1 = 124,
  aux_sym_text_token1 = 125,
  anon_sym_GT = 126,
  anon_sym_LT = 127,
  aux_sym_digit_token1 = 128,
  sym_decimal = 129,
  sym_source_file = 130,
  sym__lines = 131,
  sym_comment = 132,
  sym__rule = 133,
  sym_action = 134,
  sym_header = 135,
  sym_protocol = 136,
  sym__location = 137,
  sym__standalone_location = 138,
  sym_group_location = 139,
  sym_variable = 140,
  sym_ipv4 = 141,
  sym_ipv6 = 142,
  sym__port_choices = 143,
  sym_port = 144,
  sym_group_port = 145,
  sym_port_range = 146,
  sym_direction = 147,
  sym_options = 148,
  sym__opts = 149,
  sym_msg = 150,
  sym_sid = 151,
  sym_rev = 152,
  sym_gid = 153,
  sym_classtype = 154,
  sym_reference = 155,
  sym_priority = 156,
  sym_metadata = 157,
  sym_target = 158,
  sym_ttl = 159,
  sym_ipopts = 160,
  sym_ip_proto = 161,
  sym_geoip = 162,
  sym_id = 163,
  sym_fragbits = 164,
  sym_fragoffset = 165,
  sym_tos = 166,
  sym_seq = 167,
  sym_ack = 168,
  sym_window = 169,
  sym_tcp_mss = 170,
  sym_itype = 171,
  sym_icode = 172,
  sym_icmp_id = 173,
  sym_icmp_seq = 174,
  sym_icmpv6_mtu = 175,
  sym_content = 176,
  sym_depth = 177,
  sym_offset = 178,
  sym_distance = 179,
  sym_within = 180,
  sym_isdataat = 181,
  sym_bsize = 182,
  sym_dsize = 183,
  sym_rpc = 184,
  sym_replace = 185,
  sym_pcre = 186,
  sym_pcrexform = 187,
  sym_fast_pattern = 188,
  sym_string = 189,
  sym_text = 190,
  sym_digit = 191,
  aux_sym_source_file_repeat1 = 192,
  aux_sym_group_location_repeat1 = 193,
  aux_sym_ipv6_repeat1 = 194,
  aux_sym_group_port_repeat1 = 195,
  aux_sym_options_repeat1 = 196,
  aux_sym_string_repeat1 = 197,
  aux_sym_text_repeat1 = 198,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_POUND] = "#",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_alert] = "alert",
  [anon_sym_pass] = "pass",
  [anon_sym_drop] = "drop",
  [anon_sym_reject] = "reject",
  [anon_sym_rejectsrc] = "rejectsrc",
  [anon_sym_rejectdst] = "rejectdst",
  [anon_sym_rejectboth] = "rejectboth",
  [anon_sym_tcp] = "tcp",
  [anon_sym_udp] = "udp",
  [anon_sym_icmp] = "icmp",
  [anon_sym_ip] = "ip",
  [anon_sym_http] = "http",
  [anon_sym_ftp] = "ftp",
  [anon_sym_tls] = "tls",
  [anon_sym_smb] = "smb",
  [anon_sym_dns] = "dns",
  [anon_sym_dcerpc] = "dcerpc",
  [anon_sym_ssh] = "ssh",
  [anon_sym_smtp] = "smtp",
  [anon_sym_imap] = "imap",
  [anon_sym_modbus] = "modbus",
  [anon_sym_dnp3] = "dnp3",
  [anon_sym_enip] = "enip",
  [anon_sym_nfs] = "nfs",
  [anon_sym_ikev2] = "ikev2",
  [anon_sym_krb5] = "krb5",
  [anon_sym_ntp] = "ntp",
  [anon_sym_dhcp] = "dhcp",
  [anon_sym_rfb] = "rfb",
  [anon_sym_rdp] = "rdp",
  [anon_sym_snmp] = "snmp",
  [anon_sym_tftp] = "tftp",
  [anon_sym_sip] = "sip",
  [anon_sym_http2] = "http2",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [sym_negation] = "negation",
  [anon_sym_DOLLAR] = "$",
  [aux_sym_variable_token1] = "variable_token1",
  [aux_sym_ipv4_token1] = "ipv4_token1",
  [aux_sym_ipv4_token2] = "ipv4_token2",
  [sym__ipv6_octet] = "_ipv6_octet",
  [anon_sym_any] = "any",
  [aux_sym_port_token1] = "port_token1",
  [anon_sym_COLON] = ":",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_LT_GT] = "<>",
  [anon_sym_LPAREN] = "(",
  [anon_sym_SEMI] = ";",
  [anon_sym_RPAREN] = ")",
  [anon_sym_msg_COLON] = "msg:",
  [anon_sym_sid_COLON] = "sid:",
  [anon_sym_rev_COLON] = "rev:",
  [anon_sym_gid_COLON] = "gid:",
  [anon_sym_classtype_COLON] = "classtype:",
  [anon_sym_reference_COLON] = "reference:",
  [anon_sym_priority_COLON] = "priority:",
  [anon_sym_metadata_COLON] = "metadata:",
  [anon_sym_target_COLON] = "target:",
  [anon_sym_ttl_COLON] = "ttl:",
  [anon_sym_ipopts_COLON] = "ipopts:",
  [anon_sym_rr] = "rr",
  [anon_sym_eol] = "eol",
  [anon_sym_nop] = "nop",
  [anon_sym_ts] = "ts",
  [anon_sym_sec] = "sec",
  [anon_sym_esec] = "esec",
  [anon_sym_lsrr] = "lsrr",
  [anon_sym_ssrr] = "ssrr",
  [anon_sym_satid] = "satid",
  [sym_sameip] = "sameip",
  [anon_sym_ip_proto_COLON] = "ip_proto:",
  [sym_ipv4_hdr] = "ipv4_hdr",
  [sym_ipv6_hdr] = "ipv6_hdr",
  [anon_sym_geoip_COLON] = "geoip:",
  [anon_sym_id_COLON] = "id:",
  [anon_sym_fragbits_COLON] = "fragbits:",
  [anon_sym_fragoffset_COLON] = "fragoffset:",
  [anon_sym_tos_COLON] = "tos:",
  [anon_sym_x] = "x",
  [anon_sym_seq_COLON] = "seq:",
  [anon_sym_ack_COLON] = "ack:",
  [anon_sym_window_COLON] = "window:",
  [anon_sym_tcp_DOTmss_COLON] = "tcp.mss:",
  [sym_tcp_hdr] = "tcp_hdr",
  [sym_udp_hdr] = "udp_hdr",
  [anon_sym_itype_COLON] = "itype:",
  [anon_sym_icode_COLON] = "icode:",
  [anon_sym_icmp_id_COLON] = "icmp_id:",
  [anon_sym_icmp_seq_COLON] = "icmp_seq:",
  [sym_icmpv6_hdr] = "icmpv6_hdr",
  [anon_sym_icmpv6_DOTmtu_COLON] = "icmpv6.mtu:",
  [anon_sym_content_COLON] = "content:",
  [sym_nocase] = "nocase",
  [anon_sym_depth_COLON] = "depth:",
  [sym_startswith] = "startswith",
  [sym_endswith] = "endswith",
  [anon_sym_offset_COLON] = "offset:",
  [anon_sym_distance_COLON] = "distance:",
  [anon_sym_within_COLON] = "within:",
  [anon_sym_isdataat_COLON] = "isdataat:",
  [anon_sym_relative] = "relative",
  [anon_sym_bsize_COLON] = "bsize:",
  [anon_sym_dsize_COLON] = "dsize:",
  [anon_sym_rpc_COLON] = "rpc:",
  [anon_sym_STAR] = "*",
  [anon_sym_replace_COLON] = "replace:",
  [anon_sym_pcre_COLON] = "pcre:",
  [sym_dotprefix] = "dotprefix",
  [sym_strip_whitespace] = "strip_whitespace",
  [sym_compress_whitespace] = "compress_whitespace",
  [sym_to_md5] = "to_md5",
  [sym_to_sha1] = "to_sha1",
  [sym_to_sha256] = "to_sha256",
  [anon_sym_pcrexform_COLON] = "pcrexform:",
  [sym_url_decode] = "url_decode",
  [anon_sym_fastpattern] = "fastpattern",
  [anon_sym_only] = "only",
  [sym_prefilter] = "prefilter",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [aux_sym_text_token1] = "text_token1",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [aux_sym_digit_token1] = "digit_token1",
  [sym_decimal] = "decimal",
  [sym_source_file] = "source_file",
  [sym__lines] = "_lines",
  [sym_comment] = "comment",
  [sym__rule] = "_rule",
  [sym_action] = "action",
  [sym_header] = "header",
  [sym_protocol] = "protocol",
  [sym__location] = "_location",
  [sym__standalone_location] = "_standalone_location",
  [sym_group_location] = "group_location",
  [sym_variable] = "variable",
  [sym_ipv4] = "ipv4",
  [sym_ipv6] = "ipv6",
  [sym__port_choices] = "_port_choices",
  [sym_port] = "port",
  [sym_group_port] = "group_port",
  [sym_port_range] = "port_range",
  [sym_direction] = "direction",
  [sym_options] = "options",
  [sym__opts] = "_opts",
  [sym_msg] = "msg",
  [sym_sid] = "sid",
  [sym_rev] = "rev",
  [sym_gid] = "gid",
  [sym_classtype] = "classtype",
  [sym_reference] = "reference",
  [sym_priority] = "priority",
  [sym_metadata] = "metadata",
  [sym_target] = "target",
  [sym_ttl] = "ttl",
  [sym_ipopts] = "ipopts",
  [sym_ip_proto] = "ip_proto",
  [sym_geoip] = "geoip",
  [sym_id] = "id",
  [sym_fragbits] = "fragbits",
  [sym_fragoffset] = "fragoffset",
  [sym_tos] = "tos",
  [sym_seq] = "seq",
  [sym_ack] = "ack",
  [sym_window] = "window",
  [sym_tcp_mss] = "tcp_mss",
  [sym_itype] = "itype",
  [sym_icode] = "icode",
  [sym_icmp_id] = "icmp_id",
  [sym_icmp_seq] = "icmp_seq",
  [sym_icmpv6_mtu] = "icmpv6_mtu",
  [sym_content] = "content",
  [sym_depth] = "depth",
  [sym_offset] = "offset",
  [sym_distance] = "distance",
  [sym_within] = "within",
  [sym_isdataat] = "isdataat",
  [sym_bsize] = "bsize",
  [sym_dsize] = "dsize",
  [sym_rpc] = "rpc",
  [sym_replace] = "replace",
  [sym_pcre] = "pcre",
  [sym_pcrexform] = "pcrexform",
  [sym_fast_pattern] = "fast_pattern",
  [sym_string] = "string",
  [sym_text] = "text",
  [sym_digit] = "digit",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_group_location_repeat1] = "group_location_repeat1",
  [aux_sym_ipv6_repeat1] = "ipv6_repeat1",
  [aux_sym_group_port_repeat1] = "group_port_repeat1",
  [aux_sym_options_repeat1] = "options_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_text_repeat1] = "text_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_alert] = anon_sym_alert,
  [anon_sym_pass] = anon_sym_pass,
  [anon_sym_drop] = anon_sym_drop,
  [anon_sym_reject] = anon_sym_reject,
  [anon_sym_rejectsrc] = anon_sym_rejectsrc,
  [anon_sym_rejectdst] = anon_sym_rejectdst,
  [anon_sym_rejectboth] = anon_sym_rejectboth,
  [anon_sym_tcp] = anon_sym_tcp,
  [anon_sym_udp] = anon_sym_udp,
  [anon_sym_icmp] = anon_sym_icmp,
  [anon_sym_ip] = anon_sym_ip,
  [anon_sym_http] = anon_sym_http,
  [anon_sym_ftp] = anon_sym_ftp,
  [anon_sym_tls] = anon_sym_tls,
  [anon_sym_smb] = anon_sym_smb,
  [anon_sym_dns] = anon_sym_dns,
  [anon_sym_dcerpc] = anon_sym_dcerpc,
  [anon_sym_ssh] = anon_sym_ssh,
  [anon_sym_smtp] = anon_sym_smtp,
  [anon_sym_imap] = anon_sym_imap,
  [anon_sym_modbus] = anon_sym_modbus,
  [anon_sym_dnp3] = anon_sym_dnp3,
  [anon_sym_enip] = anon_sym_enip,
  [anon_sym_nfs] = anon_sym_nfs,
  [anon_sym_ikev2] = anon_sym_ikev2,
  [anon_sym_krb5] = anon_sym_krb5,
  [anon_sym_ntp] = anon_sym_ntp,
  [anon_sym_dhcp] = anon_sym_dhcp,
  [anon_sym_rfb] = anon_sym_rfb,
  [anon_sym_rdp] = anon_sym_rdp,
  [anon_sym_snmp] = anon_sym_snmp,
  [anon_sym_tftp] = anon_sym_tftp,
  [anon_sym_sip] = anon_sym_sip,
  [anon_sym_http2] = anon_sym_http2,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_negation] = sym_negation,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [aux_sym_variable_token1] = aux_sym_variable_token1,
  [aux_sym_ipv4_token1] = aux_sym_ipv4_token1,
  [aux_sym_ipv4_token2] = aux_sym_ipv4_token2,
  [sym__ipv6_octet] = sym__ipv6_octet,
  [anon_sym_any] = anon_sym_any,
  [aux_sym_port_token1] = aux_sym_port_token1,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_LT_GT] = anon_sym_LT_GT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_msg_COLON] = anon_sym_msg_COLON,
  [anon_sym_sid_COLON] = anon_sym_sid_COLON,
  [anon_sym_rev_COLON] = anon_sym_rev_COLON,
  [anon_sym_gid_COLON] = anon_sym_gid_COLON,
  [anon_sym_classtype_COLON] = anon_sym_classtype_COLON,
  [anon_sym_reference_COLON] = anon_sym_reference_COLON,
  [anon_sym_priority_COLON] = anon_sym_priority_COLON,
  [anon_sym_metadata_COLON] = anon_sym_metadata_COLON,
  [anon_sym_target_COLON] = anon_sym_target_COLON,
  [anon_sym_ttl_COLON] = anon_sym_ttl_COLON,
  [anon_sym_ipopts_COLON] = anon_sym_ipopts_COLON,
  [anon_sym_rr] = anon_sym_rr,
  [anon_sym_eol] = anon_sym_eol,
  [anon_sym_nop] = anon_sym_nop,
  [anon_sym_ts] = anon_sym_ts,
  [anon_sym_sec] = anon_sym_sec,
  [anon_sym_esec] = anon_sym_esec,
  [anon_sym_lsrr] = anon_sym_lsrr,
  [anon_sym_ssrr] = anon_sym_ssrr,
  [anon_sym_satid] = anon_sym_satid,
  [sym_sameip] = sym_sameip,
  [anon_sym_ip_proto_COLON] = anon_sym_ip_proto_COLON,
  [sym_ipv4_hdr] = sym_ipv4_hdr,
  [sym_ipv6_hdr] = sym_ipv6_hdr,
  [anon_sym_geoip_COLON] = anon_sym_geoip_COLON,
  [anon_sym_id_COLON] = anon_sym_id_COLON,
  [anon_sym_fragbits_COLON] = anon_sym_fragbits_COLON,
  [anon_sym_fragoffset_COLON] = anon_sym_fragoffset_COLON,
  [anon_sym_tos_COLON] = anon_sym_tos_COLON,
  [anon_sym_x] = anon_sym_x,
  [anon_sym_seq_COLON] = anon_sym_seq_COLON,
  [anon_sym_ack_COLON] = anon_sym_ack_COLON,
  [anon_sym_window_COLON] = anon_sym_window_COLON,
  [anon_sym_tcp_DOTmss_COLON] = anon_sym_tcp_DOTmss_COLON,
  [sym_tcp_hdr] = sym_tcp_hdr,
  [sym_udp_hdr] = sym_udp_hdr,
  [anon_sym_itype_COLON] = anon_sym_itype_COLON,
  [anon_sym_icode_COLON] = anon_sym_icode_COLON,
  [anon_sym_icmp_id_COLON] = anon_sym_icmp_id_COLON,
  [anon_sym_icmp_seq_COLON] = anon_sym_icmp_seq_COLON,
  [sym_icmpv6_hdr] = sym_icmpv6_hdr,
  [anon_sym_icmpv6_DOTmtu_COLON] = anon_sym_icmpv6_DOTmtu_COLON,
  [anon_sym_content_COLON] = anon_sym_content_COLON,
  [sym_nocase] = sym_nocase,
  [anon_sym_depth_COLON] = anon_sym_depth_COLON,
  [sym_startswith] = sym_startswith,
  [sym_endswith] = sym_endswith,
  [anon_sym_offset_COLON] = anon_sym_offset_COLON,
  [anon_sym_distance_COLON] = anon_sym_distance_COLON,
  [anon_sym_within_COLON] = anon_sym_within_COLON,
  [anon_sym_isdataat_COLON] = anon_sym_isdataat_COLON,
  [anon_sym_relative] = anon_sym_relative,
  [anon_sym_bsize_COLON] = anon_sym_bsize_COLON,
  [anon_sym_dsize_COLON] = anon_sym_dsize_COLON,
  [anon_sym_rpc_COLON] = anon_sym_rpc_COLON,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_replace_COLON] = anon_sym_replace_COLON,
  [anon_sym_pcre_COLON] = anon_sym_pcre_COLON,
  [sym_dotprefix] = sym_dotprefix,
  [sym_strip_whitespace] = sym_strip_whitespace,
  [sym_compress_whitespace] = sym_compress_whitespace,
  [sym_to_md5] = sym_to_md5,
  [sym_to_sha1] = sym_to_sha1,
  [sym_to_sha256] = sym_to_sha256,
  [anon_sym_pcrexform_COLON] = anon_sym_pcrexform_COLON,
  [sym_url_decode] = sym_url_decode,
  [anon_sym_fastpattern] = anon_sym_fastpattern,
  [anon_sym_only] = anon_sym_only,
  [sym_prefilter] = sym_prefilter,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [aux_sym_text_token1] = aux_sym_text_token1,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT] = anon_sym_LT,
  [aux_sym_digit_token1] = aux_sym_digit_token1,
  [sym_decimal] = sym_decimal,
  [sym_source_file] = sym_source_file,
  [sym__lines] = sym__lines,
  [sym_comment] = sym_comment,
  [sym__rule] = sym__rule,
  [sym_action] = sym_action,
  [sym_header] = sym_header,
  [sym_protocol] = sym_protocol,
  [sym__location] = sym__location,
  [sym__standalone_location] = sym__standalone_location,
  [sym_group_location] = sym_group_location,
  [sym_variable] = sym_variable,
  [sym_ipv4] = sym_ipv4,
  [sym_ipv6] = sym_ipv6,
  [sym__port_choices] = sym__port_choices,
  [sym_port] = sym_port,
  [sym_group_port] = sym_group_port,
  [sym_port_range] = sym_port_range,
  [sym_direction] = sym_direction,
  [sym_options] = sym_options,
  [sym__opts] = sym__opts,
  [sym_msg] = sym_msg,
  [sym_sid] = sym_sid,
  [sym_rev] = sym_rev,
  [sym_gid] = sym_gid,
  [sym_classtype] = sym_classtype,
  [sym_reference] = sym_reference,
  [sym_priority] = sym_priority,
  [sym_metadata] = sym_metadata,
  [sym_target] = sym_target,
  [sym_ttl] = sym_ttl,
  [sym_ipopts] = sym_ipopts,
  [sym_ip_proto] = sym_ip_proto,
  [sym_geoip] = sym_geoip,
  [sym_id] = sym_id,
  [sym_fragbits] = sym_fragbits,
  [sym_fragoffset] = sym_fragoffset,
  [sym_tos] = sym_tos,
  [sym_seq] = sym_seq,
  [sym_ack] = sym_ack,
  [sym_window] = sym_window,
  [sym_tcp_mss] = sym_tcp_mss,
  [sym_itype] = sym_itype,
  [sym_icode] = sym_icode,
  [sym_icmp_id] = sym_icmp_id,
  [sym_icmp_seq] = sym_icmp_seq,
  [sym_icmpv6_mtu] = sym_icmpv6_mtu,
  [sym_content] = sym_content,
  [sym_depth] = sym_depth,
  [sym_offset] = sym_offset,
  [sym_distance] = sym_distance,
  [sym_within] = sym_within,
  [sym_isdataat] = sym_isdataat,
  [sym_bsize] = sym_bsize,
  [sym_dsize] = sym_dsize,
  [sym_rpc] = sym_rpc,
  [sym_replace] = sym_replace,
  [sym_pcre] = sym_pcre,
  [sym_pcrexform] = sym_pcrexform,
  [sym_fast_pattern] = sym_fast_pattern,
  [sym_string] = sym_string,
  [sym_text] = sym_text,
  [sym_digit] = sym_digit,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_group_location_repeat1] = aux_sym_group_location_repeat1,
  [aux_sym_ipv6_repeat1] = aux_sym_ipv6_repeat1,
  [aux_sym_group_port_repeat1] = aux_sym_group_port_repeat1,
  [aux_sym_options_repeat1] = aux_sym_options_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_text_repeat1] = aux_sym_text_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_alert] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pass] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_drop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_reject] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rejectsrc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rejectdst] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rejectboth] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tcp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_udp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_icmp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ip] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_http] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ftp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tls] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_smb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dns] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dcerpc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ssh] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_smtp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_imap] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_modbus] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dnp3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enip] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nfs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ikev2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_krb5] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ntp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dhcp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rfb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rdp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_snmp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tftp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sip] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_http2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_negation] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_variable_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ipv4_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ipv4_token2] = {
    .visible = false,
    .named = false,
  },
  [sym__ipv6_octet] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_any] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_port_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_msg_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sid_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rev_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gid_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_classtype_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_reference_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_priority_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_metadata_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_target_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ttl_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ipopts_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_eol] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ts] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sec] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_esec] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lsrr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ssrr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_satid] = {
    .visible = true,
    .named = false,
  },
  [sym_sameip] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ip_proto_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_ipv4_hdr] = {
    .visible = true,
    .named = true,
  },
  [sym_ipv6_hdr] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_geoip_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_id_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fragbits_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fragoffset_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tos_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_x] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_seq_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ack_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_window_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tcp_DOTmss_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_tcp_hdr] = {
    .visible = true,
    .named = true,
  },
  [sym_udp_hdr] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_itype_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_icode_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_icmp_id_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_icmp_seq_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_icmpv6_hdr] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_icmpv6_DOTmtu_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_content_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_nocase] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_depth_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_startswith] = {
    .visible = true,
    .named = true,
  },
  [sym_endswith] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_offset_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_distance_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_within_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_isdataat_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_relative] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bsize_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dsize_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rpc_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_replace_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pcre_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_dotprefix] = {
    .visible = true,
    .named = true,
  },
  [sym_strip_whitespace] = {
    .visible = true,
    .named = true,
  },
  [sym_compress_whitespace] = {
    .visible = true,
    .named = true,
  },
  [sym_to_md5] = {
    .visible = true,
    .named = true,
  },
  [sym_to_sha1] = {
    .visible = true,
    .named = true,
  },
  [sym_to_sha256] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_pcrexform_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_url_decode] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_fastpattern] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_only] = {
    .visible = true,
    .named = false,
  },
  [sym_prefilter] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_text_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_digit_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_decimal] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__lines] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__rule] = {
    .visible = false,
    .named = true,
  },
  [sym_action] = {
    .visible = true,
    .named = true,
  },
  [sym_header] = {
    .visible = true,
    .named = true,
  },
  [sym_protocol] = {
    .visible = true,
    .named = true,
  },
  [sym__location] = {
    .visible = false,
    .named = true,
  },
  [sym__standalone_location] = {
    .visible = false,
    .named = true,
  },
  [sym_group_location] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_ipv4] = {
    .visible = true,
    .named = true,
  },
  [sym_ipv6] = {
    .visible = true,
    .named = true,
  },
  [sym__port_choices] = {
    .visible = false,
    .named = true,
  },
  [sym_port] = {
    .visible = true,
    .named = true,
  },
  [sym_group_port] = {
    .visible = true,
    .named = true,
  },
  [sym_port_range] = {
    .visible = true,
    .named = true,
  },
  [sym_direction] = {
    .visible = true,
    .named = true,
  },
  [sym_options] = {
    .visible = true,
    .named = true,
  },
  [sym__opts] = {
    .visible = false,
    .named = true,
  },
  [sym_msg] = {
    .visible = true,
    .named = true,
  },
  [sym_sid] = {
    .visible = true,
    .named = true,
  },
  [sym_rev] = {
    .visible = true,
    .named = true,
  },
  [sym_gid] = {
    .visible = true,
    .named = true,
  },
  [sym_classtype] = {
    .visible = true,
    .named = true,
  },
  [sym_reference] = {
    .visible = true,
    .named = true,
  },
  [sym_priority] = {
    .visible = true,
    .named = true,
  },
  [sym_metadata] = {
    .visible = true,
    .named = true,
  },
  [sym_target] = {
    .visible = true,
    .named = true,
  },
  [sym_ttl] = {
    .visible = true,
    .named = true,
  },
  [sym_ipopts] = {
    .visible = true,
    .named = true,
  },
  [sym_ip_proto] = {
    .visible = true,
    .named = true,
  },
  [sym_geoip] = {
    .visible = true,
    .named = true,
  },
  [sym_id] = {
    .visible = true,
    .named = true,
  },
  [sym_fragbits] = {
    .visible = true,
    .named = true,
  },
  [sym_fragoffset] = {
    .visible = true,
    .named = true,
  },
  [sym_tos] = {
    .visible = true,
    .named = true,
  },
  [sym_seq] = {
    .visible = true,
    .named = true,
  },
  [sym_ack] = {
    .visible = true,
    .named = true,
  },
  [sym_window] = {
    .visible = true,
    .named = true,
  },
  [sym_tcp_mss] = {
    .visible = true,
    .named = true,
  },
  [sym_itype] = {
    .visible = true,
    .named = true,
  },
  [sym_icode] = {
    .visible = true,
    .named = true,
  },
  [sym_icmp_id] = {
    .visible = true,
    .named = true,
  },
  [sym_icmp_seq] = {
    .visible = true,
    .named = true,
  },
  [sym_icmpv6_mtu] = {
    .visible = true,
    .named = true,
  },
  [sym_content] = {
    .visible = true,
    .named = true,
  },
  [sym_depth] = {
    .visible = true,
    .named = true,
  },
  [sym_offset] = {
    .visible = true,
    .named = true,
  },
  [sym_distance] = {
    .visible = true,
    .named = true,
  },
  [sym_within] = {
    .visible = true,
    .named = true,
  },
  [sym_isdataat] = {
    .visible = true,
    .named = true,
  },
  [sym_bsize] = {
    .visible = true,
    .named = true,
  },
  [sym_dsize] = {
    .visible = true,
    .named = true,
  },
  [sym_rpc] = {
    .visible = true,
    .named = true,
  },
  [sym_replace] = {
    .visible = true,
    .named = true,
  },
  [sym_pcre] = {
    .visible = true,
    .named = true,
  },
  [sym_pcrexform] = {
    .visible = true,
    .named = true,
  },
  [sym_fast_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_digit] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_group_location_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ipv6_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_group_port_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_options_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_text_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(418);
      if (lookahead == '!') ADVANCE(463);
      if (lookahead == '"') ADVANCE(573);
      if (lookahead == '#') ADVANCE(419);
      if (lookahead == '$') ADVANCE(464);
      if (lookahead == '(') ADVANCE(501);
      if (lookahead == ')') ADVANCE(503);
      if (lookahead == '*') ADVANCE(559);
      if (lookahead == ',') ADVANCE(461);
      if (lookahead == '-') ADVANCE(66);
      if (lookahead == '/') ADVANCE(412);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == ';') ADVANCE(502);
      if (lookahead == '<') ADVANCE(583);
      if (lookahead == '>') ADVANCE(580);
      if (lookahead == '[') ADVANCE(460);
      if (lookahead == ']') ADVANCE(462);
      if (lookahead == 'a') ADVANCE(475);
      if (lookahead == 'b') ADVANCE(484);
      if (lookahead == 'c') ADVANCE(479);
      if (lookahead == 'd') ADVANCE(476);
      if (lookahead == 'e') ADVANCE(481);
      if (lookahead == 'f') ADVANCE(474);
      if (lookahead == 'g') ADVANCE(158);
      if (lookahead == 'h') ADVANCE(386);
      if (lookahead == 'i') ADVANCE(103);
      if (lookahead == 'k') ADVANCE(310);
      if (lookahead == 'l') ADVANCE(339);
      if (lookahead == 'm') ADVANCE(160);
      if (lookahead == 'n') ADVANCE(190);
      if (lookahead == 'o') ADVANCE(189);
      if (lookahead == 'p') ADVANCE(81);
      if (lookahead == 'r') ADVANCE(125);
      if (lookahead == 's') ADVANCE(74);
      if (lookahead == 't') ADVANCE(79);
      if (lookahead == 'u') ADVANCE(131);
      if (lookahead == 'w') ADVANCE(218);
      if (lookahead == 'x') ADVANCE(533);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(470);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(65)
      if (lookahead == '<') ADVANCE(584);
      if (lookahead == '>') ADVANCE(581);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(578);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != ';') ADVANCE(579);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(64)
      if (lookahead == ';') ADVANCE(502);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(579);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '"') ADVANCE(573);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(574);
      if (lookahead != 0) ADVANCE(575);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(463);
      if (lookahead == '$') ADVANCE(464);
      if (lookahead == '[') ADVANCE(460);
      if (lookahead == ']') ADVANCE(462);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(470);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(491);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(463);
      if (lookahead == '*') ADVANCE(559);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == ';') ADVANCE(502);
      if (lookahead == '<') ADVANCE(582);
      if (lookahead == '>') ADVANCE(580);
      if (lookahead == 'd') ADVANCE(119);
      if (lookahead == 'e') ADVANCE(259);
      if (lookahead == 'f') ADVANCE(359);
      if (lookahead == 'h') ADVANCE(386);
      if (lookahead == 'i') ADVANCE(118);
      if (lookahead == 'k') ADVANCE(310);
      if (lookahead == 'm') ADVANCE(265);
      if (lookahead == 'n') ADVANCE(191);
      if (lookahead == 'r') ADVANCE(126);
      if (lookahead == 's') ADVANCE(232);
      if (lookahead == 't') ADVANCE(115);
      if (lookahead == 'u') ADVANCE(144);
      if (lookahead == 'x') ADVANCE(533);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(585);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(463);
      if (lookahead == ',') ADVANCE(461);
      if (lookahead == '/') ADVANCE(412);
      if (lookahead == '[') ADVANCE(460);
      if (lookahead == ']') ADVANCE(462);
      if (lookahead == 'a') ADVANCE(480);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(487);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(491);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(463);
      if (lookahead == '<') ADVANCE(582);
      if (lookahead == '>') ADVANCE(580);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(586);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(573);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(209);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(216);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(213);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(214);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(215);
      END_STATE();
    case 17:
      if (lookahead == '1') ADVANCE(566);
      if (lookahead == '2') ADVANCE(23);
      END_STATE();
    case 18:
      if (lookahead == '2') ADVANCE(450);
      END_STATE();
    case 19:
      if (lookahead == '3') ADVANCE(447);
      END_STATE();
    case 20:
      if (lookahead == '4') ADVANCE(15);
      if (lookahead == '6') ADVANCE(16);
      END_STATE();
    case 21:
      if (lookahead == '5') ADVANCE(451);
      END_STATE();
    case 22:
      if (lookahead == '5') ADVANCE(565);
      END_STATE();
    case 23:
      if (lookahead == '5') ADVANCE(24);
      END_STATE();
    case 24:
      if (lookahead == '6') ADVANCE(567);
      END_STATE();
    case 25:
      if (lookahead == '6') ADVANCE(11);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(529);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(535);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(507);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(504);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(506);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(558);
      END_STATE();
    case 32:
      if (lookahead == ':') ADVANCE(534);
      END_STATE();
    case 33:
      if (lookahead == ':') ADVANCE(505);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(532);
      END_STATE();
    case 35:
      if (lookahead == ':') ADVANCE(513);
      END_STATE();
    case 36:
      if (lookahead == ':') ADVANCE(561);
      if (lookahead == 'x') ADVANCE(197);
      END_STATE();
    case 37:
      if (lookahead == ':') ADVANCE(556);
      END_STATE();
    case 38:
      if (lookahead == ':') ADVANCE(548);
      END_STATE();
    case 39:
      if (lookahead == ':') ADVANCE(557);
      END_STATE();
    case 40:
      if (lookahead == ':') ADVANCE(528);
      END_STATE();
    case 41:
      if (lookahead == ':') ADVANCE(541);
      END_STATE();
    case 42:
      if (lookahead == ':') ADVANCE(540);
      END_STATE();
    case 43:
      if (lookahead == ':') ADVANCE(514);
      END_STATE();
    case 44:
      if (lookahead == ':') ADVANCE(551);
      END_STATE();
    case 45:
      if (lookahead == ':') ADVANCE(512);
      END_STATE();
    case 46:
      if (lookahead == ':') ADVANCE(536);
      END_STATE();
    case 47:
      if (lookahead == ':') ADVANCE(553);
      END_STATE();
    case 48:
      if (lookahead == ':') ADVANCE(546);
      END_STATE();
    case 49:
      if (lookahead == ':') ADVANCE(542);
      END_STATE();
    case 50:
      if (lookahead == ':') ADVANCE(560);
      END_STATE();
    case 51:
      if (lookahead == ':') ADVANCE(537);
      END_STATE();
    case 52:
      if (lookahead == ':') ADVANCE(552);
      END_STATE();
    case 53:
      if (lookahead == ':') ADVANCE(530);
      END_STATE();
    case 54:
      if (lookahead == ':') ADVANCE(543);
      END_STATE();
    case 55:
      if (lookahead == ':') ADVANCE(525);
      END_STATE();
    case 56:
      if (lookahead == ':') ADVANCE(554);
      END_STATE();
    case 57:
      if (lookahead == ':') ADVANCE(511);
      END_STATE();
    case 58:
      if (lookahead == ':') ADVANCE(510);
      END_STATE();
    case 59:
      if (lookahead == ':') ADVANCE(508);
      END_STATE();
    case 60:
      if (lookahead == ':') ADVANCE(568);
      END_STATE();
    case 61:
      if (lookahead == ':') ADVANCE(509);
      END_STATE();
    case 62:
      if (lookahead == ':') ADVANCE(531);
      END_STATE();
    case 63:
      if (lookahead == ':') ADVANCE(545);
      END_STATE();
    case 64:
      if (lookahead == ';') ADVANCE(502);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(64)
      END_STATE();
    case 65:
      if (lookahead == '<') ADVANCE(582);
      if (lookahead == '>') ADVANCE(580);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(65)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(585);
      END_STATE();
    case 66:
      if (lookahead == '>') ADVANCE(499);
      END_STATE();
    case 67:
      if (lookahead == '>') ADVANCE(500);
      END_STATE();
    case 68:
      if (lookahead == '_') ADVANCE(248);
      if (lookahead == 's') ADVANCE(34);
      END_STATE();
    case 69:
      if (lookahead == '_') ADVANCE(233);
      if (lookahead == 'v') ADVANCE(25);
      END_STATE();
    case 70:
      if (lookahead == '_') ADVANCE(401);
      END_STATE();
    case 71:
      if (lookahead == '_') ADVANCE(145);
      END_STATE();
    case 72:
      if (lookahead == '_') ADVANCE(299);
      if (lookahead == 'o') ADVANCE(298);
      if (lookahead == 'v') ADVANCE(20);
      END_STATE();
    case 73:
      if (lookahead == '_') ADVANCE(403);
      END_STATE();
    case 74:
      if (lookahead == 'a') ADVANCE(246);
      if (lookahead == 'e') ADVANCE(104);
      if (lookahead == 'i') ADVANCE(135);
      if (lookahead == 'm') ADVANCE(100);
      if (lookahead == 'n') ADVANCE(250);
      if (lookahead == 's') ADVANCE(204);
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 75:
      if (lookahead == 'a') ADVANCE(246);
      if (lookahead == 'e') ADVANCE(104);
      if (lookahead == 'i') ADVANCE(134);
      if (lookahead == 's') ADVANCE(326);
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 76:
      if (lookahead == 'a') ADVANCE(17);
      END_STATE();
    case 77:
      if (lookahead == 'a') ADVANCE(200);
      END_STATE();
    case 78:
      if (lookahead == 'a') ADVANCE(260);
      END_STATE();
    case 79:
      if (lookahead == 'a') ADVANCE(320);
      if (lookahead == 'c') ADVANCE(278);
      if (lookahead == 'f') ADVANCE(379);
      if (lookahead == 'l') ADVANCE(335);
      if (lookahead == 'o') ADVANCE(68);
      if (lookahead == 's') ADVANCE(518);
      if (lookahead == 't') ADVANCE(244);
      END_STATE();
    case 80:
      if (lookahead == 'a') ADVANCE(320);
      if (lookahead == 'c') ADVANCE(295);
      if (lookahead == 'o') ADVANCE(68);
      if (lookahead == 's') ADVANCE(518);
      if (lookahead == 't') ADVANCE(244);
      END_STATE();
    case 81:
      if (lookahead == 'a') ADVANCE(343);
      if (lookahead == 'c') ADVANCE(321);
      if (lookahead == 'r') ADVANCE(159);
      END_STATE();
    case 82:
      if (lookahead == 'a') ADVANCE(351);
      END_STATE();
    case 83:
      if (lookahead == 'a') ADVANCE(120);
      END_STATE();
    case 84:
      if (lookahead == 'a') ADVANCE(373);
      END_STATE();
    case 85:
      if (lookahead == 'a') ADVANCE(113);
      END_STATE();
    case 86:
      if (lookahead == 'a') ADVANCE(285);
      END_STATE();
    case 87:
      if (lookahead == 'a') ADVANCE(355);
      if (lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 88:
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 89:
      if (lookahead == 'a') ADVANCE(392);
      END_STATE();
    case 90:
      if (lookahead == 'a') ADVANCE(332);
      if (lookahead == 'r') ADVANCE(230);
      END_STATE();
    case 91:
      if (lookahead == 'a') ADVANCE(96);
      END_STATE();
    case 92:
      if (lookahead == 'a') ADVANCE(344);
      END_STATE();
    case 93:
      if (lookahead == 'a') ADVANCE(114);
      END_STATE();
    case 94:
      if (lookahead == 'a') ADVANCE(375);
      END_STATE();
    case 95:
      if (lookahead == 'a') ADVANCE(377);
      END_STATE();
    case 96:
      if (lookahead == 'a') ADVANCE(384);
      END_STATE();
    case 97:
      if (lookahead == 'a') ADVANCE(147);
      END_STATE();
    case 98:
      if (lookahead == 'b') ADVANCE(21);
      END_STATE();
    case 99:
      if (lookahead == 'b') ADVANCE(454);
      END_STATE();
    case 100:
      if (lookahead == 'b') ADVANCE(440);
      if (lookahead == 't') ADVANCE(286);
      END_STATE();
    case 101:
      if (lookahead == 'b') ADVANCE(395);
      END_STATE();
    case 102:
      if (lookahead == 'b') ADVANCE(236);
      if (lookahead == 'o') ADVANCE(199);
      END_STATE();
    case 103:
      if (lookahead == 'c') ADVANCE(249);
      if (lookahead == 'd') ADVANCE(26);
      if (lookahead == 'k') ADVANCE(148);
      if (lookahead == 'm') ADVANCE(86);
      if (lookahead == 'p') ADVANCE(436);
      if (lookahead == 's') ADVANCE(129);
      if (lookahead == 't') ADVANCE(407);
      END_STATE();
    case 104:
      if (lookahead == 'c') ADVANCE(519);
      if (lookahead == 'q') ADVANCE(32);
      END_STATE();
    case 105:
      if (lookahead == 'c') ADVANCE(520);
      END_STATE();
    case 106:
      if (lookahead == 'c') ADVANCE(442);
      END_STATE();
    case 107:
      if (lookahead == 'c') ADVANCE(426);
      END_STATE();
    case 108:
      if (lookahead == 'c') ADVANCE(238);
      if (lookahead == 'l') ADVANCE(164);
      if (lookahead == 'n') ADVANCE(405);
      END_STATE();
    case 109:
      if (lookahead == 'c') ADVANCE(31);
      END_STATE();
    case 110:
      if (lookahead == 'c') ADVANCE(272);
      END_STATE();
    case 111:
      if (lookahead == 'c') ADVANCE(280);
      END_STATE();
    case 112:
      if (lookahead == 'c') ADVANCE(361);
      END_STATE();
    case 113:
      if (lookahead == 'c') ADVANCE(155);
      END_STATE();
    case 114:
      if (lookahead == 'c') ADVANCE(156);
      END_STATE();
    case 115:
      if (lookahead == 'c') ADVANCE(291);
      if (lookahead == 'f') ADVANCE(379);
      if (lookahead == 'l') ADVANCE(335);
      END_STATE();
    case 116:
      if (lookahead == 'c') ADVANCE(92);
      if (lookahead == 'p') ADVANCE(517);
      END_STATE();
    case 117:
      if (lookahead == 'c') ADVANCE(251);
      if (lookahead == 'd') ADVANCE(26);
      if (lookahead == 'p') ADVANCE(72);
      if (lookahead == 's') ADVANCE(129);
      if (lookahead == 't') ADVANCE(407);
      END_STATE();
    case 118:
      if (lookahead == 'c') ADVANCE(252);
      if (lookahead == 'k') ADVANCE(148);
      if (lookahead == 'm') ADVANCE(86);
      if (lookahead == 'p') ADVANCE(435);
      END_STATE();
    case 119:
      if (lookahead == 'c') ADVANCE(174);
      if (lookahead == 'h') ADVANCE(111);
      if (lookahead == 'n') ADVANCE(273);
      END_STATE();
    case 120:
      if (lookahead == 'c') ADVANCE(175);
      END_STATE();
    case 121:
      if (lookahead == 'c') ADVANCE(177);
      END_STATE();
    case 122:
      if (lookahead == 'c') ADVANCE(179);
      END_STATE();
    case 123:
      if (lookahead == 'd') ADVANCE(523);
      END_STATE();
    case 124:
      if (lookahead == 'd') ADVANCE(22);
      END_STATE();
    case 125:
      if (lookahead == 'd') ADVANCE(276);
      if (lookahead == 'e') ADVANCE(195);
      if (lookahead == 'f') ADVANCE(99);
      if (lookahead == 'p') ADVANCE(109);
      if (lookahead == 'r') ADVANCE(515);
      END_STATE();
    case 126:
      if (lookahead == 'd') ADVANCE(276);
      if (lookahead == 'f') ADVANCE(99);
      END_STATE();
    case 127:
      if (lookahead == 'd') ADVANCE(28);
      END_STATE();
    case 128:
      if (lookahead == 'd') ADVANCE(101);
      END_STATE();
    case 129:
      if (lookahead == 'd') ADVANCE(94);
      END_STATE();
    case 130:
      if (lookahead == 'd') ADVANCE(263);
      END_STATE();
    case 131:
      if (lookahead == 'd') ADVANCE(279);
      if (lookahead == 'r') ADVANCE(241);
      END_STATE();
    case 132:
      if (lookahead == 'd') ADVANCE(336);
      END_STATE();
    case 133:
      if (lookahead == 'd') ADVANCE(336);
      if (lookahead == 'i') ADVANCE(282);
      END_STATE();
    case 134:
      if (lookahead == 'd') ADVANCE(33);
      END_STATE();
    case 135:
      if (lookahead == 'd') ADVANCE(33);
      if (lookahead == 'p') ADVANCE(458);
      END_STATE();
    case 136:
      if (lookahead == 'd') ADVANCE(313);
      END_STATE();
    case 137:
      if (lookahead == 'd') ADVANCE(314);
      END_STATE();
    case 138:
      if (lookahead == 'd') ADVANCE(315);
      END_STATE();
    case 139:
      if (lookahead == 'd') ADVANCE(316);
      END_STATE();
    case 140:
      if (lookahead == 'd') ADVANCE(154);
      END_STATE();
    case 141:
      if (lookahead == 'd') ADVANCE(318);
      END_STATE();
    case 142:
      if (lookahead == 'd') ADVANCE(49);
      END_STATE();
    case 143:
      if (lookahead == 'd') ADVANCE(308);
      if (lookahead == 'r') ADVANCE(241);
      END_STATE();
    case 144:
      if (lookahead == 'd') ADVANCE(292);
      END_STATE();
    case 145:
      if (lookahead == 'd') ADVANCE(165);
      END_STATE();
    case 146:
      if (lookahead == 'd') ADVANCE(170);
      END_STATE();
    case 147:
      if (lookahead == 'd') ADVANCE(95);
      END_STATE();
    case 148:
      if (lookahead == 'e') ADVANCE(397);
      END_STATE();
    case 149:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 150:
      if (lookahead == 'e') ADVANCE(258);
      END_STATE();
    case 151:
      if (lookahead == 'e') ADVANCE(547);
      END_STATE();
    case 152:
      if (lookahead == 'e') ADVANCE(309);
      END_STATE();
    case 153:
      if (lookahead == 'e') ADVANCE(555);
      END_STATE();
    case 154:
      if (lookahead == 'e') ADVANCE(569);
      END_STATE();
    case 155:
      if (lookahead == 'e') ADVANCE(563);
      END_STATE();
    case 156:
      if (lookahead == 'e') ADVANCE(564);
      END_STATE();
    case 157:
      if (lookahead == 'e') ADVANCE(196);
      if (lookahead == 'p') ADVANCE(109);
      if (lookahead == 'r') ADVANCE(515);
      END_STATE();
    case 158:
      if (lookahead == 'e') ADVANCE(264);
      if (lookahead == 'i') ADVANCE(127);
      END_STATE();
    case 159:
      if (lookahead == 'e') ADVANCE(192);
      if (lookahead == 'i') ADVANCE(267);
      END_STATE();
    case 160:
      if (lookahead == 'e') ADVANCE(366);
      if (lookahead == 'o') ADVANCE(128);
      if (lookahead == 's') ADVANCE(201);
      END_STATE();
    case 161:
      if (lookahead == 'e') ADVANCE(366);
      if (lookahead == 's') ADVANCE(201);
      END_STATE();
    case 162:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 163:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 164:
      if (lookahead == 'e') ADVANCE(324);
      END_STATE();
    case 165:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 166:
      if (lookahead == 'e') ADVANCE(380);
      END_STATE();
    case 167:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 168:
      if (lookahead == 'e') ADVANCE(348);
      END_STATE();
    case 169:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 170:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 171:
      if (lookahead == 'e') ADVANCE(317);
      END_STATE();
    case 172:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 173:
      if (lookahead == 'e') ADVANCE(322);
      END_STATE();
    case 174:
      if (lookahead == 'e') ADVANCE(331);
      END_STATE();
    case 175:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 176:
      if (lookahead == 'e') ADVANCE(296);
      if (lookahead == 'i') ADVANCE(352);
      if (lookahead == 'o') ADVANCE(390);
      if (lookahead == 'r') ADVANCE(266);
      if (lookahead == 's') ADVANCE(235);
      END_STATE();
    case 177:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 178:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 179:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 180:
      if (lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 181:
      if (lookahead == 'e') ADVANCE(381);
      END_STATE();
    case 182:
      if (lookahead == 'e') ADVANCE(231);
      END_STATE();
    case 183:
      if (lookahead == 'e') ADVANCE(345);
      END_STATE();
    case 184:
      if (lookahead == 'e') ADVANCE(330);
      END_STATE();
    case 185:
      if (lookahead == 'e') ADVANCE(385);
      END_STATE();
    case 186:
      if (lookahead == 'e') ADVANCE(354);
      END_STATE();
    case 187:
      if (lookahead == 'e') ADVANCE(261);
      END_STATE();
    case 188:
      if (lookahead == 'f') ADVANCE(193);
      END_STATE();
    case 189:
      if (lookahead == 'f') ADVANCE(193);
      if (lookahead == 'n') ADVANCE(242);
      END_STATE();
    case 190:
      if (lookahead == 'f') ADVANCE(334);
      if (lookahead == 'o') ADVANCE(116);
      if (lookahead == 't') ADVANCE(275);
      END_STATE();
    case 191:
      if (lookahead == 'f') ADVANCE(334);
      if (lookahead == 't') ADVANCE(275);
      END_STATE();
    case 192:
      if (lookahead == 'f') ADVANCE(223);
      END_STATE();
    case 193:
      if (lookahead == 'f') ADVANCE(341);
      END_STATE();
    case 194:
      if (lookahead == 'f') ADVANCE(220);
      END_STATE();
    case 195:
      if (lookahead == 'f') ADVANCE(184);
      if (lookahead == 'j') ADVANCE(163);
      if (lookahead == 'l') ADVANCE(84);
      if (lookahead == 'p') ADVANCE(243);
      if (lookahead == 'v') ADVANCE(30);
      END_STATE();
    case 196:
      if (lookahead == 'f') ADVANCE(184);
      if (lookahead == 'j') ADVANCE(163);
      if (lookahead == 'p') ADVANCE(243);
      if (lookahead == 'v') ADVANCE(30);
      END_STATE();
    case 197:
      if (lookahead == 'f') ADVANCE(269);
      END_STATE();
    case 198:
      if (lookahead == 'f') ADVANCE(357);
      END_STATE();
    case 199:
      if (lookahead == 'f') ADVANCE(198);
      END_STATE();
    case 200:
      if (lookahead == 'g') ADVANCE(102);
      END_STATE();
    case 201:
      if (lookahead == 'g') ADVANCE(29);
      END_STATE();
    case 202:
      if (lookahead == 'g') ADVANCE(181);
      END_STATE();
    case 203:
      if (lookahead == 'h') ADVANCE(443);
      END_STATE();
    case 204:
      if (lookahead == 'h') ADVANCE(443);
      if (lookahead == 'r') ADVANCE(312);
      END_STATE();
    case 205:
      if (lookahead == 'h') ADVANCE(550);
      END_STATE();
    case 206:
      if (lookahead == 'h') ADVANCE(428);
      END_STATE();
    case 207:
      if (lookahead == 'h') ADVANCE(549);
      END_STATE();
    case 208:
      if (lookahead == 'h') ADVANCE(222);
      END_STATE();
    case 209:
      if (lookahead == 'h') ADVANCE(136);
      if (lookahead == 'm') ADVANCE(353);
      END_STATE();
    case 210:
      if (lookahead == 'h') ADVANCE(234);
      END_STATE();
    case 211:
      if (lookahead == 'h') ADVANCE(76);
      END_STATE();
    case 212:
      if (lookahead == 'h') ADVANCE(38);
      END_STATE();
    case 213:
      if (lookahead == 'h') ADVANCE(137);
      END_STATE();
    case 214:
      if (lookahead == 'h') ADVANCE(138);
      END_STATE();
    case 215:
      if (lookahead == 'h') ADVANCE(139);
      END_STATE();
    case 216:
      if (lookahead == 'h') ADVANCE(141);
      if (lookahead == 'm') ADVANCE(364);
      END_STATE();
    case 217:
      if (lookahead == 'h') ADVANCE(237);
      END_STATE();
    case 218:
      if (lookahead == 'i') ADVANCE(255);
      END_STATE();
    case 219:
      if (lookahead == 'i') ADVANCE(410);
      END_STATE();
    case 220:
      if (lookahead == 'i') ADVANCE(404);
      END_STATE();
    case 221:
      if (lookahead == 'i') ADVANCE(398);
      END_STATE();
    case 222:
      if (lookahead == 'i') ADVANCE(257);
      END_STATE();
    case 223:
      if (lookahead == 'i') ADVANCE(245);
      END_STATE();
    case 224:
      if (lookahead == 'i') ADVANCE(123);
      END_STATE();
    case 225:
      if (lookahead == 'i') ADVANCE(282);
      END_STATE();
    case 226:
      if (lookahead == 'i') ADVANCE(367);
      END_STATE();
    case 227:
      if (lookahead == 'i') ADVANCE(365);
      END_STATE();
    case 228:
      if (lookahead == 'i') ADVANCE(372);
      END_STATE();
    case 229:
      if (lookahead == 'i') ADVANCE(302);
      END_STATE();
    case 230:
      if (lookahead == 'i') ADVANCE(294);
      END_STATE();
    case 231:
      if (lookahead == 'i') ADVANCE(289);
      END_STATE();
    case 232:
      if (lookahead == 'i') ADVANCE(277);
      if (lookahead == 'm') ADVANCE(100);
      if (lookahead == 'n') ADVANCE(250);
      if (lookahead == 's') ADVANCE(203);
      END_STATE();
    case 233:
      if (lookahead == 'i') ADVANCE(142);
      if (lookahead == 's') ADVANCE(152);
      END_STATE();
    case 234:
      if (lookahead == 'i') ADVANCE(378);
      END_STATE();
    case 235:
      if (lookahead == 'i') ADVANCE(411);
      END_STATE();
    case 236:
      if (lookahead == 'i') ADVANCE(388);
      END_STATE();
    case 237:
      if (lookahead == 'i') ADVANCE(393);
      END_STATE();
    case 238:
      if (lookahead == 'k') ADVANCE(27);
      END_STATE();
    case 239:
      if (lookahead == 'l') ADVANCE(82);
      if (lookahead == 'o') ADVANCE(247);
      END_STATE();
    case 240:
      if (lookahead == 'l') ADVANCE(516);
      END_STATE();
    case 241:
      if (lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 242:
      if (lookahead == 'l') ADVANCE(406);
      END_STATE();
    case 243:
      if (lookahead == 'l') ADVANCE(83);
      END_STATE();
    case 244:
      if (lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 245:
      if (lookahead == 'l') ADVANCE(387);
      END_STATE();
    case 246:
      if (lookahead == 'm') ADVANCE(182);
      if (lookahead == 't') ADVANCE(224);
      END_STATE();
    case 247:
      if (lookahead == 'm') ADVANCE(303);
      if (lookahead == 'n') ADVANCE(370);
      END_STATE();
    case 248:
      if (lookahead == 'm') ADVANCE(124);
      if (lookahead == 's') ADVANCE(211);
      END_STATE();
    case 249:
      if (lookahead == 'm') ADVANCE(284);
      if (lookahead == 'o') ADVANCE(146);
      END_STATE();
    case 250:
      if (lookahead == 'm') ADVANCE(287);
      END_STATE();
    case 251:
      if (lookahead == 'm') ADVANCE(290);
      if (lookahead == 'o') ADVANCE(146);
      END_STATE();
    case 252:
      if (lookahead == 'm') ADVANCE(293);
      END_STATE();
    case 253:
      if (lookahead == 'm') ADVANCE(60);
      END_STATE();
    case 254:
      if (lookahead == 'n') ADVANCE(570);
      END_STATE();
    case 255:
      if (lookahead == 'n') ADVANCE(130);
      if (lookahead == 't') ADVANCE(208);
      END_STATE();
    case 256:
      if (lookahead == 'n') ADVANCE(132);
      if (lookahead == 'o') ADVANCE(240);
      if (lookahead == 's') ADVANCE(162);
      END_STATE();
    case 257:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 258:
      if (lookahead == 'n') ADVANCE(383);
      END_STATE();
    case 259:
      if (lookahead == 'n') ADVANCE(225);
      END_STATE();
    case 260:
      if (lookahead == 'n') ADVANCE(121);
      END_STATE();
    case 261:
      if (lookahead == 'n') ADVANCE(122);
      END_STATE();
    case 262:
      if (lookahead == 'o') ADVANCE(116);
      END_STATE();
    case 263:
      if (lookahead == 'o') ADVANCE(400);
      END_STATE();
    case 264:
      if (lookahead == 'o') ADVANCE(229);
      END_STATE();
    case 265:
      if (lookahead == 'o') ADVANCE(128);
      END_STATE();
    case 266:
      if (lookahead == 'o') ADVANCE(281);
      END_STATE();
    case 267:
      if (lookahead == 'o') ADVANCE(333);
      END_STATE();
    case 268:
      if (lookahead == 'o') ADVANCE(368);
      END_STATE();
    case 269:
      if (lookahead == 'o') ADVANCE(319);
      END_STATE();
    case 270:
      if (lookahead == 'o') ADVANCE(369);
      END_STATE();
    case 271:
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 272:
      if (lookahead == 'o') ADVANCE(140);
      END_STATE();
    case 273:
      if (lookahead == 'p') ADVANCE(19);
      if (lookahead == 's') ADVANCE(441);
      END_STATE();
    case 274:
      if (lookahead == 'p') ADVANCE(438);
      END_STATE();
    case 275:
      if (lookahead == 'p') ADVANCE(452);
      END_STATE();
    case 276:
      if (lookahead == 'p') ADVANCE(455);
      END_STATE();
    case 277:
      if (lookahead == 'p') ADVANCE(458);
      END_STATE();
    case 278:
      if (lookahead == 'p') ADVANCE(430);
      END_STATE();
    case 279:
      if (lookahead == 'p') ADVANCE(432);
      END_STATE();
    case 280:
      if (lookahead == 'p') ADVANCE(453);
      END_STATE();
    case 281:
      if (lookahead == 'p') ADVANCE(424);
      END_STATE();
    case 282:
      if (lookahead == 'p') ADVANCE(448);
      END_STATE();
    case 283:
      if (lookahead == 'p') ADVANCE(437);
      END_STATE();
    case 284:
      if (lookahead == 'p') ADVANCE(434);
      END_STATE();
    case 285:
      if (lookahead == 'p') ADVANCE(445);
      END_STATE();
    case 286:
      if (lookahead == 'p') ADVANCE(444);
      END_STATE();
    case 287:
      if (lookahead == 'p') ADVANCE(456);
      END_STATE();
    case 288:
      if (lookahead == 'p') ADVANCE(457);
      END_STATE();
    case 289:
      if (lookahead == 'p') ADVANCE(524);
      END_STATE();
    case 290:
      if (lookahead == 'p') ADVANCE(69);
      END_STATE();
    case 291:
      if (lookahead == 'p') ADVANCE(429);
      END_STATE();
    case 292:
      if (lookahead == 'p') ADVANCE(431);
      END_STATE();
    case 293:
      if (lookahead == 'p') ADVANCE(433);
      END_STATE();
    case 294:
      if (lookahead == 'p') ADVANCE(70);
      END_STATE();
    case 295:
      if (lookahead == 'p') ADVANCE(9);
      END_STATE();
    case 296:
      if (lookahead == 'p') ADVANCE(363);
      END_STATE();
    case 297:
      if (lookahead == 'p') ADVANCE(106);
      END_STATE();
    case 298:
      if (lookahead == 'p') ADVANCE(374);
      END_STATE();
    case 299:
      if (lookahead == 'p') ADVANCE(323);
      END_STATE();
    case 300:
      if (lookahead == 'p') ADVANCE(89);
      END_STATE();
    case 301:
      if (lookahead == 'p') ADVANCE(85);
      END_STATE();
    case 302:
      if (lookahead == 'p') ADVANCE(40);
      END_STATE();
    case 303:
      if (lookahead == 'p') ADVANCE(328);
      END_STATE();
    case 304:
      if (lookahead == 'p') ADVANCE(93);
      END_STATE();
    case 305:
      if (lookahead == 'p') ADVANCE(329);
      END_STATE();
    case 306:
      if (lookahead == 'p') ADVANCE(172);
      END_STATE();
    case 307:
      if (lookahead == 'p') ADVANCE(178);
      END_STATE();
    case 308:
      if (lookahead == 'p') ADVANCE(13);
      END_STATE();
    case 309:
      if (lookahead == 'q') ADVANCE(54);
      END_STATE();
    case 310:
      if (lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 311:
      if (lookahead == 'r') ADVANCE(521);
      END_STATE();
    case 312:
      if (lookahead == 'r') ADVANCE(522);
      END_STATE();
    case 313:
      if (lookahead == 'r') ADVANCE(538);
      END_STATE();
    case 314:
      if (lookahead == 'r') ADVANCE(539);
      END_STATE();
    case 315:
      if (lookahead == 'r') ADVANCE(526);
      END_STATE();
    case 316:
      if (lookahead == 'r') ADVANCE(527);
      END_STATE();
    case 317:
      if (lookahead == 'r') ADVANCE(572);
      END_STATE();
    case 318:
      if (lookahead == 'r') ADVANCE(544);
      END_STATE();
    case 319:
      if (lookahead == 'r') ADVANCE(253);
      END_STATE();
    case 320:
      if (lookahead == 'r') ADVANCE(202);
      END_STATE();
    case 321:
      if (lookahead == 'r') ADVANCE(149);
      END_STATE();
    case 322:
      if (lookahead == 'r') ADVANCE(254);
      END_STATE();
    case 323:
      if (lookahead == 'r') ADVANCE(268);
      END_STATE();
    case 324:
      if (lookahead == 'r') ADVANCE(360);
      END_STATE();
    case 325:
      if (lookahead == 'r') ADVANCE(311);
      END_STATE();
    case 326:
      if (lookahead == 'r') ADVANCE(312);
      END_STATE();
    case 327:
      if (lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 328:
      if (lookahead == 'r') ADVANCE(183);
      END_STATE();
    case 329:
      if (lookahead == 'r') ADVANCE(180);
      END_STATE();
    case 330:
      if (lookahead == 'r') ADVANCE(187);
      END_STATE();
    case 331:
      if (lookahead == 'r') ADVANCE(297);
      END_STATE();
    case 332:
      if (lookahead == 'r') ADVANCE(391);
      END_STATE();
    case 333:
      if (lookahead == 'r') ADVANCE(227);
      END_STATE();
    case 334:
      if (lookahead == 's') ADVANCE(449);
      END_STATE();
    case 335:
      if (lookahead == 's') ADVANCE(439);
      END_STATE();
    case 336:
      if (lookahead == 's') ADVANCE(399);
      END_STATE();
    case 337:
      if (lookahead == 's') ADVANCE(423);
      END_STATE();
    case 338:
      if (lookahead == 's') ADVANCE(446);
      END_STATE();
    case 339:
      if (lookahead == 's') ADVANCE(325);
      END_STATE();
    case 340:
      if (lookahead == 's') ADVANCE(219);
      END_STATE();
    case 341:
      if (lookahead == 's') ADVANCE(166);
      END_STATE();
    case 342:
      if (lookahead == 's') ADVANCE(394);
      END_STATE();
    case 343:
      if (lookahead == 's') ADVANCE(337);
      END_STATE();
    case 344:
      if (lookahead == 's') ADVANCE(151);
      END_STATE();
    case 345:
      if (lookahead == 's') ADVANCE(358);
      END_STATE();
    case 346:
      if (lookahead == 's') ADVANCE(43);
      END_STATE();
    case 347:
      if (lookahead == 's') ADVANCE(362);
      END_STATE();
    case 348:
      if (lookahead == 's') ADVANCE(301);
      END_STATE();
    case 349:
      if (lookahead == 's') ADVANCE(51);
      END_STATE();
    case 350:
      if (lookahead == 's') ADVANCE(53);
      END_STATE();
    case 351:
      if (lookahead == 's') ADVANCE(342);
      END_STATE();
    case 352:
      if (lookahead == 's') ADVANCE(371);
      END_STATE();
    case 353:
      if (lookahead == 's') ADVANCE(349);
      END_STATE();
    case 354:
      if (lookahead == 's') ADVANCE(304);
      END_STATE();
    case 355:
      if (lookahead == 's') ADVANCE(382);
      END_STATE();
    case 356:
      if (lookahead == 's') ADVANCE(402);
      END_STATE();
    case 357:
      if (lookahead == 's') ADVANCE(185);
      END_STATE();
    case 358:
      if (lookahead == 's') ADVANCE(73);
      END_STATE();
    case 359:
      if (lookahead == 't') ADVANCE(274);
      END_STATE();
    case 360:
      if (lookahead == 't') ADVANCE(422);
      END_STATE();
    case 361:
      if (lookahead == 't') ADVANCE(425);
      END_STATE();
    case 362:
      if (lookahead == 't') ADVANCE(427);
      END_STATE();
    case 363:
      if (lookahead == 't') ADVANCE(212);
      END_STATE();
    case 364:
      if (lookahead == 't') ADVANCE(396);
      END_STATE();
    case 365:
      if (lookahead == 't') ADVANCE(408);
      END_STATE();
    case 366:
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 367:
      if (lookahead == 't') ADVANCE(205);
      END_STATE();
    case 368:
      if (lookahead == 't') ADVANCE(271);
      END_STATE();
    case 369:
      if (lookahead == 't') ADVANCE(206);
      END_STATE();
    case 370:
      if (lookahead == 't') ADVANCE(150);
      END_STATE();
    case 371:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 372:
      if (lookahead == 't') ADVANCE(207);
      END_STATE();
    case 373:
      if (lookahead == 't') ADVANCE(221);
      END_STATE();
    case 374:
      if (lookahead == 't') ADVANCE(346);
      END_STATE();
    case 375:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 376:
      if (lookahead == 't') ADVANCE(283);
      END_STATE();
    case 377:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 378:
      if (lookahead == 't') ADVANCE(168);
      END_STATE();
    case 379:
      if (lookahead == 't') ADVANCE(288);
      END_STATE();
    case 380:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 381:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 382:
      if (lookahead == 't') ADVANCE(300);
      END_STATE();
    case 383:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 384:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 385:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 386:
      if (lookahead == 't') ADVANCE(376);
      END_STATE();
    case 387:
      if (lookahead == 't') ADVANCE(171);
      END_STATE();
    case 388:
      if (lookahead == 't') ADVANCE(350);
      END_STATE();
    case 389:
      if (lookahead == 't') ADVANCE(173);
      END_STATE();
    case 390:
      if (lookahead == 't') ADVANCE(305);
      END_STATE();
    case 391:
      if (lookahead == 't') ADVANCE(356);
      END_STATE();
    case 392:
      if (lookahead == 't') ADVANCE(389);
      END_STATE();
    case 393:
      if (lookahead == 't') ADVANCE(186);
      END_STATE();
    case 394:
      if (lookahead == 't') ADVANCE(409);
      END_STATE();
    case 395:
      if (lookahead == 'u') ADVANCE(338);
      END_STATE();
    case 396:
      if (lookahead == 'u') ADVANCE(63);
      END_STATE();
    case 397:
      if (lookahead == 'v') ADVANCE(18);
      END_STATE();
    case 398:
      if (lookahead == 'v') ADVANCE(153);
      END_STATE();
    case 399:
      if (lookahead == 'w') ADVANCE(226);
      END_STATE();
    case 400:
      if (lookahead == 'w') ADVANCE(46);
      END_STATE();
    case 401:
      if (lookahead == 'w') ADVANCE(210);
      END_STATE();
    case 402:
      if (lookahead == 'w') ADVANCE(228);
      END_STATE();
    case 403:
      if (lookahead == 'w') ADVANCE(217);
      END_STATE();
    case 404:
      if (lookahead == 'x') ADVANCE(562);
      END_STATE();
    case 405:
      if (lookahead == 'y') ADVANCE(493);
      END_STATE();
    case 406:
      if (lookahead == 'y') ADVANCE(571);
      END_STATE();
    case 407:
      if (lookahead == 'y') ADVANCE(306);
      END_STATE();
    case 408:
      if (lookahead == 'y') ADVANCE(58);
      END_STATE();
    case 409:
      if (lookahead == 'y') ADVANCE(307);
      END_STATE();
    case 410:
      if (lookahead == 'z') ADVANCE(167);
      END_STATE();
    case 411:
      if (lookahead == 'z') ADVANCE(169);
      END_STATE();
    case 412:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(467);
      END_STATE();
    case 413:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 414:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(466);
      END_STATE();
    case 415:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(587);
      END_STATE();
    case 416:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 417:
      if (eof) ADVANCE(418);
      if (lookahead == '!') ADVANCE(463);
      if (lookahead == '#') ADVANCE(419);
      if (lookahead == '(') ADVANCE(501);
      if (lookahead == ')') ADVANCE(503);
      if (lookahead == ',') ADVANCE(461);
      if (lookahead == '-') ADVANCE(66);
      if (lookahead == '/') ADVANCE(412);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == '<') ADVANCE(67);
      if (lookahead == '[') ADVANCE(460);
      if (lookahead == ']') ADVANCE(462);
      if (lookahead == 'a') ADVANCE(108);
      if (lookahead == 'b') ADVANCE(340);
      if (lookahead == 'c') ADVANCE(239);
      if (lookahead == 'd') ADVANCE(176);
      if (lookahead == 'e') ADVANCE(256);
      if (lookahead == 'f') ADVANCE(87);
      if (lookahead == 'g') ADVANCE(158);
      if (lookahead == 'i') ADVANCE(117);
      if (lookahead == 'l') ADVANCE(339);
      if (lookahead == 'm') ADVANCE(161);
      if (lookahead == 'n') ADVANCE(262);
      if (lookahead == 'o') ADVANCE(188);
      if (lookahead == 'p') ADVANCE(81);
      if (lookahead == 'r') ADVANCE(157);
      if (lookahead == 's') ADVANCE(75);
      if (lookahead == 't') ADVANCE(80);
      if (lookahead == 'u') ADVANCE(143);
      if (lookahead == 'w') ADVANCE(218);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(417)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(497);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(421);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(421);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_alert);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_pass);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_drop);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_reject);
      if (lookahead == 'b') ADVANCE(270);
      if (lookahead == 'd') ADVANCE(347);
      if (lookahead == 's') ADVANCE(327);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_rejectsrc);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_rejectdst);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_rejectboth);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_tcp);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_tcp);
      if (lookahead == '.') ADVANCE(209);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_udp);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_udp);
      if (lookahead == '.') ADVANCE(213);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_icmp);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_icmp);
      if (lookahead == '_') ADVANCE(233);
      if (lookahead == 'v') ADVANCE(25);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_ip);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_ip);
      if (lookahead == '_') ADVANCE(299);
      if (lookahead == 'o') ADVANCE(298);
      if (lookahead == 'v') ADVANCE(20);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_http);
      if (lookahead == '2') ADVANCE(459);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_ftp);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_tls);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_smb);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_dns);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_dcerpc);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_ssh);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_smtp);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_imap);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_modbus);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_dnp3);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_enip);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_nfs);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_ikev2);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_krb5);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_ntp);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_dhcp);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_rfb);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_rdp);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_snmp);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_tftp);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_sip);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_http2);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_negation);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(465);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_ipv4_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(466);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_ipv4_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(467);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym__ipv6_octet);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == '.') ADVANCE(413);
      if (lookahead == ':') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(472);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(473);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == '.') ADVANCE(413);
      if (lookahead == ':') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(471);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(489);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == '.') ADVANCE(413);
      if (lookahead == ':') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(469);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(490);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == '.') ADVANCE(413);
      if (lookahead == ':') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(492);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(492);
      if (lookahead == 'a') ADVANCE(485);
      if (lookahead == 'r') ADVANCE(77);
      if (lookahead == 't') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(489);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(492);
      if (lookahead == 'c') ADVANCE(478);
      if (lookahead == 'l') ADVANCE(164);
      if (lookahead == 'n') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(489);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(492);
      if (lookahead == 'c') ADVANCE(477);
      if (lookahead == 'e') ADVANCE(482);
      if (lookahead == 'h') ADVANCE(111);
      if (lookahead == 'i') ADVANCE(352);
      if (lookahead == 'n') ADVANCE(273);
      if (lookahead == 'o') ADVANCE(390);
      if (lookahead == 'r') ADVANCE(266);
      if (lookahead == 's') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(489);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(492);
      if (lookahead == 'e') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(490);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(492);
      if (lookahead == 'k') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(490);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(492);
      if (lookahead == 'l') ADVANCE(82);
      if (lookahead == 'o') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(489);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(492);
      if (lookahead == 'n') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(489);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(492);
      if (lookahead == 'n') ADVANCE(133);
      if (lookahead == 'o') ADVANCE(240);
      if (lookahead == 's') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(489);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(492);
      if (lookahead == 'p') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(490);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(492);
      if (lookahead == 'r') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(473);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(492);
      if (lookahead == 's') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(489);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(492);
      if (lookahead == 's') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(490);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(473);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(473);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(489);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(490);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(490);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(473);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(489);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(468);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_any);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym_port_token1);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym_port_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(494);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym_port_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(495);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym_port_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(496);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_msg_COLON);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_sid_COLON);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_rev_COLON);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_gid_COLON);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_classtype_COLON);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_reference_COLON);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_priority_COLON);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_metadata_COLON);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_target_COLON);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_ttl_COLON);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_ipopts_COLON);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_rr);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_eol);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_nop);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_ts);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_sec);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_esec);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_lsrr);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_ssrr);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_satid);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_sameip);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_ip_proto_COLON);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_ipv4_hdr);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_ipv6_hdr);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_geoip_COLON);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_id_COLON);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_fragbits_COLON);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_fragoffset_COLON);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_tos_COLON);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_seq_COLON);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_ack_COLON);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_window_COLON);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_tcp_DOTmss_COLON);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_tcp_hdr);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_udp_hdr);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_itype_COLON);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_icode_COLON);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_icmp_id_COLON);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_icmp_seq_COLON);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_icmpv6_hdr);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_icmpv6_DOTmtu_COLON);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_content_COLON);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_nocase);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_depth_COLON);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_startswith);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_endswith);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_offset_COLON);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_distance_COLON);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_within_COLON);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_isdataat_COLON);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_relative);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_bsize_COLON);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_dsize_COLON);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_rpc_COLON);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_replace_COLON);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(anon_sym_pcre_COLON);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_dotprefix);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_strip_whitespace);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_compress_whitespace);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_to_md5);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_to_sha1);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_to_sha256);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym_pcrexform_COLON);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_url_decode);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_fastpattern);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_only);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_prefilter);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(574);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(575);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(575);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '<') ADVANCE(584);
      if (lookahead == '>') ADVANCE(581);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(578);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != ';') ADVANCE(579);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != ';') ADVANCE(579);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(578);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != ';') ADVANCE(579);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != ';') ADVANCE(579);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != ';') ADVANCE(579);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '>') ADVANCE(500);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != ';') ADVANCE(579);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym_digit_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(585);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym_digit_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(415);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_decimal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(587);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 417},
  [2] = {.lex_state = 417},
  [3] = {.lex_state = 417},
  [4] = {.lex_state = 417},
  [5] = {.lex_state = 417},
  [6] = {.lex_state = 417},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 417},
  [10] = {.lex_state = 417},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 417},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 417},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 417},
  [21] = {.lex_state = 417},
  [22] = {.lex_state = 417},
  [23] = {.lex_state = 417},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 417},
  [26] = {.lex_state = 417},
  [27] = {.lex_state = 417},
  [28] = {.lex_state = 417},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 417},
  [31] = {.lex_state = 417},
  [32] = {.lex_state = 417},
  [33] = {.lex_state = 417},
  [34] = {.lex_state = 417},
  [35] = {.lex_state = 417},
  [36] = {.lex_state = 417},
  [37] = {.lex_state = 417},
  [38] = {.lex_state = 417},
  [39] = {.lex_state = 5},
  [40] = {.lex_state = 417},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 7},
  [43] = {.lex_state = 417},
  [44] = {.lex_state = 417},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 417},
  [47] = {.lex_state = 7},
  [48] = {.lex_state = 5},
  [49] = {.lex_state = 417},
  [50] = {.lex_state = 417},
  [51] = {.lex_state = 417},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 417},
  [55] = {.lex_state = 417},
  [56] = {.lex_state = 5},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 417},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 5},
  [61] = {.lex_state = 5},
  [62] = {.lex_state = 5},
  [63] = {.lex_state = 5},
  [64] = {.lex_state = 5},
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 5},
  [68] = {.lex_state = 5},
  [69] = {.lex_state = 5},
  [70] = {.lex_state = 5},
  [71] = {.lex_state = 5},
  [72] = {.lex_state = 5},
  [73] = {.lex_state = 5},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 5},
  [76] = {.lex_state = 5},
  [77] = {.lex_state = 5},
  [78] = {.lex_state = 5},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 417},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 2},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 2},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 2},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 3},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 2},
  [101] = {.lex_state = 2},
  [102] = {.lex_state = 2},
  [103] = {.lex_state = 3},
  [104] = {.lex_state = 2},
  [105] = {.lex_state = 2},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 417},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 420},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 465},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 5},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_alert] = ACTIONS(1),
    [anon_sym_pass] = ACTIONS(1),
    [anon_sym_drop] = ACTIONS(1),
    [anon_sym_reject] = ACTIONS(1),
    [anon_sym_rejectsrc] = ACTIONS(1),
    [anon_sym_rejectdst] = ACTIONS(1),
    [anon_sym_rejectboth] = ACTIONS(1),
    [anon_sym_tcp] = ACTIONS(1),
    [anon_sym_udp] = ACTIONS(1),
    [anon_sym_icmp] = ACTIONS(1),
    [anon_sym_ip] = ACTIONS(1),
    [anon_sym_http] = ACTIONS(1),
    [anon_sym_ftp] = ACTIONS(1),
    [anon_sym_tls] = ACTIONS(1),
    [anon_sym_smb] = ACTIONS(1),
    [anon_sym_dns] = ACTIONS(1),
    [anon_sym_dcerpc] = ACTIONS(1),
    [anon_sym_ssh] = ACTIONS(1),
    [anon_sym_smtp] = ACTIONS(1),
    [anon_sym_imap] = ACTIONS(1),
    [anon_sym_modbus] = ACTIONS(1),
    [anon_sym_dnp3] = ACTIONS(1),
    [anon_sym_enip] = ACTIONS(1),
    [anon_sym_nfs] = ACTIONS(1),
    [anon_sym_ikev2] = ACTIONS(1),
    [anon_sym_krb5] = ACTIONS(1),
    [anon_sym_ntp] = ACTIONS(1),
    [anon_sym_dhcp] = ACTIONS(1),
    [anon_sym_rfb] = ACTIONS(1),
    [anon_sym_rdp] = ACTIONS(1),
    [anon_sym_snmp] = ACTIONS(1),
    [anon_sym_tftp] = ACTIONS(1),
    [anon_sym_sip] = ACTIONS(1),
    [anon_sym_http2] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_negation] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [aux_sym_ipv4_token1] = ACTIONS(1),
    [aux_sym_ipv4_token2] = ACTIONS(1),
    [sym__ipv6_octet] = ACTIONS(1),
    [anon_sym_any] = ACTIONS(1),
    [aux_sym_port_token1] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_LT_GT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_msg_COLON] = ACTIONS(1),
    [anon_sym_sid_COLON] = ACTIONS(1),
    [anon_sym_rev_COLON] = ACTIONS(1),
    [anon_sym_gid_COLON] = ACTIONS(1),
    [anon_sym_classtype_COLON] = ACTIONS(1),
    [anon_sym_reference_COLON] = ACTIONS(1),
    [anon_sym_priority_COLON] = ACTIONS(1),
    [anon_sym_metadata_COLON] = ACTIONS(1),
    [anon_sym_target_COLON] = ACTIONS(1),
    [anon_sym_ttl_COLON] = ACTIONS(1),
    [anon_sym_ipopts_COLON] = ACTIONS(1),
    [anon_sym_rr] = ACTIONS(1),
    [anon_sym_eol] = ACTIONS(1),
    [anon_sym_nop] = ACTIONS(1),
    [anon_sym_ts] = ACTIONS(1),
    [anon_sym_sec] = ACTIONS(1),
    [anon_sym_esec] = ACTIONS(1),
    [anon_sym_lsrr] = ACTIONS(1),
    [anon_sym_ssrr] = ACTIONS(1),
    [anon_sym_satid] = ACTIONS(1),
    [sym_sameip] = ACTIONS(1),
    [anon_sym_ip_proto_COLON] = ACTIONS(1),
    [sym_ipv4_hdr] = ACTIONS(1),
    [sym_ipv6_hdr] = ACTIONS(1),
    [anon_sym_geoip_COLON] = ACTIONS(1),
    [anon_sym_id_COLON] = ACTIONS(1),
    [anon_sym_fragbits_COLON] = ACTIONS(1),
    [anon_sym_fragoffset_COLON] = ACTIONS(1),
    [anon_sym_tos_COLON] = ACTIONS(1),
    [anon_sym_x] = ACTIONS(1),
    [anon_sym_seq_COLON] = ACTIONS(1),
    [anon_sym_ack_COLON] = ACTIONS(1),
    [anon_sym_window_COLON] = ACTIONS(1),
    [anon_sym_tcp_DOTmss_COLON] = ACTIONS(1),
    [sym_tcp_hdr] = ACTIONS(1),
    [sym_udp_hdr] = ACTIONS(1),
    [anon_sym_itype_COLON] = ACTIONS(1),
    [anon_sym_icode_COLON] = ACTIONS(1),
    [anon_sym_icmp_id_COLON] = ACTIONS(1),
    [anon_sym_icmp_seq_COLON] = ACTIONS(1),
    [sym_icmpv6_hdr] = ACTIONS(1),
    [anon_sym_icmpv6_DOTmtu_COLON] = ACTIONS(1),
    [anon_sym_content_COLON] = ACTIONS(1),
    [sym_nocase] = ACTIONS(1),
    [anon_sym_depth_COLON] = ACTIONS(1),
    [sym_startswith] = ACTIONS(1),
    [sym_endswith] = ACTIONS(1),
    [anon_sym_offset_COLON] = ACTIONS(1),
    [anon_sym_distance_COLON] = ACTIONS(1),
    [anon_sym_within_COLON] = ACTIONS(1),
    [anon_sym_isdataat_COLON] = ACTIONS(1),
    [anon_sym_relative] = ACTIONS(1),
    [anon_sym_bsize_COLON] = ACTIONS(1),
    [anon_sym_dsize_COLON] = ACTIONS(1),
    [anon_sym_rpc_COLON] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_replace_COLON] = ACTIONS(1),
    [anon_sym_pcre_COLON] = ACTIONS(1),
    [sym_dotprefix] = ACTIONS(1),
    [sym_strip_whitespace] = ACTIONS(1),
    [sym_compress_whitespace] = ACTIONS(1),
    [sym_to_md5] = ACTIONS(1),
    [sym_to_sha1] = ACTIONS(1),
    [sym_to_sha256] = ACTIONS(1),
    [anon_sym_pcrexform_COLON] = ACTIONS(1),
    [sym_url_decode] = ACTIONS(1),
    [anon_sym_fastpattern] = ACTIONS(1),
    [anon_sym_only] = ACTIONS(1),
    [sym_prefilter] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(177),
    [sym__lines] = STATE(9),
    [sym_comment] = STATE(9),
    [sym__rule] = STATE(9),
    [sym_action] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(5),
    [anon_sym_alert] = ACTIONS(7),
    [anon_sym_pass] = ACTIONS(7),
    [anon_sym_drop] = ACTIONS(7),
    [anon_sym_reject] = ACTIONS(9),
    [anon_sym_rejectsrc] = ACTIONS(7),
    [anon_sym_rejectdst] = ACTIONS(7),
    [anon_sym_rejectboth] = ACTIONS(7),
  },
  [2] = {
    [sym__opts] = STATE(148),
    [sym_msg] = STATE(148),
    [sym_sid] = STATE(148),
    [sym_rev] = STATE(148),
    [sym_gid] = STATE(148),
    [sym_classtype] = STATE(148),
    [sym_reference] = STATE(148),
    [sym_priority] = STATE(148),
    [sym_metadata] = STATE(148),
    [sym_target] = STATE(148),
    [sym_ttl] = STATE(148),
    [sym_ipopts] = STATE(148),
    [sym_ip_proto] = STATE(148),
    [sym_geoip] = STATE(148),
    [sym_id] = STATE(148),
    [sym_fragbits] = STATE(148),
    [sym_fragoffset] = STATE(148),
    [sym_tos] = STATE(148),
    [sym_seq] = STATE(148),
    [sym_ack] = STATE(148),
    [sym_window] = STATE(148),
    [sym_tcp_mss] = STATE(148),
    [sym_itype] = STATE(148),
    [sym_icode] = STATE(148),
    [sym_icmp_id] = STATE(148),
    [sym_icmp_seq] = STATE(148),
    [sym_icmpv6_mtu] = STATE(148),
    [sym_content] = STATE(148),
    [sym_depth] = STATE(148),
    [sym_offset] = STATE(148),
    [sym_distance] = STATE(148),
    [sym_within] = STATE(148),
    [sym_isdataat] = STATE(148),
    [sym_bsize] = STATE(148),
    [sym_dsize] = STATE(148),
    [sym_rpc] = STATE(148),
    [sym_replace] = STATE(148),
    [sym_pcre] = STATE(148),
    [sym_pcrexform] = STATE(148),
    [sym_fast_pattern] = STATE(148),
    [aux_sym_options_repeat1] = STATE(4),
    [anon_sym_RPAREN] = ACTIONS(11),
    [anon_sym_msg_COLON] = ACTIONS(13),
    [anon_sym_sid_COLON] = ACTIONS(15),
    [anon_sym_rev_COLON] = ACTIONS(17),
    [anon_sym_gid_COLON] = ACTIONS(19),
    [anon_sym_classtype_COLON] = ACTIONS(21),
    [anon_sym_reference_COLON] = ACTIONS(23),
    [anon_sym_priority_COLON] = ACTIONS(25),
    [anon_sym_metadata_COLON] = ACTIONS(27),
    [anon_sym_target_COLON] = ACTIONS(29),
    [anon_sym_ttl_COLON] = ACTIONS(31),
    [anon_sym_ipopts_COLON] = ACTIONS(33),
    [sym_sameip] = ACTIONS(35),
    [anon_sym_ip_proto_COLON] = ACTIONS(37),
    [sym_ipv4_hdr] = ACTIONS(35),
    [sym_ipv6_hdr] = ACTIONS(35),
    [anon_sym_geoip_COLON] = ACTIONS(39),
    [anon_sym_id_COLON] = ACTIONS(41),
    [anon_sym_fragbits_COLON] = ACTIONS(43),
    [anon_sym_fragoffset_COLON] = ACTIONS(45),
    [anon_sym_tos_COLON] = ACTIONS(47),
    [anon_sym_seq_COLON] = ACTIONS(49),
    [anon_sym_ack_COLON] = ACTIONS(51),
    [anon_sym_window_COLON] = ACTIONS(53),
    [anon_sym_tcp_DOTmss_COLON] = ACTIONS(55),
    [sym_tcp_hdr] = ACTIONS(35),
    [sym_udp_hdr] = ACTIONS(35),
    [anon_sym_itype_COLON] = ACTIONS(57),
    [anon_sym_icode_COLON] = ACTIONS(59),
    [anon_sym_icmp_id_COLON] = ACTIONS(61),
    [anon_sym_icmp_seq_COLON] = ACTIONS(63),
    [sym_icmpv6_hdr] = ACTIONS(35),
    [anon_sym_icmpv6_DOTmtu_COLON] = ACTIONS(65),
    [anon_sym_content_COLON] = ACTIONS(67),
    [sym_nocase] = ACTIONS(35),
    [anon_sym_depth_COLON] = ACTIONS(69),
    [sym_startswith] = ACTIONS(35),
    [sym_endswith] = ACTIONS(35),
    [anon_sym_offset_COLON] = ACTIONS(71),
    [anon_sym_distance_COLON] = ACTIONS(73),
    [anon_sym_within_COLON] = ACTIONS(75),
    [anon_sym_isdataat_COLON] = ACTIONS(77),
    [anon_sym_bsize_COLON] = ACTIONS(79),
    [anon_sym_dsize_COLON] = ACTIONS(81),
    [anon_sym_rpc_COLON] = ACTIONS(83),
    [anon_sym_replace_COLON] = ACTIONS(85),
    [anon_sym_pcre_COLON] = ACTIONS(87),
    [sym_dotprefix] = ACTIONS(35),
    [sym_strip_whitespace] = ACTIONS(35),
    [sym_compress_whitespace] = ACTIONS(35),
    [sym_to_md5] = ACTIONS(35),
    [sym_to_sha1] = ACTIONS(35),
    [sym_to_sha256] = ACTIONS(35),
    [anon_sym_pcrexform_COLON] = ACTIONS(89),
    [sym_url_decode] = ACTIONS(35),
    [anon_sym_fastpattern] = ACTIONS(91),
    [sym_prefilter] = ACTIONS(35),
  },
  [3] = {
    [sym__opts] = STATE(148),
    [sym_msg] = STATE(148),
    [sym_sid] = STATE(148),
    [sym_rev] = STATE(148),
    [sym_gid] = STATE(148),
    [sym_classtype] = STATE(148),
    [sym_reference] = STATE(148),
    [sym_priority] = STATE(148),
    [sym_metadata] = STATE(148),
    [sym_target] = STATE(148),
    [sym_ttl] = STATE(148),
    [sym_ipopts] = STATE(148),
    [sym_ip_proto] = STATE(148),
    [sym_geoip] = STATE(148),
    [sym_id] = STATE(148),
    [sym_fragbits] = STATE(148),
    [sym_fragoffset] = STATE(148),
    [sym_tos] = STATE(148),
    [sym_seq] = STATE(148),
    [sym_ack] = STATE(148),
    [sym_window] = STATE(148),
    [sym_tcp_mss] = STATE(148),
    [sym_itype] = STATE(148),
    [sym_icode] = STATE(148),
    [sym_icmp_id] = STATE(148),
    [sym_icmp_seq] = STATE(148),
    [sym_icmpv6_mtu] = STATE(148),
    [sym_content] = STATE(148),
    [sym_depth] = STATE(148),
    [sym_offset] = STATE(148),
    [sym_distance] = STATE(148),
    [sym_within] = STATE(148),
    [sym_isdataat] = STATE(148),
    [sym_bsize] = STATE(148),
    [sym_dsize] = STATE(148),
    [sym_rpc] = STATE(148),
    [sym_replace] = STATE(148),
    [sym_pcre] = STATE(148),
    [sym_pcrexform] = STATE(148),
    [sym_fast_pattern] = STATE(148),
    [aux_sym_options_repeat1] = STATE(3),
    [anon_sym_RPAREN] = ACTIONS(93),
    [anon_sym_msg_COLON] = ACTIONS(95),
    [anon_sym_sid_COLON] = ACTIONS(98),
    [anon_sym_rev_COLON] = ACTIONS(101),
    [anon_sym_gid_COLON] = ACTIONS(104),
    [anon_sym_classtype_COLON] = ACTIONS(107),
    [anon_sym_reference_COLON] = ACTIONS(110),
    [anon_sym_priority_COLON] = ACTIONS(113),
    [anon_sym_metadata_COLON] = ACTIONS(116),
    [anon_sym_target_COLON] = ACTIONS(119),
    [anon_sym_ttl_COLON] = ACTIONS(122),
    [anon_sym_ipopts_COLON] = ACTIONS(125),
    [sym_sameip] = ACTIONS(128),
    [anon_sym_ip_proto_COLON] = ACTIONS(131),
    [sym_ipv4_hdr] = ACTIONS(128),
    [sym_ipv6_hdr] = ACTIONS(128),
    [anon_sym_geoip_COLON] = ACTIONS(134),
    [anon_sym_id_COLON] = ACTIONS(137),
    [anon_sym_fragbits_COLON] = ACTIONS(140),
    [anon_sym_fragoffset_COLON] = ACTIONS(143),
    [anon_sym_tos_COLON] = ACTIONS(146),
    [anon_sym_seq_COLON] = ACTIONS(149),
    [anon_sym_ack_COLON] = ACTIONS(152),
    [anon_sym_window_COLON] = ACTIONS(155),
    [anon_sym_tcp_DOTmss_COLON] = ACTIONS(158),
    [sym_tcp_hdr] = ACTIONS(128),
    [sym_udp_hdr] = ACTIONS(128),
    [anon_sym_itype_COLON] = ACTIONS(161),
    [anon_sym_icode_COLON] = ACTIONS(164),
    [anon_sym_icmp_id_COLON] = ACTIONS(167),
    [anon_sym_icmp_seq_COLON] = ACTIONS(170),
    [sym_icmpv6_hdr] = ACTIONS(128),
    [anon_sym_icmpv6_DOTmtu_COLON] = ACTIONS(173),
    [anon_sym_content_COLON] = ACTIONS(176),
    [sym_nocase] = ACTIONS(128),
    [anon_sym_depth_COLON] = ACTIONS(179),
    [sym_startswith] = ACTIONS(128),
    [sym_endswith] = ACTIONS(128),
    [anon_sym_offset_COLON] = ACTIONS(182),
    [anon_sym_distance_COLON] = ACTIONS(185),
    [anon_sym_within_COLON] = ACTIONS(188),
    [anon_sym_isdataat_COLON] = ACTIONS(191),
    [anon_sym_bsize_COLON] = ACTIONS(194),
    [anon_sym_dsize_COLON] = ACTIONS(197),
    [anon_sym_rpc_COLON] = ACTIONS(200),
    [anon_sym_replace_COLON] = ACTIONS(203),
    [anon_sym_pcre_COLON] = ACTIONS(206),
    [sym_dotprefix] = ACTIONS(128),
    [sym_strip_whitespace] = ACTIONS(128),
    [sym_compress_whitespace] = ACTIONS(128),
    [sym_to_md5] = ACTIONS(128),
    [sym_to_sha1] = ACTIONS(128),
    [sym_to_sha256] = ACTIONS(128),
    [anon_sym_pcrexform_COLON] = ACTIONS(209),
    [sym_url_decode] = ACTIONS(128),
    [anon_sym_fastpattern] = ACTIONS(212),
    [sym_prefilter] = ACTIONS(128),
  },
  [4] = {
    [sym__opts] = STATE(148),
    [sym_msg] = STATE(148),
    [sym_sid] = STATE(148),
    [sym_rev] = STATE(148),
    [sym_gid] = STATE(148),
    [sym_classtype] = STATE(148),
    [sym_reference] = STATE(148),
    [sym_priority] = STATE(148),
    [sym_metadata] = STATE(148),
    [sym_target] = STATE(148),
    [sym_ttl] = STATE(148),
    [sym_ipopts] = STATE(148),
    [sym_ip_proto] = STATE(148),
    [sym_geoip] = STATE(148),
    [sym_id] = STATE(148),
    [sym_fragbits] = STATE(148),
    [sym_fragoffset] = STATE(148),
    [sym_tos] = STATE(148),
    [sym_seq] = STATE(148),
    [sym_ack] = STATE(148),
    [sym_window] = STATE(148),
    [sym_tcp_mss] = STATE(148),
    [sym_itype] = STATE(148),
    [sym_icode] = STATE(148),
    [sym_icmp_id] = STATE(148),
    [sym_icmp_seq] = STATE(148),
    [sym_icmpv6_mtu] = STATE(148),
    [sym_content] = STATE(148),
    [sym_depth] = STATE(148),
    [sym_offset] = STATE(148),
    [sym_distance] = STATE(148),
    [sym_within] = STATE(148),
    [sym_isdataat] = STATE(148),
    [sym_bsize] = STATE(148),
    [sym_dsize] = STATE(148),
    [sym_rpc] = STATE(148),
    [sym_replace] = STATE(148),
    [sym_pcre] = STATE(148),
    [sym_pcrexform] = STATE(148),
    [sym_fast_pattern] = STATE(148),
    [aux_sym_options_repeat1] = STATE(3),
    [anon_sym_RPAREN] = ACTIONS(215),
    [anon_sym_msg_COLON] = ACTIONS(13),
    [anon_sym_sid_COLON] = ACTIONS(15),
    [anon_sym_rev_COLON] = ACTIONS(17),
    [anon_sym_gid_COLON] = ACTIONS(19),
    [anon_sym_classtype_COLON] = ACTIONS(21),
    [anon_sym_reference_COLON] = ACTIONS(23),
    [anon_sym_priority_COLON] = ACTIONS(25),
    [anon_sym_metadata_COLON] = ACTIONS(27),
    [anon_sym_target_COLON] = ACTIONS(29),
    [anon_sym_ttl_COLON] = ACTIONS(31),
    [anon_sym_ipopts_COLON] = ACTIONS(33),
    [sym_sameip] = ACTIONS(35),
    [anon_sym_ip_proto_COLON] = ACTIONS(37),
    [sym_ipv4_hdr] = ACTIONS(35),
    [sym_ipv6_hdr] = ACTIONS(35),
    [anon_sym_geoip_COLON] = ACTIONS(39),
    [anon_sym_id_COLON] = ACTIONS(41),
    [anon_sym_fragbits_COLON] = ACTIONS(43),
    [anon_sym_fragoffset_COLON] = ACTIONS(45),
    [anon_sym_tos_COLON] = ACTIONS(47),
    [anon_sym_seq_COLON] = ACTIONS(49),
    [anon_sym_ack_COLON] = ACTIONS(51),
    [anon_sym_window_COLON] = ACTIONS(53),
    [anon_sym_tcp_DOTmss_COLON] = ACTIONS(55),
    [sym_tcp_hdr] = ACTIONS(35),
    [sym_udp_hdr] = ACTIONS(35),
    [anon_sym_itype_COLON] = ACTIONS(57),
    [anon_sym_icode_COLON] = ACTIONS(59),
    [anon_sym_icmp_id_COLON] = ACTIONS(61),
    [anon_sym_icmp_seq_COLON] = ACTIONS(63),
    [sym_icmpv6_hdr] = ACTIONS(35),
    [anon_sym_icmpv6_DOTmtu_COLON] = ACTIONS(65),
    [anon_sym_content_COLON] = ACTIONS(67),
    [sym_nocase] = ACTIONS(35),
    [anon_sym_depth_COLON] = ACTIONS(69),
    [sym_startswith] = ACTIONS(35),
    [sym_endswith] = ACTIONS(35),
    [anon_sym_offset_COLON] = ACTIONS(71),
    [anon_sym_distance_COLON] = ACTIONS(73),
    [anon_sym_within_COLON] = ACTIONS(75),
    [anon_sym_isdataat_COLON] = ACTIONS(77),
    [anon_sym_bsize_COLON] = ACTIONS(79),
    [anon_sym_dsize_COLON] = ACTIONS(81),
    [anon_sym_rpc_COLON] = ACTIONS(83),
    [anon_sym_replace_COLON] = ACTIONS(85),
    [anon_sym_pcre_COLON] = ACTIONS(87),
    [sym_dotprefix] = ACTIONS(35),
    [sym_strip_whitespace] = ACTIONS(35),
    [sym_compress_whitespace] = ACTIONS(35),
    [sym_to_md5] = ACTIONS(35),
    [sym_to_sha1] = ACTIONS(35),
    [sym_to_sha256] = ACTIONS(35),
    [anon_sym_pcrexform_COLON] = ACTIONS(89),
    [sym_url_decode] = ACTIONS(35),
    [anon_sym_fastpattern] = ACTIONS(91),
    [sym_prefilter] = ACTIONS(35),
  },
  [5] = {
    [sym__opts] = STATE(123),
    [sym_msg] = STATE(123),
    [sym_sid] = STATE(123),
    [sym_rev] = STATE(123),
    [sym_gid] = STATE(123),
    [sym_classtype] = STATE(123),
    [sym_reference] = STATE(123),
    [sym_priority] = STATE(123),
    [sym_metadata] = STATE(123),
    [sym_target] = STATE(123),
    [sym_ttl] = STATE(123),
    [sym_ipopts] = STATE(123),
    [sym_ip_proto] = STATE(123),
    [sym_geoip] = STATE(123),
    [sym_id] = STATE(123),
    [sym_fragbits] = STATE(123),
    [sym_fragoffset] = STATE(123),
    [sym_tos] = STATE(123),
    [sym_seq] = STATE(123),
    [sym_ack] = STATE(123),
    [sym_window] = STATE(123),
    [sym_tcp_mss] = STATE(123),
    [sym_itype] = STATE(123),
    [sym_icode] = STATE(123),
    [sym_icmp_id] = STATE(123),
    [sym_icmp_seq] = STATE(123),
    [sym_icmpv6_mtu] = STATE(123),
    [sym_content] = STATE(123),
    [sym_depth] = STATE(123),
    [sym_offset] = STATE(123),
    [sym_distance] = STATE(123),
    [sym_within] = STATE(123),
    [sym_isdataat] = STATE(123),
    [sym_bsize] = STATE(123),
    [sym_dsize] = STATE(123),
    [sym_rpc] = STATE(123),
    [sym_replace] = STATE(123),
    [sym_pcre] = STATE(123),
    [sym_pcrexform] = STATE(123),
    [sym_fast_pattern] = STATE(123),
    [anon_sym_RPAREN] = ACTIONS(217),
    [anon_sym_msg_COLON] = ACTIONS(13),
    [anon_sym_sid_COLON] = ACTIONS(15),
    [anon_sym_rev_COLON] = ACTIONS(17),
    [anon_sym_gid_COLON] = ACTIONS(19),
    [anon_sym_classtype_COLON] = ACTIONS(21),
    [anon_sym_reference_COLON] = ACTIONS(23),
    [anon_sym_priority_COLON] = ACTIONS(25),
    [anon_sym_metadata_COLON] = ACTIONS(27),
    [anon_sym_target_COLON] = ACTIONS(29),
    [anon_sym_ttl_COLON] = ACTIONS(31),
    [anon_sym_ipopts_COLON] = ACTIONS(33),
    [sym_sameip] = ACTIONS(219),
    [anon_sym_ip_proto_COLON] = ACTIONS(37),
    [sym_ipv4_hdr] = ACTIONS(219),
    [sym_ipv6_hdr] = ACTIONS(219),
    [anon_sym_geoip_COLON] = ACTIONS(39),
    [anon_sym_id_COLON] = ACTIONS(41),
    [anon_sym_fragbits_COLON] = ACTIONS(43),
    [anon_sym_fragoffset_COLON] = ACTIONS(45),
    [anon_sym_tos_COLON] = ACTIONS(47),
    [anon_sym_seq_COLON] = ACTIONS(49),
    [anon_sym_ack_COLON] = ACTIONS(51),
    [anon_sym_window_COLON] = ACTIONS(53),
    [anon_sym_tcp_DOTmss_COLON] = ACTIONS(55),
    [sym_tcp_hdr] = ACTIONS(219),
    [sym_udp_hdr] = ACTIONS(219),
    [anon_sym_itype_COLON] = ACTIONS(57),
    [anon_sym_icode_COLON] = ACTIONS(59),
    [anon_sym_icmp_id_COLON] = ACTIONS(61),
    [anon_sym_icmp_seq_COLON] = ACTIONS(63),
    [sym_icmpv6_hdr] = ACTIONS(219),
    [anon_sym_icmpv6_DOTmtu_COLON] = ACTIONS(65),
    [anon_sym_content_COLON] = ACTIONS(67),
    [sym_nocase] = ACTIONS(219),
    [anon_sym_depth_COLON] = ACTIONS(69),
    [sym_startswith] = ACTIONS(219),
    [sym_endswith] = ACTIONS(219),
    [anon_sym_offset_COLON] = ACTIONS(71),
    [anon_sym_distance_COLON] = ACTIONS(73),
    [anon_sym_within_COLON] = ACTIONS(75),
    [anon_sym_isdataat_COLON] = ACTIONS(77),
    [anon_sym_bsize_COLON] = ACTIONS(79),
    [anon_sym_dsize_COLON] = ACTIONS(81),
    [anon_sym_rpc_COLON] = ACTIONS(83),
    [anon_sym_replace_COLON] = ACTIONS(85),
    [anon_sym_pcre_COLON] = ACTIONS(87),
    [sym_dotprefix] = ACTIONS(219),
    [sym_strip_whitespace] = ACTIONS(219),
    [sym_compress_whitespace] = ACTIONS(219),
    [sym_to_md5] = ACTIONS(219),
    [sym_to_sha1] = ACTIONS(219),
    [sym_to_sha256] = ACTIONS(219),
    [anon_sym_pcrexform_COLON] = ACTIONS(89),
    [sym_url_decode] = ACTIONS(219),
    [anon_sym_fastpattern] = ACTIONS(91),
    [sym_prefilter] = ACTIONS(219),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(93), 57,
      anon_sym_RPAREN,
      anon_sym_msg_COLON,
      anon_sym_sid_COLON,
      anon_sym_rev_COLON,
      anon_sym_gid_COLON,
      anon_sym_classtype_COLON,
      anon_sym_reference_COLON,
      anon_sym_priority_COLON,
      anon_sym_metadata_COLON,
      anon_sym_target_COLON,
      anon_sym_ttl_COLON,
      anon_sym_ipopts_COLON,
      sym_sameip,
      anon_sym_ip_proto_COLON,
      sym_ipv4_hdr,
      sym_ipv6_hdr,
      anon_sym_geoip_COLON,
      anon_sym_id_COLON,
      anon_sym_fragbits_COLON,
      anon_sym_fragoffset_COLON,
      anon_sym_tos_COLON,
      anon_sym_seq_COLON,
      anon_sym_ack_COLON,
      anon_sym_window_COLON,
      anon_sym_tcp_DOTmss_COLON,
      sym_tcp_hdr,
      sym_udp_hdr,
      anon_sym_itype_COLON,
      anon_sym_icode_COLON,
      anon_sym_icmp_id_COLON,
      anon_sym_icmp_seq_COLON,
      sym_icmpv6_hdr,
      anon_sym_icmpv6_DOTmtu_COLON,
      anon_sym_content_COLON,
      sym_nocase,
      anon_sym_depth_COLON,
      sym_startswith,
      sym_endswith,
      anon_sym_offset_COLON,
      anon_sym_distance_COLON,
      anon_sym_within_COLON,
      anon_sym_isdataat_COLON,
      anon_sym_bsize_COLON,
      anon_sym_dsize_COLON,
      anon_sym_rpc_COLON,
      anon_sym_replace_COLON,
      anon_sym_pcre_COLON,
      sym_dotprefix,
      sym_strip_whitespace,
      sym_compress_whitespace,
      sym_to_md5,
      sym_to_sha1,
      sym_to_sha256,
      anon_sym_pcrexform_COLON,
      sym_url_decode,
      anon_sym_fastpattern,
      sym_prefilter,
  [60] = 4,
    ACTIONS(223), 1,
      anon_sym_http,
    STATE(13), 1,
      sym_protocol,
    STATE(112), 1,
      sym_header,
    ACTIONS(221), 26,
      anon_sym_tcp,
      anon_sym_udp,
      anon_sym_icmp,
      anon_sym_ip,
      anon_sym_ftp,
      anon_sym_tls,
      anon_sym_smb,
      anon_sym_dns,
      anon_sym_dcerpc,
      anon_sym_ssh,
      anon_sym_smtp,
      anon_sym_imap,
      anon_sym_modbus,
      anon_sym_dnp3,
      anon_sym_enip,
      anon_sym_nfs,
      anon_sym_ikev2,
      anon_sym_krb5,
      anon_sym_ntp,
      anon_sym_dhcp,
      anon_sym_rfb,
      anon_sym_rdp,
      anon_sym_snmp,
      anon_sym_tftp,
      anon_sym_sip,
      anon_sym_http2,
  [98] = 2,
    ACTIONS(227), 1,
      anon_sym_http,
    ACTIONS(225), 26,
      anon_sym_tcp,
      anon_sym_udp,
      anon_sym_icmp,
      anon_sym_ip,
      anon_sym_ftp,
      anon_sym_tls,
      anon_sym_smb,
      anon_sym_dns,
      anon_sym_dcerpc,
      anon_sym_ssh,
      anon_sym_smtp,
      anon_sym_imap,
      anon_sym_modbus,
      anon_sym_dnp3,
      anon_sym_enip,
      anon_sym_nfs,
      anon_sym_ikev2,
      anon_sym_krb5,
      anon_sym_ntp,
      anon_sym_dhcp,
      anon_sym_rfb,
      anon_sym_rdp,
      anon_sym_snmp,
      anon_sym_tftp,
      anon_sym_sip,
      anon_sym_http2,
  [130] = 6,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(9), 1,
      anon_sym_reject,
    ACTIONS(229), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      sym_action,
    STATE(10), 4,
      sym__lines,
      sym_comment,
      sym__rule,
      aux_sym_source_file_repeat1,
    ACTIONS(7), 6,
      anon_sym_alert,
      anon_sym_pass,
      anon_sym_drop,
      anon_sym_rejectsrc,
      anon_sym_rejectdst,
      anon_sym_rejectboth,
  [157] = 6,
    ACTIONS(231), 1,
      ts_builtin_sym_end,
    ACTIONS(233), 1,
      anon_sym_POUND,
    ACTIONS(239), 1,
      anon_sym_reject,
    STATE(7), 1,
      sym_action,
    STATE(10), 4,
      sym__lines,
      sym_comment,
      sym__rule,
      aux_sym_source_file_repeat1,
    ACTIONS(236), 6,
      anon_sym_alert,
      anon_sym_pass,
      anon_sym_drop,
      anon_sym_rejectsrc,
      anon_sym_rejectdst,
      anon_sym_rejectboth,
  [184] = 8,
    ACTIONS(242), 1,
      anon_sym_LBRACK,
    ACTIONS(244), 1,
      anon_sym_RBRACK,
    ACTIONS(246), 1,
      sym_negation,
    ACTIONS(248), 1,
      anon_sym_DOLLAR,
    ACTIONS(250), 1,
      aux_sym_ipv4_token1,
    ACTIONS(252), 1,
      sym__ipv6_octet,
    STATE(19), 1,
      aux_sym_ipv6_repeat1,
    STATE(106), 6,
      sym__location,
      sym__standalone_location,
      sym_group_location,
      sym_variable,
      sym_ipv4,
      sym_ipv6,
  [214] = 8,
    ACTIONS(242), 1,
      anon_sym_LBRACK,
    ACTIONS(246), 1,
      sym_negation,
    ACTIONS(248), 1,
      anon_sym_DOLLAR,
    ACTIONS(250), 1,
      aux_sym_ipv4_token1,
    ACTIONS(252), 1,
      sym__ipv6_octet,
    ACTIONS(254), 1,
      anon_sym_RBRACK,
    STATE(19), 1,
      aux_sym_ipv6_repeat1,
    STATE(93), 6,
      sym__location,
      sym__standalone_location,
      sym_group_location,
      sym_variable,
      sym_ipv4,
      sym_ipv6,
  [244] = 7,
    ACTIONS(242), 1,
      anon_sym_LBRACK,
    ACTIONS(246), 1,
      sym_negation,
    ACTIONS(248), 1,
      anon_sym_DOLLAR,
    ACTIONS(250), 1,
      aux_sym_ipv4_token1,
    ACTIONS(252), 1,
      sym__ipv6_octet,
    STATE(19), 1,
      aux_sym_ipv6_repeat1,
    STATE(33), 6,
      sym__location,
      sym__standalone_location,
      sym_group_location,
      sym_variable,
      sym_ipv4,
      sym_ipv6,
  [271] = 7,
    ACTIONS(242), 1,
      anon_sym_LBRACK,
    ACTIONS(246), 1,
      sym_negation,
    ACTIONS(248), 1,
      anon_sym_DOLLAR,
    ACTIONS(250), 1,
      aux_sym_ipv4_token1,
    ACTIONS(252), 1,
      sym__ipv6_octet,
    STATE(19), 1,
      aux_sym_ipv6_repeat1,
    STATE(115), 6,
      sym__location,
      sym__standalone_location,
      sym_group_location,
      sym_variable,
      sym_ipv4,
      sym_ipv6,
  [298] = 7,
    ACTIONS(242), 1,
      anon_sym_LBRACK,
    ACTIONS(246), 1,
      sym_negation,
    ACTIONS(248), 1,
      anon_sym_DOLLAR,
    ACTIONS(250), 1,
      aux_sym_ipv4_token1,
    ACTIONS(252), 1,
      sym__ipv6_octet,
    STATE(19), 1,
      aux_sym_ipv6_repeat1,
    STATE(32), 6,
      sym__location,
      sym__standalone_location,
      sym_group_location,
      sym_variable,
      sym_ipv4,
      sym_ipv6,
  [325] = 1,
    ACTIONS(256), 10,
      anon_sym_any,
      anon_sym_rr,
      anon_sym_eol,
      anon_sym_nop,
      anon_sym_ts,
      anon_sym_sec,
      anon_sym_esec,
      anon_sym_lsrr,
      anon_sym_ssrr,
      anon_sym_satid,
  [338] = 4,
    ACTIONS(260), 1,
      sym__ipv6_octet,
    ACTIONS(263), 1,
      aux_sym_port_token1,
    STATE(17), 1,
      aux_sym_ipv6_repeat1,
    ACTIONS(258), 6,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_negation,
      aux_sym_ipv4_token2,
      anon_sym_any,
  [356] = 2,
    ACTIONS(267), 1,
      anon_sym_reject,
    ACTIONS(265), 8,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_alert,
      anon_sym_pass,
      anon_sym_drop,
      anon_sym_rejectsrc,
      anon_sym_rejectdst,
      anon_sym_rejectboth,
  [370] = 5,
    ACTIONS(271), 1,
      aux_sym_ipv4_token2,
    ACTIONS(273), 1,
      sym__ipv6_octet,
    ACTIONS(275), 1,
      aux_sym_port_token1,
    STATE(17), 1,
      aux_sym_ipv6_repeat1,
    ACTIONS(269), 5,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_negation,
      anon_sym_any,
  [390] = 2,
    ACTIONS(279), 1,
      anon_sym_reject,
    ACTIONS(277), 8,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_alert,
      anon_sym_pass,
      anon_sym_drop,
      anon_sym_rejectsrc,
      anon_sym_rejectdst,
      anon_sym_rejectboth,
  [404] = 2,
    ACTIONS(283), 1,
      anon_sym_reject,
    ACTIONS(281), 8,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_alert,
      anon_sym_pass,
      anon_sym_drop,
      anon_sym_rejectsrc,
      anon_sym_rejectdst,
      anon_sym_rejectboth,
  [418] = 2,
    ACTIONS(287), 1,
      anon_sym_reject,
    ACTIONS(285), 8,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_alert,
      anon_sym_pass,
      anon_sym_drop,
      anon_sym_rejectsrc,
      anon_sym_rejectdst,
      anon_sym_rejectboth,
  [432] = 2,
    ACTIONS(291), 1,
      anon_sym_reject,
    ACTIONS(289), 8,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_alert,
      anon_sym_pass,
      anon_sym_drop,
      anon_sym_rejectsrc,
      anon_sym_rejectdst,
      anon_sym_rejectboth,
  [446] = 6,
    ACTIONS(248), 1,
      anon_sym_DOLLAR,
    ACTIONS(250), 1,
      aux_sym_ipv4_token1,
    ACTIONS(252), 1,
      sym__ipv6_octet,
    ACTIONS(293), 1,
      anon_sym_LBRACK,
    STATE(19), 1,
      aux_sym_ipv6_repeat1,
    STATE(38), 3,
      sym_variable,
      sym_ipv4,
      sym_ipv6,
  [467] = 6,
    ACTIONS(295), 1,
      anon_sym_LBRACK,
    ACTIONS(297), 1,
      anon_sym_RBRACK,
    ACTIONS(299), 1,
      sym_negation,
    ACTIONS(301), 1,
      anon_sym_any,
    ACTIONS(303), 1,
      aux_sym_port_token1,
    STATE(99), 3,
      sym__port_choices,
      sym_port,
      sym_group_port,
  [488] = 6,
    ACTIONS(295), 1,
      anon_sym_LBRACK,
    ACTIONS(299), 1,
      sym_negation,
    ACTIONS(303), 1,
      aux_sym_port_token1,
    ACTIONS(305), 1,
      anon_sym_RBRACK,
    ACTIONS(307), 1,
      anon_sym_any,
    STATE(87), 3,
      sym__port_choices,
      sym_port,
      sym_group_port,
  [509] = 5,
    ACTIONS(295), 1,
      anon_sym_LBRACK,
    ACTIONS(299), 1,
      sym_negation,
    ACTIONS(303), 1,
      aux_sym_port_token1,
    ACTIONS(309), 1,
      anon_sym_any,
    STATE(119), 3,
      sym__port_choices,
      sym_port,
      sym_group_port,
  [527] = 2,
    ACTIONS(313), 1,
      aux_sym_ipv4_token2,
    ACTIONS(311), 6,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_negation,
      anon_sym_any,
      aux_sym_port_token1,
  [539] = 5,
    ACTIONS(315), 1,
      aux_sym_text_token1,
    ACTIONS(319), 1,
      aux_sym_digit_token1,
    STATE(83), 1,
      aux_sym_text_repeat1,
    ACTIONS(317), 2,
      anon_sym_GT,
      anon_sym_LT,
    STATE(156), 2,
      sym_text,
      sym_digit,
  [557] = 3,
    ACTIONS(323), 1,
      anon_sym_COLON,
    STATE(54), 1,
      sym_port_range,
    ACTIONS(321), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH_GT,
      anon_sym_LT_GT,
      anon_sym_LPAREN,
  [571] = 3,
    ACTIONS(323), 1,
      anon_sym_COLON,
    STATE(55), 1,
      sym_port_range,
    ACTIONS(325), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH_GT,
      anon_sym_LT_GT,
      anon_sym_LPAREN,
  [585] = 5,
    ACTIONS(295), 1,
      anon_sym_LBRACK,
    ACTIONS(299), 1,
      sym_negation,
    ACTIONS(303), 1,
      aux_sym_port_token1,
    ACTIONS(327), 1,
      anon_sym_any,
    STATE(174), 3,
      sym__port_choices,
      sym_port,
      sym_group_port,
  [603] = 5,
    ACTIONS(295), 1,
      anon_sym_LBRACK,
    ACTIONS(299), 1,
      sym_negation,
    ACTIONS(303), 1,
      aux_sym_port_token1,
    ACTIONS(329), 1,
      anon_sym_any,
    STATE(80), 3,
      sym__port_choices,
      sym_port,
      sym_group_port,
  [621] = 1,
    ACTIONS(331), 6,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_negation,
      anon_sym_any,
      aux_sym_port_token1,
  [630] = 1,
    ACTIONS(333), 6,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_negation,
      anon_sym_any,
      aux_sym_port_token1,
  [639] = 1,
    ACTIONS(335), 6,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_negation,
      anon_sym_any,
      aux_sym_port_token1,
  [648] = 1,
    ACTIONS(337), 6,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_negation,
      anon_sym_any,
      aux_sym_port_token1,
  [657] = 1,
    ACTIONS(339), 6,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_negation,
      anon_sym_any,
      aux_sym_port_token1,
  [666] = 5,
    ACTIONS(341), 1,
      anon_sym_COLON,
    ACTIONS(343), 1,
      anon_sym_SEMI,
    ACTIONS(347), 1,
      aux_sym_digit_token1,
    STATE(122), 1,
      sym_digit,
    ACTIONS(345), 2,
      anon_sym_GT,
      anon_sym_LT,
  [683] = 1,
    ACTIONS(349), 6,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_negation,
      anon_sym_any,
      aux_sym_port_token1,
  [692] = 5,
    ACTIONS(347), 1,
      aux_sym_digit_token1,
    ACTIONS(351), 1,
      sym_negation,
    ACTIONS(353), 1,
      anon_sym_x,
    STATE(150), 1,
      sym_digit,
    ACTIONS(345), 2,
      anon_sym_GT,
      anon_sym_LT,
  [709] = 5,
    ACTIONS(319), 1,
      aux_sym_digit_token1,
    ACTIONS(355), 1,
      sym_negation,
    ACTIONS(357), 1,
      sym_decimal,
    STATE(145), 1,
      sym_digit,
    ACTIONS(345), 2,
      anon_sym_GT,
      anon_sym_LT,
  [726] = 1,
    ACTIONS(359), 6,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_negation,
      anon_sym_any,
      aux_sym_port_token1,
  [735] = 1,
    ACTIONS(361), 6,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_negation,
      anon_sym_any,
      aux_sym_port_token1,
  [744] = 2,
    ACTIONS(365), 1,
      sym__ipv6_octet,
    ACTIONS(363), 4,
      anon_sym_LBRACK,
      sym_negation,
      anon_sym_DOLLAR,
      aux_sym_ipv4_token1,
  [754] = 1,
    ACTIONS(367), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH_GT,
      anon_sym_LT_GT,
      anon_sym_LPAREN,
  [762] = 4,
    ACTIONS(319), 1,
      aux_sym_digit_token1,
    ACTIONS(369), 1,
      sym_decimal,
    STATE(141), 1,
      sym_digit,
    ACTIONS(345), 2,
      anon_sym_GT,
      anon_sym_LT,
  [776] = 4,
    ACTIONS(347), 1,
      aux_sym_digit_token1,
    ACTIONS(371), 1,
      anon_sym_x,
    STATE(140), 1,
      sym_digit,
    ACTIONS(345), 2,
      anon_sym_GT,
      anon_sym_LT,
  [790] = 1,
    ACTIONS(373), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH_GT,
      anon_sym_LT_GT,
      anon_sym_LPAREN,
  [798] = 1,
    ACTIONS(375), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH_GT,
      anon_sym_LT_GT,
      anon_sym_LPAREN,
  [806] = 1,
    ACTIONS(377), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH_GT,
      anon_sym_LT_GT,
      anon_sym_LPAREN,
  [814] = 4,
    ACTIONS(347), 1,
      aux_sym_digit_token1,
    ACTIONS(379), 1,
      sym_negation,
    STATE(113), 1,
      sym_digit,
    ACTIONS(345), 2,
      anon_sym_GT,
      anon_sym_LT,
  [828] = 2,
    ACTIONS(383), 1,
      sym__ipv6_octet,
    ACTIONS(381), 4,
      anon_sym_LBRACK,
      sym_negation,
      anon_sym_DOLLAR,
      aux_sym_ipv4_token1,
  [838] = 1,
    ACTIONS(325), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH_GT,
      anon_sym_LT_GT,
      anon_sym_LPAREN,
  [846] = 1,
    ACTIONS(385), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH_GT,
      anon_sym_LT_GT,
      anon_sym_LPAREN,
  [854] = 4,
    ACTIONS(347), 1,
      aux_sym_digit_token1,
    ACTIONS(387), 1,
      anon_sym_STAR,
    STATE(165), 1,
      sym_digit,
    ACTIONS(345), 2,
      anon_sym_GT,
      anon_sym_LT,
  [868] = 4,
    ACTIONS(347), 1,
      aux_sym_digit_token1,
    ACTIONS(389), 1,
      anon_sym_STAR,
    STATE(178), 1,
      sym_digit,
    ACTIONS(345), 2,
      anon_sym_GT,
      anon_sym_LT,
  [882] = 1,
    ACTIONS(391), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH_GT,
      anon_sym_LT_GT,
      anon_sym_LPAREN,
  [890] = 3,
    ACTIONS(347), 1,
      aux_sym_digit_token1,
    STATE(136), 1,
      sym_digit,
    ACTIONS(345), 2,
      anon_sym_GT,
      anon_sym_LT,
  [901] = 3,
    ACTIONS(347), 1,
      aux_sym_digit_token1,
    STATE(172), 1,
      sym_digit,
    ACTIONS(345), 2,
      anon_sym_GT,
      anon_sym_LT,
  [912] = 3,
    ACTIONS(347), 1,
      aux_sym_digit_token1,
    STATE(130), 1,
      sym_digit,
    ACTIONS(345), 2,
      anon_sym_GT,
      anon_sym_LT,
  [923] = 3,
    ACTIONS(347), 1,
      aux_sym_digit_token1,
    STATE(129), 1,
      sym_digit,
    ACTIONS(345), 2,
      anon_sym_GT,
      anon_sym_LT,
  [934] = 3,
    ACTIONS(347), 1,
      aux_sym_digit_token1,
    STATE(128), 1,
      sym_digit,
    ACTIONS(345), 2,
      anon_sym_GT,
      anon_sym_LT,
  [945] = 3,
    ACTIONS(347), 1,
      aux_sym_digit_token1,
    STATE(127), 1,
      sym_digit,
    ACTIONS(345), 2,
      anon_sym_GT,
      anon_sym_LT,
  [956] = 3,
    ACTIONS(347), 1,
      aux_sym_digit_token1,
    STATE(126), 1,
      sym_digit,
    ACTIONS(345), 2,
      anon_sym_GT,
      anon_sym_LT,
  [967] = 3,
    ACTIONS(347), 1,
      aux_sym_digit_token1,
    STATE(131), 1,
      sym_digit,
    ACTIONS(345), 2,
      anon_sym_GT,
      anon_sym_LT,
  [978] = 3,
    ACTIONS(347), 1,
      aux_sym_digit_token1,
    STATE(137), 1,
      sym_digit,
    ACTIONS(345), 2,
      anon_sym_GT,
      anon_sym_LT,
  [989] = 3,
    ACTIONS(347), 1,
      aux_sym_digit_token1,
    STATE(111), 1,
      sym_digit,
    ACTIONS(345), 2,
      anon_sym_GT,
      anon_sym_LT,
  [1000] = 3,
    ACTIONS(347), 1,
      aux_sym_digit_token1,
    STATE(147), 1,
      sym_digit,
    ACTIONS(345), 2,
      anon_sym_GT,
      anon_sym_LT,
  [1011] = 3,
    ACTIONS(347), 1,
      aux_sym_digit_token1,
    STATE(149), 1,
      sym_digit,
    ACTIONS(345), 2,
      anon_sym_GT,
      anon_sym_LT,
  [1022] = 3,
    ACTIONS(347), 1,
      aux_sym_digit_token1,
    STATE(162), 1,
      sym_digit,
    ACTIONS(345), 2,
      anon_sym_GT,
      anon_sym_LT,
  [1033] = 3,
    ACTIONS(347), 1,
      aux_sym_digit_token1,
    STATE(132), 1,
      sym_digit,
    ACTIONS(345), 2,
      anon_sym_GT,
      anon_sym_LT,
  [1044] = 3,
    ACTIONS(347), 1,
      aux_sym_digit_token1,
    STATE(154), 1,
      sym_digit,
    ACTIONS(345), 2,
      anon_sym_GT,
      anon_sym_LT,
  [1055] = 3,
    ACTIONS(347), 1,
      aux_sym_digit_token1,
    STATE(158), 1,
      sym_digit,
    ACTIONS(345), 2,
      anon_sym_GT,
      anon_sym_LT,
  [1066] = 3,
    ACTIONS(347), 1,
      aux_sym_digit_token1,
    STATE(140), 1,
      sym_digit,
    ACTIONS(345), 2,
      anon_sym_GT,
      anon_sym_LT,
  [1077] = 3,
    ACTIONS(347), 1,
      aux_sym_digit_token1,
    STATE(170), 1,
      sym_digit,
    ACTIONS(345), 2,
      anon_sym_GT,
      anon_sym_LT,
  [1088] = 3,
    ACTIONS(347), 1,
      aux_sym_digit_token1,
    STATE(166), 1,
      sym_digit,
    ACTIONS(345), 2,
      anon_sym_GT,
      anon_sym_LT,
  [1099] = 3,
    ACTIONS(347), 1,
      aux_sym_digit_token1,
    STATE(169), 1,
      sym_digit,
    ACTIONS(345), 2,
      anon_sym_GT,
      anon_sym_LT,
  [1110] = 3,
    ACTIONS(393), 1,
      anon_sym_COMMA,
    ACTIONS(395), 1,
      anon_sym_RBRACK,
    STATE(91), 1,
      aux_sym_group_location_repeat1,
  [1120] = 2,
    STATE(15), 1,
      sym_direction,
    ACTIONS(397), 2,
      anon_sym_DASH_GT,
      anon_sym_LT_GT,
  [1128] = 3,
    ACTIONS(399), 1,
      aux_sym_text_token1,
    STATE(83), 1,
      aux_sym_text_repeat1,
    STATE(134), 1,
      sym_text,
  [1138] = 3,
    ACTIONS(393), 1,
      anon_sym_COMMA,
    ACTIONS(401), 1,
      anon_sym_RBRACK,
    STATE(91), 1,
      aux_sym_group_location_repeat1,
  [1148] = 3,
    ACTIONS(403), 1,
      anon_sym_SEMI,
    ACTIONS(405), 1,
      aux_sym_text_token1,
    STATE(101), 1,
      aux_sym_text_repeat1,
  [1158] = 3,
    ACTIONS(407), 1,
      anon_sym_DQUOTE,
    ACTIONS(409), 1,
      aux_sym_string_token1,
    STATE(84), 1,
      aux_sym_string_repeat1,
  [1168] = 3,
    ACTIONS(399), 1,
      aux_sym_text_token1,
    STATE(83), 1,
      aux_sym_text_repeat1,
    STATE(168), 1,
      sym_text,
  [1178] = 3,
    ACTIONS(399), 1,
      aux_sym_text_token1,
    STATE(83), 1,
      aux_sym_text_repeat1,
    STATE(167), 1,
      sym_text,
  [1188] = 3,
    ACTIONS(412), 1,
      anon_sym_COMMA,
    ACTIONS(414), 1,
      anon_sym_RBRACK,
    STATE(97), 1,
      aux_sym_group_port_repeat1,
  [1198] = 3,
    ACTIONS(412), 1,
      anon_sym_COMMA,
    ACTIONS(414), 1,
      anon_sym_RBRACK,
    STATE(95), 1,
      aux_sym_group_port_repeat1,
  [1208] = 3,
    ACTIONS(399), 1,
      aux_sym_text_token1,
    STATE(83), 1,
      aux_sym_text_repeat1,
    STATE(161), 1,
      sym_text,
  [1218] = 3,
    ACTIONS(416), 1,
      sym_negation,
    ACTIONS(418), 1,
      anon_sym_DQUOTE,
    STATE(133), 1,
      sym_string,
  [1228] = 3,
    ACTIONS(420), 1,
      anon_sym_COMMA,
    ACTIONS(423), 1,
      anon_sym_RBRACK,
    STATE(91), 1,
      aux_sym_group_location_repeat1,
  [1238] = 3,
    ACTIONS(399), 1,
      aux_sym_text_token1,
    STATE(83), 1,
      aux_sym_text_repeat1,
    STATE(159), 1,
      sym_text,
  [1248] = 3,
    ACTIONS(393), 1,
      anon_sym_COMMA,
    ACTIONS(401), 1,
      anon_sym_RBRACK,
    STATE(79), 1,
      aux_sym_group_location_repeat1,
  [1258] = 3,
    ACTIONS(399), 1,
      aux_sym_text_token1,
    STATE(83), 1,
      aux_sym_text_repeat1,
    STATE(138), 1,
      sym_text,
  [1268] = 3,
    ACTIONS(425), 1,
      anon_sym_COMMA,
    ACTIONS(428), 1,
      anon_sym_RBRACK,
    STATE(95), 1,
      aux_sym_group_port_repeat1,
  [1278] = 3,
    ACTIONS(399), 1,
      aux_sym_text_token1,
    STATE(83), 1,
      aux_sym_text_repeat1,
    STATE(155), 1,
      sym_text,
  [1288] = 3,
    ACTIONS(412), 1,
      anon_sym_COMMA,
    ACTIONS(430), 1,
      anon_sym_RBRACK,
    STATE(95), 1,
      aux_sym_group_port_repeat1,
  [1298] = 3,
    ACTIONS(432), 1,
      anon_sym_DQUOTE,
    ACTIONS(434), 1,
      aux_sym_string_token1,
    STATE(103), 1,
      aux_sym_string_repeat1,
  [1308] = 3,
    ACTIONS(305), 1,
      anon_sym_RBRACK,
    ACTIONS(412), 1,
      anon_sym_COMMA,
    STATE(88), 1,
      aux_sym_group_port_repeat1,
  [1318] = 3,
    ACTIONS(399), 1,
      aux_sym_text_token1,
    STATE(83), 1,
      aux_sym_text_repeat1,
    STATE(139), 1,
      sym_text,
  [1328] = 3,
    ACTIONS(436), 1,
      anon_sym_SEMI,
    ACTIONS(438), 1,
      aux_sym_text_token1,
    STATE(101), 1,
      aux_sym_text_repeat1,
  [1338] = 3,
    ACTIONS(399), 1,
      aux_sym_text_token1,
    STATE(83), 1,
      aux_sym_text_repeat1,
    STATE(143), 1,
      sym_text,
  [1348] = 3,
    ACTIONS(441), 1,
      anon_sym_DQUOTE,
    ACTIONS(443), 1,
      aux_sym_string_token1,
    STATE(84), 1,
      aux_sym_string_repeat1,
  [1358] = 3,
    ACTIONS(399), 1,
      aux_sym_text_token1,
    STATE(83), 1,
      aux_sym_text_repeat1,
    STATE(153), 1,
      sym_text,
  [1368] = 3,
    ACTIONS(399), 1,
      aux_sym_text_token1,
    STATE(83), 1,
      aux_sym_text_repeat1,
    STATE(152), 1,
      sym_text,
  [1378] = 3,
    ACTIONS(254), 1,
      anon_sym_RBRACK,
    ACTIONS(393), 1,
      anon_sym_COMMA,
    STATE(82), 1,
      aux_sym_group_location_repeat1,
  [1388] = 2,
    ACTIONS(445), 1,
      anon_sym_LBRACK,
    ACTIONS(447), 1,
      aux_sym_port_token1,
  [1395] = 2,
    ACTIONS(418), 1,
      anon_sym_DQUOTE,
    STATE(142), 1,
      sym_string,
  [1402] = 1,
    ACTIONS(449), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1407] = 1,
    ACTIONS(451), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1412] = 2,
    ACTIONS(453), 1,
      anon_sym_COMMA,
    ACTIONS(455), 1,
      anon_sym_SEMI,
  [1419] = 2,
    ACTIONS(457), 1,
      anon_sym_LPAREN,
    STATE(18), 1,
      sym_options,
  [1426] = 2,
    ACTIONS(459), 1,
      anon_sym_COMMA,
    ACTIONS(461), 1,
      anon_sym_SEMI,
  [1433] = 2,
    ACTIONS(418), 1,
      anon_sym_DQUOTE,
    STATE(125), 1,
      sym_string,
  [1440] = 1,
    ACTIONS(423), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1445] = 2,
    ACTIONS(418), 1,
      anon_sym_DQUOTE,
    STATE(176), 1,
      sym_string,
  [1452] = 2,
    ACTIONS(418), 1,
      anon_sym_DQUOTE,
    STATE(124), 1,
      sym_string,
  [1459] = 2,
    ACTIONS(418), 1,
      anon_sym_DQUOTE,
    STATE(120), 1,
      sym_string,
  [1466] = 1,
    ACTIONS(428), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1471] = 1,
    ACTIONS(463), 1,
      anon_sym_SEMI,
  [1475] = 1,
    ACTIONS(465), 1,
      anon_sym_only,
  [1479] = 1,
    ACTIONS(467), 1,
      anon_sym_SEMI,
  [1483] = 1,
    ACTIONS(469), 1,
      anon_sym_SEMI,
  [1487] = 1,
    ACTIONS(471), 1,
      anon_sym_SEMI,
  [1491] = 1,
    ACTIONS(473), 1,
      anon_sym_SEMI,
  [1495] = 1,
    ACTIONS(475), 1,
      anon_sym_COMMA,
  [1499] = 1,
    ACTIONS(477), 1,
      anon_sym_SEMI,
  [1503] = 1,
    ACTIONS(479), 1,
      anon_sym_SEMI,
  [1507] = 1,
    ACTIONS(481), 1,
      anon_sym_SEMI,
  [1511] = 1,
    ACTIONS(483), 1,
      anon_sym_SEMI,
  [1515] = 1,
    ACTIONS(485), 1,
      anon_sym_SEMI,
  [1519] = 1,
    ACTIONS(487), 1,
      anon_sym_SEMI,
  [1523] = 1,
    ACTIONS(489), 1,
      anon_sym_SEMI,
  [1527] = 1,
    ACTIONS(491), 1,
      anon_sym_SEMI,
  [1531] = 1,
    ACTIONS(493), 1,
      anon_sym_SEMI,
  [1535] = 1,
    ACTIONS(495), 1,
      anon_sym_SEMI,
  [1539] = 1,
    ACTIONS(497), 1,
      anon_sym_SEMI,
  [1543] = 1,
    ACTIONS(499), 1,
      anon_sym_SEMI,
  [1547] = 1,
    ACTIONS(501), 1,
      anon_sym_SEMI,
  [1551] = 1,
    ACTIONS(503), 1,
      anon_sym_SEMI,
  [1555] = 1,
    ACTIONS(505), 1,
      anon_sym_SEMI,
  [1559] = 1,
    ACTIONS(507), 1,
      anon_sym_SEMI,
  [1563] = 1,
    ACTIONS(509), 1,
      anon_sym_SEMI,
  [1567] = 1,
    ACTIONS(511), 1,
      anon_sym_relative,
  [1571] = 1,
    ACTIONS(513), 1,
      anon_sym_SEMI,
  [1575] = 1,
    ACTIONS(515), 1,
      anon_sym_SEMI,
  [1579] = 1,
    ACTIONS(517), 1,
      anon_sym_SEMI,
  [1583] = 1,
    ACTIONS(519), 1,
      anon_sym_SEMI,
  [1587] = 1,
    ACTIONS(521), 1,
      anon_sym_SEMI,
  [1591] = 1,
    ACTIONS(523), 1,
      anon_sym_SEMI,
  [1595] = 1,
    ACTIONS(525), 1,
      aux_sym_comment_token1,
  [1599] = 1,
    ACTIONS(527), 1,
      anon_sym_SEMI,
  [1603] = 1,
    ACTIONS(529), 1,
      anon_sym_SEMI,
  [1607] = 1,
    ACTIONS(531), 1,
      anon_sym_SEMI,
  [1611] = 1,
    ACTIONS(533), 1,
      anon_sym_SEMI,
  [1615] = 1,
    ACTIONS(535), 1,
      anon_sym_SEMI,
  [1619] = 1,
    ACTIONS(537), 1,
      anon_sym_SEMI,
  [1623] = 1,
    ACTIONS(539), 1,
      anon_sym_SEMI,
  [1627] = 1,
    ACTIONS(541), 1,
      anon_sym_SEMI,
  [1631] = 1,
    ACTIONS(543), 1,
      anon_sym_SEMI,
  [1635] = 1,
    ACTIONS(545), 1,
      anon_sym_SEMI,
  [1639] = 1,
    ACTIONS(547), 1,
      anon_sym_SEMI,
  [1643] = 1,
    ACTIONS(549), 1,
      anon_sym_relative,
  [1647] = 1,
    ACTIONS(551), 1,
      anon_sym_SEMI,
  [1651] = 1,
    ACTIONS(553), 1,
      anon_sym_COMMA,
  [1655] = 1,
    ACTIONS(555), 1,
      anon_sym_SEMI,
  [1659] = 1,
    ACTIONS(557), 1,
      anon_sym_SEMI,
  [1663] = 1,
    ACTIONS(559), 1,
      anon_sym_SEMI,
  [1667] = 1,
    ACTIONS(561), 1,
      anon_sym_SEMI,
  [1671] = 1,
    ACTIONS(563), 1,
      anon_sym_SEMI,
  [1675] = 1,
    ACTIONS(565), 1,
      aux_sym_variable_token1,
  [1679] = 1,
    ACTIONS(567), 1,
      anon_sym_SEMI,
  [1683] = 1,
    ACTIONS(569), 1,
      aux_sym_digit_token1,
  [1687] = 1,
    ACTIONS(571), 1,
      anon_sym_LPAREN,
  [1691] = 1,
    ACTIONS(573), 1,
      anon_sym_SEMI,
  [1695] = 1,
    ACTIONS(575), 1,
      anon_sym_SEMI,
  [1699] = 1,
    ACTIONS(577), 1,
      ts_builtin_sym_end,
  [1703] = 1,
    ACTIONS(579), 1,
      anon_sym_SEMI,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 60,
  [SMALL_STATE(8)] = 98,
  [SMALL_STATE(9)] = 130,
  [SMALL_STATE(10)] = 157,
  [SMALL_STATE(11)] = 184,
  [SMALL_STATE(12)] = 214,
  [SMALL_STATE(13)] = 244,
  [SMALL_STATE(14)] = 271,
  [SMALL_STATE(15)] = 298,
  [SMALL_STATE(16)] = 325,
  [SMALL_STATE(17)] = 338,
  [SMALL_STATE(18)] = 356,
  [SMALL_STATE(19)] = 370,
  [SMALL_STATE(20)] = 390,
  [SMALL_STATE(21)] = 404,
  [SMALL_STATE(22)] = 418,
  [SMALL_STATE(23)] = 432,
  [SMALL_STATE(24)] = 446,
  [SMALL_STATE(25)] = 467,
  [SMALL_STATE(26)] = 488,
  [SMALL_STATE(27)] = 509,
  [SMALL_STATE(28)] = 527,
  [SMALL_STATE(29)] = 539,
  [SMALL_STATE(30)] = 557,
  [SMALL_STATE(31)] = 571,
  [SMALL_STATE(32)] = 585,
  [SMALL_STATE(33)] = 603,
  [SMALL_STATE(34)] = 621,
  [SMALL_STATE(35)] = 630,
  [SMALL_STATE(36)] = 639,
  [SMALL_STATE(37)] = 648,
  [SMALL_STATE(38)] = 657,
  [SMALL_STATE(39)] = 666,
  [SMALL_STATE(40)] = 683,
  [SMALL_STATE(41)] = 692,
  [SMALL_STATE(42)] = 709,
  [SMALL_STATE(43)] = 726,
  [SMALL_STATE(44)] = 735,
  [SMALL_STATE(45)] = 744,
  [SMALL_STATE(46)] = 754,
  [SMALL_STATE(47)] = 762,
  [SMALL_STATE(48)] = 776,
  [SMALL_STATE(49)] = 790,
  [SMALL_STATE(50)] = 798,
  [SMALL_STATE(51)] = 806,
  [SMALL_STATE(52)] = 814,
  [SMALL_STATE(53)] = 828,
  [SMALL_STATE(54)] = 838,
  [SMALL_STATE(55)] = 846,
  [SMALL_STATE(56)] = 854,
  [SMALL_STATE(57)] = 868,
  [SMALL_STATE(58)] = 882,
  [SMALL_STATE(59)] = 890,
  [SMALL_STATE(60)] = 901,
  [SMALL_STATE(61)] = 912,
  [SMALL_STATE(62)] = 923,
  [SMALL_STATE(63)] = 934,
  [SMALL_STATE(64)] = 945,
  [SMALL_STATE(65)] = 956,
  [SMALL_STATE(66)] = 967,
  [SMALL_STATE(67)] = 978,
  [SMALL_STATE(68)] = 989,
  [SMALL_STATE(69)] = 1000,
  [SMALL_STATE(70)] = 1011,
  [SMALL_STATE(71)] = 1022,
  [SMALL_STATE(72)] = 1033,
  [SMALL_STATE(73)] = 1044,
  [SMALL_STATE(74)] = 1055,
  [SMALL_STATE(75)] = 1066,
  [SMALL_STATE(76)] = 1077,
  [SMALL_STATE(77)] = 1088,
  [SMALL_STATE(78)] = 1099,
  [SMALL_STATE(79)] = 1110,
  [SMALL_STATE(80)] = 1120,
  [SMALL_STATE(81)] = 1128,
  [SMALL_STATE(82)] = 1138,
  [SMALL_STATE(83)] = 1148,
  [SMALL_STATE(84)] = 1158,
  [SMALL_STATE(85)] = 1168,
  [SMALL_STATE(86)] = 1178,
  [SMALL_STATE(87)] = 1188,
  [SMALL_STATE(88)] = 1198,
  [SMALL_STATE(89)] = 1208,
  [SMALL_STATE(90)] = 1218,
  [SMALL_STATE(91)] = 1228,
  [SMALL_STATE(92)] = 1238,
  [SMALL_STATE(93)] = 1248,
  [SMALL_STATE(94)] = 1258,
  [SMALL_STATE(95)] = 1268,
  [SMALL_STATE(96)] = 1278,
  [SMALL_STATE(97)] = 1288,
  [SMALL_STATE(98)] = 1298,
  [SMALL_STATE(99)] = 1308,
  [SMALL_STATE(100)] = 1318,
  [SMALL_STATE(101)] = 1328,
  [SMALL_STATE(102)] = 1338,
  [SMALL_STATE(103)] = 1348,
  [SMALL_STATE(104)] = 1358,
  [SMALL_STATE(105)] = 1368,
  [SMALL_STATE(106)] = 1378,
  [SMALL_STATE(107)] = 1388,
  [SMALL_STATE(108)] = 1395,
  [SMALL_STATE(109)] = 1402,
  [SMALL_STATE(110)] = 1407,
  [SMALL_STATE(111)] = 1412,
  [SMALL_STATE(112)] = 1419,
  [SMALL_STATE(113)] = 1426,
  [SMALL_STATE(114)] = 1433,
  [SMALL_STATE(115)] = 1440,
  [SMALL_STATE(116)] = 1445,
  [SMALL_STATE(117)] = 1452,
  [SMALL_STATE(118)] = 1459,
  [SMALL_STATE(119)] = 1466,
  [SMALL_STATE(120)] = 1471,
  [SMALL_STATE(121)] = 1475,
  [SMALL_STATE(122)] = 1479,
  [SMALL_STATE(123)] = 1483,
  [SMALL_STATE(124)] = 1487,
  [SMALL_STATE(125)] = 1491,
  [SMALL_STATE(126)] = 1495,
  [SMALL_STATE(127)] = 1499,
  [SMALL_STATE(128)] = 1503,
  [SMALL_STATE(129)] = 1507,
  [SMALL_STATE(130)] = 1511,
  [SMALL_STATE(131)] = 1515,
  [SMALL_STATE(132)] = 1519,
  [SMALL_STATE(133)] = 1523,
  [SMALL_STATE(134)] = 1527,
  [SMALL_STATE(135)] = 1531,
  [SMALL_STATE(136)] = 1535,
  [SMALL_STATE(137)] = 1539,
  [SMALL_STATE(138)] = 1543,
  [SMALL_STATE(139)] = 1547,
  [SMALL_STATE(140)] = 1551,
  [SMALL_STATE(141)] = 1555,
  [SMALL_STATE(142)] = 1559,
  [SMALL_STATE(143)] = 1563,
  [SMALL_STATE(144)] = 1567,
  [SMALL_STATE(145)] = 1571,
  [SMALL_STATE(146)] = 1575,
  [SMALL_STATE(147)] = 1579,
  [SMALL_STATE(148)] = 1583,
  [SMALL_STATE(149)] = 1587,
  [SMALL_STATE(150)] = 1591,
  [SMALL_STATE(151)] = 1595,
  [SMALL_STATE(152)] = 1599,
  [SMALL_STATE(153)] = 1603,
  [SMALL_STATE(154)] = 1607,
  [SMALL_STATE(155)] = 1611,
  [SMALL_STATE(156)] = 1615,
  [SMALL_STATE(157)] = 1619,
  [SMALL_STATE(158)] = 1623,
  [SMALL_STATE(159)] = 1627,
  [SMALL_STATE(160)] = 1631,
  [SMALL_STATE(161)] = 1635,
  [SMALL_STATE(162)] = 1639,
  [SMALL_STATE(163)] = 1643,
  [SMALL_STATE(164)] = 1647,
  [SMALL_STATE(165)] = 1651,
  [SMALL_STATE(166)] = 1655,
  [SMALL_STATE(167)] = 1659,
  [SMALL_STATE(168)] = 1663,
  [SMALL_STATE(169)] = 1667,
  [SMALL_STATE(170)] = 1671,
  [SMALL_STATE(171)] = 1675,
  [SMALL_STATE(172)] = 1679,
  [SMALL_STATE(173)] = 1683,
  [SMALL_STATE(174)] = 1687,
  [SMALL_STATE(175)] = 1691,
  [SMALL_STATE(176)] = 1695,
  [SMALL_STATE(177)] = 1699,
  [SMALL_STATE(178)] = 1703,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(116),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(60),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(76),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(78),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(85),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(86),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(77),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(89),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(92),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(74),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(16),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(148),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(29),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(96),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(73),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(104),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(105),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(41),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(70),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(69),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(42),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(102),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(100),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(94),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(67),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(59),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(81),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(90),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(72),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(66),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(61),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(62),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(52),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(63),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(64),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(65),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(114),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(118),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(117),
  [212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(39),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 1),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 1),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(151),
  [236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [239] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ipv6_repeat1, 2),
  [260] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ipv6_repeat1, 2), SHIFT_REPEAT(17),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ipv6_repeat1, 2),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rule, 3),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__rule, 3),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ipv6, 1),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ipv6, 1),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options, 2),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_options, 2),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options, 5),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_options, 5),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options, 4),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_options, 4),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ipv4, 1),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port, 1),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port, 2),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_location, 4),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ipv6, 2),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ipv4, 2),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 2),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__standalone_location, 2),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fast_pattern, 1),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_location, 2),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_location, 5),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_location, 3),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction, 1),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_direction, 1),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_port, 5),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_port, 2),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port_range, 1),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_port, 4),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_protocol, 1),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_protocol, 1),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port, 3),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_port, 3),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 1),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [409] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(84),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [420] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_location_repeat1, 2), SHIFT_REPEAT(14),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_location_repeat1, 2),
  [425] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_port_repeat1, 2), SHIFT_REPEAT(27),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_port_repeat1, 2),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2),
  [438] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(101),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_digit, 2),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_digit, 1),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_isdataat, 3),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_isdataat, 2),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pcre, 2),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fast_pattern, 2),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pcrexform, 2),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replace, 2),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dsize, 2),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bsize, 2),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_within, 2),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_distance, 2),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 2),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_depth, 2),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content, 2),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_icmpv6_mtu, 2),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_icmp_seq, 2),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_icmp_id, 2),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_icode, 2),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_itype, 2),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tos, 3),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window, 3),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content, 3),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tcp_mss, 2),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window, 2),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fast_pattern, 3),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ack, 2),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seq, 2),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tos, 2),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragoffset, 2),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragbits, 2),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 2),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geoip, 2),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ip_proto, 2),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ipopts, 2),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ttl, 2),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 2),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata, 2),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tos, 4),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_isdataat, 4),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_priority, 2),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 2),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classtype, 2),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gid, 2),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rev, 2),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sid, 2),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 6),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_isdataat, 5),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_msg, 2),
  [577] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 6),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_suricataRules(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
