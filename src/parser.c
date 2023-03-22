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
#define STATE_COUNT 111
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 286
#define ALIAS_COUNT 4
#define TOKEN_COUNT 249
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 6

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
  sym_semicolon = 49,
  sym_bitwise_and = 50,
  sym_bitwise_or = 51,
  anon_sym_PLUS = 52,
  anon_sym_DASH = 53,
  anon_sym_STAR = 54,
  anon_sym_SLASH = 55,
  anon_sym_LT_LT = 56,
  anon_sym_GT_GT = 57,
  anon_sym_EQ = 58,
  anon_sym_GT_EQ = 59,
  anon_sym_LT_EQ = 60,
  anon_sym_EQ_EQ = 61,
  anon_sym_BANG_DASH = 62,
  anon_sym_LT_GT = 63,
  anon_sym_GT = 64,
  anon_sym_LT = 65,
  anon_sym_DASH_GT = 66,
  anon_sym_LPAREN = 67,
  anon_sym_RPAREN = 68,
  aux_sym_digit_token1 = 69,
  anon_sym_KB = 70,
  anon_sym_MB = 71,
  anon_sym_GB = 72,
  aux_sym_text_token1 = 73,
  anon_sym_DQUOTE = 74,
  aux_sym_string_token1 = 75,
  sym_decimal = 76,
  anon_sym_x = 77,
  aux_sym_hexidecimal_token1 = 78,
  aux_sym_hexstring_token1 = 79,
  anon_sym_o = 80,
  anon_sym_rr = 81,
  anon_sym_eol = 82,
  anon_sym_nop = 83,
  anon_sym_ts = 84,
  anon_sym_sec = 85,
  anon_sym_esec = 86,
  anon_sym_lsrr = 87,
  anon_sym_ssrr = 88,
  anon_sym_satid = 89,
  anon_sym_only = 90,
  anon_sym_set = 91,
  anon_sym_isset = 92,
  anon_sym_toggle = 93,
  anon_sym_unset = 94,
  anon_sym_isnotset = 95,
  anon_sym_noalert = 96,
  anon_sym_to_client = 97,
  anon_sym_to_server = 98,
  anon_sym_from_client = 99,
  anon_sym_from_server = 100,
  anon_sym_established = 101,
  anon_sym_not_established = 102,
  anon_sym_stateless = 103,
  anon_sym_only_stream = 104,
  anon_sym_no_stream = 105,
  anon_sym_only_frag = 106,
  anon_sym_no_frag = 107,
  anon_sym_request_SLASHto_server = 108,
  anon_sym_response_SLASHto_client = 109,
  anon_sym_both = 110,
  anon_sym_file = 111,
  anon_sym_tx = 112,
  anon_sym_ssn_SLASHflow = 113,
  anon_sym_sslv2 = 114,
  anon_sym_sslv3 = 115,
  anon_sym_tls1_DOT0 = 116,
  anon_sym_tls1_DOT1 = 117,
  anon_sym_tls1_DOT2 = 118,
  anon_sym_tls1_DOT3 = 119,
  anon_sym_client_hello = 120,
  anon_sym_server_hello = 121,
  anon_sym_client_kyx = 122,
  anon_sym_server_keyx = 123,
  anon_sym_unkown = 124,
  anon_sym_2_compat = 125,
  anon_sym_confirm = 126,
  anon_sym_read = 127,
  anon_sym_write = 128,
  anon_sym_select = 129,
  anon_sym_operate = 130,
  anon_sym_direct_operate = 131,
  anon_sym_direct_operate_nr = 132,
  anon_sym_immed_freeze = 133,
  anon_sym_immed_freeze_nr = 134,
  anon_sym_freeze_clear = 135,
  anon_sym_freeze_clear_nr = 136,
  anon_sym_freeze_at_time = 137,
  anon_sym_freeze_at_time_nr = 138,
  anon_sym_cold_restart = 139,
  anon_sym_warm_restart = 140,
  anon_sym_initialize_data = 141,
  anon_sym_initialize_appl = 142,
  anon_sym_start_appl = 143,
  anon_sym_stop_appl = 144,
  anon_sym_save_config = 145,
  anon_sym_enable_unsolicited = 146,
  anon_sym_disable_unsolicited = 147,
  anon_sym_assign_class = 148,
  anon_sym_delay_measure = 149,
  anon_sym_record_current_time = 150,
  anon_sym_open_file = 151,
  anon_sym_close_file = 152,
  anon_sym_delete_file = 153,
  anon_sym_get_file_info = 154,
  anon_sym_authenticate_file = 155,
  anon_sym_abort_file = 156,
  anon_sym_activate_config = 157,
  anon_sym_authenticate_req = 158,
  anon_sym_authenticate_err = 159,
  anon_sym_response = 160,
  anon_sym_unsolicited_response = 161,
  anon_sym_authenticate_respo = 162,
  anon_sym_all_stations = 163,
  anon_sym_class_1_events = 164,
  anon_sym_class_2_events = 165,
  anon_sym_class_3_events = 166,
  anon_sym_need_time = 167,
  anon_sym_local_control = 168,
  anon_sym_device_trouble = 169,
  anon_sym_device_restart = 170,
  anon_sym_no_func_code_support = 171,
  anon_sym_object_unknown = 172,
  anon_sym_parameter_error = 173,
  anon_sym_event_buffer_overflow = 174,
  anon_sym_alread_executing = 175,
  anon_sym_config_corrupt = 176,
  anon_sym_reserved_2 = 177,
  anon_sym_reserved_1 = 178,
  anon_sym_retr = 179,
  anon_sym_stor = 180,
  anon_sym_INVITE = 181,
  anon_sym_BYTE = 182,
  anon_sym_REGISTER = 183,
  anon_sym_CANCEL = 184,
  anon_sym_ACK = 185,
  anon_sym_OPTIONS = 186,
  anon_sym_CONNECT = 187,
  anon_sym_CONNACK = 188,
  anon_sym_PUBLISH = 189,
  anon_sym_PUBACK = 190,
  anon_sym_PUBREC = 191,
  anon_sym_PUBREL = 192,
  anon_sym_PUBCOMP = 193,
  anon_sym_SUBSCRIBE = 194,
  anon_sym_SUBACK = 195,
  anon_sym_PINGREQ = 196,
  anon_sym_PINGRESP = 197,
  anon_sym_DISCONNECT = 198,
  anon_sym_AUTH = 199,
  anon_sym_UNASSIGNED = 200,
  anon_sym_dup = 201,
  anon_sym_retain = 202,
  anon_sym_yes = 203,
  anon_sym_true = 204,
  anon_sym_no = 205,
  anon_sym_false = 206,
  anon_sym_username = 207,
  anon_sym_password = 208,
  anon_sym_will = 209,
  anon_sym_will_retain = 210,
  anon_sym_clean_session = 211,
  anon_sym_type = 212,
  anon_sym_threshold = 213,
  anon_sym_limit = 214,
  anon_sym_track = 215,
  anon_sym_by_src = 216,
  anon_sym_by_dst = 217,
  anon_sym_by_rule = 218,
  anon_sym_by_both = 219,
  anon_sym_count = 220,
  anon_sym_seconds = 221,
  anon_sym_src = 222,
  anon_sym_dst = 223,
  anon_sym_load = 224,
  anon_sym_state = 225,
  anon_sym_save = 226,
  anon_sym_memcap = 227,
  anon_sym_hashsize = 228,
  anon_sym_relative = 229,
  anon_sym_endian = 230,
  anon_sym_dce = 231,
  anon_sym_bitmask = 232,
  anon_sym_string = 233,
  anon_sym_offset = 234,
  anon_sym_depth = 235,
  anon_sym_distance = 236,
  anon_sym_within = 237,
  anon_sym_oper = 238,
  anon_sym_rvalue = 239,
  anon_sym_result = 240,
  anon_sym_server = 241,
  anon_sym_client = 242,
  anon_sym_either = 243,
  anon_sym_name = 244,
  anon_sym_ip_src = 245,
  anon_sym_ip_dst = 246,
  anon_sym_ip_pair = 247,
  anon_sym_expire = 248,
  sym_source_file = 249,
  sym__lines = 250,
  sym_comment = 251,
  sym__rule = 252,
  sym_action = 253,
  sym_header = 254,
  sym_protocol = 255,
  sym__location = 256,
  sym__standalone_location = 257,
  sym_group_location = 258,
  sym_variable = 259,
  sym_ipv4 = 260,
  sym_ipv6 = 261,
  sym__port_choices = 262,
  sym_port = 263,
  sym_group_port = 264,
  sym_comma = 265,
  sym_math_operator = 266,
  sym_direction = 267,
  sym_options = 268,
  sym__opt = 269,
  sym_digit = 270,
  sym_unit = 271,
  sym_text = 272,
  sym_string = 273,
  sym_hexidecimal = 274,
  sym_hexstring = 275,
  sym_octal = 276,
  sym_value = 277,
  sym_constant = 278,
  aux_sym_source_file_repeat1 = 279,
  aux_sym_group_location_repeat1 = 280,
  aux_sym_ipv6_repeat1 = 281,
  aux_sym_group_port_repeat1 = 282,
  aux_sym_options_repeat1 = 283,
  aux_sym_text_repeat1 = 284,
  aux_sym_string_repeat1 = 285,
  alias_sym_keyword = 286,
  alias_sym_min_max = 287,
  alias_sym_operator = 288,
  alias_sym_separator = 289,
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
  [sym_semicolon] = "semicolon",
  [sym_bitwise_and] = "bitwise_and",
  [sym_bitwise_or] = "bitwise_or",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_EQ] = "=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_DASH] = "!-",
  [anon_sym_LT_GT] = "<>",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [aux_sym_digit_token1] = "digit_token1",
  [anon_sym_KB] = "KB",
  [anon_sym_MB] = "MB",
  [anon_sym_GB] = "GB",
  [aux_sym_text_token1] = "text_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [sym_decimal] = "decimal",
  [anon_sym_x] = "x",
  [aux_sym_hexidecimal_token1] = "hexidecimal_token1",
  [aux_sym_hexstring_token1] = "hexstring_token1",
  [anon_sym_o] = "o",
  [anon_sym_rr] = "rr",
  [anon_sym_eol] = "eol",
  [anon_sym_nop] = "nop",
  [anon_sym_ts] = "ts",
  [anon_sym_sec] = "sec",
  [anon_sym_esec] = "esec",
  [anon_sym_lsrr] = "lsrr",
  [anon_sym_ssrr] = "ssrr",
  [anon_sym_satid] = "satid",
  [anon_sym_only] = "only",
  [anon_sym_set] = "set",
  [anon_sym_isset] = "isset",
  [anon_sym_toggle] = "toggle",
  [anon_sym_unset] = "unset",
  [anon_sym_isnotset] = "isnotset",
  [anon_sym_noalert] = "noalert",
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
  [anon_sym_request_SLASHto_server] = "request/to_server",
  [anon_sym_response_SLASHto_client] = "response/to_client",
  [anon_sym_both] = "both",
  [anon_sym_file] = "file",
  [anon_sym_tx] = "tx",
  [anon_sym_ssn_SLASHflow] = "ssn/flow",
  [anon_sym_sslv2] = "sslv2",
  [anon_sym_sslv3] = "sslv3",
  [anon_sym_tls1_DOT0] = "tls1.0",
  [anon_sym_tls1_DOT1] = "tls1.1",
  [anon_sym_tls1_DOT2] = "tls1.2",
  [anon_sym_tls1_DOT3] = "tls1.3",
  [anon_sym_client_hello] = "client_hello",
  [anon_sym_server_hello] = "server_hello",
  [anon_sym_client_kyx] = "client_kyx",
  [anon_sym_server_keyx] = "server_keyx",
  [anon_sym_unkown] = "unkown",
  [anon_sym_2_compat] = "2_compat",
  [anon_sym_confirm] = "confirm",
  [anon_sym_read] = "read",
  [anon_sym_write] = "write",
  [anon_sym_select] = "select",
  [anon_sym_operate] = "operate",
  [anon_sym_direct_operate] = "direct_operate",
  [anon_sym_direct_operate_nr] = "direct_operate_nr",
  [anon_sym_immed_freeze] = "immed_freeze",
  [anon_sym_immed_freeze_nr] = "immed_freeze_nr",
  [anon_sym_freeze_clear] = "freeze_clear",
  [anon_sym_freeze_clear_nr] = "freeze_clear_nr",
  [anon_sym_freeze_at_time] = "freeze_at_time",
  [anon_sym_freeze_at_time_nr] = "freeze_at_time_nr",
  [anon_sym_cold_restart] = "cold_restart",
  [anon_sym_warm_restart] = "warm_restart",
  [anon_sym_initialize_data] = "initialize_data",
  [anon_sym_initialize_appl] = "initialize_appl",
  [anon_sym_start_appl] = "start_appl",
  [anon_sym_stop_appl] = "stop_appl",
  [anon_sym_save_config] = "save_config",
  [anon_sym_enable_unsolicited] = "enable_unsolicited",
  [anon_sym_disable_unsolicited] = "disable_unsolicited",
  [anon_sym_assign_class] = "assign_class",
  [anon_sym_delay_measure] = "delay_measure",
  [anon_sym_record_current_time] = "record_current_time",
  [anon_sym_open_file] = "open_file",
  [anon_sym_close_file] = "close_file",
  [anon_sym_delete_file] = "delete_file",
  [anon_sym_get_file_info] = "get_file_info",
  [anon_sym_authenticate_file] = "authenticate_file",
  [anon_sym_abort_file] = "abort_file",
  [anon_sym_activate_config] = "activate_config",
  [anon_sym_authenticate_req] = "authenticate_req",
  [anon_sym_authenticate_err] = "authenticate_err",
  [anon_sym_response] = "response",
  [anon_sym_unsolicited_response] = "unsolicited_response",
  [anon_sym_authenticate_respo] = "authenticate_respo",
  [anon_sym_all_stations] = "all_stations",
  [anon_sym_class_1_events] = "class_1_events",
  [anon_sym_class_2_events] = "class_2_events",
  [anon_sym_class_3_events] = "class_3_events",
  [anon_sym_need_time] = "need_time",
  [anon_sym_local_control] = "local_control",
  [anon_sym_device_trouble] = "device_trouble",
  [anon_sym_device_restart] = "device_restart",
  [anon_sym_no_func_code_support] = "no_func_code_support",
  [anon_sym_object_unknown] = "object_unknown",
  [anon_sym_parameter_error] = "parameter_error",
  [anon_sym_event_buffer_overflow] = "event_buffer_overflow",
  [anon_sym_alread_executing] = "alread_executing",
  [anon_sym_config_corrupt] = "config_corrupt",
  [anon_sym_reserved_2] = "reserved_2",
  [anon_sym_reserved_1] = "reserved_1",
  [anon_sym_retr] = "retr",
  [anon_sym_stor] = "stor",
  [anon_sym_INVITE] = "INVITE",
  [anon_sym_BYTE] = "BYTE",
  [anon_sym_REGISTER] = "REGISTER",
  [anon_sym_CANCEL] = "CANCEL",
  [anon_sym_ACK] = "ACK",
  [anon_sym_OPTIONS] = "OPTIONS",
  [anon_sym_CONNECT] = "CONNECT",
  [anon_sym_CONNACK] = "CONNACK",
  [anon_sym_PUBLISH] = "PUBLISH",
  [anon_sym_PUBACK] = "PUBACK",
  [anon_sym_PUBREC] = "PUBREC",
  [anon_sym_PUBREL] = "PUBREL",
  [anon_sym_PUBCOMP] = "PUBCOMP",
  [anon_sym_SUBSCRIBE] = "SUBSCRIBE",
  [anon_sym_SUBACK] = "SUBACK",
  [anon_sym_PINGREQ] = "PINGREQ",
  [anon_sym_PINGRESP] = "PINGRESP",
  [anon_sym_DISCONNECT] = "DISCONNECT",
  [anon_sym_AUTH] = "AUTH",
  [anon_sym_UNASSIGNED] = "UNASSIGNED",
  [anon_sym_dup] = "dup",
  [anon_sym_retain] = "retain",
  [anon_sym_yes] = "yes",
  [anon_sym_true] = "true",
  [anon_sym_no] = "no",
  [anon_sym_false] = "false",
  [anon_sym_username] = "username",
  [anon_sym_password] = "password",
  [anon_sym_will] = "will",
  [anon_sym_will_retain] = "will_retain",
  [anon_sym_clean_session] = "clean_session",
  [anon_sym_type] = "type",
  [anon_sym_threshold] = "threshold",
  [anon_sym_limit] = "limit",
  [anon_sym_track] = "track",
  [anon_sym_by_src] = "by_src",
  [anon_sym_by_dst] = "by_dst",
  [anon_sym_by_rule] = "by_rule",
  [anon_sym_by_both] = "by_both",
  [anon_sym_count] = "count",
  [anon_sym_seconds] = "seconds",
  [anon_sym_src] = "src",
  [anon_sym_dst] = "dst",
  [anon_sym_load] = "load",
  [anon_sym_state] = "state",
  [anon_sym_save] = "save",
  [anon_sym_memcap] = "memcap",
  [anon_sym_hashsize] = "hashsize",
  [anon_sym_relative] = "relative",
  [anon_sym_endian] = "endian",
  [anon_sym_dce] = "dce",
  [anon_sym_bitmask] = "bitmask",
  [anon_sym_string] = "string",
  [anon_sym_offset] = "offset",
  [anon_sym_depth] = "depth",
  [anon_sym_distance] = "distance",
  [anon_sym_within] = "within",
  [anon_sym_oper] = "oper",
  [anon_sym_rvalue] = "rvalue",
  [anon_sym_result] = "result",
  [anon_sym_server] = "server",
  [anon_sym_client] = "client",
  [anon_sym_either] = "either",
  [anon_sym_name] = "name",
  [anon_sym_ip_src] = "ip_src",
  [anon_sym_ip_dst] = "ip_dst",
  [anon_sym_ip_pair] = "ip_pair",
  [anon_sym_expire] = "expire",
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
  [sym_comma] = "comma",
  [sym_math_operator] = "math_operator",
  [sym_direction] = "direction",
  [sym_options] = "options",
  [sym__opt] = "_opt",
  [sym_digit] = "digit",
  [sym_unit] = "unit",
  [sym_text] = "other",
  [sym_string] = "string",
  [sym_hexidecimal] = "hexidecimal",
  [sym_hexstring] = "hexstring",
  [sym_octal] = "octal",
  [sym_value] = "value",
  [sym_constant] = "constant",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_group_location_repeat1] = "group_location_repeat1",
  [aux_sym_ipv6_repeat1] = "ipv6_repeat1",
  [aux_sym_group_port_repeat1] = "group_port_repeat1",
  [aux_sym_options_repeat1] = "options_repeat1",
  [aux_sym_text_repeat1] = "text_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [alias_sym_keyword] = "keyword",
  [alias_sym_min_max] = "min_max",
  [alias_sym_operator] = "operator",
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
  [sym_semicolon] = sym_semicolon,
  [sym_bitwise_and] = sym_bitwise_and,
  [sym_bitwise_or] = sym_bitwise_or,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_DASH] = anon_sym_BANG_DASH,
  [anon_sym_LT_GT] = anon_sym_LT_GT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym_digit_token1] = aux_sym_digit_token1,
  [anon_sym_KB] = anon_sym_KB,
  [anon_sym_MB] = anon_sym_MB,
  [anon_sym_GB] = anon_sym_GB,
  [aux_sym_text_token1] = aux_sym_text_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [sym_decimal] = sym_decimal,
  [anon_sym_x] = anon_sym_x,
  [aux_sym_hexidecimal_token1] = aux_sym_hexidecimal_token1,
  [aux_sym_hexstring_token1] = aux_sym_hexstring_token1,
  [anon_sym_o] = anon_sym_o,
  [anon_sym_rr] = anon_sym_rr,
  [anon_sym_eol] = anon_sym_eol,
  [anon_sym_nop] = anon_sym_nop,
  [anon_sym_ts] = anon_sym_ts,
  [anon_sym_sec] = anon_sym_sec,
  [anon_sym_esec] = anon_sym_esec,
  [anon_sym_lsrr] = anon_sym_lsrr,
  [anon_sym_ssrr] = anon_sym_ssrr,
  [anon_sym_satid] = anon_sym_satid,
  [anon_sym_only] = anon_sym_only,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_isset] = anon_sym_isset,
  [anon_sym_toggle] = anon_sym_toggle,
  [anon_sym_unset] = anon_sym_unset,
  [anon_sym_isnotset] = anon_sym_isnotset,
  [anon_sym_noalert] = anon_sym_noalert,
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
  [anon_sym_request_SLASHto_server] = anon_sym_request_SLASHto_server,
  [anon_sym_response_SLASHto_client] = anon_sym_response_SLASHto_client,
  [anon_sym_both] = anon_sym_both,
  [anon_sym_file] = anon_sym_file,
  [anon_sym_tx] = anon_sym_tx,
  [anon_sym_ssn_SLASHflow] = anon_sym_ssn_SLASHflow,
  [anon_sym_sslv2] = anon_sym_sslv2,
  [anon_sym_sslv3] = anon_sym_sslv3,
  [anon_sym_tls1_DOT0] = anon_sym_tls1_DOT0,
  [anon_sym_tls1_DOT1] = anon_sym_tls1_DOT1,
  [anon_sym_tls1_DOT2] = anon_sym_tls1_DOT2,
  [anon_sym_tls1_DOT3] = anon_sym_tls1_DOT3,
  [anon_sym_client_hello] = anon_sym_client_hello,
  [anon_sym_server_hello] = anon_sym_server_hello,
  [anon_sym_client_kyx] = anon_sym_client_kyx,
  [anon_sym_server_keyx] = anon_sym_server_keyx,
  [anon_sym_unkown] = anon_sym_unkown,
  [anon_sym_2_compat] = anon_sym_2_compat,
  [anon_sym_confirm] = anon_sym_confirm,
  [anon_sym_read] = anon_sym_read,
  [anon_sym_write] = anon_sym_write,
  [anon_sym_select] = anon_sym_select,
  [anon_sym_operate] = anon_sym_operate,
  [anon_sym_direct_operate] = anon_sym_direct_operate,
  [anon_sym_direct_operate_nr] = anon_sym_direct_operate_nr,
  [anon_sym_immed_freeze] = anon_sym_immed_freeze,
  [anon_sym_immed_freeze_nr] = anon_sym_immed_freeze_nr,
  [anon_sym_freeze_clear] = anon_sym_freeze_clear,
  [anon_sym_freeze_clear_nr] = anon_sym_freeze_clear_nr,
  [anon_sym_freeze_at_time] = anon_sym_freeze_at_time,
  [anon_sym_freeze_at_time_nr] = anon_sym_freeze_at_time_nr,
  [anon_sym_cold_restart] = anon_sym_cold_restart,
  [anon_sym_warm_restart] = anon_sym_warm_restart,
  [anon_sym_initialize_data] = anon_sym_initialize_data,
  [anon_sym_initialize_appl] = anon_sym_initialize_appl,
  [anon_sym_start_appl] = anon_sym_start_appl,
  [anon_sym_stop_appl] = anon_sym_stop_appl,
  [anon_sym_save_config] = anon_sym_save_config,
  [anon_sym_enable_unsolicited] = anon_sym_enable_unsolicited,
  [anon_sym_disable_unsolicited] = anon_sym_disable_unsolicited,
  [anon_sym_assign_class] = anon_sym_assign_class,
  [anon_sym_delay_measure] = anon_sym_delay_measure,
  [anon_sym_record_current_time] = anon_sym_record_current_time,
  [anon_sym_open_file] = anon_sym_open_file,
  [anon_sym_close_file] = anon_sym_close_file,
  [anon_sym_delete_file] = anon_sym_delete_file,
  [anon_sym_get_file_info] = anon_sym_get_file_info,
  [anon_sym_authenticate_file] = anon_sym_authenticate_file,
  [anon_sym_abort_file] = anon_sym_abort_file,
  [anon_sym_activate_config] = anon_sym_activate_config,
  [anon_sym_authenticate_req] = anon_sym_authenticate_req,
  [anon_sym_authenticate_err] = anon_sym_authenticate_err,
  [anon_sym_response] = anon_sym_response,
  [anon_sym_unsolicited_response] = anon_sym_unsolicited_response,
  [anon_sym_authenticate_respo] = anon_sym_authenticate_respo,
  [anon_sym_all_stations] = anon_sym_all_stations,
  [anon_sym_class_1_events] = anon_sym_class_1_events,
  [anon_sym_class_2_events] = anon_sym_class_2_events,
  [anon_sym_class_3_events] = anon_sym_class_3_events,
  [anon_sym_need_time] = anon_sym_need_time,
  [anon_sym_local_control] = anon_sym_local_control,
  [anon_sym_device_trouble] = anon_sym_device_trouble,
  [anon_sym_device_restart] = anon_sym_device_restart,
  [anon_sym_no_func_code_support] = anon_sym_no_func_code_support,
  [anon_sym_object_unknown] = anon_sym_object_unknown,
  [anon_sym_parameter_error] = anon_sym_parameter_error,
  [anon_sym_event_buffer_overflow] = anon_sym_event_buffer_overflow,
  [anon_sym_alread_executing] = anon_sym_alread_executing,
  [anon_sym_config_corrupt] = anon_sym_config_corrupt,
  [anon_sym_reserved_2] = anon_sym_reserved_2,
  [anon_sym_reserved_1] = anon_sym_reserved_1,
  [anon_sym_retr] = anon_sym_retr,
  [anon_sym_stor] = anon_sym_stor,
  [anon_sym_INVITE] = anon_sym_INVITE,
  [anon_sym_BYTE] = anon_sym_BYTE,
  [anon_sym_REGISTER] = anon_sym_REGISTER,
  [anon_sym_CANCEL] = anon_sym_CANCEL,
  [anon_sym_ACK] = anon_sym_ACK,
  [anon_sym_OPTIONS] = anon_sym_OPTIONS,
  [anon_sym_CONNECT] = anon_sym_CONNECT,
  [anon_sym_CONNACK] = anon_sym_CONNACK,
  [anon_sym_PUBLISH] = anon_sym_PUBLISH,
  [anon_sym_PUBACK] = anon_sym_PUBACK,
  [anon_sym_PUBREC] = anon_sym_PUBREC,
  [anon_sym_PUBREL] = anon_sym_PUBREL,
  [anon_sym_PUBCOMP] = anon_sym_PUBCOMP,
  [anon_sym_SUBSCRIBE] = anon_sym_SUBSCRIBE,
  [anon_sym_SUBACK] = anon_sym_SUBACK,
  [anon_sym_PINGREQ] = anon_sym_PINGREQ,
  [anon_sym_PINGRESP] = anon_sym_PINGRESP,
  [anon_sym_DISCONNECT] = anon_sym_DISCONNECT,
  [anon_sym_AUTH] = anon_sym_AUTH,
  [anon_sym_UNASSIGNED] = anon_sym_UNASSIGNED,
  [anon_sym_dup] = anon_sym_dup,
  [anon_sym_retain] = anon_sym_retain,
  [anon_sym_yes] = anon_sym_yes,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_no] = anon_sym_no,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_username] = anon_sym_username,
  [anon_sym_password] = anon_sym_password,
  [anon_sym_will] = anon_sym_will,
  [anon_sym_will_retain] = anon_sym_will_retain,
  [anon_sym_clean_session] = anon_sym_clean_session,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_threshold] = anon_sym_threshold,
  [anon_sym_limit] = anon_sym_limit,
  [anon_sym_track] = anon_sym_track,
  [anon_sym_by_src] = anon_sym_by_src,
  [anon_sym_by_dst] = anon_sym_by_dst,
  [anon_sym_by_rule] = anon_sym_by_rule,
  [anon_sym_by_both] = anon_sym_by_both,
  [anon_sym_count] = anon_sym_count,
  [anon_sym_seconds] = anon_sym_seconds,
  [anon_sym_src] = anon_sym_src,
  [anon_sym_dst] = anon_sym_dst,
  [anon_sym_load] = anon_sym_load,
  [anon_sym_state] = anon_sym_state,
  [anon_sym_save] = anon_sym_save,
  [anon_sym_memcap] = anon_sym_memcap,
  [anon_sym_hashsize] = anon_sym_hashsize,
  [anon_sym_relative] = anon_sym_relative,
  [anon_sym_endian] = anon_sym_endian,
  [anon_sym_dce] = anon_sym_dce,
  [anon_sym_bitmask] = anon_sym_bitmask,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_offset] = anon_sym_offset,
  [anon_sym_depth] = anon_sym_depth,
  [anon_sym_distance] = anon_sym_distance,
  [anon_sym_within] = anon_sym_within,
  [anon_sym_oper] = anon_sym_oper,
  [anon_sym_rvalue] = anon_sym_rvalue,
  [anon_sym_result] = anon_sym_result,
  [anon_sym_server] = anon_sym_server,
  [anon_sym_client] = anon_sym_client,
  [anon_sym_either] = anon_sym_either,
  [anon_sym_name] = anon_sym_name,
  [anon_sym_ip_src] = anon_sym_ip_src,
  [anon_sym_ip_dst] = anon_sym_ip_dst,
  [anon_sym_ip_pair] = anon_sym_ip_pair,
  [anon_sym_expire] = anon_sym_expire,
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
  [sym_comma] = sym_comma,
  [sym_math_operator] = sym_math_operator,
  [sym_direction] = sym_direction,
  [sym_options] = sym_options,
  [sym__opt] = sym__opt,
  [sym_digit] = sym_digit,
  [sym_unit] = sym_unit,
  [sym_text] = sym_text,
  [sym_string] = sym_string,
  [sym_hexidecimal] = sym_hexidecimal,
  [sym_hexstring] = sym_hexstring,
  [sym_octal] = sym_octal,
  [sym_value] = sym_value,
  [sym_constant] = sym_constant,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_group_location_repeat1] = aux_sym_group_location_repeat1,
  [aux_sym_ipv6_repeat1] = aux_sym_ipv6_repeat1,
  [aux_sym_group_port_repeat1] = aux_sym_group_port_repeat1,
  [aux_sym_options_repeat1] = aux_sym_options_repeat1,
  [aux_sym_text_repeat1] = aux_sym_text_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [alias_sym_keyword] = alias_sym_keyword,
  [alias_sym_min_max] = alias_sym_min_max,
  [alias_sym_operator] = alias_sym_operator,
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
  [sym_semicolon] = {
    .visible = true,
    .named = true,
  },
  [sym_bitwise_and] = {
    .visible = true,
    .named = true,
  },
  [sym_bitwise_or] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_GT] = {
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
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_digit_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_KB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GB] = {
    .visible = true,
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
  [aux_sym_hexstring_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_o] = {
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
  [anon_sym_only] = {
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
  [anon_sym_client_hello] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_server_hello] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_client_kyx] = {
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
  [anon_sym_2_compat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_confirm] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_read] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_write] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_select] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_operate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_direct_operate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_direct_operate_nr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_immed_freeze] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_immed_freeze_nr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_freeze_clear] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_freeze_clear_nr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_freeze_at_time] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_freeze_at_time_nr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cold_restart] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_warm_restart] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_initialize_data] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_initialize_appl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_start_appl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stop_appl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_save_config] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enable_unsolicited] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_disable_unsolicited] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_assign_class] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_delay_measure] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_record_current_time] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_open_file] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_close_file] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_delete_file] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_get_file_info] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_authenticate_file] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_abort_file] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_activate_config] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_authenticate_req] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_authenticate_err] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_response] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unsolicited_response] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_authenticate_respo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_all_stations] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_class_1_events] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_class_2_events] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_class_3_events] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_need_time] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_local_control] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_device_trouble] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_device_restart] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_func_code_support] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_object_unknown] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_parameter_error] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_event_buffer_overflow] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_alread_executing] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_config_corrupt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_reserved_2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_reserved_1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_retr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INVITE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BYTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_REGISTER] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CANCEL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OPTIONS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CONNECT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CONNACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PUBLISH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PUBACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PUBREC] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PUBREL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PUBCOMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SUBSCRIBE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SUBACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PINGREQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PINGRESP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DISCONNECT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AUTH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_UNASSIGNED] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dup] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_retain] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_yes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_username] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_password] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_will] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_will_retain] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_clean_session] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_threshold] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_limit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_track] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_by_src] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_by_dst] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_by_rule] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_by_both] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_count] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_seconds] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_src] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dst] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_load] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_state] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_save] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_memcap] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hashsize] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_relative] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endian] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dce] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bitmask] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_offset] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_depth] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_distance] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_within] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_oper] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rvalue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_result] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_server] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_client] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_either] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_name] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ip_src] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ip_dst] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ip_pair] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_expire] = {
    .visible = true,
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
  [sym_comma] = {
    .visible = true,
    .named = true,
  },
  [sym_math_operator] = {
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
  [sym_unit] = {
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
  [sym_hexstring] = {
    .visible = true,
    .named = true,
  },
  [sym_octal] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_constant] = {
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
  [alias_sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_min_max] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_operator] = {
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
    [0] = alias_sym_keyword,
  },
  [2] = {
    [0] = alias_sym_keyword,
    [1] = alias_sym_separator,
  },
  [3] = {
    [0] = alias_sym_operator,
  },
  [4] = {
    [1] = alias_sym_min_max,
  },
  [5] = {
    [0] = alias_sym_operator,
    [2] = alias_sym_min_max,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_math_operator, 2,
    sym_math_operator,
    alias_sym_operator,
  sym_text, 2,
    sym_text,
    alias_sym_keyword,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(961);
      if (lookahead == '!') ADVANCE(1005);
      if (lookahead == '"') ADVANCE(1943);
      if (lookahead == '#') ADVANCE(962);
      if (lookahead == '$') ADVANCE(1006);
      if (lookahead == '&') ADVANCE(1050);
      if (lookahead == '(') ADVANCE(1083);
      if (lookahead == ')') ADVANCE(1084);
      if (lookahead == '*') ADVANCE(1059);
      if (lookahead == '+') ADVANCE(1054);
      if (lookahead == ',') ADVANCE(1002);
      if (lookahead == '-') ADVANCE(1057);
      if (lookahead == '/') ADVANCE(1061);
      if (lookahead == '2') ADVANCE(1011);
      if (lookahead == ':') ADVANCE(1048);
      if (lookahead == ';') ADVANCE(1049);
      if (lookahead == '<') ADVANCE(1080);
      if (lookahead == '=') ADVANCE(1067);
      if (lookahead == '>') ADVANCE(1078);
      if (lookahead == 'A') ADVANCE(1018);
      if (lookahead == 'B') ADVANCE(1022);
      if (lookahead == 'C') ADVANCE(1017);
      if (lookahead == 'D') ADVANCE(1019);
      if (lookahead == 'G') ADVANCE(31);
      if (lookahead == 'I') ADVANCE(77);
      if (lookahead == 'K') ADVANCE(32);
      if (lookahead == 'M') ADVANCE(33);
      if (lookahead == 'O') ADVANCE(92);
      if (lookahead == 'P') ADVANCE(66);
      if (lookahead == 'R') ADVANCE(48);
      if (lookahead == 'S') ADVANCE(110);
      if (lookahead == 'U') ADVANCE(78);
      if (lookahead == '[') ADVANCE(1001);
      if (lookahead == ']') ADVANCE(1003);
      if (lookahead == '^') ADVANCE(1052);
      if (lookahead == 'a') ADVANCE(1024);
      if (lookahead == 'b') ADVANCE(1027);
      if (lookahead == 'c') ADVANCE(1029);
      if (lookahead == 'd') ADVANCE(1025);
      if (lookahead == 'e') ADVANCE(1028);
      if (lookahead == 'f') ADVANCE(1023);
      if (lookahead == 'g') ADVANCE(340);
      if (lookahead == 'h') ADVANCE(167);
      if (lookahead == 'i') ADVANCE(235);
      if (lookahead == 'k') ADVANCE(712);
      if (lookahead == 'l') ADVANCE(470);
      if (lookahead == 'm') ADVANCE(338);
      if (lookahead == 'n') ADVANCE(176);
      if (lookahead == 'o') ADVANCE(1953);
      if (lookahead == 'p') ADVANCE(168);
      if (lookahead == 'r') ADVANCE(286);
      if (lookahead == 's') ADVANCE(162);
      if (lookahead == 't') ADVANCE(248);
      if (lookahead == 'u') ADVANCE(290);
      if (lookahead == 'w') ADVANCE(174);
      if (lookahead == 'x') ADVANCE(1947);
      if (lookahead == 'y') ADVANCE(342);
      if (lookahead == 'E' ||
          lookahead == 'F') ADVANCE(1040);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1013);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '!') ADVANCE(1005);
      if (lookahead == '"') ADVANCE(1943);
      if (lookahead == '&') ADVANCE(1051);
      if (lookahead == '*') ADVANCE(1060);
      if (lookahead == '+') ADVANCE(1055);
      if (lookahead == '-') ADVANCE(1058);
      if (lookahead == '/') ADVANCE(1062);
      if (lookahead == '2') ADVANCE(1184);
      if (lookahead == '<') ADVANCE(1081);
      if (lookahead == '=') ADVANCE(1068);
      if (lookahead == '>') ADVANCE(1079);
      if (lookahead == 'A') ADVANCE(1108);
      if (lookahead == 'B') ADVANCE(1183);
      if (lookahead == 'C') ADVANCE(1101);
      if (lookahead == 'D') ADVANCE(1134);
      if (lookahead == 'I') ADVANCE(1148);
      if (lookahead == 'O') ADVANCE(1163);
      if (lookahead == 'P') ADVANCE(1139);
      if (lookahead == 'R') ADVANCE(1119);
      if (lookahead == 'S') ADVANCE(1181);
      if (lookahead == 'U') ADVANCE(1149);
      if (lookahead == '^') ADVANCE(1053);
      if (lookahead == 'a') ADVANCE(1286);
      if (lookahead == 'b') ADVANCE(1505);
      if (lookahead == 'c') ADVANCE(1556);
      if (lookahead == 'd') ADVANCE(1301);
      if (lookahead == 'e') ADVANCE(1526);
      if (lookahead == 'f') ADVANCE(1240);
      if (lookahead == 'g') ADVANCE(1384);
      if (lookahead == 'h') ADVANCE(1238);
      if (lookahead == 'i') ADVANCE(1604);
      if (lookahead == 'l') ADVANCE(1503);
      if (lookahead == 'm') ADVANCE(1381);
      if (lookahead == 'n') ADVANCE(1267);
      if (lookahead == 'o') ADVANCE(1954);
      if (lookahead == 'p') ADVANCE(1239);
      if (lookahead == 'r') ADVANCE(1343);
      if (lookahead == 's') ADVANCE(1234);
      if (lookahead == 't') ADVANCE(1492);
      if (lookahead == 'u') ADVANCE(1622);
      if (lookahead == 'w') ADVANCE(1244);
      if (lookahead == 'x') ADVANCE(1948);
      if (lookahead == 'y') ADVANCE(1382);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1091);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1940);
      if (lookahead != 0 &&
          (lookahead < '(' || ',' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == ')') ADVANCE(1084);
      if (lookahead == ',') ADVANCE(1002);
      if (lookahead == ':') ADVANCE(1048);
      if (lookahead == ';') ADVANCE(1049);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1939);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(') ADVANCE(1942);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '"') ADVANCE(1943);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1944);
      if (lookahead != 0) ADVANCE(1945);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(1005);
      if (lookahead == '"') ADVANCE(1943);
      if (lookahead == '&') ADVANCE(1050);
      if (lookahead == '*') ADVANCE(1059);
      if (lookahead == '+') ADVANCE(1054);
      if (lookahead == '-') ADVANCE(1056);
      if (lookahead == '/') ADVANCE(1061);
      if (lookahead == '2') ADVANCE(1085);
      if (lookahead == '<') ADVANCE(1080);
      if (lookahead == '=') ADVANCE(1067);
      if (lookahead == '>') ADVANCE(1078);
      if (lookahead == 'A') ADVANCE(44);
      if (lookahead == 'B') ADVANCE(112);
      if (lookahead == 'C') ADVANCE(30);
      if (lookahead == 'D') ADVANCE(63);
      if (lookahead == 'I') ADVANCE(77);
      if (lookahead == 'O') ADVANCE(92);
      if (lookahead == 'P') ADVANCE(66);
      if (lookahead == 'R') ADVANCE(48);
      if (lookahead == 'S') ADVANCE(110);
      if (lookahead == 'U') ADVANCE(78);
      if (lookahead == '^') ADVANCE(1052);
      if (lookahead == 'a') ADVANCE(231);
      if (lookahead == 'b') ADVANCE(469);
      if (lookahead == 'c') ADVANCE(525);
      if (lookahead == 'd') ADVANCE(262);
      if (lookahead == 'e') ADVANCE(512);
      if (lookahead == 'f') ADVANCE(198);
      if (lookahead == 'g') ADVANCE(340);
      if (lookahead == 'h') ADVANCE(166);
      if (lookahead == 'i') ADVANCE(591);
      if (lookahead == 'l') ADVANCE(470);
      if (lookahead == 'm') ADVANCE(337);
      if (lookahead == 'n') ADVANCE(177);
      if (lookahead == 'o') ADVANCE(1953);
      if (lookahead == 'p') ADVANCE(204);
      if (lookahead == 'r') ADVANCE(335);
      if (lookahead == 's') ADVANCE(163);
      if (lookahead == 't') ADVANCE(458);
      if (lookahead == 'u') ADVANCE(594);
      if (lookahead == 'w') ADVANCE(174);
      if (lookahead == 'x') ADVANCE(1947);
      if (lookahead == 'y') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1086);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(1004);
      if (lookahead == '$') ADVANCE(1006);
      if (lookahead == '(') ADVANCE(1083);
      if (lookahead == ',') ADVANCE(1002);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == ':') ADVANCE(1048);
      if (lookahead == '<') ADVANCE(25);
      if (lookahead == '[') ADVANCE(1001);
      if (lookahead == ']') ADVANCE(1003);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1013);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1040);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(1004);
      if (lookahead == ',') ADVANCE(1002);
      if (lookahead == '/') ADVANCE(957);
      if (lookahead == '[') ADVANCE(1001);
      if (lookahead == ']') ADVANCE(1003);
      if (lookahead == 'a') ADVANCE(1032);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1036);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(1040);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(1943);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == ')') ADVANCE(1084);
      if (lookahead == ',') ADVANCE(1002);
      if (lookahead == ':') ADVANCE(1048);
      if (lookahead == ';') ADVANCE(1049);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      END_STATE();
    case 9:
      if (lookahead == ',') ADVANCE(1002);
      if (lookahead == ';') ADVANCE(1049);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1087);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(955);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(16);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(956);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(959);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '/') ADVANCE(430);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(869);
      END_STATE();
    case 16:
      if (lookahead == '0') ADVANCE(2025);
      if (lookahead == '1') ADVANCE(2027);
      if (lookahead == '2') ADVANCE(2029);
      if (lookahead == '3') ADVANCE(2031);
      END_STATE();
    case 17:
      if (lookahead == '1') ADVANCE(2149);
      if (lookahead == '2') ADVANCE(2147);
      END_STATE();
    case 18:
      if (lookahead == '1') ADVANCE(11);
      END_STATE();
    case 19:
      if (lookahead == '1') ADVANCE(134);
      if (lookahead == '2') ADVANCE(159);
      if (lookahead == '3') ADVANCE(160);
      END_STATE();
    case 20:
      if (lookahead == '2') ADVANCE(991);
      END_STATE();
    case 21:
      if (lookahead == '2') ADVANCE(2021);
      if (lookahead == '3') ADVANCE(2023);
      END_STATE();
    case 22:
      if (lookahead == '3') ADVANCE(988);
      END_STATE();
    case 23:
      if (lookahead == '5') ADVANCE(992);
      END_STATE();
    case 24:
      if (lookahead == '>') ADVANCE(1082);
      END_STATE();
    case 25:
      if (lookahead == '>') ADVANCE(1076);
      END_STATE();
    case 26:
      if (lookahead == 'A') ADVANCE(100);
      END_STATE();
    case 27:
      if (lookahead == 'A') ADVANCE(38);
      if (lookahead == 'C') ADVANCE(87);
      if (lookahead == 'L') ADVANCE(68);
      if (lookahead == 'R') ADVANCE(51);
      END_STATE();
    case 28:
      if (lookahead == 'A') ADVANCE(41);
      if (lookahead == 'S') ADVANCE(40);
      END_STATE();
    case 29:
      if (lookahead == 'A') ADVANCE(43);
      if (lookahead == 'E') ADVANCE(45);
      END_STATE();
    case 30:
      if (lookahead == 'A') ADVANCE(79);
      if (lookahead == 'O') ADVANCE(82);
      END_STATE();
    case 31:
      if (lookahead == 'B') ADVANCE(1090);
      END_STATE();
    case 32:
      if (lookahead == 'B') ADVANCE(1088);
      END_STATE();
    case 33:
      if (lookahead == 'B') ADVANCE(1089);
      END_STATE();
    case 34:
      if (lookahead == 'B') ADVANCE(27);
      END_STATE();
    case 35:
      if (lookahead == 'B') ADVANCE(28);
      END_STATE();
    case 36:
      if (lookahead == 'B') ADVANCE(54);
      END_STATE();
    case 37:
      if (lookahead == 'C') ADVANCE(89);
      END_STATE();
    case 38:
      if (lookahead == 'C') ADVANCE(72);
      END_STATE();
    case 39:
      if (lookahead == 'C') ADVANCE(2175);
      if (lookahead == 'L') ADVANCE(2177);
      END_STATE();
    case 40:
      if (lookahead == 'C') ADVANCE(96);
      END_STATE();
    case 41:
      if (lookahead == 'C') ADVANCE(73);
      END_STATE();
    case 42:
      if (lookahead == 'C') ADVANCE(50);
      END_STATE();
    case 43:
      if (lookahead == 'C') ADVANCE(74);
      END_STATE();
    case 44:
      if (lookahead == 'C') ADVANCE(71);
      if (lookahead == 'U') ADVANCE(103);
      END_STATE();
    case 45:
      if (lookahead == 'C') ADVANCE(104);
      END_STATE();
    case 46:
      if (lookahead == 'C') ADVANCE(105);
      END_STATE();
    case 47:
      if (lookahead == 'D') ADVANCE(2193);
      END_STATE();
    case 48:
      if (lookahead == 'E') ADVANCE(59);
      END_STATE();
    case 49:
      if (lookahead == 'E') ADVANCE(2157);
      END_STATE();
    case 50:
      if (lookahead == 'E') ADVANCE(75);
      END_STATE();
    case 51:
      if (lookahead == 'E') ADVANCE(39);
      END_STATE();
    case 52:
      if (lookahead == 'E') ADVANCE(2155);
      END_STATE();
    case 53:
      if (lookahead == 'E') ADVANCE(93);
      END_STATE();
    case 54:
      if (lookahead == 'E') ADVANCE(2181);
      END_STATE();
    case 55:
      if (lookahead == 'E') ADVANCE(47);
      END_STATE();
    case 56:
      if (lookahead == 'E') ADVANCE(94);
      END_STATE();
    case 57:
      if (lookahead == 'E') ADVANCE(46);
      END_STATE();
    case 58:
      if (lookahead == 'G') ADVANCE(95);
      END_STATE();
    case 59:
      if (lookahead == 'G') ADVANCE(64);
      END_STATE();
    case 60:
      if (lookahead == 'G') ADVANCE(86);
      END_STATE();
    case 61:
      if (lookahead == 'H') ADVANCE(2191);
      END_STATE();
    case 62:
      if (lookahead == 'H') ADVANCE(2171);
      END_STATE();
    case 63:
      if (lookahead == 'I') ADVANCE(99);
      END_STATE();
    case 64:
      if (lookahead == 'I') ADVANCE(102);
      END_STATE();
    case 65:
      if (lookahead == 'I') ADVANCE(60);
      END_STATE();
    case 66:
      if (lookahead == 'I') ADVANCE(81);
      if (lookahead == 'U') ADVANCE(34);
      END_STATE();
    case 67:
      if (lookahead == 'I') ADVANCE(108);
      END_STATE();
    case 68:
      if (lookahead == 'I') ADVANCE(98);
      END_STATE();
    case 69:
      if (lookahead == 'I') ADVANCE(36);
      END_STATE();
    case 70:
      if (lookahead == 'I') ADVANCE(88);
      END_STATE();
    case 71:
      if (lookahead == 'K') ADVANCE(2163);
      END_STATE();
    case 72:
      if (lookahead == 'K') ADVANCE(2173);
      END_STATE();
    case 73:
      if (lookahead == 'K') ADVANCE(2183);
      END_STATE();
    case 74:
      if (lookahead == 'K') ADVANCE(2169);
      END_STATE();
    case 75:
      if (lookahead == 'L') ADVANCE(2161);
      END_STATE();
    case 76:
      if (lookahead == 'M') ADVANCE(90);
      END_STATE();
    case 77:
      if (lookahead == 'N') ADVANCE(111);
      END_STATE();
    case 78:
      if (lookahead == 'N') ADVANCE(26);
      END_STATE();
    case 79:
      if (lookahead == 'N') ADVANCE(42);
      END_STATE();
    case 80:
      if (lookahead == 'N') ADVANCE(29);
      END_STATE();
    case 81:
      if (lookahead == 'N') ADVANCE(58);
      END_STATE();
    case 82:
      if (lookahead == 'N') ADVANCE(80);
      END_STATE();
    case 83:
      if (lookahead == 'N') ADVANCE(97);
      END_STATE();
    case 84:
      if (lookahead == 'N') ADVANCE(85);
      END_STATE();
    case 85:
      if (lookahead == 'N') ADVANCE(57);
      END_STATE();
    case 86:
      if (lookahead == 'N') ADVANCE(55);
      END_STATE();
    case 87:
      if (lookahead == 'O') ADVANCE(76);
      END_STATE();
    case 88:
      if (lookahead == 'O') ADVANCE(83);
      END_STATE();
    case 89:
      if (lookahead == 'O') ADVANCE(84);
      END_STATE();
    case 90:
      if (lookahead == 'P') ADVANCE(2179);
      END_STATE();
    case 91:
      if (lookahead == 'P') ADVANCE(2187);
      END_STATE();
    case 92:
      if (lookahead == 'P') ADVANCE(107);
      END_STATE();
    case 93:
      if (lookahead == 'Q') ADVANCE(2185);
      if (lookahead == 'S') ADVANCE(91);
      END_STATE();
    case 94:
      if (lookahead == 'R') ADVANCE(2159);
      END_STATE();
    case 95:
      if (lookahead == 'R') ADVANCE(53);
      END_STATE();
    case 96:
      if (lookahead == 'R') ADVANCE(69);
      END_STATE();
    case 97:
      if (lookahead == 'S') ADVANCE(2165);
      END_STATE();
    case 98:
      if (lookahead == 'S') ADVANCE(62);
      END_STATE();
    case 99:
      if (lookahead == 'S') ADVANCE(37);
      END_STATE();
    case 100:
      if (lookahead == 'S') ADVANCE(101);
      END_STATE();
    case 101:
      if (lookahead == 'S') ADVANCE(65);
      END_STATE();
    case 102:
      if (lookahead == 'S') ADVANCE(109);
      END_STATE();
    case 103:
      if (lookahead == 'T') ADVANCE(61);
      END_STATE();
    case 104:
      if (lookahead == 'T') ADVANCE(2167);
      END_STATE();
    case 105:
      if (lookahead == 'T') ADVANCE(2189);
      END_STATE();
    case 106:
      if (lookahead == 'T') ADVANCE(49);
      END_STATE();
    case 107:
      if (lookahead == 'T') ADVANCE(70);
      END_STATE();
    case 108:
      if (lookahead == 'T') ADVANCE(52);
      END_STATE();
    case 109:
      if (lookahead == 'T') ADVANCE(56);
      END_STATE();
    case 110:
      if (lookahead == 'U') ADVANCE(35);
      END_STATE();
    case 111:
      if (lookahead == 'V') ADVANCE(67);
      END_STATE();
    case 112:
      if (lookahead == 'Y') ADVANCE(106);
      END_STATE();
    case 113:
      if (lookahead == '_') ADVANCE(228);
      END_STATE();
    case 114:
      if (lookahead == '_') ADVANCE(297);
      END_STATE();
    case 115:
      if (lookahead == '_') ADVANCE(250);
      if (lookahead == 'g') ADVANCE(450);
      END_STATE();
    case 116:
      if (lookahead == '_') ADVANCE(19);
      END_STATE();
    case 117:
      if (lookahead == '_') ADVANCE(17);
      END_STATE();
    case 118:
      if (lookahead == '_') ADVANCE(212);
      END_STATE();
    case 119:
      if (lookahead == '_') ADVANCE(403);
      END_STATE();
    case 120:
      if (lookahead == '_') ADVANCE(202);
      END_STATE();
    case 121:
      if (lookahead == '_') ADVANCE(775);
      END_STATE();
    case 122:
      if (lookahead == '_') ADVANCE(437);
      END_STATE();
    case 123:
      if (lookahead == '_') ADVANCE(912);
      END_STATE();
    case 124:
      if (lookahead == '_') ADVANCE(227);
      END_STATE();
    case 125:
      if (lookahead == '_') ADVANCE(804);
      END_STATE();
    case 126:
      if (lookahead == '_') ADVANCE(256);
      END_STATE();
    case 127:
      if (lookahead == '_') ADVANCE(823);
      END_STATE();
    case 128:
      if (lookahead == '_') ADVANCE(247);
      END_STATE();
    case 129:
      if (lookahead == '_') ADVANCE(274);
      END_STATE();
    case 130:
      if (lookahead == '_') ADVANCE(673);
      END_STATE();
    case 131:
      if (lookahead == '_') ADVANCE(827);
      END_STATE();
    case 132:
      if (lookahead == '_') ADVANCE(817);
      END_STATE();
    case 133:
      if (lookahead == '_') ADVANCE(315);
      END_STATE();
    case 134:
      if (lookahead == '_') ADVANCE(400);
      END_STATE();
    case 135:
      if (lookahead == '_') ADVANCE(398);
      END_STATE();
    case 136:
      if (lookahead == '_') ADVANCE(660);
      END_STATE();
    case 137:
      if (lookahead == '_') ADVANCE(431);
      END_STATE();
    case 138:
      if (lookahead == '_') ADVANCE(584);
      END_STATE();
    case 139:
      if (lookahead == '_') ADVANCE(913);
      END_STATE();
    case 140:
      if (lookahead == '_') ADVANCE(872);
      END_STATE();
    case 141:
      if (lookahead == '_') ADVANCE(199);
      END_STATE();
    case 142:
      if (lookahead == '_') ADVANCE(252);
      END_STATE();
    case 143:
      if (lookahead == '_') ADVANCE(401);
      END_STATE();
    case 144:
      if (lookahead == '_') ADVANCE(489);
      END_STATE();
    case 145:
      if (lookahead == '_') ADVANCE(206);
      END_STATE();
    case 146:
      if (lookahead == '_') ADVANCE(254);
      END_STATE();
    case 147:
      if (lookahead == '_') ADVANCE(257);
      END_STATE();
    case 148:
      if (lookahead == '_') ADVANCE(772);
      END_STATE();
    case 149:
      if (lookahead == '_') ADVANCE(439);
      END_STATE();
    case 150:
      if (lookahead == '_') ADVANCE(900);
      END_STATE();
    case 151:
      if (lookahead == '_') ADVANCE(767);
      END_STATE();
    case 152:
      if (lookahead == '_') ADVANCE(440);
      END_STATE();
    case 153:
      if (lookahead == '_') ADVANCE(903);
      END_STATE();
    case 154:
      if (lookahead == '_') ADVANCE(441);
      END_STATE();
    case 155:
      if (lookahead == '_') ADVANCE(442);
      END_STATE();
    case 156:
      if (lookahead == '_') ADVANCE(270);
      END_STATE();
    case 157:
      if (lookahead == '_') ADVANCE(773);
      END_STATE();
    case 158:
      if (lookahead == '_') ADVANCE(273);
      END_STATE();
    case 159:
      if (lookahead == '_') ADVANCE(418);
      END_STATE();
    case 160:
      if (lookahead == '_') ADVANCE(420);
      END_STATE();
    case 161:
      if (lookahead == '_') ADVANCE(923);
      END_STATE();
    case 162:
      if (lookahead == 'a') ADVANCE(863);
      if (lookahead == 'e') ADVANCE(237);
      if (lookahead == 'i') ADVANCE(681);
      if (lookahead == 'm') ADVANCE(225);
      if (lookahead == 'n') ADVANCE(582);
      if (lookahead == 'r') ADVANCE(238);
      if (lookahead == 's') ADVANCE(453);
      if (lookahead == 't') ADVANCE(164);
      END_STATE();
    case 163:
      if (lookahead == 'a') ADVANCE(863);
      if (lookahead == 'e') ADVANCE(237);
      if (lookahead == 'r') ADVANCE(238);
      if (lookahead == 's') ADVANCE(536);
      if (lookahead == 't') ADVANCE(164);
      END_STATE();
    case 164:
      if (lookahead == 'a') ADVANCE(743);
      if (lookahead == 'o') ADVANCE(695);
      if (lookahead == 'r') ADVANCE(472);
      END_STATE();
    case 165:
      if (lookahead == 'a') ADVANCE(2075);
      END_STATE();
    case 166:
      if (lookahead == 'a') ADVANCE(794);
      END_STATE();
    case 167:
      if (lookahead == 'a') ADVANCE(794);
      if (lookahead == 't') ADVANCE(868);
      END_STATE();
    case 168:
      if (lookahead == 'a') ADVANCE(728);
      END_STATE();
    case 169:
      if (lookahead == 'a') ADVANCE(629);
      END_STATE();
    case 170:
      if (lookahead == 'a') ADVANCE(949);
      if (lookahead == 'e') ADVANCE(908);
      END_STATE();
    case 171:
      if (lookahead == 'a') ADVANCE(230);
      if (lookahead == 'd') ADVANCE(481);
      END_STATE();
    case 172:
      if (lookahead == 'a') ADVANCE(230);
      if (lookahead == 'd') ADVANCE(481);
      if (lookahead == 'i') ADVANCE(686);
      END_STATE();
    case 173:
      if (lookahead == 'a') ADVANCE(275);
      if (lookahead == 'c') ADVANCE(185);
      END_STATE();
    case 174:
      if (lookahead == 'a') ADVANCE(732);
      if (lookahead == 'i') ADVANCE(537);
      if (lookahead == 'r') ADVANCE(479);
      END_STATE();
    case 175:
      if (lookahead == 'a') ADVANCE(563);
      END_STATE();
    case 176:
      if (lookahead == 'a') ADVANCE(580);
      if (lookahead == 'e') ADVANCE(383);
      if (lookahead == 'f') ADVANCE(778);
      if (lookahead == 'o') ADVANCE(2203);
      if (lookahead == 't') ADVANCE(679);
      END_STATE();
    case 177:
      if (lookahead == 'a') ADVANCE(580);
      if (lookahead == 'e') ADVANCE(383);
      if (lookahead == 'o') ADVANCE(2203);
      END_STATE();
    case 178:
      if (lookahead == 'a') ADVANCE(276);
      if (lookahead == 'c') ADVANCE(654);
      if (lookahead == 'j') ADVANCE(388);
      if (lookahead == 'l') ADVANCE(193);
      if (lookahead == 'q') ADVANCE(922);
      if (lookahead == 's') ADVANCE(354);
      if (lookahead == 't') ADVANCE(191);
      END_STATE();
    case 179:
      if (lookahead == 'a') ADVANCE(276);
      if (lookahead == 'c') ADVANCE(654);
      if (lookahead == 'l') ADVANCE(193);
      if (lookahead == 'q') ADVANCE(922);
      if (lookahead == 's') ADVANCE(354);
      if (lookahead == 't') ADVANCE(191);
      END_STATE();
    case 180:
      if (lookahead == 'a') ADVANCE(444);
      END_STATE();
    case 181:
      if (lookahead == 'a') ADVANCE(229);
      END_STATE();
    case 182:
      if (lookahead == 'a') ADVANCE(445);
      END_STATE();
    case 183:
      if (lookahead == 'a') ADVANCE(240);
      if (lookahead == 'u') ADVANCE(305);
      END_STATE();
    case 184:
      if (lookahead == 'a') ADVANCE(799);
      if (lookahead == 'e') ADVANCE(169);
      if (lookahead == 'i') ADVANCE(392);
      if (lookahead == 'o') ADVANCE(801);
      END_STATE();
    case 185:
      if (lookahead == 'a') ADVANCE(541);
      END_STATE();
    case 186:
      if (lookahead == 'a') ADVANCE(631);
      END_STATE();
    case 187:
      if (lookahead == 'a') ADVANCE(590);
      END_STATE();
    case 188:
      if (lookahead == 'a') ADVANCE(595);
      END_STATE();
    case 189:
      if (lookahead == 'a') ADVANCE(575);
      END_STATE();
    case 190:
      if (lookahead == 'a') ADVANCE(576);
      END_STATE();
    case 191:
      if (lookahead == 'a') ADVANCE(483);
      if (lookahead == 'r') ADVANCE(2151);
      END_STATE();
    case 192:
      if (lookahead == 'a') ADVANCE(792);
      END_STATE();
    case 193:
      if (lookahead == 'a') ADVANCE(890);
      END_STATE();
    case 194:
      if (lookahead == 'a') ADVANCE(689);
      END_STATE();
    case 195:
      if (lookahead == 'a') ADVANCE(689);
      if (lookahead == 'm') ADVANCE(393);
      END_STATE();
    case 196:
      if (lookahead == 'a') ADVANCE(797);
      END_STATE();
    case 197:
      if (lookahead == 'a') ADVANCE(693);
      END_STATE();
    case 198:
      if (lookahead == 'a') ADVANCE(565);
      if (lookahead == 'i') ADVANCE(540);
      if (lookahead == 'r') ADVANCE(349);
      END_STATE();
    case 199:
      if (lookahead == 'a') ADVANCE(702);
      END_STATE();
    case 200:
      if (lookahead == 'a') ADVANCE(720);
      END_STATE();
    case 201:
      if (lookahead == 'a') ADVANCE(844);
      END_STATE();
    case 202:
      if (lookahead == 'a') ADVANCE(905);
      if (lookahead == 'c') ADVANCE(559);
      END_STATE();
    case 203:
      if (lookahead == 'a') ADVANCE(878);
      END_STATE();
    case 204:
      if (lookahead == 'a') ADVANCE(729);
      END_STATE();
    case 205:
      if (lookahead == 'a') ADVANCE(490);
      END_STATE();
    case 206:
      if (lookahead == 'a') ADVANCE(703);
      END_STATE();
    case 207:
      if (lookahead == 'a') ADVANCE(585);
      END_STATE();
    case 208:
      if (lookahead == 'a') ADVANCE(754);
      END_STATE();
    case 209:
      if (lookahead == 'a') ADVANCE(807);
      END_STATE();
    case 210:
      if (lookahead == 'a') ADVANCE(874);
      END_STATE();
    case 211:
      if (lookahead == 'a') ADVANCE(567);
      END_STATE();
    case 212:
      if (lookahead == 'a') ADVANCE(704);
      if (lookahead == 'd') ADVANCE(203);
      END_STATE();
    case 213:
      if (lookahead == 'a') ADVANCE(292);
      END_STATE();
    case 214:
      if (lookahead == 'a') ADVANCE(755);
      END_STATE();
    case 215:
      if (lookahead == 'a') ADVANCE(810);
      END_STATE();
    case 216:
      if (lookahead == 'a') ADVANCE(884);
      END_STATE();
    case 217:
      if (lookahead == 'a') ADVANCE(491);
      END_STATE();
    case 218:
      if (lookahead == 'a') ADVANCE(756);
      END_STATE();
    case 219:
      if (lookahead == 'a') ADVANCE(885);
      END_STATE();
    case 220:
      if (lookahead == 'a') ADVANCE(886);
      END_STATE();
    case 221:
      if (lookahead == 'a') ADVANCE(233);
      END_STATE();
    case 222:
      if (lookahead == 'a') ADVANCE(234);
      if (lookahead == 't') ADVANCE(186);
      END_STATE();
    case 223:
      if (lookahead == 'b') ADVANCE(23);
      END_STATE();
    case 224:
      if (lookahead == 'b') ADVANCE(995);
      END_STATE();
    case 225:
      if (lookahead == 'b') ADVANCE(981);
      if (lookahead == 't') ADVANCE(690);
      END_STATE();
    case 226:
      if (lookahead == 'b') ADVANCE(911);
      END_STATE();
    case 227:
      if (lookahead == 'b') ADVANCE(910);
      END_STATE();
    case 228:
      if (lookahead == 'b') ADVANCE(667);
      if (lookahead == 'd') ADVANCE(805);
      if (lookahead == 'r') ADVANCE(920);
      if (lookahead == 's') ADVANCE(736);
      END_STATE();
    case 229:
      if (lookahead == 'b') ADVANCE(543);
      END_STATE();
    case 230:
      if (lookahead == 'b') ADVANCE(551);
      END_STATE();
    case 231:
      if (lookahead == 'b') ADVANCE(647);
      if (lookahead == 'c') ADVANCE(855);
      if (lookahead == 'l') ADVANCE(534);
      if (lookahead == 'n') ADVANCE(945);
      if (lookahead == 's') ADVANCE(793);
      if (lookahead == 'u') ADVANCE(829);
      END_STATE();
    case 232:
      if (lookahead == 'b') ADVANCE(561);
      END_STATE();
    case 233:
      if (lookahead == 'b') ADVANCE(571);
      END_STATE();
    case 234:
      if (lookahead == 'b') ADVANCE(573);
      END_STATE();
    case 235:
      if (lookahead == 'c') ADVANCE(581);
      if (lookahead == 'k') ADVANCE(299);
      if (lookahead == 'm') ADVANCE(195);
      if (lookahead == 'n') ADVANCE(475);
      if (lookahead == 'p') ADVANCE(977);
      if (lookahead == 's') ADVANCE(602);
      END_STATE();
    case 236:
      if (lookahead == 'c') ADVANCE(581);
      if (lookahead == 'k') ADVANCE(299);
      if (lookahead == 'm') ADVANCE(194);
      if (lookahead == 'p') ADVANCE(976);
      END_STATE();
    case 237:
      if (lookahead == 'c') ADVANCE(1963);
      if (lookahead == 'l') ADVANCE(395);
      if (lookahead == 'r') ADVANCE(928);
      if (lookahead == 't') ADVANCE(1975);
      END_STATE();
    case 238:
      if (lookahead == 'c') ADVANCE(2237);
      END_STATE();
    case 239:
      if (lookahead == 'c') ADVANCE(1965);
      END_STATE();
    case 240:
      if (lookahead == 'c') ADVANCE(521);
      END_STATE();
    case 241:
      if (lookahead == 'c') ADVANCE(2225);
      END_STATE();
    case 242:
      if (lookahead == 'c') ADVANCE(983);
      END_STATE();
    case 243:
      if (lookahead == 'c') ADVANCE(2284);
      END_STATE();
    case 244:
      if (lookahead == 'c') ADVANCE(970);
      END_STATE();
    case 245:
      if (lookahead == 'c') ADVANCE(665);
      END_STATE();
    case 246:
      if (lookahead == 'c') ADVANCE(665);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1946);
      END_STATE();
    case 247:
      if (lookahead == 'c') ADVANCE(916);
      END_STATE();
    case 248:
      if (lookahead == 'c') ADVANCE(682);
      if (lookahead == 'f') ADVANCE(876);
      if (lookahead == 'h') ADVANCE(759);
      if (lookahead == 'l') ADVANCE(779);
      if (lookahead == 'o') ADVANCE(115);
      if (lookahead == 'r') ADVANCE(183);
      if (lookahead == 's') ADVANCE(1961);
      if (lookahead == 'x') ADVANCE(2017);
      if (lookahead == 'y') ADVANCE(698);
      END_STATE();
    case 249:
      if (lookahead == 'c') ADVANCE(682);
      if (lookahead == 'f') ADVANCE(876);
      if (lookahead == 'l') ADVANCE(779);
      END_STATE();
    case 250:
      if (lookahead == 'c') ADVANCE(542);
      if (lookahead == 's') ADVANCE(390);
      END_STATE();
    case 251:
      if (lookahead == 'c') ADVANCE(917);
      END_STATE();
    case 252:
      if (lookahead == 'c') ADVANCE(669);
      END_STATE();
    case 253:
      if (lookahead == 'c') ADVANCE(684);
      END_STATE();
    case 254:
      if (lookahead == 'c') ADVANCE(663);
      END_STATE();
    case 255:
      if (lookahead == 'c') ADVANCE(197);
      END_STATE();
    case 256:
      if (lookahead == 'c') ADVANCE(546);
      END_STATE();
    case 257:
      if (lookahead == 'c') ADVANCE(649);
      END_STATE();
    case 258:
      if (lookahead == 'c') ADVANCE(358);
      END_STATE();
    case 259:
      if (lookahead == 'c') ADVANCE(840);
      END_STATE();
    case 260:
      if (lookahead == 'c') ADVANCE(842);
      END_STATE();
    case 261:
      if (lookahead == 'c') ADVANCE(316);
      END_STATE();
    case 262:
      if (lookahead == 'c') ADVANCE(336);
      if (lookahead == 'e') ADVANCE(526);
      if (lookahead == 'i') ADVANCE(735);
      if (lookahead == 's') ADVANCE(830);
      if (lookahead == 'u') ADVANCE(677);
      END_STATE();
    case 263:
      if (lookahead == 'c') ADVANCE(655);
      END_STATE();
    case 264:
      if (lookahead == 'c') ADVANCE(873);
      END_STATE();
    case 265:
      if (lookahead == 'c') ADVANCE(893);
      END_STATE();
    case 266:
      if (lookahead == 'c') ADVANCE(493);
      END_STATE();
    case 267:
      if (lookahead == 'c') ADVANCE(506);
      END_STATE();
    case 268:
      if (lookahead == 'c') ADVANCE(380);
      if (lookahead == 'h') ADVANCE(253);
      if (lookahead == 'n') ADVANCE(676);
      if (lookahead == 'r') ADVANCE(652);
      END_STATE();
    case 269:
      if (lookahead == 'c') ADVANCE(219);
      END_STATE();
    case 270:
      if (lookahead == 'c') ADVANCE(672);
      END_STATE();
    case 271:
      if (lookahead == 'c') ADVANCE(508);
      END_STATE();
    case 272:
      if (lookahead == 'c') ADVANCE(147);
      END_STATE();
    case 273:
      if (lookahead == 'c') ADVANCE(570);
      if (lookahead == 's') ADVANCE(417);
      END_STATE();
    case 274:
      if (lookahead == 'c') ADVANCE(572);
      END_STATE();
    case 275:
      if (lookahead == 'd') ADVANCE(2241);
      END_STATE();
    case 276:
      if (lookahead == 'd') ADVANCE(2047);
      END_STATE();
    case 277:
      if (lookahead == 'd') ADVANCE(1971);
      END_STATE();
    case 278:
      if (lookahead == 'd') ADVANCE(2209);
      END_STATE();
    case 279:
      if (lookahead == 'd') ADVANCE(2219);
      END_STATE();
    case 280:
      if (lookahead == 'd') ADVANCE(1995);
      END_STATE();
    case 281:
      if (lookahead == 'd') ADVANCE(1997);
      END_STATE();
    case 282:
      if (lookahead == 'd') ADVANCE(2085);
      END_STATE();
    case 283:
      if (lookahead == 'd') ADVANCE(2087);
      END_STATE();
    case 284:
      if (lookahead == 'd') ADVANCE(226);
      END_STATE();
    case 285:
      if (lookahead == 'd') ADVANCE(148);
      END_STATE();
    case 286:
      if (lookahead == 'd') ADVANCE(680);
      if (lookahead == 'e') ADVANCE(178);
      if (lookahead == 'f') ADVANCE(224);
      if (lookahead == 'r') ADVANCE(1955);
      if (lookahead == 'v') ADVANCE(175);
      END_STATE();
    case 287:
      if (lookahead == 'd') ADVANCE(680);
      if (lookahead == 'e') ADVANCE(519);
      if (lookahead == 'f') ADVANCE(224);
      END_STATE();
    case 288:
      if (lookahead == 'd') ADVANCE(140);
      END_STATE();
    case 289:
      if (lookahead == 'd') ADVANCE(683);
      END_STATE();
    case 290:
      if (lookahead == 'd') ADVANCE(683);
      if (lookahead == 'n') ADVANCE(523);
      if (lookahead == 's') ADVANCE(347);
      END_STATE();
    case 291:
      if (lookahead == 'd') ADVANCE(122);
      END_STATE();
    case 292:
      if (lookahead == 'd') ADVANCE(133);
      END_STATE();
    case 293:
      if (lookahead == 'd') ADVANCE(783);
      END_STATE();
    case 294:
      if (lookahead == 'd') ADVANCE(128);
      END_STATE();
    case 295:
      if (lookahead == 'd') ADVANCE(117);
      END_STATE();
    case 296:
      if (lookahead == 'd') ADVANCE(399);
      END_STATE();
    case 297:
      if (lookahead == 'd') ADVANCE(806);
      if (lookahead == 'p') ADVANCE(205);
      if (lookahead == 's') ADVANCE(738);
      END_STATE();
    case 298:
      if (lookahead == 'd') ADVANCE(151);
      END_STATE();
    case 299:
      if (lookahead == 'e') ADVANCE(924);
      END_STATE();
    case 300:
      if (lookahead == 'e') ADVANCE(636);
      END_STATE();
    case 301:
      if (lookahead == 'e') ADVANCE(2015);
      END_STATE();
    case 302:
      if (lookahead == 'e') ADVANCE(950);
      END_STATE();
    case 303:
      if (lookahead == 'e') ADVANCE(2282);
      END_STATE();
    case 304:
      if (lookahead == 'e') ADVANCE(2246);
      END_STATE();
    case 305:
      if (lookahead == 'e') ADVANCE(2201);
      END_STATE();
    case 306:
      if (lookahead == 'e') ADVANCE(2217);
      END_STATE();
    case 307:
      if (lookahead == 'e') ADVANCE(2205);
      END_STATE();
    case 308:
      if (lookahead == 'e') ADVANCE(2244);
      END_STATE();
    case 309:
      if (lookahead == 'e') ADVANCE(2049);
      END_STATE();
    case 310:
      if (lookahead == 'e') ADVANCE(2290);
      END_STATE();
    case 311:
      if (lookahead == 'e') ADVANCE(2272);
      END_STATE();
    case 312:
      if (lookahead == 'e') ADVANCE(1979);
      END_STATE();
    case 313:
      if (lookahead == 'e') ADVANCE(2229);
      END_STATE();
    case 314:
      if (lookahead == 'e') ADVANCE(2053);
      END_STATE();
    case 315:
      if (lookahead == 'e') ADVANCE(944);
      END_STATE();
    case 316:
      if (lookahead == 'e') ADVANCE(2266);
      END_STATE();
    case 317:
      if (lookahead == 'e') ADVANCE(2249);
      END_STATE();
    case 318:
      if (lookahead == 'e') ADVANCE(2251);
      END_STATE();
    case 319:
      if (lookahead == 'e') ADVANCE(2114);
      END_STATE();
    case 320:
      if (lookahead == 'e') ADVANCE(2207);
      END_STATE();
    case 321:
      if (lookahead == 'e') ADVANCE(2127);
      END_STATE();
    case 322:
      if (lookahead == 'e') ADVANCE(2095);
      END_STATE();
    case 323:
      if (lookahead == 'e') ADVANCE(2105);
      END_STATE();
    case 324:
      if (lookahead == 'e') ADVANCE(2097);
      END_STATE();
    case 325:
      if (lookahead == 'e') ADVANCE(2099);
      END_STATE();
    case 326:
      if (lookahead == 'e') ADVANCE(2059);
      END_STATE();
    case 327:
      if (lookahead == 'e') ADVANCE(2091);
      END_STATE();
    case 328:
      if (lookahead == 'e') ADVANCE(2131);
      END_STATE();
    case 329:
      if (lookahead == 'e') ADVANCE(2055);
      END_STATE();
    case 330:
      if (lookahead == 'e') ADVANCE(2067);
      END_STATE();
    case 331:
      if (lookahead == 'e') ADVANCE(711);
      END_STATE();
    case 332:
      if (lookahead == 'e') ADVANCE(2103);
      END_STATE();
    case 333:
      if (lookahead == 'e') ADVANCE(2093);
      END_STATE();
    case 334:
      if (lookahead == 'e') ADVANCE(2115);
      END_STATE();
    case 335:
      if (lookahead == 'e') ADVANCE(179);
      if (lookahead == 'r') ADVANCE(1955);
      if (lookahead == 'v') ADVANCE(175);
      END_STATE();
    case 336:
      if (lookahead == 'e') ADVANCE(2255);
      END_STATE();
    case 337:
      if (lookahead == 'e') ADVANCE(577);
      END_STATE();
    case 338:
      if (lookahead == 'e') ADVANCE(577);
      if (lookahead == 'o') ADVANCE(284);
      END_STATE();
    case 339:
      if (lookahead == 'e') ADVANCE(239);
      if (lookahead == 't') ADVANCE(181);
      END_STATE();
    case 340:
      if (lookahead == 'e') ADVANCE(858);
      END_STATE();
    case 341:
      if (lookahead == 'e') ADVANCE(948);
      END_STATE();
    case 342:
      if (lookahead == 'e') ADVANCE(780);
      END_STATE();
    case 343:
      if (lookahead == 'e') ADVANCE(734);
      END_STATE();
    case 344:
      if (lookahead == 'e') ADVANCE(734);
      if (lookahead == 'l') ADVANCE(125);
      if (lookahead == 'r') ADVANCE(345);
      END_STATE();
    case 345:
      if (lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 346:
      if (lookahead == 'e') ADVANCE(264);
      END_STATE();
    case 347:
      if (lookahead == 'e') ADVANCE(730);
      END_STATE();
    case 348:
      if (lookahead == 'e') ADVANCE(280);
      END_STATE();
    case 349:
      if (lookahead == 'e') ADVANCE(302);
      if (lookahead == 'o') ADVANCE(578);
      END_STATE();
    case 350:
      if (lookahead == 'e') ADVANCE(281);
      END_STATE();
    case 351:
      if (lookahead == 'e') ADVANCE(833);
      END_STATE();
    case 352:
      if (lookahead == 'e') ADVANCE(282);
      END_STATE();
    case 353:
      if (lookahead == 'e') ADVANCE(283);
      END_STATE();
    case 354:
      if (lookahead == 'e') ADVANCE(760);
      if (lookahead == 'p') ADVANCE(650);
      if (lookahead == 'u') ADVANCE(552);
      END_STATE();
    case 355:
      if (lookahead == 'e') ADVANCE(545);
      END_STATE();
    case 356:
      if (lookahead == 'e') ADVANCE(715);
      END_STATE();
    case 357:
      if (lookahead == 'e') ADVANCE(716);
      END_STATE();
    case 358:
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 359:
      if (lookahead == 'e') ADVANCE(251);
      END_STATE();
    case 360:
      if (lookahead == 'e') ADVANCE(819);
      END_STATE();
    case 361:
      if (lookahead == 'e') ADVANCE(835);
      if (lookahead == 'o') ADVANCE(564);
      END_STATE();
    case 362:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 363:
      if (lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 364:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 365:
      if (lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 366:
      if (lookahead == 'e') ADVANCE(839);
      END_STATE();
    case 367:
      if (lookahead == 'e') ADVANCE(764);
      END_STATE();
    case 368:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 369:
      if (lookahead == 'e') ADVANCE(718);
      END_STATE();
    case 370:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 371:
      if (lookahead == 'e') ADVANCE(771);
      END_STATE();
    case 372:
      if (lookahead == 'e') ADVANCE(719);
      END_STATE();
    case 373:
      if (lookahead == 'e') ADVANCE(809);
      END_STATE();
    case 374:
      if (lookahead == 'e') ADVANCE(896);
      END_STATE();
    case 375:
      if (lookahead == 'e') ADVANCE(747);
      END_STATE();
    case 376:
      if (lookahead == 'e') ADVANCE(845);
      END_STATE();
    case 377:
      if (lookahead == 'e') ADVANCE(871);
      END_STATE();
    case 378:
      if (lookahead == 'e') ADVANCE(761);
      END_STATE();
    case 379:
      if (lookahead == 'e') ADVANCE(727);
      END_STATE();
    case 380:
      if (lookahead == 'e') ADVANCE(744);
      END_STATE();
    case 381:
      if (lookahead == 'e') ADVANCE(609);
      END_STATE();
    case 382:
      if (lookahead == 'e') ADVANCE(796);
      END_STATE();
    case 383:
      if (lookahead == 'e') ADVANCE(288);
      END_STATE();
    case 384:
      if (lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 385:
      if (lookahead == 'e') ADVANCE(748);
      END_STATE();
    case 386:
      if (lookahead == 'e') ADVANCE(803);
      END_STATE();
    case 387:
      if (lookahead == 'e') ADVANCE(196);
      END_STATE();
    case 388:
      if (lookahead == 'e') ADVANCE(259);
      END_STATE();
    case 389:
      if (lookahead == 'e') ADVANCE(397);
      END_STATE();
    case 390:
      if (lookahead == 'e') ADVANCE(768);
      END_STATE();
    case 391:
      if (lookahead == 'e') ADVANCE(548);
      END_STATE();
    case 392:
      if (lookahead == 'e') ADVANCE(614);
      END_STATE();
    case 393:
      if (lookahead == 'e') ADVANCE(291);
      END_STATE();
    case 394:
      if (lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 395:
      if (lookahead == 'e') ADVANCE(260);
      END_STATE();
    case 396:
      if (lookahead == 'e') ADVANCE(617);
      END_STATE();
    case 397:
      if (lookahead == 'e') ADVANCE(953);
      END_STATE();
    case 398:
      if (lookahead == 'e') ADVANCE(751);
      END_STATE();
    case 399:
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 400:
      if (lookahead == 'e') ADVANCE(934);
      END_STATE();
    case 401:
      if (lookahead == 'e') ADVANCE(808);
      END_STATE();
    case 402:
      if (lookahead == 'e') ADVANCE(621);
      END_STATE();
    case 403:
      if (lookahead == 'e') ADVANCE(752);
      if (lookahead == 'f') ADVANCE(511);
      if (lookahead == 'r') ADVANCE(331);
      END_STATE();
    case 404:
      if (lookahead == 'e') ADVANCE(811);
      END_STATE();
    case 405:
      if (lookahead == 'e') ADVANCE(295);
      END_STATE();
    case 406:
      if (lookahead == 'e') ADVANCE(812);
      END_STATE();
    case 407:
      if (lookahead == 'e') ADVANCE(624);
      END_STATE();
    case 408:
      if (lookahead == 'e') ADVANCE(625);
      END_STATE();
    case 409:
      if (lookahead == 'e') ADVANCE(626);
      END_STATE();
    case 410:
      if (lookahead == 'e') ADVANCE(627);
      END_STATE();
    case 411:
      if (lookahead == 'e') ADVANCE(637);
      END_STATE();
    case 412:
      if (lookahead == 'e') ADVANCE(628);
      END_STATE();
    case 413:
      if (lookahead == 'e') ADVANCE(265);
      END_STATE();
    case 414:
      if (lookahead == 'e') ADVANCE(825);
      END_STATE();
    case 415:
      if (lookahead == 'e') ADVANCE(826);
      END_STATE();
    case 416:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 417:
      if (lookahead == 'e') ADVANCE(770);
      END_STATE();
    case 418:
      if (lookahead == 'e') ADVANCE(935);
      END_STATE();
    case 419:
      if (lookahead == 'e') ADVANCE(774);
      END_STATE();
    case 420:
      if (lookahead == 'e') ADVANCE(936);
      END_STATE();
    case 421:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 422:
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 423:
      if (lookahead == 'e') ADVANCE(298);
      END_STATE();
    case 424:
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 425:
      if (lookahead == 'f') ADVANCE(740);
      if (lookahead == 's') ADVANCE(892);
      END_STATE();
    case 426:
      if (lookahead == 'f') ADVANCE(778);
      if (lookahead == 't') ADVANCE(679);
      END_STATE();
    case 427:
      if (lookahead == 'f') ADVANCE(438);
      END_STATE();
    case 428:
      if (lookahead == 'f') ADVANCE(818);
      END_STATE();
    case 429:
      if (lookahead == 'f') ADVANCE(468);
      END_STATE();
    case 430:
      if (lookahead == 'f') ADVANCE(538);
      END_STATE();
    case 431:
      if (lookahead == 'f') ADVANCE(503);
      END_STATE();
    case 432:
      if (lookahead == 'f') ADVANCE(643);
      END_STATE();
    case 433:
      if (lookahead == 'f') ADVANCE(477);
      END_STATE();
    case 434:
      if (lookahead == 'f') ADVANCE(741);
      if (lookahead == 's') ADVANCE(902);
      END_STATE();
    case 435:
      if (lookahead == 'f') ADVANCE(480);
      END_STATE();
    case 436:
      if (lookahead == 'f') ADVANCE(550);
      END_STATE();
    case 437:
      if (lookahead == 'f') ADVANCE(753);
      END_STATE();
    case 438:
      if (lookahead == 'f') ADVANCE(375);
      END_STATE();
    case 439:
      if (lookahead == 'f') ADVANCE(505);
      END_STATE();
    case 440:
      if (lookahead == 'f') ADVANCE(507);
      END_STATE();
    case 441:
      if (lookahead == 'f') ADVANCE(509);
      END_STATE();
    case 442:
      if (lookahead == 'f') ADVANCE(510);
      END_STATE();
    case 443:
      if (lookahead == 'g') ADVANCE(2260);
      END_STATE();
    case 444:
      if (lookahead == 'g') ADVANCE(2007);
      END_STATE();
    case 445:
      if (lookahead == 'g') ADVANCE(2005);
      END_STATE();
    case 446:
      if (lookahead == 'g') ADVANCE(2083);
      END_STATE();
    case 447:
      if (lookahead == 'g') ADVANCE(2107);
      END_STATE();
    case 448:
      if (lookahead == 'g') ADVANCE(2143);
      END_STATE();
    case 449:
      if (lookahead == 'g') ADVANCE(612);
      END_STATE();
    case 450:
      if (lookahead == 'g') ADVANCE(553);
      END_STATE();
    case 451:
      if (lookahead == 'g') ADVANCE(146);
      if (lookahead == 'r') ADVANCE(574);
      END_STATE();
    case 452:
      if (lookahead == 'h') ADVANCE(984);
      END_STATE();
    case 453:
      if (lookahead == 'h') ADVANCE(984);
      if (lookahead == 'l') ADVANCE(925);
      if (lookahead == 'n') ADVANCE(14);
      if (lookahead == 'r') ADVANCE(714);
      END_STATE();
    case 454:
      if (lookahead == 'h') ADVANCE(2013);
      END_STATE();
    case 455:
      if (lookahead == 'h') ADVANCE(2264);
      END_STATE();
    case 456:
      if (lookahead == 'h') ADVANCE(2231);
      END_STATE();
    case 457:
      if (lookahead == 'h') ADVANCE(972);
      END_STATE();
    case 458:
      if (lookahead == 'h') ADVANCE(759);
      if (lookahead == 'l') ADVANCE(791);
      if (lookahead == 'o') ADVANCE(115);
      if (lookahead == 'r') ADVANCE(183);
      if (lookahead == 's') ADVANCE(1961);
      if (lookahead == 'x') ADVANCE(2017);
      if (lookahead == 'y') ADVANCE(698);
      END_STATE();
    case 459:
      if (lookahead == 'h') ADVANCE(653);
      END_STATE();
    case 460:
      if (lookahead == 'h') ADVANCE(355);
      if (lookahead == 'k') ADVANCE(947);
      END_STATE();
    case 461:
      if (lookahead == 'h') ADVANCE(348);
      END_STATE();
    case 462:
      if (lookahead == 'h') ADVANCE(350);
      END_STATE();
    case 463:
      if (lookahead == 'h') ADVANCE(800);
      END_STATE();
    case 464:
      if (lookahead == 'h') ADVANCE(356);
      END_STATE();
    case 465:
      if (lookahead == 'h') ADVANCE(487);
      END_STATE();
    case 466:
      if (lookahead == 'h') ADVANCE(391);
      if (lookahead == 'k') ADVANCE(341);
      END_STATE();
    case 467:
      if (lookahead == 'h') ADVANCE(396);
      END_STATE();
    case 468:
      if (lookahead == 'i') ADVANCE(451);
      END_STATE();
    case 469:
      if (lookahead == 'i') ADVANCE(861);
      if (lookahead == 'o') ADVANCE(856);
      if (lookahead == 'y') ADVANCE(113);
      END_STATE();
    case 470:
      if (lookahead == 'i') ADVANCE(589);
      if (lookahead == 'o') ADVANCE(173);
      if (lookahead == 's') ADVANCE(731);
      END_STATE();
    case 471:
      if (lookahead == 'i') ADVANCE(449);
      END_STATE();
    case 472:
      if (lookahead == 'i') ADVANCE(603);
      END_STATE();
    case 473:
      if (lookahead == 'i') ADVANCE(927);
      END_STATE();
    case 474:
      if (lookahead == 'i') ADVANCE(277);
      END_STATE();
    case 475:
      if (lookahead == 'i') ADVANCE(866);
      END_STATE();
    case 476:
      if (lookahead == 'i') ADVANCE(681);
      if (lookahead == 'm') ADVANCE(225);
      if (lookahead == 'n') ADVANCE(582);
      if (lookahead == 's') ADVANCE(452);
      END_STATE();
    case 477:
      if (lookahead == 'i') ADVANCE(446);
      END_STATE();
    case 478:
      if (lookahead == 'i') ADVANCE(258);
      END_STATE();
    case 479:
      if (lookahead == 'i') ADVANCE(877);
      END_STATE();
    case 480:
      if (lookahead == 'i') ADVANCE(447);
      END_STATE();
    case 481:
      if (lookahead == 'i') ADVANCE(188);
      END_STATE();
    case 482:
      if (lookahead == 'i') ADVANCE(745);
      END_STATE();
    case 483:
      if (lookahead == 'i') ADVANCE(596);
      END_STATE();
    case 484:
      if (lookahead == 'i') ADVANCE(686);
      END_STATE();
    case 485:
      if (lookahead == 'i') ADVANCE(266);
      END_STATE();
    case 486:
      if (lookahead == 'i') ADVANCE(834);
      END_STATE();
    case 487:
      if (lookahead == 'i') ADVANCE(598);
      END_STATE();
    case 488:
      if (lookahead == 'i') ADVANCE(820);
      END_STATE();
    case 489:
      if (lookahead == 'i') ADVANCE(606);
      END_STATE();
    case 490:
      if (lookahead == 'i') ADVANCE(717);
      END_STATE();
    case 491:
      if (lookahead == 'i') ADVANCE(599);
      END_STATE();
    case 492:
      if (lookahead == 'i') ADVANCE(607);
      END_STATE();
    case 493:
      if (lookahead == 'i') ADVANCE(891);
      END_STATE();
    case 494:
      if (lookahead == 'i') ADVANCE(951);
      END_STATE();
    case 495:
      if (lookahead == 'i') ADVANCE(269);
      END_STATE();
    case 496:
      if (lookahead == 'i') ADVANCE(952);
      END_STATE();
    case 497:
      if (lookahead == 'i') ADVANCE(211);
      END_STATE();
    case 498:
      if (lookahead == 'i') ADVANCE(926);
      END_STATE();
    case 499:
      if (lookahead == 'i') ADVANCE(664);
      END_STATE();
    case 500:
      if (lookahead == 'i') ADVANCE(586);
      END_STATE();
    case 501:
      if (lookahead == 'i') ADVANCE(658);
      END_STATE();
    case 502:
      if (lookahead == 'i') ADVANCE(587);
      END_STATE();
    case 503:
      if (lookahead == 'i') ADVANCE(555);
      END_STATE();
    case 504:
      if (lookahead == 'i') ADVANCE(588);
      END_STATE();
    case 505:
      if (lookahead == 'i') ADVANCE(556);
      END_STATE();
    case 506:
      if (lookahead == 'i') ADVANCE(887);
      END_STATE();
    case 507:
      if (lookahead == 'i') ADVANCE(557);
      END_STATE();
    case 508:
      if (lookahead == 'i') ADVANCE(888);
      END_STATE();
    case 509:
      if (lookahead == 'i') ADVANCE(558);
      END_STATE();
    case 510:
      if (lookahead == 'i') ADVANCE(560);
      END_STATE();
    case 511:
      if (lookahead == 'i') ADVANCE(562);
      END_STATE();
    case 512:
      if (lookahead == 'i') ADVANCE(889);
      if (lookahead == 'n') ADVANCE(171);
      if (lookahead == 'o') ADVANCE(527);
      if (lookahead == 's') ADVANCE(339);
      if (lookahead == 'v') ADVANCE(381);
      if (lookahead == 'x') ADVANCE(694);
      END_STATE();
    case 513:
      if (lookahead == 'i') ADVANCE(267);
      END_STATE();
    case 514:
      if (lookahead == 'i') ADVANCE(821);
      END_STATE();
    case 515:
      if (lookahead == 'i') ADVANCE(271);
      END_STATE();
    case 516:
      if (lookahead == 'i') ADVANCE(402);
      END_STATE();
    case 517:
      if (lookahead == 'i') ADVANCE(407);
      END_STATE();
    case 518:
      if (lookahead == 'i') ADVANCE(412);
      END_STATE();
    case 519:
      if (lookahead == 'j') ADVANCE(388);
      END_STATE();
    case 520:
      if (lookahead == 'j') ADVANCE(413);
      END_STATE();
    case 521:
      if (lookahead == 'k') ADVANCE(2223);
      END_STATE();
    case 522:
      if (lookahead == 'k') ADVANCE(2258);
      END_STATE();
    case 523:
      if (lookahead == 'k') ADVANCE(640);
      if (lookahead == 's') ADVANCE(361);
      END_STATE();
    case 524:
      if (lookahead == 'k') ADVANCE(630);
      END_STATE();
    case 525:
      if (lookahead == 'l') ADVANCE(184);
      if (lookahead == 'o') ADVANCE(535);
      END_STATE();
    case 526:
      if (lookahead == 'l') ADVANCE(170);
      if (lookahead == 'p') ADVANCE(862);
      if (lookahead == 'v') ADVANCE(478);
      END_STATE();
    case 527:
      if (lookahead == 'l') ADVANCE(1957);
      END_STATE();
    case 528:
      if (lookahead == 'l') ADVANCE(2212);
      END_STATE();
    case 529:
      if (lookahead == 'l') ADVANCE(2081);
      END_STATE();
    case 530:
      if (lookahead == 'l') ADVANCE(2079);
      END_STATE();
    case 531:
      if (lookahead == 'l') ADVANCE(2129);
      END_STATE();
    case 532:
      if (lookahead == 'l') ADVANCE(2077);
      END_STATE();
    case 533:
      if (lookahead == 'l') ADVANCE(946);
      END_STATE();
    case 534:
      if (lookahead == 'l') ADVANCE(125);
      if (lookahead == 'r') ADVANCE(345);
      END_STATE();
    case 535:
      if (lookahead == 'l') ADVANCE(285);
      if (lookahead == 'n') ADVANCE(429);
      if (lookahead == 'u') ADVANCE(608);
      END_STATE();
    case 536:
      if (lookahead == 'l') ADVANCE(925);
      if (lookahead == 'n') ADVANCE(14);
      if (lookahead == 'r') ADVANCE(714);
      END_STATE();
    case 537:
      if (lookahead == 'l') ADVANCE(528);
      if (lookahead == 't') ADVANCE(465);
      END_STATE();
    case 538:
      if (lookahead == 'l') ADVANCE(645);
      END_STATE();
    case 539:
      if (lookahead == 'l') ADVANCE(279);
      END_STATE();
    case 540:
      if (lookahead == 'l') ADVANCE(301);
      END_STATE();
    case 541:
      if (lookahead == 'l') ADVANCE(142);
      END_STATE();
    case 542:
      if (lookahead == 'l') ADVANCE(516);
      END_STATE();
    case 543:
      if (lookahead == 'l') ADVANCE(488);
      END_STATE();
    case 544:
      if (lookahead == 'l') ADVANCE(641);
      END_STATE();
    case 545:
      if (lookahead == 'l') ADVANCE(544);
      END_STATE();
    case 546:
      if (lookahead == 'l') ADVANCE(209);
      END_STATE();
    case 547:
      if (lookahead == 'l') ADVANCE(642);
      END_STATE();
    case 548:
      if (lookahead == 'l') ADVANCE(547);
      END_STATE();
    case 549:
      if (lookahead == 'l') ADVANCE(385);
      END_STATE();
    case 550:
      if (lookahead == 'l') ADVANCE(646);
      END_STATE();
    case 551:
      if (lookahead == 'l') ADVANCE(362);
      END_STATE();
    case 552:
      if (lookahead == 'l') ADVANCE(841);
      END_STATE();
    case 553:
      if (lookahead == 'l') ADVANCE(312);
      END_STATE();
    case 554:
      if (lookahead == 'l') ADVANCE(313);
      END_STATE();
    case 555:
      if (lookahead == 'l') ADVANCE(365);
      END_STATE();
    case 556:
      if (lookahead == 'l') ADVANCE(322);
      END_STATE();
    case 557:
      if (lookahead == 'l') ADVANCE(323);
      END_STATE();
    case 558:
      if (lookahead == 'l') ADVANCE(324);
      END_STATE();
    case 559:
      if (lookahead == 'l') ADVANCE(363);
      END_STATE();
    case 560:
      if (lookahead == 'l') ADVANCE(325);
      END_STATE();
    case 561:
      if (lookahead == 'l') ADVANCE(328);
      END_STATE();
    case 562:
      if (lookahead == 'l') ADVANCE(332);
      END_STATE();
    case 563:
      if (lookahead == 'l') ADVANCE(914);
      END_STATE();
    case 564:
      if (lookahead == 'l') ADVANCE(485);
      END_STATE();
    case 565:
      if (lookahead == 'l') ADVANCE(802);
      END_STATE();
    case 566:
      if (lookahead == 'l') ADVANCE(343);
      if (lookahead == 'n') ADVANCE(945);
      END_STATE();
    case 567:
      if (lookahead == 'l') ADVANCE(496);
      END_STATE();
    case 568:
      if (lookahead == 'l') ADVANCE(513);
      END_STATE();
    case 569:
      if (lookahead == 'l') ADVANCE(515);
      END_STATE();
    case 570:
      if (lookahead == 'l') ADVANCE(517);
      END_STATE();
    case 571:
      if (lookahead == 'l') ADVANCE(514);
      END_STATE();
    case 572:
      if (lookahead == 'l') ADVANCE(518);
      END_STATE();
    case 573:
      if (lookahead == 'l') ADVANCE(424);
      END_STATE();
    case 574:
      if (lookahead == 'm') ADVANCE(2045);
      END_STATE();
    case 575:
      if (lookahead == 'm') ADVANCE(2003);
      END_STATE();
    case 576:
      if (lookahead == 'm') ADVANCE(2001);
      END_STATE();
    case 577:
      if (lookahead == 'm') ADVANCE(255);
      END_STATE();
    case 578:
      if (lookahead == 'm') ADVANCE(158);
      END_STATE();
    case 579:
      if (lookahead == 'm') ADVANCE(192);
      END_STATE();
    case 580:
      if (lookahead == 'm') ADVANCE(303);
      END_STATE();
    case 581:
      if (lookahead == 'm') ADVANCE(688);
      END_STATE();
    case 582:
      if (lookahead == 'm') ADVANCE(691);
      END_STATE();
    case 583:
      if (lookahead == 'm') ADVANCE(707);
      END_STATE();
    case 584:
      if (lookahead == 'm') ADVANCE(387);
      END_STATE();
    case 585:
      if (lookahead == 'm') ADVANCE(320);
      END_STATE();
    case 586:
      if (lookahead == 'm') ADVANCE(321);
      END_STATE();
    case 587:
      if (lookahead == 'm') ADVANCE(330);
      END_STATE();
    case 588:
      if (lookahead == 'm') ADVANCE(333);
      END_STATE();
    case 589:
      if (lookahead == 'm') ADVANCE(486);
      END_STATE();
    case 590:
      if (lookahead == 'm') ADVANCE(374);
      END_STATE();
    case 591:
      if (lookahead == 'm') ADVANCE(592);
      if (lookahead == 'n') ADVANCE(475);
      if (lookahead == 'p') ADVANCE(114);
      if (lookahead == 's') ADVANCE(602);
      END_STATE();
    case 592:
      if (lookahead == 'm') ADVANCE(393);
      END_STATE();
    case 593:
      if (lookahead == 'm') ADVANCE(157);
      END_STATE();
    case 594:
      if (lookahead == 'n') ADVANCE(523);
      if (lookahead == 's') ADVANCE(347);
      END_STATE();
    case 595:
      if (lookahead == 'n') ADVANCE(2253);
      END_STATE();
    case 596:
      if (lookahead == 'n') ADVANCE(2197);
      END_STATE();
    case 597:
      if (lookahead == 'n') ADVANCE(2041);
      END_STATE();
    case 598:
      if (lookahead == 'n') ADVANCE(2268);
      END_STATE();
    case 599:
      if (lookahead == 'n') ADVANCE(2213);
      END_STATE();
    case 600:
      if (lookahead == 'n') ADVANCE(2215);
      END_STATE();
    case 601:
      if (lookahead == 'n') ADVANCE(2137);
      END_STATE();
    case 602:
      if (lookahead == 'n') ADVANCE(651);
      if (lookahead == 's') ADVANCE(351);
      END_STATE();
    case 603:
      if (lookahead == 'n') ADVANCE(443);
      END_STATE();
    case 604:
      if (lookahead == 'n') ADVANCE(524);
      END_STATE();
    case 605:
      if (lookahead == 'n') ADVANCE(293);
      END_STATE();
    case 606:
      if (lookahead == 'n') ADVANCE(432);
      END_STATE();
    case 607:
      if (lookahead == 'n') ADVANCE(448);
      END_STATE();
    case 608:
      if (lookahead == 'n') ADVANCE(832);
      END_STATE();
    case 609:
      if (lookahead == 'n') ADVANCE(867);
      END_STATE();
    case 610:
      if (lookahead == 'n') ADVANCE(272);
      END_STATE();
    case 611:
      if (lookahead == 'n') ADVANCE(207);
      END_STATE();
    case 612:
      if (lookahead == 'n') ADVANCE(126);
      END_STATE();
    case 613:
      if (lookahead == 'n') ADVANCE(816);
      END_STATE();
    case 614:
      if (lookahead == 'n') ADVANCE(837);
      END_STATE();
    case 615:
      if (lookahead == 'n') ADVANCE(484);
      END_STATE();
    case 616:
      if (lookahead == 'n') ADVANCE(785);
      END_STATE();
    case 617:
      if (lookahead == 'n') ADVANCE(894);
      END_STATE();
    case 618:
      if (lookahead == 'n') ADVANCE(721);
      END_STATE();
    case 619:
      if (lookahead == 'n') ADVANCE(722);
      END_STATE();
    case 620:
      if (lookahead == 'n') ADVANCE(725);
      END_STATE();
    case 621:
      if (lookahead == 'n') ADVANCE(847);
      END_STATE();
    case 622:
      if (lookahead == 'n') ADVANCE(726);
      END_STATE();
    case 623:
      if (lookahead == 'n') ADVANCE(882);
      END_STATE();
    case 624:
      if (lookahead == 'n') ADVANCE(848);
      END_STATE();
    case 625:
      if (lookahead == 'n') ADVANCE(879);
      END_STATE();
    case 626:
      if (lookahead == 'n') ADVANCE(880);
      END_STATE();
    case 627:
      if (lookahead == 'n') ADVANCE(881);
      END_STATE();
    case 628:
      if (lookahead == 'n') ADVANCE(853);
      END_STATE();
    case 629:
      if (lookahead == 'n') ADVANCE(127);
      END_STATE();
    case 630:
      if (lookahead == 'n') ADVANCE(662);
      END_STATE();
    case 631:
      if (lookahead == 'n') ADVANCE(261);
      END_STATE();
    case 632:
      if (lookahead == 'n') ADVANCE(433);
      END_STATE();
    case 633:
      if (lookahead == 'n') ADVANCE(814);
      END_STATE();
    case 634:
      if (lookahead == 'n') ADVANCE(435);
      END_STATE();
    case 635:
      if (lookahead == 'n') ADVANCE(815);
      END_STATE();
    case 636:
      if (lookahead == 'n') ADVANCE(149);
      if (lookahead == 'r') ADVANCE(2270);
      END_STATE();
    case 637:
      if (lookahead == 'n') ADVANCE(907);
      END_STATE();
    case 638:
      if (lookahead == 'n') ADVANCE(828);
      END_STATE();
    case 639:
      if (lookahead == 'o') ADVANCE(284);
      END_STATE();
    case 640:
      if (lookahead == 'o') ADVANCE(939);
      END_STATE();
    case 641:
      if (lookahead == 'o') ADVANCE(2033);
      END_STATE();
    case 642:
      if (lookahead == 'o') ADVANCE(2035);
      END_STATE();
    case 643:
      if (lookahead == 'o') ADVANCE(2101);
      END_STATE();
    case 644:
      if (lookahead == 'o') ADVANCE(2117);
      END_STATE();
    case 645:
      if (lookahead == 'o') ADVANCE(937);
      END_STATE();
    case 646:
      if (lookahead == 'o') ADVANCE(938);
      END_STATE();
    case 647:
      if (lookahead == 'o') ADVANCE(777);
      END_STATE();
    case 648:
      if (lookahead == 'o') ADVANCE(921);
      END_STATE();
    case 649:
      if (lookahead == 'o') ADVANCE(296);
      END_STATE();
    case 650:
      if (lookahead == 'o') ADVANCE(633);
      END_STATE();
    case 651:
      if (lookahead == 'o') ADVANCE(898);
      END_STATE();
    case 652:
      if (lookahead == 'o') ADVANCE(685);
      END_STATE();
    case 653:
      if (lookahead == 'o') ADVANCE(539);
      END_STATE();
    case 654:
      if (lookahead == 'o') ADVANCE(765);
      END_STATE();
    case 655:
      if (lookahead == 'o') ADVANCE(632);
      END_STATE();
    case 656:
      if (lookahead == 'o') ADVANCE(531);
      END_STATE();
    case 657:
      if (lookahead == 'o') ADVANCE(733);
      END_STATE();
    case 658:
      if (lookahead == 'o') ADVANCE(600);
      END_STATE();
    case 659:
      if (lookahead == 'o') ADVANCE(129);
      END_STATE();
    case 660:
      if (lookahead == 'o') ADVANCE(709);
      END_STATE();
    case 661:
      if (lookahead == 'o') ADVANCE(723);
      END_STATE();
    case 662:
      if (lookahead == 'o') ADVANCE(940);
      END_STATE();
    case 663:
      if (lookahead == 'o') ADVANCE(746);
      END_STATE();
    case 664:
      if (lookahead == 'o') ADVANCE(616);
      END_STATE();
    case 665:
      if (lookahead == 'o') ADVANCE(583);
      END_STATE();
    case 666:
      if (lookahead == 'o') ADVANCE(131);
      END_STATE();
    case 667:
      if (lookahead == 'o') ADVANCE(864);
      END_STATE();
    case 668:
      if (lookahead == 'o') ADVANCE(865);
      END_STATE();
    case 669:
      if (lookahead == 'o') ADVANCE(623);
      END_STATE();
    case 670:
      if (lookahead == 'o') ADVANCE(757);
      END_STATE();
    case 671:
      if (lookahead == 'o') ADVANCE(635);
      END_STATE();
    case 672:
      if (lookahead == 'o') ADVANCE(634);
      END_STATE();
    case 673:
      if (lookahead == 'o') ADVANCE(931);
      END_STATE();
    case 674:
      if (lookahead == 'o') ADVANCE(568);
      END_STATE();
    case 675:
      if (lookahead == 'o') ADVANCE(569);
      END_STATE();
    case 676:
      if (lookahead == 'p') ADVANCE(22);
      if (lookahead == 's') ADVANCE(982);
      END_STATE();
    case 677:
      if (lookahead == 'p') ADVANCE(2195);
      END_STATE();
    case 678:
      if (lookahead == 'p') ADVANCE(979);
      END_STATE();
    case 679:
      if (lookahead == 'p') ADVANCE(993);
      END_STATE();
    case 680:
      if (lookahead == 'p') ADVANCE(996);
      END_STATE();
    case 681:
      if (lookahead == 'p') ADVANCE(999);
      END_STATE();
    case 682:
      if (lookahead == 'p') ADVANCE(973);
      END_STATE();
    case 683:
      if (lookahead == 'p') ADVANCE(974);
      END_STATE();
    case 684:
      if (lookahead == 'p') ADVANCE(994);
      END_STATE();
    case 685:
      if (lookahead == 'p') ADVANCE(968);
      END_STATE();
    case 686:
      if (lookahead == 'p') ADVANCE(989);
      END_STATE();
    case 687:
      if (lookahead == 'p') ADVANCE(978);
      END_STATE();
    case 688:
      if (lookahead == 'p') ADVANCE(975);
      END_STATE();
    case 689:
      if (lookahead == 'p') ADVANCE(986);
      END_STATE();
    case 690:
      if (lookahead == 'p') ADVANCE(985);
      END_STATE();
    case 691:
      if (lookahead == 'p') ADVANCE(997);
      END_STATE();
    case 692:
      if (lookahead == 'p') ADVANCE(998);
      END_STATE();
    case 693:
      if (lookahead == 'p') ADVANCE(2247);
      END_STATE();
    case 694:
      if (lookahead == 'p') ADVANCE(482);
      END_STATE();
    case 695:
      if (lookahead == 'p') ADVANCE(141);
      if (lookahead == 'r') ADVANCE(2153);
      END_STATE();
    case 696:
      if (lookahead == 'p') ADVANCE(242);
      END_STATE();
    case 697:
      if (lookahead == 'p') ADVANCE(529);
      END_STATE();
    case 698:
      if (lookahead == 'p') ADVANCE(306);
      END_STATE();
    case 699:
      if (lookahead == 'p') ADVANCE(530);
      END_STATE();
    case 700:
      if (lookahead == 'p') ADVANCE(532);
      END_STATE();
    case 701:
      if (lookahead == 'p') ADVANCE(644);
      END_STATE();
    case 702:
      if (lookahead == 'p') ADVANCE(697);
      END_STATE();
    case 703:
      if (lookahead == 'p') ADVANCE(699);
      END_STATE();
    case 704:
      if (lookahead == 'p') ADVANCE(700);
      END_STATE();
    case 705:
      if (lookahead == 'p') ADVANCE(708);
      END_STATE();
    case 706:
      if (lookahead == 'p') ADVANCE(851);
      END_STATE();
    case 707:
      if (lookahead == 'p') ADVANCE(201);
      END_STATE();
    case 708:
      if (lookahead == 'p') ADVANCE(670);
      END_STATE();
    case 709:
      if (lookahead == 'p') ADVANCE(371);
      END_STATE();
    case 710:
      if (lookahead == 'p') ADVANCE(671);
      END_STATE();
    case 711:
      if (lookahead == 'q') ADVANCE(2109);
      if (lookahead == 's') ADVANCE(701);
      END_STATE();
    case 712:
      if (lookahead == 'r') ADVANCE(223);
      END_STATE();
    case 713:
      if (lookahead == 'r') ADVANCE(1967);
      END_STATE();
    case 714:
      if (lookahead == 'r') ADVANCE(1969);
      END_STATE();
    case 715:
      if (lookahead == 'r') ADVANCE(2280);
      END_STATE();
    case 716:
      if (lookahead == 'r') ADVANCE(2276);
      END_STATE();
    case 717:
      if (lookahead == 'r') ADVANCE(2288);
      END_STATE();
    case 718:
      if (lookahead == 'r') ADVANCE(1989);
      END_STATE();
    case 719:
      if (lookahead == 'r') ADVANCE(1993);
      END_STATE();
    case 720:
      if (lookahead == 'r') ADVANCE(2063);
      END_STATE();
    case 721:
      if (lookahead == 'r') ADVANCE(2065);
      END_STATE();
    case 722:
      if (lookahead == 'r') ADVANCE(2061);
      END_STATE();
    case 723:
      if (lookahead == 'r') ADVANCE(2139);
      END_STATE();
    case 724:
      if (lookahead == 'r') ADVANCE(2111);
      END_STATE();
    case 725:
      if (lookahead == 'r') ADVANCE(2057);
      END_STATE();
    case 726:
      if (lookahead == 'r') ADVANCE(2069);
      END_STATE();
    case 727:
      if (lookahead == 'r') ADVANCE(2009);
      END_STATE();
    case 728:
      if (lookahead == 'r') ADVANCE(187);
      if (lookahead == 's') ADVANCE(781);
      END_STATE();
    case 729:
      if (lookahead == 'r') ADVANCE(187);
      if (lookahead == 's') ADVANCE(795);
      END_STATE();
    case 730:
      if (lookahead == 'r') ADVANCE(611);
      END_STATE();
    case 731:
      if (lookahead == 'r') ADVANCE(713);
      END_STATE();
    case 732:
      if (lookahead == 'r') ADVANCE(593);
      END_STATE();
    case 733:
      if (lookahead == 'r') ADVANCE(278);
      END_STATE();
    case 734:
      if (lookahead == 'r') ADVANCE(831);
      END_STATE();
    case 735:
      if (lookahead == 'r') ADVANCE(346);
      if (lookahead == 's') ADVANCE(222);
      END_STATE();
    case 736:
      if (lookahead == 'r') ADVANCE(241);
      END_STATE();
    case 737:
      if (lookahead == 'r') ADVANCE(915);
      END_STATE();
    case 738:
      if (lookahead == 'r') ADVANCE(243);
      END_STATE();
    case 739:
      if (lookahead == 'r') ADVANCE(648);
      END_STATE();
    case 740:
      if (lookahead == 'r') ADVANCE(180);
      if (lookahead == 'u') ADVANCE(610);
      END_STATE();
    case 741:
      if (lookahead == 'r') ADVANCE(182);
      END_STATE();
    case 742:
      if (lookahead == 'r') ADVANCE(244);
      END_STATE();
    case 743:
      if (lookahead == 'r') ADVANCE(899);
      if (lookahead == 't') ADVANCE(308);
      END_STATE();
    case 744:
      if (lookahead == 'r') ADVANCE(696);
      END_STATE();
    case 745:
      if (lookahead == 'r') ADVANCE(310);
      END_STATE();
    case 746:
      if (lookahead == 'r') ADVANCE(737);
      END_STATE();
    case 747:
      if (lookahead == 'r') ADVANCE(130);
      END_STATE();
    case 748:
      if (lookahead == 'r') ADVANCE(843);
      END_STATE();
    case 749:
      if (lookahead == 'r') ADVANCE(384);
      END_STATE();
    case 750:
      if (lookahead == 'r') ADVANCE(776);
      END_STATE();
    case 751:
      if (lookahead == 'r') ADVANCE(762);
      END_STATE();
    case 752:
      if (lookahead == 'r') ADVANCE(724);
      END_STATE();
    case 753:
      if (lookahead == 'r') ADVANCE(389);
      END_STATE();
    case 754:
      if (lookahead == 'r') ADVANCE(849);
      END_STATE();
    case 755:
      if (lookahead == 'r') ADVANCE(850);
      END_STATE();
    case 756:
      if (lookahead == 'r') ADVANCE(852);
      END_STATE();
    case 757:
      if (lookahead == 'r') ADVANCE(854);
      END_STATE();
    case 758:
      if (lookahead == 'r') ADVANCE(327);
      END_STATE();
    case 759:
      if (lookahead == 'r') ADVANCE(382);
      END_STATE();
    case 760:
      if (lookahead == 'r') ADVANCE(933);
      END_STATE();
    case 761:
      if (lookahead == 'r') ADVANCE(436);
      END_STATE();
    case 762:
      if (lookahead == 'r') ADVANCE(661);
      END_STATE();
    case 763:
      if (lookahead == 'r') ADVANCE(656);
      END_STATE();
    case 764:
      if (lookahead == 'r') ADVANCE(135);
      END_STATE();
    case 765:
      if (lookahead == 'r') ADVANCE(294);
      END_STATE();
    case 766:
      if (lookahead == 'r') ADVANCE(377);
      END_STATE();
    case 767:
      if (lookahead == 'r') ADVANCE(373);
      END_STATE();
    case 768:
      if (lookahead == 'r') ADVANCE(929);
      END_STATE();
    case 769:
      if (lookahead == 'r') ADVANCE(394);
      END_STATE();
    case 770:
      if (lookahead == 'r') ADVANCE(930);
      END_STATE();
    case 771:
      if (lookahead == 'r') ADVANCE(220);
      END_STATE();
    case 772:
      if (lookahead == 'r') ADVANCE(406);
      END_STATE();
    case 773:
      if (lookahead == 'r') ADVANCE(414);
      END_STATE();
    case 774:
      if (lookahead == 'r') ADVANCE(932);
      END_STATE();
    case 775:
      if (lookahead == 'r') ADVANCE(415);
      if (lookahead == 't') ADVANCE(739);
      END_STATE();
    case 776:
      if (lookahead == 'r') ADVANCE(411);
      END_STATE();
    case 777:
      if (lookahead == 'r') ADVANCE(906);
      END_STATE();
    case 778:
      if (lookahead == 's') ADVANCE(990);
      END_STATE();
    case 779:
      if (lookahead == 's') ADVANCE(980);
      END_STATE();
    case 780:
      if (lookahead == 's') ADVANCE(2199);
      END_STATE();
    case 781:
      if (lookahead == 's') ADVANCE(967);
      END_STATE();
    case 782:
      if (lookahead == 's') ADVANCE(987);
      END_STATE();
    case 783:
      if (lookahead == 's') ADVANCE(2235);
      END_STATE();
    case 784:
      if (lookahead == 's') ADVANCE(1999);
      END_STATE();
    case 785:
      if (lookahead == 's') ADVANCE(2119);
      END_STATE();
    case 786:
      if (lookahead == 's') ADVANCE(2089);
      END_STATE();
    case 787:
      if (lookahead == 's') ADVANCE(2121);
      END_STATE();
    case 788:
      if (lookahead == 's') ADVANCE(2123);
      END_STATE();
    case 789:
      if (lookahead == 's') ADVANCE(2125);
      END_STATE();
    case 790:
      if (lookahead == 's') ADVANCE(966);
      END_STATE();
    case 791:
      if (lookahead == 's') ADVANCE(18);
      END_STATE();
    case 792:
      if (lookahead == 's') ADVANCE(522);
      END_STATE();
    case 793:
      if (lookahead == 's') ADVANCE(471);
      END_STATE();
    case 794:
      if (lookahead == 's') ADVANCE(463);
      END_STATE();
    case 795:
      if (lookahead == 's') ADVANCE(941);
      END_STATE();
    case 796:
      if (lookahead == 's') ADVANCE(459);
      END_STATE();
    case 797:
      if (lookahead == 's') ADVANCE(918);
      END_STATE();
    case 798:
      if (lookahead == 's') ADVANCE(116);
      END_STATE();
    case 799:
      if (lookahead == 's') ADVANCE(798);
      END_STATE();
    case 800:
      if (lookahead == 's') ADVANCE(494);
      END_STATE();
    case 801:
      if (lookahead == 's') ADVANCE(421);
      END_STATE();
    case 802:
      if (lookahead == 's') ADVANCE(307);
      END_STATE();
    case 803:
      if (lookahead == 's') ADVANCE(784);
      END_STATE();
    case 804:
      if (lookahead == 's') ADVANCE(895);
      END_STATE();
    case 805:
      if (lookahead == 's') ADVANCE(836);
      END_STATE();
    case 806:
      if (lookahead == 's') ADVANCE(838);
      END_STATE();
    case 807:
      if (lookahead == 's') ADVANCE(786);
      END_STATE();
    case 808:
      if (lookahead == 's') ADVANCE(909);
      END_STATE();
    case 809:
      if (lookahead == 's') ADVANCE(710);
      END_STATE();
    case 810:
      if (lookahead == 's') ADVANCE(790);
      END_STATE();
    case 811:
      if (lookahead == 's') ADVANCE(857);
      END_STATE();
    case 812:
      if (lookahead == 's') ADVANCE(875);
      END_STATE();
    case 813:
      if (lookahead == 's') ADVANCE(846);
      END_STATE();
    case 814:
      if (lookahead == 's') ADVANCE(319);
      END_STATE();
    case 815:
      if (lookahead == 's') ADVANCE(334);
      END_STATE();
    case 816:
      if (lookahead == 's') ADVANCE(674);
      END_STATE();
    case 817:
      if (lookahead == 's') ADVANCE(919);
      END_STATE();
    case 818:
      if (lookahead == 's') ADVANCE(366);
      END_STATE();
    case 819:
      if (lookahead == 's') ADVANCE(824);
      END_STATE();
    case 820:
      if (lookahead == 's') ADVANCE(461);
      END_STATE();
    case 821:
      if (lookahead == 's') ADVANCE(462);
      END_STATE();
    case 822:
      if (lookahead == 's') ADVANCE(376);
      END_STATE();
    case 823:
      if (lookahead == 's') ADVANCE(360);
      END_STATE();
    case 824:
      if (lookahead == 's') ADVANCE(501);
      END_STATE();
    case 825:
      if (lookahead == 's') ADVANCE(901);
      END_STATE();
    case 826:
      if (lookahead == 's') ADVANCE(904);
      END_STATE();
    case 827:
      if (lookahead == 's') ADVANCE(419);
      END_STATE();
    case 828:
      if (lookahead == 's') ADVANCE(675);
      END_STATE();
    case 829:
      if (lookahead == 't') ADVANCE(467);
      END_STATE();
    case 830:
      if (lookahead == 't') ADVANCE(2239);
      END_STATE();
    case 831:
      if (lookahead == 't') ADVANCE(965);
      END_STATE();
    case 832:
      if (lookahead == 't') ADVANCE(2233);
      END_STATE();
    case 833:
      if (lookahead == 't') ADVANCE(1977);
      END_STATE();
    case 834:
      if (lookahead == 't') ADVANCE(2221);
      END_STATE();
    case 835:
      if (lookahead == 't') ADVANCE(1981);
      END_STATE();
    case 836:
      if (lookahead == 't') ADVANCE(2227);
      END_STATE();
    case 837:
      if (lookahead == 't') ADVANCE(2278);
      END_STATE();
    case 838:
      if (lookahead == 't') ADVANCE(2286);
      END_STATE();
    case 839:
      if (lookahead == 't') ADVANCE(2262);
      END_STATE();
    case 840:
      if (lookahead == 't') ADVANCE(969);
      END_STATE();
    case 841:
      if (lookahead == 't') ADVANCE(2274);
      END_STATE();
    case 842:
      if (lookahead == 't') ADVANCE(2051);
      END_STATE();
    case 843:
      if (lookahead == 't') ADVANCE(1985);
      END_STATE();
    case 844:
      if (lookahead == 't') ADVANCE(2043);
      END_STATE();
    case 845:
      if (lookahead == 't') ADVANCE(1983);
      END_STATE();
    case 846:
      if (lookahead == 't') ADVANCE(971);
      END_STATE();
    case 847:
      if (lookahead == 't') ADVANCE(1987);
      END_STATE();
    case 848:
      if (lookahead == 't') ADVANCE(1991);
      END_STATE();
    case 849:
      if (lookahead == 't') ADVANCE(2071);
      END_STATE();
    case 850:
      if (lookahead == 't') ADVANCE(2073);
      END_STATE();
    case 851:
      if (lookahead == 't') ADVANCE(2145);
      END_STATE();
    case 852:
      if (lookahead == 't') ADVANCE(2133);
      END_STATE();
    case 853:
      if (lookahead == 't') ADVANCE(2011);
      END_STATE();
    case 854:
      if (lookahead == 't') ADVANCE(2135);
      END_STATE();
    case 855:
      if (lookahead == 't') ADVANCE(473);
      END_STATE();
    case 856:
      if (lookahead == 't') ADVANCE(454);
      END_STATE();
    case 857:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 858:
      if (lookahead == 't') ADVANCE(137);
      END_STATE();
    case 859:
      if (lookahead == 't') ADVANCE(678);
      END_STATE();
    case 860:
      if (lookahead == 't') ADVANCE(868);
      END_STATE();
    case 861:
      if (lookahead == 't') ADVANCE(579);
      END_STATE();
    case 862:
      if (lookahead == 't') ADVANCE(455);
      END_STATE();
    case 863:
      if (lookahead == 't') ADVANCE(474);
      if (lookahead == 'v') ADVANCE(304);
      END_STATE();
    case 864:
      if (lookahead == 't') ADVANCE(456);
      END_STATE();
    case 865:
      if (lookahead == 't') ADVANCE(457);
      END_STATE();
    case 866:
      if (lookahead == 't') ADVANCE(497);
      END_STATE();
    case 867:
      if (lookahead == 't') ADVANCE(124);
      END_STATE();
    case 868:
      if (lookahead == 't') ADVANCE(687);
      END_STATE();
    case 869:
      if (lookahead == 't') ADVANCE(666);
      END_STATE();
    case 870:
      if (lookahead == 't') ADVANCE(659);
      END_STATE();
    case 871:
      if (lookahead == 't') ADVANCE(217);
      END_STATE();
    case 872:
      if (lookahead == 't') ADVANCE(500);
      END_STATE();
    case 873:
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 874:
      if (lookahead == 't') ADVANCE(499);
      END_STATE();
    case 875:
      if (lookahead == 't') ADVANCE(208);
      END_STATE();
    case 876:
      if (lookahead == 't') ADVANCE(692);
      END_STATE();
    case 877:
      if (lookahead == 't') ADVANCE(309);
      END_STATE();
    case 878:
      if (lookahead == 't') ADVANCE(165);
      END_STATE();
    case 879:
      if (lookahead == 't') ADVANCE(787);
      END_STATE();
    case 880:
      if (lookahead == 't') ADVANCE(788);
      END_STATE();
    case 881:
      if (lookahead == 't') ADVANCE(789);
      END_STATE();
    case 882:
      if (lookahead == 't') ADVANCE(763);
      END_STATE();
    case 883:
      if (lookahead == 't') ADVANCE(314);
      END_STATE();
    case 884:
      if (lookahead == 't') ADVANCE(416);
      END_STATE();
    case 885:
      if (lookahead == 't') ADVANCE(370);
      END_STATE();
    case 886:
      if (lookahead == 't') ADVANCE(329);
      END_STATE();
    case 887:
      if (lookahead == 't') ADVANCE(352);
      END_STATE();
    case 888:
      if (lookahead == 't') ADVANCE(353);
      END_STATE();
    case 889:
      if (lookahead == 't') ADVANCE(464);
      END_STATE();
    case 890:
      if (lookahead == 't') ADVANCE(498);
      END_STATE();
    case 891:
      if (lookahead == 't') ADVANCE(423);
      END_STATE();
    case 892:
      if (lookahead == 't') ADVANCE(749);
      END_STATE();
    case 893:
      if (lookahead == 't') ADVANCE(139);
      END_STATE();
    case 894:
      if (lookahead == 't') ADVANCE(495);
      END_STATE();
    case 895:
      if (lookahead == 't') ADVANCE(210);
      END_STATE();
    case 896:
      if (lookahead == 't') ADVANCE(367);
      END_STATE();
    case 897:
      if (lookahead == 't') ADVANCE(492);
      END_STATE();
    case 898:
      if (lookahead == 't') ADVANCE(822);
      END_STATE();
    case 899:
      if (lookahead == 't') ADVANCE(145);
      END_STATE();
    case 900:
      if (lookahead == 't') ADVANCE(502);
      END_STATE();
    case 901:
      if (lookahead == 't') ADVANCE(214);
      END_STATE();
    case 902:
      if (lookahead == 't') ADVANCE(769);
      END_STATE();
    case 903:
      if (lookahead == 't') ADVANCE(504);
      END_STATE();
    case 904:
      if (lookahead == 't') ADVANCE(218);
      END_STATE();
    case 905:
      if (lookahead == 't') ADVANCE(150);
      END_STATE();
    case 906:
      if (lookahead == 't') ADVANCE(152);
      END_STATE();
    case 907:
      if (lookahead == 't') ADVANCE(153);
      END_STATE();
    case 908:
      if (lookahead == 't') ADVANCE(422);
      END_STATE();
    case 909:
      if (lookahead == 't') ADVANCE(221);
      END_STATE();
    case 910:
      if (lookahead == 'u') ADVANCE(427);
      END_STATE();
    case 911:
      if (lookahead == 'u') ADVANCE(782);
      END_STATE();
    case 912:
      if (lookahead == 'u') ADVANCE(613);
      END_STATE();
    case 913:
      if (lookahead == 'u') ADVANCE(604);
      END_STATE();
    case 914:
      if (lookahead == 'u') ADVANCE(311);
      END_STATE();
    case 915:
      if (lookahead == 'u') ADVANCE(706);
      END_STATE();
    case 916:
      if (lookahead == 'u') ADVANCE(750);
      END_STATE();
    case 917:
      if (lookahead == 'u') ADVANCE(897);
      END_STATE();
    case 918:
      if (lookahead == 'u') ADVANCE(758);
      END_STATE();
    case 919:
      if (lookahead == 'u') ADVANCE(705);
      END_STATE();
    case 920:
      if (lookahead == 'u') ADVANCE(554);
      END_STATE();
    case 921:
      if (lookahead == 'u') ADVANCE(232);
      END_STATE();
    case 922:
      if (lookahead == 'u') ADVANCE(404);
      END_STATE();
    case 923:
      if (lookahead == 'u') ADVANCE(638);
      END_STATE();
    case 924:
      if (lookahead == 'v') ADVANCE(20);
      END_STATE();
    case 925:
      if (lookahead == 'v') ADVANCE(21);
      END_STATE();
    case 926:
      if (lookahead == 'v') ADVANCE(318);
      END_STATE();
    case 927:
      if (lookahead == 'v') ADVANCE(216);
      END_STATE();
    case 928:
      if (lookahead == 'v') ADVANCE(357);
      END_STATE();
    case 929:
      if (lookahead == 'v') ADVANCE(369);
      END_STATE();
    case 930:
      if (lookahead == 'v') ADVANCE(372);
      END_STATE();
    case 931:
      if (lookahead == 'v') ADVANCE(378);
      END_STATE();
    case 932:
      if (lookahead == 'v') ADVANCE(379);
      END_STATE();
    case 933:
      if (lookahead == 'v') ADVANCE(405);
      END_STATE();
    case 934:
      if (lookahead == 'v') ADVANCE(408);
      END_STATE();
    case 935:
      if (lookahead == 'v') ADVANCE(409);
      END_STATE();
    case 936:
      if (lookahead == 'v') ADVANCE(410);
      END_STATE();
    case 937:
      if (lookahead == 'w') ADVANCE(2019);
      END_STATE();
    case 938:
      if (lookahead == 'w') ADVANCE(2141);
      END_STATE();
    case 939:
      if (lookahead == 'w') ADVANCE(597);
      END_STATE();
    case 940:
      if (lookahead == 'w') ADVANCE(601);
      END_STATE();
    case 941:
      if (lookahead == 'w') ADVANCE(657);
      END_STATE();
    case 942:
      if (lookahead == 'x') ADVANCE(2037);
      END_STATE();
    case 943:
      if (lookahead == 'x') ADVANCE(2039);
      END_STATE();
    case 944:
      if (lookahead == 'x') ADVANCE(359);
      END_STATE();
    case 945:
      if (lookahead == 'y') ADVANCE(1042);
      END_STATE();
    case 946:
      if (lookahead == 'y') ADVANCE(1973);
      END_STATE();
    case 947:
      if (lookahead == 'y') ADVANCE(942);
      END_STATE();
    case 948:
      if (lookahead == 'y') ADVANCE(943);
      END_STATE();
    case 949:
      if (lookahead == 'y') ADVANCE(138);
      END_STATE();
    case 950:
      if (lookahead == 'z') ADVANCE(364);
      END_STATE();
    case 951:
      if (lookahead == 'z') ADVANCE(317);
      END_STATE();
    case 952:
      if (lookahead == 'z') ADVANCE(368);
      END_STATE();
    case 953:
      if (lookahead == 'z') ADVANCE(326);
      END_STATE();
    case 954:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(954)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1952);
      END_STATE();
    case 955:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 956:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1008);
      END_STATE();
    case 957:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1009);
      END_STATE();
    case 958:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1946);
      END_STATE();
    case 959:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 960:
      if (eof) ADVANCE(961);
      if (lookahead == '!') ADVANCE(1004);
      if (lookahead == '#') ADVANCE(962);
      if (lookahead == ',') ADVANCE(1002);
      if (lookahead == '-') ADVANCE(1056);
      if (lookahead == '/') ADVANCE(957);
      if (lookahead == ';') ADVANCE(1049);
      if (lookahead == 'G') ADVANCE(31);
      if (lookahead == 'K') ADVANCE(32);
      if (lookahead == 'M') ADVANCE(33);
      if (lookahead == '[') ADVANCE(1001);
      if (lookahead == ']') ADVANCE(1003);
      if (lookahead == 'a') ADVANCE(566);
      if (lookahead == 'd') ADVANCE(268);
      if (lookahead == 'e') ADVANCE(615);
      if (lookahead == 'f') ADVANCE(859);
      if (lookahead == 'h') ADVANCE(860);
      if (lookahead == 'i') ADVANCE(236);
      if (lookahead == 'k') ADVANCE(712);
      if (lookahead == 'm') ADVANCE(639);
      if (lookahead == 'n') ADVANCE(426);
      if (lookahead == 'p') ADVANCE(215);
      if (lookahead == 'r') ADVANCE(287);
      if (lookahead == 's') ADVANCE(476);
      if (lookahead == 't') ADVANCE(249);
      if (lookahead == 'u') ADVANCE(289);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(960)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1047);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(963);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(964);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(964);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(anon_sym_alert);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(anon_sym_pass);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(anon_sym_pass);
      if (lookahead == 'w') ADVANCE(657);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(anon_sym_drop);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(anon_sym_reject);
      if (lookahead == 'b') ADVANCE(668);
      if (lookahead == 'd') ADVANCE(813);
      if (lookahead == 's') ADVANCE(742);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(anon_sym_rejectsrc);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(anon_sym_rejectdst);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(anon_sym_rejectboth);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(anon_sym_tcp);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(anon_sym_udp);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(anon_sym_icmp);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(anon_sym_ip);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(anon_sym_ip);
      if (lookahead == '_') ADVANCE(297);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(anon_sym_http);
      if (lookahead == '2') ADVANCE(1000);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(anon_sym_ftp);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(anon_sym_tls);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(anon_sym_smb);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(anon_sym_dns);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(anon_sym_dcerpc);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(anon_sym_ssh);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(anon_sym_smtp);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(anon_sym_imap);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(anon_sym_modbus);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(anon_sym_dnp3);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(anon_sym_enip);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(anon_sym_nfs);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(anon_sym_ikev2);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(anon_sym_krb5);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(anon_sym_ntp);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(anon_sym_dhcp);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(anon_sym_rfb);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(anon_sym_rdp);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(anon_sym_snmp);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(anon_sym_tftp);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(anon_sym_sip);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(anon_sym_http2);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(sym_negation);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(sym_negation);
      if (lookahead == '-') ADVANCE(1075);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(aux_sym_ipv4_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1008);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(aux_sym_ipv4_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1009);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(sym__ipv6_octet);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == '.') ADVANCE(955);
      if (lookahead == ':') ADVANCE(1041);
      if (lookahead == '_') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1014);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1038);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == '.') ADVANCE(955);
      if (lookahead == ':') ADVANCE(1041);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1015);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1016);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == '.') ADVANCE(955);
      if (lookahead == ':') ADVANCE(1041);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1014);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1038);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == '.') ADVANCE(955);
      if (lookahead == ':') ADVANCE(1041);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1012);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1039);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == '.') ADVANCE(955);
      if (lookahead == ':') ADVANCE(1041);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(1041);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(1041);
      if (lookahead == 'A') ADVANCE(1021);
      if (lookahead == 'O') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1038);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(1041);
      if (lookahead == 'C') ADVANCE(1020);
      if (lookahead == 'U') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1038);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(1041);
      if (lookahead == 'I') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1038);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(1041);
      if (lookahead == 'K') ADVANCE(2163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1039);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(1041);
      if (lookahead == 'N') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1039);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(1041);
      if (lookahead == 'Y') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1038);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(1041);
      if (lookahead == 'a') ADVANCE(1031);
      if (lookahead == 'i') ADVANCE(540);
      if (lookahead == 'r') ADVANCE(349);
      if (lookahead == 't') ADVANCE(678);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(1038);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(1041);
      if (lookahead == 'b') ADVANCE(1033);
      if (lookahead == 'c') ADVANCE(1034);
      if (lookahead == 'l') ADVANCE(344);
      if (lookahead == 'n') ADVANCE(945);
      if (lookahead == 's') ADVANCE(793);
      if (lookahead == 'u') ADVANCE(829);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1038);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(1041);
      if (lookahead == 'c') ADVANCE(1026);
      if (lookahead == 'e') ADVANCE(1030);
      if (lookahead == 'h') ADVANCE(253);
      if (lookahead == 'i') ADVANCE(735);
      if (lookahead == 'n') ADVANCE(676);
      if (lookahead == 'r') ADVANCE(652);
      if (lookahead == 's') ADVANCE(830);
      if (lookahead == 'u') ADVANCE(677);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1038);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(1041);
      if (lookahead == 'e') ADVANCE(2256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1039);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(1041);
      if (lookahead == 'i') ADVANCE(861);
      if (lookahead == 'o') ADVANCE(856);
      if (lookahead == 'y') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1038);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(1041);
      if (lookahead == 'i') ADVANCE(889);
      if (lookahead == 'n') ADVANCE(172);
      if (lookahead == 'o') ADVANCE(527);
      if (lookahead == 's') ADVANCE(339);
      if (lookahead == 'v') ADVANCE(381);
      if (lookahead == 'x') ADVANCE(694);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1038);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(1041);
      if (lookahead == 'l') ADVANCE(184);
      if (lookahead == 'o') ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1038);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(1041);
      if (lookahead == 'l') ADVANCE(170);
      if (lookahead == 'p') ADVANCE(862);
      if (lookahead == 'v') ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1039);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(1041);
      if (lookahead == 'l') ADVANCE(802);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1039);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(1041);
      if (lookahead == 'n') ADVANCE(945);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1038);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(1041);
      if (lookahead == 'o') ADVANCE(777);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1039);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(1041);
      if (lookahead == 't') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1039);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(1041);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1016);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1016);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(1041);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1037);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1038);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(1041);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1035);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1039);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(1041);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1039);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(1041);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1016);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(1041);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1038);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(1010);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(anon_sym_any);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(anon_sym_any);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(aux_sym_port_token1);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(aux_sym_port_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1044);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(aux_sym_port_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1045);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(aux_sym_port_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1046);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(sym_colon);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(sym_semicolon);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(sym_bitwise_and);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(sym_bitwise_and);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(sym_bitwise_or);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(sym_bitwise_or);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(1082);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(1073);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(1074);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(anon_sym_BANG_DASH);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(1069);
      if (lookahead == '>') ADVANCE(1065);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(1070);
      if (lookahead == '>') ADVANCE(1066);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(1063);
      if (lookahead == '=') ADVANCE(1071);
      if (lookahead == '>') ADVANCE(1076);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(1064);
      if (lookahead == '=') ADVANCE(1072);
      if (lookahead == '>') ADVANCE(1077);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(aux_sym_digit_token1);
      if (lookahead == '_') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1086);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(958);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(aux_sym_digit_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1086);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(958);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(aux_sym_digit_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1087);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(anon_sym_KB);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(anon_sym_MB);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(anon_sym_GB);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '&') ADVANCE(1051);
      if (lookahead == '*') ADVANCE(1060);
      if (lookahead == '+') ADVANCE(1055);
      if (lookahead == '-') ADVANCE(1058);
      if (lookahead == '/') ADVANCE(1062);
      if (lookahead == '2') ADVANCE(1184);
      if (lookahead == '<') ADVANCE(1081);
      if (lookahead == '=') ADVANCE(1068);
      if (lookahead == '>') ADVANCE(1079);
      if (lookahead == 'A') ADVANCE(1108);
      if (lookahead == 'B') ADVANCE(1183);
      if (lookahead == 'C') ADVANCE(1101);
      if (lookahead == 'D') ADVANCE(1134);
      if (lookahead == 'I') ADVANCE(1148);
      if (lookahead == 'O') ADVANCE(1163);
      if (lookahead == 'P') ADVANCE(1139);
      if (lookahead == 'R') ADVANCE(1119);
      if (lookahead == 'S') ADVANCE(1181);
      if (lookahead == 'U') ADVANCE(1149);
      if (lookahead == '^') ADVANCE(1053);
      if (lookahead == 'a') ADVANCE(1286);
      if (lookahead == 'b') ADVANCE(1505);
      if (lookahead == 'c') ADVANCE(1556);
      if (lookahead == 'd') ADVANCE(1301);
      if (lookahead == 'e') ADVANCE(1526);
      if (lookahead == 'f') ADVANCE(1240);
      if (lookahead == 'g') ADVANCE(1384);
      if (lookahead == 'h') ADVANCE(1238);
      if (lookahead == 'i') ADVANCE(1604);
      if (lookahead == 'l') ADVANCE(1503);
      if (lookahead == 'm') ADVANCE(1381);
      if (lookahead == 'n') ADVANCE(1267);
      if (lookahead == 'o') ADVANCE(1954);
      if (lookahead == 'p') ADVANCE(1239);
      if (lookahead == 'r') ADVANCE(1343);
      if (lookahead == 's') ADVANCE(1234);
      if (lookahead == 't') ADVANCE(1492);
      if (lookahead == 'u') ADVANCE(1622);
      if (lookahead == 'w') ADVANCE(1244);
      if (lookahead == 'x') ADVANCE(1948);
      if (lookahead == 'y') ADVANCE(1382);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1091);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1940);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          (lookahead < '(' || ',' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '.') ADVANCE(1095);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '/') ADVANCE(1467);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '/') ADVANCE(1856);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '0') ADVANCE(2026);
      if (lookahead == '1') ADVANCE(2028);
      if (lookahead == '2') ADVANCE(2030);
      if (lookahead == '3') ADVANCE(2032);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '1') ADVANCE(1092);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '1') ADVANCE(2150);
      if (lookahead == '2') ADVANCE(2148);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '1') ADVANCE(1210);
      if (lookahead == '2') ADVANCE(1231);
      if (lookahead == '3') ADVANCE(1232);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '2') ADVANCE(2022);
      if (lookahead == '3') ADVANCE(2024);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'A') ADVANCE(1172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'A') ADVANCE(1150);
      if (lookahead == 'O') ADVANCE(1153);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'A') ADVANCE(1111);
      if (lookahead == 'C') ADVANCE(1158);
      if (lookahead == 'L') ADVANCE(1140);
      if (lookahead == 'R') ADVANCE(1122);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'A') ADVANCE(1114);
      if (lookahead == 'S') ADVANCE(1112);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'A') ADVANCE(1115);
      if (lookahead == 'E') ADVANCE(1116);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'B') ADVANCE(1102);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'B') ADVANCE(1103);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'B') ADVANCE(1125);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'C') ADVANCE(1142);
      if (lookahead == 'U') ADVANCE(1174);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'C') ADVANCE(1160);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'C') ADVANCE(2176);
      if (lookahead == 'L') ADVANCE(2178);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'C') ADVANCE(1143);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'C') ADVANCE(1166);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'C') ADVANCE(1121);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'C') ADVANCE(1144);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'C') ADVANCE(1145);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'C') ADVANCE(1175);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'C') ADVANCE(1176);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'D') ADVANCE(2194);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'E') ADVANCE(1130);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'E') ADVANCE(2158);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'E') ADVANCE(1146);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'E') ADVANCE(1110);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'E') ADVANCE(2156);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'E') ADVANCE(1164);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'E') ADVANCE(2182);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'E') ADVANCE(1118);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'E') ADVANCE(1165);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'E') ADVANCE(1117);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'G') ADVANCE(1167);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'G') ADVANCE(1135);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'G') ADVANCE(1157);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'H') ADVANCE(2192);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'H') ADVANCE(2172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'I') ADVANCE(1170);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'I') ADVANCE(1173);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'I') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'I') ADVANCE(1131);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'I') ADVANCE(1179);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'I') ADVANCE(1152);
      if (lookahead == 'U') ADVANCE(1105);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'I') ADVANCE(1169);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'I') ADVANCE(1159);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'K') ADVANCE(2164);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'K') ADVANCE(2174);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'K') ADVANCE(2184);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'K') ADVANCE(2170);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'L') ADVANCE(2162);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'M') ADVANCE(1161);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'N') ADVANCE(1182);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'N') ADVANCE(1100);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'N') ADVANCE(1113);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'N') ADVANCE(1104);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'N') ADVANCE(1129);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'N') ADVANCE(1151);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'N') ADVANCE(1168);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'N') ADVANCE(1156);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'N') ADVANCE(1128);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'N') ADVANCE(1126);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'O') ADVANCE(1147);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'O') ADVANCE(1154);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'O') ADVANCE(1155);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'P') ADVANCE(2180);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'P') ADVANCE(2188);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'P') ADVANCE(1178);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'Q') ADVANCE(2186);
      if (lookahead == 'S') ADVANCE(1162);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'R') ADVANCE(2160);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'R') ADVANCE(1136);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'R') ADVANCE(1124);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'S') ADVANCE(2166);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'S') ADVANCE(1133);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'S') ADVANCE(1109);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'S') ADVANCE(1137);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'S') ADVANCE(1171);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'S') ADVANCE(1180);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'T') ADVANCE(1132);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'T') ADVANCE(2168);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'T') ADVANCE(2190);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'T') ADVANCE(1120);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'T') ADVANCE(1141);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'T') ADVANCE(1123);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'T') ADVANCE(1127);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'U') ADVANCE(1106);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'V') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'Y') ADVANCE(1177);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1300);
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ':' ||
          lookahead == ';') ADVANCE(958);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1940);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1941);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1288);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1341);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1305);
      if (lookahead == 'g') ADVANCE(1488);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1098);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1097);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1439);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1283);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1265);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1287);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1899);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1475);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1690);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1801);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1199:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1304);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1200:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1817);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1201:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1308);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1202:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1317);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1203:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1252);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1204:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1302);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1205:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1306);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1206:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1695);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1207:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1323);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1208:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1798);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1209:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1360);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1210:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1444);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1211:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1212:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1468);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1213:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1438);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1214:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1900);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1215:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1520);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1216:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1612);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1217:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1775);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1218:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1862);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1219:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1822);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1220:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1769);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1221:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1282);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1222:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1476);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1223:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1887);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1224:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1477);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1225:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1890);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1226:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1478);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1227:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1479);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1228:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1320);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1229:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1776);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1230:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1322);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1231:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1458);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1232:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1459);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1233:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1909);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1234:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1854);
      if (lookahead == 'e') ADVANCE(1294);
      if (lookahead == 'r') ADVANCE(1295);
      if (lookahead == 's') ADVANCE(1566);
      if (lookahead == 't') ADVANCE(1236);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1235:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1290);
      if (lookahead == 'd') ADVANCE(1513);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1236:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1745);
      if (lookahead == 'o') ADVANCE(1704);
      if (lookahead == 'r') ADVANCE(1508);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1237:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(2076);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1238:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1791);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1239:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1736);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1240:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1595);
      if (lookahead == 'i') ADVANCE(1571);
      if (lookahead == 'r') ADVANCE(1393);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1241:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1324);
      if (lookahead == 'c') ADVANCE(1253);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1242:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1655);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1243:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1934);
      if (lookahead == 'e') ADVANCE(1896);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1244:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1762);
      if (lookahead == 'i') ADVANCE(1569);
      if (lookahead == 'r') ADVANCE(1512);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1245:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1325);
      if (lookahead == 'c') ADVANCE(1677);
      if (lookahead == 'l') ADVANCE(1269);
      if (lookahead == 'q') ADVANCE(1908);
      if (lookahead == 's') ADVANCE(1391);
      if (lookahead == 't') ADVANCE(1260);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1246:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1297);
      if (lookahead == 'u') ADVANCE(1350);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1247:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1481);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1248:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1796);
      if (lookahead == 'e') ADVANCE(1242);
      if (lookahead == 'i') ADVANCE(1432);
      if (lookahead == 'o') ADVANCE(1802);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1249:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1701);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1250:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1593);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1251:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1482);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1252:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1702);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1253:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1573);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1254:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1619);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1255:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1657);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1256:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1623);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1257:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1606);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1258:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1607);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1259:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1790);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1260:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1514);
      if (lookahead == 'r') ADVANCE(2152);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1261:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1519);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1262:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1794);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1263:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1726);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1264:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1837);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1265:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1891);
      if (lookahead == 'c') ADVANCE(1589);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1266:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1863);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1267:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1611);
      if (lookahead == 'e') ADVANCE(1421);
      if (lookahead == 'o') ADVANCE(2204);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1268:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1289);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1269:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1859);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1270:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1754);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1271:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1804);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1272:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1598);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1273:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1521);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1274:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1613);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1275:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1337);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1276:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1755);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1277:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1872);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1278:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1756);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1279:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1867);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1280:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1874);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1281:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1875);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1282:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1714);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1283:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1715);
      if (lookahead == 'd') ADVANCE(1266);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1284:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1292);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1285:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1293);
      if (lookahead == 't') ADVANCE(1255);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1286:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'b') ADVANCE(1672);
      if (lookahead == 'c') ADVANCE(1849);
      if (lookahead == 'l') ADVANCE(1567);
      if (lookahead == 'n') ADVANCE(1930);
      if (lookahead == 's') ADVANCE(1792);
      if (lookahead == 'u') ADVANCE(1824);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1287:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'b') ADVANCE(1897);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1288:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'b') ADVANCE(1683);
      if (lookahead == 'd') ADVANCE(1803);
      if (lookahead == 'r') ADVANCE(1904);
      if (lookahead == 's') ADVANCE(1738);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1289:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'b') ADVANCE(1579);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1290:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'b') ADVANCE(1582);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1291:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'b') ADVANCE(1591);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1292:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'b') ADVANCE(1599);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1293:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'b') ADVANCE(1603);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1294:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'c') ADVANCE(1964);
      if (lookahead == 'l') ADVANCE(1427);
      if (lookahead == 'r') ADVANCE(1912);
      if (lookahead == 't') ADVANCE(1976);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1295:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'c') ADVANCE(2238);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1296:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'c') ADVANCE(1966);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1297:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'c') ADVANCE(1552);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1298:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'c') ADVANCE(2226);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1299:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'c') ADVANCE(2285);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1300:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'c') ADVANCE(1674);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1941);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1301:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'c') ADVANCE(1344);
      if (lookahead == 'e') ADVANCE(1558);
      if (lookahead == 'i') ADVANCE(1741);
      if (lookahead == 's') ADVANCE(1825);
      if (lookahead == 'u') ADVANCE(1700);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1302:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'c') ADVANCE(1903);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1303:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'c') ADVANCE(1905);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1304:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'c') ADVANCE(1693);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1305:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'c') ADVANCE(1577);
      if (lookahead == 's') ADVANCE(1452);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1306:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'c') ADVANCE(1676);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1307:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'c') ADVANCE(1249);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1308:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'c') ADVANCE(1597);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1309:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'c') ADVANCE(1205);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1310:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'c') ADVANCE(1835);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1311:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'c') ADVANCE(1402);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1312:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'c') ADVANCE(1361);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1313:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'c') ADVANCE(1681);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1314:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'c') ADVANCE(1861);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1315:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'c') ADVANCE(1523);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1316:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'c') ADVANCE(1881);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1317:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'c') ADVANCE(1688);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1318:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'c') ADVANCE(1541);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1319:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'c') ADVANCE(1280);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1320:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'c') ADVANCE(1698);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1321:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'c') ADVANCE(1543);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1322:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'c') ADVANCE(1600);
      if (lookahead == 's') ADVANCE(1454);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1323:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'c') ADVANCE(1602);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1324:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'd') ADVANCE(2242);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1325:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'd') ADVANCE(2048);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1326:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'd') ADVANCE(1972);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1327:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'd') ADVANCE(2210);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1328:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'd') ADVANCE(2220);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1329:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'd') ADVANCE(1996);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1330:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'd') ADVANCE(1998);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1331:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'd') ADVANCE(2086);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1332:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'd') ADVANCE(2088);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1333:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'd') ADVANCE(1217);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1334:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'd') ADVANCE(1218);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1335:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'd') ADVANCE(1783);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1336:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'd') ADVANCE(1196);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1337:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'd') ADVANCE(1209);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1338:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'd') ADVANCE(1204);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1339:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'd') ADVANCE(1189);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1340:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'd') ADVANCE(1437);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1341:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'd') ADVANCE(1806);
      if (lookahead == 'p') ADVANCE(1261);
      if (lookahead == 's') ADVANCE(1739);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1342:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'd') ADVANCE(1220);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1343:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1245);
      if (lookahead == 'r') ADVANCE(1956);
      if (lookahead == 'v') ADVANCE(1250);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1344:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(2257);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1345:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1663);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1346:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(2016);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1347:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1935);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1348:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(2283);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1349:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(2245);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1350:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(2202);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1351:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(2218);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1352:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(2206);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1353:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(2243);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1354:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(2050);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1355:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(2291);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1356:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(2273);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1357:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1980);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1358:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(2230);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1359:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(2054);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1360:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1929);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1361:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(2267);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1362:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(2250);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1363:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(2252);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1364:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(2113);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1365:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(2208);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1366:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(2128);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1367:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(2096);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1368:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(2106);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1369:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(2098);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1370:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(2100);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1371:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(2060);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1372:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(2092);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1373:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(2132);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1374:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(2056);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1375:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(2068);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1376:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1718);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1377:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(2104);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1378:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(2094);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1379:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(2116);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1380:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1296);
      if (lookahead == 't') ADVANCE(1268);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1381:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1608);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1382:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1781);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1383:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1933);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1384:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1850);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1385:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1314);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1386:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1661);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1387:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1735);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1388:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1275);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1389:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1329);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1390:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1330);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1391:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1760);
      if (lookahead == 'p') ADVANCE(1678);
      if (lookahead == 'u') ADVANCE(1581);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1392:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1331);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1393:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1347);
      if (lookahead == 'o') ADVANCE(1610);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1394:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1827);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1395:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1721);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1396:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1332);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1397:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1722);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1398:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1814);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1399:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1575);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1400:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1829);
      if (lookahead == 'o') ADVANCE(1594);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1401:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1303);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1402:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1194);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1403:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1764);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1404:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1263);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1405:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1195);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1406:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1724);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1407:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1192);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1408:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1833);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1409:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1774);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1410:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1725);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1411:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1228);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1412:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1795);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1413:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1215);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1414:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1751);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1415:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1191);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1416:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1838);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1417:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1190);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1418:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1880);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1419:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1761);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1420:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1733);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1421:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1334);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1422:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1637);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1423:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1793);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1424:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1748);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1425:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1800);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1426:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1257);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1427:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1310);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1428:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1436);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1429:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1576);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1430:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1262);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1431:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1336);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1432:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1643);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1433:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1258);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1434:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1749);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1435:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1647);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1436:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1938);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1437:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1208);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1438:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1807);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1439:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1752);
      if (lookahead == 'f') ADVANCE(1545);
      if (lookahead == 'r') ADVANCE(1376);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1440:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1873);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1441:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1808);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1442:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1339);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1443:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1650);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1444:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1919);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1445:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1809);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1446:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1651);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1447:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1652);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1448:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1653);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1449:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1664);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1450:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1654);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1451:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1316);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1452:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1765);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1453:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1820);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1454:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1768);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1455:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1821);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1456:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1772);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1457:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1342);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1458:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1920);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1459:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1921);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1460:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1226);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1461:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1227);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1462:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1233);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1463:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'f') ADVANCE(1743);
      if (lookahead == 's') ADVANCE(1882);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1464:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'f') ADVANCE(1474);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1465:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'f') ADVANCE(1813);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1466:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'f') ADVANCE(1502);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1467:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'f') ADVANCE(1568);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1468:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'f') ADVANCE(1537);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1469:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'f') ADVANCE(1668);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1470:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'f') ADVANCE(1746);
      if (lookahead == 's') ADVANCE(1888);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1471:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'f') ADVANCE(1578);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1472:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'f') ADVANCE(1510);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1473:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'f') ADVANCE(1511);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1474:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'f') ADVANCE(1414);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1475:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'f') ADVANCE(1758);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1476:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'f') ADVANCE(1539);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1477:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'f') ADVANCE(1540);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1478:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'f') ADVANCE(1542);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1479:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'f') ADVANCE(1544);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1480:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'g') ADVANCE(2261);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1481:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'g') ADVANCE(2008);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1482:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'g') ADVANCE(2006);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1483:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'g') ADVANCE(2084);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1484:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'g') ADVANCE(2108);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1485:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'g') ADVANCE(2144);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1486:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'g') ADVANCE(1202);
      if (lookahead == 'r') ADVANCE(1605);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1487:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'g') ADVANCE(1640);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1488:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'g') ADVANCE(1583);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1489:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'h') ADVANCE(2014);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1490:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'h') ADVANCE(2265);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1491:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'h') ADVANCE(2232);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1492:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'h') ADVANCE(1744);
      if (lookahead == 'l') ADVANCE(1780);
      if (lookahead == 'o') ADVANCE(1187);
      if (lookahead == 'r') ADVANCE(1246);
      if (lookahead == 's') ADVANCE(1962);
      if (lookahead == 'x') ADVANCE(2018);
      if (lookahead == 'y') ADVANCE(1708);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1493:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'h') ADVANCE(1680);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1494:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'h') ADVANCE(1517);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1495:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'h') ADVANCE(1386);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1496:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'h') ADVANCE(1395);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1497:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'h') ADVANCE(1399);
      if (lookahead == 'k') ADVANCE(1932);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1498:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'h') ADVANCE(1389);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1499:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'h') ADVANCE(1390);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1500:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'h') ADVANCE(1799);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1501:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'h') ADVANCE(1429);
      if (lookahead == 'k') ADVANCE(1383);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1502:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1486);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1503:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1618);
      if (lookahead == 'o') ADVANCE(1241);
      if (lookahead == 's') ADVANCE(1734);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1504:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1487);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1505:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1851);
      if (lookahead == 'o') ADVANCE(1847);
      if (lookahead == 'y') ADVANCE(1185);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1506:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1911);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1507:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1326);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1508:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1631);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1509:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1311);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1510:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1483);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1511:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1484);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1512:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1870);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1513:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1256);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1514:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1624);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1515:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1315);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1516:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1828);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1517:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1626);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1518:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1815);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1519:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1723);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1520:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1634);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1521:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1627);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1522:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1635);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1523:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1879);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1524:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1855);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1525:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1936);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1526:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1878);
      if (lookahead == 'n') ADVANCE(1235);
      if (lookahead == 'o') ADVANCE(1559);
      if (lookahead == 's') ADVANCE(1380);
      if (lookahead == 'v') ADVANCE(1422);
      if (lookahead == 'x') ADVANCE(1703);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1527:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1750);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1528:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1319);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1529:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1318);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1530:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1913);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1531:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1937);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1532:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1533:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1691);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1534:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1685);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1535:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1614);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1536:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1615);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1537:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1585);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1538:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1616);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1539:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1540:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1587);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1541:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1876);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1542:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1588);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1543:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1877);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1544:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1590);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1545:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1592);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1546:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1816);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1547:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1435);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1548:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1443);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1549:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1450);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1550:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1321);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1551:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'j') ADVANCE(1451);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1552:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'k') ADVANCE(2224);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1553:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'k') ADVANCE(2259);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1554:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'k') ADVANCE(1670);
      if (lookahead == 's') ADVANCE(1400);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1555:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'k') ADVANCE(1656);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1556:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1248);
      if (lookahead == 'o') ADVANCE(1557);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1557:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1333);
      if (lookahead == 'n') ADVANCE(1466);
      if (lookahead == 'u') ADVANCE(1636);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1558:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1243);
      if (lookahead == 'p') ADVANCE(1852);
      if (lookahead == 'v') ADVANCE(1509);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1559:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1958);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1560:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(2211);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1561:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(2082);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1562:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(2080);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1563:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(2130);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1564:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(2078);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1565:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1931);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1566:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1910);
      if (lookahead == 'n') ADVANCE(1093);
      if (lookahead == 'r') ADVANCE(1720);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1567:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1198);
      if (lookahead == 'r') ADVANCE(1388);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1568:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1671);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1569:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1560);
      if (lookahead == 't') ADVANCE(1494);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1570:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1328);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1571:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1346);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1572:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1666);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1573:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1199);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1574:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1667);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1575:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1572);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1576:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1574);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1577:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1547);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1578:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1673);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1579:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1518);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1580:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1424);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1581:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1834);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1582:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1405);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1583:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1357);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1584:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1358);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1585:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1413);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1586:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1367);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1587:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1368);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1588:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1369);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1589:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1404);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1590:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1370);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1591:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1373);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1592:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1377);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1593:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1901);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1594:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1515);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1595:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1805);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1596:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1529);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1597:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1271);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1598:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1531);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1599:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1546);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1600:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1548);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1601:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1550);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1602:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1549);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1603:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1462);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1604:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'm') ADVANCE(1620);
      if (lookahead == 'n') ADVANCE(1524);
      if (lookahead == 'p') ADVANCE(1186);
      if (lookahead == 's') ADVANCE(1630);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1605:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'm') ADVANCE(2046);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1606:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'm') ADVANCE(2004);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1607:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'm') ADVANCE(2002);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1608:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'm') ADVANCE(1307);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1609:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'm') ADVANCE(1709);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1610:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'm') ADVANCE(1230);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1611:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'm') ADVANCE(1348);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1612:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'm') ADVANCE(1430);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1613:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'm') ADVANCE(1365);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1614:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'm') ADVANCE(1366);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1615:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'm') ADVANCE(1375);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1616:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'm') ADVANCE(1378);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1617:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'm') ADVANCE(1259);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1618:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'm') ADVANCE(1516);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1619:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'm') ADVANCE(1440);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1620:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'm') ADVANCE(1431);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1621:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'm') ADVANCE(1229);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1622:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1554);
      if (lookahead == 's') ADVANCE(1387);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1623:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(2254);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1624:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(2198);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1625:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(2042);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1626:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(2269);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1627:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(2214);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1628:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(2216);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1629:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(2138);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1630:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1679);
      if (lookahead == 's') ADVANCE(1394);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1631:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1480);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1632:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1555);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1633:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1335);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1634:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1635:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1485);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1636:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1826);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1637:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1857);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1638:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1309);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1639:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1274);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1640:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1201);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1641:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1812);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1642:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1785);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1643:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1831);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1644:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1727);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1645:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1728);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1646:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1731);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1647:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1839);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1648:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1732);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1649:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1869);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1650:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1840);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1651:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1864);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1652:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1866);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1653:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1868);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1654:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1845);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1655:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1200);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1656:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1689);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1657:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1312);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1658:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1472);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1659:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1810);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1660:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1473);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1661:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1865);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1662:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1811);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1663:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1222);
      if (lookahead == 'r') ADVANCE(2271);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1664:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1894);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1665:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1823);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1666:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(2034);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1667:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(2036);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1668:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(2102);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1669:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(2118);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1670:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(1924);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1671:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(1922);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1672:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(1779);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1673:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(1923);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1674:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(1609);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1675:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(1907);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1676:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(1340);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1677:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(1767);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1678:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(1659);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1679:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(1885);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1680:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(1570);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1681:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(1658);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1682:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(1737);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1683:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(1853);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1684:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(1563);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1685:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(1628);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1686:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(1207);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1687:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(1729);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1688:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(1747);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1689:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(1925);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1690:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(1713);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1691:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(1642);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1692:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(1219);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1693:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(1649);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1694:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(1757);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1695:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(1916);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1696:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(1596);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1697:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(1662);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1698:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(1660);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1699:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(1601);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1700:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'p') ADVANCE(2196);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1701:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'p') ADVANCE(2248);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1702:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'p') ADVANCE(1706);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1703:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'p') ADVANCE(1527);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1704:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'p') ADVANCE(1203);
      if (lookahead == 'r') ADVANCE(2154);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1705:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'p') ADVANCE(1716);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1706:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'p') ADVANCE(1561);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1707:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'p') ADVANCE(1562);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1708:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'p') ADVANCE(1351);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1709:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'p') ADVANCE(1264);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1710:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'p') ADVANCE(1669);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1711:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'p') ADVANCE(1564);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1712:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'p') ADVANCE(1843);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1713:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'p') ADVANCE(1409);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1714:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'p') ADVANCE(1707);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1715:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'p') ADVANCE(1711);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1716:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'p') ADVANCE(1694);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1717:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'p') ADVANCE(1697);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1718:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'q') ADVANCE(2110);
      if (lookahead == 's') ADVANCE(1710);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1719:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1968);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1720:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1970);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1721:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(2281);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1722:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(2277);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1723:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(2289);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1724:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1990);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1725:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1994);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1726:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(2064);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1727:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(2066);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1728:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(2062);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1729:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(2140);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1730:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(2112);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1731:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(2058);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1732:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(2070);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1733:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(2010);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1734:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1719);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1735:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1639);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1736:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1254);
      if (lookahead == 's') ADVANCE(1782);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1737:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1327);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1738:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1298);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1739:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1299);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1740:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1898);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1741:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1385);
      if (lookahead == 's') ADVANCE(1285);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1742:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1743:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1247);
      if (lookahead == 'u') ADVANCE(1638);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1744:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1745:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1892);
      if (lookahead == 't') ADVANCE(1353);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1746:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1251);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1747:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1740);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1748:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1836);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1749:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1766);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1750:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1355);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1751:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1206);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1752:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1730);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1753:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1754:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1841);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1755:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1842);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1756:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1844);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1757:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1846);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1758:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1428);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1759:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1372);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1760:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1918);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1761:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1471);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1762:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1621);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1763:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1684);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1764:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1211);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1765:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1914);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1766:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1687);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1767:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1338);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1768:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1915);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1769:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1412);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1770:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1418);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1771:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1778);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1772:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1917);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1773:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1433);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1774:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1281);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1775:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1776:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1453);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1777:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1455);
      if (lookahead == 't') ADVANCE(1742);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1778:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1449);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1779:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1893);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1780:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(1096);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1781:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(2200);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1782:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(1926);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1783:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(2236);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1784:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(2000);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1785:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(2120);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1786:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(2090);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1787:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(2122);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1788:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(2124);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1789:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(2126);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1790:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(1553);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1791:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(1500);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1792:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(1504);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1793:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(1493);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1794:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(1906);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1795:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(1717);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1796:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(1797);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1797:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(1188);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1798:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(1902);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1799:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(1525);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1800:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(1784);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1801:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(1884);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1802:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(1460);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1803:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(1830);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1804:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(1786);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1805:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(1352);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1806:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(1832);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1807:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(1895);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1808:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(1848);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1809:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(1860);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1810:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(1364);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1811:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(1379);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1812:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(1696);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1813:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(1408);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1814:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(1819);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1815:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(1498);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1816:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(1499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1817:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(1398);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1818:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(1416);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1819:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(1534);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1820:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(1886);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1821:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(1889);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1822:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(1456);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1823:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(1699);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1824:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1495);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1825:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(2240);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1826:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(2234);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1827:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1978);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1828:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(2222);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1829:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1982);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1830:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(2228);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1831:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(2279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1832:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(2287);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1833:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(2263);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1834:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(2275);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1835:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(2052);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1836:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1986);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1837:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(2044);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1838:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1984);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1839:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1988);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1840:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1992);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1841:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(2072);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1842:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(2074);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1843:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(2146);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1844:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(2134);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1845:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(2012);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1846:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(2136);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1847:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1489);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1848:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1094);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1849:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1506);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1850:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1212);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1851:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1617);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1852:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1490);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1853:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1491);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1854:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1507);
      if (lookahead == 'v') ADVANCE(1349);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1855:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1532);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1856:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1692);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1857:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1193);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1858:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1686);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1859:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1530);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1860:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1270);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1861:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1197);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1862:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1535);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1863:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1237);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1864:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1787);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1865:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1528);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1866:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1788);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1867:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1533);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1868:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1789);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1869:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1763);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1870:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1354);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1871:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1359);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1872:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1411);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1873:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1403);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1874:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1417);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1875:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1374);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1876:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1392);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1877:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1396);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1878:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1496);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1879:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1457);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1880:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1273);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1881:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1214);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1882:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1753);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1883:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1522);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1884:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1885:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1818);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1886:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1276);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1887:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1536);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1888:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1773);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1889:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1278);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1890:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1538);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1891:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1223);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1892:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1893:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1224);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1894:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1225);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1895:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1284);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1896:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1461);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1897:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'u') ADVANCE(1464);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1898:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'u') ADVANCE(1712);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1899:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'u') ADVANCE(1641);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1900:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'u') ADVANCE(1632);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1901:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'u') ADVANCE(1356);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1902:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'u') ADVANCE(1705);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1903:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'u') ADVANCE(1771);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1904:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'u') ADVANCE(1584);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1905:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'u') ADVANCE(1883);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1906:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'u') ADVANCE(1759);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1907:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'u') ADVANCE(1291);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1908:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'u') ADVANCE(1441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1909:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'u') ADVANCE(1665);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1910:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'v') ADVANCE(1099);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1911:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'v') ADVANCE(1277);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1912:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'v') ADVANCE(1397);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1913:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'v') ADVANCE(1363);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1914:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'v') ADVANCE(1406);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1915:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'v') ADVANCE(1410);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1916:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'v') ADVANCE(1419);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1917:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'v') ADVANCE(1420);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1918:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'v') ADVANCE(1442);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1919:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'v') ADVANCE(1446);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1920:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'v') ADVANCE(1447);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1921:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'v') ADVANCE(1448);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1922:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'w') ADVANCE(2020);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1923:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'w') ADVANCE(2142);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1924:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'w') ADVANCE(1625);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1925:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'w') ADVANCE(1629);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1926:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'w') ADVANCE(1682);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1927:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'x') ADVANCE(2038);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1928:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'x') ADVANCE(2040);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1929:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'x') ADVANCE(1401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1930:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'y') ADVANCE(1043);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1931:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'y') ADVANCE(1974);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1932:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'y') ADVANCE(1927);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1933:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'y') ADVANCE(1928);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1934:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'y') ADVANCE(1216);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1935:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'z') ADVANCE(1407);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1936:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'z') ADVANCE(1362);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1937:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'z') ADVANCE(1415);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1938:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'z') ADVANCE(1371);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1939:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1939);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1940:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ':' ||
          lookahead == ';') ADVANCE(958);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1940);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1941);
      END_STATE();
    case 1941:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1941);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1942:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1943:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 1944:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1944);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1945);
      END_STATE();
    case 1945:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1945);
      END_STATE();
    case 1946:
      ACCEPT_TOKEN(sym_decimal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1946);
      END_STATE();
    case 1947:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 1948:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1949:
      ACCEPT_TOKEN(aux_sym_hexidecimal_token1);
      END_STATE();
    case 1950:
      ACCEPT_TOKEN(aux_sym_hexidecimal_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1949);
      END_STATE();
    case 1951:
      ACCEPT_TOKEN(aux_sym_hexidecimal_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1950);
      END_STATE();
    case 1952:
      ACCEPT_TOKEN(aux_sym_hexidecimal_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1951);
      END_STATE();
    case 1953:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == 'b') ADVANCE(520);
      if (lookahead == 'f') ADVANCE(428);
      if (lookahead == 'n') ADVANCE(533);
      if (lookahead == 'p') ADVANCE(300);
      END_STATE();
    case 1954:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == 'b') ADVANCE(1551);
      if (lookahead == 'f') ADVANCE(1465);
      if (lookahead == 'n') ADVANCE(1565);
      if (lookahead == 'p') ADVANCE(1345);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1955:
      ACCEPT_TOKEN(anon_sym_rr);
      END_STATE();
    case 1956:
      ACCEPT_TOKEN(anon_sym_rr);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1957:
      ACCEPT_TOKEN(anon_sym_eol);
      END_STATE();
    case 1958:
      ACCEPT_TOKEN(anon_sym_eol);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1959:
      ACCEPT_TOKEN(anon_sym_nop);
      END_STATE();
    case 1960:
      ACCEPT_TOKEN(anon_sym_nop);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1961:
      ACCEPT_TOKEN(anon_sym_ts);
      END_STATE();
    case 1962:
      ACCEPT_TOKEN(anon_sym_ts);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1963:
      ACCEPT_TOKEN(anon_sym_sec);
      if (lookahead == 'o') ADVANCE(605);
      END_STATE();
    case 1964:
      ACCEPT_TOKEN(anon_sym_sec);
      if (lookahead == 'o') ADVANCE(1633);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1965:
      ACCEPT_TOKEN(anon_sym_esec);
      END_STATE();
    case 1966:
      ACCEPT_TOKEN(anon_sym_esec);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1967:
      ACCEPT_TOKEN(anon_sym_lsrr);
      END_STATE();
    case 1968:
      ACCEPT_TOKEN(anon_sym_lsrr);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1969:
      ACCEPT_TOKEN(anon_sym_ssrr);
      END_STATE();
    case 1970:
      ACCEPT_TOKEN(anon_sym_ssrr);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1971:
      ACCEPT_TOKEN(anon_sym_satid);
      END_STATE();
    case 1972:
      ACCEPT_TOKEN(anon_sym_satid);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1973:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '_') ADVANCE(434);
      END_STATE();
    case 1974:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '_') ADVANCE(1470);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1975:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 1976:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1977:
      ACCEPT_TOKEN(anon_sym_isset);
      END_STATE();
    case 1978:
      ACCEPT_TOKEN(anon_sym_isset);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1979:
      ACCEPT_TOKEN(anon_sym_toggle);
      END_STATE();
    case 1980:
      ACCEPT_TOKEN(anon_sym_toggle);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1981:
      ACCEPT_TOKEN(anon_sym_unset);
      END_STATE();
    case 1982:
      ACCEPT_TOKEN(anon_sym_unset);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1983:
      ACCEPT_TOKEN(anon_sym_isnotset);
      END_STATE();
    case 1984:
      ACCEPT_TOKEN(anon_sym_isnotset);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1985:
      ACCEPT_TOKEN(anon_sym_noalert);
      END_STATE();
    case 1986:
      ACCEPT_TOKEN(anon_sym_noalert);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1987:
      ACCEPT_TOKEN(anon_sym_to_client);
      END_STATE();
    case 1988:
      ACCEPT_TOKEN(anon_sym_to_client);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1989:
      ACCEPT_TOKEN(anon_sym_to_server);
      END_STATE();
    case 1990:
      ACCEPT_TOKEN(anon_sym_to_server);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1991:
      ACCEPT_TOKEN(anon_sym_from_client);
      END_STATE();
    case 1992:
      ACCEPT_TOKEN(anon_sym_from_client);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1993:
      ACCEPT_TOKEN(anon_sym_from_server);
      END_STATE();
    case 1994:
      ACCEPT_TOKEN(anon_sym_from_server);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1995:
      ACCEPT_TOKEN(anon_sym_established);
      END_STATE();
    case 1996:
      ACCEPT_TOKEN(anon_sym_established);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1997:
      ACCEPT_TOKEN(anon_sym_not_established);
      END_STATE();
    case 1998:
      ACCEPT_TOKEN(anon_sym_not_established);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 1999:
      ACCEPT_TOKEN(anon_sym_stateless);
      END_STATE();
    case 2000:
      ACCEPT_TOKEN(anon_sym_stateless);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2001:
      ACCEPT_TOKEN(anon_sym_only_stream);
      END_STATE();
    case 2002:
      ACCEPT_TOKEN(anon_sym_only_stream);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2003:
      ACCEPT_TOKEN(anon_sym_no_stream);
      END_STATE();
    case 2004:
      ACCEPT_TOKEN(anon_sym_no_stream);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2005:
      ACCEPT_TOKEN(anon_sym_only_frag);
      END_STATE();
    case 2006:
      ACCEPT_TOKEN(anon_sym_only_frag);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2007:
      ACCEPT_TOKEN(anon_sym_no_frag);
      END_STATE();
    case 2008:
      ACCEPT_TOKEN(anon_sym_no_frag);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2009:
      ACCEPT_TOKEN(anon_sym_request_SLASHto_server);
      END_STATE();
    case 2010:
      ACCEPT_TOKEN(anon_sym_request_SLASHto_server);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2011:
      ACCEPT_TOKEN(anon_sym_response_SLASHto_client);
      END_STATE();
    case 2012:
      ACCEPT_TOKEN(anon_sym_response_SLASHto_client);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2013:
      ACCEPT_TOKEN(anon_sym_both);
      END_STATE();
    case 2014:
      ACCEPT_TOKEN(anon_sym_both);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2015:
      ACCEPT_TOKEN(anon_sym_file);
      END_STATE();
    case 2016:
      ACCEPT_TOKEN(anon_sym_file);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2017:
      ACCEPT_TOKEN(anon_sym_tx);
      END_STATE();
    case 2018:
      ACCEPT_TOKEN(anon_sym_tx);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2019:
      ACCEPT_TOKEN(anon_sym_ssn_SLASHflow);
      END_STATE();
    case 2020:
      ACCEPT_TOKEN(anon_sym_ssn_SLASHflow);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2021:
      ACCEPT_TOKEN(anon_sym_sslv2);
      END_STATE();
    case 2022:
      ACCEPT_TOKEN(anon_sym_sslv2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2023:
      ACCEPT_TOKEN(anon_sym_sslv3);
      END_STATE();
    case 2024:
      ACCEPT_TOKEN(anon_sym_sslv3);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2025:
      ACCEPT_TOKEN(anon_sym_tls1_DOT0);
      END_STATE();
    case 2026:
      ACCEPT_TOKEN(anon_sym_tls1_DOT0);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2027:
      ACCEPT_TOKEN(anon_sym_tls1_DOT1);
      END_STATE();
    case 2028:
      ACCEPT_TOKEN(anon_sym_tls1_DOT1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2029:
      ACCEPT_TOKEN(anon_sym_tls1_DOT2);
      END_STATE();
    case 2030:
      ACCEPT_TOKEN(anon_sym_tls1_DOT2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2031:
      ACCEPT_TOKEN(anon_sym_tls1_DOT3);
      END_STATE();
    case 2032:
      ACCEPT_TOKEN(anon_sym_tls1_DOT3);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2033:
      ACCEPT_TOKEN(anon_sym_client_hello);
      END_STATE();
    case 2034:
      ACCEPT_TOKEN(anon_sym_client_hello);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2035:
      ACCEPT_TOKEN(anon_sym_server_hello);
      END_STATE();
    case 2036:
      ACCEPT_TOKEN(anon_sym_server_hello);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2037:
      ACCEPT_TOKEN(anon_sym_client_kyx);
      END_STATE();
    case 2038:
      ACCEPT_TOKEN(anon_sym_client_kyx);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2039:
      ACCEPT_TOKEN(anon_sym_server_keyx);
      END_STATE();
    case 2040:
      ACCEPT_TOKEN(anon_sym_server_keyx);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2041:
      ACCEPT_TOKEN(anon_sym_unkown);
      END_STATE();
    case 2042:
      ACCEPT_TOKEN(anon_sym_unkown);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2043:
      ACCEPT_TOKEN(anon_sym_2_compat);
      END_STATE();
    case 2044:
      ACCEPT_TOKEN(anon_sym_2_compat);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2045:
      ACCEPT_TOKEN(anon_sym_confirm);
      END_STATE();
    case 2046:
      ACCEPT_TOKEN(anon_sym_confirm);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2047:
      ACCEPT_TOKEN(anon_sym_read);
      END_STATE();
    case 2048:
      ACCEPT_TOKEN(anon_sym_read);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2049:
      ACCEPT_TOKEN(anon_sym_write);
      END_STATE();
    case 2050:
      ACCEPT_TOKEN(anon_sym_write);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2051:
      ACCEPT_TOKEN(anon_sym_select);
      END_STATE();
    case 2052:
      ACCEPT_TOKEN(anon_sym_select);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2053:
      ACCEPT_TOKEN(anon_sym_operate);
      END_STATE();
    case 2054:
      ACCEPT_TOKEN(anon_sym_operate);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2055:
      ACCEPT_TOKEN(anon_sym_direct_operate);
      if (lookahead == '_') ADVANCE(620);
      END_STATE();
    case 2056:
      ACCEPT_TOKEN(anon_sym_direct_operate);
      if (lookahead == '_') ADVANCE(1646);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2057:
      ACCEPT_TOKEN(anon_sym_direct_operate_nr);
      END_STATE();
    case 2058:
      ACCEPT_TOKEN(anon_sym_direct_operate_nr);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2059:
      ACCEPT_TOKEN(anon_sym_immed_freeze);
      if (lookahead == '_') ADVANCE(619);
      END_STATE();
    case 2060:
      ACCEPT_TOKEN(anon_sym_immed_freeze);
      if (lookahead == '_') ADVANCE(1645);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2061:
      ACCEPT_TOKEN(anon_sym_immed_freeze_nr);
      END_STATE();
    case 2062:
      ACCEPT_TOKEN(anon_sym_immed_freeze_nr);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2063:
      ACCEPT_TOKEN(anon_sym_freeze_clear);
      if (lookahead == '_') ADVANCE(618);
      END_STATE();
    case 2064:
      ACCEPT_TOKEN(anon_sym_freeze_clear);
      if (lookahead == '_') ADVANCE(1644);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2065:
      ACCEPT_TOKEN(anon_sym_freeze_clear_nr);
      END_STATE();
    case 2066:
      ACCEPT_TOKEN(anon_sym_freeze_clear_nr);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2067:
      ACCEPT_TOKEN(anon_sym_freeze_at_time);
      if (lookahead == '_') ADVANCE(622);
      END_STATE();
    case 2068:
      ACCEPT_TOKEN(anon_sym_freeze_at_time);
      if (lookahead == '_') ADVANCE(1648);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2069:
      ACCEPT_TOKEN(anon_sym_freeze_at_time_nr);
      END_STATE();
    case 2070:
      ACCEPT_TOKEN(anon_sym_freeze_at_time_nr);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2071:
      ACCEPT_TOKEN(anon_sym_cold_restart);
      END_STATE();
    case 2072:
      ACCEPT_TOKEN(anon_sym_cold_restart);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2073:
      ACCEPT_TOKEN(anon_sym_warm_restart);
      END_STATE();
    case 2074:
      ACCEPT_TOKEN(anon_sym_warm_restart);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2075:
      ACCEPT_TOKEN(anon_sym_initialize_data);
      END_STATE();
    case 2076:
      ACCEPT_TOKEN(anon_sym_initialize_data);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2077:
      ACCEPT_TOKEN(anon_sym_initialize_appl);
      END_STATE();
    case 2078:
      ACCEPT_TOKEN(anon_sym_initialize_appl);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2079:
      ACCEPT_TOKEN(anon_sym_start_appl);
      END_STATE();
    case 2080:
      ACCEPT_TOKEN(anon_sym_start_appl);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2081:
      ACCEPT_TOKEN(anon_sym_stop_appl);
      END_STATE();
    case 2082:
      ACCEPT_TOKEN(anon_sym_stop_appl);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2083:
      ACCEPT_TOKEN(anon_sym_save_config);
      END_STATE();
    case 2084:
      ACCEPT_TOKEN(anon_sym_save_config);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2085:
      ACCEPT_TOKEN(anon_sym_enable_unsolicited);
      END_STATE();
    case 2086:
      ACCEPT_TOKEN(anon_sym_enable_unsolicited);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2087:
      ACCEPT_TOKEN(anon_sym_disable_unsolicited);
      END_STATE();
    case 2088:
      ACCEPT_TOKEN(anon_sym_disable_unsolicited);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2089:
      ACCEPT_TOKEN(anon_sym_assign_class);
      END_STATE();
    case 2090:
      ACCEPT_TOKEN(anon_sym_assign_class);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2091:
      ACCEPT_TOKEN(anon_sym_delay_measure);
      END_STATE();
    case 2092:
      ACCEPT_TOKEN(anon_sym_delay_measure);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2093:
      ACCEPT_TOKEN(anon_sym_record_current_time);
      END_STATE();
    case 2094:
      ACCEPT_TOKEN(anon_sym_record_current_time);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2095:
      ACCEPT_TOKEN(anon_sym_open_file);
      END_STATE();
    case 2096:
      ACCEPT_TOKEN(anon_sym_open_file);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2097:
      ACCEPT_TOKEN(anon_sym_close_file);
      END_STATE();
    case 2098:
      ACCEPT_TOKEN(anon_sym_close_file);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2099:
      ACCEPT_TOKEN(anon_sym_delete_file);
      END_STATE();
    case 2100:
      ACCEPT_TOKEN(anon_sym_delete_file);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2101:
      ACCEPT_TOKEN(anon_sym_get_file_info);
      END_STATE();
    case 2102:
      ACCEPT_TOKEN(anon_sym_get_file_info);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2103:
      ACCEPT_TOKEN(anon_sym_authenticate_file);
      END_STATE();
    case 2104:
      ACCEPT_TOKEN(anon_sym_authenticate_file);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2105:
      ACCEPT_TOKEN(anon_sym_abort_file);
      END_STATE();
    case 2106:
      ACCEPT_TOKEN(anon_sym_abort_file);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2107:
      ACCEPT_TOKEN(anon_sym_activate_config);
      END_STATE();
    case 2108:
      ACCEPT_TOKEN(anon_sym_activate_config);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2109:
      ACCEPT_TOKEN(anon_sym_authenticate_req);
      END_STATE();
    case 2110:
      ACCEPT_TOKEN(anon_sym_authenticate_req);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2111:
      ACCEPT_TOKEN(anon_sym_authenticate_err);
      END_STATE();
    case 2112:
      ACCEPT_TOKEN(anon_sym_authenticate_err);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2113:
      ACCEPT_TOKEN(anon_sym_response);
      if (lookahead == '/') ADVANCE(1858);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2114:
      ACCEPT_TOKEN(anon_sym_response);
      if (lookahead == '/') ADVANCE(870);
      END_STATE();
    case 2115:
      ACCEPT_TOKEN(anon_sym_unsolicited_response);
      END_STATE();
    case 2116:
      ACCEPT_TOKEN(anon_sym_unsolicited_response);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2117:
      ACCEPT_TOKEN(anon_sym_authenticate_respo);
      END_STATE();
    case 2118:
      ACCEPT_TOKEN(anon_sym_authenticate_respo);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2119:
      ACCEPT_TOKEN(anon_sym_all_stations);
      END_STATE();
    case 2120:
      ACCEPT_TOKEN(anon_sym_all_stations);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2121:
      ACCEPT_TOKEN(anon_sym_class_1_events);
      END_STATE();
    case 2122:
      ACCEPT_TOKEN(anon_sym_class_1_events);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2123:
      ACCEPT_TOKEN(anon_sym_class_2_events);
      END_STATE();
    case 2124:
      ACCEPT_TOKEN(anon_sym_class_2_events);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2125:
      ACCEPT_TOKEN(anon_sym_class_3_events);
      END_STATE();
    case 2126:
      ACCEPT_TOKEN(anon_sym_class_3_events);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2127:
      ACCEPT_TOKEN(anon_sym_need_time);
      END_STATE();
    case 2128:
      ACCEPT_TOKEN(anon_sym_need_time);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2129:
      ACCEPT_TOKEN(anon_sym_local_control);
      END_STATE();
    case 2130:
      ACCEPT_TOKEN(anon_sym_local_control);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2131:
      ACCEPT_TOKEN(anon_sym_device_trouble);
      END_STATE();
    case 2132:
      ACCEPT_TOKEN(anon_sym_device_trouble);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2133:
      ACCEPT_TOKEN(anon_sym_device_restart);
      END_STATE();
    case 2134:
      ACCEPT_TOKEN(anon_sym_device_restart);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2135:
      ACCEPT_TOKEN(anon_sym_no_func_code_support);
      END_STATE();
    case 2136:
      ACCEPT_TOKEN(anon_sym_no_func_code_support);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2137:
      ACCEPT_TOKEN(anon_sym_object_unknown);
      END_STATE();
    case 2138:
      ACCEPT_TOKEN(anon_sym_object_unknown);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2139:
      ACCEPT_TOKEN(anon_sym_parameter_error);
      END_STATE();
    case 2140:
      ACCEPT_TOKEN(anon_sym_parameter_error);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2141:
      ACCEPT_TOKEN(anon_sym_event_buffer_overflow);
      END_STATE();
    case 2142:
      ACCEPT_TOKEN(anon_sym_event_buffer_overflow);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2143:
      ACCEPT_TOKEN(anon_sym_alread_executing);
      END_STATE();
    case 2144:
      ACCEPT_TOKEN(anon_sym_alread_executing);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2145:
      ACCEPT_TOKEN(anon_sym_config_corrupt);
      END_STATE();
    case 2146:
      ACCEPT_TOKEN(anon_sym_config_corrupt);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2147:
      ACCEPT_TOKEN(anon_sym_reserved_2);
      END_STATE();
    case 2148:
      ACCEPT_TOKEN(anon_sym_reserved_2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2149:
      ACCEPT_TOKEN(anon_sym_reserved_1);
      END_STATE();
    case 2150:
      ACCEPT_TOKEN(anon_sym_reserved_1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2151:
      ACCEPT_TOKEN(anon_sym_retr);
      END_STATE();
    case 2152:
      ACCEPT_TOKEN(anon_sym_retr);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2153:
      ACCEPT_TOKEN(anon_sym_stor);
      END_STATE();
    case 2154:
      ACCEPT_TOKEN(anon_sym_stor);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2155:
      ACCEPT_TOKEN(anon_sym_INVITE);
      END_STATE();
    case 2156:
      ACCEPT_TOKEN(anon_sym_INVITE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2157:
      ACCEPT_TOKEN(anon_sym_BYTE);
      END_STATE();
    case 2158:
      ACCEPT_TOKEN(anon_sym_BYTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2159:
      ACCEPT_TOKEN(anon_sym_REGISTER);
      END_STATE();
    case 2160:
      ACCEPT_TOKEN(anon_sym_REGISTER);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2161:
      ACCEPT_TOKEN(anon_sym_CANCEL);
      END_STATE();
    case 2162:
      ACCEPT_TOKEN(anon_sym_CANCEL);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2163:
      ACCEPT_TOKEN(anon_sym_ACK);
      END_STATE();
    case 2164:
      ACCEPT_TOKEN(anon_sym_ACK);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2165:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      END_STATE();
    case 2166:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2167:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      END_STATE();
    case 2168:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2169:
      ACCEPT_TOKEN(anon_sym_CONNACK);
      END_STATE();
    case 2170:
      ACCEPT_TOKEN(anon_sym_CONNACK);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2171:
      ACCEPT_TOKEN(anon_sym_PUBLISH);
      END_STATE();
    case 2172:
      ACCEPT_TOKEN(anon_sym_PUBLISH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2173:
      ACCEPT_TOKEN(anon_sym_PUBACK);
      END_STATE();
    case 2174:
      ACCEPT_TOKEN(anon_sym_PUBACK);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2175:
      ACCEPT_TOKEN(anon_sym_PUBREC);
      END_STATE();
    case 2176:
      ACCEPT_TOKEN(anon_sym_PUBREC);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2177:
      ACCEPT_TOKEN(anon_sym_PUBREL);
      END_STATE();
    case 2178:
      ACCEPT_TOKEN(anon_sym_PUBREL);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2179:
      ACCEPT_TOKEN(anon_sym_PUBCOMP);
      END_STATE();
    case 2180:
      ACCEPT_TOKEN(anon_sym_PUBCOMP);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2181:
      ACCEPT_TOKEN(anon_sym_SUBSCRIBE);
      END_STATE();
    case 2182:
      ACCEPT_TOKEN(anon_sym_SUBSCRIBE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2183:
      ACCEPT_TOKEN(anon_sym_SUBACK);
      END_STATE();
    case 2184:
      ACCEPT_TOKEN(anon_sym_SUBACK);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2185:
      ACCEPT_TOKEN(anon_sym_PINGREQ);
      END_STATE();
    case 2186:
      ACCEPT_TOKEN(anon_sym_PINGREQ);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2187:
      ACCEPT_TOKEN(anon_sym_PINGRESP);
      END_STATE();
    case 2188:
      ACCEPT_TOKEN(anon_sym_PINGRESP);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2189:
      ACCEPT_TOKEN(anon_sym_DISCONNECT);
      END_STATE();
    case 2190:
      ACCEPT_TOKEN(anon_sym_DISCONNECT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2191:
      ACCEPT_TOKEN(anon_sym_AUTH);
      END_STATE();
    case 2192:
      ACCEPT_TOKEN(anon_sym_AUTH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2193:
      ACCEPT_TOKEN(anon_sym_UNASSIGNED);
      END_STATE();
    case 2194:
      ACCEPT_TOKEN(anon_sym_UNASSIGNED);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2195:
      ACCEPT_TOKEN(anon_sym_dup);
      END_STATE();
    case 2196:
      ACCEPT_TOKEN(anon_sym_dup);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2197:
      ACCEPT_TOKEN(anon_sym_retain);
      END_STATE();
    case 2198:
      ACCEPT_TOKEN(anon_sym_retain);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2199:
      ACCEPT_TOKEN(anon_sym_yes);
      END_STATE();
    case 2200:
      ACCEPT_TOKEN(anon_sym_yes);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2201:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 2202:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2203:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead == '_') ADVANCE(425);
      if (lookahead == 'a') ADVANCE(549);
      if (lookahead == 'p') ADVANCE(1959);
      if (lookahead == 't') ADVANCE(143);
      END_STATE();
    case 2204:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead == '_') ADVANCE(1463);
      if (lookahead == 'a') ADVANCE(1580);
      if (lookahead == 'p') ADVANCE(1960);
      if (lookahead == 't') ADVANCE(1213);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2205:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 2206:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2207:
      ACCEPT_TOKEN(anon_sym_username);
      END_STATE();
    case 2208:
      ACCEPT_TOKEN(anon_sym_username);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2209:
      ACCEPT_TOKEN(anon_sym_password);
      END_STATE();
    case 2210:
      ACCEPT_TOKEN(anon_sym_password);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2211:
      ACCEPT_TOKEN(anon_sym_will);
      if (lookahead == '_') ADVANCE(1770);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2212:
      ACCEPT_TOKEN(anon_sym_will);
      if (lookahead == '_') ADVANCE(766);
      END_STATE();
    case 2213:
      ACCEPT_TOKEN(anon_sym_will_retain);
      END_STATE();
    case 2214:
      ACCEPT_TOKEN(anon_sym_will_retain);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2215:
      ACCEPT_TOKEN(anon_sym_clean_session);
      END_STATE();
    case 2216:
      ACCEPT_TOKEN(anon_sym_clean_session);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2217:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 2218:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2219:
      ACCEPT_TOKEN(anon_sym_threshold);
      END_STATE();
    case 2220:
      ACCEPT_TOKEN(anon_sym_threshold);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2221:
      ACCEPT_TOKEN(anon_sym_limit);
      END_STATE();
    case 2222:
      ACCEPT_TOKEN(anon_sym_limit);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2223:
      ACCEPT_TOKEN(anon_sym_track);
      END_STATE();
    case 2224:
      ACCEPT_TOKEN(anon_sym_track);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2225:
      ACCEPT_TOKEN(anon_sym_by_src);
      END_STATE();
    case 2226:
      ACCEPT_TOKEN(anon_sym_by_src);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2227:
      ACCEPT_TOKEN(anon_sym_by_dst);
      END_STATE();
    case 2228:
      ACCEPT_TOKEN(anon_sym_by_dst);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2229:
      ACCEPT_TOKEN(anon_sym_by_rule);
      END_STATE();
    case 2230:
      ACCEPT_TOKEN(anon_sym_by_rule);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2231:
      ACCEPT_TOKEN(anon_sym_by_both);
      END_STATE();
    case 2232:
      ACCEPT_TOKEN(anon_sym_by_both);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2233:
      ACCEPT_TOKEN(anon_sym_count);
      END_STATE();
    case 2234:
      ACCEPT_TOKEN(anon_sym_count);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2235:
      ACCEPT_TOKEN(anon_sym_seconds);
      END_STATE();
    case 2236:
      ACCEPT_TOKEN(anon_sym_seconds);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2237:
      ACCEPT_TOKEN(anon_sym_src);
      END_STATE();
    case 2238:
      ACCEPT_TOKEN(anon_sym_src);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2239:
      ACCEPT_TOKEN(anon_sym_dst);
      END_STATE();
    case 2240:
      ACCEPT_TOKEN(anon_sym_dst);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2241:
      ACCEPT_TOKEN(anon_sym_load);
      END_STATE();
    case 2242:
      ACCEPT_TOKEN(anon_sym_load);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2243:
      ACCEPT_TOKEN(anon_sym_state);
      if (lookahead == 'l') ADVANCE(1425);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2244:
      ACCEPT_TOKEN(anon_sym_state);
      if (lookahead == 'l') ADVANCE(386);
      END_STATE();
    case 2245:
      ACCEPT_TOKEN(anon_sym_save);
      if (lookahead == '_') ADVANCE(1313);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2246:
      ACCEPT_TOKEN(anon_sym_save);
      if (lookahead == '_') ADVANCE(263);
      END_STATE();
    case 2247:
      ACCEPT_TOKEN(anon_sym_memcap);
      END_STATE();
    case 2248:
      ACCEPT_TOKEN(anon_sym_memcap);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2249:
      ACCEPT_TOKEN(anon_sym_hashsize);
      END_STATE();
    case 2250:
      ACCEPT_TOKEN(anon_sym_hashsize);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2251:
      ACCEPT_TOKEN(anon_sym_relative);
      END_STATE();
    case 2252:
      ACCEPT_TOKEN(anon_sym_relative);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2253:
      ACCEPT_TOKEN(anon_sym_endian);
      END_STATE();
    case 2254:
      ACCEPT_TOKEN(anon_sym_endian);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2255:
      ACCEPT_TOKEN(anon_sym_dce);
      END_STATE();
    case 2256:
      ACCEPT_TOKEN(anon_sym_dce);
      if (lookahead == ':') ADVANCE(1041);
      if (lookahead == 'r') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1016);
      END_STATE();
    case 2257:
      ACCEPT_TOKEN(anon_sym_dce);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2258:
      ACCEPT_TOKEN(anon_sym_bitmask);
      END_STATE();
    case 2259:
      ACCEPT_TOKEN(anon_sym_bitmask);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2260:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 2261:
      ACCEPT_TOKEN(anon_sym_string);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2262:
      ACCEPT_TOKEN(anon_sym_offset);
      END_STATE();
    case 2263:
      ACCEPT_TOKEN(anon_sym_offset);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2264:
      ACCEPT_TOKEN(anon_sym_depth);
      END_STATE();
    case 2265:
      ACCEPT_TOKEN(anon_sym_depth);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2266:
      ACCEPT_TOKEN(anon_sym_distance);
      END_STATE();
    case 2267:
      ACCEPT_TOKEN(anon_sym_distance);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2268:
      ACCEPT_TOKEN(anon_sym_within);
      END_STATE();
    case 2269:
      ACCEPT_TOKEN(anon_sym_within);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2270:
      ACCEPT_TOKEN(anon_sym_oper);
      if (lookahead == 'a') ADVANCE(883);
      END_STATE();
    case 2271:
      ACCEPT_TOKEN(anon_sym_oper);
      if (lookahead == 'a') ADVANCE(1871);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2272:
      ACCEPT_TOKEN(anon_sym_rvalue);
      END_STATE();
    case 2273:
      ACCEPT_TOKEN(anon_sym_rvalue);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2274:
      ACCEPT_TOKEN(anon_sym_result);
      END_STATE();
    case 2275:
      ACCEPT_TOKEN(anon_sym_result);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2276:
      ACCEPT_TOKEN(anon_sym_server);
      if (lookahead == '_') ADVANCE(466);
      END_STATE();
    case 2277:
      ACCEPT_TOKEN(anon_sym_server);
      if (lookahead == '_') ADVANCE(1501);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2278:
      ACCEPT_TOKEN(anon_sym_client);
      if (lookahead == '_') ADVANCE(460);
      END_STATE();
    case 2279:
      ACCEPT_TOKEN(anon_sym_client);
      if (lookahead == '_') ADVANCE(1497);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2280:
      ACCEPT_TOKEN(anon_sym_either);
      END_STATE();
    case 2281:
      ACCEPT_TOKEN(anon_sym_either);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2282:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 2283:
      ACCEPT_TOKEN(anon_sym_name);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2284:
      ACCEPT_TOKEN(anon_sym_ip_src);
      END_STATE();
    case 2285:
      ACCEPT_TOKEN(anon_sym_ip_src);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2286:
      ACCEPT_TOKEN(anon_sym_ip_dst);
      END_STATE();
    case 2287:
      ACCEPT_TOKEN(anon_sym_ip_dst);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2288:
      ACCEPT_TOKEN(anon_sym_ip_pair);
      END_STATE();
    case 2289:
      ACCEPT_TOKEN(anon_sym_ip_pair);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    case 2290:
      ACCEPT_TOKEN(anon_sym_expire);
      END_STATE();
    case 2291:
      ACCEPT_TOKEN(anon_sym_expire);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1942);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 960},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 960},
  [8] = {.lex_state = 960},
  [9] = {.lex_state = 960},
  [10] = {.lex_state = 960},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 960},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 960},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 960},
  [21] = {.lex_state = 960},
  [22] = {.lex_state = 960},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 960},
  [25] = {.lex_state = 960},
  [26] = {.lex_state = 960},
  [27] = {.lex_state = 960},
  [28] = {.lex_state = 960},
  [29] = {.lex_state = 960},
  [30] = {.lex_state = 960},
  [31] = {.lex_state = 960},
  [32] = {.lex_state = 960},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 960},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 960},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 960},
  [39] = {.lex_state = 960},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 960},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 960},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 960},
  [47] = {.lex_state = 5},
  [48] = {.lex_state = 5},
  [49] = {.lex_state = 5},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 5},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 5},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 5},
  [59] = {.lex_state = 9},
  [60] = {.lex_state = 9},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 5},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 9},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 9},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 2},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 960},
  [96] = {.lex_state = 954},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 963},
  [104] = {.lex_state = 9},
  [105] = {.lex_state = 954},
  [106] = {.lex_state = 9},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 1007},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 9},
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
    [sym__ipv6_octet] = ACTIONS(1),
    [anon_sym_any] = ACTIONS(1),
    [aux_sym_port_token1] = ACTIONS(1),
    [sym_colon] = ACTIONS(1),
    [sym_semicolon] = ACTIONS(1),
    [sym_bitwise_and] = ACTIONS(1),
    [sym_bitwise_or] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_DASH] = ACTIONS(1),
    [anon_sym_LT_GT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_KB] = ACTIONS(1),
    [anon_sym_MB] = ACTIONS(1),
    [anon_sym_GB] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_x] = ACTIONS(1),
    [aux_sym_hexidecimal_token1] = ACTIONS(1),
    [aux_sym_hexstring_token1] = ACTIONS(1),
    [anon_sym_o] = ACTIONS(1),
    [anon_sym_rr] = ACTIONS(1),
    [anon_sym_eol] = ACTIONS(1),
    [anon_sym_nop] = ACTIONS(1),
    [anon_sym_ts] = ACTIONS(1),
    [anon_sym_sec] = ACTIONS(1),
    [anon_sym_esec] = ACTIONS(1),
    [anon_sym_lsrr] = ACTIONS(1),
    [anon_sym_ssrr] = ACTIONS(1),
    [anon_sym_satid] = ACTIONS(1),
    [anon_sym_only] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_isset] = ACTIONS(1),
    [anon_sym_toggle] = ACTIONS(1),
    [anon_sym_unset] = ACTIONS(1),
    [anon_sym_isnotset] = ACTIONS(1),
    [anon_sym_noalert] = ACTIONS(1),
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
    [anon_sym_request_SLASHto_server] = ACTIONS(1),
    [anon_sym_response_SLASHto_client] = ACTIONS(1),
    [anon_sym_both] = ACTIONS(1),
    [anon_sym_file] = ACTIONS(1),
    [anon_sym_tx] = ACTIONS(1),
    [anon_sym_ssn_SLASHflow] = ACTIONS(1),
    [anon_sym_sslv2] = ACTIONS(1),
    [anon_sym_sslv3] = ACTIONS(1),
    [anon_sym_client_hello] = ACTIONS(1),
    [anon_sym_server_hello] = ACTIONS(1),
    [anon_sym_client_kyx] = ACTIONS(1),
    [anon_sym_server_keyx] = ACTIONS(1),
    [anon_sym_unkown] = ACTIONS(1),
    [anon_sym_2_compat] = ACTIONS(1),
    [anon_sym_confirm] = ACTIONS(1),
    [anon_sym_read] = ACTIONS(1),
    [anon_sym_write] = ACTIONS(1),
    [anon_sym_select] = ACTIONS(1),
    [anon_sym_operate] = ACTIONS(1),
    [anon_sym_direct_operate] = ACTIONS(1),
    [anon_sym_direct_operate_nr] = ACTIONS(1),
    [anon_sym_immed_freeze] = ACTIONS(1),
    [anon_sym_immed_freeze_nr] = ACTIONS(1),
    [anon_sym_freeze_clear] = ACTIONS(1),
    [anon_sym_freeze_clear_nr] = ACTIONS(1),
    [anon_sym_freeze_at_time] = ACTIONS(1),
    [anon_sym_freeze_at_time_nr] = ACTIONS(1),
    [anon_sym_cold_restart] = ACTIONS(1),
    [anon_sym_warm_restart] = ACTIONS(1),
    [anon_sym_initialize_data] = ACTIONS(1),
    [anon_sym_initialize_appl] = ACTIONS(1),
    [anon_sym_start_appl] = ACTIONS(1),
    [anon_sym_stop_appl] = ACTIONS(1),
    [anon_sym_save_config] = ACTIONS(1),
    [anon_sym_enable_unsolicited] = ACTIONS(1),
    [anon_sym_disable_unsolicited] = ACTIONS(1),
    [anon_sym_assign_class] = ACTIONS(1),
    [anon_sym_delay_measure] = ACTIONS(1),
    [anon_sym_record_current_time] = ACTIONS(1),
    [anon_sym_open_file] = ACTIONS(1),
    [anon_sym_close_file] = ACTIONS(1),
    [anon_sym_delete_file] = ACTIONS(1),
    [anon_sym_get_file_info] = ACTIONS(1),
    [anon_sym_authenticate_file] = ACTIONS(1),
    [anon_sym_abort_file] = ACTIONS(1),
    [anon_sym_activate_config] = ACTIONS(1),
    [anon_sym_authenticate_req] = ACTIONS(1),
    [anon_sym_authenticate_err] = ACTIONS(1),
    [anon_sym_response] = ACTIONS(1),
    [anon_sym_unsolicited_response] = ACTIONS(1),
    [anon_sym_authenticate_respo] = ACTIONS(1),
    [anon_sym_all_stations] = ACTIONS(1),
    [anon_sym_class_1_events] = ACTIONS(1),
    [anon_sym_class_2_events] = ACTIONS(1),
    [anon_sym_class_3_events] = ACTIONS(1),
    [anon_sym_need_time] = ACTIONS(1),
    [anon_sym_local_control] = ACTIONS(1),
    [anon_sym_device_trouble] = ACTIONS(1),
    [anon_sym_device_restart] = ACTIONS(1),
    [anon_sym_no_func_code_support] = ACTIONS(1),
    [anon_sym_object_unknown] = ACTIONS(1),
    [anon_sym_parameter_error] = ACTIONS(1),
    [anon_sym_event_buffer_overflow] = ACTIONS(1),
    [anon_sym_alread_executing] = ACTIONS(1),
    [anon_sym_config_corrupt] = ACTIONS(1),
    [anon_sym_reserved_2] = ACTIONS(1),
    [anon_sym_reserved_1] = ACTIONS(1),
    [anon_sym_retr] = ACTIONS(1),
    [anon_sym_stor] = ACTIONS(1),
    [anon_sym_INVITE] = ACTIONS(1),
    [anon_sym_BYTE] = ACTIONS(1),
    [anon_sym_REGISTER] = ACTIONS(1),
    [anon_sym_CANCEL] = ACTIONS(1),
    [anon_sym_ACK] = ACTIONS(1),
    [anon_sym_OPTIONS] = ACTIONS(1),
    [anon_sym_CONNECT] = ACTIONS(1),
    [anon_sym_CONNACK] = ACTIONS(1),
    [anon_sym_PUBLISH] = ACTIONS(1),
    [anon_sym_PUBACK] = ACTIONS(1),
    [anon_sym_PUBREC] = ACTIONS(1),
    [anon_sym_PUBREL] = ACTIONS(1),
    [anon_sym_PUBCOMP] = ACTIONS(1),
    [anon_sym_SUBSCRIBE] = ACTIONS(1),
    [anon_sym_SUBACK] = ACTIONS(1),
    [anon_sym_PINGREQ] = ACTIONS(1),
    [anon_sym_PINGRESP] = ACTIONS(1),
    [anon_sym_DISCONNECT] = ACTIONS(1),
    [anon_sym_AUTH] = ACTIONS(1),
    [anon_sym_UNASSIGNED] = ACTIONS(1),
    [anon_sym_dup] = ACTIONS(1),
    [anon_sym_retain] = ACTIONS(1),
    [anon_sym_yes] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_no] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_username] = ACTIONS(1),
    [anon_sym_password] = ACTIONS(1),
    [anon_sym_will] = ACTIONS(1),
    [anon_sym_will_retain] = ACTIONS(1),
    [anon_sym_clean_session] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_threshold] = ACTIONS(1),
    [anon_sym_limit] = ACTIONS(1),
    [anon_sym_track] = ACTIONS(1),
    [anon_sym_by_src] = ACTIONS(1),
    [anon_sym_by_dst] = ACTIONS(1),
    [anon_sym_by_rule] = ACTIONS(1),
    [anon_sym_by_both] = ACTIONS(1),
    [anon_sym_count] = ACTIONS(1),
    [anon_sym_seconds] = ACTIONS(1),
    [anon_sym_src] = ACTIONS(1),
    [anon_sym_dst] = ACTIONS(1),
    [anon_sym_load] = ACTIONS(1),
    [anon_sym_state] = ACTIONS(1),
    [anon_sym_save] = ACTIONS(1),
    [anon_sym_memcap] = ACTIONS(1),
    [anon_sym_hashsize] = ACTIONS(1),
    [anon_sym_relative] = ACTIONS(1),
    [anon_sym_endian] = ACTIONS(1),
    [anon_sym_dce] = ACTIONS(1),
    [anon_sym_bitmask] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_offset] = ACTIONS(1),
    [anon_sym_depth] = ACTIONS(1),
    [anon_sym_distance] = ACTIONS(1),
    [anon_sym_within] = ACTIONS(1),
    [anon_sym_oper] = ACTIONS(1),
    [anon_sym_rvalue] = ACTIONS(1),
    [anon_sym_result] = ACTIONS(1),
    [anon_sym_server] = ACTIONS(1),
    [anon_sym_client] = ACTIONS(1),
    [anon_sym_either] = ACTIONS(1),
    [anon_sym_name] = ACTIONS(1),
    [anon_sym_ip_src] = ACTIONS(1),
    [anon_sym_ip_dst] = ACTIONS(1),
    [anon_sym_ip_pair] = ACTIONS(1),
    [anon_sym_expire] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(98),
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
    [sym_math_operator] = STATE(59),
    [sym_digit] = STATE(78),
    [sym_text] = STATE(78),
    [sym_string] = STATE(78),
    [sym_hexidecimal] = STATE(78),
    [sym_hexstring] = STATE(78),
    [sym_octal] = STATE(78),
    [sym_value] = STATE(107),
    [sym_constant] = STATE(78),
    [aux_sym_text_repeat1] = STATE(57),
    [sym_negation] = ACTIONS(11),
    [anon_sym_any] = ACTIONS(13),
    [sym_bitwise_and] = ACTIONS(15),
    [sym_bitwise_or] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_STAR] = ACTIONS(19),
    [anon_sym_SLASH] = ACTIONS(17),
    [anon_sym_LT_LT] = ACTIONS(17),
    [anon_sym_GT_GT] = ACTIONS(17),
    [anon_sym_EQ] = ACTIONS(17),
    [anon_sym_GT_EQ] = ACTIONS(17),
    [anon_sym_LT_EQ] = ACTIONS(17),
    [anon_sym_EQ_EQ] = ACTIONS(17),
    [anon_sym_BANG_DASH] = ACTIONS(17),
    [anon_sym_LT_GT] = ACTIONS(17),
    [anon_sym_GT] = ACTIONS(17),
    [anon_sym_LT] = ACTIONS(17),
    [aux_sym_digit_token1] = ACTIONS(21),
    [aux_sym_text_token1] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [sym_decimal] = ACTIONS(15),
    [anon_sym_x] = ACTIONS(27),
    [aux_sym_hexstring_token1] = ACTIONS(29),
    [anon_sym_o] = ACTIONS(31),
    [anon_sym_rr] = ACTIONS(13),
    [anon_sym_eol] = ACTIONS(13),
    [anon_sym_nop] = ACTIONS(13),
    [anon_sym_ts] = ACTIONS(13),
    [anon_sym_sec] = ACTIONS(13),
    [anon_sym_esec] = ACTIONS(13),
    [anon_sym_lsrr] = ACTIONS(13),
    [anon_sym_ssrr] = ACTIONS(13),
    [anon_sym_satid] = ACTIONS(13),
    [anon_sym_only] = ACTIONS(13),
    [anon_sym_set] = ACTIONS(13),
    [anon_sym_isset] = ACTIONS(13),
    [anon_sym_toggle] = ACTIONS(13),
    [anon_sym_unset] = ACTIONS(13),
    [anon_sym_isnotset] = ACTIONS(13),
    [anon_sym_noalert] = ACTIONS(13),
    [anon_sym_to_client] = ACTIONS(13),
    [anon_sym_to_server] = ACTIONS(13),
    [anon_sym_from_client] = ACTIONS(13),
    [anon_sym_from_server] = ACTIONS(13),
    [anon_sym_established] = ACTIONS(13),
    [anon_sym_not_established] = ACTIONS(13),
    [anon_sym_stateless] = ACTIONS(13),
    [anon_sym_only_stream] = ACTIONS(13),
    [anon_sym_no_stream] = ACTIONS(13),
    [anon_sym_only_frag] = ACTIONS(13),
    [anon_sym_no_frag] = ACTIONS(13),
    [anon_sym_request_SLASHto_server] = ACTIONS(13),
    [anon_sym_response_SLASHto_client] = ACTIONS(13),
    [anon_sym_both] = ACTIONS(13),
    [anon_sym_file] = ACTIONS(13),
    [anon_sym_tx] = ACTIONS(13),
    [anon_sym_ssn_SLASHflow] = ACTIONS(13),
    [anon_sym_sslv2] = ACTIONS(13),
    [anon_sym_sslv3] = ACTIONS(13),
    [anon_sym_tls1_DOT0] = ACTIONS(13),
    [anon_sym_tls1_DOT1] = ACTIONS(13),
    [anon_sym_tls1_DOT2] = ACTIONS(13),
    [anon_sym_tls1_DOT3] = ACTIONS(13),
    [anon_sym_client_hello] = ACTIONS(13),
    [anon_sym_server_hello] = ACTIONS(13),
    [anon_sym_client_kyx] = ACTIONS(13),
    [anon_sym_server_keyx] = ACTIONS(13),
    [anon_sym_unkown] = ACTIONS(13),
    [anon_sym_2_compat] = ACTIONS(13),
    [anon_sym_confirm] = ACTIONS(13),
    [anon_sym_read] = ACTIONS(13),
    [anon_sym_write] = ACTIONS(13),
    [anon_sym_select] = ACTIONS(13),
    [anon_sym_operate] = ACTIONS(13),
    [anon_sym_direct_operate] = ACTIONS(13),
    [anon_sym_direct_operate_nr] = ACTIONS(13),
    [anon_sym_immed_freeze] = ACTIONS(13),
    [anon_sym_immed_freeze_nr] = ACTIONS(13),
    [anon_sym_freeze_clear] = ACTIONS(13),
    [anon_sym_freeze_clear_nr] = ACTIONS(13),
    [anon_sym_freeze_at_time] = ACTIONS(13),
    [anon_sym_freeze_at_time_nr] = ACTIONS(13),
    [anon_sym_cold_restart] = ACTIONS(13),
    [anon_sym_warm_restart] = ACTIONS(13),
    [anon_sym_initialize_data] = ACTIONS(13),
    [anon_sym_initialize_appl] = ACTIONS(13),
    [anon_sym_start_appl] = ACTIONS(13),
    [anon_sym_stop_appl] = ACTIONS(13),
    [anon_sym_save_config] = ACTIONS(13),
    [anon_sym_enable_unsolicited] = ACTIONS(13),
    [anon_sym_disable_unsolicited] = ACTIONS(13),
    [anon_sym_assign_class] = ACTIONS(13),
    [anon_sym_delay_measure] = ACTIONS(13),
    [anon_sym_record_current_time] = ACTIONS(13),
    [anon_sym_open_file] = ACTIONS(13),
    [anon_sym_close_file] = ACTIONS(13),
    [anon_sym_delete_file] = ACTIONS(13),
    [anon_sym_get_file_info] = ACTIONS(13),
    [anon_sym_authenticate_file] = ACTIONS(13),
    [anon_sym_abort_file] = ACTIONS(13),
    [anon_sym_activate_config] = ACTIONS(13),
    [anon_sym_authenticate_req] = ACTIONS(13),
    [anon_sym_authenticate_err] = ACTIONS(13),
    [anon_sym_response] = ACTIONS(13),
    [anon_sym_unsolicited_response] = ACTIONS(13),
    [anon_sym_authenticate_respo] = ACTIONS(13),
    [anon_sym_all_stations] = ACTIONS(13),
    [anon_sym_class_1_events] = ACTIONS(13),
    [anon_sym_class_2_events] = ACTIONS(13),
    [anon_sym_class_3_events] = ACTIONS(13),
    [anon_sym_need_time] = ACTIONS(13),
    [anon_sym_local_control] = ACTIONS(13),
    [anon_sym_device_trouble] = ACTIONS(13),
    [anon_sym_device_restart] = ACTIONS(13),
    [anon_sym_no_func_code_support] = ACTIONS(13),
    [anon_sym_object_unknown] = ACTIONS(13),
    [anon_sym_parameter_error] = ACTIONS(13),
    [anon_sym_event_buffer_overflow] = ACTIONS(13),
    [anon_sym_alread_executing] = ACTIONS(13),
    [anon_sym_config_corrupt] = ACTIONS(13),
    [anon_sym_reserved_2] = ACTIONS(13),
    [anon_sym_reserved_1] = ACTIONS(13),
    [anon_sym_retr] = ACTIONS(13),
    [anon_sym_stor] = ACTIONS(13),
    [anon_sym_INVITE] = ACTIONS(13),
    [anon_sym_BYTE] = ACTIONS(13),
    [anon_sym_REGISTER] = ACTIONS(13),
    [anon_sym_CANCEL] = ACTIONS(13),
    [anon_sym_ACK] = ACTIONS(13),
    [anon_sym_OPTIONS] = ACTIONS(13),
    [anon_sym_CONNECT] = ACTIONS(13),
    [anon_sym_CONNACK] = ACTIONS(13),
    [anon_sym_PUBLISH] = ACTIONS(13),
    [anon_sym_PUBACK] = ACTIONS(13),
    [anon_sym_PUBREC] = ACTIONS(13),
    [anon_sym_PUBREL] = ACTIONS(13),
    [anon_sym_PUBCOMP] = ACTIONS(13),
    [anon_sym_SUBSCRIBE] = ACTIONS(13),
    [anon_sym_SUBACK] = ACTIONS(13),
    [anon_sym_PINGREQ] = ACTIONS(13),
    [anon_sym_PINGRESP] = ACTIONS(13),
    [anon_sym_DISCONNECT] = ACTIONS(13),
    [anon_sym_AUTH] = ACTIONS(13),
    [anon_sym_UNASSIGNED] = ACTIONS(13),
    [anon_sym_dup] = ACTIONS(13),
    [anon_sym_retain] = ACTIONS(13),
    [anon_sym_yes] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_no] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [anon_sym_username] = ACTIONS(13),
    [anon_sym_password] = ACTIONS(13),
    [anon_sym_will] = ACTIONS(13),
    [anon_sym_will_retain] = ACTIONS(13),
    [anon_sym_clean_session] = ACTIONS(13),
    [anon_sym_type] = ACTIONS(13),
    [anon_sym_threshold] = ACTIONS(13),
    [anon_sym_limit] = ACTIONS(13),
    [anon_sym_track] = ACTIONS(13),
    [anon_sym_by_src] = ACTIONS(13),
    [anon_sym_by_dst] = ACTIONS(13),
    [anon_sym_by_rule] = ACTIONS(13),
    [anon_sym_by_both] = ACTIONS(13),
    [anon_sym_count] = ACTIONS(13),
    [anon_sym_seconds] = ACTIONS(13),
    [anon_sym_src] = ACTIONS(13),
    [anon_sym_dst] = ACTIONS(13),
    [anon_sym_load] = ACTIONS(13),
    [anon_sym_state] = ACTIONS(13),
    [anon_sym_save] = ACTIONS(13),
    [anon_sym_memcap] = ACTIONS(13),
    [anon_sym_hashsize] = ACTIONS(13),
    [anon_sym_relative] = ACTIONS(13),
    [anon_sym_endian] = ACTIONS(13),
    [anon_sym_dce] = ACTIONS(13),
    [anon_sym_bitmask] = ACTIONS(13),
    [anon_sym_string] = ACTIONS(13),
    [anon_sym_offset] = ACTIONS(13),
    [anon_sym_depth] = ACTIONS(13),
    [anon_sym_distance] = ACTIONS(13),
    [anon_sym_within] = ACTIONS(13),
    [anon_sym_oper] = ACTIONS(13),
    [anon_sym_rvalue] = ACTIONS(13),
    [anon_sym_result] = ACTIONS(13),
    [anon_sym_server] = ACTIONS(13),
    [anon_sym_client] = ACTIONS(13),
    [anon_sym_either] = ACTIONS(13),
    [anon_sym_name] = ACTIONS(13),
    [anon_sym_ip_src] = ACTIONS(13),
    [anon_sym_ip_dst] = ACTIONS(13),
    [anon_sym_ip_pair] = ACTIONS(13),
    [anon_sym_expire] = ACTIONS(13),
  },
  [3] = {
    [sym_math_operator] = STATE(59),
    [sym_digit] = STATE(78),
    [sym_text] = STATE(78),
    [sym_string] = STATE(78),
    [sym_hexidecimal] = STATE(78),
    [sym_hexstring] = STATE(78),
    [sym_octal] = STATE(78),
    [sym_value] = STATE(102),
    [sym_constant] = STATE(78),
    [aux_sym_text_repeat1] = STATE(57),
    [sym_negation] = ACTIONS(11),
    [anon_sym_any] = ACTIONS(13),
    [sym_bitwise_and] = ACTIONS(15),
    [sym_bitwise_or] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_STAR] = ACTIONS(19),
    [anon_sym_SLASH] = ACTIONS(17),
    [anon_sym_LT_LT] = ACTIONS(17),
    [anon_sym_GT_GT] = ACTIONS(17),
    [anon_sym_EQ] = ACTIONS(17),
    [anon_sym_GT_EQ] = ACTIONS(17),
    [anon_sym_LT_EQ] = ACTIONS(17),
    [anon_sym_EQ_EQ] = ACTIONS(17),
    [anon_sym_BANG_DASH] = ACTIONS(17),
    [anon_sym_LT_GT] = ACTIONS(17),
    [anon_sym_GT] = ACTIONS(17),
    [anon_sym_LT] = ACTIONS(17),
    [aux_sym_digit_token1] = ACTIONS(21),
    [aux_sym_text_token1] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [sym_decimal] = ACTIONS(15),
    [anon_sym_x] = ACTIONS(27),
    [aux_sym_hexstring_token1] = ACTIONS(29),
    [anon_sym_o] = ACTIONS(31),
    [anon_sym_rr] = ACTIONS(13),
    [anon_sym_eol] = ACTIONS(13),
    [anon_sym_nop] = ACTIONS(13),
    [anon_sym_ts] = ACTIONS(13),
    [anon_sym_sec] = ACTIONS(13),
    [anon_sym_esec] = ACTIONS(13),
    [anon_sym_lsrr] = ACTIONS(13),
    [anon_sym_ssrr] = ACTIONS(13),
    [anon_sym_satid] = ACTIONS(13),
    [anon_sym_only] = ACTIONS(13),
    [anon_sym_set] = ACTIONS(13),
    [anon_sym_isset] = ACTIONS(13),
    [anon_sym_toggle] = ACTIONS(13),
    [anon_sym_unset] = ACTIONS(13),
    [anon_sym_isnotset] = ACTIONS(13),
    [anon_sym_noalert] = ACTIONS(13),
    [anon_sym_to_client] = ACTIONS(13),
    [anon_sym_to_server] = ACTIONS(13),
    [anon_sym_from_client] = ACTIONS(13),
    [anon_sym_from_server] = ACTIONS(13),
    [anon_sym_established] = ACTIONS(13),
    [anon_sym_not_established] = ACTIONS(13),
    [anon_sym_stateless] = ACTIONS(13),
    [anon_sym_only_stream] = ACTIONS(13),
    [anon_sym_no_stream] = ACTIONS(13),
    [anon_sym_only_frag] = ACTIONS(13),
    [anon_sym_no_frag] = ACTIONS(13),
    [anon_sym_request_SLASHto_server] = ACTIONS(13),
    [anon_sym_response_SLASHto_client] = ACTIONS(13),
    [anon_sym_both] = ACTIONS(13),
    [anon_sym_file] = ACTIONS(13),
    [anon_sym_tx] = ACTIONS(13),
    [anon_sym_ssn_SLASHflow] = ACTIONS(13),
    [anon_sym_sslv2] = ACTIONS(13),
    [anon_sym_sslv3] = ACTIONS(13),
    [anon_sym_tls1_DOT0] = ACTIONS(13),
    [anon_sym_tls1_DOT1] = ACTIONS(13),
    [anon_sym_tls1_DOT2] = ACTIONS(13),
    [anon_sym_tls1_DOT3] = ACTIONS(13),
    [anon_sym_client_hello] = ACTIONS(13),
    [anon_sym_server_hello] = ACTIONS(13),
    [anon_sym_client_kyx] = ACTIONS(13),
    [anon_sym_server_keyx] = ACTIONS(13),
    [anon_sym_unkown] = ACTIONS(13),
    [anon_sym_2_compat] = ACTIONS(13),
    [anon_sym_confirm] = ACTIONS(13),
    [anon_sym_read] = ACTIONS(13),
    [anon_sym_write] = ACTIONS(13),
    [anon_sym_select] = ACTIONS(13),
    [anon_sym_operate] = ACTIONS(13),
    [anon_sym_direct_operate] = ACTIONS(13),
    [anon_sym_direct_operate_nr] = ACTIONS(13),
    [anon_sym_immed_freeze] = ACTIONS(13),
    [anon_sym_immed_freeze_nr] = ACTIONS(13),
    [anon_sym_freeze_clear] = ACTIONS(13),
    [anon_sym_freeze_clear_nr] = ACTIONS(13),
    [anon_sym_freeze_at_time] = ACTIONS(13),
    [anon_sym_freeze_at_time_nr] = ACTIONS(13),
    [anon_sym_cold_restart] = ACTIONS(13),
    [anon_sym_warm_restart] = ACTIONS(13),
    [anon_sym_initialize_data] = ACTIONS(13),
    [anon_sym_initialize_appl] = ACTIONS(13),
    [anon_sym_start_appl] = ACTIONS(13),
    [anon_sym_stop_appl] = ACTIONS(13),
    [anon_sym_save_config] = ACTIONS(13),
    [anon_sym_enable_unsolicited] = ACTIONS(13),
    [anon_sym_disable_unsolicited] = ACTIONS(13),
    [anon_sym_assign_class] = ACTIONS(13),
    [anon_sym_delay_measure] = ACTIONS(13),
    [anon_sym_record_current_time] = ACTIONS(13),
    [anon_sym_open_file] = ACTIONS(13),
    [anon_sym_close_file] = ACTIONS(13),
    [anon_sym_delete_file] = ACTIONS(13),
    [anon_sym_get_file_info] = ACTIONS(13),
    [anon_sym_authenticate_file] = ACTIONS(13),
    [anon_sym_abort_file] = ACTIONS(13),
    [anon_sym_activate_config] = ACTIONS(13),
    [anon_sym_authenticate_req] = ACTIONS(13),
    [anon_sym_authenticate_err] = ACTIONS(13),
    [anon_sym_response] = ACTIONS(13),
    [anon_sym_unsolicited_response] = ACTIONS(13),
    [anon_sym_authenticate_respo] = ACTIONS(13),
    [anon_sym_all_stations] = ACTIONS(13),
    [anon_sym_class_1_events] = ACTIONS(13),
    [anon_sym_class_2_events] = ACTIONS(13),
    [anon_sym_class_3_events] = ACTIONS(13),
    [anon_sym_need_time] = ACTIONS(13),
    [anon_sym_local_control] = ACTIONS(13),
    [anon_sym_device_trouble] = ACTIONS(13),
    [anon_sym_device_restart] = ACTIONS(13),
    [anon_sym_no_func_code_support] = ACTIONS(13),
    [anon_sym_object_unknown] = ACTIONS(13),
    [anon_sym_parameter_error] = ACTIONS(13),
    [anon_sym_event_buffer_overflow] = ACTIONS(13),
    [anon_sym_alread_executing] = ACTIONS(13),
    [anon_sym_config_corrupt] = ACTIONS(13),
    [anon_sym_reserved_2] = ACTIONS(13),
    [anon_sym_reserved_1] = ACTIONS(13),
    [anon_sym_retr] = ACTIONS(13),
    [anon_sym_stor] = ACTIONS(13),
    [anon_sym_INVITE] = ACTIONS(13),
    [anon_sym_BYTE] = ACTIONS(13),
    [anon_sym_REGISTER] = ACTIONS(13),
    [anon_sym_CANCEL] = ACTIONS(13),
    [anon_sym_ACK] = ACTIONS(13),
    [anon_sym_OPTIONS] = ACTIONS(13),
    [anon_sym_CONNECT] = ACTIONS(13),
    [anon_sym_CONNACK] = ACTIONS(13),
    [anon_sym_PUBLISH] = ACTIONS(13),
    [anon_sym_PUBACK] = ACTIONS(13),
    [anon_sym_PUBREC] = ACTIONS(13),
    [anon_sym_PUBREL] = ACTIONS(13),
    [anon_sym_PUBCOMP] = ACTIONS(13),
    [anon_sym_SUBSCRIBE] = ACTIONS(13),
    [anon_sym_SUBACK] = ACTIONS(13),
    [anon_sym_PINGREQ] = ACTIONS(13),
    [anon_sym_PINGRESP] = ACTIONS(13),
    [anon_sym_DISCONNECT] = ACTIONS(13),
    [anon_sym_AUTH] = ACTIONS(13),
    [anon_sym_UNASSIGNED] = ACTIONS(13),
    [anon_sym_dup] = ACTIONS(13),
    [anon_sym_retain] = ACTIONS(13),
    [anon_sym_yes] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_no] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [anon_sym_username] = ACTIONS(13),
    [anon_sym_password] = ACTIONS(13),
    [anon_sym_will] = ACTIONS(13),
    [anon_sym_will_retain] = ACTIONS(13),
    [anon_sym_clean_session] = ACTIONS(13),
    [anon_sym_type] = ACTIONS(13),
    [anon_sym_threshold] = ACTIONS(13),
    [anon_sym_limit] = ACTIONS(13),
    [anon_sym_track] = ACTIONS(13),
    [anon_sym_by_src] = ACTIONS(13),
    [anon_sym_by_dst] = ACTIONS(13),
    [anon_sym_by_rule] = ACTIONS(13),
    [anon_sym_by_both] = ACTIONS(13),
    [anon_sym_count] = ACTIONS(13),
    [anon_sym_seconds] = ACTIONS(13),
    [anon_sym_src] = ACTIONS(13),
    [anon_sym_dst] = ACTIONS(13),
    [anon_sym_load] = ACTIONS(13),
    [anon_sym_state] = ACTIONS(13),
    [anon_sym_save] = ACTIONS(13),
    [anon_sym_memcap] = ACTIONS(13),
    [anon_sym_hashsize] = ACTIONS(13),
    [anon_sym_relative] = ACTIONS(13),
    [anon_sym_endian] = ACTIONS(13),
    [anon_sym_dce] = ACTIONS(13),
    [anon_sym_bitmask] = ACTIONS(13),
    [anon_sym_string] = ACTIONS(13),
    [anon_sym_offset] = ACTIONS(13),
    [anon_sym_depth] = ACTIONS(13),
    [anon_sym_distance] = ACTIONS(13),
    [anon_sym_within] = ACTIONS(13),
    [anon_sym_oper] = ACTIONS(13),
    [anon_sym_rvalue] = ACTIONS(13),
    [anon_sym_result] = ACTIONS(13),
    [anon_sym_server] = ACTIONS(13),
    [anon_sym_client] = ACTIONS(13),
    [anon_sym_either] = ACTIONS(13),
    [anon_sym_name] = ACTIONS(13),
    [anon_sym_ip_src] = ACTIONS(13),
    [anon_sym_ip_dst] = ACTIONS(13),
    [anon_sym_ip_pair] = ACTIONS(13),
    [anon_sym_expire] = ACTIONS(13),
  },
  [4] = {
    [sym_math_operator] = STATE(59),
    [sym_digit] = STATE(78),
    [sym_text] = STATE(78),
    [sym_string] = STATE(78),
    [sym_hexidecimal] = STATE(78),
    [sym_hexstring] = STATE(78),
    [sym_octal] = STATE(78),
    [sym_value] = STATE(99),
    [sym_constant] = STATE(78),
    [aux_sym_text_repeat1] = STATE(57),
    [sym_negation] = ACTIONS(11),
    [anon_sym_any] = ACTIONS(13),
    [sym_bitwise_and] = ACTIONS(15),
    [sym_bitwise_or] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_STAR] = ACTIONS(19),
    [anon_sym_SLASH] = ACTIONS(17),
    [anon_sym_LT_LT] = ACTIONS(17),
    [anon_sym_GT_GT] = ACTIONS(17),
    [anon_sym_EQ] = ACTIONS(17),
    [anon_sym_GT_EQ] = ACTIONS(17),
    [anon_sym_LT_EQ] = ACTIONS(17),
    [anon_sym_EQ_EQ] = ACTIONS(17),
    [anon_sym_BANG_DASH] = ACTIONS(17),
    [anon_sym_LT_GT] = ACTIONS(17),
    [anon_sym_GT] = ACTIONS(17),
    [anon_sym_LT] = ACTIONS(17),
    [aux_sym_digit_token1] = ACTIONS(21),
    [aux_sym_text_token1] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [sym_decimal] = ACTIONS(15),
    [anon_sym_x] = ACTIONS(27),
    [aux_sym_hexstring_token1] = ACTIONS(29),
    [anon_sym_o] = ACTIONS(31),
    [anon_sym_rr] = ACTIONS(13),
    [anon_sym_eol] = ACTIONS(13),
    [anon_sym_nop] = ACTIONS(13),
    [anon_sym_ts] = ACTIONS(13),
    [anon_sym_sec] = ACTIONS(13),
    [anon_sym_esec] = ACTIONS(13),
    [anon_sym_lsrr] = ACTIONS(13),
    [anon_sym_ssrr] = ACTIONS(13),
    [anon_sym_satid] = ACTIONS(13),
    [anon_sym_only] = ACTIONS(13),
    [anon_sym_set] = ACTIONS(13),
    [anon_sym_isset] = ACTIONS(13),
    [anon_sym_toggle] = ACTIONS(13),
    [anon_sym_unset] = ACTIONS(13),
    [anon_sym_isnotset] = ACTIONS(13),
    [anon_sym_noalert] = ACTIONS(13),
    [anon_sym_to_client] = ACTIONS(13),
    [anon_sym_to_server] = ACTIONS(13),
    [anon_sym_from_client] = ACTIONS(13),
    [anon_sym_from_server] = ACTIONS(13),
    [anon_sym_established] = ACTIONS(13),
    [anon_sym_not_established] = ACTIONS(13),
    [anon_sym_stateless] = ACTIONS(13),
    [anon_sym_only_stream] = ACTIONS(13),
    [anon_sym_no_stream] = ACTIONS(13),
    [anon_sym_only_frag] = ACTIONS(13),
    [anon_sym_no_frag] = ACTIONS(13),
    [anon_sym_request_SLASHto_server] = ACTIONS(13),
    [anon_sym_response_SLASHto_client] = ACTIONS(13),
    [anon_sym_both] = ACTIONS(13),
    [anon_sym_file] = ACTIONS(13),
    [anon_sym_tx] = ACTIONS(13),
    [anon_sym_ssn_SLASHflow] = ACTIONS(13),
    [anon_sym_sslv2] = ACTIONS(13),
    [anon_sym_sslv3] = ACTIONS(13),
    [anon_sym_tls1_DOT0] = ACTIONS(13),
    [anon_sym_tls1_DOT1] = ACTIONS(13),
    [anon_sym_tls1_DOT2] = ACTIONS(13),
    [anon_sym_tls1_DOT3] = ACTIONS(13),
    [anon_sym_client_hello] = ACTIONS(13),
    [anon_sym_server_hello] = ACTIONS(13),
    [anon_sym_client_kyx] = ACTIONS(13),
    [anon_sym_server_keyx] = ACTIONS(13),
    [anon_sym_unkown] = ACTIONS(13),
    [anon_sym_2_compat] = ACTIONS(13),
    [anon_sym_confirm] = ACTIONS(13),
    [anon_sym_read] = ACTIONS(13),
    [anon_sym_write] = ACTIONS(13),
    [anon_sym_select] = ACTIONS(13),
    [anon_sym_operate] = ACTIONS(13),
    [anon_sym_direct_operate] = ACTIONS(13),
    [anon_sym_direct_operate_nr] = ACTIONS(13),
    [anon_sym_immed_freeze] = ACTIONS(13),
    [anon_sym_immed_freeze_nr] = ACTIONS(13),
    [anon_sym_freeze_clear] = ACTIONS(13),
    [anon_sym_freeze_clear_nr] = ACTIONS(13),
    [anon_sym_freeze_at_time] = ACTIONS(13),
    [anon_sym_freeze_at_time_nr] = ACTIONS(13),
    [anon_sym_cold_restart] = ACTIONS(13),
    [anon_sym_warm_restart] = ACTIONS(13),
    [anon_sym_initialize_data] = ACTIONS(13),
    [anon_sym_initialize_appl] = ACTIONS(13),
    [anon_sym_start_appl] = ACTIONS(13),
    [anon_sym_stop_appl] = ACTIONS(13),
    [anon_sym_save_config] = ACTIONS(13),
    [anon_sym_enable_unsolicited] = ACTIONS(13),
    [anon_sym_disable_unsolicited] = ACTIONS(13),
    [anon_sym_assign_class] = ACTIONS(13),
    [anon_sym_delay_measure] = ACTIONS(13),
    [anon_sym_record_current_time] = ACTIONS(13),
    [anon_sym_open_file] = ACTIONS(13),
    [anon_sym_close_file] = ACTIONS(13),
    [anon_sym_delete_file] = ACTIONS(13),
    [anon_sym_get_file_info] = ACTIONS(13),
    [anon_sym_authenticate_file] = ACTIONS(13),
    [anon_sym_abort_file] = ACTIONS(13),
    [anon_sym_activate_config] = ACTIONS(13),
    [anon_sym_authenticate_req] = ACTIONS(13),
    [anon_sym_authenticate_err] = ACTIONS(13),
    [anon_sym_response] = ACTIONS(13),
    [anon_sym_unsolicited_response] = ACTIONS(13),
    [anon_sym_authenticate_respo] = ACTIONS(13),
    [anon_sym_all_stations] = ACTIONS(13),
    [anon_sym_class_1_events] = ACTIONS(13),
    [anon_sym_class_2_events] = ACTIONS(13),
    [anon_sym_class_3_events] = ACTIONS(13),
    [anon_sym_need_time] = ACTIONS(13),
    [anon_sym_local_control] = ACTIONS(13),
    [anon_sym_device_trouble] = ACTIONS(13),
    [anon_sym_device_restart] = ACTIONS(13),
    [anon_sym_no_func_code_support] = ACTIONS(13),
    [anon_sym_object_unknown] = ACTIONS(13),
    [anon_sym_parameter_error] = ACTIONS(13),
    [anon_sym_event_buffer_overflow] = ACTIONS(13),
    [anon_sym_alread_executing] = ACTIONS(13),
    [anon_sym_config_corrupt] = ACTIONS(13),
    [anon_sym_reserved_2] = ACTIONS(13),
    [anon_sym_reserved_1] = ACTIONS(13),
    [anon_sym_retr] = ACTIONS(13),
    [anon_sym_stor] = ACTIONS(13),
    [anon_sym_INVITE] = ACTIONS(13),
    [anon_sym_BYTE] = ACTIONS(13),
    [anon_sym_REGISTER] = ACTIONS(13),
    [anon_sym_CANCEL] = ACTIONS(13),
    [anon_sym_ACK] = ACTIONS(13),
    [anon_sym_OPTIONS] = ACTIONS(13),
    [anon_sym_CONNECT] = ACTIONS(13),
    [anon_sym_CONNACK] = ACTIONS(13),
    [anon_sym_PUBLISH] = ACTIONS(13),
    [anon_sym_PUBACK] = ACTIONS(13),
    [anon_sym_PUBREC] = ACTIONS(13),
    [anon_sym_PUBREL] = ACTIONS(13),
    [anon_sym_PUBCOMP] = ACTIONS(13),
    [anon_sym_SUBSCRIBE] = ACTIONS(13),
    [anon_sym_SUBACK] = ACTIONS(13),
    [anon_sym_PINGREQ] = ACTIONS(13),
    [anon_sym_PINGRESP] = ACTIONS(13),
    [anon_sym_DISCONNECT] = ACTIONS(13),
    [anon_sym_AUTH] = ACTIONS(13),
    [anon_sym_UNASSIGNED] = ACTIONS(13),
    [anon_sym_dup] = ACTIONS(13),
    [anon_sym_retain] = ACTIONS(13),
    [anon_sym_yes] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_no] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [anon_sym_username] = ACTIONS(13),
    [anon_sym_password] = ACTIONS(13),
    [anon_sym_will] = ACTIONS(13),
    [anon_sym_will_retain] = ACTIONS(13),
    [anon_sym_clean_session] = ACTIONS(13),
    [anon_sym_type] = ACTIONS(13),
    [anon_sym_threshold] = ACTIONS(13),
    [anon_sym_limit] = ACTIONS(13),
    [anon_sym_track] = ACTIONS(13),
    [anon_sym_by_src] = ACTIONS(13),
    [anon_sym_by_dst] = ACTIONS(13),
    [anon_sym_by_rule] = ACTIONS(13),
    [anon_sym_by_both] = ACTIONS(13),
    [anon_sym_count] = ACTIONS(13),
    [anon_sym_seconds] = ACTIONS(13),
    [anon_sym_src] = ACTIONS(13),
    [anon_sym_dst] = ACTIONS(13),
    [anon_sym_load] = ACTIONS(13),
    [anon_sym_state] = ACTIONS(13),
    [anon_sym_save] = ACTIONS(13),
    [anon_sym_memcap] = ACTIONS(13),
    [anon_sym_hashsize] = ACTIONS(13),
    [anon_sym_relative] = ACTIONS(13),
    [anon_sym_endian] = ACTIONS(13),
    [anon_sym_dce] = ACTIONS(13),
    [anon_sym_bitmask] = ACTIONS(13),
    [anon_sym_string] = ACTIONS(13),
    [anon_sym_offset] = ACTIONS(13),
    [anon_sym_depth] = ACTIONS(13),
    [anon_sym_distance] = ACTIONS(13),
    [anon_sym_within] = ACTIONS(13),
    [anon_sym_oper] = ACTIONS(13),
    [anon_sym_rvalue] = ACTIONS(13),
    [anon_sym_result] = ACTIONS(13),
    [anon_sym_server] = ACTIONS(13),
    [anon_sym_client] = ACTIONS(13),
    [anon_sym_either] = ACTIONS(13),
    [anon_sym_name] = ACTIONS(13),
    [anon_sym_ip_src] = ACTIONS(13),
    [anon_sym_ip_dst] = ACTIONS(13),
    [anon_sym_ip_pair] = ACTIONS(13),
    [anon_sym_expire] = ACTIONS(13),
  },
  [5] = {
    [sym_math_operator] = STATE(60),
    [sym_digit] = STATE(62),
    [sym_text] = STATE(62),
    [sym_string] = STATE(62),
    [sym_hexidecimal] = STATE(62),
    [sym_hexstring] = STATE(62),
    [sym_octal] = STATE(62),
    [sym_constant] = STATE(62),
    [aux_sym_text_repeat1] = STATE(57),
    [anon_sym_any] = ACTIONS(13),
    [sym_bitwise_and] = ACTIONS(33),
    [sym_bitwise_or] = ACTIONS(33),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_STAR] = ACTIONS(19),
    [anon_sym_SLASH] = ACTIONS(17),
    [anon_sym_LT_LT] = ACTIONS(17),
    [anon_sym_GT_GT] = ACTIONS(17),
    [anon_sym_EQ] = ACTIONS(17),
    [anon_sym_GT_EQ] = ACTIONS(17),
    [anon_sym_LT_EQ] = ACTIONS(17),
    [anon_sym_EQ_EQ] = ACTIONS(17),
    [anon_sym_BANG_DASH] = ACTIONS(17),
    [anon_sym_LT_GT] = ACTIONS(17),
    [anon_sym_GT] = ACTIONS(17),
    [anon_sym_LT] = ACTIONS(17),
    [aux_sym_digit_token1] = ACTIONS(21),
    [aux_sym_text_token1] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [sym_decimal] = ACTIONS(33),
    [anon_sym_x] = ACTIONS(27),
    [aux_sym_hexstring_token1] = ACTIONS(29),
    [anon_sym_o] = ACTIONS(31),
    [anon_sym_rr] = ACTIONS(13),
    [anon_sym_eol] = ACTIONS(13),
    [anon_sym_nop] = ACTIONS(13),
    [anon_sym_ts] = ACTIONS(13),
    [anon_sym_sec] = ACTIONS(13),
    [anon_sym_esec] = ACTIONS(13),
    [anon_sym_lsrr] = ACTIONS(13),
    [anon_sym_ssrr] = ACTIONS(13),
    [anon_sym_satid] = ACTIONS(13),
    [anon_sym_only] = ACTIONS(13),
    [anon_sym_set] = ACTIONS(13),
    [anon_sym_isset] = ACTIONS(13),
    [anon_sym_toggle] = ACTIONS(13),
    [anon_sym_unset] = ACTIONS(13),
    [anon_sym_isnotset] = ACTIONS(13),
    [anon_sym_noalert] = ACTIONS(13),
    [anon_sym_to_client] = ACTIONS(13),
    [anon_sym_to_server] = ACTIONS(13),
    [anon_sym_from_client] = ACTIONS(13),
    [anon_sym_from_server] = ACTIONS(13),
    [anon_sym_established] = ACTIONS(13),
    [anon_sym_not_established] = ACTIONS(13),
    [anon_sym_stateless] = ACTIONS(13),
    [anon_sym_only_stream] = ACTIONS(13),
    [anon_sym_no_stream] = ACTIONS(13),
    [anon_sym_only_frag] = ACTIONS(13),
    [anon_sym_no_frag] = ACTIONS(13),
    [anon_sym_request_SLASHto_server] = ACTIONS(13),
    [anon_sym_response_SLASHto_client] = ACTIONS(13),
    [anon_sym_both] = ACTIONS(13),
    [anon_sym_file] = ACTIONS(13),
    [anon_sym_tx] = ACTIONS(13),
    [anon_sym_ssn_SLASHflow] = ACTIONS(13),
    [anon_sym_sslv2] = ACTIONS(13),
    [anon_sym_sslv3] = ACTIONS(13),
    [anon_sym_tls1_DOT0] = ACTIONS(13),
    [anon_sym_tls1_DOT1] = ACTIONS(13),
    [anon_sym_tls1_DOT2] = ACTIONS(13),
    [anon_sym_tls1_DOT3] = ACTIONS(13),
    [anon_sym_client_hello] = ACTIONS(13),
    [anon_sym_server_hello] = ACTIONS(13),
    [anon_sym_client_kyx] = ACTIONS(13),
    [anon_sym_server_keyx] = ACTIONS(13),
    [anon_sym_unkown] = ACTIONS(13),
    [anon_sym_2_compat] = ACTIONS(13),
    [anon_sym_confirm] = ACTIONS(13),
    [anon_sym_read] = ACTIONS(13),
    [anon_sym_write] = ACTIONS(13),
    [anon_sym_select] = ACTIONS(13),
    [anon_sym_operate] = ACTIONS(13),
    [anon_sym_direct_operate] = ACTIONS(13),
    [anon_sym_direct_operate_nr] = ACTIONS(13),
    [anon_sym_immed_freeze] = ACTIONS(13),
    [anon_sym_immed_freeze_nr] = ACTIONS(13),
    [anon_sym_freeze_clear] = ACTIONS(13),
    [anon_sym_freeze_clear_nr] = ACTIONS(13),
    [anon_sym_freeze_at_time] = ACTIONS(13),
    [anon_sym_freeze_at_time_nr] = ACTIONS(13),
    [anon_sym_cold_restart] = ACTIONS(13),
    [anon_sym_warm_restart] = ACTIONS(13),
    [anon_sym_initialize_data] = ACTIONS(13),
    [anon_sym_initialize_appl] = ACTIONS(13),
    [anon_sym_start_appl] = ACTIONS(13),
    [anon_sym_stop_appl] = ACTIONS(13),
    [anon_sym_save_config] = ACTIONS(13),
    [anon_sym_enable_unsolicited] = ACTIONS(13),
    [anon_sym_disable_unsolicited] = ACTIONS(13),
    [anon_sym_assign_class] = ACTIONS(13),
    [anon_sym_delay_measure] = ACTIONS(13),
    [anon_sym_record_current_time] = ACTIONS(13),
    [anon_sym_open_file] = ACTIONS(13),
    [anon_sym_close_file] = ACTIONS(13),
    [anon_sym_delete_file] = ACTIONS(13),
    [anon_sym_get_file_info] = ACTIONS(13),
    [anon_sym_authenticate_file] = ACTIONS(13),
    [anon_sym_abort_file] = ACTIONS(13),
    [anon_sym_activate_config] = ACTIONS(13),
    [anon_sym_authenticate_req] = ACTIONS(13),
    [anon_sym_authenticate_err] = ACTIONS(13),
    [anon_sym_response] = ACTIONS(13),
    [anon_sym_unsolicited_response] = ACTIONS(13),
    [anon_sym_authenticate_respo] = ACTIONS(13),
    [anon_sym_all_stations] = ACTIONS(13),
    [anon_sym_class_1_events] = ACTIONS(13),
    [anon_sym_class_2_events] = ACTIONS(13),
    [anon_sym_class_3_events] = ACTIONS(13),
    [anon_sym_need_time] = ACTIONS(13),
    [anon_sym_local_control] = ACTIONS(13),
    [anon_sym_device_trouble] = ACTIONS(13),
    [anon_sym_device_restart] = ACTIONS(13),
    [anon_sym_no_func_code_support] = ACTIONS(13),
    [anon_sym_object_unknown] = ACTIONS(13),
    [anon_sym_parameter_error] = ACTIONS(13),
    [anon_sym_event_buffer_overflow] = ACTIONS(13),
    [anon_sym_alread_executing] = ACTIONS(13),
    [anon_sym_config_corrupt] = ACTIONS(13),
    [anon_sym_reserved_2] = ACTIONS(13),
    [anon_sym_reserved_1] = ACTIONS(13),
    [anon_sym_retr] = ACTIONS(13),
    [anon_sym_stor] = ACTIONS(13),
    [anon_sym_INVITE] = ACTIONS(13),
    [anon_sym_BYTE] = ACTIONS(13),
    [anon_sym_REGISTER] = ACTIONS(13),
    [anon_sym_CANCEL] = ACTIONS(13),
    [anon_sym_ACK] = ACTIONS(13),
    [anon_sym_OPTIONS] = ACTIONS(13),
    [anon_sym_CONNECT] = ACTIONS(13),
    [anon_sym_CONNACK] = ACTIONS(13),
    [anon_sym_PUBLISH] = ACTIONS(13),
    [anon_sym_PUBACK] = ACTIONS(13),
    [anon_sym_PUBREC] = ACTIONS(13),
    [anon_sym_PUBREL] = ACTIONS(13),
    [anon_sym_PUBCOMP] = ACTIONS(13),
    [anon_sym_SUBSCRIBE] = ACTIONS(13),
    [anon_sym_SUBACK] = ACTIONS(13),
    [anon_sym_PINGREQ] = ACTIONS(13),
    [anon_sym_PINGRESP] = ACTIONS(13),
    [anon_sym_DISCONNECT] = ACTIONS(13),
    [anon_sym_AUTH] = ACTIONS(13),
    [anon_sym_UNASSIGNED] = ACTIONS(13),
    [anon_sym_dup] = ACTIONS(13),
    [anon_sym_retain] = ACTIONS(13),
    [anon_sym_yes] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_no] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [anon_sym_username] = ACTIONS(13),
    [anon_sym_password] = ACTIONS(13),
    [anon_sym_will] = ACTIONS(13),
    [anon_sym_will_retain] = ACTIONS(13),
    [anon_sym_clean_session] = ACTIONS(13),
    [anon_sym_type] = ACTIONS(13),
    [anon_sym_threshold] = ACTIONS(13),
    [anon_sym_limit] = ACTIONS(13),
    [anon_sym_track] = ACTIONS(13),
    [anon_sym_by_src] = ACTIONS(13),
    [anon_sym_by_dst] = ACTIONS(13),
    [anon_sym_by_rule] = ACTIONS(13),
    [anon_sym_by_both] = ACTIONS(13),
    [anon_sym_count] = ACTIONS(13),
    [anon_sym_seconds] = ACTIONS(13),
    [anon_sym_src] = ACTIONS(13),
    [anon_sym_dst] = ACTIONS(13),
    [anon_sym_load] = ACTIONS(13),
    [anon_sym_state] = ACTIONS(13),
    [anon_sym_save] = ACTIONS(13),
    [anon_sym_memcap] = ACTIONS(13),
    [anon_sym_hashsize] = ACTIONS(13),
    [anon_sym_relative] = ACTIONS(13),
    [anon_sym_endian] = ACTIONS(13),
    [anon_sym_dce] = ACTIONS(13),
    [anon_sym_bitmask] = ACTIONS(13),
    [anon_sym_string] = ACTIONS(13),
    [anon_sym_offset] = ACTIONS(13),
    [anon_sym_depth] = ACTIONS(13),
    [anon_sym_distance] = ACTIONS(13),
    [anon_sym_within] = ACTIONS(13),
    [anon_sym_oper] = ACTIONS(13),
    [anon_sym_rvalue] = ACTIONS(13),
    [anon_sym_result] = ACTIONS(13),
    [anon_sym_server] = ACTIONS(13),
    [anon_sym_client] = ACTIONS(13),
    [anon_sym_either] = ACTIONS(13),
    [anon_sym_name] = ACTIONS(13),
    [anon_sym_ip_src] = ACTIONS(13),
    [anon_sym_ip_dst] = ACTIONS(13),
    [anon_sym_ip_pair] = ACTIONS(13),
    [anon_sym_expire] = ACTIONS(13),
  },
  [6] = {
    [sym_negation] = ACTIONS(35),
    [anon_sym_any] = ACTIONS(35),
    [sym_bitwise_and] = ACTIONS(35),
    [sym_bitwise_or] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(35),
    [anon_sym_DASH] = ACTIONS(35),
    [anon_sym_STAR] = ACTIONS(35),
    [anon_sym_SLASH] = ACTIONS(35),
    [anon_sym_LT_LT] = ACTIONS(35),
    [anon_sym_GT_GT] = ACTIONS(35),
    [anon_sym_EQ] = ACTIONS(35),
    [anon_sym_GT_EQ] = ACTIONS(35),
    [anon_sym_LT_EQ] = ACTIONS(35),
    [anon_sym_EQ_EQ] = ACTIONS(35),
    [anon_sym_BANG_DASH] = ACTIONS(35),
    [anon_sym_LT_GT] = ACTIONS(35),
    [anon_sym_GT] = ACTIONS(35),
    [anon_sym_LT] = ACTIONS(35),
    [aux_sym_digit_token1] = ACTIONS(35),
    [aux_sym_text_token1] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [sym_decimal] = ACTIONS(35),
    [anon_sym_x] = ACTIONS(35),
    [aux_sym_hexstring_token1] = ACTIONS(35),
    [anon_sym_o] = ACTIONS(35),
    [anon_sym_rr] = ACTIONS(35),
    [anon_sym_eol] = ACTIONS(35),
    [anon_sym_nop] = ACTIONS(35),
    [anon_sym_ts] = ACTIONS(35),
    [anon_sym_sec] = ACTIONS(35),
    [anon_sym_esec] = ACTIONS(35),
    [anon_sym_lsrr] = ACTIONS(35),
    [anon_sym_ssrr] = ACTIONS(35),
    [anon_sym_satid] = ACTIONS(35),
    [anon_sym_only] = ACTIONS(35),
    [anon_sym_set] = ACTIONS(35),
    [anon_sym_isset] = ACTIONS(35),
    [anon_sym_toggle] = ACTIONS(35),
    [anon_sym_unset] = ACTIONS(35),
    [anon_sym_isnotset] = ACTIONS(35),
    [anon_sym_noalert] = ACTIONS(35),
    [anon_sym_to_client] = ACTIONS(35),
    [anon_sym_to_server] = ACTIONS(35),
    [anon_sym_from_client] = ACTIONS(35),
    [anon_sym_from_server] = ACTIONS(35),
    [anon_sym_established] = ACTIONS(35),
    [anon_sym_not_established] = ACTIONS(35),
    [anon_sym_stateless] = ACTIONS(35),
    [anon_sym_only_stream] = ACTIONS(35),
    [anon_sym_no_stream] = ACTIONS(35),
    [anon_sym_only_frag] = ACTIONS(35),
    [anon_sym_no_frag] = ACTIONS(35),
    [anon_sym_request_SLASHto_server] = ACTIONS(35),
    [anon_sym_response_SLASHto_client] = ACTIONS(35),
    [anon_sym_both] = ACTIONS(35),
    [anon_sym_file] = ACTIONS(35),
    [anon_sym_tx] = ACTIONS(35),
    [anon_sym_ssn_SLASHflow] = ACTIONS(35),
    [anon_sym_sslv2] = ACTIONS(35),
    [anon_sym_sslv3] = ACTIONS(35),
    [anon_sym_tls1_DOT0] = ACTIONS(35),
    [anon_sym_tls1_DOT1] = ACTIONS(35),
    [anon_sym_tls1_DOT2] = ACTIONS(35),
    [anon_sym_tls1_DOT3] = ACTIONS(35),
    [anon_sym_client_hello] = ACTIONS(35),
    [anon_sym_server_hello] = ACTIONS(35),
    [anon_sym_client_kyx] = ACTIONS(35),
    [anon_sym_server_keyx] = ACTIONS(35),
    [anon_sym_unkown] = ACTIONS(35),
    [anon_sym_2_compat] = ACTIONS(35),
    [anon_sym_confirm] = ACTIONS(35),
    [anon_sym_read] = ACTIONS(35),
    [anon_sym_write] = ACTIONS(35),
    [anon_sym_select] = ACTIONS(35),
    [anon_sym_operate] = ACTIONS(35),
    [anon_sym_direct_operate] = ACTIONS(35),
    [anon_sym_direct_operate_nr] = ACTIONS(35),
    [anon_sym_immed_freeze] = ACTIONS(35),
    [anon_sym_immed_freeze_nr] = ACTIONS(35),
    [anon_sym_freeze_clear] = ACTIONS(35),
    [anon_sym_freeze_clear_nr] = ACTIONS(35),
    [anon_sym_freeze_at_time] = ACTIONS(35),
    [anon_sym_freeze_at_time_nr] = ACTIONS(35),
    [anon_sym_cold_restart] = ACTIONS(35),
    [anon_sym_warm_restart] = ACTIONS(35),
    [anon_sym_initialize_data] = ACTIONS(35),
    [anon_sym_initialize_appl] = ACTIONS(35),
    [anon_sym_start_appl] = ACTIONS(35),
    [anon_sym_stop_appl] = ACTIONS(35),
    [anon_sym_save_config] = ACTIONS(35),
    [anon_sym_enable_unsolicited] = ACTIONS(35),
    [anon_sym_disable_unsolicited] = ACTIONS(35),
    [anon_sym_assign_class] = ACTIONS(35),
    [anon_sym_delay_measure] = ACTIONS(35),
    [anon_sym_record_current_time] = ACTIONS(35),
    [anon_sym_open_file] = ACTIONS(35),
    [anon_sym_close_file] = ACTIONS(35),
    [anon_sym_delete_file] = ACTIONS(35),
    [anon_sym_get_file_info] = ACTIONS(35),
    [anon_sym_authenticate_file] = ACTIONS(35),
    [anon_sym_abort_file] = ACTIONS(35),
    [anon_sym_activate_config] = ACTIONS(35),
    [anon_sym_authenticate_req] = ACTIONS(35),
    [anon_sym_authenticate_err] = ACTIONS(35),
    [anon_sym_response] = ACTIONS(35),
    [anon_sym_unsolicited_response] = ACTIONS(35),
    [anon_sym_authenticate_respo] = ACTIONS(35),
    [anon_sym_all_stations] = ACTIONS(35),
    [anon_sym_class_1_events] = ACTIONS(35),
    [anon_sym_class_2_events] = ACTIONS(35),
    [anon_sym_class_3_events] = ACTIONS(35),
    [anon_sym_need_time] = ACTIONS(35),
    [anon_sym_local_control] = ACTIONS(35),
    [anon_sym_device_trouble] = ACTIONS(35),
    [anon_sym_device_restart] = ACTIONS(35),
    [anon_sym_no_func_code_support] = ACTIONS(35),
    [anon_sym_object_unknown] = ACTIONS(35),
    [anon_sym_parameter_error] = ACTIONS(35),
    [anon_sym_event_buffer_overflow] = ACTIONS(35),
    [anon_sym_alread_executing] = ACTIONS(35),
    [anon_sym_config_corrupt] = ACTIONS(35),
    [anon_sym_reserved_2] = ACTIONS(35),
    [anon_sym_reserved_1] = ACTIONS(35),
    [anon_sym_retr] = ACTIONS(35),
    [anon_sym_stor] = ACTIONS(35),
    [anon_sym_INVITE] = ACTIONS(35),
    [anon_sym_BYTE] = ACTIONS(35),
    [anon_sym_REGISTER] = ACTIONS(35),
    [anon_sym_CANCEL] = ACTIONS(35),
    [anon_sym_ACK] = ACTIONS(35),
    [anon_sym_OPTIONS] = ACTIONS(35),
    [anon_sym_CONNECT] = ACTIONS(35),
    [anon_sym_CONNACK] = ACTIONS(35),
    [anon_sym_PUBLISH] = ACTIONS(35),
    [anon_sym_PUBACK] = ACTIONS(35),
    [anon_sym_PUBREC] = ACTIONS(35),
    [anon_sym_PUBREL] = ACTIONS(35),
    [anon_sym_PUBCOMP] = ACTIONS(35),
    [anon_sym_SUBSCRIBE] = ACTIONS(35),
    [anon_sym_SUBACK] = ACTIONS(35),
    [anon_sym_PINGREQ] = ACTIONS(35),
    [anon_sym_PINGRESP] = ACTIONS(35),
    [anon_sym_DISCONNECT] = ACTIONS(35),
    [anon_sym_AUTH] = ACTIONS(35),
    [anon_sym_UNASSIGNED] = ACTIONS(35),
    [anon_sym_dup] = ACTIONS(35),
    [anon_sym_retain] = ACTIONS(35),
    [anon_sym_yes] = ACTIONS(35),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_no] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [anon_sym_username] = ACTIONS(35),
    [anon_sym_password] = ACTIONS(35),
    [anon_sym_will] = ACTIONS(35),
    [anon_sym_will_retain] = ACTIONS(35),
    [anon_sym_clean_session] = ACTIONS(35),
    [anon_sym_type] = ACTIONS(35),
    [anon_sym_threshold] = ACTIONS(35),
    [anon_sym_limit] = ACTIONS(35),
    [anon_sym_track] = ACTIONS(35),
    [anon_sym_by_src] = ACTIONS(35),
    [anon_sym_by_dst] = ACTIONS(35),
    [anon_sym_by_rule] = ACTIONS(35),
    [anon_sym_by_both] = ACTIONS(35),
    [anon_sym_count] = ACTIONS(35),
    [anon_sym_seconds] = ACTIONS(35),
    [anon_sym_src] = ACTIONS(35),
    [anon_sym_dst] = ACTIONS(35),
    [anon_sym_load] = ACTIONS(35),
    [anon_sym_state] = ACTIONS(35),
    [anon_sym_save] = ACTIONS(35),
    [anon_sym_memcap] = ACTIONS(35),
    [anon_sym_hashsize] = ACTIONS(35),
    [anon_sym_relative] = ACTIONS(35),
    [anon_sym_endian] = ACTIONS(35),
    [anon_sym_dce] = ACTIONS(35),
    [anon_sym_bitmask] = ACTIONS(35),
    [anon_sym_string] = ACTIONS(35),
    [anon_sym_offset] = ACTIONS(35),
    [anon_sym_depth] = ACTIONS(35),
    [anon_sym_distance] = ACTIONS(35),
    [anon_sym_within] = ACTIONS(35),
    [anon_sym_oper] = ACTIONS(35),
    [anon_sym_rvalue] = ACTIONS(35),
    [anon_sym_result] = ACTIONS(35),
    [anon_sym_server] = ACTIONS(35),
    [anon_sym_client] = ACTIONS(35),
    [anon_sym_either] = ACTIONS(35),
    [anon_sym_name] = ACTIONS(35),
    [anon_sym_ip_src] = ACTIONS(35),
    [anon_sym_ip_dst] = ACTIONS(35),
    [anon_sym_ip_pair] = ACTIONS(35),
    [anon_sym_expire] = ACTIONS(35),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(39), 1,
      anon_sym_http,
    STATE(14), 1,
      sym_protocol,
    STATE(83), 1,
      sym_header,
    ACTIONS(37), 26,
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
    ACTIONS(43), 1,
      anon_sym_http,
    ACTIONS(41), 26,
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
    ACTIONS(45), 1,
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
  [97] = 6,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(49), 1,
      anon_sym_POUND,
    ACTIONS(55), 1,
      anon_sym_reject,
    STATE(7), 1,
      sym_action,
    STATE(10), 4,
      sym__lines,
      sym_comment,
      sym__rule,
      aux_sym_source_file_repeat1,
    ACTIONS(52), 6,
      anon_sym_alert,
      anon_sym_pass,
      anon_sym_drop,
      anon_sym_rejectsrc,
      anon_sym_rejectdst,
      anon_sym_rejectboth,
  [124] = 8,
    ACTIONS(58), 1,
      anon_sym_LBRACK,
    ACTIONS(60), 1,
      anon_sym_RBRACK,
    ACTIONS(62), 1,
      sym_negation,
    ACTIONS(64), 1,
      anon_sym_DOLLAR,
    ACTIONS(66), 1,
      aux_sym_ipv4_token1,
    ACTIONS(68), 1,
      sym__ipv6_octet,
    STATE(17), 1,
      aux_sym_ipv6_repeat1,
    STATE(67), 6,
      sym__location,
      sym__standalone_location,
      sym_group_location,
      sym_variable,
      sym_ipv4,
      sym_ipv6,
  [154] = 8,
    ACTIONS(58), 1,
      anon_sym_LBRACK,
    ACTIONS(62), 1,
      sym_negation,
    ACTIONS(64), 1,
      anon_sym_DOLLAR,
    ACTIONS(66), 1,
      aux_sym_ipv4_token1,
    ACTIONS(68), 1,
      sym__ipv6_octet,
    ACTIONS(70), 1,
      anon_sym_RBRACK,
    STATE(17), 1,
      aux_sym_ipv6_repeat1,
    STATE(75), 6,
      sym__location,
      sym__standalone_location,
      sym_group_location,
      sym_variable,
      sym_ipv4,
      sym_ipv6,
  [184] = 7,
    ACTIONS(58), 1,
      anon_sym_LBRACK,
    ACTIONS(62), 1,
      sym_negation,
    ACTIONS(64), 1,
      anon_sym_DOLLAR,
    ACTIONS(66), 1,
      aux_sym_ipv4_token1,
    ACTIONS(68), 1,
      sym__ipv6_octet,
    STATE(17), 1,
      aux_sym_ipv6_repeat1,
    STATE(94), 6,
      sym__location,
      sym__standalone_location,
      sym_group_location,
      sym_variable,
      sym_ipv4,
      sym_ipv6,
  [211] = 7,
    ACTIONS(58), 1,
      anon_sym_LBRACK,
    ACTIONS(62), 1,
      sym_negation,
    ACTIONS(64), 1,
      anon_sym_DOLLAR,
    ACTIONS(66), 1,
      aux_sym_ipv4_token1,
    ACTIONS(68), 1,
      sym__ipv6_octet,
    STATE(17), 1,
      aux_sym_ipv6_repeat1,
    STATE(27), 6,
      sym__location,
      sym__standalone_location,
      sym_group_location,
      sym_variable,
      sym_ipv4,
      sym_ipv6,
  [238] = 7,
    ACTIONS(58), 1,
      anon_sym_LBRACK,
    ACTIONS(62), 1,
      sym_negation,
    ACTIONS(64), 1,
      anon_sym_DOLLAR,
    ACTIONS(66), 1,
      aux_sym_ipv4_token1,
    ACTIONS(68), 1,
      sym__ipv6_octet,
    STATE(17), 1,
      aux_sym_ipv6_repeat1,
    STATE(31), 6,
      sym__location,
      sym__standalone_location,
      sym_group_location,
      sym_variable,
      sym_ipv4,
      sym_ipv6,
  [265] = 2,
    ACTIONS(74), 1,
      anon_sym_reject,
    ACTIONS(72), 8,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_alert,
      anon_sym_pass,
      anon_sym_drop,
      anon_sym_rejectsrc,
      anon_sym_rejectdst,
      anon_sym_rejectboth,
  [279] = 5,
    ACTIONS(78), 1,
      aux_sym_ipv4_token2,
    ACTIONS(80), 1,
      sym__ipv6_octet,
    ACTIONS(82), 1,
      aux_sym_port_token1,
    STATE(19), 1,
      aux_sym_ipv6_repeat1,
    ACTIONS(76), 5,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_negation,
      anon_sym_any,
  [299] = 2,
    ACTIONS(86), 1,
      anon_sym_reject,
    ACTIONS(84), 8,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_alert,
      anon_sym_pass,
      anon_sym_drop,
      anon_sym_rejectsrc,
      anon_sym_rejectdst,
      anon_sym_rejectboth,
  [313] = 4,
    ACTIONS(90), 1,
      sym__ipv6_octet,
    ACTIONS(93), 1,
      aux_sym_port_token1,
    STATE(19), 1,
      aux_sym_ipv6_repeat1,
    ACTIONS(88), 6,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_negation,
      aux_sym_ipv4_token2,
      anon_sym_any,
  [331] = 2,
    ACTIONS(97), 1,
      anon_sym_reject,
    ACTIONS(95), 8,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_alert,
      anon_sym_pass,
      anon_sym_drop,
      anon_sym_rejectsrc,
      anon_sym_rejectdst,
      anon_sym_rejectboth,
  [345] = 2,
    ACTIONS(101), 1,
      anon_sym_reject,
    ACTIONS(99), 8,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_alert,
      anon_sym_pass,
      anon_sym_drop,
      anon_sym_rejectsrc,
      anon_sym_rejectdst,
      anon_sym_rejectboth,
  [359] = 2,
    ACTIONS(105), 1,
      anon_sym_reject,
    ACTIONS(103), 8,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_alert,
      anon_sym_pass,
      anon_sym_drop,
      anon_sym_rejectsrc,
      anon_sym_rejectdst,
      anon_sym_rejectboth,
  [373] = 6,
    ACTIONS(64), 1,
      anon_sym_DOLLAR,
    ACTIONS(66), 1,
      aux_sym_ipv4_token1,
    ACTIONS(68), 1,
      sym__ipv6_octet,
    ACTIONS(107), 1,
      anon_sym_LBRACK,
    STATE(17), 1,
      aux_sym_ipv6_repeat1,
    STATE(32), 3,
      sym_variable,
      sym_ipv4,
      sym_ipv6,
  [394] = 6,
    ACTIONS(109), 1,
      anon_sym_LBRACK,
    ACTIONS(111), 1,
      anon_sym_RBRACK,
    ACTIONS(113), 1,
      sym_negation,
    ACTIONS(115), 1,
      anon_sym_any,
    ACTIONS(117), 1,
      aux_sym_port_token1,
    STATE(72), 3,
      sym__port_choices,
      sym_port,
      sym_group_port,
  [415] = 6,
    ACTIONS(109), 1,
      anon_sym_LBRACK,
    ACTIONS(113), 1,
      sym_negation,
    ACTIONS(115), 1,
      anon_sym_any,
    ACTIONS(117), 1,
      aux_sym_port_token1,
    ACTIONS(119), 1,
      anon_sym_RBRACK,
    STATE(73), 3,
      sym__port_choices,
      sym_port,
      sym_group_port,
  [436] = 2,
    ACTIONS(123), 1,
      aux_sym_ipv4_token2,
    ACTIONS(121), 6,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_negation,
      anon_sym_any,
      aux_sym_port_token1,
  [448] = 5,
    ACTIONS(109), 1,
      anon_sym_LBRACK,
    ACTIONS(113), 1,
      sym_negation,
    ACTIONS(115), 1,
      anon_sym_any,
    ACTIONS(117), 1,
      aux_sym_port_token1,
    STATE(64), 3,
      sym__port_choices,
      sym_port,
      sym_group_port,
  [466] = 5,
    ACTIONS(109), 1,
      anon_sym_LBRACK,
    ACTIONS(113), 1,
      sym_negation,
    ACTIONS(115), 1,
      anon_sym_any,
    ACTIONS(117), 1,
      aux_sym_port_token1,
    STATE(93), 3,
      sym__port_choices,
      sym_port,
      sym_group_port,
  [484] = 4,
    ACTIONS(127), 1,
      anon_sym_DASH,
    STATE(86), 1,
      sym_unit,
    ACTIONS(125), 2,
      anon_sym_COMMA,
      sym_semicolon,
    ACTIONS(129), 3,
      anon_sym_KB,
      anon_sym_MB,
      anon_sym_GB,
  [500] = 4,
    ACTIONS(133), 1,
      anon_sym_DASH,
    STATE(87), 1,
      sym_unit,
    ACTIONS(131), 2,
      anon_sym_COMMA,
      sym_semicolon,
    ACTIONS(129), 3,
      anon_sym_KB,
      anon_sym_MB,
      anon_sym_GB,
  [516] = 5,
    ACTIONS(109), 1,
      anon_sym_LBRACK,
    ACTIONS(113), 1,
      sym_negation,
    ACTIONS(115), 1,
      anon_sym_any,
    ACTIONS(117), 1,
      aux_sym_port_token1,
    STATE(97), 3,
      sym__port_choices,
      sym_port,
      sym_group_port,
  [534] = 1,
    ACTIONS(135), 6,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_negation,
      anon_sym_any,
      aux_sym_port_token1,
  [543] = 2,
    ACTIONS(139), 1,
      sym_colon,
    ACTIONS(137), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LT_GT,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
  [554] = 1,
    ACTIONS(141), 6,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_negation,
      anon_sym_any,
      aux_sym_port_token1,
  [563] = 3,
    STATE(82), 1,
      sym_unit,
    ACTIONS(143), 2,
      anon_sym_COMMA,
      sym_semicolon,
    ACTIONS(129), 3,
      anon_sym_KB,
      anon_sym_MB,
      anon_sym_GB,
  [576] = 1,
    ACTIONS(145), 6,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_negation,
      anon_sym_any,
      aux_sym_port_token1,
  [585] = 2,
    ACTIONS(149), 1,
      sym_colon,
    ACTIONS(147), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LT_GT,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
  [596] = 1,
    ACTIONS(151), 6,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_negation,
      anon_sym_any,
      aux_sym_port_token1,
  [605] = 1,
    ACTIONS(153), 6,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_negation,
      anon_sym_any,
      aux_sym_port_token1,
  [614] = 6,
    ACTIONS(155), 1,
      anon_sym_RPAREN,
    ACTIONS(157), 1,
      aux_sym_text_token1,
    STATE(45), 1,
      aux_sym_options_repeat1,
    STATE(57), 1,
      aux_sym_text_repeat1,
    STATE(80), 1,
      sym_text,
    STATE(100), 1,
      sym__opt,
  [633] = 6,
    ACTIONS(159), 1,
      anon_sym_RPAREN,
    ACTIONS(161), 1,
      aux_sym_text_token1,
    STATE(41), 1,
      aux_sym_options_repeat1,
    STATE(57), 1,
      aux_sym_text_repeat1,
    STATE(80), 1,
      sym_text,
    STATE(100), 1,
      sym__opt,
  [652] = 1,
    ACTIONS(164), 6,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_negation,
      anon_sym_any,
      aux_sym_port_token1,
  [661] = 3,
    STATE(84), 1,
      sym_unit,
    ACTIONS(166), 2,
      anon_sym_COMMA,
      sym_semicolon,
    ACTIONS(129), 3,
      anon_sym_KB,
      anon_sym_MB,
      anon_sym_GB,
  [674] = 1,
    ACTIONS(168), 6,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_negation,
      anon_sym_any,
      aux_sym_port_token1,
  [683] = 6,
    ACTIONS(157), 1,
      aux_sym_text_token1,
    ACTIONS(170), 1,
      anon_sym_RPAREN,
    STATE(41), 1,
      aux_sym_options_repeat1,
    STATE(57), 1,
      aux_sym_text_repeat1,
    STATE(80), 1,
      sym_text,
    STATE(100), 1,
      sym__opt,
  [702] = 1,
    ACTIONS(172), 6,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_negation,
      anon_sym_any,
      aux_sym_port_token1,
  [711] = 1,
    ACTIONS(137), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LT_GT,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
  [719] = 2,
    ACTIONS(176), 1,
      sym__ipv6_octet,
    ACTIONS(174), 4,
      anon_sym_LBRACK,
      sym_negation,
      anon_sym_DOLLAR,
      aux_sym_ipv4_token1,
  [729] = 2,
    ACTIONS(180), 1,
      sym__ipv6_octet,
    ACTIONS(178), 4,
      anon_sym_LBRACK,
      sym_negation,
      anon_sym_DOLLAR,
      aux_sym_ipv4_token1,
  [739] = 5,
    ACTIONS(157), 1,
      aux_sym_text_token1,
    ACTIONS(182), 1,
      anon_sym_RPAREN,
    STATE(57), 1,
      aux_sym_text_repeat1,
    STATE(80), 1,
      sym_text,
    STATE(101), 1,
      sym__opt,
  [755] = 1,
    ACTIONS(184), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LT_GT,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
  [763] = 1,
    ACTIONS(186), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LT_GT,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
  [771] = 3,
    ACTIONS(190), 1,
      aux_sym_text_token1,
    STATE(53), 1,
      aux_sym_text_repeat1,
    ACTIONS(188), 3,
      anon_sym_COMMA,
      sym_colon,
      sym_semicolon,
  [783] = 1,
    ACTIONS(193), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LT_GT,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
  [791] = 1,
    ACTIONS(195), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LT_GT,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
  [799] = 1,
    ACTIONS(147), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LT_GT,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
  [807] = 3,
    ACTIONS(199), 1,
      aux_sym_text_token1,
    STATE(53), 1,
      aux_sym_text_repeat1,
    ACTIONS(197), 3,
      anon_sym_COMMA,
      sym_colon,
      sym_semicolon,
  [819] = 1,
    ACTIONS(201), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LT_GT,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
  [827] = 4,
    ACTIONS(203), 1,
      anon_sym_COMMA,
    ACTIONS(205), 1,
      sym_semicolon,
    ACTIONS(207), 1,
      aux_sym_digit_token1,
    STATE(4), 1,
      sym_comma,
  [840] = 4,
    ACTIONS(203), 1,
      anon_sym_COMMA,
    ACTIONS(207), 1,
      aux_sym_digit_token1,
    ACTIONS(209), 1,
      sym_semicolon,
    STATE(2), 1,
      sym_comma,
  [853] = 3,
    ACTIONS(211), 1,
      anon_sym_COMMA,
    ACTIONS(213), 1,
      anon_sym_RBRACK,
    STATE(71), 1,
      aux_sym_group_port_repeat1,
  [863] = 3,
    ACTIONS(203), 1,
      anon_sym_COMMA,
    ACTIONS(209), 1,
      sym_semicolon,
    STATE(2), 1,
      sym_comma,
  [873] = 3,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    ACTIONS(217), 1,
      aux_sym_string_token1,
    STATE(76), 1,
      aux_sym_string_repeat1,
  [883] = 2,
    STATE(15), 1,
      sym_direction,
    ACTIONS(219), 2,
      anon_sym_LT_GT,
      anon_sym_DASH_GT,
  [891] = 3,
    ACTIONS(221), 1,
      anon_sym_COMMA,
    ACTIONS(223), 1,
      anon_sym_RBRACK,
    STATE(69), 1,
      aux_sym_group_location_repeat1,
  [901] = 3,
    ACTIONS(225), 1,
      anon_sym_DQUOTE,
    ACTIONS(227), 1,
      aux_sym_string_token1,
    STATE(66), 1,
      aux_sym_string_repeat1,
  [911] = 3,
    ACTIONS(221), 1,
      anon_sym_COMMA,
    ACTIONS(223), 1,
      anon_sym_RBRACK,
    STATE(70), 1,
      aux_sym_group_location_repeat1,
  [921] = 3,
    ACTIONS(211), 1,
      anon_sym_COMMA,
    ACTIONS(230), 1,
      anon_sym_RBRACK,
    STATE(71), 1,
      aux_sym_group_port_repeat1,
  [931] = 3,
    ACTIONS(232), 1,
      anon_sym_COMMA,
    ACTIONS(235), 1,
      anon_sym_RBRACK,
    STATE(69), 1,
      aux_sym_group_location_repeat1,
  [941] = 3,
    ACTIONS(221), 1,
      anon_sym_COMMA,
    ACTIONS(237), 1,
      anon_sym_RBRACK,
    STATE(69), 1,
      aux_sym_group_location_repeat1,
  [951] = 3,
    ACTIONS(239), 1,
      anon_sym_COMMA,
    ACTIONS(242), 1,
      anon_sym_RBRACK,
    STATE(71), 1,
      aux_sym_group_port_repeat1,
  [961] = 3,
    ACTIONS(119), 1,
      anon_sym_RBRACK,
    ACTIONS(211), 1,
      anon_sym_COMMA,
    STATE(61), 1,
      aux_sym_group_port_repeat1,
  [971] = 3,
    ACTIONS(211), 1,
      anon_sym_COMMA,
    ACTIONS(213), 1,
      anon_sym_RBRACK,
    STATE(68), 1,
      aux_sym_group_port_repeat1,
  [981] = 1,
    ACTIONS(244), 3,
      anon_sym_COMMA,
      sym_semicolon,
      aux_sym_digit_token1,
  [987] = 3,
    ACTIONS(60), 1,
      anon_sym_RBRACK,
    ACTIONS(221), 1,
      anon_sym_COMMA,
    STATE(65), 1,
      aux_sym_group_location_repeat1,
  [997] = 3,
    ACTIONS(246), 1,
      anon_sym_DQUOTE,
    ACTIONS(248), 1,
      aux_sym_string_token1,
    STATE(66), 1,
      aux_sym_string_repeat1,
  [1007] = 2,
    ACTIONS(244), 1,
      aux_sym_digit_token1,
    ACTIONS(250), 2,
      anon_sym_COMMA,
      sym_semicolon,
  [1015] = 3,
    ACTIONS(203), 1,
      anon_sym_COMMA,
    ACTIONS(205), 1,
      sym_semicolon,
    STATE(4), 1,
      sym_comma,
  [1025] = 1,
    ACTIONS(252), 2,
      anon_sym_COMMA,
      sym_semicolon,
  [1030] = 2,
    ACTIONS(254), 1,
      sym_colon,
    ACTIONS(256), 1,
      sym_semicolon,
  [1037] = 1,
    ACTIONS(250), 2,
      anon_sym_COMMA,
      sym_semicolon,
  [1042] = 1,
    ACTIONS(258), 2,
      anon_sym_COMMA,
      sym_semicolon,
  [1047] = 2,
    ACTIONS(260), 1,
      anon_sym_LPAREN,
    STATE(20), 1,
      sym_options,
  [1054] = 1,
    ACTIONS(262), 2,
      anon_sym_COMMA,
      sym_semicolon,
  [1059] = 1,
    ACTIONS(264), 2,
      anon_sym_COMMA,
      sym_semicolon,
  [1064] = 1,
    ACTIONS(266), 2,
      anon_sym_COMMA,
      sym_semicolon,
  [1069] = 1,
    ACTIONS(268), 2,
      anon_sym_COMMA,
      sym_semicolon,
  [1074] = 1,
    ACTIONS(270), 2,
      anon_sym_COMMA,
      sym_semicolon,
  [1079] = 1,
    ACTIONS(272), 2,
      anon_sym_COMMA,
      sym_semicolon,
  [1084] = 1,
    ACTIONS(274), 2,
      anon_sym_COMMA,
      sym_semicolon,
  [1089] = 2,
    ACTIONS(159), 1,
      anon_sym_RPAREN,
    ACTIONS(276), 1,
      aux_sym_text_token1,
  [1096] = 1,
    ACTIONS(278), 2,
      anon_sym_COMMA,
      sym_semicolon,
  [1101] = 1,
    ACTIONS(242), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1106] = 1,
    ACTIONS(235), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1111] = 2,
    ACTIONS(280), 1,
      anon_sym_LBRACK,
    ACTIONS(282), 1,
      aux_sym_port_token1,
  [1118] = 1,
    ACTIONS(284), 1,
      aux_sym_hexidecimal_token1,
  [1122] = 1,
    ACTIONS(286), 1,
      anon_sym_LPAREN,
  [1126] = 1,
    ACTIONS(288), 1,
      ts_builtin_sym_end,
  [1130] = 1,
    ACTIONS(290), 1,
      sym_semicolon,
  [1134] = 1,
    ACTIONS(292), 1,
      sym_semicolon,
  [1138] = 1,
    ACTIONS(294), 1,
      sym_semicolon,
  [1142] = 1,
    ACTIONS(296), 1,
      sym_semicolon,
  [1146] = 1,
    ACTIONS(298), 1,
      aux_sym_comment_token1,
  [1150] = 1,
    ACTIONS(300), 1,
      aux_sym_digit_token1,
  [1154] = 1,
    ACTIONS(302), 1,
      aux_sym_hexidecimal_token1,
  [1158] = 1,
    ACTIONS(304), 1,
      aux_sym_digit_token1,
  [1162] = 1,
    ACTIONS(306), 1,
      sym_semicolon,
  [1166] = 1,
    ACTIONS(308), 1,
      aux_sym_variable_token1,
  [1170] = 1,
    ACTIONS(310), 1,
      anon_sym_x,
  [1174] = 1,
    ACTIONS(312), 1,
      aux_sym_digit_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 38,
  [SMALL_STATE(9)] = 70,
  [SMALL_STATE(10)] = 97,
  [SMALL_STATE(11)] = 124,
  [SMALL_STATE(12)] = 154,
  [SMALL_STATE(13)] = 184,
  [SMALL_STATE(14)] = 211,
  [SMALL_STATE(15)] = 238,
  [SMALL_STATE(16)] = 265,
  [SMALL_STATE(17)] = 279,
  [SMALL_STATE(18)] = 299,
  [SMALL_STATE(19)] = 313,
  [SMALL_STATE(20)] = 331,
  [SMALL_STATE(21)] = 345,
  [SMALL_STATE(22)] = 359,
  [SMALL_STATE(23)] = 373,
  [SMALL_STATE(24)] = 394,
  [SMALL_STATE(25)] = 415,
  [SMALL_STATE(26)] = 436,
  [SMALL_STATE(27)] = 448,
  [SMALL_STATE(28)] = 466,
  [SMALL_STATE(29)] = 484,
  [SMALL_STATE(30)] = 500,
  [SMALL_STATE(31)] = 516,
  [SMALL_STATE(32)] = 534,
  [SMALL_STATE(33)] = 543,
  [SMALL_STATE(34)] = 554,
  [SMALL_STATE(35)] = 563,
  [SMALL_STATE(36)] = 576,
  [SMALL_STATE(37)] = 585,
  [SMALL_STATE(38)] = 596,
  [SMALL_STATE(39)] = 605,
  [SMALL_STATE(40)] = 614,
  [SMALL_STATE(41)] = 633,
  [SMALL_STATE(42)] = 652,
  [SMALL_STATE(43)] = 661,
  [SMALL_STATE(44)] = 674,
  [SMALL_STATE(45)] = 683,
  [SMALL_STATE(46)] = 702,
  [SMALL_STATE(47)] = 711,
  [SMALL_STATE(48)] = 719,
  [SMALL_STATE(49)] = 729,
  [SMALL_STATE(50)] = 739,
  [SMALL_STATE(51)] = 755,
  [SMALL_STATE(52)] = 763,
  [SMALL_STATE(53)] = 771,
  [SMALL_STATE(54)] = 783,
  [SMALL_STATE(55)] = 791,
  [SMALL_STATE(56)] = 799,
  [SMALL_STATE(57)] = 807,
  [SMALL_STATE(58)] = 819,
  [SMALL_STATE(59)] = 827,
  [SMALL_STATE(60)] = 840,
  [SMALL_STATE(61)] = 853,
  [SMALL_STATE(62)] = 863,
  [SMALL_STATE(63)] = 873,
  [SMALL_STATE(64)] = 883,
  [SMALL_STATE(65)] = 891,
  [SMALL_STATE(66)] = 901,
  [SMALL_STATE(67)] = 911,
  [SMALL_STATE(68)] = 921,
  [SMALL_STATE(69)] = 931,
  [SMALL_STATE(70)] = 941,
  [SMALL_STATE(71)] = 951,
  [SMALL_STATE(72)] = 961,
  [SMALL_STATE(73)] = 971,
  [SMALL_STATE(74)] = 981,
  [SMALL_STATE(75)] = 987,
  [SMALL_STATE(76)] = 997,
  [SMALL_STATE(77)] = 1007,
  [SMALL_STATE(78)] = 1015,
  [SMALL_STATE(79)] = 1025,
  [SMALL_STATE(80)] = 1030,
  [SMALL_STATE(81)] = 1037,
  [SMALL_STATE(82)] = 1042,
  [SMALL_STATE(83)] = 1047,
  [SMALL_STATE(84)] = 1054,
  [SMALL_STATE(85)] = 1059,
  [SMALL_STATE(86)] = 1064,
  [SMALL_STATE(87)] = 1069,
  [SMALL_STATE(88)] = 1074,
  [SMALL_STATE(89)] = 1079,
  [SMALL_STATE(90)] = 1084,
  [SMALL_STATE(91)] = 1089,
  [SMALL_STATE(92)] = 1096,
  [SMALL_STATE(93)] = 1101,
  [SMALL_STATE(94)] = 1106,
  [SMALL_STATE(95)] = 1111,
  [SMALL_STATE(96)] = 1118,
  [SMALL_STATE(97)] = 1122,
  [SMALL_STATE(98)] = 1126,
  [SMALL_STATE(99)] = 1130,
  [SMALL_STATE(100)] = 1134,
  [SMALL_STATE(101)] = 1138,
  [SMALL_STATE(102)] = 1142,
  [SMALL_STATE(103)] = 1146,
  [SMALL_STATE(104)] = 1150,
  [SMALL_STATE(105)] = 1154,
  [SMALL_STATE(106)] = 1158,
  [SMALL_STATE(107)] = 1162,
  [SMALL_STATE(108)] = 1166,
  [SMALL_STATE(109)] = 1170,
  [SMALL_STATE(110)] = 1174,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comma, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 1),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(103),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options, 4),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_options, 4),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ipv6, 1),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ipv6, 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options, 2),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_options, 2),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ipv6_repeat1, 2),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ipv6_repeat1, 2), SHIFT_REPEAT(19),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ipv6_repeat1, 2),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rule, 3),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__rule, 3),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options, 5),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_options, 5),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ipv4, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_digit, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_digit, 2, .production_id = 3),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__standalone_location, 2),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ipv4, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_digit, 4, .production_id = 5),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_location, 4),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port, 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ipv6, 2),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_options_repeat1, 2),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(57),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_location, 3),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_digit, 3, .production_id = 4),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_location, 2),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_location, 5),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction, 1),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_direction, 1),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_protocol, 1),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_protocol, 1),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_port, 2),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_port, 4),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(53),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port, 3),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_port, 5),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 1),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_port, 3),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 2),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(66),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_location_repeat1, 2), SHIFT_REPEAT(13),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_location_repeat1, 2),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_port_repeat1, 2), SHIFT_REPEAT(28),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_port_repeat1, 2),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_operator, 1),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__opt, 1, .production_id = 1),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_digit, 5, .production_id = 5),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_digit, 4, .production_id = 4),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 1),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_digit, 2),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_digit, 3, .production_id = 3),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hexidecimal, 2),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hexstring, 3),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_octal, 2),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 6),
  [288] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 3),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__opt, 3, .production_id = 2),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 4),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
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
