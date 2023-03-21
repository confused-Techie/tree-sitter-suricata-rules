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
#define STATE_COUNT 255
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 314
#define ALIAS_COUNT 0
#define TOKEN_COUNT 214
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
  anon_sym_flowbits_COLON = 123,
  anon_sym_set = 124,
  anon_sym_isset = 125,
  anon_sym_toggle = 126,
  anon_sym_unset = 127,
  anon_sym_isnotset = 128,
  anon_sym_noalert = 129,
  anon_sym_flow_COLON = 130,
  anon_sym_to_client = 131,
  anon_sym_to_server = 132,
  anon_sym_from_client = 133,
  anon_sym_from_server = 134,
  anon_sym_established = 135,
  anon_sym_not_established = 136,
  anon_sym_stateless = 137,
  anon_sym_only_stream = 138,
  anon_sym_no_stream = 139,
  anon_sym_only_frag = 140,
  anon_sym_no_frag = 141,
  anon_sym_flowint_COLON = 142,
  anon_sym_stream_size_COLON = 143,
  sym_bypass = 144,
  sym_http_uri = 145,
  anon_sym_filename_COLON = 146,
  anon_sym_fileext_COLON = 147,
  anon_sym_filemagic_COLON = 148,
  anon_sym_filestore_COLON = 149,
  anon_sym_request_SLASHto_server = 150,
  anon_sym_response_SLASHto_client = 151,
  anon_sym_both = 152,
  anon_sym_file = 153,
  anon_sym_tx = 154,
  anon_sym_ssn_SLASHflow = 155,
  anon_sym_filemd5_COLON = 156,
  anon_sym_filesha1_COLON = 157,
  anon_sym_filesha256_COLON = 158,
  anon_sym_filesize_COLON = 159,
  anon_sym_dns_DOTopcode_COLON = 160,
  sym_dns_query = 161,
  anon_sym_tls_cert_subject = 162,
  anon_sym_tls_DOTcert_subject = 163,
  anon_sym_tls_cert_issuer = 164,
  anon_sym_tls_DOTcert_issuer = 165,
  anon_sym_tls_cert_serial = 166,
  anon_sym_tls_DOTcert_serial = 167,
  anon_sym_tls_cert_fingerprint = 168,
  anon_sym_tls_DOTcert_fingerprint = 169,
  anon_sym_tls_sni = 170,
  anon_sym_tls_DOTsni = 171,
  sym_tls_cert_notbefore = 172,
  sym_tls_cert_notafter = 173,
  sym_tls_cert_expired = 174,
  sym_tls_cert_valid = 175,
  sym_tls_certs = 176,
  anon_sym_tls_DOTversion_COLON = 177,
  anon_sym_ssl_version_COLON = 178,
  anon_sym_sslv2 = 179,
  anon_sym_sslv3 = 180,
  anon_sym_tls1_DOT0 = 181,
  anon_sym_tls1_DOT1 = 182,
  anon_sym_tls1_DOT2 = 183,
  anon_sym_tls1_DOT3 = 184,
  anon_sym_tls_DOTsubject_COLON = 185,
  anon_sym_tls_DOTissuerdn_COLON = 186,
  anon_sym_tls_DOTfingerprint = 187,
  sym_tls_store = 188,
  anon_sym_ssl_state_COLON = 189,
  anon_sym_client_hello = 190,
  anon_sym_server_hello = 191,
  anon_sym_client_keyx = 192,
  anon_sym_server_keyx = 193,
  anon_sym_unkown = 194,
  anon_sym_PIPE = 195,
  anon_sym_ssh_DOTproto = 196,
  anon_sym_ssh_proto = 197,
  anon_sym_ssh_DOTsoftware = 198,
  anon_sym_ssh_software = 199,
  anon_sym_ssh_DOTprotoversion_COLON = 200,
  anon_sym_2_compat = 201,
  anon_sym_ssh_DOTsoftwareversion_COLON = 202,
  sym_ssh_hassh = 203,
  sym_ssh_hassh_string = 204,
  sym_ssh_hassh_server = 205,
  sym_ssh_hassh_server_string = 206,
  anon_sym_DQUOTE = 207,
  aux_sym_string_token1 = 208,
  aux_sym_text_token1 = 209,
  anon_sym_GT = 210,
  anon_sym_LT = 211,
  aux_sym_digit_token1 = 212,
  sym_decimal = 213,
  sym_source_file = 214,
  sym__lines = 215,
  sym_comment = 216,
  sym__rule = 217,
  sym_action = 218,
  sym_header = 219,
  sym_protocol = 220,
  sym__location = 221,
  sym__standalone_location = 222,
  sym_group_location = 223,
  sym_variable = 224,
  sym_ipv4 = 225,
  sym_ipv6 = 226,
  sym__port_choices = 227,
  sym_port = 228,
  sym_group_port = 229,
  sym_port_range = 230,
  sym_direction = 231,
  sym_options = 232,
  sym__opts = 233,
  sym_msg = 234,
  sym_sid = 235,
  sym_rev = 236,
  sym_gid = 237,
  sym_classtype = 238,
  sym_reference = 239,
  sym_priority = 240,
  sym_metadata = 241,
  sym_target = 242,
  sym_ttl = 243,
  sym_ipopts = 244,
  sym_ip_proto = 245,
  sym_geoip = 246,
  sym_id = 247,
  sym_fragbits = 248,
  sym_fragoffset = 249,
  sym_tos = 250,
  sym_seq = 251,
  sym_ack = 252,
  sym_window = 253,
  sym_tcp_mss = 254,
  sym_itype = 255,
  sym_icode = 256,
  sym_icmp_id = 257,
  sym_icmp_seq = 258,
  sym_icmpv6_mtu = 259,
  sym_content = 260,
  sym_depth = 261,
  sym_offset = 262,
  sym_distance = 263,
  sym_within = 264,
  sym_isdataat = 265,
  sym_bsize = 266,
  sym_dsize = 267,
  sym_rpc = 268,
  sym_replace = 269,
  sym_pcre = 270,
  sym_pcrexform = 271,
  sym_fast_pattern = 272,
  sym_flowbits = 273,
  sym_flow = 274,
  sym_flowint = 275,
  sym_stream_size = 276,
  sym_filename = 277,
  sym_fileext = 278,
  sym_filemagic = 279,
  sym_filestore = 280,
  sym_filemd5 = 281,
  sym_filesha1 = 282,
  sym_filesha256 = 283,
  sym_filesize = 284,
  sym_dns_opcode = 285,
  sym_tls_cert_subject = 286,
  sym_tls_cert_issuer = 287,
  sym_tls_cert_serial = 288,
  sym_tls_cert_fingerprint = 289,
  sym_tls_sni = 290,
  sym_tls_version = 291,
  sym_ssl_version = 292,
  sym_tls_subject = 293,
  sym_tls_issuerdn = 294,
  sym_tls_fingerprint = 295,
  sym_ssl_state = 296,
  sym_ssh_proto = 297,
  sym_ssh_software = 298,
  sym_ssh_protoversion = 299,
  sym_ssh_softwareversion = 300,
  sym_string = 301,
  sym_text = 302,
  sym_digit = 303,
  aux_sym_source_file_repeat1 = 304,
  aux_sym_group_location_repeat1 = 305,
  aux_sym_ipv6_repeat1 = 306,
  aux_sym_group_port_repeat1 = 307,
  aux_sym_options_repeat1 = 308,
  aux_sym_flow_repeat1 = 309,
  aux_sym_ssl_version_repeat1 = 310,
  aux_sym_ssl_state_repeat1 = 311,
  aux_sym_string_repeat1 = 312,
  aux_sym_text_repeat1 = 313,
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
  [anon_sym_flowbits_COLON] = "flowbits:",
  [anon_sym_set] = "set",
  [anon_sym_isset] = "isset",
  [anon_sym_toggle] = "toggle",
  [anon_sym_unset] = "unset",
  [anon_sym_isnotset] = "isnotset",
  [anon_sym_noalert] = "noalert",
  [anon_sym_flow_COLON] = "flow:",
  [anon_sym_to_client] = "to_client",
  [anon_sym_to_server] = "to_server",
  [anon_sym_from_client] = "from_client",
  [anon_sym_from_server] = "from_server",
  [anon_sym_established] = "established",
  [anon_sym_not_established] = "not_established",
  [anon_sym_stateless] = "stateless",
  [anon_sym_only_stream] = "only_stream",
  [anon_sym_no_stream] = "no_stream",
  [anon_sym_only_frag] = "only_frag",
  [anon_sym_no_frag] = "no_frag",
  [anon_sym_flowint_COLON] = "flowint:",
  [anon_sym_stream_size_COLON] = "stream_size:",
  [sym_bypass] = "bypass",
  [sym_http_uri] = "http_uri",
  [anon_sym_filename_COLON] = "filename:",
  [anon_sym_fileext_COLON] = "fileext:",
  [anon_sym_filemagic_COLON] = "filemagic:",
  [anon_sym_filestore_COLON] = "filestore:",
  [anon_sym_request_SLASHto_server] = "request/to_server",
  [anon_sym_response_SLASHto_client] = "response/to_client",
  [anon_sym_both] = "both",
  [anon_sym_file] = "file",
  [anon_sym_tx] = "tx",
  [anon_sym_ssn_SLASHflow] = "ssn/flow",
  [anon_sym_filemd5_COLON] = "filemd5:",
  [anon_sym_filesha1_COLON] = "filesha1:",
  [anon_sym_filesha256_COLON] = "filesha256:",
  [anon_sym_filesize_COLON] = "filesize:",
  [anon_sym_dns_DOTopcode_COLON] = "dns.opcode:",
  [sym_dns_query] = "dns_query",
  [anon_sym_tls_cert_subject] = "tls_cert_subject",
  [anon_sym_tls_DOTcert_subject] = "tls.cert_subject",
  [anon_sym_tls_cert_issuer] = "tls_cert_issuer",
  [anon_sym_tls_DOTcert_issuer] = "tls.cert_issuer",
  [anon_sym_tls_cert_serial] = "tls_cert_serial",
  [anon_sym_tls_DOTcert_serial] = "tls.cert_serial",
  [anon_sym_tls_cert_fingerprint] = "tls_cert_fingerprint",
  [anon_sym_tls_DOTcert_fingerprint] = "tls.cert_fingerprint",
  [anon_sym_tls_sni] = "tls_sni",
  [anon_sym_tls_DOTsni] = "tls.sni",
  [sym_tls_cert_notbefore] = "tls_cert_notbefore",
  [sym_tls_cert_notafter] = "tls_cert_notafter",
  [sym_tls_cert_expired] = "tls_cert_expired",
  [sym_tls_cert_valid] = "tls_cert_valid",
  [sym_tls_certs] = "tls_certs",
  [anon_sym_tls_DOTversion_COLON] = "tls.version:",
  [anon_sym_ssl_version_COLON] = "ssl_version:",
  [anon_sym_sslv2] = "sslv2",
  [anon_sym_sslv3] = "sslv3",
  [anon_sym_tls1_DOT0] = "tls1.0",
  [anon_sym_tls1_DOT1] = "tls1.1",
  [anon_sym_tls1_DOT2] = "tls1.2",
  [anon_sym_tls1_DOT3] = "tls1.3",
  [anon_sym_tls_DOTsubject_COLON] = "tls.subject:",
  [anon_sym_tls_DOTissuerdn_COLON] = "tls.issuerdn:",
  [anon_sym_tls_DOTfingerprint] = "tls.fingerprint",
  [sym_tls_store] = "tls_store",
  [anon_sym_ssl_state_COLON] = "ssl_state:",
  [anon_sym_client_hello] = "client_hello",
  [anon_sym_server_hello] = "server_hello",
  [anon_sym_client_keyx] = "client_keyx",
  [anon_sym_server_keyx] = "server_keyx",
  [anon_sym_unkown] = "unkown",
  [anon_sym_PIPE] = "|",
  [anon_sym_ssh_DOTproto] = "ssh.proto",
  [anon_sym_ssh_proto] = "ssh_proto",
  [anon_sym_ssh_DOTsoftware] = "ssh.software",
  [anon_sym_ssh_software] = "ssh_software",
  [anon_sym_ssh_DOTprotoversion_COLON] = "ssh.protoversion:",
  [anon_sym_2_compat] = "2_compat",
  [anon_sym_ssh_DOTsoftwareversion_COLON] = "ssh.softwareversion:",
  [sym_ssh_hassh] = "ssh_hassh",
  [sym_ssh_hassh_string] = "ssh_hassh_string",
  [sym_ssh_hassh_server] = "ssh_hassh_server",
  [sym_ssh_hassh_server_string] = "ssh_hassh_server_string",
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
  [sym_flowbits] = "flowbits",
  [sym_flow] = "flow",
  [sym_flowint] = "flowint",
  [sym_stream_size] = "stream_size",
  [sym_filename] = "filename",
  [sym_fileext] = "fileext",
  [sym_filemagic] = "filemagic",
  [sym_filestore] = "filestore",
  [sym_filemd5] = "filemd5",
  [sym_filesha1] = "filesha1",
  [sym_filesha256] = "filesha256",
  [sym_filesize] = "filesize",
  [sym_dns_opcode] = "dns_opcode",
  [sym_tls_cert_subject] = "tls_cert_subject",
  [sym_tls_cert_issuer] = "tls_cert_issuer",
  [sym_tls_cert_serial] = "tls_cert_serial",
  [sym_tls_cert_fingerprint] = "tls_cert_fingerprint",
  [sym_tls_sni] = "tls_sni",
  [sym_tls_version] = "tls_version",
  [sym_ssl_version] = "ssl_version",
  [sym_tls_subject] = "tls_subject",
  [sym_tls_issuerdn] = "tls_issuerdn",
  [sym_tls_fingerprint] = "tls_fingerprint",
  [sym_ssl_state] = "ssl_state",
  [sym_ssh_proto] = "ssh_proto",
  [sym_ssh_software] = "ssh_software",
  [sym_ssh_protoversion] = "ssh_protoversion",
  [sym_ssh_softwareversion] = "ssh_softwareversion",
  [sym_string] = "string",
  [sym_text] = "text",
  [sym_digit] = "digit",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_group_location_repeat1] = "group_location_repeat1",
  [aux_sym_ipv6_repeat1] = "ipv6_repeat1",
  [aux_sym_group_port_repeat1] = "group_port_repeat1",
  [aux_sym_options_repeat1] = "options_repeat1",
  [aux_sym_flow_repeat1] = "flow_repeat1",
  [aux_sym_ssl_version_repeat1] = "ssl_version_repeat1",
  [aux_sym_ssl_state_repeat1] = "ssl_state_repeat1",
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
  [anon_sym_flowbits_COLON] = anon_sym_flowbits_COLON,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_isset] = anon_sym_isset,
  [anon_sym_toggle] = anon_sym_toggle,
  [anon_sym_unset] = anon_sym_unset,
  [anon_sym_isnotset] = anon_sym_isnotset,
  [anon_sym_noalert] = anon_sym_noalert,
  [anon_sym_flow_COLON] = anon_sym_flow_COLON,
  [anon_sym_to_client] = anon_sym_to_client,
  [anon_sym_to_server] = anon_sym_to_server,
  [anon_sym_from_client] = anon_sym_from_client,
  [anon_sym_from_server] = anon_sym_from_server,
  [anon_sym_established] = anon_sym_established,
  [anon_sym_not_established] = anon_sym_not_established,
  [anon_sym_stateless] = anon_sym_stateless,
  [anon_sym_only_stream] = anon_sym_only_stream,
  [anon_sym_no_stream] = anon_sym_no_stream,
  [anon_sym_only_frag] = anon_sym_only_frag,
  [anon_sym_no_frag] = anon_sym_no_frag,
  [anon_sym_flowint_COLON] = anon_sym_flowint_COLON,
  [anon_sym_stream_size_COLON] = anon_sym_stream_size_COLON,
  [sym_bypass] = sym_bypass,
  [sym_http_uri] = sym_http_uri,
  [anon_sym_filename_COLON] = anon_sym_filename_COLON,
  [anon_sym_fileext_COLON] = anon_sym_fileext_COLON,
  [anon_sym_filemagic_COLON] = anon_sym_filemagic_COLON,
  [anon_sym_filestore_COLON] = anon_sym_filestore_COLON,
  [anon_sym_request_SLASHto_server] = anon_sym_request_SLASHto_server,
  [anon_sym_response_SLASHto_client] = anon_sym_response_SLASHto_client,
  [anon_sym_both] = anon_sym_both,
  [anon_sym_file] = anon_sym_file,
  [anon_sym_tx] = anon_sym_tx,
  [anon_sym_ssn_SLASHflow] = anon_sym_ssn_SLASHflow,
  [anon_sym_filemd5_COLON] = anon_sym_filemd5_COLON,
  [anon_sym_filesha1_COLON] = anon_sym_filesha1_COLON,
  [anon_sym_filesha256_COLON] = anon_sym_filesha256_COLON,
  [anon_sym_filesize_COLON] = anon_sym_filesize_COLON,
  [anon_sym_dns_DOTopcode_COLON] = anon_sym_dns_DOTopcode_COLON,
  [sym_dns_query] = sym_dns_query,
  [anon_sym_tls_cert_subject] = anon_sym_tls_cert_subject,
  [anon_sym_tls_DOTcert_subject] = anon_sym_tls_DOTcert_subject,
  [anon_sym_tls_cert_issuer] = anon_sym_tls_cert_issuer,
  [anon_sym_tls_DOTcert_issuer] = anon_sym_tls_DOTcert_issuer,
  [anon_sym_tls_cert_serial] = anon_sym_tls_cert_serial,
  [anon_sym_tls_DOTcert_serial] = anon_sym_tls_DOTcert_serial,
  [anon_sym_tls_cert_fingerprint] = anon_sym_tls_cert_fingerprint,
  [anon_sym_tls_DOTcert_fingerprint] = anon_sym_tls_DOTcert_fingerprint,
  [anon_sym_tls_sni] = anon_sym_tls_sni,
  [anon_sym_tls_DOTsni] = anon_sym_tls_DOTsni,
  [sym_tls_cert_notbefore] = sym_tls_cert_notbefore,
  [sym_tls_cert_notafter] = sym_tls_cert_notafter,
  [sym_tls_cert_expired] = sym_tls_cert_expired,
  [sym_tls_cert_valid] = sym_tls_cert_valid,
  [sym_tls_certs] = sym_tls_certs,
  [anon_sym_tls_DOTversion_COLON] = anon_sym_tls_DOTversion_COLON,
  [anon_sym_ssl_version_COLON] = anon_sym_ssl_version_COLON,
  [anon_sym_sslv2] = anon_sym_sslv2,
  [anon_sym_sslv3] = anon_sym_sslv3,
  [anon_sym_tls1_DOT0] = anon_sym_tls1_DOT0,
  [anon_sym_tls1_DOT1] = anon_sym_tls1_DOT1,
  [anon_sym_tls1_DOT2] = anon_sym_tls1_DOT2,
  [anon_sym_tls1_DOT3] = anon_sym_tls1_DOT3,
  [anon_sym_tls_DOTsubject_COLON] = anon_sym_tls_DOTsubject_COLON,
  [anon_sym_tls_DOTissuerdn_COLON] = anon_sym_tls_DOTissuerdn_COLON,
  [anon_sym_tls_DOTfingerprint] = anon_sym_tls_DOTfingerprint,
  [sym_tls_store] = sym_tls_store,
  [anon_sym_ssl_state_COLON] = anon_sym_ssl_state_COLON,
  [anon_sym_client_hello] = anon_sym_client_hello,
  [anon_sym_server_hello] = anon_sym_server_hello,
  [anon_sym_client_keyx] = anon_sym_client_keyx,
  [anon_sym_server_keyx] = anon_sym_server_keyx,
  [anon_sym_unkown] = anon_sym_unkown,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_ssh_DOTproto] = anon_sym_ssh_DOTproto,
  [anon_sym_ssh_proto] = anon_sym_ssh_proto,
  [anon_sym_ssh_DOTsoftware] = anon_sym_ssh_DOTsoftware,
  [anon_sym_ssh_software] = anon_sym_ssh_software,
  [anon_sym_ssh_DOTprotoversion_COLON] = anon_sym_ssh_DOTprotoversion_COLON,
  [anon_sym_2_compat] = anon_sym_2_compat,
  [anon_sym_ssh_DOTsoftwareversion_COLON] = anon_sym_ssh_DOTsoftwareversion_COLON,
  [sym_ssh_hassh] = sym_ssh_hassh,
  [sym_ssh_hassh_string] = sym_ssh_hassh_string,
  [sym_ssh_hassh_server] = sym_ssh_hassh_server,
  [sym_ssh_hassh_server_string] = sym_ssh_hassh_server_string,
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
  [sym_flowbits] = sym_flowbits,
  [sym_flow] = sym_flow,
  [sym_flowint] = sym_flowint,
  [sym_stream_size] = sym_stream_size,
  [sym_filename] = sym_filename,
  [sym_fileext] = sym_fileext,
  [sym_filemagic] = sym_filemagic,
  [sym_filestore] = sym_filestore,
  [sym_filemd5] = sym_filemd5,
  [sym_filesha1] = sym_filesha1,
  [sym_filesha256] = sym_filesha256,
  [sym_filesize] = sym_filesize,
  [sym_dns_opcode] = sym_dns_opcode,
  [sym_tls_cert_subject] = sym_tls_cert_subject,
  [sym_tls_cert_issuer] = sym_tls_cert_issuer,
  [sym_tls_cert_serial] = sym_tls_cert_serial,
  [sym_tls_cert_fingerprint] = sym_tls_cert_fingerprint,
  [sym_tls_sni] = sym_tls_sni,
  [sym_tls_version] = sym_tls_version,
  [sym_ssl_version] = sym_ssl_version,
  [sym_tls_subject] = sym_tls_subject,
  [sym_tls_issuerdn] = sym_tls_issuerdn,
  [sym_tls_fingerprint] = sym_tls_fingerprint,
  [sym_ssl_state] = sym_ssl_state,
  [sym_ssh_proto] = sym_ssh_proto,
  [sym_ssh_software] = sym_ssh_software,
  [sym_ssh_protoversion] = sym_ssh_protoversion,
  [sym_ssh_softwareversion] = sym_ssh_softwareversion,
  [sym_string] = sym_string,
  [sym_text] = sym_text,
  [sym_digit] = sym_digit,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_group_location_repeat1] = aux_sym_group_location_repeat1,
  [aux_sym_ipv6_repeat1] = aux_sym_ipv6_repeat1,
  [aux_sym_group_port_repeat1] = aux_sym_group_port_repeat1,
  [aux_sym_options_repeat1] = aux_sym_options_repeat1,
  [aux_sym_flow_repeat1] = aux_sym_flow_repeat1,
  [aux_sym_ssl_version_repeat1] = aux_sym_ssl_version_repeat1,
  [aux_sym_ssl_state_repeat1] = aux_sym_ssl_state_repeat1,
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
  [anon_sym_flowbits_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_isset] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_toggle] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unset] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_isnotset] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_noalert] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_flow_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_to_client] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_to_server] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_from_client] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_from_server] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_established] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not_established] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stateless] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_only_stream] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_stream] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_only_frag] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_frag] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_flowint_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stream_size_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_bypass] = {
    .visible = true,
    .named = true,
  },
  [sym_http_uri] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_filename_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fileext_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_filemagic_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_filestore_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_request_SLASHto_server] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_response_SLASHto_client] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_both] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_file] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ssn_SLASHflow] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_filemd5_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_filesha1_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_filesha256_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_filesize_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dns_DOTopcode_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_dns_query] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_tls_cert_subject] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tls_DOTcert_subject] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tls_cert_issuer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tls_DOTcert_issuer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tls_cert_serial] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tls_DOTcert_serial] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tls_cert_fingerprint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tls_DOTcert_fingerprint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tls_sni] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tls_DOTsni] = {
    .visible = true,
    .named = false,
  },
  [sym_tls_cert_notbefore] = {
    .visible = true,
    .named = true,
  },
  [sym_tls_cert_notafter] = {
    .visible = true,
    .named = true,
  },
  [sym_tls_cert_expired] = {
    .visible = true,
    .named = true,
  },
  [sym_tls_cert_valid] = {
    .visible = true,
    .named = true,
  },
  [sym_tls_certs] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_tls_DOTversion_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ssl_version_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sslv2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sslv3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tls1_DOT0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tls1_DOT1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tls1_DOT2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tls1_DOT3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tls_DOTsubject_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tls_DOTissuerdn_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tls_DOTfingerprint] = {
    .visible = true,
    .named = false,
  },
  [sym_tls_store] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ssl_state_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_client_hello] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_server_hello] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_client_keyx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_server_keyx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unkown] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ssh_DOTproto] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ssh_proto] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ssh_DOTsoftware] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ssh_software] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ssh_DOTprotoversion_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_2_compat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ssh_DOTsoftwareversion_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_ssh_hassh] = {
    .visible = true,
    .named = true,
  },
  [sym_ssh_hassh_string] = {
    .visible = true,
    .named = true,
  },
  [sym_ssh_hassh_server] = {
    .visible = true,
    .named = true,
  },
  [sym_ssh_hassh_server_string] = {
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
  [sym_flowbits] = {
    .visible = true,
    .named = true,
  },
  [sym_flow] = {
    .visible = true,
    .named = true,
  },
  [sym_flowint] = {
    .visible = true,
    .named = true,
  },
  [sym_stream_size] = {
    .visible = true,
    .named = true,
  },
  [sym_filename] = {
    .visible = true,
    .named = true,
  },
  [sym_fileext] = {
    .visible = true,
    .named = true,
  },
  [sym_filemagic] = {
    .visible = true,
    .named = true,
  },
  [sym_filestore] = {
    .visible = true,
    .named = true,
  },
  [sym_filemd5] = {
    .visible = true,
    .named = true,
  },
  [sym_filesha1] = {
    .visible = true,
    .named = true,
  },
  [sym_filesha256] = {
    .visible = true,
    .named = true,
  },
  [sym_filesize] = {
    .visible = true,
    .named = true,
  },
  [sym_dns_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_tls_cert_subject] = {
    .visible = true,
    .named = true,
  },
  [sym_tls_cert_issuer] = {
    .visible = true,
    .named = true,
  },
  [sym_tls_cert_serial] = {
    .visible = true,
    .named = true,
  },
  [sym_tls_cert_fingerprint] = {
    .visible = true,
    .named = true,
  },
  [sym_tls_sni] = {
    .visible = true,
    .named = true,
  },
  [sym_tls_version] = {
    .visible = true,
    .named = true,
  },
  [sym_ssl_version] = {
    .visible = true,
    .named = true,
  },
  [sym_tls_subject] = {
    .visible = true,
    .named = true,
  },
  [sym_tls_issuerdn] = {
    .visible = true,
    .named = true,
  },
  [sym_tls_fingerprint] = {
    .visible = true,
    .named = true,
  },
  [sym_ssl_state] = {
    .visible = true,
    .named = true,
  },
  [sym_ssh_proto] = {
    .visible = true,
    .named = true,
  },
  [sym_ssh_software] = {
    .visible = true,
    .named = true,
  },
  [sym_ssh_protoversion] = {
    .visible = true,
    .named = true,
  },
  [sym_ssh_softwareversion] = {
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
  [aux_sym_flow_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ssl_version_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ssl_state_repeat1] = {
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
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(869);
      if (lookahead == '!') ADVANCE(918);
      if (lookahead == '"') ADVANCE(1116);
      if (lookahead == '#') ADVANCE(870);
      if (lookahead == '$') ADVANCE(920);
      if (lookahead == '(') ADVANCE(958);
      if (lookahead == ')') ADVANCE(960);
      if (lookahead == '*') ADVANCE(1016);
      if (lookahead == ',') ADVANCE(916);
      if (lookahead == '-') ADVANCE(103);
      if (lookahead == '/') ADVANCE(861);
      if (lookahead == '2') ADVANCE(925);
      if (lookahead == ':') ADVANCE(955);
      if (lookahead == ';') ADVANCE(959);
      if (lookahead == '<') ADVANCE(1127);
      if (lookahead == '>') ADVANCE(1124);
      if (lookahead == '[') ADVANCE(915);
      if (lookahead == ']') ADVANCE(917);
      if (lookahead == 'a') ADVANCE(932);
      if (lookahead == 'b') ADVANCE(939);
      if (lookahead == 'c') ADVANCE(936);
      if (lookahead == 'd') ADVANCE(933);
      if (lookahead == 'e') ADVANCE(938);
      if (lookahead == 'f') ADVANCE(931);
      if (lookahead == 'g') ADVANCE(264);
      if (lookahead == 'h') ADVANCE(795);
      if (lookahead == 'i') ADVANCE(180);
      if (lookahead == 'k') ADVANCE(619);
      if (lookahead == 'l') ADVANCE(694);
      if (lookahead == 'm') ADVANCE(265);
      if (lookahead == 'n') ADVANCE(354);
      if (lookahead == 'o') ADVANCE(352);
      if (lookahead == 'p') ADVANCE(135);
      if (lookahead == 'r') ADVANCE(220);
      if (lookahead == 's') ADVANCE(126);
      if (lookahead == 't') ADVANCE(133);
      if (lookahead == 'u') ADVANCE(224);
      if (lookahead == 'w') ADVANCE(407);
      if (lookahead == 'x') ADVANCE(990);
      if (lookahead == '|') ADVANCE(1104);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(948);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(927);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(102)
      if (lookahead == '<') ADVANCE(1128);
      if (lookahead == '>') ADVANCE(1125);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1120);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1122);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != ';') ADVANCE(1123);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '!') ADVANCE(919);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1119);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != ';') ADVANCE(1123);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(101)
      if (lookahead == ';') ADVANCE(959);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1121);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1123);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(10)
      if (lookahead == '"') ADVANCE(1116);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1117);
      if (lookahead != 0) ADVANCE(1118);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(918);
      if (lookahead == '$') ADVANCE(920);
      if (lookahead == '[') ADVANCE(915);
      if (lookahead == ']') ADVANCE(917);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(927);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(948);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(918);
      if (lookahead == '*') ADVANCE(1016);
      if (lookahead == ':') ADVANCE(955);
      if (lookahead == ';') ADVANCE(959);
      if (lookahead == '<') ADVANCE(1126);
      if (lookahead == '>') ADVANCE(1124);
      if (lookahead == 'x') ADVANCE(990);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1130);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(918);
      if (lookahead == ',') ADVANCE(916);
      if (lookahead == '/') ADVANCE(861);
      if (lookahead == '[') ADVANCE(915);
      if (lookahead == ']') ADVANCE(917);
      if (lookahead == 'a') ADVANCE(937);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(944);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(948);
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(918);
      if (lookahead == '<') ADVANCE(1126);
      if (lookahead == '>') ADVANCE(1124);
      if (lookahead == 'd') ADVANCE(207);
      if (lookahead == 'e') ADVANCE(525);
      if (lookahead == 'f') ADVANCE(439);
      if (lookahead == 'h') ADVANCE(801);
      if (lookahead == 'i') ADVANCE(201);
      if (lookahead == 'k') ADVANCE(619);
      if (lookahead == 'm') ADVANCE(539);
      if (lookahead == 'n') ADVANCE(355);
      if (lookahead == 'o') ADVANCE(510);
      if (lookahead == 'r') ADVANCE(221);
      if (lookahead == 's') ADVANCE(430);
      if (lookahead == 't') ADVANCE(194);
      if (lookahead == 'u') ADVANCE(239);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1129);
      END_STATE();
    case 9:
      if (lookahead == '!') ADVANCE(918);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(1116);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(553);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(404);
      if (lookahead == '_') ADVANCE(615);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(393);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(208);
      if (lookahead == '1') ADVANCE(15);
      if (lookahead == '_') ADVANCE(209);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(27);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(403);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(863);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(399);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(817);
      END_STATE();
    case 21:
      if (lookahead == '.') ADVANCE(867);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '.') ADVANCE(400);
      END_STATE();
    case 23:
      if (lookahead == '.') ADVANCE(401);
      END_STATE();
    case 24:
      if (lookahead == '/') ADVANCE(359);
      END_STATE();
    case 25:
      if (lookahead == '/') ADVANCE(780);
      END_STATE();
    case 26:
      if (lookahead == '/') ADVANCE(782);
      END_STATE();
    case 27:
      if (lookahead == '0') ADVANCE(1090);
      if (lookahead == '1') ADVANCE(1091);
      if (lookahead == '2') ADVANCE(1092);
      if (lookahead == '3') ADVANCE(1093);
      END_STATE();
    case 28:
      if (lookahead == '1') ADVANCE(1023);
      if (lookahead == '2') ADVANCE(37);
      END_STATE();
    case 29:
      if (lookahead == '1') ADVANCE(75);
      if (lookahead == '2') ADVANCE(38);
      END_STATE();
    case 30:
      if (lookahead == '2') ADVANCE(905);
      END_STATE();
    case 31:
      if (lookahead == '2') ADVANCE(1088);
      if (lookahead == '3') ADVANCE(1089);
      END_STATE();
    case 32:
      if (lookahead == '2') ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(866);
      END_STATE();
    case 33:
      if (lookahead == '3') ADVANCE(902);
      END_STATE();
    case 34:
      if (lookahead == '4') ADVANCE(22);
      if (lookahead == '6') ADVANCE(23);
      END_STATE();
    case 35:
      if (lookahead == '5') ADVANCE(906);
      END_STATE();
    case 36:
      if (lookahead == '5') ADVANCE(1022);
      END_STATE();
    case 37:
      if (lookahead == '5') ADVANCE(40);
      END_STATE();
    case 38:
      if (lookahead == '5') ADVANCE(42);
      END_STATE();
    case 39:
      if (lookahead == '5') ADVANCE(68);
      END_STATE();
    case 40:
      if (lookahead == '6') ADVANCE(1024);
      END_STATE();
    case 41:
      if (lookahead == '6') ADVANCE(17);
      END_STATE();
    case 42:
      if (lookahead == '6') ADVANCE(91);
      END_STATE();
    case 43:
      if (lookahead == ':') ADVANCE(986);
      END_STATE();
    case 44:
      if (lookahead == ':') ADVANCE(992);
      END_STATE();
    case 45:
      if (lookahead == ':') ADVANCE(964);
      END_STATE();
    case 46:
      if (lookahead == ':') ADVANCE(961);
      END_STATE();
    case 47:
      if (lookahead == ':') ADVANCE(963);
      END_STATE();
    case 48:
      if (lookahead == ':') ADVANCE(1015);
      END_STATE();
    case 49:
      if (lookahead == ':') ADVANCE(991);
      END_STATE();
    case 50:
      if (lookahead == ':') ADVANCE(962);
      END_STATE();
    case 51:
      if (lookahead == ':') ADVANCE(989);
      END_STATE();
    case 52:
      if (lookahead == ':') ADVANCE(970);
      END_STATE();
    case 53:
      if (lookahead == ':') ADVANCE(1038);
      if (lookahead == 'b') ADVANCE(445);
      if (lookahead == 'i') ADVANCE(527);
      END_STATE();
    case 54:
      if (lookahead == ':') ADVANCE(1018);
      if (lookahead == 'x') ADVANCE(364);
      END_STATE();
    case 55:
      if (lookahead == ':') ADVANCE(1013);
      END_STATE();
    case 56:
      if (lookahead == ':') ADVANCE(1005);
      END_STATE();
    case 57:
      if (lookahead == ':') ADVANCE(1014);
      END_STATE();
    case 58:
      if (lookahead == ':') ADVANCE(985);
      END_STATE();
    case 59:
      if (lookahead == ':') ADVANCE(998);
      END_STATE();
    case 60:
      if (lookahead == ':') ADVANCE(997);
      END_STATE();
    case 61:
      if (lookahead == ':') ADVANCE(971);
      END_STATE();
    case 62:
      if (lookahead == ':') ADVANCE(1008);
      END_STATE();
    case 63:
      if (lookahead == ':') ADVANCE(969);
      END_STATE();
    case 64:
      if (lookahead == ':') ADVANCE(993);
      END_STATE();
    case 65:
      if (lookahead == ':') ADVANCE(1010);
      END_STATE();
    case 66:
      if (lookahead == ':') ADVANCE(1003);
      END_STATE();
    case 67:
      if (lookahead == ':') ADVANCE(1055);
      END_STATE();
    case 68:
      if (lookahead == ':') ADVANCE(1065);
      END_STATE();
    case 69:
      if (lookahead == ':') ADVANCE(1050);
      END_STATE();
    case 70:
      if (lookahead == ':') ADVANCE(999);
      END_STATE();
    case 71:
      if (lookahead == ':') ADVANCE(1017);
      END_STATE();
    case 72:
      if (lookahead == ':') ADVANCE(994);
      END_STATE();
    case 73:
      if (lookahead == ':') ADVANCE(1009);
      END_STATE();
    case 74:
      if (lookahead == ':') ADVANCE(1054);
      END_STATE();
    case 75:
      if (lookahead == ':') ADVANCE(1066);
      END_STATE();
    case 76:
      if (lookahead == ':') ADVANCE(1068);
      END_STATE();
    case 77:
      if (lookahead == ':') ADVANCE(1031);
      END_STATE();
    case 78:
      if (lookahead == ':') ADVANCE(987);
      END_STATE();
    case 79:
      if (lookahead == ':') ADVANCE(1000);
      END_STATE();
    case 80:
      if (lookahead == ':') ADVANCE(982);
      END_STATE();
    case 81:
      if (lookahead == ':') ADVANCE(1011);
      END_STATE();
    case 82:
      if (lookahead == ':') ADVANCE(968);
      END_STATE();
    case 83:
      if (lookahead == ':') ADVANCE(967);
      END_STATE();
    case 84:
      if (lookahead == ':') ADVANCE(965);
      END_STATE();
    case 85:
      if (lookahead == ':') ADVANCE(1056);
      END_STATE();
    case 86:
      if (lookahead == ':') ADVANCE(1057);
      END_STATE();
    case 87:
      if (lookahead == ':') ADVANCE(1025);
      END_STATE();
    case 88:
      if (lookahead == ':') ADVANCE(966);
      END_STATE();
    case 89:
      if (lookahead == ':') ADVANCE(1098);
      END_STATE();
    case 90:
      if (lookahead == ':') ADVANCE(1069);
      END_STATE();
    case 91:
      if (lookahead == ':') ADVANCE(1067);
      END_STATE();
    case 92:
      if (lookahead == ':') ADVANCE(988);
      END_STATE();
    case 93:
      if (lookahead == ':') ADVANCE(1002);
      END_STATE();
    case 94:
      if (lookahead == ':') ADVANCE(1087);
      END_STATE();
    case 95:
      if (lookahead == ':') ADVANCE(1051);
      END_STATE();
    case 96:
      if (lookahead == ':') ADVANCE(1094);
      END_STATE();
    case 97:
      if (lookahead == ':') ADVANCE(1086);
      END_STATE();
    case 98:
      if (lookahead == ':') ADVANCE(1095);
      END_STATE();
    case 99:
      if (lookahead == ':') ADVANCE(1109);
      END_STATE();
    case 100:
      if (lookahead == ':') ADVANCE(1111);
      END_STATE();
    case 101:
      if (lookahead == ';') ADVANCE(959);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(101)
      END_STATE();
    case 102:
      if (lookahead == '<') ADVANCE(1126);
      if (lookahead == '>') ADVANCE(1124);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(102)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1130);
      END_STATE();
    case 103:
      if (lookahead == '>') ADVANCE(956);
      END_STATE();
    case 104:
      if (lookahead == '>') ADVANCE(957);
      END_STATE();
    case 105:
      if (lookahead == '_') ADVANCE(358);
      if (lookahead == 'a') ADVANCE(483);
      if (lookahead == 'c') ADVANCE(146);
      if (lookahead == 'p') ADVANCE(974);
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 106:
      if (lookahead == '_') ADVANCE(358);
      if (lookahead == 'c') ADVANCE(146);
      if (lookahead == 'p') ADVANCE(974);
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 107:
      if (lookahead == '_') ADVANCE(191);
      if (lookahead == 'g') ADVANCE(379);
      if (lookahead == 's') ADVANCE(51);
      END_STATE();
    case 108:
      if (lookahead == '_') ADVANCE(191);
      if (lookahead == 's') ADVANCE(51);
      END_STATE();
    case 109:
      if (lookahead == '_') ADVANCE(725);
      if (lookahead == 'v') ADVANCE(31);
      END_STATE();
    case 110:
      if (lookahead == '_') ADVANCE(433);
      if (lookahead == 'v') ADVANCE(41);
      END_STATE();
    case 111:
      if (lookahead == '_') ADVANCE(396);
      END_STATE();
    case 112:
      if (lookahead == '_') ADVANCE(371);
      if (lookahead == 's') ADVANCE(1085);
      END_STATE();
    case 113:
      if (lookahead == '_') ADVANCE(270);
      END_STATE();
    case 114:
      if (lookahead == '_') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(865);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(864);
      END_STATE();
    case 115:
      if (lookahead == '_') ADVANCE(210);
      END_STATE();
    case 116:
      if (lookahead == '_') ADVANCE(838);
      END_STATE();
    case 117:
      if (lookahead == '_') ADVANCE(211);
      END_STATE();
    case 118:
      if (lookahead == '_') ADVANCE(327);
      END_STATE();
    case 119:
      if (lookahead == '_') ADVANCE(599);
      if (lookahead == 'o') ADVANCE(601);
      if (lookahead == 'v') ADVANCE(34);
      END_STATE();
    case 120:
      if (lookahead == '_') ADVANCE(731);
      END_STATE();
    case 121:
      if (lookahead == '_') ADVANCE(739);
      END_STATE();
    case 122:
      if (lookahead == '_') ADVANCE(405);
      END_STATE();
    case 123:
      if (lookahead == '_') ADVANCE(232);
      END_STATE();
    case 124:
      if (lookahead == '_') ADVANCE(365);
      END_STATE();
    case 125:
      if (lookahead == '_') ADVANCE(841);
      END_STATE();
    case 126:
      if (lookahead == 'a') ADVANCE(493);
      if (lookahead == 'e') ADVANCE(182);
      if (lookahead == 'i') ADVANCE(228);
      if (lookahead == 'm') ADVANCE(172);
      if (lookahead == 'n') ADVANCE(495);
      if (lookahead == 's') ADVANCE(384);
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 127:
      if (lookahead == 'a') ADVANCE(493);
      if (lookahead == 'e') ADVANCE(181);
      if (lookahead == 'i') ADVANCE(227);
      if (lookahead == 's') ADVANCE(390);
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 128:
      if (lookahead == 'a') ADVANCE(647);
      if (lookahead == 'r') ADVANCE(274);
      END_STATE();
    case 129:
      if (lookahead == 'a') ADVANCE(28);
      END_STATE();
    case 130:
      if (lookahead == 'a') ADVANCE(372);
      if (lookahead == 'o') ADVANCE(490);
      END_STATE();
    case 131:
      if (lookahead == 'a') ADVANCE(528);
      END_STATE();
    case 132:
      if (lookahead == 'a') ADVANCE(29);
      END_STATE();
    case 133:
      if (lookahead == 'a') ADVANCE(635);
      if (lookahead == 'c') ADVANCE(576);
      if (lookahead == 'f') ADVANCE(784);
      if (lookahead == 'l') ADVANCE(687);
      if (lookahead == 'o') ADVANCE(107);
      if (lookahead == 's') ADVANCE(975);
      if (lookahead == 't') ADVANCE(472);
      if (lookahead == 'x') ADVANCE(1063);
      END_STATE();
    case 134:
      if (lookahead == 'a') ADVANCE(635);
      if (lookahead == 'c') ADVANCE(595);
      if (lookahead == 'l') ADVANCE(692);
      if (lookahead == 'o') ADVANCE(108);
      if (lookahead == 's') ADVANCE(975);
      if (lookahead == 't') ADVANCE(472);
      END_STATE();
    case 135:
      if (lookahead == 'a') ADVANCE(701);
      if (lookahead == 'c') ADVANCE(638);
      if (lookahead == 'r') ADVANCE(263);
      END_STATE();
    case 136:
      if (lookahead == 'a') ADVANCE(175);
      END_STATE();
    case 137:
      if (lookahead == 'a') ADVANCE(500);
      END_STATE();
    case 138:
      if (lookahead == 'a') ADVANCE(243);
      END_STATE();
    case 139:
      if (lookahead == 'a') ADVANCE(378);
      if (lookahead == 'd') ADVANCE(39);
      END_STATE();
    case 140:
      if (lookahead == 'a') ADVANCE(488);
      END_STATE();
    case 141:
      if (lookahead == 'a') ADVANCE(719);
      if (lookahead == 'i') ADVANCE(245);
      END_STATE();
    case 142:
      if (lookahead == 'a') ADVANCE(373);
      END_STATE();
    case 143:
      if (lookahead == 'a') ADVANCE(203);
      END_STATE();
    case 144:
      if (lookahead == 'a') ADVANCE(489);
      END_STATE();
    case 145:
      if (lookahead == 'a') ADVANCE(374);
      END_STATE();
    case 146:
      if (lookahead == 'a') ADVANCE(704);
      END_STATE();
    case 147:
      if (lookahead == 'a') ADVANCE(480);
      END_STATE();
    case 148:
      if (lookahead == 'a') ADVANCE(770);
      END_STATE();
    case 149:
      if (lookahead == 'a') ADVANCE(583);
      END_STATE();
    case 150:
      if (lookahead == 'a') ADVANCE(462);
      END_STATE();
    case 151:
      if (lookahead == 'a') ADVANCE(463);
      END_STATE();
    case 152:
      if (lookahead == 'a') ADVANCE(747);
      END_STATE();
    case 153:
      if (lookahead == 'a') ADVANCE(806);
      END_STATE();
    case 154:
      if (lookahead == 'a') ADVANCE(82);
      END_STATE();
    case 155:
      if (lookahead == 'a') ADVANCE(811);
      END_STATE();
    case 156:
      if (lookahead == 'a') ADVANCE(491);
      END_STATE();
    case 157:
      if (lookahead == 'a') ADVANCE(702);
      END_STATE();
    case 158:
      if (lookahead == 'a') ADVANCE(368);
      if (lookahead == 'b') ADVANCE(322);
      END_STATE();
    case 159:
      if (lookahead == 'a') ADVANCE(195);
      END_STATE();
    case 160:
      if (lookahead == 'a') ADVANCE(775);
      END_STATE();
    case 161:
      if (lookahead == 'a') ADVANCE(165);
      END_STATE();
    case 162:
      if (lookahead == 'a') ADVANCE(196);
      END_STATE();
    case 163:
      if (lookahead == 'a') ADVANCE(779);
      END_STATE();
    case 164:
      if (lookahead == 'a') ADVANCE(708);
      END_STATE();
    case 165:
      if (lookahead == 'a') ADVANCE(791);
      END_STATE();
    case 166:
      if (lookahead == 'a') ADVANCE(699);
      if (lookahead == 'i') ADVANCE(478);
      if (lookahead == 'l') ADVANCE(532);
      if (lookahead == 'r') ADVANCE(130);
      END_STATE();
    case 167:
      if (lookahead == 'a') ADVANCE(660);
      END_STATE();
    case 168:
      if (lookahead == 'a') ADVANCE(661);
      END_STATE();
    case 169:
      if (lookahead == 'a') ADVANCE(177);
      END_STATE();
    case 170:
      if (lookahead == 'b') ADVANCE(35);
      END_STATE();
    case 171:
      if (lookahead == 'b') ADVANCE(909);
      END_STATE();
    case 172:
      if (lookahead == 'b') ADVANCE(893);
      if (lookahead == 't') ADVANCE(584);
      END_STATE();
    case 173:
      if (lookahead == 'b') ADVANCE(454);
      END_STATE();
    case 174:
      if (lookahead == 'b') ADVANCE(818);
      END_STATE();
    case 175:
      if (lookahead == 'b') ADVANCE(471);
      END_STATE();
    case 176:
      if (lookahead == 'b') ADVANCE(455);
      END_STATE();
    case 177:
      if (lookahead == 'b') ADVANCE(485);
      END_STATE();
    case 178:
      if (lookahead == 'b') ADVANCE(456);
      END_STATE();
    case 179:
      if (lookahead == 'b') ADVANCE(448);
      if (lookahead == 'o') ADVANCE(369);
      END_STATE();
    case 180:
      if (lookahead == 'c') ADVANCE(494);
      if (lookahead == 'd') ADVANCE(43);
      if (lookahead == 'k') ADVANCE(244);
      if (lookahead == 'm') ADVANCE(149);
      if (lookahead == 'p') ADVANCE(887);
      if (lookahead == 's') ADVANCE(223);
      if (lookahead == 't') ADVANCE(854);
      END_STATE();
    case 181:
      if (lookahead == 'c') ADVANCE(976);
      if (lookahead == 'q') ADVANCE(49);
      if (lookahead == 'r') ADVANCE(827);
      END_STATE();
    case 182:
      if (lookahead == 'c') ADVANCE(976);
      if (lookahead == 'q') ADVANCE(49);
      if (lookahead == 'r') ADVANCE(827);
      if (lookahead == 't') ADVANCE(1032);
      END_STATE();
    case 183:
      if (lookahead == 'c') ADVANCE(977);
      END_STATE();
    case 184:
      if (lookahead == 'c') ADVANCE(896);
      END_STATE();
    case 185:
      if (lookahead == 'c') ADVANCE(877);
      END_STATE();
    case 186:
      if (lookahead == 'c') ADVANCE(457);
      if (lookahead == 'l') ADVANCE(268);
      if (lookahead == 'n') ADVANCE(847);
      END_STATE();
    case 187:
      if (lookahead == 'c') ADVANCE(541);
      END_STATE();
    case 188:
      if (lookahead == 'c') ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1131);
      END_STATE();
    case 189:
      if (lookahead == 'c') ADVANCE(48);
      END_STATE();
    case 190:
      if (lookahead == 'c') ADVANCE(578);
      END_STATE();
    case 191:
      if (lookahead == 'c') ADVANCE(469);
      if (lookahead == 'm') ADVANCE(217);
      if (lookahead == 's') ADVANCE(279);
      END_STATE();
    case 192:
      if (lookahead == 'c') ADVANCE(568);
      END_STATE();
    case 193:
      if (lookahead == 'c') ADVANCE(745);
      END_STATE();
    case 194:
      if (lookahead == 'c') ADVANCE(588);
      if (lookahead == 'f') ADVANCE(784);
      if (lookahead == 'l') ADVANCE(693);
      if (lookahead == 'x') ADVANCE(1063);
      END_STATE();
    case 195:
      if (lookahead == 'c') ADVANCE(257);
      END_STATE();
    case 196:
      if (lookahead == 'c') ADVANCE(259);
      END_STATE();
    case 197:
      if (lookahead == 'c') ADVANCE(85);
      END_STATE();
    case 198:
      if (lookahead == 'c') ADVANCE(755);
      END_STATE();
    case 199:
      if (lookahead == 'c') ADVANCE(756);
      END_STATE();
    case 200:
      if (lookahead == 'c') ADVANCE(496);
      if (lookahead == 'd') ADVANCE(43);
      if (lookahead == 'p') ADVANCE(119);
      if (lookahead == 's') ADVANCE(222);
      if (lookahead == 't') ADVANCE(854);
      END_STATE();
    case 201:
      if (lookahead == 'c') ADVANCE(497);
      if (lookahead == 'k') ADVANCE(244);
      if (lookahead == 'm') ADVANCE(149);
      if (lookahead == 'p') ADVANCE(886);
      END_STATE();
    case 202:
      if (lookahead == 'c') ADVANCE(561);
      END_STATE();
    case 203:
      if (lookahead == 'c') ADVANCE(297);
      END_STATE();
    case 204:
      if (lookahead == 'c') ADVANCE(301);
      END_STATE();
    case 205:
      if (lookahead == 'c') ADVANCE(793);
      END_STATE();
    case 206:
      if (lookahead == 'c') ADVANCE(312);
      END_STATE();
    case 207:
      if (lookahead == 'c') ADVANCE(309);
      if (lookahead == 'h') ADVANCE(190);
      if (lookahead == 'n') ADVANCE(571);
      END_STATE();
    case 208:
      if (lookahead == 'c') ADVANCE(329);
      if (lookahead == 'f') ADVANCE(416);
      if (lookahead == 'i') ADVANCE(703);
      if (lookahead == 's') ADVANCE(507);
      if (lookahead == 'v') ADVANCE(347);
      END_STATE();
    case 209:
      if (lookahead == 'c') ADVANCE(334);
      if (lookahead == 's') ADVANCE(508);
      END_STATE();
    case 210:
      if (lookahead == 'c') ADVANCE(484);
      if (lookahead == 's') ADVANCE(344);
      END_STATE();
    case 211:
      if (lookahead == 'c') ADVANCE(487);
      END_STATE();
    case 212:
      if (lookahead == 'd') ADVANCE(980);
      END_STATE();
    case 213:
      if (lookahead == 'd') ADVANCE(1043);
      END_STATE();
    case 214:
      if (lookahead == 'd') ADVANCE(1084);
      END_STATE();
    case 215:
      if (lookahead == 'd') ADVANCE(1044);
      END_STATE();
    case 216:
      if (lookahead == 'd') ADVANCE(1083);
      END_STATE();
    case 217:
      if (lookahead == 'd') ADVANCE(36);
      END_STATE();
    case 218:
      if (lookahead == 'd') ADVANCE(45);
      END_STATE();
    case 219:
      if (lookahead == 'd') ADVANCE(174);
      END_STATE();
    case 220:
      if (lookahead == 'd') ADVANCE(574);
      if (lookahead == 'e') ADVANCE(362);
      if (lookahead == 'f') ADVANCE(171);
      if (lookahead == 'p') ADVANCE(189);
      if (lookahead == 'r') ADVANCE(972);
      END_STATE();
    case 221:
      if (lookahead == 'd') ADVANCE(574);
      if (lookahead == 'f') ADVANCE(171);
      END_STATE();
    case 222:
      if (lookahead == 'd') ADVANCE(160);
      END_STATE();
    case 223:
      if (lookahead == 'd') ADVANCE(160);
      if (lookahead == 'n') ADVANCE(549);
      if (lookahead == 's') ADVANCE(275);
      END_STATE();
    case 224:
      if (lookahead == 'd') ADVANCE(577);
      if (lookahead == 'n') ADVANCE(459);
      if (lookahead == 'r') ADVANCE(464);
      END_STATE();
    case 225:
      if (lookahead == 'd') ADVANCE(696);
      END_STATE();
    case 226:
      if (lookahead == 'd') ADVANCE(696);
      if (lookahead == 'i') ADVANCE(580);
      END_STATE();
    case 227:
      if (lookahead == 'd') ADVANCE(50);
      END_STATE();
    case 228:
      if (lookahead == 'd') ADVANCE(50);
      if (lookahead == 'p') ADVANCE(913);
      END_STATE();
    case 229:
      if (lookahead == 'd') ADVANCE(544);
      END_STATE();
    case 230:
      if (lookahead == 'd') ADVANCE(622);
      END_STATE();
    case 231:
      if (lookahead == 'd') ADVANCE(623);
      END_STATE();
    case 232:
      if (lookahead == 'd') ADVANCE(325);
      END_STATE();
    case 233:
      if (lookahead == 'd') ADVANCE(624);
      END_STATE();
    case 234:
      if (lookahead == 'd') ADVANCE(625);
      END_STATE();
    case 235:
      if (lookahead == 'd') ADVANCE(628);
      END_STATE();
    case 236:
      if (lookahead == 'd') ADVANCE(70);
      END_STATE();
    case 237:
      if (lookahead == 'd') ADVANCE(254);
      END_STATE();
    case 238:
      if (lookahead == 'd') ADVANCE(617);
      if (lookahead == 'n') ADVANCE(458);
      if (lookahead == 'r') ADVANCE(464);
      END_STATE();
    case 239:
      if (lookahead == 'd') ADVANCE(589);
      END_STATE();
    case 240:
      if (lookahead == 'd') ADVANCE(285);
      END_STATE();
    case 241:
      if (lookahead == 'd') ADVANCE(521);
      END_STATE();
    case 242:
      if (lookahead == 'd') ADVANCE(314);
      END_STATE();
    case 243:
      if (lookahead == 'd') ADVANCE(163);
      END_STATE();
    case 244:
      if (lookahead == 'e') ADVANCE(825);
      END_STATE();
    case 245:
      if (lookahead == 'e') ADVANCE(511);
      END_STATE();
    case 246:
      if (lookahead == 'e') ADVANCE(1062);
      END_STATE();
    case 247:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 248:
      if (lookahead == 'e') ADVANCE(846);
      if (lookahead == 'm') ADVANCE(139);
      if (lookahead == 'n') ADVANCE(137);
      if (lookahead == 's') ADVANCE(395);
      END_STATE();
    case 249:
      if (lookahead == 'e') ADVANCE(1004);
      END_STATE();
    case 250:
      if (lookahead == 'e') ADVANCE(1034);
      END_STATE();
    case 251:
      if (lookahead == 'e') ADVANCE(618);
      END_STATE();
    case 252:
      if (lookahead == 'e') ADVANCE(1012);
      END_STATE();
    case 253:
      if (lookahead == 'e') ADVANCE(1097);
      END_STATE();
    case 254:
      if (lookahead == 'e') ADVANCE(1026);
      END_STATE();
    case 255:
      if (lookahead == 'e') ADVANCE(1107);
      END_STATE();
    case 256:
      if (lookahead == 'e') ADVANCE(1108);
      END_STATE();
    case 257:
      if (lookahead == 'e') ADVANCE(1020);
      END_STATE();
    case 258:
      if (lookahead == 'e') ADVANCE(1081);
      END_STATE();
    case 259:
      if (lookahead == 'e') ADVANCE(1021);
      END_STATE();
    case 260:
      if (lookahead == 'e') ADVANCE(363);
      if (lookahead == 'p') ADVANCE(189);
      if (lookahead == 'r') ADVANCE(972);
      END_STATE();
    case 261:
      if (lookahead == 'e') ADVANCE(248);
      END_STATE();
    case 262:
      if (lookahead == 'e') ADVANCE(1061);
      END_STATE();
    case 263:
      if (lookahead == 'e') ADVANCE(356);
      if (lookahead == 'i') ADVANCE(550);
      END_STATE();
    case 264:
      if (lookahead == 'e') ADVANCE(540);
      if (lookahead == 'i') ADVANCE(218);
      END_STATE();
    case 265:
      if (lookahead == 'e') ADVANCE(763);
      if (lookahead == 'o') ADVANCE(219);
      if (lookahead == 's') ADVANCE(377);
      END_STATE();
    case 266:
      if (lookahead == 'e') ADVANCE(763);
      if (lookahead == 's') ADVANCE(377);
      END_STATE();
    case 267:
      if (lookahead == 'e') ADVANCE(183);
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 268:
      if (lookahead == 'e') ADVANCE(640);
      END_STATE();
    case 269:
      if (lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 270:
      if (lookahead == 'e') ADVANCE(845);
      if (lookahead == 'f') ADVANCE(453);
      if (lookahead == 'i') ADVANCE(736);
      if (lookahead == 'n') ADVANCE(558);
      if (lookahead == 's') ADVANCE(336);
      if (lookahead == 'v') ADVANCE(147);
      END_STATE();
    case 271:
      if (lookahead == 'e') ADVANCE(851);
      END_STATE();
    case 272:
      if (lookahead == 'e') ADVANCE(852);
      END_STATE();
    case 273:
      if (lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 274:
      if (lookahead == 'e') ADVANCE(156);
      if (lookahead == 'i') ADVANCE(594);
      END_STATE();
    case 275:
      if (lookahead == 'e') ADVANCE(743);
      END_STATE();
    case 276:
      if (lookahead == 'e') ADVANCE(667);
      END_STATE();
    case 277:
      if (lookahead == 'e') ADVANCE(481);
      END_STATE();
    case 278:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 279:
      if (lookahead == 'e') ADVANCE(675);
      if (lookahead == 'h') ADVANCE(129);
      END_STATE();
    case 280:
      if (lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 281:
      if (lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 282:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 283:
      if (lookahead == 'e') ADVANCE(651);
      END_STATE();
    case 284:
      if (lookahead == 'e') ADVANCE(744);
      END_STATE();
    case 285:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 286:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 287:
      if (lookahead == 'e') ADVANCE(636);
      END_STATE();
    case 288:
      if (lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 289:
      if (lookahead == 'e') ADVANCE(781);
      END_STATE();
    case 290:
      if (lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 291:
      if (lookahead == 'e') ADVANCE(626);
      END_STATE();
    case 292:
      if (lookahead == 'e') ADVANCE(627);
      END_STATE();
    case 293:
      if (lookahead == 'e') ADVANCE(724);
      END_STATE();
    case 294:
      if (lookahead == 'e') ADVANCE(642);
      END_STATE();
    case 295:
      if (lookahead == 'e') ADVANCE(659);
      END_STATE();
    case 296:
      if (lookahead == 'e') ADVANCE(643);
      END_STATE();
    case 297:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 298:
      if (lookahead == 'e') ADVANCE(748);
      END_STATE();
    case 299:
      if (lookahead == 'e') ADVANCE(629);
      END_STATE();
    case 300:
      if (lookahead == 'e') ADVANCE(597);
      if (lookahead == 'i') ADVANCE(720);
      if (lookahead == 'n') ADVANCE(697);
      if (lookahead == 'o') ADVANCE(809);
      if (lookahead == 'r') ADVANCE(548);
      if (lookahead == 's') ADVANCE(444);
      END_STATE();
    case 301:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 302:
      if (lookahead == 'e') ADVANCE(630);
      END_STATE();
    case 303:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 304:
      if (lookahead == 'e') ADVANCE(631);
      END_STATE();
    case 305:
      if (lookahead == 'e') ADVANCE(632);
      END_STATE();
    case 306:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 307:
      if (lookahead == 'e') ADVANCE(633);
      END_STATE();
    case 308:
      if (lookahead == 'e') ADVANCE(634);
      END_STATE();
    case 309:
      if (lookahead == 'e') ADVANCE(655);
      END_STATE();
    case 310:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 311:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 312:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 313:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 314:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 315:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 316:
      if (lookahead == 'e') ADVANCE(526);
      END_STATE();
    case 317:
      if (lookahead == 'e') ADVANCE(360);
      END_STATE();
    case 318:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 319:
      if (lookahead == 'e') ADVANCE(429);
      END_STATE();
    case 320:
      if (lookahead == 'e') ADVANCE(656);
      END_STATE();
    case 321:
      if (lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 322:
      if (lookahead == 'e') ADVANCE(367);
      END_STATE();
    case 323:
      if (lookahead == 'e') ADVANCE(650);
      if (lookahead == 'u') ADVANCE(176);
      END_STATE();
    case 324:
      if (lookahead == 'e') ADVANCE(783);
      END_STATE();
    case 325:
      if (lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 326:
      if (lookahead == 'e') ADVANCE(513);
      END_STATE();
    case 327:
      if (lookahead == 'e') ADVANCE(712);
      END_STATE();
    case 328:
      if (lookahead == 'e') ADVANCE(486);
      END_STATE();
    case 329:
      if (lookahead == 'e') ADVANCE(662);
      END_STATE();
    case 330:
      if (lookahead == 'e') ADVANCE(198);
      END_STATE();
    case 331:
      if (lookahead == 'e') ADVANCE(514);
      END_STATE();
    case 332:
      if (lookahead == 'e') ADVANCE(713);
      END_STATE();
    case 333:
      if (lookahead == 'e') ADVANCE(649);
      END_STATE();
    case 334:
      if (lookahead == 'e') ADVANCE(663);
      END_STATE();
    case 335:
      if (lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 336:
      if (lookahead == 'e') ADVANCE(668);
      if (lookahead == 'u') ADVANCE(178);
      END_STATE();
    case 337:
      if (lookahead == 'e') ADVANCE(705);
      END_STATE();
    case 338:
      if (lookahead == 'e') ADVANCE(516);
      END_STATE();
    case 339:
      if (lookahead == 'e') ADVANCE(710);
      END_STATE();
    case 340:
      if (lookahead == 'e') ADVANCE(792);
      END_STATE();
    case 341:
      if (lookahead == 'e') ADVANCE(482);
      END_STATE();
    case 342:
      if (lookahead == 'e') ADVANCE(726);
      END_STATE();
    case 343:
      if (lookahead == 'e') ADVANCE(529);
      END_STATE();
    case 344:
      if (lookahead == 'e') ADVANCE(677);
      END_STATE();
    case 345:
      if (lookahead == 'e') ADVANCE(679);
      if (lookahead == 't') ADVANCE(670);
      END_STATE();
    case 346:
      if (lookahead == 'e') ADVANCE(680);
      END_STATE();
    case 347:
      if (lookahead == 'e') ADVANCE(681);
      END_STATE();
    case 348:
      if (lookahead == 'e') ADVANCE(682);
      END_STATE();
    case 349:
      if (lookahead == 'e') ADVANCE(683);
      END_STATE();
    case 350:
      if (lookahead == 'e') ADVANCE(684);
      END_STATE();
    case 351:
      if (lookahead == 'e') ADVANCE(685);
      END_STATE();
    case 352:
      if (lookahead == 'f') ADVANCE(357);
      if (lookahead == 'n') ADVANCE(465);
      END_STATE();
    case 353:
      if (lookahead == 'f') ADVANCE(357);
      if (lookahead == 'n') ADVANCE(467);
      END_STATE();
    case 354:
      if (lookahead == 'f') ADVANCE(686);
      if (lookahead == 'o') ADVANCE(105);
      if (lookahead == 't') ADVANCE(573);
      END_STATE();
    case 355:
      if (lookahead == 'f') ADVANCE(686);
      if (lookahead == 't') ADVANCE(573);
      END_STATE();
    case 356:
      if (lookahead == 'f') ADVANCE(417);
      END_STATE();
    case 357:
      if (lookahead == 'f') ADVANCE(723);
      END_STATE();
    case 358:
      if (lookahead == 'f') ADVANCE(646);
      if (lookahead == 's') ADVANCE(802);
      END_STATE();
    case 359:
      if (lookahead == 'f') ADVANCE(473);
      END_STATE();
    case 360:
      if (lookahead == 'f') ADVANCE(412);
      END_STATE();
    case 361:
      if (lookahead == 'f') ADVANCE(768);
      END_STATE();
    case 362:
      if (lookahead == 'f') ADVANCE(333);
      if (lookahead == 'j') ADVANCE(269);
      if (lookahead == 'l') ADVANCE(148);
      if (lookahead == 'p') ADVANCE(468);
      if (lookahead == 'q') ADVANCE(824);
      if (lookahead == 's') ADVANCE(600);
      if (lookahead == 'v') ADVANCE(47);
      END_STATE();
    case 363:
      if (lookahead == 'f') ADVANCE(333);
      if (lookahead == 'j') ADVANCE(269);
      if (lookahead == 'p') ADVANCE(468);
      if (lookahead == 'q') ADVANCE(824);
      if (lookahead == 's') ADVANCE(600);
      if (lookahead == 'v') ADVANCE(47);
      END_STATE();
    case 364:
      if (lookahead == 'f') ADVANCE(551);
      END_STATE();
    case 365:
      if (lookahead == 'f') ADVANCE(653);
      if (lookahead == 's') ADVANCE(804);
      END_STATE();
    case 366:
      if (lookahead == 'f') ADVANCE(728);
      END_STATE();
    case 367:
      if (lookahead == 'f') ADVANCE(567);
      END_STATE();
    case 368:
      if (lookahead == 'f') ADVANCE(807);
      END_STATE();
    case 369:
      if (lookahead == 'f') ADVANCE(366);
      END_STATE();
    case 370:
      if (lookahead == 'f') ADVANCE(815);
      END_STATE();
    case 371:
      if (lookahead == 'f') ADVANCE(452);
      if (lookahead == 'i') ADVANCE(734);
      if (lookahead == 's') ADVANCE(323);
      END_STATE();
    case 372:
      if (lookahead == 'g') ADVANCE(179);
      END_STATE();
    case 373:
      if (lookahead == 'g') ADVANCE(1049);
      END_STATE();
    case 374:
      if (lookahead == 'g') ADVANCE(1048);
      END_STATE();
    case 375:
      if (lookahead == 'g') ADVANCE(1113);
      END_STATE();
    case 376:
      if (lookahead == 'g') ADVANCE(1115);
      END_STATE();
    case 377:
      if (lookahead == 'g') ADVANCE(46);
      END_STATE();
    case 378:
      if (lookahead == 'g') ADVANCE(434);
      END_STATE();
    case 379:
      if (lookahead == 'g') ADVANCE(474);
      END_STATE();
    case 380:
      if (lookahead == 'g') ADVANCE(324);
      END_STATE();
    case 381:
      if (lookahead == 'g') ADVANCE(295);
      END_STATE();
    case 382:
      if (lookahead == 'g') ADVANCE(348);
      END_STATE();
    case 383:
      if (lookahead == 'g') ADVANCE(350);
      END_STATE();
    case 384:
      if (lookahead == 'h') ADVANCE(898);
      if (lookahead == 'l') ADVANCE(109);
      if (lookahead == 'n') ADVANCE(24);
      if (lookahead == 'r') ADVANCE(621);
      END_STATE();
    case 385:
      if (lookahead == 'h') ADVANCE(1060);
      END_STATE();
    case 386:
      if (lookahead == 'h') ADVANCE(1007);
      END_STATE();
    case 387:
      if (lookahead == 'h') ADVANCE(1112);
      END_STATE();
    case 388:
      if (lookahead == 'h') ADVANCE(879);
      END_STATE();
    case 389:
      if (lookahead == 'h') ADVANCE(1006);
      END_STATE();
    case 390:
      if (lookahead == 'h') ADVANCE(12);
      if (lookahead == 'l') ADVANCE(109);
      if (lookahead == 'r') ADVANCE(621);
      END_STATE();
    case 391:
      if (lookahead == 'h') ADVANCE(897);
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 392:
      if (lookahead == 'h') ADVANCE(415);
      END_STATE();
    case 393:
      if (lookahead == 'h') ADVANCE(230);
      if (lookahead == 'm') ADVANCE(722);
      END_STATE();
    case 394:
      if (lookahead == 'h') ADVANCE(56);
      END_STATE();
    case 395:
      if (lookahead == 'h') ADVANCE(132);
      if (lookahead == 'i') ADVANCE(859);
      if (lookahead == 't') ADVANCE(564);
      END_STATE();
    case 396:
      if (lookahead == 'h') ADVANCE(277);
      if (lookahead == 'k') ADVANCE(271);
      END_STATE();
    case 397:
      if (lookahead == 'h') ADVANCE(273);
      END_STATE();
    case 398:
      if (lookahead == 'h') ADVANCE(280);
      END_STATE();
    case 399:
      if (lookahead == 'h') ADVANCE(231);
      END_STATE();
    case 400:
      if (lookahead == 'h') ADVANCE(233);
      END_STATE();
    case 401:
      if (lookahead == 'h') ADVANCE(234);
      END_STATE();
    case 402:
      if (lookahead == 'h') ADVANCE(432);
      END_STATE();
    case 403:
      if (lookahead == 'h') ADVANCE(235);
      if (lookahead == 'm') ADVANCE(766);
      END_STATE();
    case 404:
      if (lookahead == 'h') ADVANCE(164);
      if (lookahead == 'p') ADVANCE(669);
      if (lookahead == 's') ADVANCE(545);
      END_STATE();
    case 405:
      if (lookahead == 'h') ADVANCE(341);
      if (lookahead == 'k') ADVANCE(272);
      END_STATE();
    case 406:
      if (lookahead == 'h') ADVANCE(447);
      END_STATE();
    case 407:
      if (lookahead == 'i') ADVANCE(503);
      END_STATE();
    case 408:
      if (lookahead == 'i') ADVANCE(857);
      END_STATE();
    case 409:
      if (lookahead == 'i') ADVANCE(1080);
      END_STATE();
    case 410:
      if (lookahead == 'i') ADVANCE(1079);
      END_STATE();
    case 411:
      if (lookahead == 'i') ADVANCE(1053);
      END_STATE();
    case 412:
      if (lookahead == 'i') ADVANCE(842);
      END_STATE();
    case 413:
      if (lookahead == 'i') ADVANCE(826);
      END_STATE();
    case 414:
      if (lookahead == 'i') ADVANCE(212);
      END_STATE();
    case 415:
      if (lookahead == 'i') ADVANCE(512);
      END_STATE();
    case 416:
      if (lookahead == 'i') ADVANCE(504);
      END_STATE();
    case 417:
      if (lookahead == 'i') ADVANCE(477);
      END_STATE();
    case 418:
      if (lookahead == 'i') ADVANCE(505);
      END_STATE();
    case 419:
      if (lookahead == 'i') ADVANCE(580);
      END_STATE();
    case 420:
      if (lookahead == 'i') ADVANCE(506);
      END_STATE();
    case 421:
      if (lookahead == 'i') ADVANCE(214);
      END_STATE();
    case 422:
      if (lookahead == 'i') ADVANCE(698);
      END_STATE();
    case 423:
      if (lookahead == 'i') ADVANCE(560);
      END_STATE();
    case 424:
      if (lookahead == 'i') ADVANCE(764);
      END_STATE();
    case 425:
      if (lookahead == 'i') ADVANCE(603);
      END_STATE();
    case 426:
      if (lookahead == 'i') ADVANCE(150);
      END_STATE();
    case 427:
      if (lookahead == 'i') ADVANCE(151);
      END_STATE();
    case 428:
      if (lookahead == 'i') ADVANCE(762);
      END_STATE();
    case 429:
      if (lookahead == 'i') ADVANCE(587);
      END_STATE();
    case 430:
      if (lookahead == 'i') ADVANCE(575);
      if (lookahead == 'm') ADVANCE(172);
      if (lookahead == 'n') ADVANCE(495);
      if (lookahead == 's') ADVANCE(391);
      END_STATE();
    case 431:
      if (lookahead == 'i') ADVANCE(772);
      END_STATE();
    case 432:
      if (lookahead == 'i') ADVANCE(788);
      END_STATE();
    case 433:
      if (lookahead == 'i') ADVANCE(236);
      if (lookahead == 's') ADVANCE(251);
      END_STATE();
    case 434:
      if (lookahead == 'i') ADVANCE(197);
      END_STATE();
    case 435:
      if (lookahead == 'i') ADVANCE(721);
      END_STATE();
    case 436:
      if (lookahead == 'i') ADVANCE(326);
      END_STATE();
    case 437:
      if (lookahead == 'i') ADVANCE(331);
      END_STATE();
    case 438:
      if (lookahead == 'i') ADVANCE(515);
      END_STATE();
    case 439:
      if (lookahead == 'i') ADVANCE(479);
      if (lookahead == 't') ADVANCE(572);
      END_STATE();
    case 440:
      if (lookahead == 'i') ADVANCE(338);
      END_STATE();
    case 441:
      if (lookahead == 'i') ADVANCE(517);
      END_STATE();
    case 442:
      if (lookahead == 'i') ADVANCE(519);
      END_STATE();
    case 443:
      if (lookahead == 'i') ADVANCE(664);
      END_STATE();
    case 444:
      if (lookahead == 'i') ADVANCE(858);
      END_STATE();
    case 445:
      if (lookahead == 'i') ADVANCE(797);
      END_STATE();
    case 446:
      if (lookahead == 'i') ADVANCE(562);
      END_STATE();
    case 447:
      if (lookahead == 'i') ADVANCE(813);
      END_STATE();
    case 448:
      if (lookahead == 'i') ADVANCE(800);
      END_STATE();
    case 449:
      if (lookahead == 'i') ADVANCE(563);
      END_STATE();
    case 450:
      if (lookahead == 'i') ADVANCE(860);
      END_STATE();
    case 451:
      if (lookahead == 'i') ADVANCE(565);
      END_STATE();
    case 452:
      if (lookahead == 'i') ADVANCE(530);
      END_STATE();
    case 453:
      if (lookahead == 'i') ADVANCE(531);
      END_STATE();
    case 454:
      if (lookahead == 'j') ADVANCE(321);
      END_STATE();
    case 455:
      if (lookahead == 'j') ADVANCE(330);
      END_STATE();
    case 456:
      if (lookahead == 'j') ADVANCE(335);
      END_STATE();
    case 457:
      if (lookahead == 'k') ADVANCE(44);
      END_STATE();
    case 458:
      if (lookahead == 'k') ADVANCE(542);
      END_STATE();
    case 459:
      if (lookahead == 'k') ADVANCE(542);
      if (lookahead == 's') ADVANCE(284);
      END_STATE();
    case 460:
      if (lookahead == 'l') ADVANCE(141);
      if (lookahead == 'o') ADVANCE(492);
      END_STATE();
    case 461:
      if (lookahead == 'l') ADVANCE(973);
      END_STATE();
    case 462:
      if (lookahead == 'l') ADVANCE(1076);
      END_STATE();
    case 463:
      if (lookahead == 'l') ADVANCE(1075);
      END_STATE();
    case 464:
      if (lookahead == 'l') ADVANCE(123);
      END_STATE();
    case 465:
      if (lookahead == 'l') ADVANCE(848);
      END_STATE();
    case 466:
      if (lookahead == 'l') ADVANCE(246);
      END_STATE();
    case 467:
      if (lookahead == 'l') ADVANCE(853);
      END_STATE();
    case 468:
      if (lookahead == 'l') ADVANCE(143);
      END_STATE();
    case 469:
      if (lookahead == 'l') ADVANCE(436);
      END_STATE();
    case 470:
      if (lookahead == 'l') ADVANCE(850);
      END_STATE();
    case 471:
      if (lookahead == 'l') ADVANCE(422);
      END_STATE();
    case 472:
      if (lookahead == 'l') ADVANCE(52);
      END_STATE();
    case 473:
      if (lookahead == 'l') ADVANCE(546);
      END_STATE();
    case 474:
      if (lookahead == 'l') ADVANCE(250);
      END_STATE();
    case 475:
      if (lookahead == 'l') ADVANCE(535);
      END_STATE();
    case 476:
      if (lookahead == 'l') ADVANCE(536);
      END_STATE();
    case 477:
      if (lookahead == 'l') ADVANCE(803);
      END_STATE();
    case 478:
      if (lookahead == 'l') ADVANCE(261);
      END_STATE();
    case 479:
      if (lookahead == 'l') ADVANCE(262);
      END_STATE();
    case 480:
      if (lookahead == 'l') ADVANCE(421);
      END_STATE();
    case 481:
      if (lookahead == 'l') ADVANCE(475);
      END_STATE();
    case 482:
      if (lookahead == 'l') ADVANCE(476);
      END_STATE();
    case 483:
      if (lookahead == 'l') ADVANCE(320);
      END_STATE();
    case 484:
      if (lookahead == 'l') ADVANCE(437);
      END_STATE();
    case 485:
      if (lookahead == 'l') ADVANCE(435);
      END_STATE();
    case 486:
      if (lookahead == 'l') ADVANCE(339);
      END_STATE();
    case 487:
      if (lookahead == 'l') ADVANCE(440);
      END_STATE();
    case 488:
      if (lookahead == 'm') ADVANCE(1047);
      END_STATE();
    case 489:
      if (lookahead == 'm') ADVANCE(1046);
      END_STATE();
    case 490:
      if (lookahead == 'm') ADVANCE(115);
      END_STATE();
    case 491:
      if (lookahead == 'm') ADVANCE(120);
      END_STATE();
    case 492:
      if (lookahead == 'm') ADVANCE(606);
      if (lookahead == 'n') ADVANCE(796);
      END_STATE();
    case 493:
      if (lookahead == 'm') ADVANCE(319);
      if (lookahead == 't') ADVANCE(414);
      END_STATE();
    case 494:
      if (lookahead == 'm') ADVANCE(582);
      if (lookahead == 'o') ADVANCE(240);
      END_STATE();
    case 495:
      if (lookahead == 'm') ADVANCE(585);
      END_STATE();
    case 496:
      if (lookahead == 'm') ADVANCE(593);
      if (lookahead == 'o') ADVANCE(240);
      END_STATE();
    case 497:
      if (lookahead == 'm') ADVANCE(591);
      END_STATE();
    case 498:
      if (lookahead == 'm') ADVANCE(87);
      END_STATE();
    case 499:
      if (lookahead == 'm') ADVANCE(607);
      END_STATE();
    case 500:
      if (lookahead == 'm') ADVANCE(303);
      END_STATE();
    case 501:
      if (lookahead == 'n') ADVANCE(1103);
      END_STATE();
    case 502:
      if (lookahead == 'n') ADVANCE(1027);
      END_STATE();
    case 503:
      if (lookahead == 'n') ADVANCE(229);
      if (lookahead == 't') ADVANCE(392);
      END_STATE();
    case 504:
      if (lookahead == 'n') ADVANCE(381);
      END_STATE();
    case 505:
      if (lookahead == 'n') ADVANCE(375);
      END_STATE();
    case 506:
      if (lookahead == 'n') ADVANCE(376);
      END_STATE();
    case 507:
      if (lookahead == 'n') ADVANCE(409);
      if (lookahead == 't') ADVANCE(566);
      if (lookahead == 'u') ADVANCE(173);
      END_STATE();
    case 508:
      if (lookahead == 'n') ADVANCE(410);
      END_STATE();
    case 509:
      if (lookahead == 'n') ADVANCE(225);
      if (lookahead == 'o') ADVANCE(461);
      if (lookahead == 's') ADVANCE(267);
      END_STATE();
    case 510:
      if (lookahead == 'n') ADVANCE(470);
      END_STATE();
    case 511:
      if (lookahead == 'n') ADVANCE(765);
      END_STATE();
    case 512:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 513:
      if (lookahead == 'n') ADVANCE(751);
      END_STATE();
    case 514:
      if (lookahead == 'n') ADVANCE(752);
      END_STATE();
    case 515:
      if (lookahead == 'n') ADVANCE(754);
      END_STATE();
    case 516:
      if (lookahead == 'n') ADVANCE(757);
      END_STATE();
    case 517:
      if (lookahead == 'n') ADVANCE(758);
      END_STATE();
    case 518:
      if (lookahead == 'n') ADVANCE(94);
      END_STATE();
    case 519:
      if (lookahead == 'n') ADVANCE(759);
      END_STATE();
    case 520:
      if (lookahead == 'n') ADVANCE(97);
      END_STATE();
    case 521:
      if (lookahead == 'n') ADVANCE(98);
      END_STATE();
    case 522:
      if (lookahead == 'n') ADVANCE(99);
      END_STATE();
    case 523:
      if (lookahead == 'n') ADVANCE(100);
      END_STATE();
    case 524:
      if (lookahead == 'n') ADVANCE(711);
      END_STATE();
    case 525:
      if (lookahead == 'n') ADVANCE(419);
      END_STATE();
    case 526:
      if (lookahead == 'n') ADVANCE(785);
      END_STATE();
    case 527:
      if (lookahead == 'n') ADVANCE(787);
      END_STATE();
    case 528:
      if (lookahead == 'n') ADVANCE(204);
      END_STATE();
    case 529:
      if (lookahead == 'n') ADVANCE(206);
      END_STATE();
    case 530:
      if (lookahead == 'n') ADVANCE(382);
      END_STATE();
    case 531:
      if (lookahead == 'n') ADVANCE(383);
      END_STATE();
    case 532:
      if (lookahead == 'o') ADVANCE(832);
      END_STATE();
    case 533:
      if (lookahead == 'o') ADVANCE(1105);
      END_STATE();
    case 534:
      if (lookahead == 'o') ADVANCE(1106);
      END_STATE();
    case 535:
      if (lookahead == 'o') ADVANCE(1099);
      END_STATE();
    case 536:
      if (lookahead == 'o') ADVANCE(1100);
      END_STATE();
    case 537:
      if (lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 538:
      if (lookahead == 'o') ADVANCE(741);
      if (lookahead == 's') ADVANCE(408);
      if (lookahead == 'y') ADVANCE(592);
      END_STATE();
    case 539:
      if (lookahead == 'o') ADVANCE(219);
      END_STATE();
    case 540:
      if (lookahead == 'o') ADVANCE(425);
      END_STATE();
    case 541:
      if (lookahead == 'o') ADVANCE(499);
      END_STATE();
    case 542:
      if (lookahead == 'o') ADVANCE(834);
      END_STATE();
    case 543:
      if (lookahead == 'o') ADVANCE(524);
      END_STATE();
    case 544:
      if (lookahead == 'o') ADVANCE(836);
      END_STATE();
    case 545:
      if (lookahead == 'o') ADVANCE(361);
      END_STATE();
    case 546:
      if (lookahead == 'o') ADVANCE(833);
      END_STATE();
    case 547:
      if (lookahead == 'o') ADVANCE(117);
      END_STATE();
    case 548:
      if (lookahead == 'o') ADVANCE(579);
      END_STATE();
    case 549:
      if (lookahead == 'o') ADVANCE(810);
      END_STATE();
    case 550:
      if (lookahead == 'o') ADVANCE(671);
      END_STATE();
    case 551:
      if (lookahead == 'o') ADVANCE(639);
      END_STATE();
    case 552:
      if (lookahead == 'o') ADVANCE(776);
      END_STATE();
    case 553:
      if (lookahead == 'o') ADVANCE(605);
      if (lookahead == 'q') ADVANCE(820);
      END_STATE();
    case 554:
      if (lookahead == 'o') ADVANCE(777);
      END_STATE();
    case 555:
      if (lookahead == 'o') ADVANCE(778);
      END_STATE();
    case 556:
      if (lookahead == 'o') ADVANCE(771);
      END_STATE();
    case 557:
      if (lookahead == 'o') ADVANCE(80);
      END_STATE();
    case 558:
      if (lookahead == 'o') ADVANCE(753);
      END_STATE();
    case 559:
      if (lookahead == 'o') ADVANCE(121);
      END_STATE();
    case 560:
      if (lookahead == 'o') ADVANCE(518);
      END_STATE();
    case 561:
      if (lookahead == 'o') ADVANCE(237);
      END_STATE();
    case 562:
      if (lookahead == 'o') ADVANCE(520);
      END_STATE();
    case 563:
      if (lookahead == 'o') ADVANCE(522);
      END_STATE();
    case 564:
      if (lookahead == 'o') ADVANCE(674);
      END_STATE();
    case 565:
      if (lookahead == 'o') ADVANCE(523);
      END_STATE();
    case 566:
      if (lookahead == 'o') ADVANCE(658);
      END_STATE();
    case 567:
      if (lookahead == 'o') ADVANCE(665);
      END_STATE();
    case 568:
      if (lookahead == 'o') ADVANCE(242);
      END_STATE();
    case 569:
      if (lookahead == 'o') ADVANCE(370);
      END_STATE();
    case 570:
      if (lookahead == 'p') ADVANCE(33);
      if (lookahead == 's') ADVANCE(895);
      END_STATE();
    case 571:
      if (lookahead == 'p') ADVANCE(33);
      if (lookahead == 's') ADVANCE(894);
      END_STATE();
    case 572:
      if (lookahead == 'p') ADVANCE(890);
      END_STATE();
    case 573:
      if (lookahead == 'p') ADVANCE(907);
      END_STATE();
    case 574:
      if (lookahead == 'p') ADVANCE(910);
      END_STATE();
    case 575:
      if (lookahead == 'p') ADVANCE(913);
      END_STATE();
    case 576:
      if (lookahead == 'p') ADVANCE(881);
      END_STATE();
    case 577:
      if (lookahead == 'p') ADVANCE(883);
      END_STATE();
    case 578:
      if (lookahead == 'p') ADVANCE(908);
      END_STATE();
    case 579:
      if (lookahead == 'p') ADVANCE(875);
      END_STATE();
    case 580:
      if (lookahead == 'p') ADVANCE(903);
      END_STATE();
    case 581:
      if (lookahead == 'p') ADVANCE(888);
      END_STATE();
    case 582:
      if (lookahead == 'p') ADVANCE(885);
      END_STATE();
    case 583:
      if (lookahead == 'p') ADVANCE(900);
      END_STATE();
    case 584:
      if (lookahead == 'p') ADVANCE(899);
      END_STATE();
    case 585:
      if (lookahead == 'p') ADVANCE(911);
      END_STATE();
    case 586:
      if (lookahead == 'p') ADVANCE(912);
      END_STATE();
    case 587:
      if (lookahead == 'p') ADVANCE(981);
      END_STATE();
    case 588:
      if (lookahead == 'p') ADVANCE(880);
      END_STATE();
    case 589:
      if (lookahead == 'p') ADVANCE(882);
      END_STATE();
    case 590:
      if (lookahead == 'p') ADVANCE(889);
      END_STATE();
    case 591:
      if (lookahead == 'p') ADVANCE(884);
      END_STATE();
    case 592:
      if (lookahead == 'p') ADVANCE(157);
      END_STATE();
    case 593:
      if (lookahead == 'p') ADVANCE(110);
      END_STATE();
    case 594:
      if (lookahead == 'p') ADVANCE(116);
      END_STATE();
    case 595:
      if (lookahead == 'p') ADVANCE(13);
      END_STATE();
    case 596:
      if (lookahead == 'p') ADVANCE(20);
      END_STATE();
    case 597:
      if (lookahead == 'p') ADVANCE(761);
      END_STATE();
    case 598:
      if (lookahead == 'p') ADVANCE(184);
      END_STATE();
    case 599:
      if (lookahead == 'p') ADVANCE(666);
      END_STATE();
    case 600:
      if (lookahead == 'p') ADVANCE(543);
      END_STATE();
    case 601:
      if (lookahead == 'p') ADVANCE(774);
      END_STATE();
    case 602:
      if (lookahead == 'p') ADVANCE(155);
      END_STATE();
    case 603:
      if (lookahead == 'p') ADVANCE(58);
      END_STATE();
    case 604:
      if (lookahead == 'p') ADVANCE(443);
      END_STATE();
    case 605:
      if (lookahead == 'p') ADVANCE(192);
      END_STATE();
    case 606:
      if (lookahead == 'p') ADVANCE(644);
      END_STATE();
    case 607:
      if (lookahead == 'p') ADVANCE(152);
      END_STATE();
    case 608:
      if (lookahead == 'p') ADVANCE(159);
      END_STATE();
    case 609:
      if (lookahead == 'p') ADVANCE(645);
      END_STATE();
    case 610:
      if (lookahead == 'p') ADVANCE(162);
      END_STATE();
    case 611:
      if (lookahead == 'p') ADVANCE(652);
      END_STATE();
    case 612:
      if (lookahead == 'p') ADVANCE(286);
      END_STATE();
    case 613:
      if (lookahead == 'p') ADVANCE(310);
      END_STATE();
    case 614:
      if (lookahead == 'p') ADVANCE(676);
      END_STATE();
    case 615:
      if (lookahead == 'p') ADVANCE(672);
      if (lookahead == 's') ADVANCE(569);
      END_STATE();
    case 616:
      if (lookahead == 'p') ADVANCE(678);
      END_STATE();
    case 617:
      if (lookahead == 'p') ADVANCE(19);
      END_STATE();
    case 618:
      if (lookahead == 'q') ADVANCE(79);
      END_STATE();
    case 619:
      if (lookahead == 'r') ADVANCE(170);
      END_STATE();
    case 620:
      if (lookahead == 'r') ADVANCE(978);
      END_STATE();
    case 621:
      if (lookahead == 'r') ADVANCE(979);
      END_STATE();
    case 622:
      if (lookahead == 'r') ADVANCE(995);
      END_STATE();
    case 623:
      if (lookahead == 'r') ADVANCE(996);
      END_STATE();
    case 624:
      if (lookahead == 'r') ADVANCE(983);
      END_STATE();
    case 625:
      if (lookahead == 'r') ADVANCE(984);
      END_STATE();
    case 626:
      if (lookahead == 'r') ADVANCE(1030);
      END_STATE();
    case 627:
      if (lookahead == 'r') ADVANCE(1040);
      END_STATE();
    case 628:
      if (lookahead == 'r') ADVANCE(1001);
      END_STATE();
    case 629:
      if (lookahead == 'r') ADVANCE(1042);
      END_STATE();
    case 630:
      if (lookahead == 'r') ADVANCE(1074);
      END_STATE();
    case 631:
      if (lookahead == 'r') ADVANCE(1073);
      END_STATE();
    case 632:
      if (lookahead == 'r') ADVANCE(1114);
      END_STATE();
    case 633:
      if (lookahead == 'r') ADVANCE(1058);
      END_STATE();
    case 634:
      if (lookahead == 'r') ADVANCE(1082);
      END_STATE();
    case 635:
      if (lookahead == 'r') ADVANCE(380);
      END_STATE();
    case 636:
      if (lookahead == 'r') ADVANCE(849);
      END_STATE();
    case 637:
      if (lookahead == 'r') ADVANCE(620);
      END_STATE();
    case 638:
      if (lookahead == 'r') ADVANCE(247);
      END_STATE();
    case 639:
      if (lookahead == 'r') ADVANCE(498);
      END_STATE();
    case 640:
      if (lookahead == 'r') ADVANCE(742);
      END_STATE();
    case 641:
      if (lookahead == 'r') ADVANCE(185);
      END_STATE();
    case 642:
      if (lookahead == 'r') ADVANCE(502);
      END_STATE();
    case 643:
      if (lookahead == 'r') ADVANCE(241);
      END_STATE();
    case 644:
      if (lookahead == 'r') ADVANCE(337);
      END_STATE();
    case 645:
      if (lookahead == 'r') ADVANCE(317);
      END_STATE();
    case 646:
      if (lookahead == 'r') ADVANCE(142);
      END_STATE();
    case 647:
      if (lookahead == 'r') ADVANCE(808);
      if (lookahead == 't') ADVANCE(328);
      END_STATE();
    case 648:
      if (lookahead == 'r') ADVANCE(411);
      END_STATE();
    case 649:
      if (lookahead == 'r') ADVANCE(343);
      END_STATE();
    case 650:
      if (lookahead == 'r') ADVANCE(426);
      END_STATE();
    case 651:
      if (lookahead == 'r') ADVANCE(707);
      END_STATE();
    case 652:
      if (lookahead == 'r') ADVANCE(438);
      END_STATE();
    case 653:
      if (lookahead == 'r') ADVANCE(145);
      END_STATE();
    case 654:
      if (lookahead == 'r') ADVANCE(288);
      END_STATE();
    case 655:
      if (lookahead == 'r') ADVANCE(598);
      END_STATE();
    case 656:
      if (lookahead == 'r') ADVANCE(746);
      END_STATE();
    case 657:
      if (lookahead == 'r') ADVANCE(290);
      END_STATE();
    case 658:
      if (lookahead == 'r') ADVANCE(253);
      END_STATE();
    case 659:
      if (lookahead == 'r') ADVANCE(611);
      END_STATE();
    case 660:
      if (lookahead == 'r') ADVANCE(255);
      END_STATE();
    case 661:
      if (lookahead == 'r') ADVANCE(256);
      END_STATE();
    case 662:
      if (lookahead == 'r') ADVANCE(749);
      END_STATE();
    case 663:
      if (lookahead == 'r') ADVANCE(769);
      END_STATE();
    case 664:
      if (lookahead == 'r') ADVANCE(281);
      END_STATE();
    case 665:
      if (lookahead == 'r') ADVANCE(258);
      END_STATE();
    case 666:
      if (lookahead == 'r') ADVANCE(552);
      END_STATE();
    case 667:
      if (lookahead == 'r') ADVANCE(122);
      END_STATE();
    case 668:
      if (lookahead == 'r') ADVANCE(427);
      END_STATE();
    case 669:
      if (lookahead == 'r') ADVANCE(554);
      END_STATE();
    case 670:
      if (lookahead == 'r') ADVANCE(418);
      END_STATE();
    case 671:
      if (lookahead == 'r') ADVANCE(428);
      END_STATE();
    case 672:
      if (lookahead == 'r') ADVANCE(555);
      END_STATE();
    case 673:
      if (lookahead == 'r') ADVANCE(420);
      END_STATE();
    case 674:
      if (lookahead == 'r') ADVANCE(311);
      END_STATE();
    case 675:
      if (lookahead == 'r') ADVANCE(828);
      END_STATE();
    case 676:
      if (lookahead == 'r') ADVANCE(441);
      END_STATE();
    case 677:
      if (lookahead == 'r') ADVANCE(829);
      END_STATE();
    case 678:
      if (lookahead == 'r') ADVANCE(442);
      END_STATE();
    case 679:
      if (lookahead == 'r') ADVANCE(830);
      END_STATE();
    case 680:
      if (lookahead == 'r') ADVANCE(831);
      END_STATE();
    case 681:
      if (lookahead == 'r') ADVANCE(735);
      END_STATE();
    case 682:
      if (lookahead == 'r') ADVANCE(614);
      END_STATE();
    case 683:
      if (lookahead == 'r') ADVANCE(737);
      END_STATE();
    case 684:
      if (lookahead == 'r') ADVANCE(616);
      END_STATE();
    case 685:
      if (lookahead == 'r') ADVANCE(738);
      END_STATE();
    case 686:
      if (lookahead == 's') ADVANCE(904);
      END_STATE();
    case 687:
      if (lookahead == 's') ADVANCE(892);
      END_STATE();
    case 688:
      if (lookahead == 's') ADVANCE(874);
      END_STATE();
    case 689:
      if (lookahead == 's') ADVANCE(1052);
      END_STATE();
    case 690:
      if (lookahead == 's') ADVANCE(901);
      END_STATE();
    case 691:
      if (lookahead == 's') ADVANCE(1045);
      END_STATE();
    case 692:
      if (lookahead == 's') ADVANCE(14);
      END_STATE();
    case 693:
      if (lookahead == 's') ADVANCE(891);
      END_STATE();
    case 694:
      if (lookahead == 's') ADVANCE(637);
      END_STATE();
    case 695:
      if (lookahead == 's') ADVANCE(345);
      END_STATE();
    case 696:
      if (lookahead == 's') ADVANCE(835);
      END_STATE();
    case 697:
      if (lookahead == 's') ADVANCE(11);
      END_STATE();
    case 698:
      if (lookahead == 's') ADVANCE(397);
      END_STATE();
    case 699:
      if (lookahead == 's') ADVANCE(794);
      END_STATE();
    case 700:
      if (lookahead == 's') ADVANCE(387);
      END_STATE();
    case 701:
      if (lookahead == 's') ADVANCE(688);
      END_STATE();
    case 702:
      if (lookahead == 's') ADVANCE(689);
      END_STATE();
    case 703:
      if (lookahead == 's') ADVANCE(730);
      END_STATE();
    case 704:
      if (lookahead == 's') ADVANCE(249);
      END_STATE();
    case 705:
      if (lookahead == 's') ADVANCE(740);
      END_STATE();
    case 706:
      if (lookahead == 's') ADVANCE(814);
      END_STATE();
    case 707:
      if (lookahead == 's') ADVANCE(423);
      END_STATE();
    case 708:
      if (lookahead == 's') ADVANCE(700);
      END_STATE();
    case 709:
      if (lookahead == 's') ADVANCE(61);
      END_STATE();
    case 710:
      if (lookahead == 's') ADVANCE(691);
      END_STATE();
    case 711:
      if (lookahead == 's') ADVANCE(318);
      END_STATE();
    case 712:
      if (lookahead == 's') ADVANCE(816);
      END_STATE();
    case 713:
      if (lookahead == 's') ADVANCE(760);
      END_STATE();
    case 714:
      if (lookahead == 's') ADVANCE(72);
      END_STATE();
    case 715:
      if (lookahead == 's') ADVANCE(77);
      END_STATE();
    case 716:
      if (lookahead == 's') ADVANCE(78);
      END_STATE();
    case 717:
      if (lookahead == 's') ADVANCE(750);
      END_STATE();
    case 718:
      if (lookahead == 's') ADVANCE(812);
      END_STATE();
    case 719:
      if (lookahead == 's') ADVANCE(706);
      END_STATE();
    case 720:
      if (lookahead == 's') ADVANCE(767);
      END_STATE();
    case 721:
      if (lookahead == 's') ADVANCE(398);
      END_STATE();
    case 722:
      if (lookahead == 's') ADVANCE(714);
      END_STATE();
    case 723:
      if (lookahead == 's') ADVANCE(289);
      END_STATE();
    case 724:
      if (lookahead == 's') ADVANCE(608);
      END_STATE();
    case 725:
      if (lookahead == 's') ADVANCE(799);
      if (lookahead == 'v') ADVANCE(283);
      END_STATE();
    case 726:
      if (lookahead == 's') ADVANCE(610);
      END_STATE();
    case 727:
      if (lookahead == 's') ADVANCE(298);
      END_STATE();
    case 728:
      if (lookahead == 's') ADVANCE(340);
      END_STATE();
    case 729:
      if (lookahead == 's') ADVANCE(839);
      END_STATE();
    case 730:
      if (lookahead == 's') ADVANCE(821);
      END_STATE();
    case 731:
      if (lookahead == 's') ADVANCE(450);
      END_STATE();
    case 732:
      if (lookahead == 's') ADVANCE(822);
      END_STATE();
    case 733:
      if (lookahead == 's') ADVANCE(823);
      END_STATE();
    case 734:
      if (lookahead == 's') ADVANCE(732);
      END_STATE();
    case 735:
      if (lookahead == 's') ADVANCE(446);
      END_STATE();
    case 736:
      if (lookahead == 's') ADVANCE(733);
      END_STATE();
    case 737:
      if (lookahead == 's') ADVANCE(449);
      END_STATE();
    case 738:
      if (lookahead == 's') ADVANCE(451);
      END_STATE();
    case 739:
      if (lookahead == 's') ADVANCE(346);
      END_STATE();
    case 740:
      if (lookahead == 's') ADVANCE(125);
      END_STATE();
    case 741:
      if (lookahead == 't') ADVANCE(385);
      END_STATE();
    case 742:
      if (lookahead == 't') ADVANCE(873);
      END_STATE();
    case 743:
      if (lookahead == 't') ADVANCE(1033);
      END_STATE();
    case 744:
      if (lookahead == 't') ADVANCE(1035);
      END_STATE();
    case 745:
      if (lookahead == 't') ADVANCE(876);
      END_STATE();
    case 746:
      if (lookahead == 't') ADVANCE(1037);
      END_STATE();
    case 747:
      if (lookahead == 't') ADVANCE(1110);
      END_STATE();
    case 748:
      if (lookahead == 't') ADVANCE(1036);
      END_STATE();
    case 749:
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 750:
      if (lookahead == 't') ADVANCE(878);
      END_STATE();
    case 751:
      if (lookahead == 't') ADVANCE(1039);
      END_STATE();
    case 752:
      if (lookahead == 't') ADVANCE(1041);
      END_STATE();
    case 753:
      if (lookahead == 't') ADVANCE(158);
      END_STATE();
    case 754:
      if (lookahead == 't') ADVANCE(1096);
      END_STATE();
    case 755:
      if (lookahead == 't') ADVANCE(1072);
      END_STATE();
    case 756:
      if (lookahead == 't') ADVANCE(1071);
      END_STATE();
    case 757:
      if (lookahead == 't') ADVANCE(1059);
      END_STATE();
    case 758:
      if (lookahead == 't') ADVANCE(1078);
      END_STATE();
    case 759:
      if (lookahead == 't') ADVANCE(1077);
      END_STATE();
    case 760:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 761:
      if (lookahead == 't') ADVANCE(394);
      END_STATE();
    case 762:
      if (lookahead == 't') ADVANCE(855);
      END_STATE();
    case 763:
      if (lookahead == 't') ADVANCE(138);
      END_STATE();
    case 764:
      if (lookahead == 't') ADVANCE(386);
      END_STATE();
    case 765:
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 766:
      if (lookahead == 't') ADVANCE(819);
      END_STATE();
    case 767:
      if (lookahead == 't') ADVANCE(131);
      END_STATE();
    case 768:
      if (lookahead == 't') ADVANCE(837);
      END_STATE();
    case 769:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 770:
      if (lookahead == 't') ADVANCE(413);
      END_STATE();
    case 771:
      if (lookahead == 't') ADVANCE(388);
      END_STATE();
    case 772:
      if (lookahead == 't') ADVANCE(389);
      END_STATE();
    case 773:
      if (lookahead == 't') ADVANCE(581);
      END_STATE();
    case 774:
      if (lookahead == 't') ADVANCE(709);
      END_STATE();
    case 775:
      if (lookahead == 't') ADVANCE(161);
      END_STATE();
    case 776:
      if (lookahead == 't') ADVANCE(557);
      END_STATE();
    case 777:
      if (lookahead == 't') ADVANCE(533);
      END_STATE();
    case 778:
      if (lookahead == 't') ADVANCE(534);
      END_STATE();
    case 779:
      if (lookahead == 't') ADVANCE(154);
      END_STATE();
    case 780:
      if (lookahead == 't') ADVANCE(559);
      END_STATE();
    case 781:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 782:
      if (lookahead == 't') ADVANCE(547);
      END_STATE();
    case 783:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 784:
      if (lookahead == 't') ADVANCE(586);
      END_STATE();
    case 785:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 786:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 787:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 788:
      if (lookahead == 't') ADVANCE(293);
      END_STATE();
    case 789:
      if (lookahead == 't') ADVANCE(596);
      END_STATE();
    case 790:
      if (lookahead == 't') ADVANCE(590);
      END_STATE();
    case 791:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 792:
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 793:
      if (lookahead == 't') ADVANCE(96);
      END_STATE();
    case 794:
      if (lookahead == 't') ADVANCE(602);
      END_STATE();
    case 795:
      if (lookahead == 't') ADVANCE(773);
      END_STATE();
    case 796:
      if (lookahead == 't') ADVANCE(316);
      END_STATE();
    case 797:
      if (lookahead == 't') ADVANCE(715);
      END_STATE();
    case 798:
      if (lookahead == 't') ADVANCE(789);
      END_STATE();
    case 799:
      if (lookahead == 't') ADVANCE(153);
      END_STATE();
    case 800:
      if (lookahead == 't') ADVANCE(716);
      END_STATE();
    case 801:
      if (lookahead == 't') ADVANCE(790);
      END_STATE();
    case 802:
      if (lookahead == 't') ADVANCE(654);
      END_STATE();
    case 803:
      if (lookahead == 't') ADVANCE(291);
      END_STATE();
    case 804:
      if (lookahead == 't') ADVANCE(657);
      END_STATE();
    case 805:
      if (lookahead == 't') ADVANCE(294);
      END_STATE();
    case 806:
      if (lookahead == 't') ADVANCE(313);
      END_STATE();
    case 807:
      if (lookahead == 't') ADVANCE(308);
      END_STATE();
    case 808:
      if (lookahead == 't') ADVANCE(729);
      END_STATE();
    case 809:
      if (lookahead == 't') ADVANCE(609);
      END_STATE();
    case 810:
      if (lookahead == 't') ADVANCE(727);
      END_STATE();
    case 811:
      if (lookahead == 't') ADVANCE(805);
      END_STATE();
    case 812:
      if (lookahead == 't') ADVANCE(673);
      END_STATE();
    case 813:
      if (lookahead == 't') ADVANCE(342);
      END_STATE();
    case 814:
      if (lookahead == 't') ADVANCE(856);
      END_STATE();
    case 815:
      if (lookahead == 't') ADVANCE(840);
      END_STATE();
    case 816:
      if (lookahead == 't') ADVANCE(169);
      END_STATE();
    case 817:
      if (lookahead == 'u') ADVANCE(648);
      END_STATE();
    case 818:
      if (lookahead == 'u') ADVANCE(690);
      END_STATE();
    case 819:
      if (lookahead == 'u') ADVANCE(93);
      END_STATE();
    case 820:
      if (lookahead == 'u') ADVANCE(287);
      END_STATE();
    case 821:
      if (lookahead == 'u') ADVANCE(296);
      END_STATE();
    case 822:
      if (lookahead == 'u') ADVANCE(302);
      END_STATE();
    case 823:
      if (lookahead == 'u') ADVANCE(304);
      END_STATE();
    case 824:
      if (lookahead == 'u') ADVANCE(332);
      END_STATE();
    case 825:
      if (lookahead == 'v') ADVANCE(30);
      END_STATE();
    case 826:
      if (lookahead == 'v') ADVANCE(252);
      END_STATE();
    case 827:
      if (lookahead == 'v') ADVANCE(276);
      END_STATE();
    case 828:
      if (lookahead == 'v') ADVANCE(292);
      END_STATE();
    case 829:
      if (lookahead == 'v') ADVANCE(299);
      END_STATE();
    case 830:
      if (lookahead == 'v') ADVANCE(305);
      END_STATE();
    case 831:
      if (lookahead == 'v') ADVANCE(307);
      END_STATE();
    case 832:
      if (lookahead == 'w') ADVANCE(53);
      END_STATE();
    case 833:
      if (lookahead == 'w') ADVANCE(1064);
      END_STATE();
    case 834:
      if (lookahead == 'w') ADVANCE(501);
      END_STATE();
    case 835:
      if (lookahead == 'w') ADVANCE(424);
      END_STATE();
    case 836:
      if (lookahead == 'w') ADVANCE(64);
      END_STATE();
    case 837:
      if (lookahead == 'w') ADVANCE(167);
      END_STATE();
    case 838:
      if (lookahead == 'w') ADVANCE(402);
      END_STATE();
    case 839:
      if (lookahead == 'w') ADVANCE(431);
      END_STATE();
    case 840:
      if (lookahead == 'w') ADVANCE(168);
      END_STATE();
    case 841:
      if (lookahead == 'w') ADVANCE(406);
      END_STATE();
    case 842:
      if (lookahead == 'x') ADVANCE(1019);
      END_STATE();
    case 843:
      if (lookahead == 'x') ADVANCE(1101);
      END_STATE();
    case 844:
      if (lookahead == 'x') ADVANCE(1102);
      END_STATE();
    case 845:
      if (lookahead == 'x') ADVANCE(604);
      END_STATE();
    case 846:
      if (lookahead == 'x') ADVANCE(786);
      END_STATE();
    case 847:
      if (lookahead == 'y') ADVANCE(950);
      END_STATE();
    case 848:
      if (lookahead == 'y') ADVANCE(1029);
      END_STATE();
    case 849:
      if (lookahead == 'y') ADVANCE(1070);
      END_STATE();
    case 850:
      if (lookahead == 'y') ADVANCE(1028);
      END_STATE();
    case 851:
      if (lookahead == 'y') ADVANCE(843);
      END_STATE();
    case 852:
      if (lookahead == 'y') ADVANCE(844);
      END_STATE();
    case 853:
      if (lookahead == 'y') ADVANCE(124);
      END_STATE();
    case 854:
      if (lookahead == 'y') ADVANCE(612);
      END_STATE();
    case 855:
      if (lookahead == 'y') ADVANCE(83);
      END_STATE();
    case 856:
      if (lookahead == 'y') ADVANCE(613);
      END_STATE();
    case 857:
      if (lookahead == 'z') ADVANCE(278);
      END_STATE();
    case 858:
      if (lookahead == 'z') ADVANCE(282);
      END_STATE();
    case 859:
      if (lookahead == 'z') ADVANCE(306);
      END_STATE();
    case 860:
      if (lookahead == 'z') ADVANCE(315);
      END_STATE();
    case 861:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(923);
      END_STATE();
    case 862:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 863:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(922);
      END_STATE();
    case 864:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1131);
      END_STATE();
    case 865:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1132);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(864);
      END_STATE();
    case 866:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(865);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(864);
      END_STATE();
    case 867:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 868:
      if (eof) ADVANCE(869);
      if (lookahead == '!') ADVANCE(918);
      if (lookahead == '#') ADVANCE(870);
      if (lookahead == '(') ADVANCE(958);
      if (lookahead == ')') ADVANCE(960);
      if (lookahead == ',') ADVANCE(916);
      if (lookahead == '-') ADVANCE(103);
      if (lookahead == '/') ADVANCE(861);
      if (lookahead == ':') ADVANCE(955);
      if (lookahead == ';') ADVANCE(959);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == '[') ADVANCE(915);
      if (lookahead == ']') ADVANCE(917);
      if (lookahead == 'a') ADVANCE(186);
      if (lookahead == 'b') ADVANCE(538);
      if (lookahead == 'c') ADVANCE(460);
      if (lookahead == 'd') ADVANCE(300);
      if (lookahead == 'e') ADVANCE(509);
      if (lookahead == 'f') ADVANCE(166);
      if (lookahead == 'g') ADVANCE(264);
      if (lookahead == 'h') ADVANCE(798);
      if (lookahead == 'i') ADVANCE(200);
      if (lookahead == 'l') ADVANCE(694);
      if (lookahead == 'm') ADVANCE(266);
      if (lookahead == 'n') ADVANCE(537);
      if (lookahead == 'o') ADVANCE(353);
      if (lookahead == 'p') ADVANCE(135);
      if (lookahead == 'r') ADVANCE(260);
      if (lookahead == 's') ADVANCE(127);
      if (lookahead == 't') ADVANCE(134);
      if (lookahead == 'u') ADVANCE(238);
      if (lookahead == 'w') ADVANCE(407);
      if (lookahead == '|') ADVANCE(1104);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(868)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(954);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(871);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(872);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(872);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(anon_sym_alert);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(anon_sym_pass);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(anon_sym_drop);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(anon_sym_reject);
      if (lookahead == 'b') ADVANCE(556);
      if (lookahead == 'd') ADVANCE(717);
      if (lookahead == 's') ADVANCE(641);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(anon_sym_rejectsrc);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(anon_sym_rejectdst);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(anon_sym_rejectboth);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(anon_sym_tcp);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(anon_sym_tcp);
      if (lookahead == '.') ADVANCE(393);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(anon_sym_udp);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(anon_sym_udp);
      if (lookahead == '.') ADVANCE(399);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(anon_sym_icmp);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(anon_sym_icmp);
      if (lookahead == '_') ADVANCE(433);
      if (lookahead == 'v') ADVANCE(41);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(anon_sym_ip);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(anon_sym_ip);
      if (lookahead == '_') ADVANCE(599);
      if (lookahead == 'o') ADVANCE(601);
      if (lookahead == 'v') ADVANCE(34);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(anon_sym_http);
      if (lookahead == '.') ADVANCE(817);
      if (lookahead == '2') ADVANCE(914);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(anon_sym_http);
      if (lookahead == '2') ADVANCE(914);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(anon_sym_ftp);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(anon_sym_tls);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(anon_sym_tls);
      if (lookahead == '.') ADVANCE(208);
      if (lookahead == '_') ADVANCE(209);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(anon_sym_smb);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(anon_sym_dns);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(anon_sym_dns);
      if (lookahead == '.') ADVANCE(553);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(anon_sym_dcerpc);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(anon_sym_ssh);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(anon_sym_ssh);
      if (lookahead == '.') ADVANCE(404);
      if (lookahead == '_') ADVANCE(615);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(anon_sym_smtp);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(anon_sym_imap);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(anon_sym_modbus);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(anon_sym_dnp3);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(anon_sym_enip);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(anon_sym_nfs);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(anon_sym_ikev2);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(anon_sym_krb5);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(anon_sym_ntp);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(anon_sym_dhcp);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(anon_sym_rfb);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(anon_sym_rdp);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(anon_sym_snmp);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(anon_sym_tftp);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(anon_sym_sip);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(anon_sym_http2);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym_negation);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym_negation);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != ';') ADVANCE(1123);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(aux_sym_ipv4_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(922);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(aux_sym_ipv4_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(923);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym__ipv6_octet);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == '.') ADVANCE(862);
      if (lookahead == ':') ADVANCE(949);
      if (lookahead == '_') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(928);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(946);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == '.') ADVANCE(862);
      if (lookahead == ':') ADVANCE(949);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(929);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(930);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == '.') ADVANCE(862);
      if (lookahead == ':') ADVANCE(949);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(928);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(946);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == '.') ADVANCE(862);
      if (lookahead == ':') ADVANCE(949);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(926);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(947);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == '.') ADVANCE(862);
      if (lookahead == ':') ADVANCE(949);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(949);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(949);
      if (lookahead == 'a') ADVANCE(942);
      if (lookahead == 'i') ADVANCE(466);
      if (lookahead == 'l') ADVANCE(532);
      if (lookahead == 'r') ADVANCE(130);
      if (lookahead == 't') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(946);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(949);
      if (lookahead == 'c') ADVANCE(935);
      if (lookahead == 'l') ADVANCE(268);
      if (lookahead == 'n') ADVANCE(847);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(946);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(949);
      if (lookahead == 'c') ADVANCE(934);
      if (lookahead == 'e') ADVANCE(940);
      if (lookahead == 'h') ADVANCE(190);
      if (lookahead == 'i') ADVANCE(720);
      if (lookahead == 'n') ADVANCE(570);
      if (lookahead == 'o') ADVANCE(809);
      if (lookahead == 'r') ADVANCE(548);
      if (lookahead == 's') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(946);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(949);
      if (lookahead == 'e') ADVANCE(941);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(947);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(949);
      if (lookahead == 'k') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(947);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(949);
      if (lookahead == 'l') ADVANCE(141);
      if (lookahead == 'o') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(946);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(949);
      if (lookahead == 'n') ADVANCE(847);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(946);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(949);
      if (lookahead == 'n') ADVANCE(226);
      if (lookahead == 'o') ADVANCE(461);
      if (lookahead == 's') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(946);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(949);
      if (lookahead == 'o') ADVANCE(741);
      if (lookahead == 's') ADVANCE(408);
      if (lookahead == 'y') ADVANCE(592);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(946);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(949);
      if (lookahead == 'p') ADVANCE(761);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(947);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(949);
      if (lookahead == 'r') ADVANCE(598);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(930);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(949);
      if (lookahead == 's') ADVANCE(794);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(947);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(949);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(930);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(930);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(949);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(945);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(946);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(949);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(943);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(947);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(949);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(947);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(949);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(930);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(949);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(946);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(924);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(anon_sym_any);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(aux_sym_port_token1);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(aux_sym_port_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(951);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(aux_sym_port_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(952);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(aux_sym_port_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(953);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(anon_sym_msg_COLON);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(anon_sym_sid_COLON);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(anon_sym_rev_COLON);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(anon_sym_gid_COLON);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(anon_sym_classtype_COLON);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(anon_sym_reference_COLON);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(anon_sym_priority_COLON);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(anon_sym_metadata_COLON);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(anon_sym_target_COLON);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(anon_sym_ttl_COLON);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(anon_sym_ipopts_COLON);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(anon_sym_rr);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(anon_sym_eol);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(anon_sym_nop);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(anon_sym_ts);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(anon_sym_sec);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(anon_sym_esec);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(anon_sym_lsrr);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(anon_sym_ssrr);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(anon_sym_satid);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(sym_sameip);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(anon_sym_ip_proto_COLON);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(sym_ipv4_hdr);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(sym_ipv6_hdr);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(anon_sym_geoip_COLON);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(anon_sym_id_COLON);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(anon_sym_fragbits_COLON);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(anon_sym_fragoffset_COLON);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(anon_sym_tos_COLON);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(anon_sym_seq_COLON);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(anon_sym_ack_COLON);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(anon_sym_window_COLON);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(anon_sym_tcp_DOTmss_COLON);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(sym_tcp_hdr);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(sym_udp_hdr);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(anon_sym_itype_COLON);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(anon_sym_icode_COLON);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(anon_sym_icmp_id_COLON);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(anon_sym_icmp_seq_COLON);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(sym_icmpv6_hdr);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(anon_sym_icmpv6_DOTmtu_COLON);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(anon_sym_content_COLON);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(sym_nocase);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(anon_sym_depth_COLON);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(sym_startswith);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(sym_endswith);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(anon_sym_offset_COLON);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(anon_sym_distance_COLON);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(anon_sym_within_COLON);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(anon_sym_isdataat_COLON);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(anon_sym_relative);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(anon_sym_bsize_COLON);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(anon_sym_dsize_COLON);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(anon_sym_rpc_COLON);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(anon_sym_replace_COLON);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(anon_sym_pcre_COLON);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(sym_dotprefix);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(sym_strip_whitespace);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(sym_compress_whitespace);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(sym_to_md5);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(sym_to_sha1);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(sym_to_sha256);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(anon_sym_pcrexform_COLON);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(sym_url_decode);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(anon_sym_fastpattern);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(anon_sym_only);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '_') ADVANCE(365);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(sym_prefilter);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(anon_sym_flowbits_COLON);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(anon_sym_isset);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(anon_sym_toggle);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(anon_sym_unset);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(anon_sym_isnotset);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(anon_sym_noalert);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(anon_sym_flow_COLON);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(anon_sym_to_client);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(anon_sym_to_server);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(anon_sym_from_client);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(anon_sym_from_server);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(anon_sym_established);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(anon_sym_not_established);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(anon_sym_stateless);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(anon_sym_only_stream);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(anon_sym_no_stream);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(anon_sym_only_frag);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(anon_sym_no_frag);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(anon_sym_flowint_COLON);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(anon_sym_stream_size_COLON);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(sym_bypass);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(sym_http_uri);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(anon_sym_filename_COLON);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(anon_sym_fileext_COLON);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(anon_sym_filemagic_COLON);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(anon_sym_filestore_COLON);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(anon_sym_request_SLASHto_server);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(anon_sym_response_SLASHto_client);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(anon_sym_both);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(anon_sym_file);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(anon_sym_file);
      if (lookahead == 'e') ADVANCE(846);
      if (lookahead == 'm') ADVANCE(139);
      if (lookahead == 'n') ADVANCE(137);
      if (lookahead == 's') ADVANCE(395);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(anon_sym_tx);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(anon_sym_ssn_SLASHflow);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(anon_sym_filemd5_COLON);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(anon_sym_filesha1_COLON);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(anon_sym_filesha256_COLON);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(anon_sym_filesize_COLON);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(anon_sym_dns_DOTopcode_COLON);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(sym_dns_query);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(anon_sym_tls_cert_subject);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(anon_sym_tls_DOTcert_subject);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(anon_sym_tls_cert_issuer);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(anon_sym_tls_DOTcert_issuer);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(anon_sym_tls_cert_serial);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(anon_sym_tls_DOTcert_serial);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(anon_sym_tls_cert_fingerprint);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(anon_sym_tls_DOTcert_fingerprint);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(anon_sym_tls_sni);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(anon_sym_tls_DOTsni);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(sym_tls_cert_notbefore);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(sym_tls_cert_notafter);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(sym_tls_cert_expired);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(sym_tls_cert_valid);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(sym_tls_certs);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(anon_sym_tls_DOTversion_COLON);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(anon_sym_ssl_version_COLON);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(anon_sym_sslv2);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(anon_sym_sslv3);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(anon_sym_tls1_DOT0);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(anon_sym_tls1_DOT1);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(anon_sym_tls1_DOT2);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(anon_sym_tls1_DOT3);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(anon_sym_tls_DOTsubject_COLON);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(anon_sym_tls_DOTissuerdn_COLON);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(anon_sym_tls_DOTfingerprint);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(sym_tls_store);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(anon_sym_ssl_state_COLON);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(anon_sym_client_hello);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(anon_sym_server_hello);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(anon_sym_client_keyx);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(anon_sym_server_keyx);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(anon_sym_unkown);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(anon_sym_ssh_DOTproto);
      if (lookahead == 'v') ADVANCE(349);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(anon_sym_ssh_proto);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(anon_sym_ssh_DOTsoftware);
      if (lookahead == 'v') ADVANCE(351);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(anon_sym_ssh_software);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(anon_sym_ssh_DOTprotoversion_COLON);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(anon_sym_2_compat);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(anon_sym_ssh_DOTsoftwareversion_COLON);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(sym_ssh_hassh);
      if (lookahead == '.') ADVANCE(695);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(sym_ssh_hassh_string);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(sym_ssh_hassh_server);
      if (lookahead == '.') ADVANCE(718);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(sym_ssh_hassh_server_string);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1117);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1118);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1118);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '!') ADVANCE(919);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != ';') ADVANCE(1123);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '<') ADVANCE(1128);
      if (lookahead == '>') ADVANCE(1125);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1120);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1122);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != ';') ADVANCE(1123);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1121);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != ';') ADVANCE(1123);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1122);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != ';') ADVANCE(1123);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != ';') ADVANCE(1123);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != ';') ADVANCE(1123);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '>') ADVANCE(957);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != ';') ADVANCE(1123);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(aux_sym_digit_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1129);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(864);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(aux_sym_digit_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1130);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(sym_decimal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1131);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(sym_decimal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1132);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(864);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 868},
  [2] = {.lex_state = 868},
  [3] = {.lex_state = 868},
  [4] = {.lex_state = 868},
  [5] = {.lex_state = 868},
  [6] = {.lex_state = 868},
  [7] = {.lex_state = 8},
  [8] = {.lex_state = 8},
  [9] = {.lex_state = 868},
  [10] = {.lex_state = 868},
  [11] = {.lex_state = 868},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 868},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 868},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 868},
  [20] = {.lex_state = 868},
  [21] = {.lex_state = 868},
  [22] = {.lex_state = 7},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 868},
  [25] = {.lex_state = 868},
  [26] = {.lex_state = 868},
  [27] = {.lex_state = 868},
  [28] = {.lex_state = 868},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 868},
  [31] = {.lex_state = 868},
  [32] = {.lex_state = 868},
  [33] = {.lex_state = 868},
  [34] = {.lex_state = 868},
  [35] = {.lex_state = 868},
  [36] = {.lex_state = 868},
  [37] = {.lex_state = 868},
  [38] = {.lex_state = 868},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 868},
  [41] = {.lex_state = 868},
  [42] = {.lex_state = 868},
  [43] = {.lex_state = 868},
  [44] = {.lex_state = 868},
  [45] = {.lex_state = 868},
  [46] = {.lex_state = 868},
  [47] = {.lex_state = 868},
  [48] = {.lex_state = 868},
  [49] = {.lex_state = 868},
  [50] = {.lex_state = 868},
  [51] = {.lex_state = 868},
  [52] = {.lex_state = 8},
  [53] = {.lex_state = 868},
  [54] = {.lex_state = 868},
  [55] = {.lex_state = 868},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 868},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 868},
  [61] = {.lex_state = 868},
  [62] = {.lex_state = 6},
  [63] = {.lex_state = 868},
  [64] = {.lex_state = 868},
  [65] = {.lex_state = 6},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 868},
  [68] = {.lex_state = 868},
  [69] = {.lex_state = 868},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 868},
  [72] = {.lex_state = 868},
  [73] = {.lex_state = 6},
  [74] = {.lex_state = 868},
  [75] = {.lex_state = 5},
  [76] = {.lex_state = 8},
  [77] = {.lex_state = 6},
  [78] = {.lex_state = 6},
  [79] = {.lex_state = 6},
  [80] = {.lex_state = 6},
  [81] = {.lex_state = 6},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 6},
  [85] = {.lex_state = 6},
  [86] = {.lex_state = 6},
  [87] = {.lex_state = 6},
  [88] = {.lex_state = 2},
  [89] = {.lex_state = 6},
  [90] = {.lex_state = 6},
  [91] = {.lex_state = 6},
  [92] = {.lex_state = 6},
  [93] = {.lex_state = 6},
  [94] = {.lex_state = 6},
  [95] = {.lex_state = 6},
  [96] = {.lex_state = 6},
  [97] = {.lex_state = 6},
  [98] = {.lex_state = 6},
  [99] = {.lex_state = 6},
  [100] = {.lex_state = 6},
  [101] = {.lex_state = 6},
  [102] = {.lex_state = 3},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 4},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 3},
  [109] = {.lex_state = 3},
  [110] = {.lex_state = 3},
  [111] = {.lex_state = 4},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 3},
  [114] = {.lex_state = 3},
  [115] = {.lex_state = 3},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 3},
  [119] = {.lex_state = 3},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 3},
  [123] = {.lex_state = 3},
  [124] = {.lex_state = 3},
  [125] = {.lex_state = 3},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 8},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 3},
  [132] = {.lex_state = 3},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 3},
  [136] = {.lex_state = 4},
  [137] = {.lex_state = 4},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 3},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 868},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 3},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 3},
  [149] = {.lex_state = 8},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 3},
  [152] = {.lex_state = 3},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 32},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 868},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 871},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 8},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 921},
  [247] = {.lex_state = 6},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
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
    [anon_sym_flowbits_COLON] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_isset] = ACTIONS(1),
    [anon_sym_toggle] = ACTIONS(1),
    [anon_sym_unset] = ACTIONS(1),
    [anon_sym_isnotset] = ACTIONS(1),
    [anon_sym_noalert] = ACTIONS(1),
    [anon_sym_flow_COLON] = ACTIONS(1),
    [anon_sym_to_client] = ACTIONS(1),
    [anon_sym_to_server] = ACTIONS(1),
    [anon_sym_from_client] = ACTIONS(1),
    [anon_sym_from_server] = ACTIONS(1),
    [anon_sym_established] = ACTIONS(1),
    [anon_sym_not_established] = ACTIONS(1),
    [anon_sym_stateless] = ACTIONS(1),
    [anon_sym_only_stream] = ACTIONS(1),
    [anon_sym_no_stream] = ACTIONS(1),
    [anon_sym_only_frag] = ACTIONS(1),
    [anon_sym_no_frag] = ACTIONS(1),
    [anon_sym_flowint_COLON] = ACTIONS(1),
    [anon_sym_stream_size_COLON] = ACTIONS(1),
    [sym_bypass] = ACTIONS(1),
    [sym_http_uri] = ACTIONS(1),
    [anon_sym_filename_COLON] = ACTIONS(1),
    [anon_sym_fileext_COLON] = ACTIONS(1),
    [anon_sym_filemagic_COLON] = ACTIONS(1),
    [anon_sym_filestore_COLON] = ACTIONS(1),
    [anon_sym_request_SLASHto_server] = ACTIONS(1),
    [anon_sym_response_SLASHto_client] = ACTIONS(1),
    [anon_sym_both] = ACTIONS(1),
    [anon_sym_file] = ACTIONS(1),
    [anon_sym_tx] = ACTIONS(1),
    [anon_sym_ssn_SLASHflow] = ACTIONS(1),
    [anon_sym_filemd5_COLON] = ACTIONS(1),
    [anon_sym_filesha1_COLON] = ACTIONS(1),
    [anon_sym_filesha256_COLON] = ACTIONS(1),
    [anon_sym_filesize_COLON] = ACTIONS(1),
    [anon_sym_dns_DOTopcode_COLON] = ACTIONS(1),
    [sym_dns_query] = ACTIONS(1),
    [anon_sym_tls_cert_subject] = ACTIONS(1),
    [anon_sym_tls_DOTcert_subject] = ACTIONS(1),
    [anon_sym_tls_cert_issuer] = ACTIONS(1),
    [anon_sym_tls_DOTcert_issuer] = ACTIONS(1),
    [anon_sym_tls_cert_serial] = ACTIONS(1),
    [anon_sym_tls_DOTcert_serial] = ACTIONS(1),
    [anon_sym_tls_cert_fingerprint] = ACTIONS(1),
    [anon_sym_tls_DOTcert_fingerprint] = ACTIONS(1),
    [anon_sym_tls_sni] = ACTIONS(1),
    [anon_sym_tls_DOTsni] = ACTIONS(1),
    [sym_tls_cert_notbefore] = ACTIONS(1),
    [sym_tls_cert_notafter] = ACTIONS(1),
    [sym_tls_cert_expired] = ACTIONS(1),
    [sym_tls_cert_valid] = ACTIONS(1),
    [sym_tls_certs] = ACTIONS(1),
    [anon_sym_tls_DOTversion_COLON] = ACTIONS(1),
    [anon_sym_ssl_version_COLON] = ACTIONS(1),
    [anon_sym_sslv2] = ACTIONS(1),
    [anon_sym_sslv3] = ACTIONS(1),
    [anon_sym_tls_DOTsubject_COLON] = ACTIONS(1),
    [anon_sym_tls_DOTissuerdn_COLON] = ACTIONS(1),
    [anon_sym_tls_DOTfingerprint] = ACTIONS(1),
    [sym_tls_store] = ACTIONS(1),
    [anon_sym_ssl_state_COLON] = ACTIONS(1),
    [anon_sym_client_hello] = ACTIONS(1),
    [anon_sym_server_hello] = ACTIONS(1),
    [anon_sym_client_keyx] = ACTIONS(1),
    [anon_sym_server_keyx] = ACTIONS(1),
    [anon_sym_unkown] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_ssh_DOTproto] = ACTIONS(1),
    [anon_sym_ssh_proto] = ACTIONS(1),
    [anon_sym_ssh_DOTsoftware] = ACTIONS(1),
    [anon_sym_ssh_software] = ACTIONS(1),
    [anon_sym_ssh_DOTprotoversion_COLON] = ACTIONS(1),
    [anon_sym_2_compat] = ACTIONS(1),
    [anon_sym_ssh_DOTsoftwareversion_COLON] = ACTIONS(1),
    [sym_ssh_hassh] = ACTIONS(1),
    [sym_ssh_hassh_string] = ACTIONS(1),
    [sym_ssh_hassh_server] = ACTIONS(1),
    [sym_ssh_hassh_server_string] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(253),
    [sym__lines] = STATE(10),
    [sym_comment] = STATE(10),
    [sym__rule] = STATE(10),
    [sym_action] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(10),
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
    [sym__opts] = STATE(220),
    [sym_msg] = STATE(220),
    [sym_sid] = STATE(220),
    [sym_rev] = STATE(220),
    [sym_gid] = STATE(220),
    [sym_classtype] = STATE(220),
    [sym_reference] = STATE(220),
    [sym_priority] = STATE(220),
    [sym_metadata] = STATE(220),
    [sym_target] = STATE(220),
    [sym_ttl] = STATE(220),
    [sym_ipopts] = STATE(220),
    [sym_ip_proto] = STATE(220),
    [sym_geoip] = STATE(220),
    [sym_id] = STATE(220),
    [sym_fragbits] = STATE(220),
    [sym_fragoffset] = STATE(220),
    [sym_tos] = STATE(220),
    [sym_seq] = STATE(220),
    [sym_ack] = STATE(220),
    [sym_window] = STATE(220),
    [sym_tcp_mss] = STATE(220),
    [sym_itype] = STATE(220),
    [sym_icode] = STATE(220),
    [sym_icmp_id] = STATE(220),
    [sym_icmp_seq] = STATE(220),
    [sym_icmpv6_mtu] = STATE(220),
    [sym_content] = STATE(220),
    [sym_depth] = STATE(220),
    [sym_offset] = STATE(220),
    [sym_distance] = STATE(220),
    [sym_within] = STATE(220),
    [sym_isdataat] = STATE(220),
    [sym_bsize] = STATE(220),
    [sym_dsize] = STATE(220),
    [sym_rpc] = STATE(220),
    [sym_replace] = STATE(220),
    [sym_pcre] = STATE(220),
    [sym_pcrexform] = STATE(220),
    [sym_fast_pattern] = STATE(220),
    [sym_flowbits] = STATE(220),
    [sym_flow] = STATE(220),
    [sym_flowint] = STATE(220),
    [sym_stream_size] = STATE(220),
    [sym_filename] = STATE(220),
    [sym_fileext] = STATE(220),
    [sym_filemagic] = STATE(220),
    [sym_filestore] = STATE(220),
    [sym_filemd5] = STATE(220),
    [sym_filesha1] = STATE(220),
    [sym_filesha256] = STATE(220),
    [sym_filesize] = STATE(220),
    [sym_dns_opcode] = STATE(220),
    [sym_tls_cert_subject] = STATE(220),
    [sym_tls_cert_issuer] = STATE(220),
    [sym_tls_cert_serial] = STATE(220),
    [sym_tls_cert_fingerprint] = STATE(220),
    [sym_tls_sni] = STATE(220),
    [sym_tls_version] = STATE(220),
    [sym_ssl_version] = STATE(220),
    [sym_tls_subject] = STATE(220),
    [sym_tls_issuerdn] = STATE(220),
    [sym_tls_fingerprint] = STATE(220),
    [sym_ssl_state] = STATE(220),
    [sym_ssh_proto] = STATE(220),
    [sym_ssh_software] = STATE(220),
    [sym_ssh_protoversion] = STATE(220),
    [sym_ssh_softwareversion] = STATE(220),
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
    [anon_sym_flowbits_COLON] = ACTIONS(93),
    [anon_sym_flow_COLON] = ACTIONS(95),
    [anon_sym_flowint_COLON] = ACTIONS(97),
    [anon_sym_stream_size_COLON] = ACTIONS(99),
    [sym_bypass] = ACTIONS(35),
    [sym_http_uri] = ACTIONS(35),
    [anon_sym_filename_COLON] = ACTIONS(101),
    [anon_sym_fileext_COLON] = ACTIONS(103),
    [anon_sym_filemagic_COLON] = ACTIONS(105),
    [anon_sym_filestore_COLON] = ACTIONS(107),
    [anon_sym_filemd5_COLON] = ACTIONS(109),
    [anon_sym_filesha1_COLON] = ACTIONS(111),
    [anon_sym_filesha256_COLON] = ACTIONS(113),
    [anon_sym_filesize_COLON] = ACTIONS(115),
    [anon_sym_dns_DOTopcode_COLON] = ACTIONS(117),
    [sym_dns_query] = ACTIONS(35),
    [anon_sym_tls_cert_subject] = ACTIONS(119),
    [anon_sym_tls_DOTcert_subject] = ACTIONS(119),
    [anon_sym_tls_cert_issuer] = ACTIONS(121),
    [anon_sym_tls_DOTcert_issuer] = ACTIONS(121),
    [anon_sym_tls_cert_serial] = ACTIONS(123),
    [anon_sym_tls_DOTcert_serial] = ACTIONS(123),
    [anon_sym_tls_cert_fingerprint] = ACTIONS(125),
    [anon_sym_tls_DOTcert_fingerprint] = ACTIONS(125),
    [anon_sym_tls_sni] = ACTIONS(127),
    [anon_sym_tls_DOTsni] = ACTIONS(127),
    [sym_tls_cert_notbefore] = ACTIONS(35),
    [sym_tls_cert_notafter] = ACTIONS(35),
    [sym_tls_cert_expired] = ACTIONS(35),
    [sym_tls_cert_valid] = ACTIONS(35),
    [sym_tls_certs] = ACTIONS(35),
    [anon_sym_tls_DOTversion_COLON] = ACTIONS(129),
    [anon_sym_ssl_version_COLON] = ACTIONS(131),
    [anon_sym_tls_DOTsubject_COLON] = ACTIONS(133),
    [anon_sym_tls_DOTissuerdn_COLON] = ACTIONS(135),
    [anon_sym_tls_DOTfingerprint] = ACTIONS(137),
    [sym_tls_store] = ACTIONS(35),
    [anon_sym_ssl_state_COLON] = ACTIONS(139),
    [anon_sym_ssh_DOTproto] = ACTIONS(141),
    [anon_sym_ssh_proto] = ACTIONS(143),
    [anon_sym_ssh_DOTsoftware] = ACTIONS(145),
    [anon_sym_ssh_software] = ACTIONS(147),
    [anon_sym_ssh_DOTprotoversion_COLON] = ACTIONS(149),
    [anon_sym_ssh_DOTsoftwareversion_COLON] = ACTIONS(151),
    [sym_ssh_hassh] = ACTIONS(153),
    [sym_ssh_hassh_string] = ACTIONS(35),
    [sym_ssh_hassh_server] = ACTIONS(153),
    [sym_ssh_hassh_server_string] = ACTIONS(35),
  },
  [3] = {
    [sym__opts] = STATE(220),
    [sym_msg] = STATE(220),
    [sym_sid] = STATE(220),
    [sym_rev] = STATE(220),
    [sym_gid] = STATE(220),
    [sym_classtype] = STATE(220),
    [sym_reference] = STATE(220),
    [sym_priority] = STATE(220),
    [sym_metadata] = STATE(220),
    [sym_target] = STATE(220),
    [sym_ttl] = STATE(220),
    [sym_ipopts] = STATE(220),
    [sym_ip_proto] = STATE(220),
    [sym_geoip] = STATE(220),
    [sym_id] = STATE(220),
    [sym_fragbits] = STATE(220),
    [sym_fragoffset] = STATE(220),
    [sym_tos] = STATE(220),
    [sym_seq] = STATE(220),
    [sym_ack] = STATE(220),
    [sym_window] = STATE(220),
    [sym_tcp_mss] = STATE(220),
    [sym_itype] = STATE(220),
    [sym_icode] = STATE(220),
    [sym_icmp_id] = STATE(220),
    [sym_icmp_seq] = STATE(220),
    [sym_icmpv6_mtu] = STATE(220),
    [sym_content] = STATE(220),
    [sym_depth] = STATE(220),
    [sym_offset] = STATE(220),
    [sym_distance] = STATE(220),
    [sym_within] = STATE(220),
    [sym_isdataat] = STATE(220),
    [sym_bsize] = STATE(220),
    [sym_dsize] = STATE(220),
    [sym_rpc] = STATE(220),
    [sym_replace] = STATE(220),
    [sym_pcre] = STATE(220),
    [sym_pcrexform] = STATE(220),
    [sym_fast_pattern] = STATE(220),
    [sym_flowbits] = STATE(220),
    [sym_flow] = STATE(220),
    [sym_flowint] = STATE(220),
    [sym_stream_size] = STATE(220),
    [sym_filename] = STATE(220),
    [sym_fileext] = STATE(220),
    [sym_filemagic] = STATE(220),
    [sym_filestore] = STATE(220),
    [sym_filemd5] = STATE(220),
    [sym_filesha1] = STATE(220),
    [sym_filesha256] = STATE(220),
    [sym_filesize] = STATE(220),
    [sym_dns_opcode] = STATE(220),
    [sym_tls_cert_subject] = STATE(220),
    [sym_tls_cert_issuer] = STATE(220),
    [sym_tls_cert_serial] = STATE(220),
    [sym_tls_cert_fingerprint] = STATE(220),
    [sym_tls_sni] = STATE(220),
    [sym_tls_version] = STATE(220),
    [sym_ssl_version] = STATE(220),
    [sym_tls_subject] = STATE(220),
    [sym_tls_issuerdn] = STATE(220),
    [sym_tls_fingerprint] = STATE(220),
    [sym_ssl_state] = STATE(220),
    [sym_ssh_proto] = STATE(220),
    [sym_ssh_software] = STATE(220),
    [sym_ssh_protoversion] = STATE(220),
    [sym_ssh_softwareversion] = STATE(220),
    [aux_sym_options_repeat1] = STATE(3),
    [anon_sym_RPAREN] = ACTIONS(155),
    [anon_sym_msg_COLON] = ACTIONS(157),
    [anon_sym_sid_COLON] = ACTIONS(160),
    [anon_sym_rev_COLON] = ACTIONS(163),
    [anon_sym_gid_COLON] = ACTIONS(166),
    [anon_sym_classtype_COLON] = ACTIONS(169),
    [anon_sym_reference_COLON] = ACTIONS(172),
    [anon_sym_priority_COLON] = ACTIONS(175),
    [anon_sym_metadata_COLON] = ACTIONS(178),
    [anon_sym_target_COLON] = ACTIONS(181),
    [anon_sym_ttl_COLON] = ACTIONS(184),
    [anon_sym_ipopts_COLON] = ACTIONS(187),
    [sym_sameip] = ACTIONS(190),
    [anon_sym_ip_proto_COLON] = ACTIONS(193),
    [sym_ipv4_hdr] = ACTIONS(190),
    [sym_ipv6_hdr] = ACTIONS(190),
    [anon_sym_geoip_COLON] = ACTIONS(196),
    [anon_sym_id_COLON] = ACTIONS(199),
    [anon_sym_fragbits_COLON] = ACTIONS(202),
    [anon_sym_fragoffset_COLON] = ACTIONS(205),
    [anon_sym_tos_COLON] = ACTIONS(208),
    [anon_sym_seq_COLON] = ACTIONS(211),
    [anon_sym_ack_COLON] = ACTIONS(214),
    [anon_sym_window_COLON] = ACTIONS(217),
    [anon_sym_tcp_DOTmss_COLON] = ACTIONS(220),
    [sym_tcp_hdr] = ACTIONS(190),
    [sym_udp_hdr] = ACTIONS(190),
    [anon_sym_itype_COLON] = ACTIONS(223),
    [anon_sym_icode_COLON] = ACTIONS(226),
    [anon_sym_icmp_id_COLON] = ACTIONS(229),
    [anon_sym_icmp_seq_COLON] = ACTIONS(232),
    [sym_icmpv6_hdr] = ACTIONS(190),
    [anon_sym_icmpv6_DOTmtu_COLON] = ACTIONS(235),
    [anon_sym_content_COLON] = ACTIONS(238),
    [sym_nocase] = ACTIONS(190),
    [anon_sym_depth_COLON] = ACTIONS(241),
    [sym_startswith] = ACTIONS(190),
    [sym_endswith] = ACTIONS(190),
    [anon_sym_offset_COLON] = ACTIONS(244),
    [anon_sym_distance_COLON] = ACTIONS(247),
    [anon_sym_within_COLON] = ACTIONS(250),
    [anon_sym_isdataat_COLON] = ACTIONS(253),
    [anon_sym_bsize_COLON] = ACTIONS(256),
    [anon_sym_dsize_COLON] = ACTIONS(259),
    [anon_sym_rpc_COLON] = ACTIONS(262),
    [anon_sym_replace_COLON] = ACTIONS(265),
    [anon_sym_pcre_COLON] = ACTIONS(268),
    [sym_dotprefix] = ACTIONS(190),
    [sym_strip_whitespace] = ACTIONS(190),
    [sym_compress_whitespace] = ACTIONS(190),
    [sym_to_md5] = ACTIONS(190),
    [sym_to_sha1] = ACTIONS(190),
    [sym_to_sha256] = ACTIONS(190),
    [anon_sym_pcrexform_COLON] = ACTIONS(271),
    [sym_url_decode] = ACTIONS(190),
    [anon_sym_fastpattern] = ACTIONS(274),
    [sym_prefilter] = ACTIONS(190),
    [anon_sym_flowbits_COLON] = ACTIONS(277),
    [anon_sym_flow_COLON] = ACTIONS(280),
    [anon_sym_flowint_COLON] = ACTIONS(283),
    [anon_sym_stream_size_COLON] = ACTIONS(286),
    [sym_bypass] = ACTIONS(190),
    [sym_http_uri] = ACTIONS(190),
    [anon_sym_filename_COLON] = ACTIONS(289),
    [anon_sym_fileext_COLON] = ACTIONS(292),
    [anon_sym_filemagic_COLON] = ACTIONS(295),
    [anon_sym_filestore_COLON] = ACTIONS(298),
    [anon_sym_filemd5_COLON] = ACTIONS(301),
    [anon_sym_filesha1_COLON] = ACTIONS(304),
    [anon_sym_filesha256_COLON] = ACTIONS(307),
    [anon_sym_filesize_COLON] = ACTIONS(310),
    [anon_sym_dns_DOTopcode_COLON] = ACTIONS(313),
    [sym_dns_query] = ACTIONS(190),
    [anon_sym_tls_cert_subject] = ACTIONS(316),
    [anon_sym_tls_DOTcert_subject] = ACTIONS(316),
    [anon_sym_tls_cert_issuer] = ACTIONS(319),
    [anon_sym_tls_DOTcert_issuer] = ACTIONS(319),
    [anon_sym_tls_cert_serial] = ACTIONS(322),
    [anon_sym_tls_DOTcert_serial] = ACTIONS(322),
    [anon_sym_tls_cert_fingerprint] = ACTIONS(325),
    [anon_sym_tls_DOTcert_fingerprint] = ACTIONS(325),
    [anon_sym_tls_sni] = ACTIONS(328),
    [anon_sym_tls_DOTsni] = ACTIONS(328),
    [sym_tls_cert_notbefore] = ACTIONS(190),
    [sym_tls_cert_notafter] = ACTIONS(190),
    [sym_tls_cert_expired] = ACTIONS(190),
    [sym_tls_cert_valid] = ACTIONS(190),
    [sym_tls_certs] = ACTIONS(190),
    [anon_sym_tls_DOTversion_COLON] = ACTIONS(331),
    [anon_sym_ssl_version_COLON] = ACTIONS(334),
    [anon_sym_tls_DOTsubject_COLON] = ACTIONS(337),
    [anon_sym_tls_DOTissuerdn_COLON] = ACTIONS(340),
    [anon_sym_tls_DOTfingerprint] = ACTIONS(343),
    [sym_tls_store] = ACTIONS(190),
    [anon_sym_ssl_state_COLON] = ACTIONS(346),
    [anon_sym_ssh_DOTproto] = ACTIONS(349),
    [anon_sym_ssh_proto] = ACTIONS(352),
    [anon_sym_ssh_DOTsoftware] = ACTIONS(355),
    [anon_sym_ssh_software] = ACTIONS(358),
    [anon_sym_ssh_DOTprotoversion_COLON] = ACTIONS(361),
    [anon_sym_ssh_DOTsoftwareversion_COLON] = ACTIONS(364),
    [sym_ssh_hassh] = ACTIONS(367),
    [sym_ssh_hassh_string] = ACTIONS(190),
    [sym_ssh_hassh_server] = ACTIONS(367),
    [sym_ssh_hassh_server_string] = ACTIONS(190),
  },
  [4] = {
    [sym__opts] = STATE(220),
    [sym_msg] = STATE(220),
    [sym_sid] = STATE(220),
    [sym_rev] = STATE(220),
    [sym_gid] = STATE(220),
    [sym_classtype] = STATE(220),
    [sym_reference] = STATE(220),
    [sym_priority] = STATE(220),
    [sym_metadata] = STATE(220),
    [sym_target] = STATE(220),
    [sym_ttl] = STATE(220),
    [sym_ipopts] = STATE(220),
    [sym_ip_proto] = STATE(220),
    [sym_geoip] = STATE(220),
    [sym_id] = STATE(220),
    [sym_fragbits] = STATE(220),
    [sym_fragoffset] = STATE(220),
    [sym_tos] = STATE(220),
    [sym_seq] = STATE(220),
    [sym_ack] = STATE(220),
    [sym_window] = STATE(220),
    [sym_tcp_mss] = STATE(220),
    [sym_itype] = STATE(220),
    [sym_icode] = STATE(220),
    [sym_icmp_id] = STATE(220),
    [sym_icmp_seq] = STATE(220),
    [sym_icmpv6_mtu] = STATE(220),
    [sym_content] = STATE(220),
    [sym_depth] = STATE(220),
    [sym_offset] = STATE(220),
    [sym_distance] = STATE(220),
    [sym_within] = STATE(220),
    [sym_isdataat] = STATE(220),
    [sym_bsize] = STATE(220),
    [sym_dsize] = STATE(220),
    [sym_rpc] = STATE(220),
    [sym_replace] = STATE(220),
    [sym_pcre] = STATE(220),
    [sym_pcrexform] = STATE(220),
    [sym_fast_pattern] = STATE(220),
    [sym_flowbits] = STATE(220),
    [sym_flow] = STATE(220),
    [sym_flowint] = STATE(220),
    [sym_stream_size] = STATE(220),
    [sym_filename] = STATE(220),
    [sym_fileext] = STATE(220),
    [sym_filemagic] = STATE(220),
    [sym_filestore] = STATE(220),
    [sym_filemd5] = STATE(220),
    [sym_filesha1] = STATE(220),
    [sym_filesha256] = STATE(220),
    [sym_filesize] = STATE(220),
    [sym_dns_opcode] = STATE(220),
    [sym_tls_cert_subject] = STATE(220),
    [sym_tls_cert_issuer] = STATE(220),
    [sym_tls_cert_serial] = STATE(220),
    [sym_tls_cert_fingerprint] = STATE(220),
    [sym_tls_sni] = STATE(220),
    [sym_tls_version] = STATE(220),
    [sym_ssl_version] = STATE(220),
    [sym_tls_subject] = STATE(220),
    [sym_tls_issuerdn] = STATE(220),
    [sym_tls_fingerprint] = STATE(220),
    [sym_ssl_state] = STATE(220),
    [sym_ssh_proto] = STATE(220),
    [sym_ssh_software] = STATE(220),
    [sym_ssh_protoversion] = STATE(220),
    [sym_ssh_softwareversion] = STATE(220),
    [aux_sym_options_repeat1] = STATE(3),
    [anon_sym_RPAREN] = ACTIONS(370),
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
    [anon_sym_flowbits_COLON] = ACTIONS(93),
    [anon_sym_flow_COLON] = ACTIONS(95),
    [anon_sym_flowint_COLON] = ACTIONS(97),
    [anon_sym_stream_size_COLON] = ACTIONS(99),
    [sym_bypass] = ACTIONS(35),
    [sym_http_uri] = ACTIONS(35),
    [anon_sym_filename_COLON] = ACTIONS(101),
    [anon_sym_fileext_COLON] = ACTIONS(103),
    [anon_sym_filemagic_COLON] = ACTIONS(105),
    [anon_sym_filestore_COLON] = ACTIONS(107),
    [anon_sym_filemd5_COLON] = ACTIONS(109),
    [anon_sym_filesha1_COLON] = ACTIONS(111),
    [anon_sym_filesha256_COLON] = ACTIONS(113),
    [anon_sym_filesize_COLON] = ACTIONS(115),
    [anon_sym_dns_DOTopcode_COLON] = ACTIONS(117),
    [sym_dns_query] = ACTIONS(35),
    [anon_sym_tls_cert_subject] = ACTIONS(119),
    [anon_sym_tls_DOTcert_subject] = ACTIONS(119),
    [anon_sym_tls_cert_issuer] = ACTIONS(121),
    [anon_sym_tls_DOTcert_issuer] = ACTIONS(121),
    [anon_sym_tls_cert_serial] = ACTIONS(123),
    [anon_sym_tls_DOTcert_serial] = ACTIONS(123),
    [anon_sym_tls_cert_fingerprint] = ACTIONS(125),
    [anon_sym_tls_DOTcert_fingerprint] = ACTIONS(125),
    [anon_sym_tls_sni] = ACTIONS(127),
    [anon_sym_tls_DOTsni] = ACTIONS(127),
    [sym_tls_cert_notbefore] = ACTIONS(35),
    [sym_tls_cert_notafter] = ACTIONS(35),
    [sym_tls_cert_expired] = ACTIONS(35),
    [sym_tls_cert_valid] = ACTIONS(35),
    [sym_tls_certs] = ACTIONS(35),
    [anon_sym_tls_DOTversion_COLON] = ACTIONS(129),
    [anon_sym_ssl_version_COLON] = ACTIONS(131),
    [anon_sym_tls_DOTsubject_COLON] = ACTIONS(133),
    [anon_sym_tls_DOTissuerdn_COLON] = ACTIONS(135),
    [anon_sym_tls_DOTfingerprint] = ACTIONS(137),
    [sym_tls_store] = ACTIONS(35),
    [anon_sym_ssl_state_COLON] = ACTIONS(139),
    [anon_sym_ssh_DOTproto] = ACTIONS(141),
    [anon_sym_ssh_proto] = ACTIONS(143),
    [anon_sym_ssh_DOTsoftware] = ACTIONS(145),
    [anon_sym_ssh_software] = ACTIONS(147),
    [anon_sym_ssh_DOTprotoversion_COLON] = ACTIONS(149),
    [anon_sym_ssh_DOTsoftwareversion_COLON] = ACTIONS(151),
    [sym_ssh_hassh] = ACTIONS(153),
    [sym_ssh_hassh_string] = ACTIONS(35),
    [sym_ssh_hassh_server] = ACTIONS(153),
    [sym_ssh_hassh_server_string] = ACTIONS(35),
  },
  [5] = {
    [sym__opts] = STATE(208),
    [sym_msg] = STATE(208),
    [sym_sid] = STATE(208),
    [sym_rev] = STATE(208),
    [sym_gid] = STATE(208),
    [sym_classtype] = STATE(208),
    [sym_reference] = STATE(208),
    [sym_priority] = STATE(208),
    [sym_metadata] = STATE(208),
    [sym_target] = STATE(208),
    [sym_ttl] = STATE(208),
    [sym_ipopts] = STATE(208),
    [sym_ip_proto] = STATE(208),
    [sym_geoip] = STATE(208),
    [sym_id] = STATE(208),
    [sym_fragbits] = STATE(208),
    [sym_fragoffset] = STATE(208),
    [sym_tos] = STATE(208),
    [sym_seq] = STATE(208),
    [sym_ack] = STATE(208),
    [sym_window] = STATE(208),
    [sym_tcp_mss] = STATE(208),
    [sym_itype] = STATE(208),
    [sym_icode] = STATE(208),
    [sym_icmp_id] = STATE(208),
    [sym_icmp_seq] = STATE(208),
    [sym_icmpv6_mtu] = STATE(208),
    [sym_content] = STATE(208),
    [sym_depth] = STATE(208),
    [sym_offset] = STATE(208),
    [sym_distance] = STATE(208),
    [sym_within] = STATE(208),
    [sym_isdataat] = STATE(208),
    [sym_bsize] = STATE(208),
    [sym_dsize] = STATE(208),
    [sym_rpc] = STATE(208),
    [sym_replace] = STATE(208),
    [sym_pcre] = STATE(208),
    [sym_pcrexform] = STATE(208),
    [sym_fast_pattern] = STATE(208),
    [sym_flowbits] = STATE(208),
    [sym_flow] = STATE(208),
    [sym_flowint] = STATE(208),
    [sym_stream_size] = STATE(208),
    [sym_filename] = STATE(208),
    [sym_fileext] = STATE(208),
    [sym_filemagic] = STATE(208),
    [sym_filestore] = STATE(208),
    [sym_filemd5] = STATE(208),
    [sym_filesha1] = STATE(208),
    [sym_filesha256] = STATE(208),
    [sym_filesize] = STATE(208),
    [sym_dns_opcode] = STATE(208),
    [sym_tls_cert_subject] = STATE(208),
    [sym_tls_cert_issuer] = STATE(208),
    [sym_tls_cert_serial] = STATE(208),
    [sym_tls_cert_fingerprint] = STATE(208),
    [sym_tls_sni] = STATE(208),
    [sym_tls_version] = STATE(208),
    [sym_ssl_version] = STATE(208),
    [sym_tls_subject] = STATE(208),
    [sym_tls_issuerdn] = STATE(208),
    [sym_tls_fingerprint] = STATE(208),
    [sym_ssl_state] = STATE(208),
    [sym_ssh_proto] = STATE(208),
    [sym_ssh_software] = STATE(208),
    [sym_ssh_protoversion] = STATE(208),
    [sym_ssh_softwareversion] = STATE(208),
    [anon_sym_RPAREN] = ACTIONS(372),
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
    [sym_sameip] = ACTIONS(374),
    [anon_sym_ip_proto_COLON] = ACTIONS(37),
    [sym_ipv4_hdr] = ACTIONS(374),
    [sym_ipv6_hdr] = ACTIONS(374),
    [anon_sym_geoip_COLON] = ACTIONS(39),
    [anon_sym_id_COLON] = ACTIONS(41),
    [anon_sym_fragbits_COLON] = ACTIONS(43),
    [anon_sym_fragoffset_COLON] = ACTIONS(45),
    [anon_sym_tos_COLON] = ACTIONS(47),
    [anon_sym_seq_COLON] = ACTIONS(49),
    [anon_sym_ack_COLON] = ACTIONS(51),
    [anon_sym_window_COLON] = ACTIONS(53),
    [anon_sym_tcp_DOTmss_COLON] = ACTIONS(55),
    [sym_tcp_hdr] = ACTIONS(374),
    [sym_udp_hdr] = ACTIONS(374),
    [anon_sym_itype_COLON] = ACTIONS(57),
    [anon_sym_icode_COLON] = ACTIONS(59),
    [anon_sym_icmp_id_COLON] = ACTIONS(61),
    [anon_sym_icmp_seq_COLON] = ACTIONS(63),
    [sym_icmpv6_hdr] = ACTIONS(374),
    [anon_sym_icmpv6_DOTmtu_COLON] = ACTIONS(65),
    [anon_sym_content_COLON] = ACTIONS(67),
    [sym_nocase] = ACTIONS(374),
    [anon_sym_depth_COLON] = ACTIONS(69),
    [sym_startswith] = ACTIONS(374),
    [sym_endswith] = ACTIONS(374),
    [anon_sym_offset_COLON] = ACTIONS(71),
    [anon_sym_distance_COLON] = ACTIONS(73),
    [anon_sym_within_COLON] = ACTIONS(75),
    [anon_sym_isdataat_COLON] = ACTIONS(77),
    [anon_sym_bsize_COLON] = ACTIONS(79),
    [anon_sym_dsize_COLON] = ACTIONS(81),
    [anon_sym_rpc_COLON] = ACTIONS(83),
    [anon_sym_replace_COLON] = ACTIONS(85),
    [anon_sym_pcre_COLON] = ACTIONS(87),
    [sym_dotprefix] = ACTIONS(374),
    [sym_strip_whitespace] = ACTIONS(374),
    [sym_compress_whitespace] = ACTIONS(374),
    [sym_to_md5] = ACTIONS(374),
    [sym_to_sha1] = ACTIONS(374),
    [sym_to_sha256] = ACTIONS(374),
    [anon_sym_pcrexform_COLON] = ACTIONS(89),
    [sym_url_decode] = ACTIONS(374),
    [anon_sym_fastpattern] = ACTIONS(91),
    [sym_prefilter] = ACTIONS(374),
    [anon_sym_flowbits_COLON] = ACTIONS(93),
    [anon_sym_flow_COLON] = ACTIONS(95),
    [anon_sym_flowint_COLON] = ACTIONS(97),
    [anon_sym_stream_size_COLON] = ACTIONS(99),
    [sym_bypass] = ACTIONS(374),
    [sym_http_uri] = ACTIONS(374),
    [anon_sym_filename_COLON] = ACTIONS(101),
    [anon_sym_fileext_COLON] = ACTIONS(103),
    [anon_sym_filemagic_COLON] = ACTIONS(105),
    [anon_sym_filestore_COLON] = ACTIONS(107),
    [anon_sym_filemd5_COLON] = ACTIONS(109),
    [anon_sym_filesha1_COLON] = ACTIONS(111),
    [anon_sym_filesha256_COLON] = ACTIONS(113),
    [anon_sym_filesize_COLON] = ACTIONS(115),
    [anon_sym_dns_DOTopcode_COLON] = ACTIONS(117),
    [sym_dns_query] = ACTIONS(374),
    [anon_sym_tls_cert_subject] = ACTIONS(119),
    [anon_sym_tls_DOTcert_subject] = ACTIONS(119),
    [anon_sym_tls_cert_issuer] = ACTIONS(121),
    [anon_sym_tls_DOTcert_issuer] = ACTIONS(121),
    [anon_sym_tls_cert_serial] = ACTIONS(123),
    [anon_sym_tls_DOTcert_serial] = ACTIONS(123),
    [anon_sym_tls_cert_fingerprint] = ACTIONS(125),
    [anon_sym_tls_DOTcert_fingerprint] = ACTIONS(125),
    [anon_sym_tls_sni] = ACTIONS(127),
    [anon_sym_tls_DOTsni] = ACTIONS(127),
    [sym_tls_cert_notbefore] = ACTIONS(374),
    [sym_tls_cert_notafter] = ACTIONS(374),
    [sym_tls_cert_expired] = ACTIONS(374),
    [sym_tls_cert_valid] = ACTIONS(374),
    [sym_tls_certs] = ACTIONS(374),
    [anon_sym_tls_DOTversion_COLON] = ACTIONS(129),
    [anon_sym_ssl_version_COLON] = ACTIONS(131),
    [anon_sym_tls_DOTsubject_COLON] = ACTIONS(133),
    [anon_sym_tls_DOTissuerdn_COLON] = ACTIONS(135),
    [anon_sym_tls_DOTfingerprint] = ACTIONS(137),
    [sym_tls_store] = ACTIONS(374),
    [anon_sym_ssl_state_COLON] = ACTIONS(139),
    [anon_sym_ssh_DOTproto] = ACTIONS(141),
    [anon_sym_ssh_proto] = ACTIONS(143),
    [anon_sym_ssh_DOTsoftware] = ACTIONS(145),
    [anon_sym_ssh_software] = ACTIONS(147),
    [anon_sym_ssh_DOTprotoversion_COLON] = ACTIONS(149),
    [anon_sym_ssh_DOTsoftwareversion_COLON] = ACTIONS(151),
    [sym_ssh_hassh] = ACTIONS(376),
    [sym_ssh_hassh_string] = ACTIONS(374),
    [sym_ssh_hassh_server] = ACTIONS(376),
    [sym_ssh_hassh_server_string] = ACTIONS(374),
  },
  [6] = {
    [anon_sym_RPAREN] = ACTIONS(155),
    [anon_sym_msg_COLON] = ACTIONS(155),
    [anon_sym_sid_COLON] = ACTIONS(155),
    [anon_sym_rev_COLON] = ACTIONS(155),
    [anon_sym_gid_COLON] = ACTIONS(155),
    [anon_sym_classtype_COLON] = ACTIONS(155),
    [anon_sym_reference_COLON] = ACTIONS(155),
    [anon_sym_priority_COLON] = ACTIONS(155),
    [anon_sym_metadata_COLON] = ACTIONS(155),
    [anon_sym_target_COLON] = ACTIONS(155),
    [anon_sym_ttl_COLON] = ACTIONS(155),
    [anon_sym_ipopts_COLON] = ACTIONS(155),
    [sym_sameip] = ACTIONS(155),
    [anon_sym_ip_proto_COLON] = ACTIONS(155),
    [sym_ipv4_hdr] = ACTIONS(155),
    [sym_ipv6_hdr] = ACTIONS(155),
    [anon_sym_geoip_COLON] = ACTIONS(155),
    [anon_sym_id_COLON] = ACTIONS(155),
    [anon_sym_fragbits_COLON] = ACTIONS(155),
    [anon_sym_fragoffset_COLON] = ACTIONS(155),
    [anon_sym_tos_COLON] = ACTIONS(155),
    [anon_sym_seq_COLON] = ACTIONS(155),
    [anon_sym_ack_COLON] = ACTIONS(155),
    [anon_sym_window_COLON] = ACTIONS(155),
    [anon_sym_tcp_DOTmss_COLON] = ACTIONS(155),
    [sym_tcp_hdr] = ACTIONS(155),
    [sym_udp_hdr] = ACTIONS(155),
    [anon_sym_itype_COLON] = ACTIONS(155),
    [anon_sym_icode_COLON] = ACTIONS(155),
    [anon_sym_icmp_id_COLON] = ACTIONS(155),
    [anon_sym_icmp_seq_COLON] = ACTIONS(155),
    [sym_icmpv6_hdr] = ACTIONS(155),
    [anon_sym_icmpv6_DOTmtu_COLON] = ACTIONS(155),
    [anon_sym_content_COLON] = ACTIONS(155),
    [sym_nocase] = ACTIONS(155),
    [anon_sym_depth_COLON] = ACTIONS(155),
    [sym_startswith] = ACTIONS(155),
    [sym_endswith] = ACTIONS(155),
    [anon_sym_offset_COLON] = ACTIONS(155),
    [anon_sym_distance_COLON] = ACTIONS(155),
    [anon_sym_within_COLON] = ACTIONS(155),
    [anon_sym_isdataat_COLON] = ACTIONS(155),
    [anon_sym_bsize_COLON] = ACTIONS(155),
    [anon_sym_dsize_COLON] = ACTIONS(155),
    [anon_sym_rpc_COLON] = ACTIONS(155),
    [anon_sym_replace_COLON] = ACTIONS(155),
    [anon_sym_pcre_COLON] = ACTIONS(155),
    [sym_dotprefix] = ACTIONS(155),
    [sym_strip_whitespace] = ACTIONS(155),
    [sym_compress_whitespace] = ACTIONS(155),
    [sym_to_md5] = ACTIONS(155),
    [sym_to_sha1] = ACTIONS(155),
    [sym_to_sha256] = ACTIONS(155),
    [anon_sym_pcrexform_COLON] = ACTIONS(155),
    [sym_url_decode] = ACTIONS(155),
    [anon_sym_fastpattern] = ACTIONS(155),
    [sym_prefilter] = ACTIONS(155),
    [anon_sym_flowbits_COLON] = ACTIONS(155),
    [anon_sym_flow_COLON] = ACTIONS(155),
    [anon_sym_flowint_COLON] = ACTIONS(155),
    [anon_sym_stream_size_COLON] = ACTIONS(155),
    [sym_bypass] = ACTIONS(155),
    [sym_http_uri] = ACTIONS(155),
    [anon_sym_filename_COLON] = ACTIONS(155),
    [anon_sym_fileext_COLON] = ACTIONS(155),
    [anon_sym_filemagic_COLON] = ACTIONS(155),
    [anon_sym_filestore_COLON] = ACTIONS(155),
    [anon_sym_filemd5_COLON] = ACTIONS(155),
    [anon_sym_filesha1_COLON] = ACTIONS(155),
    [anon_sym_filesha256_COLON] = ACTIONS(155),
    [anon_sym_filesize_COLON] = ACTIONS(155),
    [anon_sym_dns_DOTopcode_COLON] = ACTIONS(155),
    [sym_dns_query] = ACTIONS(155),
    [anon_sym_tls_cert_subject] = ACTIONS(155),
    [anon_sym_tls_DOTcert_subject] = ACTIONS(155),
    [anon_sym_tls_cert_issuer] = ACTIONS(155),
    [anon_sym_tls_DOTcert_issuer] = ACTIONS(155),
    [anon_sym_tls_cert_serial] = ACTIONS(155),
    [anon_sym_tls_DOTcert_serial] = ACTIONS(155),
    [anon_sym_tls_cert_fingerprint] = ACTIONS(155),
    [anon_sym_tls_DOTcert_fingerprint] = ACTIONS(155),
    [anon_sym_tls_sni] = ACTIONS(155),
    [anon_sym_tls_DOTsni] = ACTIONS(155),
    [sym_tls_cert_notbefore] = ACTIONS(155),
    [sym_tls_cert_notafter] = ACTIONS(155),
    [sym_tls_cert_expired] = ACTIONS(155),
    [sym_tls_cert_valid] = ACTIONS(155),
    [sym_tls_certs] = ACTIONS(155),
    [anon_sym_tls_DOTversion_COLON] = ACTIONS(155),
    [anon_sym_ssl_version_COLON] = ACTIONS(155),
    [anon_sym_tls_DOTsubject_COLON] = ACTIONS(155),
    [anon_sym_tls_DOTissuerdn_COLON] = ACTIONS(155),
    [anon_sym_tls_DOTfingerprint] = ACTIONS(155),
    [sym_tls_store] = ACTIONS(155),
    [anon_sym_ssl_state_COLON] = ACTIONS(155),
    [anon_sym_ssh_DOTproto] = ACTIONS(378),
    [anon_sym_ssh_proto] = ACTIONS(155),
    [anon_sym_ssh_DOTsoftware] = ACTIONS(378),
    [anon_sym_ssh_software] = ACTIONS(155),
    [anon_sym_ssh_DOTprotoversion_COLON] = ACTIONS(155),
    [anon_sym_ssh_DOTsoftwareversion_COLON] = ACTIONS(155),
    [sym_ssh_hassh] = ACTIONS(378),
    [sym_ssh_hassh_string] = ACTIONS(155),
    [sym_ssh_hassh_server] = ACTIONS(378),
    [sym_ssh_hassh_server_string] = ACTIONS(155),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(382), 1,
      anon_sym_http,
    STATE(18), 1,
      sym_protocol,
    STATE(155), 1,
      sym_header,
    ACTIONS(380), 26,
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
  [38] = 2,
    ACTIONS(386), 1,
      anon_sym_http,
    ACTIONS(384), 26,
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
  [70] = 6,
    ACTIONS(388), 1,
      ts_builtin_sym_end,
    ACTIONS(390), 1,
      anon_sym_POUND,
    ACTIONS(396), 1,
      anon_sym_reject,
    STATE(7), 1,
      sym_action,
    STATE(9), 4,
      sym__lines,
      sym_comment,
      sym__rule,
      aux_sym_source_file_repeat1,
    ACTIONS(393), 6,
      anon_sym_alert,
      anon_sym_pass,
      anon_sym_drop,
      anon_sym_rejectsrc,
      anon_sym_rejectdst,
      anon_sym_rejectboth,
  [97] = 6,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(9), 1,
      anon_sym_reject,
    ACTIONS(399), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      sym_action,
    STATE(9), 4,
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
  [124] = 3,
    ACTIONS(401), 1,
      anon_sym_SEMI,
    STATE(13), 1,
      aux_sym_flow_repeat1,
    ACTIONS(403), 11,
      anon_sym_to_client,
      anon_sym_to_server,
      anon_sym_from_client,
      anon_sym_from_server,
      anon_sym_established,
      anon_sym_not_established,
      anon_sym_stateless,
      anon_sym_only_stream,
      anon_sym_no_stream,
      anon_sym_only_frag,
      anon_sym_no_frag,
  [144] = 8,
    ACTIONS(405), 1,
      anon_sym_LBRACK,
    ACTIONS(407), 1,
      anon_sym_RBRACK,
    ACTIONS(409), 1,
      sym_negation,
    ACTIONS(411), 1,
      anon_sym_DOLLAR,
    ACTIONS(413), 1,
      aux_sym_ipv4_token1,
    ACTIONS(415), 1,
      sym__ipv6_octet,
    STATE(23), 1,
      aux_sym_ipv6_repeat1,
    STATE(141), 6,
      sym__location,
      sym__standalone_location,
      sym_group_location,
      sym_variable,
      sym_ipv4,
      sym_ipv6,
  [174] = 3,
    ACTIONS(417), 1,
      anon_sym_SEMI,
    STATE(13), 1,
      aux_sym_flow_repeat1,
    ACTIONS(419), 11,
      anon_sym_to_client,
      anon_sym_to_server,
      anon_sym_from_client,
      anon_sym_from_server,
      anon_sym_established,
      anon_sym_not_established,
      anon_sym_stateless,
      anon_sym_only_stream,
      anon_sym_no_stream,
      anon_sym_only_frag,
      anon_sym_no_frag,
  [194] = 8,
    ACTIONS(405), 1,
      anon_sym_LBRACK,
    ACTIONS(409), 1,
      sym_negation,
    ACTIONS(411), 1,
      anon_sym_DOLLAR,
    ACTIONS(413), 1,
      aux_sym_ipv4_token1,
    ACTIONS(415), 1,
      sym__ipv6_octet,
    ACTIONS(422), 1,
      anon_sym_RBRACK,
    STATE(23), 1,
      aux_sym_ipv6_repeat1,
    STATE(103), 6,
      sym__location,
      sym__standalone_location,
      sym_group_location,
      sym_variable,
      sym_ipv4,
      sym_ipv6,
  [224] = 2,
    ACTIONS(424), 1,
      anon_sym_COMMA,
    ACTIONS(426), 12,
      anon_sym_SEMI,
      anon_sym_to_client,
      anon_sym_to_server,
      anon_sym_from_client,
      anon_sym_from_server,
      anon_sym_established,
      anon_sym_not_established,
      anon_sym_stateless,
      anon_sym_only_stream,
      anon_sym_no_stream,
      anon_sym_only_frag,
      anon_sym_no_frag,
  [242] = 7,
    ACTIONS(405), 1,
      anon_sym_LBRACK,
    ACTIONS(409), 1,
      sym_negation,
    ACTIONS(411), 1,
      anon_sym_DOLLAR,
    ACTIONS(413), 1,
      aux_sym_ipv4_token1,
    ACTIONS(415), 1,
      sym__ipv6_octet,
    STATE(23), 1,
      aux_sym_ipv6_repeat1,
    STATE(41), 6,
      sym__location,
      sym__standalone_location,
      sym_group_location,
      sym_variable,
      sym_ipv4,
      sym_ipv6,
  [269] = 7,
    ACTIONS(405), 1,
      anon_sym_LBRACK,
    ACTIONS(409), 1,
      sym_negation,
    ACTIONS(411), 1,
      anon_sym_DOLLAR,
    ACTIONS(413), 1,
      aux_sym_ipv4_token1,
    ACTIONS(415), 1,
      sym__ipv6_octet,
    STATE(23), 1,
      aux_sym_ipv6_repeat1,
    STATE(158), 6,
      sym__location,
      sym__standalone_location,
      sym_group_location,
      sym_variable,
      sym_ipv4,
      sym_ipv6,
  [296] = 7,
    ACTIONS(405), 1,
      anon_sym_LBRACK,
    ACTIONS(409), 1,
      sym_negation,
    ACTIONS(411), 1,
      anon_sym_DOLLAR,
    ACTIONS(413), 1,
      aux_sym_ipv4_token1,
    ACTIONS(415), 1,
      sym__ipv6_octet,
    STATE(23), 1,
      aux_sym_ipv6_repeat1,
    STATE(46), 6,
      sym__location,
      sym__standalone_location,
      sym_group_location,
      sym_variable,
      sym_ipv4,
      sym_ipv6,
  [323] = 2,
    STATE(11), 1,
      aux_sym_flow_repeat1,
    ACTIONS(403), 11,
      anon_sym_to_client,
      anon_sym_to_server,
      anon_sym_from_client,
      anon_sym_from_server,
      anon_sym_established,
      anon_sym_not_established,
      anon_sym_stateless,
      anon_sym_only_stream,
      anon_sym_no_stream,
      anon_sym_only_frag,
      anon_sym_no_frag,
  [340] = 1,
    ACTIONS(417), 12,
      anon_sym_SEMI,
      anon_sym_to_client,
      anon_sym_to_server,
      anon_sym_from_client,
      anon_sym_from_server,
      anon_sym_established,
      anon_sym_not_established,
      anon_sym_stateless,
      anon_sym_only_stream,
      anon_sym_no_stream,
      anon_sym_only_frag,
      anon_sym_no_frag,
  [355] = 1,
    ACTIONS(428), 10,
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
  [368] = 4,
    ACTIONS(432), 1,
      sym__ipv6_octet,
    ACTIONS(435), 1,
      aux_sym_port_token1,
    STATE(22), 1,
      aux_sym_ipv6_repeat1,
    ACTIONS(430), 6,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_negation,
      aux_sym_ipv4_token2,
      anon_sym_any,
  [386] = 5,
    ACTIONS(439), 1,
      aux_sym_ipv4_token2,
    ACTIONS(441), 1,
      sym__ipv6_octet,
    ACTIONS(443), 1,
      aux_sym_port_token1,
    STATE(22), 1,
      aux_sym_ipv6_repeat1,
    ACTIONS(437), 5,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_negation,
      anon_sym_any,
  [406] = 2,
    ACTIONS(447), 1,
      anon_sym_reject,
    ACTIONS(445), 8,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_alert,
      anon_sym_pass,
      anon_sym_drop,
      anon_sym_rejectsrc,
      anon_sym_rejectdst,
      anon_sym_rejectboth,
  [420] = 2,
    ACTIONS(451), 1,
      anon_sym_reject,
    ACTIONS(449), 8,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_alert,
      anon_sym_pass,
      anon_sym_drop,
      anon_sym_rejectsrc,
      anon_sym_rejectdst,
      anon_sym_rejectboth,
  [434] = 2,
    ACTIONS(455), 1,
      anon_sym_reject,
    ACTIONS(453), 8,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_alert,
      anon_sym_pass,
      anon_sym_drop,
      anon_sym_rejectsrc,
      anon_sym_rejectdst,
      anon_sym_rejectboth,
  [448] = 2,
    ACTIONS(459), 1,
      anon_sym_reject,
    ACTIONS(457), 8,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_alert,
      anon_sym_pass,
      anon_sym_drop,
      anon_sym_rejectsrc,
      anon_sym_rejectdst,
      anon_sym_rejectboth,
  [462] = 2,
    ACTIONS(463), 1,
      anon_sym_reject,
    ACTIONS(461), 8,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_alert,
      anon_sym_pass,
      anon_sym_drop,
      anon_sym_rejectsrc,
      anon_sym_rejectdst,
      anon_sym_rejectboth,
  [476] = 6,
    ACTIONS(411), 1,
      anon_sym_DOLLAR,
    ACTIONS(413), 1,
      aux_sym_ipv4_token1,
    ACTIONS(415), 1,
      sym__ipv6_octet,
    ACTIONS(465), 1,
      anon_sym_LBRACK,
    STATE(23), 1,
      aux_sym_ipv6_repeat1,
    STATE(54), 3,
      sym_variable,
      sym_ipv4,
      sym_ipv6,
  [497] = 2,
    ACTIONS(467), 1,
      anon_sym_COMMA,
    ACTIONS(469), 7,
      anon_sym_SEMI,
      anon_sym_sslv2,
      anon_sym_sslv3,
      anon_sym_tls1_DOT0,
      anon_sym_tls1_DOT1,
      anon_sym_tls1_DOT2,
      anon_sym_tls1_DOT3,
  [510] = 3,
    ACTIONS(471), 1,
      anon_sym_SEMI,
    STATE(34), 1,
      aux_sym_ssl_version_repeat1,
    ACTIONS(473), 6,
      anon_sym_sslv2,
      anon_sym_sslv3,
      anon_sym_tls1_DOT0,
      anon_sym_tls1_DOT1,
      anon_sym_tls1_DOT2,
      anon_sym_tls1_DOT3,
  [525] = 6,
    ACTIONS(475), 1,
      anon_sym_LBRACK,
    ACTIONS(477), 1,
      anon_sym_RBRACK,
    ACTIONS(479), 1,
      sym_negation,
    ACTIONS(481), 1,
      anon_sym_any,
    ACTIONS(483), 1,
      aux_sym_port_token1,
    STATE(116), 3,
      sym__port_choices,
      sym_port,
      sym_group_port,
  [546] = 6,
    ACTIONS(475), 1,
      anon_sym_LBRACK,
    ACTIONS(479), 1,
      sym_negation,
    ACTIONS(481), 1,
      anon_sym_any,
    ACTIONS(483), 1,
      aux_sym_port_token1,
    ACTIONS(485), 1,
      anon_sym_RBRACK,
    STATE(140), 3,
      sym__port_choices,
      sym_port,
      sym_group_port,
  [567] = 3,
    ACTIONS(487), 1,
      anon_sym_SEMI,
    STATE(34), 1,
      aux_sym_ssl_version_repeat1,
    ACTIONS(489), 6,
      anon_sym_sslv2,
      anon_sym_sslv3,
      anon_sym_tls1_DOT0,
      anon_sym_tls1_DOT1,
      anon_sym_tls1_DOT2,
      anon_sym_tls1_DOT3,
  [582] = 3,
    ACTIONS(494), 1,
      anon_sym_COLON,
    STATE(63), 1,
      sym_port_range,
    ACTIONS(492), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH_GT,
      anon_sym_LT_GT,
      anon_sym_LPAREN,
  [596] = 3,
    ACTIONS(496), 1,
      anon_sym_SEMI,
    STATE(44), 1,
      aux_sym_ssl_state_repeat1,
    ACTIONS(498), 5,
      anon_sym_client_hello,
      anon_sym_server_hello,
      anon_sym_client_keyx,
      anon_sym_server_keyx,
      anon_sym_unkown,
  [610] = 3,
    ACTIONS(500), 1,
      anon_sym_SEMI,
    STATE(36), 1,
      aux_sym_ssl_state_repeat1,
    ACTIONS(498), 5,
      anon_sym_client_hello,
      anon_sym_server_hello,
      anon_sym_client_keyx,
      anon_sym_server_keyx,
      anon_sym_unkown,
  [624] = 5,
    ACTIONS(475), 1,
      anon_sym_LBRACK,
    ACTIONS(479), 1,
      sym_negation,
    ACTIONS(481), 1,
      anon_sym_any,
    ACTIONS(483), 1,
      aux_sym_port_token1,
    STATE(156), 3,
      sym__port_choices,
      sym_port,
      sym_group_port,
  [642] = 5,
    ACTIONS(502), 1,
      aux_sym_text_token1,
    ACTIONS(506), 1,
      aux_sym_digit_token1,
    STATE(113), 1,
      aux_sym_text_repeat1,
    ACTIONS(504), 2,
      anon_sym_GT,
      anon_sym_LT,
    STATE(226), 2,
      sym_text,
      sym_digit,
  [660] = 1,
    ACTIONS(487), 7,
      anon_sym_SEMI,
      anon_sym_sslv2,
      anon_sym_sslv3,
      anon_sym_tls1_DOT0,
      anon_sym_tls1_DOT1,
      anon_sym_tls1_DOT2,
      anon_sym_tls1_DOT3,
  [670] = 5,
    ACTIONS(475), 1,
      anon_sym_LBRACK,
    ACTIONS(479), 1,
      sym_negation,
    ACTIONS(481), 1,
      anon_sym_any,
    ACTIONS(483), 1,
      aux_sym_port_token1,
    STATE(249), 3,
      sym__port_choices,
      sym_port,
      sym_group_port,
  [688] = 2,
    ACTIONS(510), 1,
      anon_sym_PIPE,
    ACTIONS(508), 6,
      anon_sym_SEMI,
      anon_sym_client_hello,
      anon_sym_server_hello,
      anon_sym_client_keyx,
      anon_sym_server_keyx,
      anon_sym_unkown,
  [700] = 2,
    ACTIONS(514), 1,
      aux_sym_ipv4_token2,
    ACTIONS(512), 6,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_negation,
      anon_sym_any,
      aux_sym_port_token1,
  [712] = 3,
    ACTIONS(516), 1,
      anon_sym_SEMI,
    STATE(44), 1,
      aux_sym_ssl_state_repeat1,
    ACTIONS(518), 5,
      anon_sym_client_hello,
      anon_sym_server_hello,
      anon_sym_client_keyx,
      anon_sym_server_keyx,
      anon_sym_unkown,
  [726] = 3,
    ACTIONS(494), 1,
      anon_sym_COLON,
    STATE(69), 1,
      sym_port_range,
    ACTIONS(521), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH_GT,
      anon_sym_LT_GT,
      anon_sym_LPAREN,
  [740] = 5,
    ACTIONS(475), 1,
      anon_sym_LBRACK,
    ACTIONS(479), 1,
      sym_negation,
    ACTIONS(481), 1,
      anon_sym_any,
    ACTIONS(483), 1,
      aux_sym_port_token1,
    STATE(142), 3,
      sym__port_choices,
      sym_port,
      sym_group_port,
  [758] = 2,
    STATE(31), 1,
      aux_sym_ssl_version_repeat1,
    ACTIONS(473), 6,
      anon_sym_sslv2,
      anon_sym_sslv3,
      anon_sym_tls1_DOT0,
      anon_sym_tls1_DOT1,
      anon_sym_tls1_DOT2,
      anon_sym_tls1_DOT3,
  [770] = 1,
    ACTIONS(523), 6,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_negation,
      anon_sym_any,
      aux_sym_port_token1,
  [779] = 1,
    ACTIONS(516), 6,
      anon_sym_SEMI,
      anon_sym_client_hello,
      anon_sym_server_hello,
      anon_sym_client_keyx,
      anon_sym_server_keyx,
      anon_sym_unkown,
  [788] = 1,
    ACTIONS(525), 6,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_negation,
      anon_sym_any,
      aux_sym_port_token1,
  [797] = 1,
    ACTIONS(527), 6,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_negation,
      anon_sym_any,
      aux_sym_port_token1,
  [806] = 5,
    ACTIONS(506), 1,
      aux_sym_digit_token1,
    ACTIONS(529), 1,
      sym_negation,
    ACTIONS(533), 1,
      sym_decimal,
    STATE(215), 1,
      sym_digit,
    ACTIONS(531), 2,
      anon_sym_GT,
      anon_sym_LT,
  [823] = 1,
    ACTIONS(535), 6,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_negation,
      anon_sym_any,
      aux_sym_port_token1,
  [832] = 1,
    ACTIONS(537), 6,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_negation,
      anon_sym_any,
      aux_sym_port_token1,
  [841] = 1,
    ACTIONS(539), 6,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_negation,
      anon_sym_any,
      aux_sym_port_token1,
  [850] = 5,
    ACTIONS(541), 1,
      sym_negation,
    ACTIONS(543), 1,
      anon_sym_x,
    ACTIONS(545), 1,
      aux_sym_digit_token1,
    STATE(219), 1,
      sym_digit,
    ACTIONS(531), 2,
      anon_sym_GT,
      anon_sym_LT,
  [867] = 1,
    ACTIONS(547), 6,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_negation,
      anon_sym_any,
      aux_sym_port_token1,
  [876] = 5,
    ACTIONS(545), 1,
      aux_sym_digit_token1,
    ACTIONS(549), 1,
      anon_sym_COLON,
    ACTIONS(551), 1,
      anon_sym_SEMI,
    STATE(252), 1,
      sym_digit,
    ACTIONS(531), 2,
      anon_sym_GT,
      anon_sym_LT,
  [893] = 2,
    ACTIONS(555), 1,
      anon_sym_noalert,
    ACTIONS(553), 5,
      anon_sym_set,
      anon_sym_isset,
      anon_sym_toggle,
      anon_sym_unset,
      anon_sym_isnotset,
  [904] = 1,
    ACTIONS(557), 6,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_negation,
      anon_sym_any,
      aux_sym_port_token1,
  [913] = 1,
    ACTIONS(521), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH_GT,
      anon_sym_LT_GT,
      anon_sym_LPAREN,
  [921] = 4,
    ACTIONS(545), 1,
      aux_sym_digit_token1,
    ACTIONS(559), 1,
      anon_sym_STAR,
    STATE(238), 1,
      sym_digit,
    ACTIONS(531), 2,
      anon_sym_GT,
      anon_sym_LT,
  [935] = 1,
    ACTIONS(561), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH_GT,
      anon_sym_LT_GT,
      anon_sym_LPAREN,
  [943] = 1,
    ACTIONS(563), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH_GT,
      anon_sym_LT_GT,
      anon_sym_LPAREN,
  [951] = 4,
    ACTIONS(545), 1,
      aux_sym_digit_token1,
    ACTIONS(565), 1,
      anon_sym_STAR,
    STATE(254), 1,
      sym_digit,
    ACTIONS(531), 2,
      anon_sym_GT,
      anon_sym_LT,
  [965] = 2,
    ACTIONS(569), 1,
      sym__ipv6_octet,
    ACTIONS(567), 4,
      anon_sym_LBRACK,
      sym_negation,
      anon_sym_DOLLAR,
      aux_sym_ipv4_token1,
  [975] = 3,
    ACTIONS(571), 1,
      anon_sym_COMMA,
    ACTIONS(573), 1,
      anon_sym_SEMI,
    ACTIONS(575), 3,
      anon_sym_request_SLASHto_server,
      anon_sym_response_SLASHto_client,
      anon_sym_both,
  [987] = 1,
    ACTIONS(577), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH_GT,
      anon_sym_LT_GT,
      anon_sym_LPAREN,
  [995] = 1,
    ACTIONS(492), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH_GT,
      anon_sym_LT_GT,
      anon_sym_LPAREN,
  [1003] = 4,
    ACTIONS(545), 1,
      aux_sym_digit_token1,
    ACTIONS(579), 1,
      sym_negation,
    STATE(174), 1,
      sym_digit,
    ACTIONS(531), 2,
      anon_sym_GT,
      anon_sym_LT,
  [1017] = 1,
    ACTIONS(581), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH_GT,
      anon_sym_LT_GT,
      anon_sym_LPAREN,
  [1025] = 1,
    ACTIONS(583), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH_GT,
      anon_sym_LT_GT,
      anon_sym_LPAREN,
  [1033] = 4,
    ACTIONS(545), 1,
      aux_sym_digit_token1,
    ACTIONS(585), 1,
      sym_negation,
    STATE(153), 1,
      sym_digit,
    ACTIONS(531), 2,
      anon_sym_GT,
      anon_sym_LT,
  [1047] = 1,
    ACTIONS(587), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH_GT,
      anon_sym_LT_GT,
      anon_sym_LPAREN,
  [1055] = 2,
    ACTIONS(591), 1,
      sym__ipv6_octet,
    ACTIONS(589), 4,
      anon_sym_LBRACK,
      sym_negation,
      anon_sym_DOLLAR,
      aux_sym_ipv4_token1,
  [1065] = 4,
    ACTIONS(506), 1,
      aux_sym_digit_token1,
    ACTIONS(593), 1,
      sym_decimal,
    STATE(202), 1,
      sym_digit,
    ACTIONS(531), 2,
      anon_sym_GT,
      anon_sym_LT,
  [1079] = 4,
    ACTIONS(545), 1,
      aux_sym_digit_token1,
    ACTIONS(595), 1,
      anon_sym_x,
    STATE(201), 1,
      sym_digit,
    ACTIONS(531), 2,
      anon_sym_GT,
      anon_sym_LT,
  [1093] = 3,
    ACTIONS(545), 1,
      aux_sym_digit_token1,
    STATE(194), 1,
      sym_digit,
    ACTIONS(531), 2,
      anon_sym_GT,
      anon_sym_LT,
  [1104] = 3,
    ACTIONS(545), 1,
      aux_sym_digit_token1,
    STATE(201), 1,
      sym_digit,
    ACTIONS(531), 2,
      anon_sym_GT,
      anon_sym_LT,
  [1115] = 3,
    ACTIONS(545), 1,
      aux_sym_digit_token1,
    STATE(242), 1,
      sym_digit,
    ACTIONS(531), 2,
      anon_sym_GT,
      anon_sym_LT,
  [1126] = 3,
    ACTIONS(545), 1,
      aux_sym_digit_token1,
    STATE(231), 1,
      sym_digit,
    ACTIONS(531), 2,
      anon_sym_GT,
      anon_sym_LT,
  [1137] = 4,
    ACTIONS(502), 1,
      aux_sym_text_token1,
    ACTIONS(597), 1,
      sym_negation,
    STATE(113), 1,
      aux_sym_text_repeat1,
    STATE(172), 1,
      sym_text,
  [1150] = 4,
    ACTIONS(502), 1,
      aux_sym_text_token1,
    ACTIONS(599), 1,
      sym_negation,
    STATE(113), 1,
      aux_sym_text_repeat1,
    STATE(171), 1,
      sym_text,
  [1163] = 3,
    ACTIONS(545), 1,
      aux_sym_digit_token1,
    STATE(243), 1,
      sym_digit,
    ACTIONS(531), 2,
      anon_sym_GT,
      anon_sym_LT,
  [1174] = 3,
    ACTIONS(545), 1,
      aux_sym_digit_token1,
    STATE(241), 1,
      sym_digit,
    ACTIONS(531), 2,
      anon_sym_GT,
      anon_sym_LT,
  [1185] = 3,
    ACTIONS(545), 1,
      aux_sym_digit_token1,
    STATE(214), 1,
      sym_digit,
    ACTIONS(531), 2,
      anon_sym_GT,
      anon_sym_LT,
  [1196] = 3,
    ACTIONS(545), 1,
      aux_sym_digit_token1,
    STATE(224), 1,
      sym_digit,
    ACTIONS(531), 2,
      anon_sym_GT,
      anon_sym_LT,
  [1207] = 4,
    ACTIONS(502), 1,
      aux_sym_text_token1,
    ACTIONS(601), 1,
      sym_negation,
    STATE(113), 1,
      aux_sym_text_repeat1,
    STATE(170), 1,
      sym_text,
  [1220] = 3,
    ACTIONS(545), 1,
      aux_sym_digit_token1,
    STATE(235), 1,
      sym_digit,
    ACTIONS(531), 2,
      anon_sym_GT,
      anon_sym_LT,
  [1231] = 3,
    ACTIONS(545), 1,
      aux_sym_digit_token1,
    STATE(159), 1,
      sym_digit,
    ACTIONS(531), 2,
      anon_sym_GT,
      anon_sym_LT,
  [1242] = 3,
    ACTIONS(545), 1,
      aux_sym_digit_token1,
    STATE(228), 1,
      sym_digit,
    ACTIONS(531), 2,
      anon_sym_GT,
      anon_sym_LT,
  [1253] = 3,
    ACTIONS(545), 1,
      aux_sym_digit_token1,
    STATE(186), 1,
      sym_digit,
    ACTIONS(531), 2,
      anon_sym_GT,
      anon_sym_LT,
  [1264] = 3,
    ACTIONS(545), 1,
      aux_sym_digit_token1,
    STATE(187), 1,
      sym_digit,
    ACTIONS(531), 2,
      anon_sym_GT,
      anon_sym_LT,
  [1275] = 3,
    ACTIONS(545), 1,
      aux_sym_digit_token1,
    STATE(188), 1,
      sym_digit,
    ACTIONS(531), 2,
      anon_sym_GT,
      anon_sym_LT,
  [1286] = 3,
    ACTIONS(545), 1,
      aux_sym_digit_token1,
    STATE(195), 1,
      sym_digit,
    ACTIONS(531), 2,
      anon_sym_GT,
      anon_sym_LT,
  [1297] = 3,
    ACTIONS(545), 1,
      aux_sym_digit_token1,
    STATE(164), 1,
      sym_digit,
    ACTIONS(531), 2,
      anon_sym_GT,
      anon_sym_LT,
  [1308] = 3,
    ACTIONS(545), 1,
      aux_sym_digit_token1,
    STATE(198), 1,
      sym_digit,
    ACTIONS(531), 2,
      anon_sym_GT,
      anon_sym_LT,
  [1319] = 3,
    ACTIONS(545), 1,
      aux_sym_digit_token1,
    STATE(163), 1,
      sym_digit,
    ACTIONS(531), 2,
      anon_sym_GT,
      anon_sym_LT,
  [1330] = 3,
    ACTIONS(545), 1,
      aux_sym_digit_token1,
    STATE(206), 1,
      sym_digit,
    ACTIONS(531), 2,
      anon_sym_GT,
      anon_sym_LT,
  [1341] = 3,
    ACTIONS(545), 1,
      aux_sym_digit_token1,
    STATE(217), 1,
      sym_digit,
    ACTIONS(531), 2,
      anon_sym_GT,
      anon_sym_LT,
  [1352] = 3,
    ACTIONS(545), 1,
      aux_sym_digit_token1,
    STATE(218), 1,
      sym_digit,
    ACTIONS(531), 2,
      anon_sym_GT,
      anon_sym_LT,
  [1363] = 3,
    ACTIONS(603), 1,
      aux_sym_text_token1,
    STATE(113), 1,
      aux_sym_text_repeat1,
    STATE(166), 1,
      sym_text,
  [1373] = 3,
    ACTIONS(407), 1,
      anon_sym_RBRACK,
    ACTIONS(605), 1,
      anon_sym_COMMA,
    STATE(143), 1,
      aux_sym_group_location_repeat1,
  [1383] = 3,
    ACTIONS(607), 1,
      anon_sym_COMMA,
    ACTIONS(609), 1,
      anon_sym_RBRACK,
    STATE(106), 1,
      aux_sym_group_port_repeat1,
  [1393] = 3,
    ACTIONS(611), 1,
      anon_sym_DQUOTE,
    ACTIONS(613), 1,
      aux_sym_string_token1,
    STATE(136), 1,
      aux_sym_string_repeat1,
  [1403] = 3,
    ACTIONS(615), 1,
      anon_sym_COMMA,
    ACTIONS(618), 1,
      anon_sym_RBRACK,
    STATE(106), 1,
      aux_sym_group_port_repeat1,
  [1413] = 3,
    ACTIONS(620), 1,
      sym_negation,
    ACTIONS(622), 1,
      anon_sym_DQUOTE,
    STATE(248), 1,
      sym_string,
  [1423] = 3,
    ACTIONS(603), 1,
      aux_sym_text_token1,
    STATE(113), 1,
      aux_sym_text_repeat1,
    STATE(234), 1,
      sym_text,
  [1433] = 3,
    ACTIONS(603), 1,
      aux_sym_text_token1,
    STATE(113), 1,
      aux_sym_text_repeat1,
    STATE(233), 1,
      sym_text,
  [1443] = 3,
    ACTIONS(603), 1,
      aux_sym_text_token1,
    STATE(113), 1,
      aux_sym_text_repeat1,
    STATE(230), 1,
      sym_text,
  [1453] = 3,
    ACTIONS(624), 1,
      anon_sym_DQUOTE,
    ACTIONS(626), 1,
      aux_sym_string_token1,
    STATE(111), 1,
      aux_sym_string_repeat1,
  [1463] = 3,
    ACTIONS(629), 1,
      anon_sym_DQUOTE,
    ACTIONS(631), 1,
      aux_sym_string_token1,
    STATE(111), 1,
      aux_sym_string_repeat1,
  [1473] = 3,
    ACTIONS(633), 1,
      anon_sym_SEMI,
    ACTIONS(635), 1,
      aux_sym_text_token1,
    STATE(135), 1,
      aux_sym_text_repeat1,
  [1483] = 3,
    ACTIONS(603), 1,
      aux_sym_text_token1,
    STATE(113), 1,
      aux_sym_text_repeat1,
    STATE(229), 1,
      sym_text,
  [1493] = 3,
    ACTIONS(603), 1,
      aux_sym_text_token1,
    STATE(113), 1,
      aux_sym_text_repeat1,
    STATE(225), 1,
      sym_text,
  [1503] = 3,
    ACTIONS(607), 1,
      anon_sym_COMMA,
    ACTIONS(637), 1,
      anon_sym_RBRACK,
    STATE(104), 1,
      aux_sym_group_port_repeat1,
  [1513] = 3,
    ACTIONS(607), 1,
      anon_sym_COMMA,
    ACTIONS(637), 1,
      anon_sym_RBRACK,
    STATE(106), 1,
      aux_sym_group_port_repeat1,
  [1523] = 3,
    ACTIONS(603), 1,
      aux_sym_text_token1,
    STATE(113), 1,
      aux_sym_text_repeat1,
    STATE(223), 1,
      sym_text,
  [1533] = 3,
    ACTIONS(603), 1,
      aux_sym_text_token1,
    STATE(113), 1,
      aux_sym_text_repeat1,
    STATE(221), 1,
      sym_text,
  [1543] = 3,
    ACTIONS(605), 1,
      anon_sym_COMMA,
    ACTIONS(639), 1,
      anon_sym_RBRACK,
    STATE(121), 1,
      aux_sym_group_location_repeat1,
  [1553] = 3,
    ACTIONS(641), 1,
      anon_sym_COMMA,
    ACTIONS(644), 1,
      anon_sym_RBRACK,
    STATE(121), 1,
      aux_sym_group_location_repeat1,
  [1563] = 3,
    ACTIONS(603), 1,
      aux_sym_text_token1,
    STATE(113), 1,
      aux_sym_text_repeat1,
    STATE(210), 1,
      sym_text,
  [1573] = 3,
    ACTIONS(603), 1,
      aux_sym_text_token1,
    STATE(113), 1,
      aux_sym_text_repeat1,
    STATE(196), 1,
      sym_text,
  [1583] = 3,
    ACTIONS(603), 1,
      aux_sym_text_token1,
    STATE(113), 1,
      aux_sym_text_repeat1,
    STATE(184), 1,
      sym_text,
  [1593] = 3,
    ACTIONS(603), 1,
      aux_sym_text_token1,
    STATE(113), 1,
      aux_sym_text_repeat1,
    STATE(200), 1,
      sym_text,
  [1603] = 3,
    ACTIONS(620), 1,
      sym_negation,
    ACTIONS(622), 1,
      anon_sym_DQUOTE,
    STATE(199), 1,
      sym_string,
  [1613] = 3,
    ACTIONS(620), 1,
      sym_negation,
    ACTIONS(622), 1,
      anon_sym_DQUOTE,
    STATE(185), 1,
      sym_string,
  [1623] = 3,
    ACTIONS(620), 1,
      sym_negation,
    ACTIONS(622), 1,
      anon_sym_DQUOTE,
    STATE(207), 1,
      sym_string,
  [1633] = 1,
    ACTIONS(646), 3,
      anon_sym_file,
      anon_sym_tx,
      anon_sym_ssn_SLASHflow,
  [1639] = 3,
    ACTIONS(620), 1,
      sym_negation,
    ACTIONS(622), 1,
      anon_sym_DQUOTE,
    STATE(204), 1,
      sym_string,
  [1649] = 3,
    ACTIONS(603), 1,
      aux_sym_text_token1,
    STATE(113), 1,
      aux_sym_text_repeat1,
    STATE(165), 1,
      sym_text,
  [1659] = 3,
    ACTIONS(603), 1,
      aux_sym_text_token1,
    STATE(113), 1,
      aux_sym_text_repeat1,
    STATE(239), 1,
      sym_text,
  [1669] = 3,
    ACTIONS(620), 1,
      sym_negation,
    ACTIONS(622), 1,
      anon_sym_DQUOTE,
    STATE(167), 1,
      sym_string,
  [1679] = 3,
    ACTIONS(620), 1,
      sym_negation,
    ACTIONS(622), 1,
      anon_sym_DQUOTE,
    STATE(168), 1,
      sym_string,
  [1689] = 3,
    ACTIONS(648), 1,
      anon_sym_SEMI,
    ACTIONS(650), 1,
      aux_sym_text_token1,
    STATE(135), 1,
      aux_sym_text_repeat1,
  [1699] = 3,
    ACTIONS(631), 1,
      aux_sym_string_token1,
    ACTIONS(653), 1,
      anon_sym_DQUOTE,
    STATE(111), 1,
      aux_sym_string_repeat1,
  [1709] = 3,
    ACTIONS(653), 1,
      anon_sym_DQUOTE,
    ACTIONS(655), 1,
      aux_sym_string_token1,
    STATE(112), 1,
      aux_sym_string_repeat1,
  [1719] = 3,
    ACTIONS(620), 1,
      sym_negation,
    ACTIONS(622), 1,
      anon_sym_DQUOTE,
    STATE(169), 1,
      sym_string,
  [1729] = 3,
    ACTIONS(603), 1,
      aux_sym_text_token1,
    STATE(113), 1,
      aux_sym_text_repeat1,
    STATE(173), 1,
      sym_text,
  [1739] = 3,
    ACTIONS(477), 1,
      anon_sym_RBRACK,
    ACTIONS(607), 1,
      anon_sym_COMMA,
    STATE(117), 1,
      aux_sym_group_port_repeat1,
  [1749] = 3,
    ACTIONS(605), 1,
      anon_sym_COMMA,
    ACTIONS(657), 1,
      anon_sym_RBRACK,
    STATE(120), 1,
      aux_sym_group_location_repeat1,
  [1759] = 2,
    STATE(16), 1,
      sym_direction,
    ACTIONS(659), 2,
      anon_sym_DASH_GT,
      anon_sym_LT_GT,
  [1767] = 3,
    ACTIONS(605), 1,
      anon_sym_COMMA,
    ACTIONS(657), 1,
      anon_sym_RBRACK,
    STATE(121), 1,
      aux_sym_group_location_repeat1,
  [1777] = 3,
    ACTIONS(603), 1,
      aux_sym_text_token1,
    STATE(113), 1,
      aux_sym_text_repeat1,
    STATE(175), 1,
      sym_text,
  [1787] = 3,
    ACTIONS(620), 1,
      sym_negation,
    ACTIONS(622), 1,
      anon_sym_DQUOTE,
    STATE(177), 1,
      sym_string,
  [1797] = 3,
    ACTIONS(620), 1,
      sym_negation,
    ACTIONS(622), 1,
      anon_sym_DQUOTE,
    STATE(178), 1,
      sym_string,
  [1807] = 3,
    ACTIONS(620), 1,
      sym_negation,
    ACTIONS(622), 1,
      anon_sym_DQUOTE,
    STATE(179), 1,
      sym_string,
  [1817] = 3,
    ACTIONS(603), 1,
      aux_sym_text_token1,
    STATE(113), 1,
      aux_sym_text_repeat1,
    STATE(212), 1,
      sym_text,
  [1827] = 1,
    ACTIONS(661), 3,
      anon_sym_file,
      anon_sym_tx,
      anon_sym_ssn_SLASHflow,
  [1833] = 3,
    ACTIONS(620), 1,
      sym_negation,
    ACTIONS(622), 1,
      anon_sym_DQUOTE,
    STATE(183), 1,
      sym_string,
  [1843] = 3,
    ACTIONS(603), 1,
      aux_sym_text_token1,
    STATE(113), 1,
      aux_sym_text_repeat1,
    STATE(211), 1,
      sym_text,
  [1853] = 3,
    ACTIONS(603), 1,
      aux_sym_text_token1,
    STATE(113), 1,
      aux_sym_text_repeat1,
    STATE(213), 1,
      sym_text,
  [1863] = 2,
    ACTIONS(663), 1,
      anon_sym_COMMA,
    ACTIONS(665), 1,
      anon_sym_SEMI,
  [1870] = 1,
    ACTIONS(667), 2,
      anon_sym_2_compat,
      sym_decimal,
  [1875] = 2,
    ACTIONS(669), 1,
      anon_sym_LPAREN,
    STATE(27), 1,
      sym_options,
  [1882] = 1,
    ACTIONS(618), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1887] = 1,
    ACTIONS(671), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1892] = 1,
    ACTIONS(644), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1897] = 2,
    ACTIONS(673), 1,
      anon_sym_COMMA,
    ACTIONS(675), 1,
      anon_sym_SEMI,
  [1904] = 2,
    ACTIONS(677), 1,
      anon_sym_COMMA,
    ACTIONS(679), 1,
      anon_sym_SEMI,
  [1911] = 1,
    ACTIONS(681), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1916] = 2,
    ACTIONS(683), 1,
      anon_sym_LBRACK,
    ACTIONS(685), 1,
      aux_sym_port_token1,
  [1923] = 1,
    ACTIONS(687), 1,
      anon_sym_SEMI,
  [1927] = 1,
    ACTIONS(689), 1,
      anon_sym_SEMI,
  [1931] = 1,
    ACTIONS(691), 1,
      anon_sym_SEMI,
  [1935] = 1,
    ACTIONS(693), 1,
      anon_sym_SEMI,
  [1939] = 1,
    ACTIONS(695), 1,
      anon_sym_SEMI,
  [1943] = 1,
    ACTIONS(697), 1,
      anon_sym_SEMI,
  [1947] = 1,
    ACTIONS(699), 1,
      anon_sym_SEMI,
  [1951] = 1,
    ACTIONS(701), 1,
      anon_sym_SEMI,
  [1955] = 1,
    ACTIONS(703), 1,
      anon_sym_SEMI,
  [1959] = 1,
    ACTIONS(705), 1,
      anon_sym_SEMI,
  [1963] = 1,
    ACTIONS(707), 1,
      anon_sym_SEMI,
  [1967] = 1,
    ACTIONS(709), 1,
      anon_sym_SEMI,
  [1971] = 1,
    ACTIONS(711), 1,
      anon_sym_SEMI,
  [1975] = 1,
    ACTIONS(713), 1,
      anon_sym_SEMI,
  [1979] = 1,
    ACTIONS(715), 1,
      anon_sym_SEMI,
  [1983] = 1,
    ACTIONS(717), 1,
      anon_sym_SEMI,
  [1987] = 1,
    ACTIONS(719), 1,
      anon_sym_SEMI,
  [1991] = 1,
    ACTIONS(721), 1,
      anon_sym_SEMI,
  [1995] = 1,
    ACTIONS(723), 1,
      anon_sym_DQUOTE,
  [1999] = 1,
    ACTIONS(725), 1,
      anon_sym_SEMI,
  [2003] = 1,
    ACTIONS(727), 1,
      anon_sym_SEMI,
  [2007] = 1,
    ACTIONS(729), 1,
      anon_sym_SEMI,
  [2011] = 1,
    ACTIONS(731), 1,
      anon_sym_SEMI,
  [2015] = 1,
    ACTIONS(733), 1,
      anon_sym_COMMA,
  [2019] = 1,
    ACTIONS(735), 1,
      anon_sym_SEMI,
  [2023] = 1,
    ACTIONS(737), 1,
      anon_sym_SEMI,
  [2027] = 1,
    ACTIONS(739), 1,
      anon_sym_SEMI,
  [2031] = 1,
    ACTIONS(741), 1,
      anon_sym_SEMI,
  [2035] = 1,
    ACTIONS(743), 1,
      anon_sym_SEMI,
  [2039] = 1,
    ACTIONS(745), 1,
      anon_sym_SEMI,
  [2043] = 1,
    ACTIONS(747), 1,
      anon_sym_SEMI,
  [2047] = 1,
    ACTIONS(749), 1,
      anon_sym_SEMI,
  [2051] = 1,
    ACTIONS(751), 1,
      anon_sym_SEMI,
  [2055] = 1,
    ACTIONS(753), 1,
      anon_sym_SEMI,
  [2059] = 1,
    ACTIONS(755), 1,
      anon_sym_SEMI,
  [2063] = 1,
    ACTIONS(757), 1,
      anon_sym_SEMI,
  [2067] = 1,
    ACTIONS(759), 1,
      anon_sym_SEMI,
  [2071] = 1,
    ACTIONS(761), 1,
      anon_sym_SEMI,
  [2075] = 1,
    ACTIONS(763), 1,
      anon_sym_SEMI,
  [2079] = 1,
    ACTIONS(765), 1,
      anon_sym_SEMI,
  [2083] = 1,
    ACTIONS(767), 1,
      anon_sym_relative,
  [2087] = 1,
    ACTIONS(769), 1,
      anon_sym_SEMI,
  [2091] = 1,
    ACTIONS(771), 1,
      anon_sym_SEMI,
  [2095] = 1,
    ACTIONS(773), 1,
      anon_sym_SEMI,
  [2099] = 1,
    ACTIONS(775), 1,
      anon_sym_SEMI,
  [2103] = 1,
    ACTIONS(777), 1,
      anon_sym_SEMI,
  [2107] = 1,
    ACTIONS(779), 1,
      anon_sym_SEMI,
  [2111] = 1,
    ACTIONS(781), 1,
      anon_sym_SEMI,
  [2115] = 1,
    ACTIONS(783), 1,
      anon_sym_SEMI,
  [2119] = 1,
    ACTIONS(785), 1,
      anon_sym_SEMI,
  [2123] = 1,
    ACTIONS(787), 1,
      anon_sym_SEMI,
  [2127] = 1,
    ACTIONS(789), 1,
      anon_sym_SEMI,
  [2131] = 1,
    ACTIONS(791), 1,
      anon_sym_SEMI,
  [2135] = 1,
    ACTIONS(793), 1,
      aux_sym_comment_token1,
  [2139] = 1,
    ACTIONS(795), 1,
      anon_sym_SEMI,
  [2143] = 1,
    ACTIONS(797), 1,
      anon_sym_SEMI,
  [2147] = 1,
    ACTIONS(799), 1,
      anon_sym_SEMI,
  [2151] = 1,
    ACTIONS(801), 1,
      anon_sym_SEMI,
  [2155] = 1,
    ACTIONS(803), 1,
      anon_sym_SEMI,
  [2159] = 1,
    ACTIONS(805), 1,
      anon_sym_only,
  [2163] = 1,
    ACTIONS(807), 1,
      anon_sym_SEMI,
  [2167] = 1,
    ACTIONS(809), 1,
      anon_sym_SEMI,
  [2171] = 1,
    ACTIONS(811), 1,
      anon_sym_SEMI,
  [2175] = 1,
    ACTIONS(813), 1,
      anon_sym_SEMI,
  [2179] = 1,
    ACTIONS(815), 1,
      anon_sym_SEMI,
  [2183] = 1,
    ACTIONS(817), 1,
      anon_sym_SEMI,
  [2187] = 1,
    ACTIONS(819), 1,
      anon_sym_SEMI,
  [2191] = 1,
    ACTIONS(821), 1,
      anon_sym_SEMI,
  [2195] = 1,
    ACTIONS(823), 1,
      anon_sym_SEMI,
  [2199] = 1,
    ACTIONS(825), 1,
      anon_sym_SEMI,
  [2203] = 1,
    ACTIONS(827), 1,
      anon_sym_SEMI,
  [2207] = 1,
    ACTIONS(829), 1,
      anon_sym_SEMI,
  [2211] = 1,
    ACTIONS(831), 1,
      anon_sym_SEMI,
  [2215] = 1,
    ACTIONS(833), 1,
      anon_sym_relative,
  [2219] = 1,
    ACTIONS(835), 1,
      anon_sym_SEMI,
  [2223] = 1,
    ACTIONS(837), 1,
      anon_sym_COMMA,
  [2227] = 1,
    ACTIONS(839), 1,
      anon_sym_SEMI,
  [2231] = 1,
    ACTIONS(841), 1,
      anon_sym_SEMI,
  [2235] = 1,
    ACTIONS(843), 1,
      anon_sym_SEMI,
  [2239] = 1,
    ACTIONS(845), 1,
      anon_sym_SEMI,
  [2243] = 1,
    ACTIONS(847), 1,
      anon_sym_SEMI,
  [2247] = 1,
    ACTIONS(849), 1,
      anon_sym_SEMI,
  [2251] = 1,
    ACTIONS(851), 1,
      anon_sym_COMMA,
  [2255] = 1,
    ACTIONS(853), 1,
      aux_sym_variable_token1,
  [2259] = 1,
    ACTIONS(855), 1,
      aux_sym_digit_token1,
  [2263] = 1,
    ACTIONS(857), 1,
      anon_sym_SEMI,
  [2267] = 1,
    ACTIONS(859), 1,
      anon_sym_LPAREN,
  [2271] = 1,
    ACTIONS(861), 1,
      anon_sym_SEMI,
  [2275] = 1,
    ACTIONS(863), 1,
      anon_sym_SEMI,
  [2279] = 1,
    ACTIONS(865), 1,
      anon_sym_SEMI,
  [2283] = 1,
    ACTIONS(867), 1,
      ts_builtin_sym_end,
  [2287] = 1,
    ACTIONS(869), 1,
      anon_sym_SEMI,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 38,
  [SMALL_STATE(9)] = 70,
  [SMALL_STATE(10)] = 97,
  [SMALL_STATE(11)] = 124,
  [SMALL_STATE(12)] = 144,
  [SMALL_STATE(13)] = 174,
  [SMALL_STATE(14)] = 194,
  [SMALL_STATE(15)] = 224,
  [SMALL_STATE(16)] = 242,
  [SMALL_STATE(17)] = 269,
  [SMALL_STATE(18)] = 296,
  [SMALL_STATE(19)] = 323,
  [SMALL_STATE(20)] = 340,
  [SMALL_STATE(21)] = 355,
  [SMALL_STATE(22)] = 368,
  [SMALL_STATE(23)] = 386,
  [SMALL_STATE(24)] = 406,
  [SMALL_STATE(25)] = 420,
  [SMALL_STATE(26)] = 434,
  [SMALL_STATE(27)] = 448,
  [SMALL_STATE(28)] = 462,
  [SMALL_STATE(29)] = 476,
  [SMALL_STATE(30)] = 497,
  [SMALL_STATE(31)] = 510,
  [SMALL_STATE(32)] = 525,
  [SMALL_STATE(33)] = 546,
  [SMALL_STATE(34)] = 567,
  [SMALL_STATE(35)] = 582,
  [SMALL_STATE(36)] = 596,
  [SMALL_STATE(37)] = 610,
  [SMALL_STATE(38)] = 624,
  [SMALL_STATE(39)] = 642,
  [SMALL_STATE(40)] = 660,
  [SMALL_STATE(41)] = 670,
  [SMALL_STATE(42)] = 688,
  [SMALL_STATE(43)] = 700,
  [SMALL_STATE(44)] = 712,
  [SMALL_STATE(45)] = 726,
  [SMALL_STATE(46)] = 740,
  [SMALL_STATE(47)] = 758,
  [SMALL_STATE(48)] = 770,
  [SMALL_STATE(49)] = 779,
  [SMALL_STATE(50)] = 788,
  [SMALL_STATE(51)] = 797,
  [SMALL_STATE(52)] = 806,
  [SMALL_STATE(53)] = 823,
  [SMALL_STATE(54)] = 832,
  [SMALL_STATE(55)] = 841,
  [SMALL_STATE(56)] = 850,
  [SMALL_STATE(57)] = 867,
  [SMALL_STATE(58)] = 876,
  [SMALL_STATE(59)] = 893,
  [SMALL_STATE(60)] = 904,
  [SMALL_STATE(61)] = 913,
  [SMALL_STATE(62)] = 921,
  [SMALL_STATE(63)] = 935,
  [SMALL_STATE(64)] = 943,
  [SMALL_STATE(65)] = 951,
  [SMALL_STATE(66)] = 965,
  [SMALL_STATE(67)] = 975,
  [SMALL_STATE(68)] = 987,
  [SMALL_STATE(69)] = 995,
  [SMALL_STATE(70)] = 1003,
  [SMALL_STATE(71)] = 1017,
  [SMALL_STATE(72)] = 1025,
  [SMALL_STATE(73)] = 1033,
  [SMALL_STATE(74)] = 1047,
  [SMALL_STATE(75)] = 1055,
  [SMALL_STATE(76)] = 1065,
  [SMALL_STATE(77)] = 1079,
  [SMALL_STATE(78)] = 1093,
  [SMALL_STATE(79)] = 1104,
  [SMALL_STATE(80)] = 1115,
  [SMALL_STATE(81)] = 1126,
  [SMALL_STATE(82)] = 1137,
  [SMALL_STATE(83)] = 1150,
  [SMALL_STATE(84)] = 1163,
  [SMALL_STATE(85)] = 1174,
  [SMALL_STATE(86)] = 1185,
  [SMALL_STATE(87)] = 1196,
  [SMALL_STATE(88)] = 1207,
  [SMALL_STATE(89)] = 1220,
  [SMALL_STATE(90)] = 1231,
  [SMALL_STATE(91)] = 1242,
  [SMALL_STATE(92)] = 1253,
  [SMALL_STATE(93)] = 1264,
  [SMALL_STATE(94)] = 1275,
  [SMALL_STATE(95)] = 1286,
  [SMALL_STATE(96)] = 1297,
  [SMALL_STATE(97)] = 1308,
  [SMALL_STATE(98)] = 1319,
  [SMALL_STATE(99)] = 1330,
  [SMALL_STATE(100)] = 1341,
  [SMALL_STATE(101)] = 1352,
  [SMALL_STATE(102)] = 1363,
  [SMALL_STATE(103)] = 1373,
  [SMALL_STATE(104)] = 1383,
  [SMALL_STATE(105)] = 1393,
  [SMALL_STATE(106)] = 1403,
  [SMALL_STATE(107)] = 1413,
  [SMALL_STATE(108)] = 1423,
  [SMALL_STATE(109)] = 1433,
  [SMALL_STATE(110)] = 1443,
  [SMALL_STATE(111)] = 1453,
  [SMALL_STATE(112)] = 1463,
  [SMALL_STATE(113)] = 1473,
  [SMALL_STATE(114)] = 1483,
  [SMALL_STATE(115)] = 1493,
  [SMALL_STATE(116)] = 1503,
  [SMALL_STATE(117)] = 1513,
  [SMALL_STATE(118)] = 1523,
  [SMALL_STATE(119)] = 1533,
  [SMALL_STATE(120)] = 1543,
  [SMALL_STATE(121)] = 1553,
  [SMALL_STATE(122)] = 1563,
  [SMALL_STATE(123)] = 1573,
  [SMALL_STATE(124)] = 1583,
  [SMALL_STATE(125)] = 1593,
  [SMALL_STATE(126)] = 1603,
  [SMALL_STATE(127)] = 1613,
  [SMALL_STATE(128)] = 1623,
  [SMALL_STATE(129)] = 1633,
  [SMALL_STATE(130)] = 1639,
  [SMALL_STATE(131)] = 1649,
  [SMALL_STATE(132)] = 1659,
  [SMALL_STATE(133)] = 1669,
  [SMALL_STATE(134)] = 1679,
  [SMALL_STATE(135)] = 1689,
  [SMALL_STATE(136)] = 1699,
  [SMALL_STATE(137)] = 1709,
  [SMALL_STATE(138)] = 1719,
  [SMALL_STATE(139)] = 1729,
  [SMALL_STATE(140)] = 1739,
  [SMALL_STATE(141)] = 1749,
  [SMALL_STATE(142)] = 1759,
  [SMALL_STATE(143)] = 1767,
  [SMALL_STATE(144)] = 1777,
  [SMALL_STATE(145)] = 1787,
  [SMALL_STATE(146)] = 1797,
  [SMALL_STATE(147)] = 1807,
  [SMALL_STATE(148)] = 1817,
  [SMALL_STATE(149)] = 1827,
  [SMALL_STATE(150)] = 1833,
  [SMALL_STATE(151)] = 1843,
  [SMALL_STATE(152)] = 1853,
  [SMALL_STATE(153)] = 1863,
  [SMALL_STATE(154)] = 1870,
  [SMALL_STATE(155)] = 1875,
  [SMALL_STATE(156)] = 1882,
  [SMALL_STATE(157)] = 1887,
  [SMALL_STATE(158)] = 1892,
  [SMALL_STATE(159)] = 1897,
  [SMALL_STATE(160)] = 1904,
  [SMALL_STATE(161)] = 1911,
  [SMALL_STATE(162)] = 1916,
  [SMALL_STATE(163)] = 1923,
  [SMALL_STATE(164)] = 1927,
  [SMALL_STATE(165)] = 1931,
  [SMALL_STATE(166)] = 1935,
  [SMALL_STATE(167)] = 1939,
  [SMALL_STATE(168)] = 1943,
  [SMALL_STATE(169)] = 1947,
  [SMALL_STATE(170)] = 1951,
  [SMALL_STATE(171)] = 1955,
  [SMALL_STATE(172)] = 1959,
  [SMALL_STATE(173)] = 1963,
  [SMALL_STATE(174)] = 1967,
  [SMALL_STATE(175)] = 1971,
  [SMALL_STATE(176)] = 1975,
  [SMALL_STATE(177)] = 1979,
  [SMALL_STATE(178)] = 1983,
  [SMALL_STATE(179)] = 1987,
  [SMALL_STATE(180)] = 1991,
  [SMALL_STATE(181)] = 1995,
  [SMALL_STATE(182)] = 1999,
  [SMALL_STATE(183)] = 2003,
  [SMALL_STATE(184)] = 2007,
  [SMALL_STATE(185)] = 2011,
  [SMALL_STATE(186)] = 2015,
  [SMALL_STATE(187)] = 2019,
  [SMALL_STATE(188)] = 2023,
  [SMALL_STATE(189)] = 2027,
  [SMALL_STATE(190)] = 2031,
  [SMALL_STATE(191)] = 2035,
  [SMALL_STATE(192)] = 2039,
  [SMALL_STATE(193)] = 2043,
  [SMALL_STATE(194)] = 2047,
  [SMALL_STATE(195)] = 2051,
  [SMALL_STATE(196)] = 2055,
  [SMALL_STATE(197)] = 2059,
  [SMALL_STATE(198)] = 2063,
  [SMALL_STATE(199)] = 2067,
  [SMALL_STATE(200)] = 2071,
  [SMALL_STATE(201)] = 2075,
  [SMALL_STATE(202)] = 2079,
  [SMALL_STATE(203)] = 2083,
  [SMALL_STATE(204)] = 2087,
  [SMALL_STATE(205)] = 2091,
  [SMALL_STATE(206)] = 2095,
  [SMALL_STATE(207)] = 2099,
  [SMALL_STATE(208)] = 2103,
  [SMALL_STATE(209)] = 2107,
  [SMALL_STATE(210)] = 2111,
  [SMALL_STATE(211)] = 2115,
  [SMALL_STATE(212)] = 2119,
  [SMALL_STATE(213)] = 2123,
  [SMALL_STATE(214)] = 2127,
  [SMALL_STATE(215)] = 2131,
  [SMALL_STATE(216)] = 2135,
  [SMALL_STATE(217)] = 2139,
  [SMALL_STATE(218)] = 2143,
  [SMALL_STATE(219)] = 2147,
  [SMALL_STATE(220)] = 2151,
  [SMALL_STATE(221)] = 2155,
  [SMALL_STATE(222)] = 2159,
  [SMALL_STATE(223)] = 2163,
  [SMALL_STATE(224)] = 2167,
  [SMALL_STATE(225)] = 2171,
  [SMALL_STATE(226)] = 2175,
  [SMALL_STATE(227)] = 2179,
  [SMALL_STATE(228)] = 2183,
  [SMALL_STATE(229)] = 2187,
  [SMALL_STATE(230)] = 2191,
  [SMALL_STATE(231)] = 2195,
  [SMALL_STATE(232)] = 2199,
  [SMALL_STATE(233)] = 2203,
  [SMALL_STATE(234)] = 2207,
  [SMALL_STATE(235)] = 2211,
  [SMALL_STATE(236)] = 2215,
  [SMALL_STATE(237)] = 2219,
  [SMALL_STATE(238)] = 2223,
  [SMALL_STATE(239)] = 2227,
  [SMALL_STATE(240)] = 2231,
  [SMALL_STATE(241)] = 2235,
  [SMALL_STATE(242)] = 2239,
  [SMALL_STATE(243)] = 2243,
  [SMALL_STATE(244)] = 2247,
  [SMALL_STATE(245)] = 2251,
  [SMALL_STATE(246)] = 2255,
  [SMALL_STATE(247)] = 2259,
  [SMALL_STATE(248)] = 2263,
  [SMALL_STATE(249)] = 2267,
  [SMALL_STATE(250)] = 2271,
  [SMALL_STATE(251)] = 2275,
  [SMALL_STATE(252)] = 2279,
  [SMALL_STATE(253)] = 2283,
  [SMALL_STATE(254)] = 2287,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(107),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(84),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(80),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(85),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(108),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(109),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(81),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(110),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(114),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(91),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(21),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(220),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(39),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(115),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(87),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(118),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(119),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(56),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(101),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(100),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(52),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(122),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(123),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(124),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(99),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(98),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(125),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(126),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(97),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(96),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(95),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(78),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(73),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(94),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(93),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(92),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(127),
  [268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(128),
  [271] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(130),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(58),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(59),
  [280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(19),
  [283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(131),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(102),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(133),
  [292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(134),
  [295] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(138),
  [298] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(67),
  [301] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(88),
  [304] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(83),
  [307] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(82),
  [310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(139),
  [313] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(70),
  [316] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(193),
  [319] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(192),
  [322] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(191),
  [325] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(190),
  [328] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(189),
  [331] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(144),
  [334] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(47),
  [337] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(145),
  [340] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(146),
  [343] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(147),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(37),
  [349] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(180),
  [352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(180),
  [355] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(176),
  [358] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(176),
  [361] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(154),
  [364] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(150),
  [367] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(220),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_options_repeat1, 2),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 1),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 1),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [390] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(216),
  [393] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [396] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 2),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_repeat1, 2),
  [419] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(15),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_repeat1, 1),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ipv6_repeat1, 2),
  [432] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ipv6_repeat1, 2), SHIFT_REPEAT(22),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ipv6_repeat1, 2),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ipv6, 1),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ipv6, 1),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options, 2),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_options, 2),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options, 5),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_options, 5),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rule, 3),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__rule, 3),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options, 4),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_options, 4),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ssl_version_repeat1, 1),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ssl_version, 2),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ssl_version_repeat1, 2),
  [489] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ssl_version_repeat1, 2), SHIFT_REPEAT(30),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port, 2),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ssl_state, 2),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ssl_state, 1),
  [502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ssl_state_repeat1, 1),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ipv4, 1),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ssl_state_repeat1, 2),
  [518] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ssl_state_repeat1, 2), SHIFT_REPEAT(42),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port, 1),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_location, 5),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ipv4, 2),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_location, 3),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 2),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__standalone_location, 2),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ipv6, 2),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_location, 4),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fast_pattern, 1),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_location, 2),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port, 3),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_port, 5),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction, 1),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_direction, 1),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filestore, 1),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_port, 4),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port_range, 1),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_port, 2),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_port, 3),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_protocol, 1),
  [591] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_protocol, 1),
  [593] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [597] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [599] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [601] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [611] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [615] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_port_repeat1, 2), SHIFT_REPEAT(38),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_port_repeat1, 2),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [624] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [626] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(111),
  [629] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [633] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 1),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [641] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_location_repeat1, 2), SHIFT_REPEAT(17),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_location_repeat1, 2),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [648] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2),
  [650] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(135),
  [653] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_isdataat, 2),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_digit, 1),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_isdataat, 3),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filestore, 2),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_digit, 2),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_icmp_seq, 2),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 2),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flowint, 2),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stream_size, 2),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filename, 2),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fileext, 2),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filemagic, 2),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filemd5, 2),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filesha1, 2),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filesha256, 2),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filesize, 2),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dns_opcode, 2),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tls_version, 2),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ssh_software, 1),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tls_subject, 2),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tls_issuerdn, 2),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tls_fingerprint, 2),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ssh_proto, 1),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ssh_protoversion, 2),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ssh_softwareversion, 2),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_icode, 2),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replace, 2),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dsize, 2),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bsize, 2),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tls_sni, 1),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tls_cert_fingerprint, 1),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tls_cert_serial, 1),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tls_cert_issuer, 1),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tls_cert_subject, 1),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_within, 2),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_distance, 2),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_itype, 2),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_depth, 2),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content, 2),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_icmpv6_mtu, 2),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tos, 3),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window, 3),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pcrexform, 2),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fast_pattern, 3),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_icmp_id, 2),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pcre, 2),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ipopts, 2),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tcp_mss, 2),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filemd5, 3),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filesha1, 3),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filesha256, 3),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dns_opcode, 3),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window, 2),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ack, 2),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seq, 2),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tos, 2),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragoffset, 2),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragbits, 2),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 2),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geoip, 2),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ip_proto, 2),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filestore, 3),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ttl, 2),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 2),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata, 2),
  [823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_priority, 2),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 2),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classtype, 2),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tos, 4),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_isdataat, 4),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flowbits, 4),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filestore, 4),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gid, 2),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rev, 2),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sid, 2),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flowbits, 2),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_msg, 2),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 6),
  [861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 4),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_isdataat, 5),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fast_pattern, 2),
  [867] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 6),
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
