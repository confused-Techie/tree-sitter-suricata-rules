#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 90
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 94
#define ALIAS_COUNT 2
#define TOKEN_COUNT 63
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 4

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
  sym_colon = 48,
  anon_sym_DASH_GT = 49,
  anon_sym_LT_GT = 50,
  anon_sym_LPAREN = 51,
  anon_sym_SEMI = 52,
  anon_sym_RPAREN = 53,
  anon_sym_GT = 54,
  anon_sym_LT = 55,
  aux_sym_digit_token1 = 56,
  aux_sym_text_token1 = 57,
  anon_sym_DQUOTE = 58,
  aux_sym_string_token1 = 59,
  sym_decimal = 60,
  anon_sym_x = 61,
  aux_sym_hexidecimal_token1 = 62,
  sym_source_file = 63,
  sym__lines = 64,
  sym_comment = 65,
  sym__rule = 66,
  sym_action = 67,
  sym_header = 68,
  sym_protocol = 69,
  sym__location = 70,
  sym__standalone_location = 71,
  sym_group_location = 72,
  sym_variable = 73,
  sym_ipv4 = 74,
  sym_ipv6 = 75,
  sym__port_choices = 76,
  sym_port = 77,
  sym_group_port = 78,
  sym_direction = 79,
  sym_options = 80,
  sym__opt = 81,
  sym_digit = 82,
  sym_text = 83,
  sym_string = 84,
  sym_hexidecimal = 85,
  sym_value = 86,
  aux_sym_source_file_repeat1 = 87,
  aux_sym_group_location_repeat1 = 88,
  aux_sym_ipv6_repeat1 = 89,
  aux_sym_group_port_repeat1 = 90,
  aux_sym_options_repeat1 = 91,
  aux_sym_text_repeat1 = 92,
  aux_sym_string_repeat1 = 93,
  alias_sym_other = 94,
  alias_sym_separator = 95,
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
  [sym_colon] = "port_range",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_LT_GT] = "<>",
  [anon_sym_LPAREN] = "(",
  [anon_sym_SEMI] = ";",
  [anon_sym_RPAREN] = ")",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [aux_sym_digit_token1] = "digit_token1",
  [aux_sym_text_token1] = "text_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [sym_decimal] = "decimal",
  [anon_sym_x] = "x",
  [aux_sym_hexidecimal_token1] = "hexidecimal_token1",
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
  [sym__opt] = "_opt",
  [sym_digit] = "digit",
  [sym_text] = "keyword",
  [sym_string] = "string",
  [sym_hexidecimal] = "hexidecimal",
  [sym_value] = "value",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_group_location_repeat1] = "group_location_repeat1",
  [aux_sym_ipv6_repeat1] = "ipv6_repeat1",
  [aux_sym_group_port_repeat1] = "group_port_repeat1",
  [aux_sym_options_repeat1] = "options_repeat1",
  [aux_sym_text_repeat1] = "text_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [alias_sym_other] = "other",
  [alias_sym_separator] = "separator",
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
  [sym_colon] = sym_colon,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_LT_GT] = anon_sym_LT_GT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT] = anon_sym_LT,
  [aux_sym_digit_token1] = aux_sym_digit_token1,
  [aux_sym_text_token1] = aux_sym_text_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [sym_decimal] = sym_decimal,
  [anon_sym_x] = anon_sym_x,
  [aux_sym_hexidecimal_token1] = aux_sym_hexidecimal_token1,
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
  [sym__opt] = sym__opt,
  [sym_digit] = sym_digit,
  [sym_text] = sym_text,
  [sym_string] = sym_string,
  [sym_hexidecimal] = sym_hexidecimal,
  [sym_value] = sym_value,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_group_location_repeat1] = aux_sym_group_location_repeat1,
  [aux_sym_ipv6_repeat1] = aux_sym_ipv6_repeat1,
  [aux_sym_group_port_repeat1] = aux_sym_group_port_repeat1,
  [aux_sym_options_repeat1] = aux_sym_options_repeat1,
  [aux_sym_text_repeat1] = aux_sym_text_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [alias_sym_other] = alias_sym_other,
  [alias_sym_separator] = alias_sym_separator,
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
  [sym_colon] = {
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
  [aux_sym_text_token1] = {
    .visible = false,
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
  [sym_decimal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_x] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_hexidecimal_token1] = {
    .visible = false,
    .named = false,
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
  [sym__opt] = {
    .visible = false,
    .named = true,
  },
  [sym_digit] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_hexidecimal] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
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
  [aux_sym_text_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_other] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_separator] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_other,
  },
  [2] = {
    [1] = alias_sym_separator,
  },
  [3] = {
    [1] = alias_sym_other,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_text, 2,
    sym_text,
    alias_sym_other,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(96);
      if (lookahead == '!') ADVANCE(137);
      if (lookahead == '"') ADVANCE(185);
      if (lookahead == '#') ADVANCE(97);
      if (lookahead == '$') ADVANCE(138);
      if (lookahead == '(') ADVANCE(170);
      if (lookahead == ')') ADVANCE(172);
      if (lookahead == ',') ADVANCE(135);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '/') ADVANCE(90);
      if (lookahead == ':') ADVANCE(167);
      if (lookahead == ';') ADVANCE(171);
      if (lookahead == '<') ADVANCE(176);
      if (lookahead == '>') ADVANCE(173);
      if (lookahead == '[') ADVANCE(134);
      if (lookahead == ']') ADVANCE(136);
      if (lookahead == 'a') ADVANCE(150);
      if (lookahead == 'd') ADVANCE(148);
      if (lookahead == 'e') ADVANCE(152);
      if (lookahead == 'f') ADVANCE(154);
      if (lookahead == 'h') ADVANCE(81);
      if (lookahead == 'i') ADVANCE(23);
      if (lookahead == 'k') ADVANCE(67);
      if (lookahead == 'm') ADVANCE(47);
      if (lookahead == 'n') ADVANCE(37);
      if (lookahead == 'p') ADVANCE(17);
      if (lookahead == 'r') ADVANCE(30);
      if (lookahead == 's') ADVANCE(40);
      if (lookahead == 't') ADVANCE(27);
      if (lookahead == 'u') ADVANCE(32);
      if (lookahead == 'x') ADVANCE(189);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'b' ||
          lookahead == 'c') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '!') ADVANCE(137);
      if (lookahead == '"') ADVANCE(185);
      if (lookahead == '<') ADVANCE(177);
      if (lookahead == '>') ADVANCE(174);
      if (lookahead == 'x') ADVANCE(190);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(184);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == ')') ADVANCE(172);
      if (lookahead == ':') ADVANCE(167);
      if (lookahead == ';') ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(') ADVANCE(184);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '"') ADVANCE(185);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(186);
      if (lookahead != 0) ADVANCE(187);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(137);
      if (lookahead == '"') ADVANCE(185);
      if (lookahead == '<') ADVANCE(175);
      if (lookahead == '>') ADVANCE(173);
      if (lookahead == 'x') ADVANCE(189);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(178);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(137);
      if (lookahead == '$') ADVANCE(138);
      if (lookahead == '[') ADVANCE(134);
      if (lookahead == ']') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(160);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(137);
      if (lookahead == ',') ADVANCE(135);
      if (lookahead == '/') ADVANCE(90);
      if (lookahead == '[') ADVANCE(134);
      if (lookahead == ']') ADVANCE(136);
      if (lookahead == 'a') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(160);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(185);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == ')') ADVANCE(172);
      if (lookahead == ':') ADVANCE(167);
      if (lookahead == ';') ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '2') ADVANCE(124);
      END_STATE();
    case 13:
      if (lookahead == '3') ADVANCE(121);
      END_STATE();
    case 14:
      if (lookahead == '5') ADVANCE(125);
      END_STATE();
    case 15:
      if (lookahead == '>') ADVANCE(168);
      END_STATE();
    case 16:
      if (lookahead == '>') ADVANCE(169);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(75);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(62);
      END_STATE();
    case 19:
      if (lookahead == 'b') ADVANCE(14);
      END_STATE();
    case 20:
      if (lookahead == 'b') ADVANCE(128);
      END_STATE();
    case 21:
      if (lookahead == 'b') ADVANCE(114);
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 22:
      if (lookahead == 'b') ADVANCE(85);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(44);
      if (lookahead == 'k') ADVANCE(33);
      if (lookahead == 'm') ADVANCE(18);
      if (lookahead == 'p') ADVANCE(110);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(116);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(104);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(79);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(55);
      if (lookahead == 'f') ADVANCE(84);
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(57);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(36);
      if (lookahead == 'h') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(50);
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(53);
      if (lookahead == 'e') ADVANCE(42);
      if (lookahead == 'f') ADVANCE(20);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(22);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(56);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 37:
      if (lookahead == 'f') ADVANCE(71);
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 38:
      if (lookahead == 'h') ADVANCE(117);
      END_STATE();
    case 39:
      if (lookahead == 'h') ADVANCE(106);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(54);
      if (lookahead == 'm') ADVANCE(21);
      if (lookahead == 'n') ADVANCE(45);
      if (lookahead == 's') ADVANCE(38);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 42:
      if (lookahead == 'j') ADVANCE(35);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(34);
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 44:
      if (lookahead == 'm') ADVANCE(61);
      END_STATE();
    case 45:
      if (lookahead == 'm') ADVANCE(64);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 48:
      if (lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 50:
      if (lookahead == 'p') ADVANCE(13);
      if (lookahead == 's') ADVANCE(115);
      END_STATE();
    case 51:
      if (lookahead == 'p') ADVANCE(112);
      END_STATE();
    case 52:
      if (lookahead == 'p') ADVANCE(126);
      END_STATE();
    case 53:
      if (lookahead == 'p') ADVANCE(129);
      END_STATE();
    case 54:
      if (lookahead == 'p') ADVANCE(132);
      END_STATE();
    case 55:
      if (lookahead == 'p') ADVANCE(107);
      END_STATE();
    case 56:
      if (lookahead == 'p') ADVANCE(108);
      END_STATE();
    case 57:
      if (lookahead == 'p') ADVANCE(127);
      END_STATE();
    case 58:
      if (lookahead == 'p') ADVANCE(102);
      END_STATE();
    case 59:
      if (lookahead == 'p') ADVANCE(122);
      END_STATE();
    case 60:
      if (lookahead == 'p') ADVANCE(111);
      END_STATE();
    case 61:
      if (lookahead == 'p') ADVANCE(109);
      END_STATE();
    case 62:
      if (lookahead == 'p') ADVANCE(119);
      END_STATE();
    case 63:
      if (lookahead == 'p') ADVANCE(118);
      END_STATE();
    case 64:
      if (lookahead == 'p') ADVANCE(130);
      END_STATE();
    case 65:
      if (lookahead == 'p') ADVANCE(131);
      END_STATE();
    case 66:
      if (lookahead == 'p') ADVANCE(24);
      END_STATE();
    case 67:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 68:
      if (lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 69:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 70:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 71:
      if (lookahead == 's') ADVANCE(123);
      END_STATE();
    case 72:
      if (lookahead == 's') ADVANCE(113);
      END_STATE();
    case 73:
      if (lookahead == 's') ADVANCE(101);
      END_STATE();
    case 74:
      if (lookahead == 's') ADVANCE(120);
      END_STATE();
    case 75:
      if (lookahead == 's') ADVANCE(73);
      END_STATE();
    case 76:
      if (lookahead == 's') ADVANCE(80);
      END_STATE();
    case 77:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 78:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 79:
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 80:
      if (lookahead == 't') ADVANCE(105);
      END_STATE();
    case 81:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 82:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 83:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 84:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 85:
      if (lookahead == 'u') ADVANCE(74);
      END_STATE();
    case 86:
      if (lookahead == 'v') ADVANCE(12);
      END_STATE();
    case 87:
      if (lookahead == 'y') ADVANCE(162);
      END_STATE();
    case 88:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(88)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(194);
      END_STATE();
    case 89:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(89)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      END_STATE();
    case 90:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      END_STATE();
    case 91:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 92:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      END_STATE();
    case 93:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      END_STATE();
    case 94:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 95:
      if (eof) ADVANCE(96);
      if (lookahead == '!') ADVANCE(137);
      if (lookahead == '#') ADVANCE(97);
      if (lookahead == '(') ADVANCE(170);
      if (lookahead == ',') ADVANCE(135);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '/') ADVANCE(90);
      if (lookahead == ':') ADVANCE(167);
      if (lookahead == '<') ADVANCE(16);
      if (lookahead == '[') ADVANCE(134);
      if (lookahead == ']') ADVANCE(136);
      if (lookahead == 'a') ADVANCE(43);
      if (lookahead == 'd') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(46);
      if (lookahead == 'f') ADVANCE(77);
      if (lookahead == 'h') ADVANCE(81);
      if (lookahead == 'i') ADVANCE(23);
      if (lookahead == 'k') ADVANCE(67);
      if (lookahead == 'm') ADVANCE(47);
      if (lookahead == 'n') ADVANCE(37);
      if (lookahead == 'p') ADVANCE(17);
      if (lookahead == 'r') ADVANCE(30);
      if (lookahead == 's') ADVANCE(40);
      if (lookahead == 't') ADVANCE(27);
      if (lookahead == 'u') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(95)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(99);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_alert);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_pass);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_drop);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_reject);
      if (lookahead == 'b') ADVANCE(48);
      if (lookahead == 'd') ADVANCE(76);
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_rejectsrc);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_rejectdst);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_rejectboth);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_tcp);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_udp);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_icmp);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_ip);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_http);
      if (lookahead == '2') ADVANCE(133);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_ftp);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_tls);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_smb);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_dns);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_dcerpc);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_ssh);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_smtp);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_imap);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_modbus);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_dnp3);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_enip);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_nfs);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_ikev2);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_krb5);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_ntp);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_dhcp);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_rfb);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_rdp);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_snmp);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_tftp);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_sip);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_http2);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_negation);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_ipv4_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_ipv4_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__ipv6_octet);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == ':') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(147);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == ':') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(158);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == ':') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(159);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == ':') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(161);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(161);
      if (lookahead == 'c') ADVANCE(149);
      if (lookahead == 'h') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(50);
      if (lookahead == 'r') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(158);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(161);
      if (lookahead == 'e') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(159);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(161);
      if (lookahead == 'l') ADVANCE(34);
      if (lookahead == 'n') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(158);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(161);
      if (lookahead == 'n') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(158);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(161);
      if (lookahead == 'n') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(158);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(161);
      if (lookahead == 'r') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(147);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(161);
      if (lookahead == 't') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(158);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(147);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(158);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(159);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(159);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(147);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(158);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(142);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_any);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_port_token1);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_port_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_port_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_port_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_colon);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(184);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '>') ADVANCE(169);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(184);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_digit_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(93);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_digit_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '<') ADVANCE(177);
      if (lookahead == '>') ADVANCE(174);
      if (lookahead == 'x') ADVANCE(190);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(184);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(184);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ':' ||
          lookahead == ';') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(183);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(184);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(184);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(187);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(187);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_decimal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(184);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_hexidecimal_token1);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_hexidecimal_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(191);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_hexidecimal_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(192);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_hexidecimal_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(193);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 95},
  [2] = {.lex_state = 95},
  [3] = {.lex_state = 95},
  [4] = {.lex_state = 95},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 95},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 95},
  [14] = {.lex_state = 95},
  [15] = {.lex_state = 6},
  [16] = {.lex_state = 95},
  [17] = {.lex_state = 95},
  [18] = {.lex_state = 95},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 95},
  [21] = {.lex_state = 95},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 95},
  [24] = {.lex_state = 95},
  [25] = {.lex_state = 95},
  [26] = {.lex_state = 95},
  [27] = {.lex_state = 95},
  [28] = {.lex_state = 95},
  [29] = {.lex_state = 95},
  [30] = {.lex_state = 95},
  [31] = {.lex_state = 95},
  [32] = {.lex_state = 95},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 95},
  [35] = {.lex_state = 95},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 95},
  [39] = {.lex_state = 95},
  [40] = {.lex_state = 95},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 95},
  [44] = {.lex_state = 95},
  [45] = {.lex_state = 95},
  [46] = {.lex_state = 95},
  [47] = {.lex_state = 5},
  [48] = {.lex_state = 95},
  [49] = {.lex_state = 95},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 95},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 95},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 98},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 88},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 139},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 89},
  [89] = {.lex_state = 0},
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
    [sym_colon] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_LT_GT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_x] = ACTIONS(1),
    [aux_sym_hexidecimal_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(89),
    [sym__lines] = STATE(4),
    [sym_comment] = STATE(4),
    [sym__rule] = STATE(4),
    [sym_action] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(4),
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
  [0] = 4,
    ACTIONS(13), 1,
      anon_sym_http,
    STATE(12), 1,
      sym_protocol,
    STATE(68), 1,
      sym_header,
    ACTIONS(11), 26,
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
    ACTIONS(17), 1,
      anon_sym_http,
    ACTIONS(15), 26,
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
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(9), 1,
      anon_sym_reject,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_action,
    STATE(6), 4,
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
  [97] = 11,
    ACTIONS(21), 1,
      sym_negation,
    ACTIONS(25), 1,
      aux_sym_digit_token1,
    ACTIONS(27), 1,
      aux_sym_text_token1,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      sym_decimal,
    ACTIONS(33), 1,
      anon_sym_x,
    STATE(51), 1,
      aux_sym_text_repeat1,
    STATE(82), 1,
      sym_text,
    STATE(83), 1,
      sym_value,
    ACTIONS(23), 2,
      anon_sym_GT,
      anon_sym_LT,
    STATE(84), 3,
      sym_digit,
      sym_string,
      sym_hexidecimal,
  [134] = 6,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(37), 1,
      anon_sym_POUND,
    ACTIONS(43), 1,
      anon_sym_reject,
    STATE(2), 1,
      sym_action,
    STATE(6), 4,
      sym__lines,
      sym_comment,
      sym__rule,
      aux_sym_source_file_repeat1,
    ACTIONS(40), 6,
      anon_sym_alert,
      anon_sym_pass,
      anon_sym_drop,
      anon_sym_rejectsrc,
      anon_sym_rejectdst,
      anon_sym_rejectboth,
  [161] = 8,
    ACTIONS(46), 1,
      anon_sym_LBRACK,
    ACTIONS(48), 1,
      anon_sym_RBRACK,
    ACTIONS(50), 1,
      sym_negation,
    ACTIONS(52), 1,
      anon_sym_DOLLAR,
    ACTIONS(54), 1,
      aux_sym_ipv4_token1,
    ACTIONS(56), 1,
      sym__ipv6_octet,
    STATE(19), 1,
      aux_sym_ipv6_repeat1,
    STATE(59), 6,
      sym__location,
      sym__standalone_location,
      sym_group_location,
      sym_variable,
      sym_ipv4,
      sym_ipv6,
  [191] = 8,
    ACTIONS(46), 1,
      anon_sym_LBRACK,
    ACTIONS(50), 1,
      sym_negation,
    ACTIONS(52), 1,
      anon_sym_DOLLAR,
    ACTIONS(54), 1,
      aux_sym_ipv4_token1,
    ACTIONS(56), 1,
      sym__ipv6_octet,
    ACTIONS(58), 1,
      anon_sym_RBRACK,
    STATE(19), 1,
      aux_sym_ipv6_repeat1,
    STATE(52), 6,
      sym__location,
      sym__standalone_location,
      sym_group_location,
      sym_variable,
      sym_ipv4,
      sym_ipv6,
  [221] = 7,
    ACTIONS(46), 1,
      anon_sym_LBRACK,
    ACTIONS(50), 1,
      sym_negation,
    ACTIONS(52), 1,
      anon_sym_DOLLAR,
    ACTIONS(54), 1,
      aux_sym_ipv4_token1,
    ACTIONS(56), 1,
      sym__ipv6_octet,
    STATE(19), 1,
      aux_sym_ipv6_repeat1,
    STATE(25), 6,
      sym__location,
      sym__standalone_location,
      sym_group_location,
      sym_variable,
      sym_ipv4,
      sym_ipv6,
  [248] = 9,
    ACTIONS(25), 1,
      aux_sym_digit_token1,
    ACTIONS(27), 1,
      aux_sym_text_token1,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_x,
    ACTIONS(60), 1,
      sym_decimal,
    STATE(51), 1,
      aux_sym_text_repeat1,
    STATE(76), 1,
      sym_text,
    ACTIONS(23), 2,
      anon_sym_GT,
      anon_sym_LT,
    STATE(75), 3,
      sym_digit,
      sym_string,
      sym_hexidecimal,
  [279] = 7,
    ACTIONS(46), 1,
      anon_sym_LBRACK,
    ACTIONS(50), 1,
      sym_negation,
    ACTIONS(52), 1,
      anon_sym_DOLLAR,
    ACTIONS(54), 1,
      aux_sym_ipv4_token1,
    ACTIONS(56), 1,
      sym__ipv6_octet,
    STATE(19), 1,
      aux_sym_ipv6_repeat1,
    STATE(66), 6,
      sym__location,
      sym__standalone_location,
      sym_group_location,
      sym_variable,
      sym_ipv4,
      sym_ipv6,
  [306] = 7,
    ACTIONS(46), 1,
      anon_sym_LBRACK,
    ACTIONS(50), 1,
      sym_negation,
    ACTIONS(52), 1,
      anon_sym_DOLLAR,
    ACTIONS(54), 1,
      aux_sym_ipv4_token1,
    ACTIONS(56), 1,
      sym__ipv6_octet,
    STATE(19), 1,
      aux_sym_ipv6_repeat1,
    STATE(24), 6,
      sym__location,
      sym__standalone_location,
      sym_group_location,
      sym_variable,
      sym_ipv4,
      sym_ipv6,
  [333] = 2,
    ACTIONS(64), 1,
      anon_sym_reject,
    ACTIONS(62), 8,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_alert,
      anon_sym_pass,
      anon_sym_drop,
      anon_sym_rejectsrc,
      anon_sym_rejectdst,
      anon_sym_rejectboth,
  [347] = 2,
    ACTIONS(68), 1,
      anon_sym_reject,
    ACTIONS(66), 8,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_alert,
      anon_sym_pass,
      anon_sym_drop,
      anon_sym_rejectsrc,
      anon_sym_rejectdst,
      anon_sym_rejectboth,
  [361] = 4,
    ACTIONS(72), 1,
      sym__ipv6_octet,
    ACTIONS(75), 1,
      aux_sym_port_token1,
    STATE(15), 1,
      aux_sym_ipv6_repeat1,
    ACTIONS(70), 6,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_negation,
      aux_sym_ipv4_token2,
      anon_sym_any,
  [379] = 2,
    ACTIONS(79), 1,
      anon_sym_reject,
    ACTIONS(77), 8,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_alert,
      anon_sym_pass,
      anon_sym_drop,
      anon_sym_rejectsrc,
      anon_sym_rejectdst,
      anon_sym_rejectboth,
  [393] = 2,
    ACTIONS(83), 1,
      anon_sym_reject,
    ACTIONS(81), 8,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_alert,
      anon_sym_pass,
      anon_sym_drop,
      anon_sym_rejectsrc,
      anon_sym_rejectdst,
      anon_sym_rejectboth,
  [407] = 2,
    ACTIONS(87), 1,
      anon_sym_reject,
    ACTIONS(85), 8,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_alert,
      anon_sym_pass,
      anon_sym_drop,
      anon_sym_rejectsrc,
      anon_sym_rejectdst,
      anon_sym_rejectboth,
  [421] = 5,
    ACTIONS(91), 1,
      aux_sym_ipv4_token2,
    ACTIONS(93), 1,
      sym__ipv6_octet,
    ACTIONS(95), 1,
      aux_sym_port_token1,
    STATE(15), 1,
      aux_sym_ipv6_repeat1,
    ACTIONS(89), 5,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_negation,
      anon_sym_any,
  [441] = 6,
    ACTIONS(97), 1,
      anon_sym_LBRACK,
    ACTIONS(99), 1,
      anon_sym_RBRACK,
    ACTIONS(101), 1,
      sym_negation,
    ACTIONS(103), 1,
      anon_sym_any,
    ACTIONS(105), 1,
      aux_sym_port_token1,
    STATE(62), 3,
      sym__port_choices,
      sym_port,
      sym_group_port,
  [462] = 6,
    ACTIONS(97), 1,
      anon_sym_LBRACK,
    ACTIONS(101), 1,
      sym_negation,
    ACTIONS(103), 1,
      anon_sym_any,
    ACTIONS(105), 1,
      aux_sym_port_token1,
    ACTIONS(107), 1,
      anon_sym_RBRACK,
    STATE(63), 3,
      sym__port_choices,
      sym_port,
      sym_group_port,
  [483] = 6,
    ACTIONS(52), 1,
      anon_sym_DOLLAR,
    ACTIONS(54), 1,
      aux_sym_ipv4_token1,
    ACTIONS(56), 1,
      sym__ipv6_octet,
    ACTIONS(109), 1,
      anon_sym_LBRACK,
    STATE(19), 1,
      aux_sym_ipv6_repeat1,
    STATE(30), 3,
      sym_variable,
      sym_ipv4,
      sym_ipv6,
  [504] = 2,
    ACTIONS(113), 1,
      aux_sym_ipv4_token2,
    ACTIONS(111), 6,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_negation,
      anon_sym_any,
      aux_sym_port_token1,
  [516] = 5,
    ACTIONS(97), 1,
      anon_sym_LBRACK,
    ACTIONS(101), 1,
      sym_negation,
    ACTIONS(103), 1,
      anon_sym_any,
    ACTIONS(105), 1,
      aux_sym_port_token1,
    STATE(60), 3,
      sym__port_choices,
      sym_port,
      sym_group_port,
  [534] = 5,
    ACTIONS(97), 1,
      anon_sym_LBRACK,
    ACTIONS(101), 1,
      sym_negation,
    ACTIONS(103), 1,
      anon_sym_any,
    ACTIONS(105), 1,
      aux_sym_port_token1,
    STATE(86), 3,
      sym__port_choices,
      sym_port,
      sym_group_port,
  [552] = 5,
    ACTIONS(97), 1,
      anon_sym_LBRACK,
    ACTIONS(101), 1,
      sym_negation,
    ACTIONS(103), 1,
      anon_sym_any,
    ACTIONS(105), 1,
      aux_sym_port_token1,
    STATE(67), 3,
      sym__port_choices,
      sym_port,
      sym_group_port,
  [570] = 1,
    ACTIONS(115), 6,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_negation,
      anon_sym_any,
      aux_sym_port_token1,
  [579] = 2,
    ACTIONS(119), 1,
      sym_colon,
    ACTIONS(117), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH_GT,
      anon_sym_LT_GT,
      anon_sym_LPAREN,
  [590] = 1,
    ACTIONS(121), 6,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_negation,
      anon_sym_any,
      aux_sym_port_token1,
  [599] = 1,
    ACTIONS(123), 6,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_negation,
      anon_sym_any,
      aux_sym_port_token1,
  [608] = 1,
    ACTIONS(125), 6,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_negation,
      anon_sym_any,
      aux_sym_port_token1,
  [617] = 1,
    ACTIONS(127), 6,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_negation,
      anon_sym_any,
      aux_sym_port_token1,
  [626] = 6,
    ACTIONS(129), 1,
      anon_sym_RPAREN,
    ACTIONS(131), 1,
      aux_sym_text_token1,
    STATE(36), 1,
      aux_sym_options_repeat1,
    STATE(51), 1,
      aux_sym_text_repeat1,
    STATE(69), 1,
      sym_text,
    STATE(73), 1,
      sym__opt,
  [645] = 2,
    ACTIONS(135), 1,
      sym_colon,
    ACTIONS(133), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH_GT,
      anon_sym_LT_GT,
      anon_sym_LPAREN,
  [656] = 1,
    ACTIONS(137), 6,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_negation,
      anon_sym_any,
      aux_sym_port_token1,
  [665] = 6,
    ACTIONS(139), 1,
      anon_sym_RPAREN,
    ACTIONS(141), 1,
      aux_sym_text_token1,
    STATE(36), 1,
      aux_sym_options_repeat1,
    STATE(51), 1,
      aux_sym_text_repeat1,
    STATE(69), 1,
      sym_text,
    STATE(73), 1,
      sym__opt,
  [684] = 6,
    ACTIONS(131), 1,
      aux_sym_text_token1,
    ACTIONS(144), 1,
      anon_sym_RPAREN,
    STATE(33), 1,
      aux_sym_options_repeat1,
    STATE(51), 1,
      aux_sym_text_repeat1,
    STATE(69), 1,
      sym_text,
    STATE(73), 1,
      sym__opt,
  [703] = 1,
    ACTIONS(146), 6,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_negation,
      anon_sym_any,
      aux_sym_port_token1,
  [712] = 1,
    ACTIONS(148), 6,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_negation,
      anon_sym_any,
      aux_sym_port_token1,
  [721] = 1,
    ACTIONS(133), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH_GT,
      anon_sym_LT_GT,
      anon_sym_LPAREN,
  [729] = 5,
    ACTIONS(131), 1,
      aux_sym_text_token1,
    ACTIONS(150), 1,
      anon_sym_RPAREN,
    STATE(51), 1,
      aux_sym_text_repeat1,
    STATE(69), 1,
      sym_text,
    STATE(74), 1,
      sym__opt,
  [745] = 2,
    ACTIONS(154), 1,
      sym__ipv6_octet,
    ACTIONS(152), 4,
      anon_sym_LBRACK,
      sym_negation,
      anon_sym_DOLLAR,
      aux_sym_ipv4_token1,
  [755] = 1,
    ACTIONS(156), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH_GT,
      anon_sym_LT_GT,
      anon_sym_LPAREN,
  [763] = 1,
    ACTIONS(158), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH_GT,
      anon_sym_LT_GT,
      anon_sym_LPAREN,
  [771] = 1,
    ACTIONS(160), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH_GT,
      anon_sym_LT_GT,
      anon_sym_LPAREN,
  [779] = 1,
    ACTIONS(117), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH_GT,
      anon_sym_LT_GT,
      anon_sym_LPAREN,
  [787] = 2,
    ACTIONS(164), 1,
      sym__ipv6_octet,
    ACTIONS(162), 4,
      anon_sym_LBRACK,
      sym_negation,
      anon_sym_DOLLAR,
      aux_sym_ipv4_token1,
  [797] = 1,
    ACTIONS(166), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH_GT,
      anon_sym_LT_GT,
      anon_sym_LPAREN,
  [805] = 1,
    ACTIONS(168), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH_GT,
      anon_sym_LT_GT,
      anon_sym_LPAREN,
  [813] = 3,
    ACTIONS(172), 1,
      aux_sym_text_token1,
    STATE(50), 1,
      aux_sym_text_repeat1,
    ACTIONS(170), 2,
      sym_colon,
      anon_sym_SEMI,
  [824] = 3,
    ACTIONS(177), 1,
      aux_sym_text_token1,
    STATE(50), 1,
      aux_sym_text_repeat1,
    ACTIONS(175), 2,
      sym_colon,
      anon_sym_SEMI,
  [835] = 3,
    ACTIONS(179), 1,
      anon_sym_COMMA,
    ACTIONS(181), 1,
      anon_sym_RBRACK,
    STATE(65), 1,
      aux_sym_group_location_repeat1,
  [845] = 3,
    ACTIONS(179), 1,
      anon_sym_COMMA,
    ACTIONS(181), 1,
      anon_sym_RBRACK,
    STATE(64), 1,
      aux_sym_group_location_repeat1,
  [855] = 3,
    ACTIONS(183), 1,
      anon_sym_DQUOTE,
    ACTIONS(185), 1,
      aux_sym_string_token1,
    STATE(54), 1,
      aux_sym_string_repeat1,
  [865] = 3,
    ACTIONS(188), 1,
      anon_sym_COMMA,
    ACTIONS(190), 1,
      anon_sym_RBRACK,
    STATE(56), 1,
      aux_sym_group_port_repeat1,
  [875] = 3,
    ACTIONS(192), 1,
      anon_sym_COMMA,
    ACTIONS(195), 1,
      anon_sym_RBRACK,
    STATE(56), 1,
      aux_sym_group_port_repeat1,
  [885] = 3,
    ACTIONS(197), 1,
      anon_sym_DQUOTE,
    ACTIONS(199), 1,
      aux_sym_string_token1,
    STATE(58), 1,
      aux_sym_string_repeat1,
  [895] = 3,
    ACTIONS(201), 1,
      anon_sym_DQUOTE,
    ACTIONS(203), 1,
      aux_sym_string_token1,
    STATE(54), 1,
      aux_sym_string_repeat1,
  [905] = 3,
    ACTIONS(58), 1,
      anon_sym_RBRACK,
    ACTIONS(179), 1,
      anon_sym_COMMA,
    STATE(53), 1,
      aux_sym_group_location_repeat1,
  [915] = 2,
    STATE(9), 1,
      sym_direction,
    ACTIONS(205), 2,
      anon_sym_DASH_GT,
      anon_sym_LT_GT,
  [923] = 3,
    ACTIONS(188), 1,
      anon_sym_COMMA,
    ACTIONS(207), 1,
      anon_sym_RBRACK,
    STATE(56), 1,
      aux_sym_group_port_repeat1,
  [933] = 3,
    ACTIONS(188), 1,
      anon_sym_COMMA,
    ACTIONS(207), 1,
      anon_sym_RBRACK,
    STATE(55), 1,
      aux_sym_group_port_repeat1,
  [943] = 3,
    ACTIONS(99), 1,
      anon_sym_RBRACK,
    ACTIONS(188), 1,
      anon_sym_COMMA,
    STATE(61), 1,
      aux_sym_group_port_repeat1,
  [953] = 3,
    ACTIONS(209), 1,
      anon_sym_COMMA,
    ACTIONS(212), 1,
      anon_sym_RBRACK,
    STATE(64), 1,
      aux_sym_group_location_repeat1,
  [963] = 3,
    ACTIONS(179), 1,
      anon_sym_COMMA,
    ACTIONS(214), 1,
      anon_sym_RBRACK,
    STATE(64), 1,
      aux_sym_group_location_repeat1,
  [973] = 1,
    ACTIONS(212), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [978] = 1,
    ACTIONS(195), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [983] = 2,
    ACTIONS(216), 1,
      anon_sym_LPAREN,
    STATE(13), 1,
      sym_options,
  [990] = 2,
    ACTIONS(218), 1,
      sym_colon,
    ACTIONS(220), 1,
      anon_sym_SEMI,
  [997] = 2,
    ACTIONS(222), 1,
      anon_sym_LBRACK,
    ACTIONS(224), 1,
      aux_sym_port_token1,
  [1004] = 2,
    ACTIONS(139), 1,
      anon_sym_RPAREN,
    ACTIONS(226), 1,
      aux_sym_text_token1,
  [1011] = 1,
    ACTIONS(228), 1,
      aux_sym_comment_token1,
  [1015] = 1,
    ACTIONS(230), 1,
      anon_sym_SEMI,
  [1019] = 1,
    ACTIONS(232), 1,
      anon_sym_SEMI,
  [1023] = 1,
    ACTIONS(234), 1,
      anon_sym_SEMI,
  [1027] = 1,
    ACTIONS(236), 1,
      anon_sym_SEMI,
  [1031] = 1,
    ACTIONS(238), 1,
      anon_sym_SEMI,
  [1035] = 1,
    ACTIONS(240), 1,
      anon_sym_SEMI,
  [1039] = 1,
    ACTIONS(242), 1,
      aux_sym_hexidecimal_token1,
  [1043] = 1,
    ACTIONS(244), 1,
      anon_sym_SEMI,
  [1047] = 1,
    ACTIONS(246), 1,
      aux_sym_variable_token1,
  [1051] = 1,
    ACTIONS(248), 1,
      anon_sym_SEMI,
  [1055] = 1,
    ACTIONS(250), 1,
      anon_sym_SEMI,
  [1059] = 1,
    ACTIONS(252), 1,
      anon_sym_SEMI,
  [1063] = 1,
    ACTIONS(254), 1,
      anon_sym_SEMI,
  [1067] = 1,
    ACTIONS(256), 1,
      anon_sym_LPAREN,
  [1071] = 1,
    ACTIONS(258), 1,
      anon_sym_SEMI,
  [1075] = 1,
    ACTIONS(260), 1,
      aux_sym_digit_token1,
  [1079] = 1,
    ACTIONS(262), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 38,
  [SMALL_STATE(4)] = 70,
  [SMALL_STATE(5)] = 97,
  [SMALL_STATE(6)] = 134,
  [SMALL_STATE(7)] = 161,
  [SMALL_STATE(8)] = 191,
  [SMALL_STATE(9)] = 221,
  [SMALL_STATE(10)] = 248,
  [SMALL_STATE(11)] = 279,
  [SMALL_STATE(12)] = 306,
  [SMALL_STATE(13)] = 333,
  [SMALL_STATE(14)] = 347,
  [SMALL_STATE(15)] = 361,
  [SMALL_STATE(16)] = 379,
  [SMALL_STATE(17)] = 393,
  [SMALL_STATE(18)] = 407,
  [SMALL_STATE(19)] = 421,
  [SMALL_STATE(20)] = 441,
  [SMALL_STATE(21)] = 462,
  [SMALL_STATE(22)] = 483,
  [SMALL_STATE(23)] = 504,
  [SMALL_STATE(24)] = 516,
  [SMALL_STATE(25)] = 534,
  [SMALL_STATE(26)] = 552,
  [SMALL_STATE(27)] = 570,
  [SMALL_STATE(28)] = 579,
  [SMALL_STATE(29)] = 590,
  [SMALL_STATE(30)] = 599,
  [SMALL_STATE(31)] = 608,
  [SMALL_STATE(32)] = 617,
  [SMALL_STATE(33)] = 626,
  [SMALL_STATE(34)] = 645,
  [SMALL_STATE(35)] = 656,
  [SMALL_STATE(36)] = 665,
  [SMALL_STATE(37)] = 684,
  [SMALL_STATE(38)] = 703,
  [SMALL_STATE(39)] = 712,
  [SMALL_STATE(40)] = 721,
  [SMALL_STATE(41)] = 729,
  [SMALL_STATE(42)] = 745,
  [SMALL_STATE(43)] = 755,
  [SMALL_STATE(44)] = 763,
  [SMALL_STATE(45)] = 771,
  [SMALL_STATE(46)] = 779,
  [SMALL_STATE(47)] = 787,
  [SMALL_STATE(48)] = 797,
  [SMALL_STATE(49)] = 805,
  [SMALL_STATE(50)] = 813,
  [SMALL_STATE(51)] = 824,
  [SMALL_STATE(52)] = 835,
  [SMALL_STATE(53)] = 845,
  [SMALL_STATE(54)] = 855,
  [SMALL_STATE(55)] = 865,
  [SMALL_STATE(56)] = 875,
  [SMALL_STATE(57)] = 885,
  [SMALL_STATE(58)] = 895,
  [SMALL_STATE(59)] = 905,
  [SMALL_STATE(60)] = 915,
  [SMALL_STATE(61)] = 923,
  [SMALL_STATE(62)] = 933,
  [SMALL_STATE(63)] = 943,
  [SMALL_STATE(64)] = 953,
  [SMALL_STATE(65)] = 963,
  [SMALL_STATE(66)] = 973,
  [SMALL_STATE(67)] = 978,
  [SMALL_STATE(68)] = 983,
  [SMALL_STATE(69)] = 990,
  [SMALL_STATE(70)] = 997,
  [SMALL_STATE(71)] = 1004,
  [SMALL_STATE(72)] = 1011,
  [SMALL_STATE(73)] = 1015,
  [SMALL_STATE(74)] = 1019,
  [SMALL_STATE(75)] = 1023,
  [SMALL_STATE(76)] = 1027,
  [SMALL_STATE(77)] = 1031,
  [SMALL_STATE(78)] = 1035,
  [SMALL_STATE(79)] = 1039,
  [SMALL_STATE(80)] = 1043,
  [SMALL_STATE(81)] = 1047,
  [SMALL_STATE(82)] = 1051,
  [SMALL_STATE(83)] = 1055,
  [SMALL_STATE(84)] = 1059,
  [SMALL_STATE(85)] = 1063,
  [SMALL_STATE(86)] = 1067,
  [SMALL_STATE(87)] = 1071,
  [SMALL_STATE(88)] = 1075,
  [SMALL_STATE(89)] = 1079,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 1),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(72),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rule, 3),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__rule, 3),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options, 2),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_options, 2),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ipv6_repeat1, 2),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ipv6_repeat1, 2), SHIFT_REPEAT(15),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ipv6_repeat1, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options, 5),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_options, 5),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options, 4),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_options, 4),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ipv6, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ipv6, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ipv4, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_location, 2),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port, 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_location, 4),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__standalone_location, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ipv4, 2),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ipv6, 2),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_options_repeat1, 2),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(51),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_location, 5),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_location, 3),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_protocol, 1),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_protocol, 1),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_port, 2),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_port, 3),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_port, 5),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction, 1),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_direction, 1),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_port, 4),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port, 3),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(50),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(54),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_port_repeat1, 2), SHIFT_REPEAT(26),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_port_repeat1, 2),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_location_repeat1, 2), SHIFT_REPEAT(11),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_location_repeat1, 2),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__opt, 1),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 2),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 2, .production_id = 3),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_digit, 2),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hexidecimal, 2),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, .production_id = 1),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__opt, 3, .production_id = 2),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_digit, 1),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 6),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [262] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
