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
#define STATE_COUNT 117
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 135
#define ALIAS_COUNT 0
#define TOKEN_COUNT 89
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
  sym_port_range = 48,
  anon_sym_DASH_GT = 49,
  anon_sym_LT_GT = 50,
  anon_sym_LPAREN = 51,
  anon_sym_SEMI = 52,
  anon_sym_RPAREN = 53,
  anon_sym_msg_COLON = 54,
  anon_sym_content_COLON = 55,
  anon_sym_sid_COLON = 56,
  anon_sym_rev_COLON = 57,
  anon_sym_gid_COLON = 58,
  anon_sym_classtype_COLON = 59,
  anon_sym_reference_COLON = 60,
  anon_sym_priority_COLON = 61,
  anon_sym_metadata_COLON = 62,
  anon_sym_target_COLON = 63,
  anon_sym_ttl_COLON = 64,
  anon_sym_ipopts_COLON = 65,
  anon_sym_rr = 66,
  anon_sym_eol = 67,
  anon_sym_nop = 68,
  anon_sym_ts = 69,
  anon_sym_sec = 70,
  anon_sym_esec = 71,
  anon_sym_lsrr = 72,
  anon_sym_ssrr = 73,
  anon_sym_satid = 74,
  sym_sameip = 75,
  anon_sym_ip_proto_COLON = 76,
  sym_ipv4_hdr = 77,
  sym_ipv6_hdr = 78,
  anon_sym_geoip_COLON = 79,
  anon_sym_id_COLON = 80,
  anon_sym_fragbits_COLON = 81,
  anon_sym_fragoffset_COLON = 82,
  anon_sym_tos_COLON = 83,
  anon_sym_x = 84,
  anon_sym_DQUOTE = 85,
  aux_sym_string_token1 = 86,
  aux_sym_text_token1 = 87,
  sym_digit = 88,
  sym_source_file = 89,
  sym__lines = 90,
  sym_comment = 91,
  sym__rule = 92,
  sym_action = 93,
  sym_header = 94,
  sym_protocol = 95,
  sym__location = 96,
  sym__standalone_location = 97,
  sym_group_location = 98,
  sym_variable = 99,
  sym_ipv4 = 100,
  sym_ipv6 = 101,
  sym__port_choices = 102,
  sym_port = 103,
  sym_group_port = 104,
  sym_direction = 105,
  sym_options = 106,
  sym__opts = 107,
  sym_msg = 108,
  sym_content = 109,
  sym_sid = 110,
  sym_rev = 111,
  sym_gid = 112,
  sym_classtype = 113,
  sym_reference = 114,
  sym_priority = 115,
  sym_metadata = 116,
  sym_target = 117,
  sym_ttl = 118,
  sym_ipopts = 119,
  sym_ip_proto = 120,
  sym_geoip = 121,
  sym_id = 122,
  sym_fragbits = 123,
  sym_fragoffset = 124,
  sym_tos = 125,
  sym_string = 126,
  sym_text = 127,
  aux_sym_source_file_repeat1 = 128,
  aux_sym_group_location_repeat1 = 129,
  aux_sym_ipv6_repeat1 = 130,
  aux_sym_group_port_repeat1 = 131,
  aux_sym_options_repeat1 = 132,
  aux_sym_string_repeat1 = 133,
  aux_sym_text_repeat1 = 134,
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
  [sym_port_range] = "port_range",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_LT_GT] = "<>",
  [anon_sym_LPAREN] = "(",
  [anon_sym_SEMI] = ";",
  [anon_sym_RPAREN] = ")",
  [anon_sym_msg_COLON] = "msg:",
  [anon_sym_content_COLON] = "content:",
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
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [aux_sym_text_token1] = "text_token1",
  [sym_digit] = "digit",
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
  [sym_direction] = "direction",
  [sym_options] = "options",
  [sym__opts] = "_opts",
  [sym_msg] = "msg",
  [sym_content] = "content",
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
  [sym_string] = "string",
  [sym_text] = "text",
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
  [sym_port_range] = sym_port_range,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_LT_GT] = anon_sym_LT_GT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_msg_COLON] = anon_sym_msg_COLON,
  [anon_sym_content_COLON] = anon_sym_content_COLON,
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
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [aux_sym_text_token1] = aux_sym_text_token1,
  [sym_digit] = sym_digit,
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
  [sym_direction] = sym_direction,
  [sym_options] = sym_options,
  [sym__opts] = sym__opts,
  [sym_msg] = sym_msg,
  [sym_content] = sym_content,
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
  [sym_string] = sym_string,
  [sym_text] = sym_text,
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
  [sym_port_range] = {
    .visible = true,
    .named = true,
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
  [anon_sym_content_COLON] = {
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
  [sym_digit] = {
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
  [sym_content] = {
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
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(216);
      if (lookahead == '!') ADVANCE(258);
      if (lookahead == '"') ADVANCE(326);
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == '$') ADVANCE(259);
      if (lookahead == '(') ADVANCE(292);
      if (lookahead == ')') ADVANCE(294);
      if (lookahead == ',') ADVANCE(256);
      if (lookahead == '-') ADVANCE(35);
      if (lookahead == '/') ADVANCE(211);
      if (lookahead == ':') ADVANCE(289);
      if (lookahead == ';') ADVANCE(293);
      if (lookahead == '<') ADVANCE(36);
      if (lookahead == '[') ADVANCE(255);
      if (lookahead == ']') ADVANCE(257);
      if (lookahead == 'a') ADVANCE(271);
      if (lookahead == 'c') ADVANCE(272);
      if (lookahead == 'd') ADVANCE(269);
      if (lookahead == 'e') ADVANCE(274);
      if (lookahead == 'f') ADVANCE(275);
      if (lookahead == 'g') ADVANCE(80);
      if (lookahead == 'h') ADVANCE(191);
      if (lookahead == 'i') ADVANCE(54);
      if (lookahead == 'k') ADVANCE(159);
      if (lookahead == 'l') ADVANCE(178);
      if (lookahead == 'm') ADVANCE(81);
      if (lookahead == 'n') ADVANCE(94);
      if (lookahead == 'p') ADVANCE(43);
      if (lookahead == 'r') ADVANCE(69);
      if (lookahead == 's') ADVANCE(38);
      if (lookahead == 't') ADVANCE(41);
      if (lookahead == 'u') ADVANCE(74);
      if (lookahead == 'x') ADVANCE(325);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'b') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(34)
      if (lookahead == ';') ADVANCE(293);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(331);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '"') ADVANCE(326);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(327);
      if (lookahead != 0) ADVANCE(328);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(258);
      if (lookahead == '$') ADVANCE(259);
      if (lookahead == '[') ADVANCE(255);
      if (lookahead == ']') ADVANCE(257);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(282);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(258);
      if (lookahead == ',') ADVANCE(256);
      if (lookahead == '/') ADVANCE(211);
      if (lookahead == '[') ADVANCE(255);
      if (lookahead == ']') ADVANCE(257);
      if (lookahead == 'a') ADVANCE(273);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(282);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(258);
      if (lookahead == 'd') ADVANCE(64);
      if (lookahead == 'e') ADVANCE(122);
      if (lookahead == 'f') ADVANCE(187);
      if (lookahead == 'h') ADVANCE(191);
      if (lookahead == 'i') ADVANCE(55);
      if (lookahead == 'k') ADVANCE(159);
      if (lookahead == 'm') ADVANCE(128);
      if (lookahead == 'n') ADVANCE(95);
      if (lookahead == 'r') ADVANCE(70);
      if (lookahead == 's') ADVANCE(113);
      if (lookahead == 't') ADVANCE(60);
      if (lookahead == 'u') ADVANCE(74);
      if (lookahead == 'x') ADVANCE(325);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(326);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(105);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(106);
      END_STATE();
    case 12:
      if (lookahead == '2') ADVANCE(245);
      END_STATE();
    case 13:
      if (lookahead == '3') ADVANCE(242);
      END_STATE();
    case 14:
      if (lookahead == '4') ADVANCE(7);
      if (lookahead == '6') ADVANCE(11);
      END_STATE();
    case 15:
      if (lookahead == '5') ADVANCE(246);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(321);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(299);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(295);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(298);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(297);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(324);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(305);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(320);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(306);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(304);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(296);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(322);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(317);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(303);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(302);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(300);
      END_STATE();
    case 32:
      if (lookahead == ':') ADVANCE(301);
      END_STATE();
    case 33:
      if (lookahead == ':') ADVANCE(323);
      END_STATE();
    case 34:
      if (lookahead == ';') ADVANCE(293);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      END_STATE();
    case 35:
      if (lookahead == '>') ADVANCE(290);
      END_STATE();
    case 36:
      if (lookahead == '>') ADVANCE(291);
      END_STATE();
    case 37:
      if (lookahead == '_') ADVANCE(155);
      if (lookahead == 'o') ADVANCE(154);
      if (lookahead == 'v') ADVANCE(14);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(119);
      if (lookahead == 'e') ADVANCE(56);
      if (lookahead == 'i') ADVANCE(73);
      if (lookahead == 'm') ADVANCE(51);
      if (lookahead == 'n') ADVANCE(121);
      if (lookahead == 's') ADVANCE(103);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(119);
      if (lookahead == 'e') ADVANCE(56);
      if (lookahead == 'i') ADVANCE(72);
      if (lookahead == 's') ADVANCE(169);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(165);
      if (lookahead == 'c') ADVANCE(141);
      if (lookahead == 'f') ADVANCE(202);
      if (lookahead == 'l') ADVANCE(175);
      if (lookahead == 'o') ADVANCE(180);
      if (lookahead == 's') ADVANCE(310);
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(165);
      if (lookahead == 'o') ADVANCE(180);
      if (lookahead == 's') ADVANCE(310);
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(179);
      if (lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(148);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(29);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(198);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(182);
      END_STATE();
    case 49:
      if (lookahead == 'b') ADVANCE(15);
      END_STATE();
    case 50:
      if (lookahead == 'b') ADVANCE(249);
      END_STATE();
    case 51:
      if (lookahead == 'b') ADVANCE(235);
      if (lookahead == 't') ADVANCE(149);
      END_STATE();
    case 52:
      if (lookahead == 'b') ADVANCE(206);
      END_STATE();
    case 53:
      if (lookahead == 'b') ADVANCE(114);
      if (lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(120);
      if (lookahead == 'd') ADVANCE(16);
      if (lookahead == 'k') ADVANCE(78);
      if (lookahead == 'm') ADVANCE(45);
      if (lookahead == 'p') ADVANCE(231);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(120);
      if (lookahead == 'k') ADVANCE(78);
      if (lookahead == 'm') ADVANCE(45);
      if (lookahead == 'p') ADVANCE(230);
      END_STATE();
    case 56:
      if (lookahead == 'c') ADVANCE(311);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(312);
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(237);
      END_STATE();
    case 59:
      if (lookahead == 'c') ADVANCE(224);
      END_STATE();
    case 60:
      if (lookahead == 'c') ADVANCE(141);
      if (lookahead == 'f') ADVANCE(202);
      if (lookahead == 'l') ADVANCE(175);
      END_STATE();
    case 61:
      if (lookahead == 'c') ADVANCE(143);
      END_STATE();
    case 62:
      if (lookahead == 'c') ADVANCE(189);
      END_STATE();
    case 63:
      if (lookahead == 'c') ADVANCE(90);
      END_STATE();
    case 64:
      if (lookahead == 'c') ADVANCE(88);
      if (lookahead == 'h') ADVANCE(61);
      if (lookahead == 'n') ADVANCE(135);
      END_STATE();
    case 65:
      if (lookahead == 'd') ADVANCE(16);
      if (lookahead == 'p') ADVANCE(37);
      END_STATE();
    case 66:
      if (lookahead == 'd') ADVANCE(315);
      END_STATE();
    case 67:
      if (lookahead == 'd') ADVANCE(17);
      END_STATE();
    case 68:
      if (lookahead == 'd') ADVANCE(52);
      END_STATE();
    case 69:
      if (lookahead == 'd') ADVANCE(139);
      if (lookahead == 'e') ADVANCE(98);
      if (lookahead == 'f') ADVANCE(50);
      if (lookahead == 'r') ADVANCE(307);
      END_STATE();
    case 70:
      if (lookahead == 'd') ADVANCE(139);
      if (lookahead == 'f') ADVANCE(50);
      END_STATE();
    case 71:
      if (lookahead == 'd') ADVANCE(47);
      END_STATE();
    case 72:
      if (lookahead == 'd') ADVANCE(20);
      END_STATE();
    case 73:
      if (lookahead == 'd') ADVANCE(20);
      if (lookahead == 'p') ADVANCE(253);
      END_STATE();
    case 74:
      if (lookahead == 'd') ADVANCE(142);
      END_STATE();
    case 75:
      if (lookahead == 'd') ADVANCE(162);
      END_STATE();
    case 76:
      if (lookahead == 'd') ADVANCE(163);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(98);
      if (lookahead == 'r') ADVANCE(307);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(207);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(134);
      if (lookahead == 'i') ADVANCE(67);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(195);
      if (lookahead == 'o') ADVANCE(68);
      if (lookahead == 's') ADVANCE(100);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(195);
      if (lookahead == 's') ADVANCE(100);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(167);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 94:
      if (lookahead == 'f') ADVANCE(174);
      if (lookahead == 'o') ADVANCE(137);
      if (lookahead == 't') ADVANCE(138);
      END_STATE();
    case 95:
      if (lookahead == 'f') ADVANCE(174);
      if (lookahead == 't') ADVANCE(138);
      END_STATE();
    case 96:
      if (lookahead == 'f') ADVANCE(97);
      END_STATE();
    case 97:
      if (lookahead == 'f') ADVANCE(186);
      END_STATE();
    case 98:
      if (lookahead == 'f') ADVANCE(87);
      if (lookahead == 'j') ADVANCE(85);
      if (lookahead == 'v') ADVANCE(19);
      END_STATE();
    case 99:
      if (lookahead == 'g') ADVANCE(53);
      END_STATE();
    case 100:
      if (lookahead == 'g') ADVANCE(18);
      END_STATE();
    case 101:
      if (lookahead == 'g') ADVANCE(86);
      END_STATE();
    case 102:
      if (lookahead == 'h') ADVANCE(238);
      END_STATE();
    case 103:
      if (lookahead == 'h') ADVANCE(238);
      if (lookahead == 'r') ADVANCE(161);
      END_STATE();
    case 104:
      if (lookahead == 'h') ADVANCE(226);
      END_STATE();
    case 105:
      if (lookahead == 'h') ADVANCE(75);
      END_STATE();
    case 106:
      if (lookahead == 'h') ADVANCE(76);
      END_STATE();
    case 107:
      if (lookahead == 'i') ADVANCE(129);
      END_STATE();
    case 108:
      if (lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 109:
      if (lookahead == 'i') ADVANCE(145);
      END_STATE();
    case 110:
      if (lookahead == 'i') ADVANCE(194);
      END_STATE();
    case 111:
      if (lookahead == 'i') ADVANCE(157);
      END_STATE();
    case 112:
      if (lookahead == 'i') ADVANCE(152);
      END_STATE();
    case 113:
      if (lookahead == 'i') ADVANCE(140);
      if (lookahead == 'm') ADVANCE(51);
      if (lookahead == 'n') ADVANCE(121);
      if (lookahead == 's') ADVANCE(102);
      END_STATE();
    case 114:
      if (lookahead == 'i') ADVANCE(205);
      END_STATE();
    case 115:
      if (lookahead == 'l') ADVANCE(84);
      if (lookahead == 'n') ADVANCE(208);
      END_STATE();
    case 116:
      if (lookahead == 'l') ADVANCE(48);
      if (lookahead == 'o') ADVANCE(123);
      END_STATE();
    case 117:
      if (lookahead == 'l') ADVANCE(308);
      END_STATE();
    case 118:
      if (lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 119:
      if (lookahead == 'm') ADVANCE(92);
      if (lookahead == 't') ADVANCE(108);
      END_STATE();
    case 120:
      if (lookahead == 'm') ADVANCE(147);
      END_STATE();
    case 121:
      if (lookahead == 'm') ADVANCE(150);
      END_STATE();
    case 122:
      if (lookahead == 'n') ADVANCE(109);
      END_STATE();
    case 123:
      if (lookahead == 'n') ADVANCE(196);
      END_STATE();
    case 124:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 125:
      if (lookahead == 'n') ADVANCE(201);
      END_STATE();
    case 126:
      if (lookahead == 'o') ADVANCE(117);
      if (lookahead == 's') ADVANCE(83);
      END_STATE();
    case 127:
      if (lookahead == 'o') ADVANCE(137);
      END_STATE();
    case 128:
      if (lookahead == 'o') ADVANCE(68);
      END_STATE();
    case 129:
      if (lookahead == 'o') ADVANCE(173);
      END_STATE();
    case 130:
      if (lookahead == 'o') ADVANCE(144);
      END_STATE();
    case 131:
      if (lookahead == 'o') ADVANCE(197);
      END_STATE();
    case 132:
      if (lookahead == 'o') ADVANCE(193);
      END_STATE();
    case 133:
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 134:
      if (lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 135:
      if (lookahead == 'p') ADVANCE(13);
      if (lookahead == 's') ADVANCE(236);
      END_STATE();
    case 136:
      if (lookahead == 'p') ADVANCE(233);
      END_STATE();
    case 137:
      if (lookahead == 'p') ADVANCE(309);
      END_STATE();
    case 138:
      if (lookahead == 'p') ADVANCE(247);
      END_STATE();
    case 139:
      if (lookahead == 'p') ADVANCE(250);
      END_STATE();
    case 140:
      if (lookahead == 'p') ADVANCE(253);
      END_STATE();
    case 141:
      if (lookahead == 'p') ADVANCE(227);
      END_STATE();
    case 142:
      if (lookahead == 'p') ADVANCE(228);
      END_STATE();
    case 143:
      if (lookahead == 'p') ADVANCE(248);
      END_STATE();
    case 144:
      if (lookahead == 'p') ADVANCE(222);
      END_STATE();
    case 145:
      if (lookahead == 'p') ADVANCE(243);
      END_STATE();
    case 146:
      if (lookahead == 'p') ADVANCE(232);
      END_STATE();
    case 147:
      if (lookahead == 'p') ADVANCE(229);
      END_STATE();
    case 148:
      if (lookahead == 'p') ADVANCE(240);
      END_STATE();
    case 149:
      if (lookahead == 'p') ADVANCE(239);
      END_STATE();
    case 150:
      if (lookahead == 'p') ADVANCE(251);
      END_STATE();
    case 151:
      if (lookahead == 'p') ADVANCE(252);
      END_STATE();
    case 152:
      if (lookahead == 'p') ADVANCE(316);
      END_STATE();
    case 153:
      if (lookahead == 'p') ADVANCE(58);
      END_STATE();
    case 154:
      if (lookahead == 'p') ADVANCE(204);
      END_STATE();
    case 155:
      if (lookahead == 'p') ADVANCE(166);
      END_STATE();
    case 156:
      if (lookahead == 'p') ADVANCE(89);
      END_STATE();
    case 157:
      if (lookahead == 'p') ADVANCE(23);
      END_STATE();
    case 158:
      if (lookahead == 'r') ADVANCE(130);
      END_STATE();
    case 159:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 160:
      if (lookahead == 'r') ADVANCE(313);
      END_STATE();
    case 161:
      if (lookahead == 'r') ADVANCE(314);
      END_STATE();
    case 162:
      if (lookahead == 'r') ADVANCE(318);
      END_STATE();
    case 163:
      if (lookahead == 'r') ADVANCE(319);
      END_STATE();
    case 164:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 165:
      if (lookahead == 'r') ADVANCE(101);
      END_STATE();
    case 166:
      if (lookahead == 'r') ADVANCE(131);
      END_STATE();
    case 167:
      if (lookahead == 'r') ADVANCE(188);
      END_STATE();
    case 168:
      if (lookahead == 'r') ADVANCE(160);
      END_STATE();
    case 169:
      if (lookahead == 'r') ADVANCE(161);
      END_STATE();
    case 170:
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 171:
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 172:
      if (lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 173:
      if (lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 174:
      if (lookahead == 's') ADVANCE(244);
      END_STATE();
    case 175:
      if (lookahead == 's') ADVANCE(234);
      END_STATE();
    case 176:
      if (lookahead == 's') ADVANCE(221);
      END_STATE();
    case 177:
      if (lookahead == 's') ADVANCE(241);
      END_STATE();
    case 178:
      if (lookahead == 's') ADVANCE(168);
      END_STATE();
    case 179:
      if (lookahead == 's') ADVANCE(176);
      END_STATE();
    case 180:
      if (lookahead == 's') ADVANCE(21);
      END_STATE();
    case 181:
      if (lookahead == 's') ADVANCE(192);
      END_STATE();
    case 182:
      if (lookahead == 's') ADVANCE(181);
      END_STATE();
    case 183:
      if (lookahead == 's') ADVANCE(24);
      END_STATE();
    case 184:
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 185:
      if (lookahead == 's') ADVANCE(190);
      END_STATE();
    case 186:
      if (lookahead == 's') ADVANCE(93);
      END_STATE();
    case 187:
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 188:
      if (lookahead == 't') ADVANCE(220);
      END_STATE();
    case 189:
      if (lookahead == 't') ADVANCE(223);
      END_STATE();
    case 190:
      if (lookahead == 't') ADVANCE(225);
      END_STATE();
    case 191:
      if (lookahead == 't') ADVANCE(199);
      END_STATE();
    case 192:
      if (lookahead == 't') ADVANCE(210);
      END_STATE();
    case 193:
      if (lookahead == 't') ADVANCE(104);
      END_STATE();
    case 194:
      if (lookahead == 't') ADVANCE(209);
      END_STATE();
    case 195:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 196:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 197:
      if (lookahead == 't') ADVANCE(133);
      END_STATE();
    case 198:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 199:
      if (lookahead == 't') ADVANCE(146);
      END_STATE();
    case 200:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 201:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 202:
      if (lookahead == 't') ADVANCE(151);
      END_STATE();
    case 203:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 204:
      if (lookahead == 't') ADVANCE(183);
      END_STATE();
    case 205:
      if (lookahead == 't') ADVANCE(184);
      END_STATE();
    case 206:
      if (lookahead == 'u') ADVANCE(177);
      END_STATE();
    case 207:
      if (lookahead == 'v') ADVANCE(12);
      END_STATE();
    case 208:
      if (lookahead == 'y') ADVANCE(284);
      END_STATE();
    case 209:
      if (lookahead == 'y') ADVANCE(30);
      END_STATE();
    case 210:
      if (lookahead == 'y') ADVANCE(156);
      END_STATE();
    case 211:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      END_STATE();
    case 212:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 213:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      END_STATE();
    case 214:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 215:
      if (eof) ADVANCE(216);
      if (lookahead == '!') ADVANCE(258);
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == ')') ADVANCE(294);
      if (lookahead == ',') ADVANCE(256);
      if (lookahead == '/') ADVANCE(211);
      if (lookahead == '[') ADVANCE(255);
      if (lookahead == ']') ADVANCE(257);
      if (lookahead == 'a') ADVANCE(115);
      if (lookahead == 'c') ADVANCE(116);
      if (lookahead == 'd') ADVANCE(158);
      if (lookahead == 'e') ADVANCE(126);
      if (lookahead == 'f') ADVANCE(164);
      if (lookahead == 'g') ADVANCE(80);
      if (lookahead == 'i') ADVANCE(65);
      if (lookahead == 'l') ADVANCE(178);
      if (lookahead == 'm') ADVANCE(82);
      if (lookahead == 'n') ADVANCE(127);
      if (lookahead == 'p') ADVANCE(43);
      if (lookahead == 'r') ADVANCE(77);
      if (lookahead == 's') ADVANCE(39);
      if (lookahead == 't') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(215)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(219);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(219);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_alert);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_pass);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_drop);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_reject);
      if (lookahead == 'b') ADVANCE(132);
      if (lookahead == 'd') ADVANCE(185);
      if (lookahead == 's') ADVANCE(171);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_rejectsrc);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_rejectdst);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_rejectboth);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_tcp);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_udp);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_icmp);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_ip);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_ip);
      if (lookahead == '_') ADVANCE(155);
      if (lookahead == 'o') ADVANCE(154);
      if (lookahead == 'v') ADVANCE(14);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_http);
      if (lookahead == '2') ADVANCE(254);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_ftp);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_tls);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_smb);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_dns);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_dcerpc);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_ssh);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_smtp);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_imap);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_modbus);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_dnp3);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_enip);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_nfs);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_ikev2);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_krb5);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_ntp);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_dhcp);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_rfb);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_rdp);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_snmp);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_tftp);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_sip);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_http2);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_negation);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_ipv4_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_ipv4_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym__ipv6_octet);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == '.') ADVANCE(212);
      if (lookahead == ':') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(268);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == '.') ADVANCE(212);
      if (lookahead == ':') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(280);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == '.') ADVANCE(212);
      if (lookahead == ':') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(264);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(281);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == '.') ADVANCE(212);
      if (lookahead == ':') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(283);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(283);
      if (lookahead == 'c') ADVANCE(270);
      if (lookahead == 'h') ADVANCE(61);
      if (lookahead == 'n') ADVANCE(135);
      if (lookahead == 'r') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(280);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(283);
      if (lookahead == 'e') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(281);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(283);
      if (lookahead == 'l') ADVANCE(84);
      if (lookahead == 'n') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(280);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(283);
      if (lookahead == 'l') ADVANCE(48);
      if (lookahead == 'o') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(280);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(283);
      if (lookahead == 'n') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(280);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(283);
      if (lookahead == 'n') ADVANCE(109);
      if (lookahead == 'o') ADVANCE(117);
      if (lookahead == 's') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(280);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(283);
      if (lookahead == 'r') ADVANCE(40);
      if (lookahead == 't') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(280);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(283);
      if (lookahead == 'r') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(268);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(268);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(280);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(277);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(281);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(281);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(268);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(280);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(263);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_any);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_port_token1);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_port_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(285);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_port_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(286);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_port_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(287);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_port_range);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_msg_COLON);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_content_COLON);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_sid_COLON);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_rev_COLON);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_gid_COLON);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_classtype_COLON);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_reference_COLON);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_priority_COLON);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_metadata_COLON);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_target_COLON);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_ttl_COLON);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_ipopts_COLON);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_rr);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_eol);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_nop);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_ts);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_sec);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_esec);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_lsrr);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_ssrr);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_satid);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_sameip);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_ip_proto_COLON);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_ipv4_hdr);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_ipv6_hdr);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_geoip_COLON);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_id_COLON);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_fragbits_COLON);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_fragoffset_COLON);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_tos_COLON);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(328);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(328);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != ';') ADVANCE(331);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_digit);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 215},
  [2] = {.lex_state = 215},
  [3] = {.lex_state = 215},
  [4] = {.lex_state = 215},
  [5] = {.lex_state = 215},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 215},
  [9] = {.lex_state = 215},
  [10] = {.lex_state = 215},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 215},
  [17] = {.lex_state = 215},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 215},
  [20] = {.lex_state = 215},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 215},
  [23] = {.lex_state = 215},
  [24] = {.lex_state = 215},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 215},
  [27] = {.lex_state = 215},
  [28] = {.lex_state = 215},
  [29] = {.lex_state = 215},
  [30] = {.lex_state = 215},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 215},
  [33] = {.lex_state = 215},
  [34] = {.lex_state = 215},
  [35] = {.lex_state = 215},
  [36] = {.lex_state = 215},
  [37] = {.lex_state = 215},
  [38] = {.lex_state = 215},
  [39] = {.lex_state = 215},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 5},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 215},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 5},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 5},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 218},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 5},
  [89] = {.lex_state = 5},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 5},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 5},
  [103] = {.lex_state = 5},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 5},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 260},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 5},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
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
    [sym_port_range] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_LT_GT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_msg_COLON] = ACTIONS(1),
    [anon_sym_content_COLON] = ACTIONS(1),
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
    [anon_sym_DQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(116),
    [sym__lines] = STATE(9),
    [sym_comment] = STATE(9),
    [sym__rule] = STATE(9),
    [sym_action] = STATE(6),
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
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 22,
    ACTIONS(11), 1,
      anon_sym_RPAREN,
    ACTIONS(13), 1,
      anon_sym_msg_COLON,
    ACTIONS(15), 1,
      anon_sym_content_COLON,
    ACTIONS(17), 1,
      anon_sym_sid_COLON,
    ACTIONS(19), 1,
      anon_sym_rev_COLON,
    ACTIONS(21), 1,
      anon_sym_gid_COLON,
    ACTIONS(23), 1,
      anon_sym_classtype_COLON,
    ACTIONS(25), 1,
      anon_sym_reference_COLON,
    ACTIONS(27), 1,
      anon_sym_priority_COLON,
    ACTIONS(29), 1,
      anon_sym_metadata_COLON,
    ACTIONS(31), 1,
      anon_sym_target_COLON,
    ACTIONS(33), 1,
      anon_sym_ttl_COLON,
    ACTIONS(35), 1,
      anon_sym_ipopts_COLON,
    ACTIONS(39), 1,
      anon_sym_ip_proto_COLON,
    ACTIONS(41), 1,
      anon_sym_geoip_COLON,
    ACTIONS(43), 1,
      anon_sym_id_COLON,
    ACTIONS(45), 1,
      anon_sym_fragbits_COLON,
    ACTIONS(47), 1,
      anon_sym_fragoffset_COLON,
    ACTIONS(49), 1,
      anon_sym_tos_COLON,
    STATE(3), 1,
      aux_sym_options_repeat1,
    ACTIONS(37), 3,
      sym_sameip,
      sym_ipv4_hdr,
      sym_ipv6_hdr,
    STATE(92), 19,
      sym__opts,
      sym_msg,
      sym_content,
      sym_sid,
      sym_rev,
      sym_gid,
      sym_classtype,
      sym_reference,
      sym_priority,
      sym_metadata,
      sym_target,
      sym_ttl,
      sym_ipopts,
      sym_ip_proto,
      sym_geoip,
      sym_id,
      sym_fragbits,
      sym_fragoffset,
      sym_tos,
  [87] = 22,
    ACTIONS(13), 1,
      anon_sym_msg_COLON,
    ACTIONS(15), 1,
      anon_sym_content_COLON,
    ACTIONS(17), 1,
      anon_sym_sid_COLON,
    ACTIONS(19), 1,
      anon_sym_rev_COLON,
    ACTIONS(21), 1,
      anon_sym_gid_COLON,
    ACTIONS(23), 1,
      anon_sym_classtype_COLON,
    ACTIONS(25), 1,
      anon_sym_reference_COLON,
    ACTIONS(27), 1,
      anon_sym_priority_COLON,
    ACTIONS(29), 1,
      anon_sym_metadata_COLON,
    ACTIONS(31), 1,
      anon_sym_target_COLON,
    ACTIONS(33), 1,
      anon_sym_ttl_COLON,
    ACTIONS(35), 1,
      anon_sym_ipopts_COLON,
    ACTIONS(39), 1,
      anon_sym_ip_proto_COLON,
    ACTIONS(41), 1,
      anon_sym_geoip_COLON,
    ACTIONS(43), 1,
      anon_sym_id_COLON,
    ACTIONS(45), 1,
      anon_sym_fragbits_COLON,
    ACTIONS(47), 1,
      anon_sym_fragoffset_COLON,
    ACTIONS(49), 1,
      anon_sym_tos_COLON,
    ACTIONS(51), 1,
      anon_sym_RPAREN,
    STATE(4), 1,
      aux_sym_options_repeat1,
    ACTIONS(37), 3,
      sym_sameip,
      sym_ipv4_hdr,
      sym_ipv6_hdr,
    STATE(92), 19,
      sym__opts,
      sym_msg,
      sym_content,
      sym_sid,
      sym_rev,
      sym_gid,
      sym_classtype,
      sym_reference,
      sym_priority,
      sym_metadata,
      sym_target,
      sym_ttl,
      sym_ipopts,
      sym_ip_proto,
      sym_geoip,
      sym_id,
      sym_fragbits,
      sym_fragoffset,
      sym_tos,
  [174] = 22,
    ACTIONS(53), 1,
      anon_sym_RPAREN,
    ACTIONS(55), 1,
      anon_sym_msg_COLON,
    ACTIONS(58), 1,
      anon_sym_content_COLON,
    ACTIONS(61), 1,
      anon_sym_sid_COLON,
    ACTIONS(64), 1,
      anon_sym_rev_COLON,
    ACTIONS(67), 1,
      anon_sym_gid_COLON,
    ACTIONS(70), 1,
      anon_sym_classtype_COLON,
    ACTIONS(73), 1,
      anon_sym_reference_COLON,
    ACTIONS(76), 1,
      anon_sym_priority_COLON,
    ACTIONS(79), 1,
      anon_sym_metadata_COLON,
    ACTIONS(82), 1,
      anon_sym_target_COLON,
    ACTIONS(85), 1,
      anon_sym_ttl_COLON,
    ACTIONS(88), 1,
      anon_sym_ipopts_COLON,
    ACTIONS(94), 1,
      anon_sym_ip_proto_COLON,
    ACTIONS(97), 1,
      anon_sym_geoip_COLON,
    ACTIONS(100), 1,
      anon_sym_id_COLON,
    ACTIONS(103), 1,
      anon_sym_fragbits_COLON,
    ACTIONS(106), 1,
      anon_sym_fragoffset_COLON,
    ACTIONS(109), 1,
      anon_sym_tos_COLON,
    STATE(4), 1,
      aux_sym_options_repeat1,
    ACTIONS(91), 3,
      sym_sameip,
      sym_ipv4_hdr,
      sym_ipv6_hdr,
    STATE(92), 19,
      sym__opts,
      sym_msg,
      sym_content,
      sym_sid,
      sym_rev,
      sym_gid,
      sym_classtype,
      sym_reference,
      sym_priority,
      sym_metadata,
      sym_target,
      sym_ttl,
      sym_ipopts,
      sym_ip_proto,
      sym_geoip,
      sym_id,
      sym_fragbits,
      sym_fragoffset,
      sym_tos,
  [261] = 21,
    ACTIONS(13), 1,
      anon_sym_msg_COLON,
    ACTIONS(15), 1,
      anon_sym_content_COLON,
    ACTIONS(17), 1,
      anon_sym_sid_COLON,
    ACTIONS(19), 1,
      anon_sym_rev_COLON,
    ACTIONS(21), 1,
      anon_sym_gid_COLON,
    ACTIONS(23), 1,
      anon_sym_classtype_COLON,
    ACTIONS(25), 1,
      anon_sym_reference_COLON,
    ACTIONS(27), 1,
      anon_sym_priority_COLON,
    ACTIONS(29), 1,
      anon_sym_metadata_COLON,
    ACTIONS(31), 1,
      anon_sym_target_COLON,
    ACTIONS(33), 1,
      anon_sym_ttl_COLON,
    ACTIONS(35), 1,
      anon_sym_ipopts_COLON,
    ACTIONS(39), 1,
      anon_sym_ip_proto_COLON,
    ACTIONS(41), 1,
      anon_sym_geoip_COLON,
    ACTIONS(43), 1,
      anon_sym_id_COLON,
    ACTIONS(45), 1,
      anon_sym_fragbits_COLON,
    ACTIONS(47), 1,
      anon_sym_fragoffset_COLON,
    ACTIONS(49), 1,
      anon_sym_tos_COLON,
    ACTIONS(112), 1,
      anon_sym_RPAREN,
    ACTIONS(114), 3,
      sym_sameip,
      sym_ipv4_hdr,
      sym_ipv6_hdr,
    STATE(111), 19,
      sym__opts,
      sym_msg,
      sym_content,
      sym_sid,
      sym_rev,
      sym_gid,
      sym_classtype,
      sym_reference,
      sym_priority,
      sym_metadata,
      sym_target,
      sym_ttl,
      sym_ipopts,
      sym_ip_proto,
      sym_geoip,
      sym_id,
      sym_fragbits,
      sym_fragoffset,
      sym_tos,
  [345] = 4,
    ACTIONS(118), 1,
      anon_sym_http,
    STATE(14), 1,
      sym_protocol,
    STATE(76), 1,
      sym_header,
    ACTIONS(116), 26,
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
  [383] = 2,
    ACTIONS(122), 1,
      anon_sym_http,
    ACTIONS(120), 26,
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
  [415] = 1,
    ACTIONS(53), 22,
      anon_sym_RPAREN,
      anon_sym_msg_COLON,
      anon_sym_content_COLON,
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
  [440] = 6,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(9), 1,
      anon_sym_reject,
    ACTIONS(124), 1,
      ts_builtin_sym_end,
    STATE(6), 1,
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
  [467] = 6,
    ACTIONS(126), 1,
      ts_builtin_sym_end,
    ACTIONS(128), 1,
      anon_sym_POUND,
    ACTIONS(134), 1,
      anon_sym_reject,
    STATE(6), 1,
      sym_action,
    STATE(10), 4,
      sym__lines,
      sym_comment,
      sym__rule,
      aux_sym_source_file_repeat1,
    ACTIONS(131), 6,
      anon_sym_alert,
      anon_sym_pass,
      anon_sym_drop,
      anon_sym_rejectsrc,
      anon_sym_rejectdst,
      anon_sym_rejectboth,
  [494] = 8,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    ACTIONS(139), 1,
      anon_sym_RBRACK,
    ACTIONS(141), 1,
      sym_negation,
    ACTIONS(143), 1,
      anon_sym_DOLLAR,
    ACTIONS(145), 1,
      aux_sym_ipv4_token1,
    ACTIONS(147), 1,
      sym__ipv6_octet,
    STATE(18), 1,
      aux_sym_ipv6_repeat1,
    STATE(71), 6,
      sym__location,
      sym__standalone_location,
      sym_group_location,
      sym_variable,
      sym_ipv4,
      sym_ipv6,
  [524] = 8,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    ACTIONS(141), 1,
      sym_negation,
    ACTIONS(143), 1,
      anon_sym_DOLLAR,
    ACTIONS(145), 1,
      aux_sym_ipv4_token1,
    ACTIONS(147), 1,
      sym__ipv6_octet,
    ACTIONS(149), 1,
      anon_sym_RBRACK,
    STATE(18), 1,
      aux_sym_ipv6_repeat1,
    STATE(73), 6,
      sym__location,
      sym__standalone_location,
      sym_group_location,
      sym_variable,
      sym_ipv4,
      sym_ipv6,
  [554] = 7,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    ACTIONS(141), 1,
      sym_negation,
    ACTIONS(143), 1,
      anon_sym_DOLLAR,
    ACTIONS(145), 1,
      aux_sym_ipv4_token1,
    ACTIONS(147), 1,
      sym__ipv6_octet,
    STATE(18), 1,
      aux_sym_ipv6_repeat1,
    STATE(29), 6,
      sym__location,
      sym__standalone_location,
      sym_group_location,
      sym_variable,
      sym_ipv4,
      sym_ipv6,
  [581] = 7,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    ACTIONS(141), 1,
      sym_negation,
    ACTIONS(143), 1,
      anon_sym_DOLLAR,
    ACTIONS(145), 1,
      aux_sym_ipv4_token1,
    ACTIONS(147), 1,
      sym__ipv6_octet,
    STATE(18), 1,
      aux_sym_ipv6_repeat1,
    STATE(27), 6,
      sym__location,
      sym__standalone_location,
      sym_group_location,
      sym_variable,
      sym_ipv4,
      sym_ipv6,
  [608] = 7,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    ACTIONS(141), 1,
      sym_negation,
    ACTIONS(143), 1,
      anon_sym_DOLLAR,
    ACTIONS(145), 1,
      aux_sym_ipv4_token1,
    ACTIONS(147), 1,
      sym__ipv6_octet,
    STATE(18), 1,
      aux_sym_ipv6_repeat1,
    STATE(74), 6,
      sym__location,
      sym__standalone_location,
      sym_group_location,
      sym_variable,
      sym_ipv4,
      sym_ipv6,
  [635] = 1,
    ACTIONS(151), 10,
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
  [648] = 2,
    ACTIONS(155), 1,
      anon_sym_reject,
    ACTIONS(153), 8,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_alert,
      anon_sym_pass,
      anon_sym_drop,
      anon_sym_rejectsrc,
      anon_sym_rejectdst,
      anon_sym_rejectboth,
  [662] = 5,
    ACTIONS(159), 1,
      aux_sym_ipv4_token2,
    ACTIONS(161), 1,
      sym__ipv6_octet,
    ACTIONS(163), 1,
      aux_sym_port_token1,
    STATE(21), 1,
      aux_sym_ipv6_repeat1,
    ACTIONS(157), 5,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_negation,
      anon_sym_any,
  [682] = 2,
    ACTIONS(167), 1,
      anon_sym_reject,
    ACTIONS(165), 8,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_alert,
      anon_sym_pass,
      anon_sym_drop,
      anon_sym_rejectsrc,
      anon_sym_rejectdst,
      anon_sym_rejectboth,
  [696] = 2,
    ACTIONS(171), 1,
      anon_sym_reject,
    ACTIONS(169), 8,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_alert,
      anon_sym_pass,
      anon_sym_drop,
      anon_sym_rejectsrc,
      anon_sym_rejectdst,
      anon_sym_rejectboth,
  [710] = 4,
    ACTIONS(175), 1,
      sym__ipv6_octet,
    ACTIONS(178), 1,
      aux_sym_port_token1,
    STATE(21), 1,
      aux_sym_ipv6_repeat1,
    ACTIONS(173), 6,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_negation,
      aux_sym_ipv4_token2,
      anon_sym_any,
  [728] = 2,
    ACTIONS(182), 1,
      anon_sym_reject,
    ACTIONS(180), 8,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_alert,
      anon_sym_pass,
      anon_sym_drop,
      anon_sym_rejectsrc,
      anon_sym_rejectdst,
      anon_sym_rejectboth,
  [742] = 2,
    ACTIONS(186), 1,
      anon_sym_reject,
    ACTIONS(184), 8,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_alert,
      anon_sym_pass,
      anon_sym_drop,
      anon_sym_rejectsrc,
      anon_sym_rejectdst,
      anon_sym_rejectboth,
  [756] = 6,
    ACTIONS(188), 1,
      anon_sym_LBRACK,
    ACTIONS(190), 1,
      anon_sym_RBRACK,
    ACTIONS(192), 1,
      sym_negation,
    ACTIONS(194), 1,
      anon_sym_any,
    ACTIONS(196), 1,
      aux_sym_port_token1,
    STATE(56), 3,
      sym__port_choices,
      sym_port,
      sym_group_port,
  [777] = 6,
    ACTIONS(143), 1,
      anon_sym_DOLLAR,
    ACTIONS(145), 1,
      aux_sym_ipv4_token1,
    ACTIONS(147), 1,
      sym__ipv6_octet,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    STATE(18), 1,
      aux_sym_ipv6_repeat1,
    STATE(36), 3,
      sym_variable,
      sym_ipv4,
      sym_ipv6,
  [798] = 6,
    ACTIONS(188), 1,
      anon_sym_LBRACK,
    ACTIONS(192), 1,
      sym_negation,
    ACTIONS(196), 1,
      aux_sym_port_token1,
    ACTIONS(200), 1,
      anon_sym_RBRACK,
    ACTIONS(202), 1,
      anon_sym_any,
    STATE(70), 3,
      sym__port_choices,
      sym_port,
      sym_group_port,
  [819] = 5,
    ACTIONS(188), 1,
      anon_sym_LBRACK,
    ACTIONS(192), 1,
      sym_negation,
    ACTIONS(196), 1,
      aux_sym_port_token1,
    ACTIONS(204), 1,
      anon_sym_any,
    STATE(58), 3,
      sym__port_choices,
      sym_port,
      sym_group_port,
  [837] = 2,
    ACTIONS(208), 1,
      aux_sym_ipv4_token2,
    ACTIONS(206), 6,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_negation,
      anon_sym_any,
      aux_sym_port_token1,
  [849] = 5,
    ACTIONS(188), 1,
      anon_sym_LBRACK,
    ACTIONS(192), 1,
      sym_negation,
    ACTIONS(196), 1,
      aux_sym_port_token1,
    ACTIONS(210), 1,
      anon_sym_any,
    STATE(115), 3,
      sym__port_choices,
      sym_port,
      sym_group_port,
  [867] = 5,
    ACTIONS(188), 1,
      anon_sym_LBRACK,
    ACTIONS(192), 1,
      sym_negation,
    ACTIONS(196), 1,
      aux_sym_port_token1,
    ACTIONS(212), 1,
      anon_sym_any,
    STATE(77), 3,
      sym__port_choices,
      sym_port,
      sym_group_port,
  [885] = 2,
    ACTIONS(216), 1,
      sym_port_range,
    ACTIONS(214), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH_GT,
      anon_sym_LT_GT,
      anon_sym_LPAREN,
  [896] = 1,
    ACTIONS(218), 6,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_negation,
      anon_sym_any,
      aux_sym_port_token1,
  [905] = 1,
    ACTIONS(220), 6,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_negation,
      anon_sym_any,
      aux_sym_port_token1,
  [914] = 1,
    ACTIONS(222), 6,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_negation,
      anon_sym_any,
      aux_sym_port_token1,
  [923] = 1,
    ACTIONS(224), 6,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_negation,
      anon_sym_any,
      aux_sym_port_token1,
  [932] = 1,
    ACTIONS(226), 6,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_negation,
      anon_sym_any,
      aux_sym_port_token1,
  [941] = 1,
    ACTIONS(228), 6,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_negation,
      anon_sym_any,
      aux_sym_port_token1,
  [950] = 1,
    ACTIONS(230), 6,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_negation,
      anon_sym_any,
      aux_sym_port_token1,
  [959] = 1,
    ACTIONS(232), 6,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_negation,
      anon_sym_any,
      aux_sym_port_token1,
  [968] = 2,
    ACTIONS(236), 1,
      sym_port_range,
    ACTIONS(234), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH_GT,
      anon_sym_LT_GT,
      anon_sym_LPAREN,
  [979] = 2,
    ACTIONS(240), 1,
      sym__ipv6_octet,
    ACTIONS(238), 4,
      anon_sym_LBRACK,
      sym_negation,
      anon_sym_DOLLAR,
      aux_sym_ipv4_token1,
  [989] = 1,
    ACTIONS(214), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH_GT,
      anon_sym_LT_GT,
      anon_sym_LPAREN,
  [997] = 1,
    ACTIONS(242), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH_GT,
      anon_sym_LT_GT,
      anon_sym_LPAREN,
  [1005] = 1,
    ACTIONS(244), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH_GT,
      anon_sym_LT_GT,
      anon_sym_LPAREN,
  [1013] = 1,
    ACTIONS(246), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH_GT,
      anon_sym_LT_GT,
      anon_sym_LPAREN,
  [1021] = 1,
    ACTIONS(248), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH_GT,
      anon_sym_LT_GT,
      anon_sym_LPAREN,
  [1029] = 2,
    ACTIONS(252), 1,
      sym__ipv6_octet,
    ACTIONS(250), 4,
      anon_sym_LBRACK,
      sym_negation,
      anon_sym_DOLLAR,
      aux_sym_ipv4_token1,
  [1039] = 1,
    ACTIONS(254), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH_GT,
      anon_sym_LT_GT,
      anon_sym_LPAREN,
  [1047] = 4,
    ACTIONS(256), 1,
      aux_sym_text_token1,
    ACTIONS(258), 1,
      sym_digit,
    STATE(59), 1,
      aux_sym_text_repeat1,
    STATE(85), 1,
      sym_text,
  [1060] = 3,
    ACTIONS(260), 1,
      anon_sym_SEMI,
    ACTIONS(262), 1,
      aux_sym_text_token1,
    STATE(50), 1,
      aux_sym_text_repeat1,
  [1070] = 3,
    ACTIONS(256), 1,
      aux_sym_text_token1,
    STATE(59), 1,
      aux_sym_text_repeat1,
    STATE(99), 1,
      sym_text,
  [1080] = 3,
    ACTIONS(265), 1,
      anon_sym_DQUOTE,
    ACTIONS(267), 1,
      aux_sym_string_token1,
    STATE(65), 1,
      aux_sym_string_repeat1,
  [1090] = 3,
    ACTIONS(269), 1,
      anon_sym_COMMA,
    ACTIONS(271), 1,
      anon_sym_RBRACK,
    STATE(54), 1,
      aux_sym_group_port_repeat1,
  [1100] = 3,
    ACTIONS(273), 1,
      anon_sym_COMMA,
    ACTIONS(276), 1,
      anon_sym_RBRACK,
    STATE(54), 1,
      aux_sym_group_port_repeat1,
  [1110] = 3,
    ACTIONS(278), 1,
      anon_sym_DQUOTE,
    ACTIONS(280), 1,
      aux_sym_string_token1,
    STATE(55), 1,
      aux_sym_string_repeat1,
  [1120] = 3,
    ACTIONS(269), 1,
      anon_sym_COMMA,
    ACTIONS(283), 1,
      anon_sym_RBRACK,
    STATE(53), 1,
      aux_sym_group_port_repeat1,
  [1130] = 3,
    ACTIONS(269), 1,
      anon_sym_COMMA,
    ACTIONS(283), 1,
      anon_sym_RBRACK,
    STATE(54), 1,
      aux_sym_group_port_repeat1,
  [1140] = 2,
    STATE(13), 1,
      sym_direction,
    ACTIONS(285), 2,
      anon_sym_DASH_GT,
      anon_sym_LT_GT,
  [1148] = 3,
    ACTIONS(287), 1,
      anon_sym_SEMI,
    ACTIONS(289), 1,
      aux_sym_text_token1,
    STATE(50), 1,
      aux_sym_text_repeat1,
  [1158] = 3,
    ACTIONS(256), 1,
      aux_sym_text_token1,
    STATE(59), 1,
      aux_sym_text_repeat1,
    STATE(82), 1,
      sym_text,
  [1168] = 3,
    ACTIONS(291), 1,
      anon_sym_COMMA,
    ACTIONS(293), 1,
      anon_sym_RBRACK,
    STATE(62), 1,
      aux_sym_group_location_repeat1,
  [1178] = 3,
    ACTIONS(295), 1,
      anon_sym_COMMA,
    ACTIONS(298), 1,
      anon_sym_RBRACK,
    STATE(62), 1,
      aux_sym_group_location_repeat1,
  [1188] = 3,
    ACTIONS(256), 1,
      aux_sym_text_token1,
    STATE(59), 1,
      aux_sym_text_repeat1,
    STATE(96), 1,
      sym_text,
  [1198] = 3,
    ACTIONS(256), 1,
      aux_sym_text_token1,
    STATE(59), 1,
      aux_sym_text_repeat1,
    STATE(93), 1,
      sym_text,
  [1208] = 3,
    ACTIONS(300), 1,
      anon_sym_DQUOTE,
    ACTIONS(302), 1,
      aux_sym_string_token1,
    STATE(55), 1,
      aux_sym_string_repeat1,
  [1218] = 3,
    ACTIONS(256), 1,
      aux_sym_text_token1,
    STATE(59), 1,
      aux_sym_text_repeat1,
    STATE(83), 1,
      sym_text,
  [1228] = 3,
    ACTIONS(256), 1,
      aux_sym_text_token1,
    STATE(59), 1,
      aux_sym_text_repeat1,
    STATE(108), 1,
      sym_text,
  [1238] = 3,
    ACTIONS(256), 1,
      aux_sym_text_token1,
    STATE(59), 1,
      aux_sym_text_repeat1,
    STATE(109), 1,
      sym_text,
  [1248] = 3,
    ACTIONS(304), 1,
      sym_negation,
    ACTIONS(306), 1,
      anon_sym_x,
    ACTIONS(308), 1,
      sym_digit,
  [1258] = 3,
    ACTIONS(190), 1,
      anon_sym_RBRACK,
    ACTIONS(269), 1,
      anon_sym_COMMA,
    STATE(57), 1,
      aux_sym_group_port_repeat1,
  [1268] = 3,
    ACTIONS(291), 1,
      anon_sym_COMMA,
    ACTIONS(310), 1,
      anon_sym_RBRACK,
    STATE(61), 1,
      aux_sym_group_location_repeat1,
  [1278] = 3,
    ACTIONS(291), 1,
      anon_sym_COMMA,
    ACTIONS(310), 1,
      anon_sym_RBRACK,
    STATE(62), 1,
      aux_sym_group_location_repeat1,
  [1288] = 3,
    ACTIONS(139), 1,
      anon_sym_RBRACK,
    ACTIONS(291), 1,
      anon_sym_COMMA,
    STATE(72), 1,
      aux_sym_group_location_repeat1,
  [1298] = 1,
    ACTIONS(298), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1303] = 2,
    ACTIONS(312), 1,
      anon_sym_LBRACK,
    ACTIONS(314), 1,
      aux_sym_port_token1,
  [1310] = 2,
    ACTIONS(316), 1,
      anon_sym_LPAREN,
    STATE(23), 1,
      sym_options,
  [1317] = 1,
    ACTIONS(276), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1322] = 2,
    ACTIONS(318), 1,
      anon_sym_x,
    ACTIONS(320), 1,
      sym_digit,
  [1329] = 2,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    STATE(114), 1,
      sym_string,
  [1336] = 2,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    STATE(113), 1,
      sym_string,
  [1343] = 1,
    ACTIONS(324), 1,
      sym_digit,
  [1347] = 1,
    ACTIONS(326), 1,
      anon_sym_SEMI,
  [1351] = 1,
    ACTIONS(328), 1,
      anon_sym_SEMI,
  [1355] = 1,
    ACTIONS(330), 1,
      aux_sym_comment_token1,
  [1359] = 1,
    ACTIONS(332), 1,
      anon_sym_SEMI,
  [1363] = 1,
    ACTIONS(334), 1,
      anon_sym_SEMI,
  [1367] = 1,
    ACTIONS(336), 1,
      anon_sym_SEMI,
  [1371] = 1,
    ACTIONS(338), 1,
      sym_digit,
  [1375] = 1,
    ACTIONS(340), 1,
      sym_digit,
  [1379] = 1,
    ACTIONS(342), 1,
      anon_sym_SEMI,
  [1383] = 1,
    ACTIONS(344), 1,
      anon_sym_SEMI,
  [1387] = 1,
    ACTIONS(346), 1,
      anon_sym_SEMI,
  [1391] = 1,
    ACTIONS(348), 1,
      anon_sym_SEMI,
  [1395] = 1,
    ACTIONS(350), 1,
      anon_sym_SEMI,
  [1399] = 1,
    ACTIONS(352), 1,
      sym_digit,
  [1403] = 1,
    ACTIONS(354), 1,
      anon_sym_SEMI,
  [1407] = 1,
    ACTIONS(356), 1,
      anon_sym_SEMI,
  [1411] = 1,
    ACTIONS(358), 1,
      anon_sym_SEMI,
  [1415] = 1,
    ACTIONS(360), 1,
      anon_sym_SEMI,
  [1419] = 1,
    ACTIONS(362), 1,
      anon_sym_SEMI,
  [1423] = 1,
    ACTIONS(364), 1,
      anon_sym_SEMI,
  [1427] = 1,
    ACTIONS(366), 1,
      sym_digit,
  [1431] = 1,
    ACTIONS(368), 1,
      sym_digit,
  [1435] = 1,
    ACTIONS(370), 1,
      anon_sym_SEMI,
  [1439] = 1,
    ACTIONS(372), 1,
      anon_sym_SEMI,
  [1443] = 1,
    ACTIONS(374), 1,
      anon_sym_SEMI,
  [1447] = 1,
    ACTIONS(376), 1,
      sym_digit,
  [1451] = 1,
    ACTIONS(378), 1,
      anon_sym_SEMI,
  [1455] = 1,
    ACTIONS(380), 1,
      anon_sym_SEMI,
  [1459] = 1,
    ACTIONS(382), 1,
      aux_sym_variable_token1,
  [1463] = 1,
    ACTIONS(384), 1,
      anon_sym_SEMI,
  [1467] = 1,
    ACTIONS(320), 1,
      sym_digit,
  [1471] = 1,
    ACTIONS(386), 1,
      anon_sym_SEMI,
  [1475] = 1,
    ACTIONS(388), 1,
      anon_sym_SEMI,
  [1479] = 1,
    ACTIONS(390), 1,
      anon_sym_LPAREN,
  [1483] = 1,
    ACTIONS(392), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 87,
  [SMALL_STATE(4)] = 174,
  [SMALL_STATE(5)] = 261,
  [SMALL_STATE(6)] = 345,
  [SMALL_STATE(7)] = 383,
  [SMALL_STATE(8)] = 415,
  [SMALL_STATE(9)] = 440,
  [SMALL_STATE(10)] = 467,
  [SMALL_STATE(11)] = 494,
  [SMALL_STATE(12)] = 524,
  [SMALL_STATE(13)] = 554,
  [SMALL_STATE(14)] = 581,
  [SMALL_STATE(15)] = 608,
  [SMALL_STATE(16)] = 635,
  [SMALL_STATE(17)] = 648,
  [SMALL_STATE(18)] = 662,
  [SMALL_STATE(19)] = 682,
  [SMALL_STATE(20)] = 696,
  [SMALL_STATE(21)] = 710,
  [SMALL_STATE(22)] = 728,
  [SMALL_STATE(23)] = 742,
  [SMALL_STATE(24)] = 756,
  [SMALL_STATE(25)] = 777,
  [SMALL_STATE(26)] = 798,
  [SMALL_STATE(27)] = 819,
  [SMALL_STATE(28)] = 837,
  [SMALL_STATE(29)] = 849,
  [SMALL_STATE(30)] = 867,
  [SMALL_STATE(31)] = 885,
  [SMALL_STATE(32)] = 896,
  [SMALL_STATE(33)] = 905,
  [SMALL_STATE(34)] = 914,
  [SMALL_STATE(35)] = 923,
  [SMALL_STATE(36)] = 932,
  [SMALL_STATE(37)] = 941,
  [SMALL_STATE(38)] = 950,
  [SMALL_STATE(39)] = 959,
  [SMALL_STATE(40)] = 968,
  [SMALL_STATE(41)] = 979,
  [SMALL_STATE(42)] = 989,
  [SMALL_STATE(43)] = 997,
  [SMALL_STATE(44)] = 1005,
  [SMALL_STATE(45)] = 1013,
  [SMALL_STATE(46)] = 1021,
  [SMALL_STATE(47)] = 1029,
  [SMALL_STATE(48)] = 1039,
  [SMALL_STATE(49)] = 1047,
  [SMALL_STATE(50)] = 1060,
  [SMALL_STATE(51)] = 1070,
  [SMALL_STATE(52)] = 1080,
  [SMALL_STATE(53)] = 1090,
  [SMALL_STATE(54)] = 1100,
  [SMALL_STATE(55)] = 1110,
  [SMALL_STATE(56)] = 1120,
  [SMALL_STATE(57)] = 1130,
  [SMALL_STATE(58)] = 1140,
  [SMALL_STATE(59)] = 1148,
  [SMALL_STATE(60)] = 1158,
  [SMALL_STATE(61)] = 1168,
  [SMALL_STATE(62)] = 1178,
  [SMALL_STATE(63)] = 1188,
  [SMALL_STATE(64)] = 1198,
  [SMALL_STATE(65)] = 1208,
  [SMALL_STATE(66)] = 1218,
  [SMALL_STATE(67)] = 1228,
  [SMALL_STATE(68)] = 1238,
  [SMALL_STATE(69)] = 1248,
  [SMALL_STATE(70)] = 1258,
  [SMALL_STATE(71)] = 1268,
  [SMALL_STATE(72)] = 1278,
  [SMALL_STATE(73)] = 1288,
  [SMALL_STATE(74)] = 1298,
  [SMALL_STATE(75)] = 1303,
  [SMALL_STATE(76)] = 1310,
  [SMALL_STATE(77)] = 1317,
  [SMALL_STATE(78)] = 1322,
  [SMALL_STATE(79)] = 1329,
  [SMALL_STATE(80)] = 1336,
  [SMALL_STATE(81)] = 1343,
  [SMALL_STATE(82)] = 1347,
  [SMALL_STATE(83)] = 1351,
  [SMALL_STATE(84)] = 1355,
  [SMALL_STATE(85)] = 1359,
  [SMALL_STATE(86)] = 1363,
  [SMALL_STATE(87)] = 1367,
  [SMALL_STATE(88)] = 1371,
  [SMALL_STATE(89)] = 1375,
  [SMALL_STATE(90)] = 1379,
  [SMALL_STATE(91)] = 1383,
  [SMALL_STATE(92)] = 1387,
  [SMALL_STATE(93)] = 1391,
  [SMALL_STATE(94)] = 1395,
  [SMALL_STATE(95)] = 1399,
  [SMALL_STATE(96)] = 1403,
  [SMALL_STATE(97)] = 1407,
  [SMALL_STATE(98)] = 1411,
  [SMALL_STATE(99)] = 1415,
  [SMALL_STATE(100)] = 1419,
  [SMALL_STATE(101)] = 1423,
  [SMALL_STATE(102)] = 1427,
  [SMALL_STATE(103)] = 1431,
  [SMALL_STATE(104)] = 1435,
  [SMALL_STATE(105)] = 1439,
  [SMALL_STATE(106)] = 1443,
  [SMALL_STATE(107)] = 1447,
  [SMALL_STATE(108)] = 1451,
  [SMALL_STATE(109)] = 1455,
  [SMALL_STATE(110)] = 1459,
  [SMALL_STATE(111)] = 1463,
  [SMALL_STATE(112)] = 1467,
  [SMALL_STATE(113)] = 1471,
  [SMALL_STATE(114)] = 1475,
  [SMALL_STATE(115)] = 1479,
  [SMALL_STATE(116)] = 1483,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(79),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(80),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(107),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(103),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(102),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(51),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(60),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(95),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(63),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(64),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(88),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(16),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(92),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(49),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(66),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(81),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(67),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(68),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(69),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 1),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 1),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(84),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ipv6, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ipv6, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options, 2),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_options, 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options, 5),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_options, 5),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ipv6_repeat1, 2),
  [175] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ipv6_repeat1, 2), SHIFT_REPEAT(21),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ipv6_repeat1, 2),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options, 4),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_options, 4),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rule, 3),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__rule, 3),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ipv4, 1),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port, 2),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_location, 4),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ipv6, 2),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_location, 3),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_location, 2),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__standalone_location, 2),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 2),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ipv4, 2),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_location, 5),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port, 1),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction, 1),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_direction, 1),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_port, 5),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_port, 2),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_port, 3),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port, 3),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_protocol, 1),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_protocol, 1),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_port, 4),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(50),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_port_repeat1, 2), SHIFT_REPEAT(30),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_port_repeat1, 2),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(55),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 1),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [295] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_location_repeat1, 2), SHIFT_REPEAT(15),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_location_repeat1, 2),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 2),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geoip, 2),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ip_proto, 2),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ipopts, 2),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tos, 3),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ttl, 2),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 2),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tos, 2),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata, 2),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_priority, 2),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 2),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classtype, 2),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gid, 2),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rev, 2),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sid, 2),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tos, 4),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragbits, 2),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragoffset, 2),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content, 2),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_msg, 2),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 6),
  [392] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
