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
#define STATE_COUNT 98
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 248
#define ALIAS_COUNT 2
#define TOKEN_COUNT 215
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 3

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
  anon_sym_DASH_GT = 50,
  anon_sym_LT_GT = 51,
  anon_sym_LPAREN = 52,
  anon_sym_RPAREN = 53,
  anon_sym_GT = 54,
  anon_sym_LT = 55,
  anon_sym_LT_EQ = 56,
  anon_sym_GT_EQ = 57,
  aux_sym_digit_token1 = 58,
  anon_sym_DASH = 59,
  aux_sym_text_token1 = 60,
  anon_sym_DQUOTE = 61,
  aux_sym_string_token1 = 62,
  sym_decimal = 63,
  anon_sym_x = 64,
  aux_sym_hexidecimal_token1 = 65,
  anon_sym_rr = 66,
  anon_sym_eol = 67,
  anon_sym_nop = 68,
  anon_sym_ts = 69,
  anon_sym_sec = 70,
  anon_sym_esec = 71,
  anon_sym_lsrr = 72,
  anon_sym_ssrr = 73,
  anon_sym_satid = 74,
  anon_sym_only = 75,
  anon_sym_STAR = 76,
  anon_sym_set = 77,
  anon_sym_isset = 78,
  anon_sym_toggle = 79,
  anon_sym_unset = 80,
  anon_sym_isnotset = 81,
  anon_sym_noalert = 82,
  anon_sym_to_client = 83,
  anon_sym_to_server = 84,
  anon_sym_from_client = 85,
  anon_sym_from_server = 86,
  anon_sym_established = 87,
  anon_sym_not_established = 88,
  anon_sym_stateless = 89,
  anon_sym_only_stream = 90,
  anon_sym_no_stream = 91,
  anon_sym_only_frag = 92,
  anon_sym_no_frag = 93,
  anon_sym_request_SLASHto_server = 94,
  anon_sym_response_SLASHto_client = 95,
  anon_sym_both = 96,
  anon_sym_file = 97,
  anon_sym_tx = 98,
  anon_sym_ssn_SLASHflow = 99,
  anon_sym_sslv2 = 100,
  anon_sym_sslv3 = 101,
  anon_sym_tls1_DOT0 = 102,
  anon_sym_tls1_DOT1 = 103,
  anon_sym_tls1_DOT2 = 104,
  anon_sym_tls1_DOT3 = 105,
  anon_sym_client_hello = 106,
  anon_sym_server_hello = 107,
  anon_sym_client_kyx = 108,
  anon_sym_server_keyx = 109,
  anon_sym_unkown = 110,
  anon_sym_2_compat = 111,
  anon_sym_confirm = 112,
  anon_sym_read = 113,
  anon_sym_write = 114,
  anon_sym_select = 115,
  anon_sym_operate = 116,
  anon_sym_direct_operate = 117,
  anon_sym_direct_operate_nr = 118,
  anon_sym_immed_freeze = 119,
  anon_sym_immed_freeze_nr = 120,
  anon_sym_freeze_clear = 121,
  anon_sym_freeze_clear_nr = 122,
  anon_sym_freeze_at_time = 123,
  anon_sym_freeze_at_time_nr = 124,
  anon_sym_cold_restart = 125,
  anon_sym_warm_restart = 126,
  anon_sym_initialize_data = 127,
  anon_sym_initialize_appl = 128,
  anon_sym_start_appl = 129,
  anon_sym_stop_appl = 130,
  anon_sym_save_config = 131,
  anon_sym_enable_unsolicited = 132,
  anon_sym_disable_unsolicited = 133,
  anon_sym_assign_class = 134,
  anon_sym_delay_measure = 135,
  anon_sym_record_current_time = 136,
  anon_sym_open_file = 137,
  anon_sym_close_file = 138,
  anon_sym_delete_file = 139,
  anon_sym_get_file_info = 140,
  anon_sym_authenticate_file = 141,
  anon_sym_abort_file = 142,
  anon_sym_activate_config = 143,
  anon_sym_authenticate_req = 144,
  anon_sym_authenticate_err = 145,
  anon_sym_response = 146,
  anon_sym_unsolicited_response = 147,
  anon_sym_authenticate_respo = 148,
  anon_sym_all_stations = 149,
  anon_sym_class_1_events = 150,
  anon_sym_class_2_events = 151,
  anon_sym_class_3_events = 152,
  anon_sym_need_time = 153,
  anon_sym_local_control = 154,
  anon_sym_device_trouble = 155,
  anon_sym_device_restart = 156,
  anon_sym_no_func_code_support = 157,
  anon_sym_object_unknown = 158,
  anon_sym_parameter_error = 159,
  anon_sym_event_buffer_overflow = 160,
  anon_sym_alread_executing = 161,
  anon_sym_config_corrupt = 162,
  anon_sym_reserved_2 = 163,
  anon_sym_reserved_1 = 164,
  anon_sym_retr = 165,
  anon_sym_stor = 166,
  anon_sym_INVITE = 167,
  anon_sym_BYTE = 168,
  anon_sym_REGISTER = 169,
  anon_sym_CANCEL = 170,
  anon_sym_ACK = 171,
  anon_sym_OPTIONS = 172,
  anon_sym_CONNECT = 173,
  anon_sym_CONNACK = 174,
  anon_sym_PUBLISH = 175,
  anon_sym_PUBACK = 176,
  anon_sym_PUBREC = 177,
  anon_sym_PUBREL = 178,
  anon_sym_PUBCOMP = 179,
  anon_sym_SUBSCRIBE = 180,
  anon_sym_SUBACK = 181,
  anon_sym_PINGREQ = 182,
  anon_sym_PINGRESP = 183,
  anon_sym_DISCONNECT = 184,
  anon_sym_AUTH = 185,
  anon_sym_UNASSIGNED = 186,
  anon_sym_dup = 187,
  anon_sym_retain = 188,
  anon_sym_yes = 189,
  anon_sym_true = 190,
  anon_sym_no = 191,
  anon_sym_false = 192,
  anon_sym_username = 193,
  anon_sym_password = 194,
  anon_sym_will = 195,
  anon_sym_will_retain = 196,
  anon_sym_clean_session = 197,
  anon_sym_type = 198,
  anon_sym_threshold = 199,
  anon_sym_limit = 200,
  anon_sym_track = 201,
  anon_sym_by_src = 202,
  anon_sym_by_dst = 203,
  anon_sym_by_rule = 204,
  anon_sym_by_both = 205,
  anon_sym_count = 206,
  anon_sym_seconds = 207,
  anon_sym_src = 208,
  anon_sym_dst = 209,
  anon_sym_load = 210,
  anon_sym_state = 211,
  anon_sym_save = 212,
  anon_sym_memcap = 213,
  anon_sym_hashsize = 214,
  sym_source_file = 215,
  sym__lines = 216,
  sym_comment = 217,
  sym__rule = 218,
  sym_action = 219,
  sym_header = 220,
  sym_protocol = 221,
  sym__location = 222,
  sym__standalone_location = 223,
  sym_group_location = 224,
  sym_variable = 225,
  sym_ipv4 = 226,
  sym_ipv6 = 227,
  sym__port_choices = 228,
  sym_port = 229,
  sym_group_port = 230,
  sym_comma = 231,
  sym_direction = 232,
  sym_options = 233,
  sym__opt = 234,
  sym_digit = 235,
  sym_text = 236,
  sym_string = 237,
  sym_hexidecimal = 238,
  sym_value = 239,
  sym_constant = 240,
  aux_sym_source_file_repeat1 = 241,
  aux_sym_group_location_repeat1 = 242,
  aux_sym_ipv6_repeat1 = 243,
  aux_sym_group_port_repeat1 = 244,
  aux_sym_options_repeat1 = 245,
  aux_sym_text_repeat1 = 246,
  aux_sym_string_repeat1 = 247,
  alias_sym_keyword = 248,
  alias_sym_separator = 249,
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
  [anon_sym_DASH_GT] = "->",
  [anon_sym_LT_GT] = "<>",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_GT] = "operator",
  [anon_sym_LT] = "operator",
  [anon_sym_LT_EQ] = "operator",
  [anon_sym_GT_EQ] = "operator",
  [aux_sym_digit_token1] = "digit_token1",
  [anon_sym_DASH] = "min_max",
  [aux_sym_text_token1] = "text_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [sym_decimal] = "decimal",
  [anon_sym_x] = "x",
  [aux_sym_hexidecimal_token1] = "hexidecimal_token1",
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
  [anon_sym_STAR] = "*",
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
  [sym_direction] = "direction",
  [sym_options] = "options",
  [sym__opt] = "_opt",
  [sym_digit] = "digit",
  [sym_text] = "other",
  [sym_string] = "string",
  [sym_hexidecimal] = "hexidecimal",
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
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_LT_GT] = anon_sym_LT_GT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT] = anon_sym_GT,
  [anon_sym_LT_EQ] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT,
  [aux_sym_digit_token1] = aux_sym_digit_token1,
  [anon_sym_DASH] = anon_sym_DASH,
  [aux_sym_text_token1] = aux_sym_text_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [sym_decimal] = sym_decimal,
  [anon_sym_x] = anon_sym_x,
  [aux_sym_hexidecimal_token1] = aux_sym_hexidecimal_token1,
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
  [anon_sym_STAR] = anon_sym_STAR,
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
  [sym_direction] = sym_direction,
  [sym_options] = sym_options,
  [sym__opt] = sym__opt,
  [sym_digit] = sym_digit,
  [sym_text] = sym_text,
  [sym_string] = sym_string,
  [sym_hexidecimal] = sym_hexidecimal,
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
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_digit_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = true,
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
  [anon_sym_STAR] = {
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
};

static const uint16_t ts_non_terminal_alias_map[] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(907);
      if (lookahead == '!') ADVANCE(949);
      if (lookahead == '"') ADVANCE(1814);
      if (lookahead == '#') ADVANCE(908);
      if (lookahead == '$') ADVANCE(950);
      if (lookahead == '(') ADVANCE(997);
      if (lookahead == ')') ADVANCE(998);
      if (lookahead == '*') ADVANCE(1844);
      if (lookahead == ',') ADVANCE(947);
      if (lookahead == '-') ADVANCE(1012);
      if (lookahead == '/') ADVANCE(901);
      if (lookahead == '2') ADVANCE(955);
      if (lookahead == ':') ADVANCE(993);
      if (lookahead == ';') ADVANCE(994);
      if (lookahead == '<') ADVANCE(1002);
      if (lookahead == '>') ADVANCE(999);
      if (lookahead == 'A') ADVANCE(962);
      if (lookahead == 'B') ADVANCE(966);
      if (lookahead == 'C') ADVANCE(961);
      if (lookahead == 'D') ADVANCE(963);
      if (lookahead == 'I') ADVANCE(73);
      if (lookahead == 'O') ADVANCE(88);
      if (lookahead == 'P') ADVANCE(63);
      if (lookahead == 'R') ADVANCE(44);
      if (lookahead == 'S') ADVANCE(106);
      if (lookahead == 'U') ADVANCE(74);
      if (lookahead == '[') ADVANCE(946);
      if (lookahead == ']') ADVANCE(948);
      if (lookahead == 'a') ADVANCE(968);
      if (lookahead == 'b') ADVANCE(977);
      if (lookahead == 'c') ADVANCE(971);
      if (lookahead == 'd') ADVANCE(969);
      if (lookahead == 'e') ADVANCE(975);
      if (lookahead == 'f') ADVANCE(967);
      if (lookahead == 'g') ADVANCE(319);
      if (lookahead == 'h') ADVANCE(164);
      if (lookahead == 'i') ADVANCE(226);
      if (lookahead == 'k') ADVANCE(673);
      if (lookahead == 'l') ADVANCE(446);
      if (lookahead == 'm') ADVANCE(321);
      if (lookahead == 'n') ADVANCE(323);
      if (lookahead == 'o') ADVANCE(213);
      if (lookahead == 'p') ADVANCE(165);
      if (lookahead == 'r') ADVANCE(272);
      if (lookahead == 's') ADVANCE(159);
      if (lookahead == 't') ADVANCE(237);
      if (lookahead == 'u') ADVANCE(278);
      if (lookahead == 'w') ADVANCE(172);
      if (lookahead == 'x') ADVANCE(1818);
      if (lookahead == 'y') ADVANCE(326);
      if (lookahead == 'E' ||
          lookahead == 'F') ADVANCE(985);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(957);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '!') ADVANCE(949);
      if (lookahead == '"') ADVANCE(1814);
      if (lookahead == '*') ADVANCE(1845);
      if (lookahead == '2') ADVANCE(1106);
      if (lookahead == '<') ADVANCE(1003);
      if (lookahead == '>') ADVANCE(1000);
      if (lookahead == 'A') ADVANCE(1030);
      if (lookahead == 'B') ADVANCE(1105);
      if (lookahead == 'C') ADVANCE(1023);
      if (lookahead == 'D') ADVANCE(1056);
      if (lookahead == 'I') ADVANCE(1070);
      if (lookahead == 'O') ADVANCE(1085);
      if (lookahead == 'P') ADVANCE(1061);
      if (lookahead == 'R') ADVANCE(1041);
      if (lookahead == 'S') ADVANCE(1103);
      if (lookahead == 'U') ADVANCE(1071);
      if (lookahead == 'a') ADVANCE(1203);
      if (lookahead == 'b') ADVANCE(1558);
      if (lookahead == 'c') ADVANCE(1450);
      if (lookahead == 'd') ADVANCE(1257);
      if (lookahead == 'e') ADVANCE(1519);
      if (lookahead == 'f') ADVANCE(1163);
      if (lookahead == 'g') ADVANCE(1293);
      if (lookahead == 'h') ADVANCE(1161);
      if (lookahead == 'i') ADVANCE(1496);
      if (lookahead == 'l') ADVANCE(1406);
      if (lookahead == 'm') ADVANCE(1290);
      if (lookahead == 'n') ADVANCE(1292);
      if (lookahead == 'o') ADVANCE(1204);
      if (lookahead == 'p') ADVANCE(1162);
      if (lookahead == 'r') ADVANCE(1258);
      if (lookahead == 's') ADVANCE(1157);
      if (lookahead == 't') ADVANCE(1397);
      if (lookahead == 'u') ADVANCE(1512);
      if (lookahead == 'w') ADVANCE(1167);
      if (lookahead == 'x') ADVANCE(1819);
      if (lookahead == 'y') ADVANCE(1291);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1013);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1811);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == ')') ADVANCE(998);
      if (lookahead == ',') ADVANCE(947);
      if (lookahead == ':') ADVANCE(993);
      if (lookahead == ';') ADVANCE(994);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1810);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(') ADVANCE(1813);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '"') ADVANCE(1814);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1815);
      if (lookahead != 0) ADVANCE(1816);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(949);
      if (lookahead == '"') ADVANCE(1814);
      if (lookahead == '*') ADVANCE(1844);
      if (lookahead == '2') ADVANCE(1008);
      if (lookahead == '<') ADVANCE(1001);
      if (lookahead == '>') ADVANCE(999);
      if (lookahead == 'A') ADVANCE(40);
      if (lookahead == 'B') ADVANCE(108);
      if (lookahead == 'C') ADVANCE(29);
      if (lookahead == 'D') ADVANCE(59);
      if (lookahead == 'I') ADVANCE(73);
      if (lookahead == 'O') ADVANCE(88);
      if (lookahead == 'P') ADVANCE(63);
      if (lookahead == 'R') ADVANCE(44);
      if (lookahead == 'S') ADVANCE(106);
      if (lookahead == 'U') ADVANCE(74);
      if (lookahead == 'a') ADVANCE(222);
      if (lookahead == 'b') ADVANCE(623);
      if (lookahead == 'c') ADVANCE(493);
      if (lookahead == 'd') ADVANCE(317);
      if (lookahead == 'e') ADVANCE(599);
      if (lookahead == 'f') ADVANCE(186);
      if (lookahead == 'g') ADVANCE(319);
      if (lookahead == 'h') ADVANCE(163);
      if (lookahead == 'i') ADVANCE(545);
      if (lookahead == 'l') ADVANCE(446);
      if (lookahead == 'm') ADVANCE(320);
      if (lookahead == 'n') ADVANCE(324);
      if (lookahead == 'o') ADVANCE(213);
      if (lookahead == 'p') ADVANCE(193);
      if (lookahead == 'r') ADVANCE(318);
      if (lookahead == 's') ADVANCE(160);
      if (lookahead == 't') ADVANCE(437);
      if (lookahead == 'u') ADVANCE(558);
      if (lookahead == 'w') ADVANCE(172);
      if (lookahead == 'x') ADVANCE(1818);
      if (lookahead == 'y') ADVANCE(326);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1009);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(949);
      if (lookahead == '$') ADVANCE(950);
      if (lookahead == ',') ADVANCE(947);
      if (lookahead == '-') ADVANCE(1011);
      if (lookahead == ';') ADVANCE(994);
      if (lookahead == '[') ADVANCE(946);
      if (lookahead == ']') ADVANCE(948);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(957);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(985);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(949);
      if (lookahead == ',') ADVANCE(947);
      if (lookahead == '/') ADVANCE(901);
      if (lookahead == '[') ADVANCE(946);
      if (lookahead == ']') ADVANCE(948);
      if (lookahead == 'a') ADVANCE(974);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(981);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(985);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(1814);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == ')') ADVANCE(998);
      if (lookahead == ',') ADVANCE(947);
      if (lookahead == ':') ADVANCE(993);
      if (lookahead == ';') ADVANCE(994);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(15);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(902);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(903);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(905);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(411);
      END_STATE();
    case 14:
      if (lookahead == '/') ADVANCE(822);
      END_STATE();
    case 15:
      if (lookahead == '0') ADVANCE(1896);
      if (lookahead == '1') ADVANCE(1898);
      if (lookahead == '2') ADVANCE(1900);
      if (lookahead == '3') ADVANCE(1902);
      END_STATE();
    case 16:
      if (lookahead == '1') ADVANCE(2020);
      if (lookahead == '2') ADVANCE(2018);
      END_STATE();
    case 17:
      if (lookahead == '1') ADVANCE(9);
      END_STATE();
    case 18:
      if (lookahead == '1') ADVANCE(132);
      if (lookahead == '2') ADVANCE(156);
      if (lookahead == '3') ADVANCE(157);
      END_STATE();
    case 19:
      if (lookahead == '2') ADVANCE(936);
      END_STATE();
    case 20:
      if (lookahead == '2') ADVANCE(1892);
      if (lookahead == '3') ADVANCE(1894);
      END_STATE();
    case 21:
      if (lookahead == '3') ADVANCE(933);
      END_STATE();
    case 22:
      if (lookahead == '5') ADVANCE(937);
      END_STATE();
    case 23:
      if (lookahead == '>') ADVANCE(995);
      END_STATE();
    case 24:
      if (lookahead == '>') ADVANCE(996);
      END_STATE();
    case 25:
      if (lookahead == 'A') ADVANCE(96);
      END_STATE();
    case 26:
      if (lookahead == 'A') ADVANCE(34);
      if (lookahead == 'C') ADVANCE(83);
      if (lookahead == 'L') ADVANCE(65);
      if (lookahead == 'R') ADVANCE(47);
      END_STATE();
    case 27:
      if (lookahead == 'A') ADVANCE(37);
      if (lookahead == 'S') ADVANCE(36);
      END_STATE();
    case 28:
      if (lookahead == 'A') ADVANCE(39);
      if (lookahead == 'E') ADVANCE(41);
      END_STATE();
    case 29:
      if (lookahead == 'A') ADVANCE(75);
      if (lookahead == 'O') ADVANCE(78);
      END_STATE();
    case 30:
      if (lookahead == 'B') ADVANCE(26);
      END_STATE();
    case 31:
      if (lookahead == 'B') ADVANCE(27);
      END_STATE();
    case 32:
      if (lookahead == 'B') ADVANCE(50);
      END_STATE();
    case 33:
      if (lookahead == 'C') ADVANCE(85);
      END_STATE();
    case 34:
      if (lookahead == 'C') ADVANCE(68);
      END_STATE();
    case 35:
      if (lookahead == 'C') ADVANCE(2046);
      if (lookahead == 'L') ADVANCE(2048);
      END_STATE();
    case 36:
      if (lookahead == 'C') ADVANCE(92);
      END_STATE();
    case 37:
      if (lookahead == 'C') ADVANCE(69);
      END_STATE();
    case 38:
      if (lookahead == 'C') ADVANCE(46);
      END_STATE();
    case 39:
      if (lookahead == 'C') ADVANCE(70);
      END_STATE();
    case 40:
      if (lookahead == 'C') ADVANCE(67);
      if (lookahead == 'U') ADVANCE(99);
      END_STATE();
    case 41:
      if (lookahead == 'C') ADVANCE(100);
      END_STATE();
    case 42:
      if (lookahead == 'C') ADVANCE(101);
      END_STATE();
    case 43:
      if (lookahead == 'D') ADVANCE(2064);
      END_STATE();
    case 44:
      if (lookahead == 'E') ADVANCE(55);
      END_STATE();
    case 45:
      if (lookahead == 'E') ADVANCE(2028);
      END_STATE();
    case 46:
      if (lookahead == 'E') ADVANCE(71);
      END_STATE();
    case 47:
      if (lookahead == 'E') ADVANCE(35);
      END_STATE();
    case 48:
      if (lookahead == 'E') ADVANCE(2026);
      END_STATE();
    case 49:
      if (lookahead == 'E') ADVANCE(89);
      END_STATE();
    case 50:
      if (lookahead == 'E') ADVANCE(2052);
      END_STATE();
    case 51:
      if (lookahead == 'E') ADVANCE(43);
      END_STATE();
    case 52:
      if (lookahead == 'E') ADVANCE(90);
      END_STATE();
    case 53:
      if (lookahead == 'E') ADVANCE(42);
      END_STATE();
    case 54:
      if (lookahead == 'G') ADVANCE(91);
      END_STATE();
    case 55:
      if (lookahead == 'G') ADVANCE(60);
      END_STATE();
    case 56:
      if (lookahead == 'G') ADVANCE(82);
      END_STATE();
    case 57:
      if (lookahead == 'H') ADVANCE(2062);
      END_STATE();
    case 58:
      if (lookahead == 'H') ADVANCE(2042);
      END_STATE();
    case 59:
      if (lookahead == 'I') ADVANCE(95);
      END_STATE();
    case 60:
      if (lookahead == 'I') ADVANCE(98);
      END_STATE();
    case 61:
      if (lookahead == 'I') ADVANCE(32);
      END_STATE();
    case 62:
      if (lookahead == 'I') ADVANCE(56);
      END_STATE();
    case 63:
      if (lookahead == 'I') ADVANCE(77);
      if (lookahead == 'U') ADVANCE(30);
      END_STATE();
    case 64:
      if (lookahead == 'I') ADVANCE(104);
      END_STATE();
    case 65:
      if (lookahead == 'I') ADVANCE(94);
      END_STATE();
    case 66:
      if (lookahead == 'I') ADVANCE(84);
      END_STATE();
    case 67:
      if (lookahead == 'K') ADVANCE(2034);
      END_STATE();
    case 68:
      if (lookahead == 'K') ADVANCE(2044);
      END_STATE();
    case 69:
      if (lookahead == 'K') ADVANCE(2054);
      END_STATE();
    case 70:
      if (lookahead == 'K') ADVANCE(2040);
      END_STATE();
    case 71:
      if (lookahead == 'L') ADVANCE(2032);
      END_STATE();
    case 72:
      if (lookahead == 'M') ADVANCE(86);
      END_STATE();
    case 73:
      if (lookahead == 'N') ADVANCE(107);
      END_STATE();
    case 74:
      if (lookahead == 'N') ADVANCE(25);
      END_STATE();
    case 75:
      if (lookahead == 'N') ADVANCE(38);
      END_STATE();
    case 76:
      if (lookahead == 'N') ADVANCE(28);
      END_STATE();
    case 77:
      if (lookahead == 'N') ADVANCE(54);
      END_STATE();
    case 78:
      if (lookahead == 'N') ADVANCE(76);
      END_STATE();
    case 79:
      if (lookahead == 'N') ADVANCE(93);
      END_STATE();
    case 80:
      if (lookahead == 'N') ADVANCE(81);
      END_STATE();
    case 81:
      if (lookahead == 'N') ADVANCE(53);
      END_STATE();
    case 82:
      if (lookahead == 'N') ADVANCE(51);
      END_STATE();
    case 83:
      if (lookahead == 'O') ADVANCE(72);
      END_STATE();
    case 84:
      if (lookahead == 'O') ADVANCE(79);
      END_STATE();
    case 85:
      if (lookahead == 'O') ADVANCE(80);
      END_STATE();
    case 86:
      if (lookahead == 'P') ADVANCE(2050);
      END_STATE();
    case 87:
      if (lookahead == 'P') ADVANCE(2058);
      END_STATE();
    case 88:
      if (lookahead == 'P') ADVANCE(103);
      END_STATE();
    case 89:
      if (lookahead == 'Q') ADVANCE(2056);
      if (lookahead == 'S') ADVANCE(87);
      END_STATE();
    case 90:
      if (lookahead == 'R') ADVANCE(2030);
      END_STATE();
    case 91:
      if (lookahead == 'R') ADVANCE(49);
      END_STATE();
    case 92:
      if (lookahead == 'R') ADVANCE(61);
      END_STATE();
    case 93:
      if (lookahead == 'S') ADVANCE(2036);
      END_STATE();
    case 94:
      if (lookahead == 'S') ADVANCE(58);
      END_STATE();
    case 95:
      if (lookahead == 'S') ADVANCE(33);
      END_STATE();
    case 96:
      if (lookahead == 'S') ADVANCE(97);
      END_STATE();
    case 97:
      if (lookahead == 'S') ADVANCE(62);
      END_STATE();
    case 98:
      if (lookahead == 'S') ADVANCE(105);
      END_STATE();
    case 99:
      if (lookahead == 'T') ADVANCE(57);
      END_STATE();
    case 100:
      if (lookahead == 'T') ADVANCE(2038);
      END_STATE();
    case 101:
      if (lookahead == 'T') ADVANCE(2060);
      END_STATE();
    case 102:
      if (lookahead == 'T') ADVANCE(45);
      END_STATE();
    case 103:
      if (lookahead == 'T') ADVANCE(66);
      END_STATE();
    case 104:
      if (lookahead == 'T') ADVANCE(48);
      END_STATE();
    case 105:
      if (lookahead == 'T') ADVANCE(52);
      END_STATE();
    case 106:
      if (lookahead == 'U') ADVANCE(31);
      END_STATE();
    case 107:
      if (lookahead == 'V') ADVANCE(64);
      END_STATE();
    case 108:
      if (lookahead == 'Y') ADVANCE(102);
      END_STATE();
    case 109:
      if (lookahead == '_') ADVANCE(219);
      END_STATE();
    case 110:
      if (lookahead == '_') ADVANCE(241);
      if (lookahead == 'g') ADVANCE(430);
      END_STATE();
    case 111:
      if (lookahead == '_') ADVANCE(18);
      END_STATE();
    case 112:
      if (lookahead == '_') ADVANCE(439);
      END_STATE();
    case 113:
      if (lookahead == '_') ADVANCE(16);
      END_STATE();
    case 114:
      if (lookahead == '_') ADVANCE(202);
      END_STATE();
    case 115:
      if (lookahead == '_') ADVANCE(384);
      END_STATE();
    case 116:
      if (lookahead == '_') ADVANCE(209);
      END_STATE();
    case 117:
      if (lookahead == '_') ADVANCE(732);
      END_STATE();
    case 118:
      if (lookahead == '_') ADVANCE(444);
      END_STATE();
    case 119:
      if (lookahead == '_') ADVANCE(417);
      END_STATE();
    case 120:
      if (lookahead == '_') ADVANCE(858);
      END_STATE();
    case 121:
      if (lookahead == '_') ADVANCE(218);
      END_STATE();
    case 122:
      if (lookahead == '_') ADVANCE(549);
      END_STATE();
    case 123:
      if (lookahead == '_') ADVANCE(757);
      END_STATE();
    case 124:
      if (lookahead == '_') ADVANCE(777);
      END_STATE();
    case 125:
      if (lookahead == '_') ADVANCE(246);
      END_STATE();
    case 126:
      if (lookahead == '_') ADVANCE(239);
      END_STATE();
    case 127:
      if (lookahead == '_') ADVANCE(262);
      END_STATE();
    case 128:
      if (lookahead == '_') ADVANCE(635);
      END_STATE();
    case 129:
      if (lookahead == '_') ADVANCE(781);
      END_STATE();
    case 130:
      if (lookahead == '_') ADVANCE(773);
      END_STATE();
    case 131:
      if (lookahead == '_') ADVANCE(299);
      END_STATE();
    case 132:
      if (lookahead == '_') ADVANCE(373);
      END_STATE();
    case 133:
      if (lookahead == '_') ADVANCE(380);
      END_STATE();
    case 134:
      if (lookahead == '_') ADVANCE(620);
      END_STATE();
    case 135:
      if (lookahead == '_') ADVANCE(412);
      END_STATE();
    case 136:
      if (lookahead == '_') ADVANCE(860);
      END_STATE();
    case 137:
      if (lookahead == '_') ADVANCE(820);
      END_STATE();
    case 138:
      if (lookahead == '_') ADVANCE(189);
      END_STATE();
    case 139:
      if (lookahead == '_') ADVANCE(460);
      END_STATE();
    case 140:
      if (lookahead == '_') ADVANCE(244);
      END_STATE();
    case 141:
      if (lookahead == '_') ADVANCE(376);
      END_STATE();
    case 142:
      if (lookahead == '_') ADVANCE(195);
      END_STATE();
    case 143:
      if (lookahead == '_') ADVANCE(245);
      END_STATE();
    case 144:
      if (lookahead == '_') ADVANCE(247);
      END_STATE();
    case 145:
      if (lookahead == '_') ADVANCE(728);
      END_STATE();
    case 146:
      if (lookahead == '_') ADVANCE(420);
      END_STATE();
    case 147:
      if (lookahead == '_') ADVANCE(847);
      END_STATE();
    case 148:
      if (lookahead == '_') ADVANCE(724);
      END_STATE();
    case 149:
      if (lookahead == '_') ADVANCE(421);
      END_STATE();
    case 150:
      if (lookahead == '_') ADVANCE(849);
      END_STATE();
    case 151:
      if (lookahead == '_') ADVANCE(422);
      END_STATE();
    case 152:
      if (lookahead == '_') ADVANCE(423);
      END_STATE();
    case 153:
      if (lookahead == '_') ADVANCE(257);
      END_STATE();
    case 154:
      if (lookahead == '_') ADVANCE(730);
      END_STATE();
    case 155:
      if (lookahead == '_') ADVANCE(261);
      END_STATE();
    case 156:
      if (lookahead == '_') ADVANCE(400);
      END_STATE();
    case 157:
      if (lookahead == '_') ADVANCE(402);
      END_STATE();
    case 158:
      if (lookahead == '_') ADVANCE(869);
      END_STATE();
    case 159:
      if (lookahead == 'a') ADVANCE(811);
      if (lookahead == 'e') ADVANCE(228);
      if (lookahead == 'i') ADVANCE(643);
      if (lookahead == 'm') ADVANCE(216);
      if (lookahead == 'n') ADVANCE(547);
      if (lookahead == 'r') ADVANCE(229);
      if (lookahead == 's') ADVANCE(433);
      if (lookahead == 't') ADVANCE(161);
      END_STATE();
    case 160:
      if (lookahead == 'a') ADVANCE(811);
      if (lookahead == 'e') ADVANCE(228);
      if (lookahead == 'r') ADVANCE(229);
      if (lookahead == 's') ADVANCE(504);
      if (lookahead == 't') ADVANCE(161);
      END_STATE();
    case 161:
      if (lookahead == 'a') ADVANCE(719);
      if (lookahead == 'o') ADVANCE(656);
      END_STATE();
    case 162:
      if (lookahead == 'a') ADVANCE(1946);
      END_STATE();
    case 163:
      if (lookahead == 'a') ADVANCE(750);
      END_STATE();
    case 164:
      if (lookahead == 'a') ADVANCE(750);
      if (lookahead == 't') ADVANCE(818);
      END_STATE();
    case 165:
      if (lookahead == 'a') ADVANCE(687);
      END_STATE();
    case 166:
      if (lookahead == 'a') ADVANCE(583);
      END_STATE();
    case 167:
      if (lookahead == 'a') ADVANCE(894);
      if (lookahead == 'e') ADVANCE(855);
      END_STATE();
    case 168:
      if (lookahead == 'a') ADVANCE(221);
      END_STATE();
    case 169:
      if (lookahead == 'a') ADVANCE(221);
      if (lookahead == 'i') ADVANCE(648);
      END_STATE();
    case 170:
      if (lookahead == 'a') ADVANCE(263);
      if (lookahead == 'c') ADVANCE(180);
      END_STATE();
    case 171:
      if (lookahead == 'a') ADVANCE(424);
      END_STATE();
    case 172:
      if (lookahead == 'a') ADVANCE(717);
      if (lookahead == 'i') ADVANCE(505);
      if (lookahead == 'r') ADVANCE(453);
      END_STATE();
    case 173:
      if (lookahead == 'a') ADVANCE(264);
      if (lookahead == 'c') ADVANCE(616);
      if (lookahead == 'j') ADVANCE(332);
      if (lookahead == 'q') ADVANCE(868);
      if (lookahead == 's') ADVANCE(337);
      if (lookahead == 't') ADVANCE(182);
      END_STATE();
    case 174:
      if (lookahead == 'a') ADVANCE(264);
      if (lookahead == 'c') ADVANCE(616);
      if (lookahead == 'q') ADVANCE(868);
      if (lookahead == 's') ADVANCE(337);
      if (lookahead == 't') ADVANCE(182);
      END_STATE();
    case 175:
      if (lookahead == 'a') ADVANCE(425);
      END_STATE();
    case 176:
      if (lookahead == 'a') ADVANCE(554);
      END_STATE();
    case 177:
      if (lookahead == 'a') ADVANCE(220);
      END_STATE();
    case 178:
      if (lookahead == 'a') ADVANCE(231);
      if (lookahead == 'u') ADVANCE(291);
      END_STATE();
    case 179:
      if (lookahead == 'a') ADVANCE(755);
      if (lookahead == 'e') ADVANCE(166);
      if (lookahead == 'i') ADVANCE(394);
      if (lookahead == 'o') ADVANCE(760);
      END_STATE();
    case 180:
      if (lookahead == 'a') ADVANCE(511);
      END_STATE();
    case 181:
      if (lookahead == 'a') ADVANCE(541);
      END_STATE();
    case 182:
      if (lookahead == 'a') ADVANCE(456);
      if (lookahead == 'r') ADVANCE(2022);
      END_STATE();
    case 183:
      if (lookahead == 'a') ADVANCE(542);
      END_STATE();
    case 184:
      if (lookahead == 'a') ADVANCE(651);
      END_STATE();
    case 185:
      if (lookahead == 'a') ADVANCE(651);
      if (lookahead == 'm') ADVANCE(372);
      END_STATE();
    case 186:
      if (lookahead == 'a') ADVANCE(530);
      if (lookahead == 'i') ADVANCE(508);
      if (lookahead == 'r') ADVANCE(335);
      END_STATE();
    case 187:
      if (lookahead == 'a') ADVANCE(753);
      END_STATE();
    case 188:
      if (lookahead == 'a') ADVANCE(655);
      END_STATE();
    case 189:
      if (lookahead == 'a') ADVANCE(664);
      END_STATE();
    case 190:
      if (lookahead == 'a') ADVANCE(794);
      END_STATE();
    case 191:
      if (lookahead == 'a') ADVANCE(678);
      END_STATE();
    case 192:
      if (lookahead == 'a') ADVANCE(828);
      END_STATE();
    case 193:
      if (lookahead == 'a') ADVANCE(688);
      END_STATE();
    case 194:
      if (lookahead == 'a') ADVANCE(550);
      END_STATE();
    case 195:
      if (lookahead == 'a') ADVANCE(665);
      END_STATE();
    case 196:
      if (lookahead == 'a') ADVANCE(823);
      END_STATE();
    case 197:
      if (lookahead == 'a') ADVANCE(708);
      END_STATE();
    case 198:
      if (lookahead == 'a') ADVANCE(764);
      END_STATE();
    case 199:
      if (lookahead == 'a') ADVANCE(835);
      END_STATE();
    case 200:
      if (lookahead == 'a') ADVANCE(533);
      END_STATE();
    case 201:
      if (lookahead == 'a') ADVANCE(462);
      END_STATE();
    case 202:
      if (lookahead == 'a') ADVANCE(666);
      if (lookahead == 'd') ADVANCE(192);
      END_STATE();
    case 203:
      if (lookahead == 'a') ADVANCE(281);
      END_STATE();
    case 204:
      if (lookahead == 'a') ADVANCE(709);
      END_STATE();
    case 205:
      if (lookahead == 'a') ADVANCE(769);
      END_STATE();
    case 206:
      if (lookahead == 'a') ADVANCE(836);
      END_STATE();
    case 207:
      if (lookahead == 'a') ADVANCE(710);
      END_STATE();
    case 208:
      if (lookahead == 'a') ADVANCE(837);
      END_STATE();
    case 209:
      if (lookahead == 'a') ADVANCE(851);
      if (lookahead == 'c') ADVANCE(525);
      END_STATE();
    case 210:
      if (lookahead == 'a') ADVANCE(838);
      END_STATE();
    case 211:
      if (lookahead == 'a') ADVANCE(224);
      END_STATE();
    case 212:
      if (lookahead == 'a') ADVANCE(225);
      END_STATE();
    case 213:
      if (lookahead == 'b') ADVANCE(489);
      if (lookahead == 'n') ADVANCE(501);
      if (lookahead == 'p') ADVANCE(287);
      END_STATE();
    case 214:
      if (lookahead == 'b') ADVANCE(22);
      END_STATE();
    case 215:
      if (lookahead == 'b') ADVANCE(940);
      END_STATE();
    case 216:
      if (lookahead == 'b') ADVANCE(926);
      if (lookahead == 't') ADVANCE(652);
      END_STATE();
    case 217:
      if (lookahead == 'b') ADVANCE(859);
      END_STATE();
    case 218:
      if (lookahead == 'b') ADVANCE(857);
      END_STATE();
    case 219:
      if (lookahead == 'b') ADVANCE(627);
      if (lookahead == 'd') ADVANCE(758);
      if (lookahead == 'r') ADVANCE(866);
      if (lookahead == 's') ADVANCE(694);
      END_STATE();
    case 220:
      if (lookahead == 'b') ADVANCE(510);
      END_STATE();
    case 221:
      if (lookahead == 'b') ADVANCE(517);
      END_STATE();
    case 222:
      if (lookahead == 'b') ADVANCE(608);
      if (lookahead == 'c') ADVANCE(806);
      if (lookahead == 'l') ADVANCE(502);
      if (lookahead == 'n') ADVANCE(890);
      if (lookahead == 's') ADVANCE(749);
      if (lookahead == 'u') ADVANCE(783);
      END_STATE();
    case 223:
      if (lookahead == 'b') ADVANCE(527);
      END_STATE();
    case 224:
      if (lookahead == 'b') ADVANCE(537);
      END_STATE();
    case 225:
      if (lookahead == 'b') ADVANCE(539);
      END_STATE();
    case 226:
      if (lookahead == 'c') ADVANCE(546);
      if (lookahead == 'k') ADVANCE(286);
      if (lookahead == 'm') ADVANCE(185);
      if (lookahead == 'n') ADVANCE(449);
      if (lookahead == 'p') ADVANCE(922);
      if (lookahead == 's') ADVANCE(565);
      END_STATE();
    case 227:
      if (lookahead == 'c') ADVANCE(546);
      if (lookahead == 'k') ADVANCE(286);
      if (lookahead == 'm') ADVANCE(184);
      if (lookahead == 'p') ADVANCE(922);
      END_STATE();
    case 228:
      if (lookahead == 'c') ADVANCE(1832);
      if (lookahead == 'l') ADVANCE(367);
      if (lookahead == 'r') ADVANCE(872);
      if (lookahead == 't') ADVANCE(1846);
      END_STATE();
    case 229:
      if (lookahead == 'c') ADVANCE(2108);
      END_STATE();
    case 230:
      if (lookahead == 'c') ADVANCE(1834);
      END_STATE();
    case 231:
      if (lookahead == 'c') ADVANCE(490);
      END_STATE();
    case 232:
      if (lookahead == 'c') ADVANCE(2096);
      END_STATE();
    case 233:
      if (lookahead == 'c') ADVANCE(928);
      END_STATE();
    case 234:
      if (lookahead == 'c') ADVANCE(916);
      END_STATE();
    case 235:
      if (lookahead == 'c') ADVANCE(628);
      END_STATE();
    case 236:
      if (lookahead == 'c') ADVANCE(628);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1817);
      END_STATE();
    case 237:
      if (lookahead == 'c') ADVANCE(644);
      if (lookahead == 'f') ADVANCE(827);
      if (lookahead == 'h') ADVANCE(714);
      if (lookahead == 'l') ADVANCE(736);
      if (lookahead == 'o') ADVANCE(110);
      if (lookahead == 'r') ADVANCE(178);
      if (lookahead == 's') ADVANCE(1830);
      if (lookahead == 'x') ADVANCE(1888);
      if (lookahead == 'y') ADVANCE(661);
      END_STATE();
    case 238:
      if (lookahead == 'c') ADVANCE(644);
      if (lookahead == 'f') ADVANCE(827);
      if (lookahead == 'l') ADVANCE(736);
      END_STATE();
    case 239:
      if (lookahead == 'c') ADVANCE(862);
      END_STATE();
    case 240:
      if (lookahead == 'c') ADVANCE(188);
      END_STATE();
    case 241:
      if (lookahead == 'c') ADVANCE(509);
      if (lookahead == 's') ADVANCE(369);
      END_STATE();
    case 242:
      if (lookahead == 'c') ADVANCE(646);
      END_STATE();
    case 243:
      if (lookahead == 'c') ADVANCE(864);
      END_STATE();
    case 244:
      if (lookahead == 'c') ADVANCE(631);
      END_STATE();
    case 245:
      if (lookahead == 'c') ADVANCE(625);
      END_STATE();
    case 246:
      if (lookahead == 'c') ADVANCE(513);
      END_STATE();
    case 247:
      if (lookahead == 'c') ADVANCE(614);
      END_STATE();
    case 248:
      if (lookahead == 'c') ADVANCE(791);
      END_STATE();
    case 249:
      if (lookahead == 'c') ADVANCE(792);
      END_STATE();
    case 250:
      if (lookahead == 'c') ADVANCE(346);
      END_STATE();
    case 251:
      if (lookahead == 'c') ADVANCE(615);
      END_STATE();
    case 252:
      if (lookahead == 'c') ADVANCE(464);
      END_STATE();
    case 253:
      if (lookahead == 'c') ADVANCE(477);
      END_STATE();
    case 254:
      if (lookahead == 'c') ADVANCE(829);
      END_STATE();
    case 255:
      if (lookahead == 'c') ADVANCE(842);
      END_STATE();
    case 256:
      if (lookahead == 'c') ADVANCE(360);
      if (lookahead == 'h') ADVANCE(242);
      if (lookahead == 'n') ADVANCE(638);
      if (lookahead == 'r') ADVANCE(612);
      END_STATE();
    case 257:
      if (lookahead == 'c') ADVANCE(634);
      END_STATE();
    case 258:
      if (lookahead == 'c') ADVANCE(479);
      END_STATE();
    case 259:
      if (lookahead == 'c') ADVANCE(208);
      END_STATE();
    case 260:
      if (lookahead == 'c') ADVANCE(144);
      END_STATE();
    case 261:
      if (lookahead == 'c') ADVANCE(536);
      if (lookahead == 's') ADVANCE(399);
      END_STATE();
    case 262:
      if (lookahead == 'c') ADVANCE(538);
      END_STATE();
    case 263:
      if (lookahead == 'd') ADVANCE(2112);
      END_STATE();
    case 264:
      if (lookahead == 'd') ADVANCE(1918);
      END_STATE();
    case 265:
      if (lookahead == 'd') ADVANCE(1840);
      END_STATE();
    case 266:
      if (lookahead == 'd') ADVANCE(2080);
      END_STATE();
    case 267:
      if (lookahead == 'd') ADVANCE(2090);
      END_STATE();
    case 268:
      if (lookahead == 'd') ADVANCE(1866);
      END_STATE();
    case 269:
      if (lookahead == 'd') ADVANCE(1868);
      END_STATE();
    case 270:
      if (lookahead == 'd') ADVANCE(1956);
      END_STATE();
    case 271:
      if (lookahead == 'd') ADVANCE(1958);
      END_STATE();
    case 272:
      if (lookahead == 'd') ADVANCE(642);
      if (lookahead == 'e') ADVANCE(173);
      if (lookahead == 'f') ADVANCE(215);
      if (lookahead == 'r') ADVANCE(1824);
      END_STATE();
    case 273:
      if (lookahead == 'd') ADVANCE(642);
      if (lookahead == 'e') ADVANCE(488);
      if (lookahead == 'f') ADVANCE(215);
      END_STATE();
    case 274:
      if (lookahead == 'd') ADVANCE(217);
      END_STATE();
    case 275:
      if (lookahead == 'd') ADVANCE(145);
      END_STATE();
    case 276:
      if (lookahead == 'd') ADVANCE(137);
      END_STATE();
    case 277:
      if (lookahead == 'd') ADVANCE(645);
      END_STATE();
    case 278:
      if (lookahead == 'd') ADVANCE(645);
      if (lookahead == 'n') ADVANCE(491);
      if (lookahead == 's') ADVANCE(331);
      END_STATE();
    case 279:
      if (lookahead == 'd') ADVANCE(119);
      END_STATE();
    case 280:
      if (lookahead == 'd') ADVANCE(740);
      END_STATE();
    case 281:
      if (lookahead == 'd') ADVANCE(131);
      END_STATE();
    case 282:
      if (lookahead == 'd') ADVANCE(126);
      END_STATE();
    case 283:
      if (lookahead == 'd') ADVANCE(113);
      END_STATE();
    case 284:
      if (lookahead == 'd') ADVANCE(381);
      END_STATE();
    case 285:
      if (lookahead == 'd') ADVANCE(148);
      END_STATE();
    case 286:
      if (lookahead == 'e') ADVANCE(870);
      END_STATE();
    case 287:
      if (lookahead == 'e') ADVANCE(596);
      END_STATE();
    case 288:
      if (lookahead == 'e') ADVANCE(1886);
      END_STATE();
    case 289:
      if (lookahead == 'e') ADVANCE(895);
      END_STATE();
    case 290:
      if (lookahead == 'e') ADVANCE(2117);
      END_STATE();
    case 291:
      if (lookahead == 'e') ADVANCE(2072);
      END_STATE();
    case 292:
      if (lookahead == 'e') ADVANCE(2088);
      END_STATE();
    case 293:
      if (lookahead == 'e') ADVANCE(2076);
      END_STATE();
    case 294:
      if (lookahead == 'e') ADVANCE(2115);
      END_STATE();
    case 295:
      if (lookahead == 'e') ADVANCE(1920);
      END_STATE();
    case 296:
      if (lookahead == 'e') ADVANCE(1850);
      END_STATE();
    case 297:
      if (lookahead == 'e') ADVANCE(2100);
      END_STATE();
    case 298:
      if (lookahead == 'e') ADVANCE(1924);
      END_STATE();
    case 299:
      if (lookahead == 'e') ADVANCE(889);
      END_STATE();
    case 300:
      if (lookahead == 'e') ADVANCE(2120);
      END_STATE();
    case 301:
      if (lookahead == 'e') ADVANCE(1984);
      END_STATE();
    case 302:
      if (lookahead == 'e') ADVANCE(2078);
      END_STATE();
    case 303:
      if (lookahead == 'e') ADVANCE(1998);
      END_STATE();
    case 304:
      if (lookahead == 'e') ADVANCE(1966);
      END_STATE();
    case 305:
      if (lookahead == 'e') ADVANCE(1976);
      END_STATE();
    case 306:
      if (lookahead == 'e') ADVANCE(1968);
      END_STATE();
    case 307:
      if (lookahead == 'e') ADVANCE(1970);
      END_STATE();
    case 308:
      if (lookahead == 'e') ADVANCE(1930);
      END_STATE();
    case 309:
      if (lookahead == 'e') ADVANCE(1962);
      END_STATE();
    case 310:
      if (lookahead == 'e') ADVANCE(2002);
      END_STATE();
    case 311:
      if (lookahead == 'e') ADVANCE(1926);
      END_STATE();
    case 312:
      if (lookahead == 'e') ADVANCE(1938);
      END_STATE();
    case 313:
      if (lookahead == 'e') ADVANCE(672);
      END_STATE();
    case 314:
      if (lookahead == 'e') ADVANCE(1974);
      END_STATE();
    case 315:
      if (lookahead == 'e') ADVANCE(1964);
      END_STATE();
    case 316:
      if (lookahead == 'e') ADVANCE(1986);
      END_STATE();
    case 317:
      if (lookahead == 'e') ADVANCE(494);
      if (lookahead == 'i') ADVANCE(692);
      if (lookahead == 's') ADVANCE(784);
      if (lookahead == 'u') ADVANCE(639);
      END_STATE();
    case 318:
      if (lookahead == 'e') ADVANCE(174);
      if (lookahead == 'r') ADVANCE(1824);
      END_STATE();
    case 319:
      if (lookahead == 'e') ADVANCE(809);
      END_STATE();
    case 320:
      if (lookahead == 'e') ADVANCE(543);
      END_STATE();
    case 321:
      if (lookahead == 'e') ADVANCE(543);
      if (lookahead == 'o') ADVANCE(274);
      END_STATE();
    case 322:
      if (lookahead == 'e') ADVANCE(230);
      if (lookahead == 't') ADVANCE(177);
      END_STATE();
    case 323:
      if (lookahead == 'e') ADVANCE(363);
      if (lookahead == 'f') ADVANCE(735);
      if (lookahead == 'o') ADVANCE(2074);
      if (lookahead == 't') ADVANCE(641);
      END_STATE();
    case 324:
      if (lookahead == 'e') ADVANCE(363);
      if (lookahead == 'o') ADVANCE(2074);
      END_STATE();
    case 325:
      if (lookahead == 'e') ADVANCE(893);
      END_STATE();
    case 326:
      if (lookahead == 'e') ADVANCE(737);
      END_STATE();
    case 327:
      if (lookahead == 'e') ADVANCE(690);
      END_STATE();
    case 328:
      if (lookahead == 'e') ADVANCE(690);
      if (lookahead == 'l') ADVANCE(123);
      if (lookahead == 'r') ADVANCE(329);
      END_STATE();
    case 329:
      if (lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 330:
      if (lookahead == 'e') ADVANCE(254);
      END_STATE();
    case 331:
      if (lookahead == 'e') ADVANCE(686);
      END_STATE();
    case 332:
      if (lookahead == 'e') ADVANCE(248);
      END_STATE();
    case 333:
      if (lookahead == 'e') ADVANCE(268);
      END_STATE();
    case 334:
      if (lookahead == 'e') ADVANCE(787);
      END_STATE();
    case 335:
      if (lookahead == 'e') ADVANCE(289);
      if (lookahead == 'o') ADVANCE(544);
      END_STATE();
    case 336:
      if (lookahead == 'e') ADVANCE(269);
      END_STATE();
    case 337:
      if (lookahead == 'e') ADVANCE(716);
      if (lookahead == 'p') ADVANCE(609);
      END_STATE();
    case 338:
      if (lookahead == 'e') ADVANCE(270);
      END_STATE();
    case 339:
      if (lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 340:
      if (lookahead == 'e') ADVANCE(789);
      if (lookahead == 'o') ADVANCE(529);
      END_STATE();
    case 341:
      if (lookahead == 'e') ADVANCE(271);
      END_STATE();
    case 342:
      if (lookahead == 'e') ADVANCE(702);
      END_STATE();
    case 343:
      if (lookahead == 'e') ADVANCE(774);
      END_STATE();
    case 344:
      if (lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 345:
      if (lookahead == 'e') ADVANCE(243);
      END_STATE();
    case 346:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 347:
      if (lookahead == 'e') ADVANCE(676);
      END_STATE();
    case 348:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 349:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 350:
      if (lookahead == 'e') ADVANCE(729);
      END_STATE();
    case 351:
      if (lookahead == 'e') ADVANCE(677);
      END_STATE();
    case 352:
      if (lookahead == 'e') ADVANCE(795);
      END_STATE();
    case 353:
      if (lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 354:
      if (lookahead == 'e') ADVANCE(821);
      END_STATE();
    case 355:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 356:
      if (lookahead == 'e') ADVANCE(768);
      END_STATE();
    case 357:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 358:
      if (lookahead == 'e') ADVANCE(715);
      END_STATE();
    case 359:
      if (lookahead == 'e') ADVANCE(685);
      END_STATE();
    case 360:
      if (lookahead == 'e') ADVANCE(699);
      END_STATE();
    case 361:
      if (lookahead == 'e') ADVANCE(584);
      END_STATE();
    case 362:
      if (lookahead == 'e') ADVANCE(751);
      END_STATE();
    case 363:
      if (lookahead == 'e') ADVANCE(276);
      END_STATE();
    case 364:
      if (lookahead == 'e') ADVANCE(512);
      END_STATE();
    case 365:
      if (lookahead == 'e') ADVANCE(700);
      END_STATE();
    case 366:
      if (lookahead == 'e') ADVANCE(762);
      END_STATE();
    case 367:
      if (lookahead == 'e') ADVANCE(249);
      END_STATE();
    case 368:
      if (lookahead == 'e') ADVANCE(379);
      END_STATE();
    case 369:
      if (lookahead == 'e') ADVANCE(725);
      END_STATE();
    case 370:
      if (lookahead == 'e') ADVANCE(721);
      END_STATE();
    case 371:
      if (lookahead == 'e') ADVANCE(573);
      END_STATE();
    case 372:
      if (lookahead == 'e') ADVANCE(279);
      END_STATE();
    case 373:
      if (lookahead == 'e') ADVANCE(879);
      END_STATE();
    case 374:
      if (lookahead == 'e') ADVANCE(531);
      END_STATE();
    case 375:
      if (lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 376:
      if (lookahead == 'e') ADVANCE(763);
      END_STATE();
    case 377:
      if (lookahead == 'e') ADVANCE(706);
      END_STATE();
    case 378:
      if (lookahead == 'e') ADVANCE(578);
      END_STATE();
    case 379:
      if (lookahead == 'e') ADVANCE(898);
      END_STATE();
    case 380:
      if (lookahead == 'e') ADVANCE(705);
      END_STATE();
    case 381:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 382:
      if (lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 383:
      if (lookahead == 'e') ADVANCE(765);
      END_STATE();
    case 384:
      if (lookahead == 'e') ADVANCE(707);
      if (lookahead == 'f') ADVANCE(481);
      if (lookahead == 'r') ADVANCE(313);
      END_STATE();
    case 385:
      if (lookahead == 'e') ADVANCE(844);
      END_STATE();
    case 386:
      if (lookahead == 'e') ADVANCE(766);
      END_STATE();
    case 387:
      if (lookahead == 'e') ADVANCE(580);
      END_STATE();
    case 388:
      if (lookahead == 'e') ADVANCE(283);
      END_STATE();
    case 389:
      if (lookahead == 'e') ADVANCE(587);
      END_STATE();
    case 390:
      if (lookahead == 'e') ADVANCE(591);
      END_STATE();
    case 391:
      if (lookahead == 'e') ADVANCE(595);
      END_STATE();
    case 392:
      if (lookahead == 'e') ADVANCE(582);
      END_STATE();
    case 393:
      if (lookahead == 'e') ADVANCE(255);
      END_STATE();
    case 394:
      if (lookahead == 'e') ADVANCE(593);
      END_STATE();
    case 395:
      if (lookahead == 'e') ADVANCE(779);
      END_STATE();
    case 396:
      if (lookahead == 'e') ADVANCE(598);
      END_STATE();
    case 397:
      if (lookahead == 'e') ADVANCE(780);
      END_STATE();
    case 398:
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 399:
      if (lookahead == 'e') ADVANCE(727);
      END_STATE();
    case 400:
      if (lookahead == 'e') ADVANCE(880);
      END_STATE();
    case 401:
      if (lookahead == 'e') ADVANCE(731);
      END_STATE();
    case 402:
      if (lookahead == 'e') ADVANCE(881);
      END_STATE();
    case 403:
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 404:
      if (lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 405:
      if (lookahead == 'e') ADVANCE(285);
      END_STATE();
    case 406:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 407:
      if (lookahead == 'f') ADVANCE(693);
      if (lookahead == 's') ADVANCE(819);
      END_STATE();
    case 408:
      if (lookahead == 'f') ADVANCE(735);
      if (lookahead == 't') ADVANCE(641);
      END_STATE();
    case 409:
      if (lookahead == 'f') ADVANCE(419);
      END_STATE();
    case 410:
      if (lookahead == 'f') ADVANCE(445);
      END_STATE();
    case 411:
      if (lookahead == 'f') ADVANCE(506);
      END_STATE();
    case 412:
      if (lookahead == 'f') ADVANCE(474);
      END_STATE();
    case 413:
      if (lookahead == 'f') ADVANCE(452);
      END_STATE();
    case 414:
      if (lookahead == 'f') ADVANCE(696);
      if (lookahead == 's') ADVANCE(852);
      END_STATE();
    case 415:
      if (lookahead == 'f') ADVANCE(454);
      END_STATE();
    case 416:
      if (lookahead == 'f') ADVANCE(604);
      END_STATE();
    case 417:
      if (lookahead == 'f') ADVANCE(711);
      END_STATE();
    case 418:
      if (lookahead == 'f') ADVANCE(518);
      END_STATE();
    case 419:
      if (lookahead == 'f') ADVANCE(377);
      END_STATE();
    case 420:
      if (lookahead == 'f') ADVANCE(475);
      END_STATE();
    case 421:
      if (lookahead == 'f') ADVANCE(476);
      END_STATE();
    case 422:
      if (lookahead == 'f') ADVANCE(478);
      END_STATE();
    case 423:
      if (lookahead == 'f') ADVANCE(480);
      END_STATE();
    case 424:
      if (lookahead == 'g') ADVANCE(1878);
      END_STATE();
    case 425:
      if (lookahead == 'g') ADVANCE(1876);
      END_STATE();
    case 426:
      if (lookahead == 'g') ADVANCE(1954);
      END_STATE();
    case 427:
      if (lookahead == 'g') ADVANCE(1978);
      END_STATE();
    case 428:
      if (lookahead == 'g') ADVANCE(2014);
      END_STATE();
    case 429:
      if (lookahead == 'g') ADVANCE(571);
      END_STATE();
    case 430:
      if (lookahead == 'g') ADVANCE(519);
      END_STATE();
    case 431:
      if (lookahead == 'g') ADVANCE(143);
      if (lookahead == 'r') ADVANCE(540);
      END_STATE();
    case 432:
      if (lookahead == 'h') ADVANCE(929);
      END_STATE();
    case 433:
      if (lookahead == 'h') ADVANCE(929);
      if (lookahead == 'l') ADVANCE(871);
      if (lookahead == 'n') ADVANCE(13);
      if (lookahead == 'r') ADVANCE(675);
      END_STATE();
    case 434:
      if (lookahead == 'h') ADVANCE(1884);
      END_STATE();
    case 435:
      if (lookahead == 'h') ADVANCE(2102);
      END_STATE();
    case 436:
      if (lookahead == 'h') ADVANCE(918);
      END_STATE();
    case 437:
      if (lookahead == 'h') ADVANCE(714);
      if (lookahead == 'l') ADVANCE(748);
      if (lookahead == 'o') ADVANCE(110);
      if (lookahead == 'r') ADVANCE(178);
      if (lookahead == 's') ADVANCE(1830);
      if (lookahead == 'x') ADVANCE(1888);
      if (lookahead == 'y') ADVANCE(661);
      END_STATE();
    case 438:
      if (lookahead == 'h') ADVANCE(613);
      END_STATE();
    case 439:
      if (lookahead == 'h') ADVANCE(364);
      if (lookahead == 'k') ADVANCE(892);
      END_STATE();
    case 440:
      if (lookahead == 'h') ADVANCE(333);
      END_STATE();
    case 441:
      if (lookahead == 'h') ADVANCE(336);
      END_STATE();
    case 442:
      if (lookahead == 'h') ADVANCE(756);
      END_STATE();
    case 443:
      if (lookahead == 'h') ADVANCE(371);
      END_STATE();
    case 444:
      if (lookahead == 'h') ADVANCE(374);
      if (lookahead == 'k') ADVANCE(325);
      END_STATE();
    case 445:
      if (lookahead == 'i') ADVANCE(431);
      END_STATE();
    case 446:
      if (lookahead == 'i') ADVANCE(555);
      if (lookahead == 'o') ADVANCE(170);
      if (lookahead == 's') ADVANCE(689);
      END_STATE();
    case 447:
      if (lookahead == 'i') ADVANCE(429);
      END_STATE();
    case 448:
      if (lookahead == 'i') ADVANCE(877);
      END_STATE();
    case 449:
      if (lookahead == 'i') ADVANCE(814);
      END_STATE();
    case 450:
      if (lookahead == 'i') ADVANCE(643);
      if (lookahead == 'm') ADVANCE(216);
      if (lookahead == 'n') ADVANCE(547);
      if (lookahead == 's') ADVANCE(432);
      END_STATE();
    case 451:
      if (lookahead == 'i') ADVANCE(265);
      END_STATE();
    case 452:
      if (lookahead == 'i') ADVANCE(426);
      END_STATE();
    case 453:
      if (lookahead == 'i') ADVANCE(830);
      END_STATE();
    case 454:
      if (lookahead == 'i') ADVANCE(427);
      END_STATE();
    case 455:
      if (lookahead == 'i') ADVANCE(250);
      END_STATE();
    case 456:
      if (lookahead == 'i') ADVANCE(559);
      END_STATE();
    case 457:
      if (lookahead == 'i') ADVANCE(788);
      END_STATE();
    case 458:
      if (lookahead == 'i') ADVANCE(648);
      END_STATE();
    case 459:
      if (lookahead == 'i') ADVANCE(252);
      END_STATE();
    case 460:
      if (lookahead == 'i') ADVANCE(567);
      END_STATE();
    case 461:
      if (lookahead == 'i') ADVANCE(772);
      END_STATE();
    case 462:
      if (lookahead == 'i') ADVANCE(561);
      END_STATE();
    case 463:
      if (lookahead == 'i') ADVANCE(568);
      END_STATE();
    case 464:
      if (lookahead == 'i') ADVANCE(841);
      END_STATE();
    case 465:
      if (lookahead == 'i') ADVANCE(896);
      END_STATE();
    case 466:
      if (lookahead == 'i') ADVANCE(200);
      END_STATE();
    case 467:
      if (lookahead == 'i') ADVANCE(259);
      END_STATE();
    case 468:
      if (lookahead == 'i') ADVANCE(897);
      END_STATE();
    case 469:
      if (lookahead == 'i') ADVANCE(626);
      END_STATE();
    case 470:
      if (lookahead == 'i') ADVANCE(551);
      END_STATE();
    case 471:
      if (lookahead == 'i') ADVANCE(618);
      END_STATE();
    case 472:
      if (lookahead == 'i') ADVANCE(552);
      END_STATE();
    case 473:
      if (lookahead == 'i') ADVANCE(553);
      END_STATE();
    case 474:
      if (lookahead == 'i') ADVANCE(521);
      END_STATE();
    case 475:
      if (lookahead == 'i') ADVANCE(522);
      END_STATE();
    case 476:
      if (lookahead == 'i') ADVANCE(523);
      END_STATE();
    case 477:
      if (lookahead == 'i') ADVANCE(839);
      END_STATE();
    case 478:
      if (lookahead == 'i') ADVANCE(524);
      END_STATE();
    case 479:
      if (lookahead == 'i') ADVANCE(840);
      END_STATE();
    case 480:
      if (lookahead == 'i') ADVANCE(526);
      END_STATE();
    case 481:
      if (lookahead == 'i') ADVANCE(528);
      END_STATE();
    case 482:
      if (lookahead == 'i') ADVANCE(253);
      END_STATE();
    case 483:
      if (lookahead == 'i') ADVANCE(775);
      END_STATE();
    case 484:
      if (lookahead == 'i') ADVANCE(378);
      END_STATE();
    case 485:
      if (lookahead == 'i') ADVANCE(258);
      END_STATE();
    case 486:
      if (lookahead == 'i') ADVANCE(387);
      END_STATE();
    case 487:
      if (lookahead == 'i') ADVANCE(392);
      END_STATE();
    case 488:
      if (lookahead == 'j') ADVANCE(332);
      END_STATE();
    case 489:
      if (lookahead == 'j') ADVANCE(393);
      END_STATE();
    case 490:
      if (lookahead == 'k') ADVANCE(2094);
      END_STATE();
    case 491:
      if (lookahead == 'k') ADVANCE(601);
      if (lookahead == 's') ADVANCE(340);
      END_STATE();
    case 492:
      if (lookahead == 'k') ADVANCE(586);
      END_STATE();
    case 493:
      if (lookahead == 'l') ADVANCE(179);
      if (lookahead == 'o') ADVANCE(503);
      END_STATE();
    case 494:
      if (lookahead == 'l') ADVANCE(167);
      if (lookahead == 'v') ADVANCE(455);
      END_STATE();
    case 495:
      if (lookahead == 'l') ADVANCE(1826);
      END_STATE();
    case 496:
      if (lookahead == 'l') ADVANCE(2083);
      END_STATE();
    case 497:
      if (lookahead == 'l') ADVANCE(1952);
      END_STATE();
    case 498:
      if (lookahead == 'l') ADVANCE(1950);
      END_STATE();
    case 499:
      if (lookahead == 'l') ADVANCE(2000);
      END_STATE();
    case 500:
      if (lookahead == 'l') ADVANCE(1948);
      END_STATE();
    case 501:
      if (lookahead == 'l') ADVANCE(891);
      END_STATE();
    case 502:
      if (lookahead == 'l') ADVANCE(123);
      if (lookahead == 'r') ADVANCE(329);
      END_STATE();
    case 503:
      if (lookahead == 'l') ADVANCE(275);
      if (lookahead == 'n') ADVANCE(410);
      if (lookahead == 'u') ADVANCE(569);
      END_STATE();
    case 504:
      if (lookahead == 'l') ADVANCE(871);
      if (lookahead == 'n') ADVANCE(13);
      if (lookahead == 'r') ADVANCE(675);
      END_STATE();
    case 505:
      if (lookahead == 'l') ADVANCE(496);
      END_STATE();
    case 506:
      if (lookahead == 'l') ADVANCE(606);
      END_STATE();
    case 507:
      if (lookahead == 'l') ADVANCE(267);
      END_STATE();
    case 508:
      if (lookahead == 'l') ADVANCE(288);
      END_STATE();
    case 509:
      if (lookahead == 'l') ADVANCE(484);
      END_STATE();
    case 510:
      if (lookahead == 'l') ADVANCE(461);
      END_STATE();
    case 511:
      if (lookahead == 'l') ADVANCE(140);
      END_STATE();
    case 512:
      if (lookahead == 'l') ADVANCE(514);
      END_STATE();
    case 513:
      if (lookahead == 'l') ADVANCE(198);
      END_STATE();
    case 514:
      if (lookahead == 'l') ADVANCE(602);
      END_STATE();
    case 515:
      if (lookahead == 'l') ADVANCE(365);
      END_STATE();
    case 516:
      if (lookahead == 'l') ADVANCE(603);
      END_STATE();
    case 517:
      if (lookahead == 'l') ADVANCE(348);
      END_STATE();
    case 518:
      if (lookahead == 'l') ADVANCE(607);
      END_STATE();
    case 519:
      if (lookahead == 'l') ADVANCE(296);
      END_STATE();
    case 520:
      if (lookahead == 'l') ADVANCE(297);
      END_STATE();
    case 521:
      if (lookahead == 'l') ADVANCE(353);
      END_STATE();
    case 522:
      if (lookahead == 'l') ADVANCE(304);
      END_STATE();
    case 523:
      if (lookahead == 'l') ADVANCE(305);
      END_STATE();
    case 524:
      if (lookahead == 'l') ADVANCE(306);
      END_STATE();
    case 525:
      if (lookahead == 'l') ADVANCE(344);
      END_STATE();
    case 526:
      if (lookahead == 'l') ADVANCE(307);
      END_STATE();
    case 527:
      if (lookahead == 'l') ADVANCE(310);
      END_STATE();
    case 528:
      if (lookahead == 'l') ADVANCE(314);
      END_STATE();
    case 529:
      if (lookahead == 'l') ADVANCE(459);
      END_STATE();
    case 530:
      if (lookahead == 'l') ADVANCE(761);
      END_STATE();
    case 531:
      if (lookahead == 'l') ADVANCE(516);
      END_STATE();
    case 532:
      if (lookahead == 'l') ADVANCE(327);
      if (lookahead == 'n') ADVANCE(890);
      END_STATE();
    case 533:
      if (lookahead == 'l') ADVANCE(468);
      END_STATE();
    case 534:
      if (lookahead == 'l') ADVANCE(482);
      END_STATE();
    case 535:
      if (lookahead == 'l') ADVANCE(485);
      END_STATE();
    case 536:
      if (lookahead == 'l') ADVANCE(486);
      END_STATE();
    case 537:
      if (lookahead == 'l') ADVANCE(483);
      END_STATE();
    case 538:
      if (lookahead == 'l') ADVANCE(487);
      END_STATE();
    case 539:
      if (lookahead == 'l') ADVANCE(406);
      END_STATE();
    case 540:
      if (lookahead == 'm') ADVANCE(1916);
      END_STATE();
    case 541:
      if (lookahead == 'm') ADVANCE(1874);
      END_STATE();
    case 542:
      if (lookahead == 'm') ADVANCE(1872);
      END_STATE();
    case 543:
      if (lookahead == 'm') ADVANCE(240);
      END_STATE();
    case 544:
      if (lookahead == 'm') ADVANCE(155);
      END_STATE();
    case 545:
      if (lookahead == 'm') ADVANCE(556);
      if (lookahead == 'n') ADVANCE(449);
      if (lookahead == 's') ADVANCE(565);
      END_STATE();
    case 546:
      if (lookahead == 'm') ADVANCE(650);
      END_STATE();
    case 547:
      if (lookahead == 'm') ADVANCE(653);
      END_STATE();
    case 548:
      if (lookahead == 'm') ADVANCE(657);
      END_STATE();
    case 549:
      if (lookahead == 'm') ADVANCE(339);
      END_STATE();
    case 550:
      if (lookahead == 'm') ADVANCE(302);
      END_STATE();
    case 551:
      if (lookahead == 'm') ADVANCE(303);
      END_STATE();
    case 552:
      if (lookahead == 'm') ADVANCE(312);
      END_STATE();
    case 553:
      if (lookahead == 'm') ADVANCE(315);
      END_STATE();
    case 554:
      if (lookahead == 'm') ADVANCE(385);
      END_STATE();
    case 555:
      if (lookahead == 'm') ADVANCE(457);
      END_STATE();
    case 556:
      if (lookahead == 'm') ADVANCE(372);
      END_STATE();
    case 557:
      if (lookahead == 'm') ADVANCE(154);
      END_STATE();
    case 558:
      if (lookahead == 'n') ADVANCE(491);
      if (lookahead == 's') ADVANCE(331);
      END_STATE();
    case 559:
      if (lookahead == 'n') ADVANCE(2068);
      END_STATE();
    case 560:
      if (lookahead == 'n') ADVANCE(1912);
      END_STATE();
    case 561:
      if (lookahead == 'n') ADVANCE(2084);
      END_STATE();
    case 562:
      if (lookahead == 'n') ADVANCE(2086);
      END_STATE();
    case 563:
      if (lookahead == 'n') ADVANCE(2008);
      END_STATE();
    case 564:
      if (lookahead == 'n') ADVANCE(492);
      END_STATE();
    case 565:
      if (lookahead == 'n') ADVANCE(611);
      if (lookahead == 's') ADVANCE(334);
      END_STATE();
    case 566:
      if (lookahead == 'n') ADVANCE(280);
      END_STATE();
    case 567:
      if (lookahead == 'n') ADVANCE(416);
      END_STATE();
    case 568:
      if (lookahead == 'n') ADVANCE(428);
      END_STATE();
    case 569:
      if (lookahead == 'n') ADVANCE(786);
      END_STATE();
    case 570:
      if (lookahead == 'n') ADVANCE(260);
      END_STATE();
    case 571:
      if (lookahead == 'n') ADVANCE(125);
      END_STATE();
    case 572:
      if (lookahead == 'n') ADVANCE(458);
      END_STATE();
    case 573:
      if (lookahead == 'n') ADVANCE(843);
      END_STATE();
    case 574:
      if (lookahead == 'n') ADVANCE(759);
      END_STATE();
    case 575:
      if (lookahead == 'n') ADVANCE(742);
      END_STATE();
    case 576:
      if (lookahead == 'n') ADVANCE(679);
      END_STATE();
    case 577:
      if (lookahead == 'n') ADVANCE(680);
      END_STATE();
    case 578:
      if (lookahead == 'n') ADVANCE(797);
      END_STATE();
    case 579:
      if (lookahead == 'n') ADVANCE(683);
      END_STATE();
    case 580:
      if (lookahead == 'n') ADVANCE(798);
      END_STATE();
    case 581:
      if (lookahead == 'n') ADVANCE(684);
      END_STATE();
    case 582:
      if (lookahead == 'n') ADVANCE(803);
      END_STATE();
    case 583:
      if (lookahead == 'n') ADVANCE(124);
      END_STATE();
    case 584:
      if (lookahead == 'n') ADVANCE(817);
      END_STATE();
    case 585:
      if (lookahead == 'n') ADVANCE(194);
      END_STATE();
    case 586:
      if (lookahead == 'n') ADVANCE(624);
      END_STATE();
    case 587:
      if (lookahead == 'n') ADVANCE(832);
      END_STATE();
    case 588:
      if (lookahead == 'n') ADVANCE(831);
      END_STATE();
    case 589:
      if (lookahead == 'n') ADVANCE(413);
      END_STATE();
    case 590:
      if (lookahead == 'n') ADVANCE(770);
      END_STATE();
    case 591:
      if (lookahead == 'n') ADVANCE(833);
      END_STATE();
    case 592:
      if (lookahead == 'n') ADVANCE(415);
      END_STATE();
    case 593:
      if (lookahead == 'n') ADVANCE(825);
      END_STATE();
    case 594:
      if (lookahead == 'n') ADVANCE(771);
      END_STATE();
    case 595:
      if (lookahead == 'n') ADVANCE(834);
      END_STATE();
    case 596:
      if (lookahead == 'n') ADVANCE(146);
      if (lookahead == 'r') ADVANCE(199);
      END_STATE();
    case 597:
      if (lookahead == 'n') ADVANCE(782);
      END_STATE();
    case 598:
      if (lookahead == 'n') ADVANCE(854);
      END_STATE();
    case 599:
      if (lookahead == 'n') ADVANCE(168);
      if (lookahead == 'o') ADVANCE(495);
      if (lookahead == 's') ADVANCE(322);
      if (lookahead == 'v') ADVANCE(361);
      END_STATE();
    case 600:
      if (lookahead == 'o') ADVANCE(274);
      END_STATE();
    case 601:
      if (lookahead == 'o') ADVANCE(884);
      END_STATE();
    case 602:
      if (lookahead == 'o') ADVANCE(1904);
      END_STATE();
    case 603:
      if (lookahead == 'o') ADVANCE(1906);
      END_STATE();
    case 604:
      if (lookahead == 'o') ADVANCE(1972);
      END_STATE();
    case 605:
      if (lookahead == 'o') ADVANCE(1988);
      END_STATE();
    case 606:
      if (lookahead == 'o') ADVANCE(882);
      END_STATE();
    case 607:
      if (lookahead == 'o') ADVANCE(883);
      END_STATE();
    case 608:
      if (lookahead == 'o') ADVANCE(734);
      END_STATE();
    case 609:
      if (lookahead == 'o') ADVANCE(590);
      END_STATE();
    case 610:
      if (lookahead == 'o') ADVANCE(867);
      END_STATE();
    case 611:
      if (lookahead == 'o') ADVANCE(816);
      END_STATE();
    case 612:
      if (lookahead == 'o') ADVANCE(647);
      END_STATE();
    case 613:
      if (lookahead == 'o') ADVANCE(507);
      END_STATE();
    case 614:
      if (lookahead == 'o') ADVANCE(284);
      END_STATE();
    case 615:
      if (lookahead == 'o') ADVANCE(589);
      END_STATE();
    case 616:
      if (lookahead == 'o') ADVANCE(723);
      END_STATE();
    case 617:
      if (lookahead == 'o') ADVANCE(499);
      END_STATE();
    case 618:
      if (lookahead == 'o') ADVANCE(562);
      END_STATE();
    case 619:
      if (lookahead == 'o') ADVANCE(691);
      END_STATE();
    case 620:
      if (lookahead == 'o') ADVANCE(670);
      END_STATE();
    case 621:
      if (lookahead == 'o') ADVANCE(127);
      END_STATE();
    case 622:
      if (lookahead == 'o') ADVANCE(681);
      END_STATE();
    case 623:
      if (lookahead == 'o') ADVANCE(807);
      if (lookahead == 'y') ADVANCE(109);
      END_STATE();
    case 624:
      if (lookahead == 'o') ADVANCE(885);
      END_STATE();
    case 625:
      if (lookahead == 'o') ADVANCE(701);
      END_STATE();
    case 626:
      if (lookahead == 'o') ADVANCE(575);
      END_STATE();
    case 627:
      if (lookahead == 'o') ADVANCE(812);
      END_STATE();
    case 628:
      if (lookahead == 'o') ADVANCE(548);
      END_STATE();
    case 629:
      if (lookahead == 'o') ADVANCE(129);
      END_STATE();
    case 630:
      if (lookahead == 'o') ADVANCE(813);
      END_STATE();
    case 631:
      if (lookahead == 'o') ADVANCE(588);
      END_STATE();
    case 632:
      if (lookahead == 'o') ADVANCE(712);
      END_STATE();
    case 633:
      if (lookahead == 'o') ADVANCE(594);
      END_STATE();
    case 634:
      if (lookahead == 'o') ADVANCE(592);
      END_STATE();
    case 635:
      if (lookahead == 'o') ADVANCE(875);
      END_STATE();
    case 636:
      if (lookahead == 'o') ADVANCE(534);
      END_STATE();
    case 637:
      if (lookahead == 'o') ADVANCE(535);
      END_STATE();
    case 638:
      if (lookahead == 'p') ADVANCE(21);
      if (lookahead == 's') ADVANCE(927);
      END_STATE();
    case 639:
      if (lookahead == 'p') ADVANCE(2066);
      END_STATE();
    case 640:
      if (lookahead == 'p') ADVANCE(924);
      END_STATE();
    case 641:
      if (lookahead == 'p') ADVANCE(938);
      END_STATE();
    case 642:
      if (lookahead == 'p') ADVANCE(941);
      END_STATE();
    case 643:
      if (lookahead == 'p') ADVANCE(944);
      END_STATE();
    case 644:
      if (lookahead == 'p') ADVANCE(919);
      END_STATE();
    case 645:
      if (lookahead == 'p') ADVANCE(920);
      END_STATE();
    case 646:
      if (lookahead == 'p') ADVANCE(939);
      END_STATE();
    case 647:
      if (lookahead == 'p') ADVANCE(914);
      END_STATE();
    case 648:
      if (lookahead == 'p') ADVANCE(934);
      END_STATE();
    case 649:
      if (lookahead == 'p') ADVANCE(923);
      END_STATE();
    case 650:
      if (lookahead == 'p') ADVANCE(921);
      END_STATE();
    case 651:
      if (lookahead == 'p') ADVANCE(931);
      END_STATE();
    case 652:
      if (lookahead == 'p') ADVANCE(930);
      END_STATE();
    case 653:
      if (lookahead == 'p') ADVANCE(942);
      END_STATE();
    case 654:
      if (lookahead == 'p') ADVANCE(943);
      END_STATE();
    case 655:
      if (lookahead == 'p') ADVANCE(2118);
      END_STATE();
    case 656:
      if (lookahead == 'p') ADVANCE(138);
      if (lookahead == 'r') ADVANCE(2024);
      END_STATE();
    case 657:
      if (lookahead == 'p') ADVANCE(190);
      END_STATE();
    case 658:
      if (lookahead == 'p') ADVANCE(233);
      END_STATE();
    case 659:
      if (lookahead == 'p') ADVANCE(497);
      END_STATE();
    case 660:
      if (lookahead == 'p') ADVANCE(498);
      END_STATE();
    case 661:
      if (lookahead == 'p') ADVANCE(292);
      END_STATE();
    case 662:
      if (lookahead == 'p') ADVANCE(500);
      END_STATE();
    case 663:
      if (lookahead == 'p') ADVANCE(605);
      END_STATE();
    case 664:
      if (lookahead == 'p') ADVANCE(659);
      END_STATE();
    case 665:
      if (lookahead == 'p') ADVANCE(660);
      END_STATE();
    case 666:
      if (lookahead == 'p') ADVANCE(662);
      END_STATE();
    case 667:
      if (lookahead == 'p') ADVANCE(669);
      END_STATE();
    case 668:
      if (lookahead == 'p') ADVANCE(801);
      END_STATE();
    case 669:
      if (lookahead == 'p') ADVANCE(632);
      END_STATE();
    case 670:
      if (lookahead == 'p') ADVANCE(350);
      END_STATE();
    case 671:
      if (lookahead == 'p') ADVANCE(633);
      END_STATE();
    case 672:
      if (lookahead == 'q') ADVANCE(1980);
      if (lookahead == 's') ADVANCE(663);
      END_STATE();
    case 673:
      if (lookahead == 'r') ADVANCE(214);
      END_STATE();
    case 674:
      if (lookahead == 'r') ADVANCE(1836);
      END_STATE();
    case 675:
      if (lookahead == 'r') ADVANCE(1838);
      END_STATE();
    case 676:
      if (lookahead == 'r') ADVANCE(1860);
      END_STATE();
    case 677:
      if (lookahead == 'r') ADVANCE(1864);
      END_STATE();
    case 678:
      if (lookahead == 'r') ADVANCE(1934);
      END_STATE();
    case 679:
      if (lookahead == 'r') ADVANCE(1936);
      END_STATE();
    case 680:
      if (lookahead == 'r') ADVANCE(1932);
      END_STATE();
    case 681:
      if (lookahead == 'r') ADVANCE(2010);
      END_STATE();
    case 682:
      if (lookahead == 'r') ADVANCE(1982);
      END_STATE();
    case 683:
      if (lookahead == 'r') ADVANCE(1928);
      END_STATE();
    case 684:
      if (lookahead == 'r') ADVANCE(1940);
      END_STATE();
    case 685:
      if (lookahead == 'r') ADVANCE(1880);
      END_STATE();
    case 686:
      if (lookahead == 'r') ADVANCE(585);
      END_STATE();
    case 687:
      if (lookahead == 'r') ADVANCE(176);
      if (lookahead == 's') ADVANCE(738);
      END_STATE();
    case 688:
      if (lookahead == 'r') ADVANCE(176);
      if (lookahead == 's') ADVANCE(752);
      END_STATE();
    case 689:
      if (lookahead == 'r') ADVANCE(674);
      END_STATE();
    case 690:
      if (lookahead == 'r') ADVANCE(785);
      END_STATE();
    case 691:
      if (lookahead == 'r') ADVANCE(266);
      END_STATE();
    case 692:
      if (lookahead == 'r') ADVANCE(330);
      if (lookahead == 's') ADVANCE(212);
      END_STATE();
    case 693:
      if (lookahead == 'r') ADVANCE(171);
      if (lookahead == 'u') ADVANCE(570);
      END_STATE();
    case 694:
      if (lookahead == 'r') ADVANCE(232);
      END_STATE();
    case 695:
      if (lookahead == 'r') ADVANCE(861);
      END_STATE();
    case 696:
      if (lookahead == 'r') ADVANCE(175);
      END_STATE();
    case 697:
      if (lookahead == 'r') ADVANCE(610);
      END_STATE();
    case 698:
      if (lookahead == 'r') ADVANCE(234);
      END_STATE();
    case 699:
      if (lookahead == 'r') ADVANCE(658);
      END_STATE();
    case 700:
      if (lookahead == 'r') ADVANCE(793);
      END_STATE();
    case 701:
      if (lookahead == 'r') ADVANCE(695);
      END_STATE();
    case 702:
      if (lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 703:
      if (lookahead == 'r') ADVANCE(733);
      END_STATE();
    case 704:
      if (lookahead == 'r') ADVANCE(375);
      END_STATE();
    case 705:
      if (lookahead == 'r') ADVANCE(720);
      END_STATE();
    case 706:
      if (lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 707:
      if (lookahead == 'r') ADVANCE(682);
      END_STATE();
    case 708:
      if (lookahead == 'r') ADVANCE(799);
      END_STATE();
    case 709:
      if (lookahead == 'r') ADVANCE(800);
      END_STATE();
    case 710:
      if (lookahead == 'r') ADVANCE(802);
      END_STATE();
    case 711:
      if (lookahead == 'r') ADVANCE(368);
      END_STATE();
    case 712:
      if (lookahead == 'r') ADVANCE(804);
      END_STATE();
    case 713:
      if (lookahead == 'r') ADVANCE(309);
      END_STATE();
    case 714:
      if (lookahead == 'r') ADVANCE(362);
      END_STATE();
    case 715:
      if (lookahead == 'r') ADVANCE(418);
      END_STATE();
    case 716:
      if (lookahead == 'r') ADVANCE(878);
      END_STATE();
    case 717:
      if (lookahead == 'r') ADVANCE(557);
      END_STATE();
    case 718:
      if (lookahead == 'r') ADVANCE(617);
      END_STATE();
    case 719:
      if (lookahead == 'r') ADVANCE(846);
      if (lookahead == 't') ADVANCE(294);
      END_STATE();
    case 720:
      if (lookahead == 'r') ADVANCE(622);
      END_STATE();
    case 721:
      if (lookahead == 'r') ADVANCE(133);
      END_STATE();
    case 722:
      if (lookahead == 'r') ADVANCE(354);
      END_STATE();
    case 723:
      if (lookahead == 'r') ADVANCE(282);
      END_STATE();
    case 724:
      if (lookahead == 'r') ADVANCE(356);
      END_STATE();
    case 725:
      if (lookahead == 'r') ADVANCE(873);
      END_STATE();
    case 726:
      if (lookahead == 'r') ADVANCE(382);
      END_STATE();
    case 727:
      if (lookahead == 'r') ADVANCE(874);
      END_STATE();
    case 728:
      if (lookahead == 'r') ADVANCE(386);
      END_STATE();
    case 729:
      if (lookahead == 'r') ADVANCE(210);
      END_STATE();
    case 730:
      if (lookahead == 'r') ADVANCE(395);
      END_STATE();
    case 731:
      if (lookahead == 'r') ADVANCE(876);
      END_STATE();
    case 732:
      if (lookahead == 'r') ADVANCE(397);
      if (lookahead == 't') ADVANCE(697);
      END_STATE();
    case 733:
      if (lookahead == 'r') ADVANCE(396);
      END_STATE();
    case 734:
      if (lookahead == 'r') ADVANCE(853);
      END_STATE();
    case 735:
      if (lookahead == 's') ADVANCE(935);
      END_STATE();
    case 736:
      if (lookahead == 's') ADVANCE(925);
      END_STATE();
    case 737:
      if (lookahead == 's') ADVANCE(2070);
      END_STATE();
    case 738:
      if (lookahead == 's') ADVANCE(913);
      END_STATE();
    case 739:
      if (lookahead == 's') ADVANCE(932);
      END_STATE();
    case 740:
      if (lookahead == 's') ADVANCE(2106);
      END_STATE();
    case 741:
      if (lookahead == 's') ADVANCE(1870);
      END_STATE();
    case 742:
      if (lookahead == 's') ADVANCE(1990);
      END_STATE();
    case 743:
      if (lookahead == 's') ADVANCE(1960);
      END_STATE();
    case 744:
      if (lookahead == 's') ADVANCE(1992);
      END_STATE();
    case 745:
      if (lookahead == 's') ADVANCE(1994);
      END_STATE();
    case 746:
      if (lookahead == 's') ADVANCE(1996);
      END_STATE();
    case 747:
      if (lookahead == 's') ADVANCE(912);
      END_STATE();
    case 748:
      if (lookahead == 's') ADVANCE(17);
      END_STATE();
    case 749:
      if (lookahead == 's') ADVANCE(447);
      END_STATE();
    case 750:
      if (lookahead == 's') ADVANCE(442);
      END_STATE();
    case 751:
      if (lookahead == 's') ADVANCE(438);
      END_STATE();
    case 752:
      if (lookahead == 's') ADVANCE(886);
      END_STATE();
    case 753:
      if (lookahead == 's') ADVANCE(863);
      END_STATE();
    case 754:
      if (lookahead == 's') ADVANCE(111);
      END_STATE();
    case 755:
      if (lookahead == 's') ADVANCE(754);
      END_STATE();
    case 756:
      if (lookahead == 's') ADVANCE(465);
      END_STATE();
    case 757:
      if (lookahead == 's') ADVANCE(815);
      END_STATE();
    case 758:
      if (lookahead == 's') ADVANCE(790);
      END_STATE();
    case 759:
      if (lookahead == 's') ADVANCE(636);
      END_STATE();
    case 760:
      if (lookahead == 's') ADVANCE(403);
      END_STATE();
    case 761:
      if (lookahead == 's') ADVANCE(293);
      END_STATE();
    case 762:
      if (lookahead == 's') ADVANCE(741);
      END_STATE();
    case 763:
      if (lookahead == 's') ADVANCE(856);
      END_STATE();
    case 764:
      if (lookahead == 's') ADVANCE(743);
      END_STATE();
    case 765:
      if (lookahead == 's') ADVANCE(808);
      END_STATE();
    case 766:
      if (lookahead == 's') ADVANCE(824);
      END_STATE();
    case 767:
      if (lookahead == 's') ADVANCE(796);
      END_STATE();
    case 768:
      if (lookahead == 's') ADVANCE(671);
      END_STATE();
    case 769:
      if (lookahead == 's') ADVANCE(747);
      END_STATE();
    case 770:
      if (lookahead == 's') ADVANCE(301);
      END_STATE();
    case 771:
      if (lookahead == 's') ADVANCE(316);
      END_STATE();
    case 772:
      if (lookahead == 's') ADVANCE(440);
      END_STATE();
    case 773:
      if (lookahead == 's') ADVANCE(865);
      END_STATE();
    case 774:
      if (lookahead == 's') ADVANCE(778);
      END_STATE();
    case 775:
      if (lookahead == 's') ADVANCE(441);
      END_STATE();
    case 776:
      if (lookahead == 's') ADVANCE(352);
      END_STATE();
    case 777:
      if (lookahead == 's') ADVANCE(343);
      END_STATE();
    case 778:
      if (lookahead == 's') ADVANCE(471);
      END_STATE();
    case 779:
      if (lookahead == 's') ADVANCE(848);
      END_STATE();
    case 780:
      if (lookahead == 's') ADVANCE(850);
      END_STATE();
    case 781:
      if (lookahead == 's') ADVANCE(401);
      END_STATE();
    case 782:
      if (lookahead == 's') ADVANCE(637);
      END_STATE();
    case 783:
      if (lookahead == 't') ADVANCE(443);
      END_STATE();
    case 784:
      if (lookahead == 't') ADVANCE(2110);
      END_STATE();
    case 785:
      if (lookahead == 't') ADVANCE(911);
      END_STATE();
    case 786:
      if (lookahead == 't') ADVANCE(2104);
      END_STATE();
    case 787:
      if (lookahead == 't') ADVANCE(1848);
      END_STATE();
    case 788:
      if (lookahead == 't') ADVANCE(2092);
      END_STATE();
    case 789:
      if (lookahead == 't') ADVANCE(1852);
      END_STATE();
    case 790:
      if (lookahead == 't') ADVANCE(2098);
      END_STATE();
    case 791:
      if (lookahead == 't') ADVANCE(915);
      END_STATE();
    case 792:
      if (lookahead == 't') ADVANCE(1922);
      END_STATE();
    case 793:
      if (lookahead == 't') ADVANCE(1856);
      END_STATE();
    case 794:
      if (lookahead == 't') ADVANCE(1914);
      END_STATE();
    case 795:
      if (lookahead == 't') ADVANCE(1854);
      END_STATE();
    case 796:
      if (lookahead == 't') ADVANCE(917);
      END_STATE();
    case 797:
      if (lookahead == 't') ADVANCE(1858);
      END_STATE();
    case 798:
      if (lookahead == 't') ADVANCE(1862);
      END_STATE();
    case 799:
      if (lookahead == 't') ADVANCE(1942);
      END_STATE();
    case 800:
      if (lookahead == 't') ADVANCE(1944);
      END_STATE();
    case 801:
      if (lookahead == 't') ADVANCE(2016);
      END_STATE();
    case 802:
      if (lookahead == 't') ADVANCE(2004);
      END_STATE();
    case 803:
      if (lookahead == 't') ADVANCE(1882);
      END_STATE();
    case 804:
      if (lookahead == 't') ADVANCE(2006);
      END_STATE();
    case 805:
      if (lookahead == 't') ADVANCE(640);
      END_STATE();
    case 806:
      if (lookahead == 't') ADVANCE(448);
      END_STATE();
    case 807:
      if (lookahead == 't') ADVANCE(434);
      END_STATE();
    case 808:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 809:
      if (lookahead == 't') ADVANCE(135);
      END_STATE();
    case 810:
      if (lookahead == 't') ADVANCE(818);
      END_STATE();
    case 811:
      if (lookahead == 't') ADVANCE(451);
      if (lookahead == 'v') ADVANCE(290);
      END_STATE();
    case 812:
      if (lookahead == 't') ADVANCE(435);
      END_STATE();
    case 813:
      if (lookahead == 't') ADVANCE(436);
      END_STATE();
    case 814:
      if (lookahead == 't') ADVANCE(466);
      END_STATE();
    case 815:
      if (lookahead == 't') ADVANCE(196);
      END_STATE();
    case 816:
      if (lookahead == 't') ADVANCE(776);
      END_STATE();
    case 817:
      if (lookahead == 't') ADVANCE(121);
      END_STATE();
    case 818:
      if (lookahead == 't') ADVANCE(649);
      END_STATE();
    case 819:
      if (lookahead == 't') ADVANCE(704);
      END_STATE();
    case 820:
      if (lookahead == 't') ADVANCE(470);
      END_STATE();
    case 821:
      if (lookahead == 't') ADVANCE(201);
      END_STATE();
    case 822:
      if (lookahead == 't') ADVANCE(629);
      END_STATE();
    case 823:
      if (lookahead == 't') ADVANCE(469);
      END_STATE();
    case 824:
      if (lookahead == 't') ADVANCE(197);
      END_STATE();
    case 825:
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 826:
      if (lookahead == 't') ADVANCE(621);
      END_STATE();
    case 827:
      if (lookahead == 't') ADVANCE(654);
      END_STATE();
    case 828:
      if (lookahead == 't') ADVANCE(162);
      END_STATE();
    case 829:
      if (lookahead == 't') ADVANCE(134);
      END_STATE();
    case 830:
      if (lookahead == 't') ADVANCE(295);
      END_STATE();
    case 831:
      if (lookahead == 't') ADVANCE(718);
      END_STATE();
    case 832:
      if (lookahead == 't') ADVANCE(744);
      END_STATE();
    case 833:
      if (lookahead == 't') ADVANCE(745);
      END_STATE();
    case 834:
      if (lookahead == 't') ADVANCE(746);
      END_STATE();
    case 835:
      if (lookahead == 't') ADVANCE(298);
      END_STATE();
    case 836:
      if (lookahead == 't') ADVANCE(398);
      END_STATE();
    case 837:
      if (lookahead == 't') ADVANCE(357);
      END_STATE();
    case 838:
      if (lookahead == 't') ADVANCE(311);
      END_STATE();
    case 839:
      if (lookahead == 't') ADVANCE(338);
      END_STATE();
    case 840:
      if (lookahead == 't') ADVANCE(341);
      END_STATE();
    case 841:
      if (lookahead == 't') ADVANCE(405);
      END_STATE();
    case 842:
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 843:
      if (lookahead == 't') ADVANCE(467);
      END_STATE();
    case 844:
      if (lookahead == 't') ADVANCE(370);
      END_STATE();
    case 845:
      if (lookahead == 't') ADVANCE(463);
      END_STATE();
    case 846:
      if (lookahead == 't') ADVANCE(142);
      END_STATE();
    case 847:
      if (lookahead == 't') ADVANCE(472);
      END_STATE();
    case 848:
      if (lookahead == 't') ADVANCE(204);
      END_STATE();
    case 849:
      if (lookahead == 't') ADVANCE(473);
      END_STATE();
    case 850:
      if (lookahead == 't') ADVANCE(207);
      END_STATE();
    case 851:
      if (lookahead == 't') ADVANCE(147);
      END_STATE();
    case 852:
      if (lookahead == 't') ADVANCE(726);
      END_STATE();
    case 853:
      if (lookahead == 't') ADVANCE(149);
      END_STATE();
    case 854:
      if (lookahead == 't') ADVANCE(150);
      END_STATE();
    case 855:
      if (lookahead == 't') ADVANCE(404);
      END_STATE();
    case 856:
      if (lookahead == 't') ADVANCE(211);
      END_STATE();
    case 857:
      if (lookahead == 'u') ADVANCE(409);
      END_STATE();
    case 858:
      if (lookahead == 'u') ADVANCE(574);
      END_STATE();
    case 859:
      if (lookahead == 'u') ADVANCE(739);
      END_STATE();
    case 860:
      if (lookahead == 'u') ADVANCE(564);
      END_STATE();
    case 861:
      if (lookahead == 'u') ADVANCE(668);
      END_STATE();
    case 862:
      if (lookahead == 'u') ADVANCE(703);
      END_STATE();
    case 863:
      if (lookahead == 'u') ADVANCE(713);
      END_STATE();
    case 864:
      if (lookahead == 'u') ADVANCE(845);
      END_STATE();
    case 865:
      if (lookahead == 'u') ADVANCE(667);
      END_STATE();
    case 866:
      if (lookahead == 'u') ADVANCE(520);
      END_STATE();
    case 867:
      if (lookahead == 'u') ADVANCE(223);
      END_STATE();
    case 868:
      if (lookahead == 'u') ADVANCE(383);
      END_STATE();
    case 869:
      if (lookahead == 'u') ADVANCE(597);
      END_STATE();
    case 870:
      if (lookahead == 'v') ADVANCE(19);
      END_STATE();
    case 871:
      if (lookahead == 'v') ADVANCE(20);
      END_STATE();
    case 872:
      if (lookahead == 'v') ADVANCE(342);
      END_STATE();
    case 873:
      if (lookahead == 'v') ADVANCE(347);
      END_STATE();
    case 874:
      if (lookahead == 'v') ADVANCE(351);
      END_STATE();
    case 875:
      if (lookahead == 'v') ADVANCE(358);
      END_STATE();
    case 876:
      if (lookahead == 'v') ADVANCE(359);
      END_STATE();
    case 877:
      if (lookahead == 'v') ADVANCE(206);
      END_STATE();
    case 878:
      if (lookahead == 'v') ADVANCE(388);
      END_STATE();
    case 879:
      if (lookahead == 'v') ADVANCE(389);
      END_STATE();
    case 880:
      if (lookahead == 'v') ADVANCE(390);
      END_STATE();
    case 881:
      if (lookahead == 'v') ADVANCE(391);
      END_STATE();
    case 882:
      if (lookahead == 'w') ADVANCE(1890);
      END_STATE();
    case 883:
      if (lookahead == 'w') ADVANCE(2012);
      END_STATE();
    case 884:
      if (lookahead == 'w') ADVANCE(560);
      END_STATE();
    case 885:
      if (lookahead == 'w') ADVANCE(563);
      END_STATE();
    case 886:
      if (lookahead == 'w') ADVANCE(619);
      END_STATE();
    case 887:
      if (lookahead == 'x') ADVANCE(1908);
      END_STATE();
    case 888:
      if (lookahead == 'x') ADVANCE(1910);
      END_STATE();
    case 889:
      if (lookahead == 'x') ADVANCE(345);
      END_STATE();
    case 890:
      if (lookahead == 'y') ADVANCE(987);
      END_STATE();
    case 891:
      if (lookahead == 'y') ADVANCE(1842);
      END_STATE();
    case 892:
      if (lookahead == 'y') ADVANCE(887);
      END_STATE();
    case 893:
      if (lookahead == 'y') ADVANCE(888);
      END_STATE();
    case 894:
      if (lookahead == 'y') ADVANCE(122);
      END_STATE();
    case 895:
      if (lookahead == 'z') ADVANCE(349);
      END_STATE();
    case 896:
      if (lookahead == 'z') ADVANCE(300);
      END_STATE();
    case 897:
      if (lookahead == 'z') ADVANCE(355);
      END_STATE();
    case 898:
      if (lookahead == 'z') ADVANCE(308);
      END_STATE();
    case 899:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(899)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1010);
      END_STATE();
    case 900:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(900)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1823);
      END_STATE();
    case 901:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(953);
      END_STATE();
    case 902:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 903:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(952);
      END_STATE();
    case 904:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1817);
      END_STATE();
    case 905:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 906:
      if (eof) ADVANCE(907);
      if (lookahead == '!') ADVANCE(949);
      if (lookahead == '#') ADVANCE(908);
      if (lookahead == '(') ADVANCE(997);
      if (lookahead == ',') ADVANCE(947);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '/') ADVANCE(901);
      if (lookahead == ':') ADVANCE(993);
      if (lookahead == '<') ADVANCE(24);
      if (lookahead == '[') ADVANCE(946);
      if (lookahead == ']') ADVANCE(948);
      if (lookahead == 'a') ADVANCE(532);
      if (lookahead == 'd') ADVANCE(256);
      if (lookahead == 'e') ADVANCE(572);
      if (lookahead == 'f') ADVANCE(805);
      if (lookahead == 'h') ADVANCE(810);
      if (lookahead == 'i') ADVANCE(227);
      if (lookahead == 'k') ADVANCE(673);
      if (lookahead == 'm') ADVANCE(600);
      if (lookahead == 'n') ADVANCE(408);
      if (lookahead == 'p') ADVANCE(205);
      if (lookahead == 'r') ADVANCE(273);
      if (lookahead == 's') ADVANCE(450);
      if (lookahead == 't') ADVANCE(238);
      if (lookahead == 'u') ADVANCE(277);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(906)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(992);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(909);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(910);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(910);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(anon_sym_alert);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(anon_sym_pass);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(anon_sym_pass);
      if (lookahead == 'w') ADVANCE(619);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(anon_sym_drop);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(anon_sym_reject);
      if (lookahead == 'b') ADVANCE(630);
      if (lookahead == 'd') ADVANCE(767);
      if (lookahead == 's') ADVANCE(698);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(anon_sym_rejectsrc);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(anon_sym_rejectdst);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(anon_sym_rejectboth);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(anon_sym_tcp);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(anon_sym_udp);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(anon_sym_icmp);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(anon_sym_ip);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(anon_sym_http);
      if (lookahead == '2') ADVANCE(945);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(anon_sym_ftp);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(anon_sym_tls);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(anon_sym_smb);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(anon_sym_dns);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(anon_sym_dcerpc);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(anon_sym_ssh);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(anon_sym_smtp);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(anon_sym_imap);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(anon_sym_modbus);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(anon_sym_dnp3);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(anon_sym_enip);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(anon_sym_nfs);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(anon_sym_ikev2);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(anon_sym_krb5);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(anon_sym_ntp);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(anon_sym_dhcp);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(anon_sym_rfb);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(anon_sym_rdp);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(anon_sym_snmp);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(anon_sym_tftp);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(anon_sym_sip);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(anon_sym_http2);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(sym_negation);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(951);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(aux_sym_ipv4_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(952);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(aux_sym_ipv4_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(953);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(sym__ipv6_octet);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == '.') ADVANCE(902);
      if (lookahead == ':') ADVANCE(986);
      if (lookahead == '_') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(958);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(983);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == '.') ADVANCE(902);
      if (lookahead == ':') ADVANCE(986);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(959);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(960);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == '.') ADVANCE(902);
      if (lookahead == ':') ADVANCE(986);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(958);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(983);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == '.') ADVANCE(902);
      if (lookahead == ':') ADVANCE(986);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(956);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(984);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == '.') ADVANCE(902);
      if (lookahead == ':') ADVANCE(986);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(986);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(986);
      if (lookahead == 'A') ADVANCE(965);
      if (lookahead == 'O') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(983);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(986);
      if (lookahead == 'C') ADVANCE(964);
      if (lookahead == 'U') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(983);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(986);
      if (lookahead == 'I') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(983);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(986);
      if (lookahead == 'K') ADVANCE(2034);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(984);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(986);
      if (lookahead == 'N') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(984);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(986);
      if (lookahead == 'Y') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(983);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(986);
      if (lookahead == 'a') ADVANCE(973);
      if (lookahead == 'i') ADVANCE(508);
      if (lookahead == 'r') ADVANCE(335);
      if (lookahead == 't') ADVANCE(640);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(983);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(986);
      if (lookahead == 'b') ADVANCE(976);
      if (lookahead == 'c') ADVANCE(979);
      if (lookahead == 'l') ADVANCE(328);
      if (lookahead == 'n') ADVANCE(890);
      if (lookahead == 's') ADVANCE(749);
      if (lookahead == 'u') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(983);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(986);
      if (lookahead == 'c') ADVANCE(970);
      if (lookahead == 'e') ADVANCE(972);
      if (lookahead == 'h') ADVANCE(242);
      if (lookahead == 'i') ADVANCE(692);
      if (lookahead == 'n') ADVANCE(638);
      if (lookahead == 'r') ADVANCE(612);
      if (lookahead == 's') ADVANCE(784);
      if (lookahead == 'u') ADVANCE(639);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(983);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(986);
      if (lookahead == 'e') ADVANCE(978);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(984);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(986);
      if (lookahead == 'l') ADVANCE(179);
      if (lookahead == 'o') ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(983);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(986);
      if (lookahead == 'l') ADVANCE(167);
      if (lookahead == 'v') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(984);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(986);
      if (lookahead == 'l') ADVANCE(761);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(984);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(986);
      if (lookahead == 'n') ADVANCE(890);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(983);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(986);
      if (lookahead == 'n') ADVANCE(169);
      if (lookahead == 'o') ADVANCE(495);
      if (lookahead == 's') ADVANCE(322);
      if (lookahead == 'v') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(983);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(986);
      if (lookahead == 'o') ADVANCE(734);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(984);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(986);
      if (lookahead == 'o') ADVANCE(807);
      if (lookahead == 'y') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(983);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(986);
      if (lookahead == 'r') ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(960);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(986);
      if (lookahead == 't') ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(984);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(986);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(960);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(960);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(986);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(982);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(983);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(986);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(980);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(984);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(986);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(984);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(986);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(960);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(986);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(983);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(954);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(anon_sym_any);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(anon_sym_any);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(aux_sym_port_token1);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(aux_sym_port_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(989);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(aux_sym_port_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(990);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(aux_sym_port_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(991);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(sym_colon);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(sym_semicolon);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(1006);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(1007);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(1004);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(1004);
      if (lookahead == '>') ADVANCE(996);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(1005);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(aux_sym_digit_token1);
      if (lookahead == '_') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(904);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(aux_sym_digit_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(904);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(aux_sym_digit_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1010);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(995);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '*') ADVANCE(1845);
      if (lookahead == '2') ADVANCE(1106);
      if (lookahead == '<') ADVANCE(1003);
      if (lookahead == '>') ADVANCE(1000);
      if (lookahead == 'A') ADVANCE(1030);
      if (lookahead == 'B') ADVANCE(1105);
      if (lookahead == 'C') ADVANCE(1023);
      if (lookahead == 'D') ADVANCE(1056);
      if (lookahead == 'I') ADVANCE(1070);
      if (lookahead == 'O') ADVANCE(1085);
      if (lookahead == 'P') ADVANCE(1061);
      if (lookahead == 'R') ADVANCE(1041);
      if (lookahead == 'S') ADVANCE(1103);
      if (lookahead == 'U') ADVANCE(1071);
      if (lookahead == 'a') ADVANCE(1203);
      if (lookahead == 'b') ADVANCE(1558);
      if (lookahead == 'c') ADVANCE(1450);
      if (lookahead == 'd') ADVANCE(1257);
      if (lookahead == 'e') ADVANCE(1519);
      if (lookahead == 'f') ADVANCE(1163);
      if (lookahead == 'g') ADVANCE(1293);
      if (lookahead == 'h') ADVANCE(1161);
      if (lookahead == 'i') ADVANCE(1496);
      if (lookahead == 'l') ADVANCE(1406);
      if (lookahead == 'm') ADVANCE(1290);
      if (lookahead == 'n') ADVANCE(1292);
      if (lookahead == 'o') ADVANCE(1204);
      if (lookahead == 'p') ADVANCE(1162);
      if (lookahead == 'r') ADVANCE(1258);
      if (lookahead == 's') ADVANCE(1157);
      if (lookahead == 't') ADVANCE(1397);
      if (lookahead == 'u') ADVANCE(1512);
      if (lookahead == 'w') ADVANCE(1167);
      if (lookahead == 'x') ADVANCE(1819);
      if (lookahead == 'y') ADVANCE(1291);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1013);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1811);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '.') ADVANCE(1017);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '/') ADVANCE(1374);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '/') ADVANCE(1732);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '0') ADVANCE(1897);
      if (lookahead == '1') ADVANCE(1899);
      if (lookahead == '2') ADVANCE(1901);
      if (lookahead == '3') ADVANCE(1903);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '1') ADVANCE(1014);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '1') ADVANCE(2021);
      if (lookahead == '2') ADVANCE(2019);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '1') ADVANCE(1133);
      if (lookahead == '2') ADVANCE(1154);
      if (lookahead == '3') ADVANCE(1155);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '2') ADVANCE(1893);
      if (lookahead == '3') ADVANCE(1895);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'A') ADVANCE(1094);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'A') ADVANCE(1072);
      if (lookahead == 'O') ADVANCE(1075);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'A') ADVANCE(1033);
      if (lookahead == 'C') ADVANCE(1080);
      if (lookahead == 'L') ADVANCE(1062);
      if (lookahead == 'R') ADVANCE(1044);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'A') ADVANCE(1036);
      if (lookahead == 'S') ADVANCE(1034);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'A') ADVANCE(1037);
      if (lookahead == 'E') ADVANCE(1038);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'B') ADVANCE(1024);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'B') ADVANCE(1025);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'B') ADVANCE(1047);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'C') ADVANCE(1064);
      if (lookahead == 'U') ADVANCE(1096);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'C') ADVANCE(1082);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'C') ADVANCE(2047);
      if (lookahead == 'L') ADVANCE(2049);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'C') ADVANCE(1065);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'C') ADVANCE(1088);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'C') ADVANCE(1043);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'C') ADVANCE(1066);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'C') ADVANCE(1067);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'C') ADVANCE(1097);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'C') ADVANCE(1098);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'D') ADVANCE(2065);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'E') ADVANCE(1052);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'E') ADVANCE(2029);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'E') ADVANCE(1068);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'E') ADVANCE(1032);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'E') ADVANCE(2027);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'E') ADVANCE(1086);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'E') ADVANCE(2053);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'E') ADVANCE(1040);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'E') ADVANCE(1087);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'E') ADVANCE(1039);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'G') ADVANCE(1089);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'G') ADVANCE(1057);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'G') ADVANCE(1079);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'H') ADVANCE(2063);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'H') ADVANCE(2043);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'I') ADVANCE(1092);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'I') ADVANCE(1095);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'I') ADVANCE(1029);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'I') ADVANCE(1053);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'I') ADVANCE(1101);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'I') ADVANCE(1074);
      if (lookahead == 'U') ADVANCE(1027);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'I') ADVANCE(1091);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'I') ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'K') ADVANCE(2035);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'K') ADVANCE(2045);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'K') ADVANCE(2055);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'K') ADVANCE(2041);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'L') ADVANCE(2033);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'M') ADVANCE(1083);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1070:
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
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'N') ADVANCE(1022);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'N') ADVANCE(1035);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'N') ADVANCE(1026);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'N') ADVANCE(1051);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'N') ADVANCE(1073);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'N') ADVANCE(1090);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'N') ADVANCE(1078);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'N') ADVANCE(1050);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'N') ADVANCE(1048);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'O') ADVANCE(1069);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'O') ADVANCE(1076);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'O') ADVANCE(1077);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'P') ADVANCE(2051);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'P') ADVANCE(2059);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'P') ADVANCE(1100);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'Q') ADVANCE(2057);
      if (lookahead == 'S') ADVANCE(1084);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'R') ADVANCE(2031);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'R') ADVANCE(1058);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'R') ADVANCE(1046);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'S') ADVANCE(2037);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'S') ADVANCE(1055);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'S') ADVANCE(1031);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'S') ADVANCE(1059);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'S') ADVANCE(1093);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'S') ADVANCE(1102);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'T') ADVANCE(1054);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'T') ADVANCE(2039);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'T') ADVANCE(2061);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'T') ADVANCE(1042);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'T') ADVANCE(1063);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'T') ADVANCE(1045);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'T') ADVANCE(1049);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'U') ADVANCE(1028);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'V') ADVANCE(1060);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'Y') ADVANCE(1099);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1217);
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ':' ||
          lookahead == ';') ADVANCE(904);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1811);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1812);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1206);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1220);
      if (lookahead == 'g') ADVANCE(1394);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1020);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1400);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1019);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1200);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1350);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1183);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1205);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1660);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1404);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1381);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1772);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1577);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1682);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1222);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1174);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1698);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1224);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1230);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1218);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1223);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1238);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1680);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1271);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1340);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1345);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1503);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1375);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1656);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1343);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1773);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1418);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1735);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1702);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1199);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1383);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1652);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1759);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1762);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1385);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1386);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1234);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1658);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1237);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1364);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1366);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1781);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1728);
      if (lookahead == 'e') ADVANCE(1212);
      if (lookahead == 'r') ADVANCE(1213);
      if (lookahead == 's') ADVANCE(1461);
      if (lookahead == 't') ADVANCE(1159);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1208);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1645);
      if (lookahead == 'o') ADVANCE(1591);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1947);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1673);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1620);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1487);
      if (lookahead == 'i') ADVANCE(1465);
      if (lookahead == 'r') ADVANCE(1303);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1239);
      if (lookahead == 'c') ADVANCE(1176);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1539);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1805);
      if (lookahead == 'e') ADVANCE(1769);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1644);
      if (lookahead == 'i') ADVANCE(1463);
      if (lookahead == 'r') ADVANCE(1412);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1240);
      if (lookahead == 'c') ADVANCE(1566);
      if (lookahead == 'q') ADVANCE(1780);
      if (lookahead == 's') ADVANCE(1301);
      if (lookahead == 't') ADVANCE(1179);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1387);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1589);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1215);
      if (lookahead == 'u') ADVANCE(1263);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1388);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1678);
      if (lookahead == 'e') ADVANCE(1165);
      if (lookahead == 'i') ADVANCE(1339);
      if (lookahead == 'o') ADVANCE(1685);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1590);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1509);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1467);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1498);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1414);
      if (lookahead == 'r') ADVANCE(2023);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1676);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1713);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1610);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1764);
      if (lookahead == 'c') ADVANCE(1482);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1741);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1207);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1504);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1636);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1688);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1748);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1490);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1419);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1252);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1637);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1749);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1739);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1638);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1750);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1751);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1199:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1600);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1200:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1601);
      if (lookahead == 'd') ADVANCE(1184);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1201:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1210);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1202:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1211);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1203:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'b') ADVANCE(1560);
      if (lookahead == 'c') ADVANCE(1726);
      if (lookahead == 'l') ADVANCE(1460);
      if (lookahead == 'n') ADVANCE(1801);
      if (lookahead == 's') ADVANCE(1674);
      if (lookahead == 'u') ADVANCE(1704);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1204:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'b') ADVANCE(1446);
      if (lookahead == 'n') ADVANCE(1459);
      if (lookahead == 'p') ADVANCE(1259);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1205:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'b') ADVANCE(1770);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1206:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'b') ADVANCE(1571);
      if (lookahead == 'd') ADVANCE(1684);
      if (lookahead == 'r') ADVANCE(1776);
      if (lookahead == 's') ADVANCE(1622);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1207:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'b') ADVANCE(1468);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1208:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'b') ADVANCE(1475);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1209:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'b') ADVANCE(1484);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1210:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'b') ADVANCE(1491);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1211:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'b') ADVANCE(1495);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1212:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'c') ADVANCE(1833);
      if (lookahead == 'l') ADVANCE(1334);
      if (lookahead == 'r') ADVANCE(1783);
      if (lookahead == 't') ADVANCE(1847);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1213:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'c') ADVANCE(2109);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1214:
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
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1215:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'c') ADVANCE(1447);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1216:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'c') ADVANCE(2097);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1217:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'c') ADVANCE(1562);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1812);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1218:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'c') ADVANCE(1775);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1219:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'c') ADVANCE(1170);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1220:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'c') ADVANCE(1466);
      if (lookahead == 's') ADVANCE(1335);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1221:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'c') ADVANCE(1777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1222:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'c') ADVANCE(1581);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1223:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'c') ADVANCE(1567);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1224:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'c') ADVANCE(1488);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1225:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'c') ADVANCE(1711);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1226:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'c') ADVANCE(1312);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1227:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'c') ADVANCE(1128);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1228:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'c') ADVANCE(1569);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1229:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'c') ADVANCE(1421);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1230:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'c') ADVANCE(1576);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1231:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'c') ADVANCE(1742);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1232:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'c') ADVANCE(1755);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1233:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'c') ADVANCE(1436);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1234:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'c') ADVANCE(1585);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1235:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'c') ADVANCE(1438);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1236:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'c') ADVANCE(1197);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1237:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'c') ADVANCE(1492);
      if (lookahead == 's') ADVANCE(1363);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1238:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'c') ADVANCE(1494);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1239:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'd') ADVANCE(2113);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1240:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'd') ADVANCE(1919);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1241:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'd') ADVANCE(1841);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1242:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'd') ADVANCE(2081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1243:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'd') ADVANCE(2091);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1244:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'd') ADVANCE(1867);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1245:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'd') ADVANCE(1869);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1246:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'd') ADVANCE(1957);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1247:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'd') ADVANCE(1959);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1248:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'd') ADVANCE(1137);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1249:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'd') ADVANCE(1141);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1250:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'd') ADVANCE(1666);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1251:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'd') ADVANCE(1118);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1252:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'd') ADVANCE(1132);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1253:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'd') ADVANCE(1127);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1254:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'd') ADVANCE(1111);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1255:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'd') ADVANCE(1348);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1256:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'd') ADVANCE(1145);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1257:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1452);
      if (lookahead == 'i') ADVANCE(1623);
      if (lookahead == 's') ADVANCE(1705);
      if (lookahead == 'u') ADVANCE(1588);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1258:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1168);
      if (lookahead == 'r') ADVANCE(1825);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1259:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1550);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1260:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1887);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1261:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1806);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1262:
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
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1263:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(2073);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1264:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(2089);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1265:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(2077);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1266:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(2114);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1267:
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
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1268:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1851);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1269:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(2101);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1270:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1925);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1271:
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
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1272:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(2121);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1273:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1985);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1274:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(2079);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1275:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1999);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1276:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1967);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1277:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1977);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1278:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1969);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1279:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1971);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1280:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1931);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1281:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1963);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1282:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(2003);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1283:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1927);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1284:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1939);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1285:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1605);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1286:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1975);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1287:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1965);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1288:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1987);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1289:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1214);
      if (lookahead == 't') ADVANCE(1185);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1290:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1501);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1291:
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
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1292:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1327);
      if (lookahead == 'o') ADVANCE(2075);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1293:
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
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1294:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1804);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1295:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1231);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1296:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1546);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1297:
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
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1298:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1618);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1299:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1244);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1300:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1707);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1301:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1642);
      if (lookahead == 'p') ADVANCE(1564);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1302:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1245);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1303:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1261);
      if (lookahead == 'o') ADVANCE(1502);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1304:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1632);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1305:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1246);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1306:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1247);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1307:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1709);
      if (lookahead == 'o') ADVANCE(1486);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1308:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1695);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1309:
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
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1310:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1311:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1182);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1312:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1116);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1313:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1657);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1314:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1609);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1315:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1316:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1114);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1317:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1714);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1318:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1737);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1319:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1677);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1320:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1151);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1321:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1140);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1322:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1112);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1323:
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
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1324:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1113);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1325:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1617);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1326:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1180);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1327:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1249);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1328:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1525);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1329:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1330:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1630);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1331:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1683);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1332:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1471);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1333:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1177);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1334:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1225);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1335:
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
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1336:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1347);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1337:
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
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1338:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1251);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1339:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1544);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1340:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1790);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1341:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1472);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1342:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1178);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1343:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1687);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1344:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1635);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1345:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1631);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1346:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1533);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1347:
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
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1348:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1131);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1349:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1689);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1350:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1633);
      if (lookahead == 'f') ADVANCE(1440);
      if (lookahead == 'r') ADVANCE(1285);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1351:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1757);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1352:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1690);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1353:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1254);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1354:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1537);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1355:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1541);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1356:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1545);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1357:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1548);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1358:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1551);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1359:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1538);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1360:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1232);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1361:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1700);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1362:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1701);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1363:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1655);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1364:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1791);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1365:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1659);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1366:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1792);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1367:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1149);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1368:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1150);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1369:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1256);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1370:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1156);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1371:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'f') ADVANCE(1625);
      if (lookahead == 's') ADVANCE(1756);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1372:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'f') ADVANCE(1382);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1373:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'f') ADVANCE(1405);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1374:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'f') ADVANCE(1462);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1375:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'f') ADVANCE(1433);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1376:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'f') ADVANCE(1628);
      if (lookahead == 's') ADVANCE(1761);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1377:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'f') ADVANCE(1555);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1378:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'f') ADVANCE(1411);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1379:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'f') ADVANCE(1413);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1380:
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
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1381:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'f') ADVANCE(1639);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1382:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'f') ADVANCE(1344);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1383:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'f') ADVANCE(1434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1384:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'f') ADVANCE(1435);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1385:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'f') ADVANCE(1437);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1386:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'f') ADVANCE(1439);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1387:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'g') ADVANCE(1879);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1388:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'g') ADVANCE(1877);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1389:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'g') ADVANCE(1955);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1390:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'g') ADVANCE(1979);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1391:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'g') ADVANCE(2015);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1392:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'g') ADVANCE(1528);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1393:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'g') ADVANCE(1126);
      if (lookahead == 'r') ADVANCE(1497);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1394:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'g') ADVANCE(1476);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1395:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'h') ADVANCE(1885);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1396:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'h') ADVANCE(2103);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1397:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'h') ADVANCE(1627);
      if (lookahead == 'l') ADVANCE(1663);
      if (lookahead == 'o') ADVANCE(1108);
      if (lookahead == 'r') ADVANCE(1171);
      if (lookahead == 's') ADVANCE(1831);
      if (lookahead == 'x') ADVANCE(1889);
      if (lookahead == 'y') ADVANCE(1596);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1398:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'h') ADVANCE(1568);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1399:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'h') ADVANCE(1296);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1400:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'h') ADVANCE(1332);
      if (lookahead == 'k') ADVANCE(1803);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1401:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'h') ADVANCE(1299);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1402:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'h') ADVANCE(1302);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1403:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'h') ADVANCE(1681);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1404:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'h') ADVANCE(1341);
      if (lookahead == 'k') ADVANCE(1294);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1405:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1393);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1406:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1508);
      if (lookahead == 'o') ADVANCE(1164);
      if (lookahead == 's') ADVANCE(1619);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1407:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1392);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1408:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1788);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1409:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1241);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1410:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1226);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1411:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1389);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1412:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1745);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1413:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1390);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1414:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1513);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1415:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1708);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1416:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1229);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1417:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1693);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1418:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1522);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1419:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1515);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1420:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1524);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1421:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1754);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1422:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1729);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1423:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1807);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1424:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1236);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1425:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1190);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1426:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1233);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1427:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1808);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1428:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1579);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1429:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1505);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1430:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1573);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1431:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1506);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1432:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1507);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1433:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1478);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1434:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1479);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1435:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1480);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1436:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1752);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1437:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1481);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1438:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1753);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1439:
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
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1440:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1485);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1441:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1696);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1442:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1346);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1443:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1354);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1444:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1359);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1445:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1235);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1446:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'j') ADVANCE(1360);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1447:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'k') ADVANCE(2095);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1448:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'k') ADVANCE(1557);
      if (lookahead == 's') ADVANCE(1307);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1449:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'k') ADVANCE(1540);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1450:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1173);
      if (lookahead == 'o') ADVANCE(1451);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1451:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1248);
      if (lookahead == 'n') ADVANCE(1373);
      if (lookahead == 'u') ADVANCE(1523);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1452:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1166);
      if (lookahead == 'v') ADVANCE(1410);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1453:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1827);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1454:
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
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1455:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1953);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1456:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1951);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1457:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(2001);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1458:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1949);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1459:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1802);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1460:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1121);
      if (lookahead == 'r') ADVANCE(1297);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1461:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1782);
      if (lookahead == 'n') ADVANCE(1015);
      if (lookahead == 'r') ADVANCE(1607);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1462:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1559);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1463:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1454);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1464:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1243);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1465:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1260);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1466:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1442);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1467:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1122);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1468:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1417);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1469:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1553);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1470:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1554);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1471:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1472:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1470);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1473:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1330);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1474:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1561);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1475:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1315);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1476:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1268);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1477:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1269);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1478:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1321);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1479:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1276);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1480:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1277);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1481:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1278);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1482:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1311);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1483:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1484:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1282);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1485:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1286);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1486:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1416);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1487:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1686);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1488:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1188);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1489:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1490:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1427);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1491:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1492:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1443);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1493:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1494:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1444);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1495:
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
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1496:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'm') ADVANCE(1510);
      if (lookahead == 'n') ADVANCE(1422);
      if (lookahead == 's') ADVANCE(1520);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1497:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'm') ADVANCE(1917);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1498:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'm') ADVANCE(1875);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1499:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'm') ADVANCE(1873);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1500:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'm') ADVANCE(1593);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1501:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'm') ADVANCE(1219);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1502:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'm') ADVANCE(1153);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1503:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'm') ADVANCE(1326);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1504:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'm') ADVANCE(1274);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1505:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'm') ADVANCE(1275);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1506:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'm') ADVANCE(1284);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1507:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'm') ADVANCE(1287);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1508:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'm') ADVANCE(1415);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1509:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'm') ADVANCE(1351);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1510:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'm') ADVANCE(1338);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1511:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'm') ADVANCE(1152);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1512:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1448);
      if (lookahead == 's') ADVANCE(1298);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1513:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(2069);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1514:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1913);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1515:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(2085);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1516:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(2087);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1517:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(2009);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1518:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1449);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1519:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1158);
      if (lookahead == 'o') ADVANCE(1453);
      if (lookahead == 's') ADVANCE(1289);
      if (lookahead == 'v') ADVANCE(1328);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1520:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1565);
      if (lookahead == 's') ADVANCE(1300);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1521:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1250);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1522:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1377);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1523:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1706);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1524:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1391);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1525:
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
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1526:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1227);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1527:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1528:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1125);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1529:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1694);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1530:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1668);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1531:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1611);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1532:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1612);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1533:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1715);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1534:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1615);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1535:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1744);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1536:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1616);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1537:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1716);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1538:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1721);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1539:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1124);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1540:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1578);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1541:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1743);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1542:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1378);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1543:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1691);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1544:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1738);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1545:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1746);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1546:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1736);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1547:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1379);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1548:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1747);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1549:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1692);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1550:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1144);
      if (lookahead == 'r') ADVANCE(1189);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1551:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1768);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1552:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1703);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1553:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(1905);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1554:
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
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1555:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(1973);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1556:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(1989);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1557:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(1795);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1558:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(1723);
      if (lookahead == 'y') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1559:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(1793);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1560:
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
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1561:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(1794);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1562:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(1500);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1563:
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
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1564:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(1543);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1565:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(1730);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1566:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(1650);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1567:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(1255);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1568:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(1464);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1569:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(1542);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1570:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(1621);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1571:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(1727);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1572:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(1457);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1573:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(1516);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1574:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(1613);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1575:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(1130);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1576:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(1629);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1577:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(1602);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1578:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(1796);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1579:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(1530);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1580:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(1142);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1581:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(1535);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1582:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(1640);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1583:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(1549);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1584:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(1489);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1585:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(1547);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1586:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(1786);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1587:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(1493);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1588:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'p') ADVANCE(2067);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1589:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'p') ADVANCE(2119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1590:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'p') ADVANCE(1594);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1591:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'p') ADVANCE(1123);
      if (lookahead == 'r') ADVANCE(2025);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1592:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'p') ADVANCE(1603);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1593:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'p') ADVANCE(1181);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1594:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'p') ADVANCE(1455);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1595:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'p') ADVANCE(1456);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1596:
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
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1597:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'p') ADVANCE(1556);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1598:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'p') ADVANCE(1458);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1599:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'p') ADVANCE(1719);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1600:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'p') ADVANCE(1595);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1601:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'p') ADVANCE(1598);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1602:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'p') ADVANCE(1313);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1603:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'p') ADVANCE(1582);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1604:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'p') ADVANCE(1583);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1605:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'q') ADVANCE(1981);
      if (lookahead == 's') ADVANCE(1597);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1606:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1837);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1607:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1839);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1608:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1861);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1609:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1865);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1610:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1935);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1611:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1937);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1612:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1933);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1613:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(2011);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1614:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1983);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1615:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1929);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1616:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1941);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1617:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1881);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1618:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1527);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1619:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1606);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1620:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1175);
      if (lookahead == 's') ADVANCE(1665);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1621:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1242);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1622:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1216);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1623:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1295);
      if (lookahead == 's') ADVANCE(1202);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1624:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1771);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1625:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1169);
      if (lookahead == 'u') ADVANCE(1526);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1626:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1563);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1627:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1329);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1628:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1629:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1624);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1630:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1712);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1631:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1649);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1632:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1117);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1633:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1614);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1634:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1333);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1635:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1129);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1636:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1717);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1637:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1718);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1638:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1720);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1639:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1336);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1640:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1722);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1641:
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
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1642:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1789);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1643:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1380);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1644:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1511);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1645:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1765);
      if (lookahead == 't') ADVANCE(1266);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1646:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1572);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1647:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1134);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1648:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1318);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1649:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1574);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1650:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1253);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1651:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1661);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1652:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1319);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1653:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1784);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1654:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1342);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1655:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1785);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1656:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1352);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1657:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1198);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1658:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1361);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1659:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1787);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1660:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1362);
      if (lookahead == 't') ADVANCE(1626);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1661:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1358);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1662:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1767);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1663:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(1018);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1664:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(2071);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1665:
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
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1666:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(2107);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1667:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(1871);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1668:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(1991);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1669:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(1961);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1670:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(1993);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1671:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(1995);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1672:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(1997);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1673:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(1403);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1674:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(1407);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1675:
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
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1676:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(1778);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1677:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(1604);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1678:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(1679);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1679:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(1109);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1680:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(1774);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1681:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(1423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1682:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(1734);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1683:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(1667);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1684:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(1710);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1685:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(1367);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1686:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(1265);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1687:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(1766);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1688:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(1669);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1689:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(1724);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1690:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(1740);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1691:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(1273);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1692:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(1288);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1693:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(1401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1694:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(1584);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1695:
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
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1696:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(1402);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1697:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(1317);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1698:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(1308);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1699:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(1430);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1700:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(1760);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1701:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(1763);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1702:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(1365);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1703:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(1587);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1704:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1399);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1705:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(2111);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1706:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(2105);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1707:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1849);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1708:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(2093);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1709:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1853);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1710:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(2099);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1711:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1923);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1712:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1857);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1713:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1915);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1714:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1855);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1715:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1859);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1716:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1863);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1717:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1943);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1718:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1945);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1719:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(2017);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1720:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(2005);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1721:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1883);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1722:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(2007);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1723:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1395);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1724:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1016);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1725:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1136);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1726:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1408);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1727:
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
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1728:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1409);
      if (lookahead == 'v') ADVANCE(1262);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1729:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1425);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1730:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1697);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1731:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1115);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1732:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1580);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1733:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1575);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1734:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1195);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1735:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1429);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1736:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1424);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1737:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1191);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1738:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1110);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1739:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1428);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1740:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1187);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1741:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1160);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1742:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1120);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1743:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1670);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1744:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1646);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1745:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1267);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1746:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1671);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1747:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1672);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1748:
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
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1749:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1320);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1750:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1324);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1751:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1283);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1752:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1305);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1753:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1306);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1754:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1369);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1755:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1139);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1756:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1634);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1757:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1337);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1758:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1420);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1759:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1431);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1760:
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
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1761:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1654);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1762:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1432);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1763:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1196);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1764:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1146);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1765:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1143);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1766:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1201);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1767:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1147);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1768:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1148);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1769:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1368);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1770:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'u') ADVANCE(1372);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1771:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'u') ADVANCE(1599);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1772:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'u') ADVANCE(1529);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1773:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'u') ADVANCE(1518);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1774:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'u') ADVANCE(1592);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1775:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'u') ADVANCE(1651);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1776:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'u') ADVANCE(1477);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1777:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'u') ADVANCE(1758);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1778:
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
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1779:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'u') ADVANCE(1209);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1780:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'u') ADVANCE(1349);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1781:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'u') ADVANCE(1552);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1782:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'v') ADVANCE(1021);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1783:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'v') ADVANCE(1304);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1784:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'v') ADVANCE(1309);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1785:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'v') ADVANCE(1314);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1786:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'v') ADVANCE(1323);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1787:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'v') ADVANCE(1325);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1788:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'v') ADVANCE(1194);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1789:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'v') ADVANCE(1353);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1790:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'v') ADVANCE(1355);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1791:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'v') ADVANCE(1356);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1792:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'v') ADVANCE(1357);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1793:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'w') ADVANCE(1891);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1794:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'w') ADVANCE(2013);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1795:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'w') ADVANCE(1514);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1796:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'w') ADVANCE(1517);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1797:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'w') ADVANCE(1570);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1798:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'x') ADVANCE(1909);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1799:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'x') ADVANCE(1911);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1800:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'x') ADVANCE(1310);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1801:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'y') ADVANCE(988);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1802:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'y') ADVANCE(1843);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1803:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'y') ADVANCE(1798);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1804:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'y') ADVANCE(1799);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1805:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'y') ADVANCE(1135);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1806:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'z') ADVANCE(1316);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1807:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'z') ADVANCE(1272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1808:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'z') ADVANCE(1322);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1809:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'z') ADVANCE(1280);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1810:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1810);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1811:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ':' ||
          lookahead == ';') ADVANCE(904);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1811);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1812);
      END_STATE();
    case 1812:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1812);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1813:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1814:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 1815:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1815);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1816);
      END_STATE();
    case 1816:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1816);
      END_STATE();
    case 1817:
      ACCEPT_TOKEN(sym_decimal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1817);
      END_STATE();
    case 1818:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 1819:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1820:
      ACCEPT_TOKEN(aux_sym_hexidecimal_token1);
      END_STATE();
    case 1821:
      ACCEPT_TOKEN(aux_sym_hexidecimal_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1820);
      END_STATE();
    case 1822:
      ACCEPT_TOKEN(aux_sym_hexidecimal_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1821);
      END_STATE();
    case 1823:
      ACCEPT_TOKEN(aux_sym_hexidecimal_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1822);
      END_STATE();
    case 1824:
      ACCEPT_TOKEN(anon_sym_rr);
      END_STATE();
    case 1825:
      ACCEPT_TOKEN(anon_sym_rr);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1826:
      ACCEPT_TOKEN(anon_sym_eol);
      END_STATE();
    case 1827:
      ACCEPT_TOKEN(anon_sym_eol);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1828:
      ACCEPT_TOKEN(anon_sym_nop);
      END_STATE();
    case 1829:
      ACCEPT_TOKEN(anon_sym_nop);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1830:
      ACCEPT_TOKEN(anon_sym_ts);
      END_STATE();
    case 1831:
      ACCEPT_TOKEN(anon_sym_ts);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1832:
      ACCEPT_TOKEN(anon_sym_sec);
      if (lookahead == 'o') ADVANCE(566);
      END_STATE();
    case 1833:
      ACCEPT_TOKEN(anon_sym_sec);
      if (lookahead == 'o') ADVANCE(1521);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1834:
      ACCEPT_TOKEN(anon_sym_esec);
      END_STATE();
    case 1835:
      ACCEPT_TOKEN(anon_sym_esec);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1836:
      ACCEPT_TOKEN(anon_sym_lsrr);
      END_STATE();
    case 1837:
      ACCEPT_TOKEN(anon_sym_lsrr);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1838:
      ACCEPT_TOKEN(anon_sym_ssrr);
      END_STATE();
    case 1839:
      ACCEPT_TOKEN(anon_sym_ssrr);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1840:
      ACCEPT_TOKEN(anon_sym_satid);
      END_STATE();
    case 1841:
      ACCEPT_TOKEN(anon_sym_satid);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1842:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '_') ADVANCE(414);
      END_STATE();
    case 1843:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '_') ADVANCE(1376);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1844:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 1845:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1846:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 1847:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1848:
      ACCEPT_TOKEN(anon_sym_isset);
      END_STATE();
    case 1849:
      ACCEPT_TOKEN(anon_sym_isset);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1850:
      ACCEPT_TOKEN(anon_sym_toggle);
      END_STATE();
    case 1851:
      ACCEPT_TOKEN(anon_sym_toggle);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1852:
      ACCEPT_TOKEN(anon_sym_unset);
      END_STATE();
    case 1853:
      ACCEPT_TOKEN(anon_sym_unset);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1854:
      ACCEPT_TOKEN(anon_sym_isnotset);
      END_STATE();
    case 1855:
      ACCEPT_TOKEN(anon_sym_isnotset);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1856:
      ACCEPT_TOKEN(anon_sym_noalert);
      END_STATE();
    case 1857:
      ACCEPT_TOKEN(anon_sym_noalert);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1858:
      ACCEPT_TOKEN(anon_sym_to_client);
      END_STATE();
    case 1859:
      ACCEPT_TOKEN(anon_sym_to_client);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1860:
      ACCEPT_TOKEN(anon_sym_to_server);
      END_STATE();
    case 1861:
      ACCEPT_TOKEN(anon_sym_to_server);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1862:
      ACCEPT_TOKEN(anon_sym_from_client);
      END_STATE();
    case 1863:
      ACCEPT_TOKEN(anon_sym_from_client);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1864:
      ACCEPT_TOKEN(anon_sym_from_server);
      END_STATE();
    case 1865:
      ACCEPT_TOKEN(anon_sym_from_server);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1866:
      ACCEPT_TOKEN(anon_sym_established);
      END_STATE();
    case 1867:
      ACCEPT_TOKEN(anon_sym_established);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1868:
      ACCEPT_TOKEN(anon_sym_not_established);
      END_STATE();
    case 1869:
      ACCEPT_TOKEN(anon_sym_not_established);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1870:
      ACCEPT_TOKEN(anon_sym_stateless);
      END_STATE();
    case 1871:
      ACCEPT_TOKEN(anon_sym_stateless);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1872:
      ACCEPT_TOKEN(anon_sym_only_stream);
      END_STATE();
    case 1873:
      ACCEPT_TOKEN(anon_sym_only_stream);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1874:
      ACCEPT_TOKEN(anon_sym_no_stream);
      END_STATE();
    case 1875:
      ACCEPT_TOKEN(anon_sym_no_stream);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1876:
      ACCEPT_TOKEN(anon_sym_only_frag);
      END_STATE();
    case 1877:
      ACCEPT_TOKEN(anon_sym_only_frag);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1878:
      ACCEPT_TOKEN(anon_sym_no_frag);
      END_STATE();
    case 1879:
      ACCEPT_TOKEN(anon_sym_no_frag);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1880:
      ACCEPT_TOKEN(anon_sym_request_SLASHto_server);
      END_STATE();
    case 1881:
      ACCEPT_TOKEN(anon_sym_request_SLASHto_server);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1882:
      ACCEPT_TOKEN(anon_sym_response_SLASHto_client);
      END_STATE();
    case 1883:
      ACCEPT_TOKEN(anon_sym_response_SLASHto_client);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1884:
      ACCEPT_TOKEN(anon_sym_both);
      END_STATE();
    case 1885:
      ACCEPT_TOKEN(anon_sym_both);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1886:
      ACCEPT_TOKEN(anon_sym_file);
      END_STATE();
    case 1887:
      ACCEPT_TOKEN(anon_sym_file);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1888:
      ACCEPT_TOKEN(anon_sym_tx);
      END_STATE();
    case 1889:
      ACCEPT_TOKEN(anon_sym_tx);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1890:
      ACCEPT_TOKEN(anon_sym_ssn_SLASHflow);
      END_STATE();
    case 1891:
      ACCEPT_TOKEN(anon_sym_ssn_SLASHflow);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1892:
      ACCEPT_TOKEN(anon_sym_sslv2);
      END_STATE();
    case 1893:
      ACCEPT_TOKEN(anon_sym_sslv2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1894:
      ACCEPT_TOKEN(anon_sym_sslv3);
      END_STATE();
    case 1895:
      ACCEPT_TOKEN(anon_sym_sslv3);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1896:
      ACCEPT_TOKEN(anon_sym_tls1_DOT0);
      END_STATE();
    case 1897:
      ACCEPT_TOKEN(anon_sym_tls1_DOT0);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1898:
      ACCEPT_TOKEN(anon_sym_tls1_DOT1);
      END_STATE();
    case 1899:
      ACCEPT_TOKEN(anon_sym_tls1_DOT1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1900:
      ACCEPT_TOKEN(anon_sym_tls1_DOT2);
      END_STATE();
    case 1901:
      ACCEPT_TOKEN(anon_sym_tls1_DOT2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1902:
      ACCEPT_TOKEN(anon_sym_tls1_DOT3);
      END_STATE();
    case 1903:
      ACCEPT_TOKEN(anon_sym_tls1_DOT3);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1904:
      ACCEPT_TOKEN(anon_sym_client_hello);
      END_STATE();
    case 1905:
      ACCEPT_TOKEN(anon_sym_client_hello);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1906:
      ACCEPT_TOKEN(anon_sym_server_hello);
      END_STATE();
    case 1907:
      ACCEPT_TOKEN(anon_sym_server_hello);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1908:
      ACCEPT_TOKEN(anon_sym_client_kyx);
      END_STATE();
    case 1909:
      ACCEPT_TOKEN(anon_sym_client_kyx);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1910:
      ACCEPT_TOKEN(anon_sym_server_keyx);
      END_STATE();
    case 1911:
      ACCEPT_TOKEN(anon_sym_server_keyx);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1912:
      ACCEPT_TOKEN(anon_sym_unkown);
      END_STATE();
    case 1913:
      ACCEPT_TOKEN(anon_sym_unkown);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1914:
      ACCEPT_TOKEN(anon_sym_2_compat);
      END_STATE();
    case 1915:
      ACCEPT_TOKEN(anon_sym_2_compat);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1916:
      ACCEPT_TOKEN(anon_sym_confirm);
      END_STATE();
    case 1917:
      ACCEPT_TOKEN(anon_sym_confirm);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1918:
      ACCEPT_TOKEN(anon_sym_read);
      END_STATE();
    case 1919:
      ACCEPT_TOKEN(anon_sym_read);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1920:
      ACCEPT_TOKEN(anon_sym_write);
      END_STATE();
    case 1921:
      ACCEPT_TOKEN(anon_sym_write);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1922:
      ACCEPT_TOKEN(anon_sym_select);
      END_STATE();
    case 1923:
      ACCEPT_TOKEN(anon_sym_select);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1924:
      ACCEPT_TOKEN(anon_sym_operate);
      END_STATE();
    case 1925:
      ACCEPT_TOKEN(anon_sym_operate);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1926:
      ACCEPT_TOKEN(anon_sym_direct_operate);
      if (lookahead == '_') ADVANCE(579);
      END_STATE();
    case 1927:
      ACCEPT_TOKEN(anon_sym_direct_operate);
      if (lookahead == '_') ADVANCE(1534);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1928:
      ACCEPT_TOKEN(anon_sym_direct_operate_nr);
      END_STATE();
    case 1929:
      ACCEPT_TOKEN(anon_sym_direct_operate_nr);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1930:
      ACCEPT_TOKEN(anon_sym_immed_freeze);
      if (lookahead == '_') ADVANCE(577);
      END_STATE();
    case 1931:
      ACCEPT_TOKEN(anon_sym_immed_freeze);
      if (lookahead == '_') ADVANCE(1532);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1932:
      ACCEPT_TOKEN(anon_sym_immed_freeze_nr);
      END_STATE();
    case 1933:
      ACCEPT_TOKEN(anon_sym_immed_freeze_nr);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1934:
      ACCEPT_TOKEN(anon_sym_freeze_clear);
      if (lookahead == '_') ADVANCE(576);
      END_STATE();
    case 1935:
      ACCEPT_TOKEN(anon_sym_freeze_clear);
      if (lookahead == '_') ADVANCE(1531);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1936:
      ACCEPT_TOKEN(anon_sym_freeze_clear_nr);
      END_STATE();
    case 1937:
      ACCEPT_TOKEN(anon_sym_freeze_clear_nr);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1938:
      ACCEPT_TOKEN(anon_sym_freeze_at_time);
      if (lookahead == '_') ADVANCE(581);
      END_STATE();
    case 1939:
      ACCEPT_TOKEN(anon_sym_freeze_at_time);
      if (lookahead == '_') ADVANCE(1536);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1940:
      ACCEPT_TOKEN(anon_sym_freeze_at_time_nr);
      END_STATE();
    case 1941:
      ACCEPT_TOKEN(anon_sym_freeze_at_time_nr);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1942:
      ACCEPT_TOKEN(anon_sym_cold_restart);
      END_STATE();
    case 1943:
      ACCEPT_TOKEN(anon_sym_cold_restart);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1944:
      ACCEPT_TOKEN(anon_sym_warm_restart);
      END_STATE();
    case 1945:
      ACCEPT_TOKEN(anon_sym_warm_restart);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1946:
      ACCEPT_TOKEN(anon_sym_initialize_data);
      END_STATE();
    case 1947:
      ACCEPT_TOKEN(anon_sym_initialize_data);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1948:
      ACCEPT_TOKEN(anon_sym_initialize_appl);
      END_STATE();
    case 1949:
      ACCEPT_TOKEN(anon_sym_initialize_appl);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1950:
      ACCEPT_TOKEN(anon_sym_start_appl);
      END_STATE();
    case 1951:
      ACCEPT_TOKEN(anon_sym_start_appl);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1952:
      ACCEPT_TOKEN(anon_sym_stop_appl);
      END_STATE();
    case 1953:
      ACCEPT_TOKEN(anon_sym_stop_appl);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1954:
      ACCEPT_TOKEN(anon_sym_save_config);
      END_STATE();
    case 1955:
      ACCEPT_TOKEN(anon_sym_save_config);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1956:
      ACCEPT_TOKEN(anon_sym_enable_unsolicited);
      END_STATE();
    case 1957:
      ACCEPT_TOKEN(anon_sym_enable_unsolicited);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1958:
      ACCEPT_TOKEN(anon_sym_disable_unsolicited);
      END_STATE();
    case 1959:
      ACCEPT_TOKEN(anon_sym_disable_unsolicited);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1960:
      ACCEPT_TOKEN(anon_sym_assign_class);
      END_STATE();
    case 1961:
      ACCEPT_TOKEN(anon_sym_assign_class);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1962:
      ACCEPT_TOKEN(anon_sym_delay_measure);
      END_STATE();
    case 1963:
      ACCEPT_TOKEN(anon_sym_delay_measure);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1964:
      ACCEPT_TOKEN(anon_sym_record_current_time);
      END_STATE();
    case 1965:
      ACCEPT_TOKEN(anon_sym_record_current_time);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1966:
      ACCEPT_TOKEN(anon_sym_open_file);
      END_STATE();
    case 1967:
      ACCEPT_TOKEN(anon_sym_open_file);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1968:
      ACCEPT_TOKEN(anon_sym_close_file);
      END_STATE();
    case 1969:
      ACCEPT_TOKEN(anon_sym_close_file);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1970:
      ACCEPT_TOKEN(anon_sym_delete_file);
      END_STATE();
    case 1971:
      ACCEPT_TOKEN(anon_sym_delete_file);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1972:
      ACCEPT_TOKEN(anon_sym_get_file_info);
      END_STATE();
    case 1973:
      ACCEPT_TOKEN(anon_sym_get_file_info);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1974:
      ACCEPT_TOKEN(anon_sym_authenticate_file);
      END_STATE();
    case 1975:
      ACCEPT_TOKEN(anon_sym_authenticate_file);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1976:
      ACCEPT_TOKEN(anon_sym_abort_file);
      END_STATE();
    case 1977:
      ACCEPT_TOKEN(anon_sym_abort_file);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1978:
      ACCEPT_TOKEN(anon_sym_activate_config);
      END_STATE();
    case 1979:
      ACCEPT_TOKEN(anon_sym_activate_config);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1980:
      ACCEPT_TOKEN(anon_sym_authenticate_req);
      END_STATE();
    case 1981:
      ACCEPT_TOKEN(anon_sym_authenticate_req);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1982:
      ACCEPT_TOKEN(anon_sym_authenticate_err);
      END_STATE();
    case 1983:
      ACCEPT_TOKEN(anon_sym_authenticate_err);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1984:
      ACCEPT_TOKEN(anon_sym_response);
      if (lookahead == '/') ADVANCE(826);
      END_STATE();
    case 1985:
      ACCEPT_TOKEN(anon_sym_response);
      if (lookahead == '/') ADVANCE(1733);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1986:
      ACCEPT_TOKEN(anon_sym_unsolicited_response);
      END_STATE();
    case 1987:
      ACCEPT_TOKEN(anon_sym_unsolicited_response);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1988:
      ACCEPT_TOKEN(anon_sym_authenticate_respo);
      END_STATE();
    case 1989:
      ACCEPT_TOKEN(anon_sym_authenticate_respo);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1990:
      ACCEPT_TOKEN(anon_sym_all_stations);
      END_STATE();
    case 1991:
      ACCEPT_TOKEN(anon_sym_all_stations);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1992:
      ACCEPT_TOKEN(anon_sym_class_1_events);
      END_STATE();
    case 1993:
      ACCEPT_TOKEN(anon_sym_class_1_events);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1994:
      ACCEPT_TOKEN(anon_sym_class_2_events);
      END_STATE();
    case 1995:
      ACCEPT_TOKEN(anon_sym_class_2_events);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1996:
      ACCEPT_TOKEN(anon_sym_class_3_events);
      END_STATE();
    case 1997:
      ACCEPT_TOKEN(anon_sym_class_3_events);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 1998:
      ACCEPT_TOKEN(anon_sym_need_time);
      END_STATE();
    case 1999:
      ACCEPT_TOKEN(anon_sym_need_time);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 2000:
      ACCEPT_TOKEN(anon_sym_local_control);
      END_STATE();
    case 2001:
      ACCEPT_TOKEN(anon_sym_local_control);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 2002:
      ACCEPT_TOKEN(anon_sym_device_trouble);
      END_STATE();
    case 2003:
      ACCEPT_TOKEN(anon_sym_device_trouble);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 2004:
      ACCEPT_TOKEN(anon_sym_device_restart);
      END_STATE();
    case 2005:
      ACCEPT_TOKEN(anon_sym_device_restart);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 2006:
      ACCEPT_TOKEN(anon_sym_no_func_code_support);
      END_STATE();
    case 2007:
      ACCEPT_TOKEN(anon_sym_no_func_code_support);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 2008:
      ACCEPT_TOKEN(anon_sym_object_unknown);
      END_STATE();
    case 2009:
      ACCEPT_TOKEN(anon_sym_object_unknown);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 2010:
      ACCEPT_TOKEN(anon_sym_parameter_error);
      END_STATE();
    case 2011:
      ACCEPT_TOKEN(anon_sym_parameter_error);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 2012:
      ACCEPT_TOKEN(anon_sym_event_buffer_overflow);
      END_STATE();
    case 2013:
      ACCEPT_TOKEN(anon_sym_event_buffer_overflow);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 2014:
      ACCEPT_TOKEN(anon_sym_alread_executing);
      END_STATE();
    case 2015:
      ACCEPT_TOKEN(anon_sym_alread_executing);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 2016:
      ACCEPT_TOKEN(anon_sym_config_corrupt);
      END_STATE();
    case 2017:
      ACCEPT_TOKEN(anon_sym_config_corrupt);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 2018:
      ACCEPT_TOKEN(anon_sym_reserved_2);
      END_STATE();
    case 2019:
      ACCEPT_TOKEN(anon_sym_reserved_2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 2020:
      ACCEPT_TOKEN(anon_sym_reserved_1);
      END_STATE();
    case 2021:
      ACCEPT_TOKEN(anon_sym_reserved_1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 2022:
      ACCEPT_TOKEN(anon_sym_retr);
      END_STATE();
    case 2023:
      ACCEPT_TOKEN(anon_sym_retr);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 2024:
      ACCEPT_TOKEN(anon_sym_stor);
      END_STATE();
    case 2025:
      ACCEPT_TOKEN(anon_sym_stor);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 2026:
      ACCEPT_TOKEN(anon_sym_INVITE);
      END_STATE();
    case 2027:
      ACCEPT_TOKEN(anon_sym_INVITE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 2028:
      ACCEPT_TOKEN(anon_sym_BYTE);
      END_STATE();
    case 2029:
      ACCEPT_TOKEN(anon_sym_BYTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 2030:
      ACCEPT_TOKEN(anon_sym_REGISTER);
      END_STATE();
    case 2031:
      ACCEPT_TOKEN(anon_sym_REGISTER);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 2032:
      ACCEPT_TOKEN(anon_sym_CANCEL);
      END_STATE();
    case 2033:
      ACCEPT_TOKEN(anon_sym_CANCEL);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 2034:
      ACCEPT_TOKEN(anon_sym_ACK);
      END_STATE();
    case 2035:
      ACCEPT_TOKEN(anon_sym_ACK);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 2036:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      END_STATE();
    case 2037:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 2038:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      END_STATE();
    case 2039:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 2040:
      ACCEPT_TOKEN(anon_sym_CONNACK);
      END_STATE();
    case 2041:
      ACCEPT_TOKEN(anon_sym_CONNACK);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 2042:
      ACCEPT_TOKEN(anon_sym_PUBLISH);
      END_STATE();
    case 2043:
      ACCEPT_TOKEN(anon_sym_PUBLISH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 2044:
      ACCEPT_TOKEN(anon_sym_PUBACK);
      END_STATE();
    case 2045:
      ACCEPT_TOKEN(anon_sym_PUBACK);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 2046:
      ACCEPT_TOKEN(anon_sym_PUBREC);
      END_STATE();
    case 2047:
      ACCEPT_TOKEN(anon_sym_PUBREC);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 2048:
      ACCEPT_TOKEN(anon_sym_PUBREL);
      END_STATE();
    case 2049:
      ACCEPT_TOKEN(anon_sym_PUBREL);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 2050:
      ACCEPT_TOKEN(anon_sym_PUBCOMP);
      END_STATE();
    case 2051:
      ACCEPT_TOKEN(anon_sym_PUBCOMP);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 2052:
      ACCEPT_TOKEN(anon_sym_SUBSCRIBE);
      END_STATE();
    case 2053:
      ACCEPT_TOKEN(anon_sym_SUBSCRIBE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 2054:
      ACCEPT_TOKEN(anon_sym_SUBACK);
      END_STATE();
    case 2055:
      ACCEPT_TOKEN(anon_sym_SUBACK);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 2056:
      ACCEPT_TOKEN(anon_sym_PINGREQ);
      END_STATE();
    case 2057:
      ACCEPT_TOKEN(anon_sym_PINGREQ);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 2058:
      ACCEPT_TOKEN(anon_sym_PINGRESP);
      END_STATE();
    case 2059:
      ACCEPT_TOKEN(anon_sym_PINGRESP);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 2060:
      ACCEPT_TOKEN(anon_sym_DISCONNECT);
      END_STATE();
    case 2061:
      ACCEPT_TOKEN(anon_sym_DISCONNECT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 2062:
      ACCEPT_TOKEN(anon_sym_AUTH);
      END_STATE();
    case 2063:
      ACCEPT_TOKEN(anon_sym_AUTH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 2064:
      ACCEPT_TOKEN(anon_sym_UNASSIGNED);
      END_STATE();
    case 2065:
      ACCEPT_TOKEN(anon_sym_UNASSIGNED);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 2066:
      ACCEPT_TOKEN(anon_sym_dup);
      END_STATE();
    case 2067:
      ACCEPT_TOKEN(anon_sym_dup);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 2068:
      ACCEPT_TOKEN(anon_sym_retain);
      END_STATE();
    case 2069:
      ACCEPT_TOKEN(anon_sym_retain);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 2070:
      ACCEPT_TOKEN(anon_sym_yes);
      END_STATE();
    case 2071:
      ACCEPT_TOKEN(anon_sym_yes);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 2072:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 2073:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 2074:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead == '_') ADVANCE(407);
      if (lookahead == 'a') ADVANCE(515);
      if (lookahead == 'p') ADVANCE(1828);
      if (lookahead == 't') ADVANCE(141);
      END_STATE();
    case 2075:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead == '_') ADVANCE(1371);
      if (lookahead == 'a') ADVANCE(1473);
      if (lookahead == 'p') ADVANCE(1829);
      if (lookahead == 't') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 2076:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 2077:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 2078:
      ACCEPT_TOKEN(anon_sym_username);
      END_STATE();
    case 2079:
      ACCEPT_TOKEN(anon_sym_username);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 2080:
      ACCEPT_TOKEN(anon_sym_password);
      END_STATE();
    case 2081:
      ACCEPT_TOKEN(anon_sym_password);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 2082:
      ACCEPT_TOKEN(anon_sym_will);
      if (lookahead == '_') ADVANCE(1648);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 2083:
      ACCEPT_TOKEN(anon_sym_will);
      if (lookahead == '_') ADVANCE(722);
      END_STATE();
    case 2084:
      ACCEPT_TOKEN(anon_sym_will_retain);
      END_STATE();
    case 2085:
      ACCEPT_TOKEN(anon_sym_will_retain);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 2086:
      ACCEPT_TOKEN(anon_sym_clean_session);
      END_STATE();
    case 2087:
      ACCEPT_TOKEN(anon_sym_clean_session);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 2088:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 2089:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 2090:
      ACCEPT_TOKEN(anon_sym_threshold);
      END_STATE();
    case 2091:
      ACCEPT_TOKEN(anon_sym_threshold);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 2092:
      ACCEPT_TOKEN(anon_sym_limit);
      END_STATE();
    case 2093:
      ACCEPT_TOKEN(anon_sym_limit);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 2094:
      ACCEPT_TOKEN(anon_sym_track);
      END_STATE();
    case 2095:
      ACCEPT_TOKEN(anon_sym_track);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 2096:
      ACCEPT_TOKEN(anon_sym_by_src);
      END_STATE();
    case 2097:
      ACCEPT_TOKEN(anon_sym_by_src);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 2098:
      ACCEPT_TOKEN(anon_sym_by_dst);
      END_STATE();
    case 2099:
      ACCEPT_TOKEN(anon_sym_by_dst);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 2100:
      ACCEPT_TOKEN(anon_sym_by_rule);
      END_STATE();
    case 2101:
      ACCEPT_TOKEN(anon_sym_by_rule);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 2102:
      ACCEPT_TOKEN(anon_sym_by_both);
      END_STATE();
    case 2103:
      ACCEPT_TOKEN(anon_sym_by_both);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 2104:
      ACCEPT_TOKEN(anon_sym_count);
      END_STATE();
    case 2105:
      ACCEPT_TOKEN(anon_sym_count);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 2106:
      ACCEPT_TOKEN(anon_sym_seconds);
      END_STATE();
    case 2107:
      ACCEPT_TOKEN(anon_sym_seconds);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 2108:
      ACCEPT_TOKEN(anon_sym_src);
      END_STATE();
    case 2109:
      ACCEPT_TOKEN(anon_sym_src);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 2110:
      ACCEPT_TOKEN(anon_sym_dst);
      END_STATE();
    case 2111:
      ACCEPT_TOKEN(anon_sym_dst);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 2112:
      ACCEPT_TOKEN(anon_sym_load);
      END_STATE();
    case 2113:
      ACCEPT_TOKEN(anon_sym_load);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 2114:
      ACCEPT_TOKEN(anon_sym_state);
      if (lookahead == 'l') ADVANCE(1331);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 2115:
      ACCEPT_TOKEN(anon_sym_state);
      if (lookahead == 'l') ADVANCE(366);
      END_STATE();
    case 2116:
      ACCEPT_TOKEN(anon_sym_save);
      if (lookahead == '_') ADVANCE(1228);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 2117:
      ACCEPT_TOKEN(anon_sym_save);
      if (lookahead == '_') ADVANCE(251);
      END_STATE();
    case 2118:
      ACCEPT_TOKEN(anon_sym_memcap);
      END_STATE();
    case 2119:
      ACCEPT_TOKEN(anon_sym_memcap);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    case 2120:
      ACCEPT_TOKEN(anon_sym_hashsize);
      END_STATE();
    case 2121:
      ACCEPT_TOKEN(anon_sym_hashsize);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1813);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 906},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 906},
  [8] = {.lex_state = 906},
  [9] = {.lex_state = 906},
  [10] = {.lex_state = 906},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 906},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 906},
  [19] = {.lex_state = 906},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 906},
  [22] = {.lex_state = 906},
  [23] = {.lex_state = 906},
  [24] = {.lex_state = 906},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 906},
  [27] = {.lex_state = 906},
  [28] = {.lex_state = 906},
  [29] = {.lex_state = 906},
  [30] = {.lex_state = 906},
  [31] = {.lex_state = 906},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 906},
  [34] = {.lex_state = 906},
  [35] = {.lex_state = 906},
  [36] = {.lex_state = 906},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 906},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 906},
  [41] = {.lex_state = 906},
  [42] = {.lex_state = 906},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 906},
  [45] = {.lex_state = 906},
  [46] = {.lex_state = 906},
  [47] = {.lex_state = 5},
  [48] = {.lex_state = 906},
  [49] = {.lex_state = 5},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 906},
  [53] = {.lex_state = 906},
  [54] = {.lex_state = 906},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 5},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 906},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 906},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 951},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 899},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 899},
  [93] = {.lex_state = 899},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 909},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 900},
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
    [sym_semicolon] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_LT_GT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_x] = ACTIONS(1),
    [aux_sym_hexidecimal_token1] = ACTIONS(1),
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
    [anon_sym_STAR] = ACTIONS(1),
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
  },
  [1] = {
    [sym_source_file] = STATE(89),
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
    [sym_digit] = STATE(61),
    [sym_text] = STATE(61),
    [sym_string] = STATE(61),
    [sym_hexidecimal] = STATE(61),
    [sym_value] = STATE(96),
    [sym_constant] = STATE(61),
    [aux_sym_text_repeat1] = STATE(43),
    [sym_negation] = ACTIONS(11),
    [anon_sym_any] = ACTIONS(13),
    [anon_sym_GT] = ACTIONS(15),
    [anon_sym_LT] = ACTIONS(15),
    [anon_sym_LT_EQ] = ACTIONS(15),
    [anon_sym_GT_EQ] = ACTIONS(15),
    [aux_sym_digit_token1] = ACTIONS(17),
    [aux_sym_text_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_decimal] = ACTIONS(23),
    [anon_sym_x] = ACTIONS(25),
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
    [anon_sym_STAR] = ACTIONS(13),
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
  },
  [3] = {
    [sym_digit] = STATE(61),
    [sym_text] = STATE(61),
    [sym_string] = STATE(61),
    [sym_hexidecimal] = STATE(61),
    [sym_value] = STATE(94),
    [sym_constant] = STATE(61),
    [aux_sym_text_repeat1] = STATE(43),
    [sym_negation] = ACTIONS(11),
    [anon_sym_any] = ACTIONS(13),
    [anon_sym_GT] = ACTIONS(15),
    [anon_sym_LT] = ACTIONS(15),
    [anon_sym_LT_EQ] = ACTIONS(15),
    [anon_sym_GT_EQ] = ACTIONS(15),
    [aux_sym_digit_token1] = ACTIONS(17),
    [aux_sym_text_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_decimal] = ACTIONS(23),
    [anon_sym_x] = ACTIONS(25),
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
    [anon_sym_STAR] = ACTIONS(13),
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
  },
  [4] = {
    [sym_digit] = STATE(61),
    [sym_text] = STATE(61),
    [sym_string] = STATE(61),
    [sym_hexidecimal] = STATE(61),
    [sym_value] = STATE(87),
    [sym_constant] = STATE(61),
    [aux_sym_text_repeat1] = STATE(43),
    [sym_negation] = ACTIONS(11),
    [anon_sym_any] = ACTIONS(13),
    [anon_sym_GT] = ACTIONS(15),
    [anon_sym_LT] = ACTIONS(15),
    [anon_sym_LT_EQ] = ACTIONS(15),
    [anon_sym_GT_EQ] = ACTIONS(15),
    [aux_sym_digit_token1] = ACTIONS(17),
    [aux_sym_text_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_decimal] = ACTIONS(23),
    [anon_sym_x] = ACTIONS(25),
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
    [anon_sym_STAR] = ACTIONS(13),
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
  },
  [5] = {
    [sym_digit] = STATE(72),
    [sym_text] = STATE(72),
    [sym_string] = STATE(72),
    [sym_hexidecimal] = STATE(72),
    [sym_constant] = STATE(72),
    [aux_sym_text_repeat1] = STATE(43),
    [anon_sym_any] = ACTIONS(13),
    [anon_sym_GT] = ACTIONS(15),
    [anon_sym_LT] = ACTIONS(15),
    [anon_sym_LT_EQ] = ACTIONS(15),
    [anon_sym_GT_EQ] = ACTIONS(15),
    [aux_sym_digit_token1] = ACTIONS(17),
    [aux_sym_text_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_decimal] = ACTIONS(27),
    [anon_sym_x] = ACTIONS(25),
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
    [anon_sym_STAR] = ACTIONS(13),
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
  },
  [6] = {
    [sym_negation] = ACTIONS(29),
    [anon_sym_any] = ACTIONS(29),
    [anon_sym_GT] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_LT_EQ] = ACTIONS(29),
    [anon_sym_GT_EQ] = ACTIONS(29),
    [aux_sym_digit_token1] = ACTIONS(29),
    [aux_sym_text_token1] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [sym_decimal] = ACTIONS(29),
    [anon_sym_x] = ACTIONS(29),
    [anon_sym_rr] = ACTIONS(29),
    [anon_sym_eol] = ACTIONS(29),
    [anon_sym_nop] = ACTIONS(29),
    [anon_sym_ts] = ACTIONS(29),
    [anon_sym_sec] = ACTIONS(29),
    [anon_sym_esec] = ACTIONS(29),
    [anon_sym_lsrr] = ACTIONS(29),
    [anon_sym_ssrr] = ACTIONS(29),
    [anon_sym_satid] = ACTIONS(29),
    [anon_sym_only] = ACTIONS(29),
    [anon_sym_STAR] = ACTIONS(29),
    [anon_sym_set] = ACTIONS(29),
    [anon_sym_isset] = ACTIONS(29),
    [anon_sym_toggle] = ACTIONS(29),
    [anon_sym_unset] = ACTIONS(29),
    [anon_sym_isnotset] = ACTIONS(29),
    [anon_sym_noalert] = ACTIONS(29),
    [anon_sym_to_client] = ACTIONS(29),
    [anon_sym_to_server] = ACTIONS(29),
    [anon_sym_from_client] = ACTIONS(29),
    [anon_sym_from_server] = ACTIONS(29),
    [anon_sym_established] = ACTIONS(29),
    [anon_sym_not_established] = ACTIONS(29),
    [anon_sym_stateless] = ACTIONS(29),
    [anon_sym_only_stream] = ACTIONS(29),
    [anon_sym_no_stream] = ACTIONS(29),
    [anon_sym_only_frag] = ACTIONS(29),
    [anon_sym_no_frag] = ACTIONS(29),
    [anon_sym_request_SLASHto_server] = ACTIONS(29),
    [anon_sym_response_SLASHto_client] = ACTIONS(29),
    [anon_sym_both] = ACTIONS(29),
    [anon_sym_file] = ACTIONS(29),
    [anon_sym_tx] = ACTIONS(29),
    [anon_sym_ssn_SLASHflow] = ACTIONS(29),
    [anon_sym_sslv2] = ACTIONS(29),
    [anon_sym_sslv3] = ACTIONS(29),
    [anon_sym_tls1_DOT0] = ACTIONS(29),
    [anon_sym_tls1_DOT1] = ACTIONS(29),
    [anon_sym_tls1_DOT2] = ACTIONS(29),
    [anon_sym_tls1_DOT3] = ACTIONS(29),
    [anon_sym_client_hello] = ACTIONS(29),
    [anon_sym_server_hello] = ACTIONS(29),
    [anon_sym_client_kyx] = ACTIONS(29),
    [anon_sym_server_keyx] = ACTIONS(29),
    [anon_sym_unkown] = ACTIONS(29),
    [anon_sym_2_compat] = ACTIONS(29),
    [anon_sym_confirm] = ACTIONS(29),
    [anon_sym_read] = ACTIONS(29),
    [anon_sym_write] = ACTIONS(29),
    [anon_sym_select] = ACTIONS(29),
    [anon_sym_operate] = ACTIONS(29),
    [anon_sym_direct_operate] = ACTIONS(29),
    [anon_sym_direct_operate_nr] = ACTIONS(29),
    [anon_sym_immed_freeze] = ACTIONS(29),
    [anon_sym_immed_freeze_nr] = ACTIONS(29),
    [anon_sym_freeze_clear] = ACTIONS(29),
    [anon_sym_freeze_clear_nr] = ACTIONS(29),
    [anon_sym_freeze_at_time] = ACTIONS(29),
    [anon_sym_freeze_at_time_nr] = ACTIONS(29),
    [anon_sym_cold_restart] = ACTIONS(29),
    [anon_sym_warm_restart] = ACTIONS(29),
    [anon_sym_initialize_data] = ACTIONS(29),
    [anon_sym_initialize_appl] = ACTIONS(29),
    [anon_sym_start_appl] = ACTIONS(29),
    [anon_sym_stop_appl] = ACTIONS(29),
    [anon_sym_save_config] = ACTIONS(29),
    [anon_sym_enable_unsolicited] = ACTIONS(29),
    [anon_sym_disable_unsolicited] = ACTIONS(29),
    [anon_sym_assign_class] = ACTIONS(29),
    [anon_sym_delay_measure] = ACTIONS(29),
    [anon_sym_record_current_time] = ACTIONS(29),
    [anon_sym_open_file] = ACTIONS(29),
    [anon_sym_close_file] = ACTIONS(29),
    [anon_sym_delete_file] = ACTIONS(29),
    [anon_sym_get_file_info] = ACTIONS(29),
    [anon_sym_authenticate_file] = ACTIONS(29),
    [anon_sym_abort_file] = ACTIONS(29),
    [anon_sym_activate_config] = ACTIONS(29),
    [anon_sym_authenticate_req] = ACTIONS(29),
    [anon_sym_authenticate_err] = ACTIONS(29),
    [anon_sym_response] = ACTIONS(29),
    [anon_sym_unsolicited_response] = ACTIONS(29),
    [anon_sym_authenticate_respo] = ACTIONS(29),
    [anon_sym_all_stations] = ACTIONS(29),
    [anon_sym_class_1_events] = ACTIONS(29),
    [anon_sym_class_2_events] = ACTIONS(29),
    [anon_sym_class_3_events] = ACTIONS(29),
    [anon_sym_need_time] = ACTIONS(29),
    [anon_sym_local_control] = ACTIONS(29),
    [anon_sym_device_trouble] = ACTIONS(29),
    [anon_sym_device_restart] = ACTIONS(29),
    [anon_sym_no_func_code_support] = ACTIONS(29),
    [anon_sym_object_unknown] = ACTIONS(29),
    [anon_sym_parameter_error] = ACTIONS(29),
    [anon_sym_event_buffer_overflow] = ACTIONS(29),
    [anon_sym_alread_executing] = ACTIONS(29),
    [anon_sym_config_corrupt] = ACTIONS(29),
    [anon_sym_reserved_2] = ACTIONS(29),
    [anon_sym_reserved_1] = ACTIONS(29),
    [anon_sym_retr] = ACTIONS(29),
    [anon_sym_stor] = ACTIONS(29),
    [anon_sym_INVITE] = ACTIONS(29),
    [anon_sym_BYTE] = ACTIONS(29),
    [anon_sym_REGISTER] = ACTIONS(29),
    [anon_sym_CANCEL] = ACTIONS(29),
    [anon_sym_ACK] = ACTIONS(29),
    [anon_sym_OPTIONS] = ACTIONS(29),
    [anon_sym_CONNECT] = ACTIONS(29),
    [anon_sym_CONNACK] = ACTIONS(29),
    [anon_sym_PUBLISH] = ACTIONS(29),
    [anon_sym_PUBACK] = ACTIONS(29),
    [anon_sym_PUBREC] = ACTIONS(29),
    [anon_sym_PUBREL] = ACTIONS(29),
    [anon_sym_PUBCOMP] = ACTIONS(29),
    [anon_sym_SUBSCRIBE] = ACTIONS(29),
    [anon_sym_SUBACK] = ACTIONS(29),
    [anon_sym_PINGREQ] = ACTIONS(29),
    [anon_sym_PINGRESP] = ACTIONS(29),
    [anon_sym_DISCONNECT] = ACTIONS(29),
    [anon_sym_AUTH] = ACTIONS(29),
    [anon_sym_UNASSIGNED] = ACTIONS(29),
    [anon_sym_dup] = ACTIONS(29),
    [anon_sym_retain] = ACTIONS(29),
    [anon_sym_yes] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(29),
    [anon_sym_no] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(29),
    [anon_sym_username] = ACTIONS(29),
    [anon_sym_password] = ACTIONS(29),
    [anon_sym_will] = ACTIONS(29),
    [anon_sym_will_retain] = ACTIONS(29),
    [anon_sym_clean_session] = ACTIONS(29),
    [anon_sym_type] = ACTIONS(29),
    [anon_sym_threshold] = ACTIONS(29),
    [anon_sym_limit] = ACTIONS(29),
    [anon_sym_track] = ACTIONS(29),
    [anon_sym_by_src] = ACTIONS(29),
    [anon_sym_by_dst] = ACTIONS(29),
    [anon_sym_by_rule] = ACTIONS(29),
    [anon_sym_by_both] = ACTIONS(29),
    [anon_sym_count] = ACTIONS(29),
    [anon_sym_seconds] = ACTIONS(29),
    [anon_sym_src] = ACTIONS(29),
    [anon_sym_dst] = ACTIONS(29),
    [anon_sym_load] = ACTIONS(29),
    [anon_sym_state] = ACTIONS(29),
    [anon_sym_save] = ACTIONS(29),
    [anon_sym_memcap] = ACTIONS(29),
    [anon_sym_hashsize] = ACTIONS(29),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(33), 1,
      anon_sym_http,
    STATE(15), 1,
      sym_protocol,
    STATE(81), 1,
      sym_header,
    ACTIONS(31), 26,
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
    ACTIONS(37), 1,
      anon_sym_http,
    ACTIONS(35), 26,
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
    ACTIONS(39), 1,
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
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(43), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      anon_sym_reject,
    STATE(7), 1,
      sym_action,
    STATE(10), 4,
      sym__lines,
      sym_comment,
      sym__rule,
      aux_sym_source_file_repeat1,
    ACTIONS(46), 6,
      anon_sym_alert,
      anon_sym_pass,
      anon_sym_drop,
      anon_sym_rejectsrc,
      anon_sym_rejectdst,
      anon_sym_rejectboth,
  [124] = 8,
    ACTIONS(52), 1,
      anon_sym_LBRACK,
    ACTIONS(54), 1,
      anon_sym_RBRACK,
    ACTIONS(56), 1,
      sym_negation,
    ACTIONS(58), 1,
      anon_sym_DOLLAR,
    ACTIONS(60), 1,
      aux_sym_ipv4_token1,
    ACTIONS(62), 1,
      sym__ipv6_octet,
    STATE(17), 1,
      aux_sym_ipv6_repeat1,
    STATE(68), 6,
      sym__location,
      sym__standalone_location,
      sym_group_location,
      sym_variable,
      sym_ipv4,
      sym_ipv6,
  [154] = 8,
    ACTIONS(52), 1,
      anon_sym_LBRACK,
    ACTIONS(56), 1,
      sym_negation,
    ACTIONS(58), 1,
      anon_sym_DOLLAR,
    ACTIONS(60), 1,
      aux_sym_ipv4_token1,
    ACTIONS(62), 1,
      sym__ipv6_octet,
    ACTIONS(64), 1,
      anon_sym_RBRACK,
    STATE(17), 1,
      aux_sym_ipv6_repeat1,
    STATE(63), 6,
      sym__location,
      sym__standalone_location,
      sym_group_location,
      sym_variable,
      sym_ipv4,
      sym_ipv6,
  [184] = 7,
    ACTIONS(52), 1,
      anon_sym_LBRACK,
    ACTIONS(56), 1,
      sym_negation,
    ACTIONS(58), 1,
      anon_sym_DOLLAR,
    ACTIONS(60), 1,
      aux_sym_ipv4_token1,
    ACTIONS(62), 1,
      sym__ipv6_octet,
    STATE(17), 1,
      aux_sym_ipv6_repeat1,
    STATE(83), 6,
      sym__location,
      sym__standalone_location,
      sym_group_location,
      sym_variable,
      sym_ipv4,
      sym_ipv6,
  [211] = 7,
    ACTIONS(52), 1,
      anon_sym_LBRACK,
    ACTIONS(56), 1,
      sym_negation,
    ACTIONS(58), 1,
      anon_sym_DOLLAR,
    ACTIONS(60), 1,
      aux_sym_ipv4_token1,
    ACTIONS(62), 1,
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
    ACTIONS(52), 1,
      anon_sym_LBRACK,
    ACTIONS(56), 1,
      sym_negation,
    ACTIONS(58), 1,
      anon_sym_DOLLAR,
    ACTIONS(60), 1,
      aux_sym_ipv4_token1,
    ACTIONS(62), 1,
      sym__ipv6_octet,
    STATE(17), 1,
      aux_sym_ipv6_repeat1,
    STATE(26), 6,
      sym__location,
      sym__standalone_location,
      sym_group_location,
      sym_variable,
      sym_ipv4,
      sym_ipv6,
  [265] = 2,
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
  [279] = 5,
    ACTIONS(72), 1,
      aux_sym_ipv4_token2,
    ACTIONS(74), 1,
      sym__ipv6_octet,
    ACTIONS(76), 1,
      aux_sym_port_token1,
    STATE(20), 1,
      aux_sym_ipv6_repeat1,
    ACTIONS(70), 5,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_negation,
      anon_sym_any,
  [299] = 2,
    ACTIONS(80), 1,
      anon_sym_reject,
    ACTIONS(78), 8,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_alert,
      anon_sym_pass,
      anon_sym_drop,
      anon_sym_rejectsrc,
      anon_sym_rejectdst,
      anon_sym_rejectboth,
  [313] = 2,
    ACTIONS(84), 1,
      anon_sym_reject,
    ACTIONS(82), 8,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_alert,
      anon_sym_pass,
      anon_sym_drop,
      anon_sym_rejectsrc,
      anon_sym_rejectdst,
      anon_sym_rejectboth,
  [327] = 4,
    ACTIONS(88), 1,
      sym__ipv6_octet,
    ACTIONS(91), 1,
      aux_sym_port_token1,
    STATE(20), 1,
      aux_sym_ipv6_repeat1,
    ACTIONS(86), 6,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_negation,
      aux_sym_ipv4_token2,
      anon_sym_any,
  [345] = 2,
    ACTIONS(95), 1,
      anon_sym_reject,
    ACTIONS(93), 8,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_alert,
      anon_sym_pass,
      anon_sym_drop,
      anon_sym_rejectsrc,
      anon_sym_rejectdst,
      anon_sym_rejectboth,
  [359] = 2,
    ACTIONS(99), 1,
      anon_sym_reject,
    ACTIONS(97), 8,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_alert,
      anon_sym_pass,
      anon_sym_drop,
      anon_sym_rejectsrc,
      anon_sym_rejectdst,
      anon_sym_rejectboth,
  [373] = 6,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    ACTIONS(103), 1,
      anon_sym_RBRACK,
    ACTIONS(105), 1,
      sym_negation,
    ACTIONS(107), 1,
      anon_sym_any,
    ACTIONS(109), 1,
      aux_sym_port_token1,
    STATE(70), 3,
      sym__port_choices,
      sym_port,
      sym_group_port,
  [394] = 6,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    ACTIONS(105), 1,
      sym_negation,
    ACTIONS(107), 1,
      anon_sym_any,
    ACTIONS(109), 1,
      aux_sym_port_token1,
    ACTIONS(111), 1,
      anon_sym_RBRACK,
    STATE(55), 3,
      sym__port_choices,
      sym_port,
      sym_group_port,
  [415] = 6,
    ACTIONS(58), 1,
      anon_sym_DOLLAR,
    ACTIONS(60), 1,
      aux_sym_ipv4_token1,
    ACTIONS(62), 1,
      sym__ipv6_octet,
    ACTIONS(113), 1,
      anon_sym_LBRACK,
    STATE(17), 1,
      aux_sym_ipv6_repeat1,
    STATE(36), 3,
      sym_variable,
      sym_ipv4,
      sym_ipv6,
  [436] = 5,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    ACTIONS(105), 1,
      sym_negation,
    ACTIONS(107), 1,
      anon_sym_any,
    ACTIONS(109), 1,
      aux_sym_port_token1,
    STATE(71), 3,
      sym__port_choices,
      sym_port,
      sym_group_port,
  [454] = 5,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    ACTIONS(105), 1,
      sym_negation,
    ACTIONS(107), 1,
      anon_sym_any,
    ACTIONS(109), 1,
      aux_sym_port_token1,
    STATE(88), 3,
      sym__port_choices,
      sym_port,
      sym_group_port,
  [472] = 5,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    ACTIONS(105), 1,
      sym_negation,
    ACTIONS(107), 1,
      anon_sym_any,
    ACTIONS(109), 1,
      aux_sym_port_token1,
    STATE(84), 3,
      sym__port_choices,
      sym_port,
      sym_group_port,
  [490] = 2,
    ACTIONS(117), 1,
      aux_sym_ipv4_token2,
    ACTIONS(115), 6,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_negation,
      anon_sym_any,
      aux_sym_port_token1,
  [502] = 1,
    ACTIONS(119), 6,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_negation,
      anon_sym_any,
      aux_sym_port_token1,
  [511] = 1,
    ACTIONS(121), 6,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_negation,
      anon_sym_any,
      aux_sym_port_token1,
  [520] = 6,
    ACTIONS(123), 1,
      anon_sym_RPAREN,
    ACTIONS(125), 1,
      aux_sym_text_token1,
    STATE(39), 1,
      aux_sym_options_repeat1,
    STATE(43), 1,
      aux_sym_text_repeat1,
    STATE(76), 1,
      sym_text,
    STATE(85), 1,
      sym__opt,
  [539] = 2,
    ACTIONS(129), 1,
      sym_colon,
    ACTIONS(127), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH_GT,
      anon_sym_LT_GT,
      anon_sym_LPAREN,
  [550] = 1,
    ACTIONS(131), 6,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_negation,
      anon_sym_any,
      aux_sym_port_token1,
  [559] = 1,
    ACTIONS(133), 6,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_negation,
      anon_sym_any,
      aux_sym_port_token1,
  [568] = 1,
    ACTIONS(135), 6,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_negation,
      anon_sym_any,
      aux_sym_port_token1,
  [577] = 6,
    ACTIONS(125), 1,
      aux_sym_text_token1,
    ACTIONS(137), 1,
      anon_sym_RPAREN,
    STATE(32), 1,
      aux_sym_options_repeat1,
    STATE(43), 1,
      aux_sym_text_repeat1,
    STATE(76), 1,
      sym_text,
    STATE(85), 1,
      sym__opt,
  [596] = 1,
    ACTIONS(139), 6,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_negation,
      anon_sym_any,
      aux_sym_port_token1,
  [605] = 6,
    ACTIONS(141), 1,
      anon_sym_RPAREN,
    ACTIONS(143), 1,
      aux_sym_text_token1,
    STATE(39), 1,
      aux_sym_options_repeat1,
    STATE(43), 1,
      aux_sym_text_repeat1,
    STATE(76), 1,
      sym_text,
    STATE(85), 1,
      sym__opt,
  [624] = 1,
    ACTIONS(146), 6,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_negation,
      anon_sym_any,
      aux_sym_port_token1,
  [633] = 1,
    ACTIONS(148), 6,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_negation,
      anon_sym_any,
      aux_sym_port_token1,
  [642] = 2,
    ACTIONS(152), 1,
      sym_colon,
    ACTIONS(150), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH_GT,
      anon_sym_LT_GT,
      anon_sym_LPAREN,
  [653] = 3,
    ACTIONS(156), 1,
      aux_sym_text_token1,
    STATE(51), 1,
      aux_sym_text_repeat1,
    ACTIONS(154), 3,
      anon_sym_COMMA,
      sym_colon,
      sym_semicolon,
  [665] = 1,
    ACTIONS(158), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH_GT,
      anon_sym_LT_GT,
      anon_sym_LPAREN,
  [673] = 1,
    ACTIONS(160), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH_GT,
      anon_sym_LT_GT,
      anon_sym_LPAREN,
  [681] = 1,
    ACTIONS(162), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH_GT,
      anon_sym_LT_GT,
      anon_sym_LPAREN,
  [689] = 2,
    ACTIONS(166), 1,
      sym__ipv6_octet,
    ACTIONS(164), 4,
      anon_sym_LBRACK,
      sym_negation,
      anon_sym_DOLLAR,
      aux_sym_ipv4_token1,
  [699] = 1,
    ACTIONS(150), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH_GT,
      anon_sym_LT_GT,
      anon_sym_LPAREN,
  [707] = 2,
    ACTIONS(170), 1,
      sym__ipv6_octet,
    ACTIONS(168), 4,
      anon_sym_LBRACK,
      sym_negation,
      anon_sym_DOLLAR,
      aux_sym_ipv4_token1,
  [717] = 5,
    ACTIONS(125), 1,
      aux_sym_text_token1,
    ACTIONS(172), 1,
      anon_sym_RPAREN,
    STATE(43), 1,
      aux_sym_text_repeat1,
    STATE(76), 1,
      sym_text,
    STATE(91), 1,
      sym__opt,
  [733] = 3,
    ACTIONS(176), 1,
      aux_sym_text_token1,
    STATE(51), 1,
      aux_sym_text_repeat1,
    ACTIONS(174), 3,
      anon_sym_COMMA,
      sym_colon,
      sym_semicolon,
  [745] = 1,
    ACTIONS(179), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH_GT,
      anon_sym_LT_GT,
      anon_sym_LPAREN,
  [753] = 1,
    ACTIONS(181), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH_GT,
      anon_sym_LT_GT,
      anon_sym_LPAREN,
  [761] = 1,
    ACTIONS(127), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH_GT,
      anon_sym_LT_GT,
      anon_sym_LPAREN,
  [769] = 3,
    ACTIONS(183), 1,
      anon_sym_COMMA,
    ACTIONS(185), 1,
      anon_sym_RBRACK,
    STATE(58), 1,
      aux_sym_group_port_repeat1,
  [779] = 2,
    ACTIONS(189), 1,
      anon_sym_DASH,
    ACTIONS(187), 2,
      anon_sym_COMMA,
      sym_semicolon,
  [787] = 3,
    ACTIONS(191), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      aux_sym_string_token1,
    STATE(57), 1,
      aux_sym_string_repeat1,
  [797] = 3,
    ACTIONS(183), 1,
      anon_sym_COMMA,
    ACTIONS(196), 1,
      anon_sym_RBRACK,
    STATE(62), 1,
      aux_sym_group_port_repeat1,
  [807] = 2,
    ACTIONS(200), 1,
      anon_sym_DASH,
    ACTIONS(198), 2,
      anon_sym_COMMA,
      sym_semicolon,
  [815] = 3,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      aux_sym_string_token1,
    STATE(65), 1,
      aux_sym_string_repeat1,
  [825] = 3,
    ACTIONS(206), 1,
      anon_sym_COMMA,
    ACTIONS(208), 1,
      sym_semicolon,
    STATE(3), 1,
      sym_comma,
  [835] = 3,
    ACTIONS(210), 1,
      anon_sym_COMMA,
    ACTIONS(213), 1,
      anon_sym_RBRACK,
    STATE(62), 1,
      aux_sym_group_port_repeat1,
  [845] = 3,
    ACTIONS(215), 1,
      anon_sym_COMMA,
    ACTIONS(217), 1,
      anon_sym_RBRACK,
    STATE(67), 1,
      aux_sym_group_location_repeat1,
  [855] = 3,
    ACTIONS(215), 1,
      anon_sym_COMMA,
    ACTIONS(217), 1,
      anon_sym_RBRACK,
    STATE(66), 1,
      aux_sym_group_location_repeat1,
  [865] = 3,
    ACTIONS(219), 1,
      anon_sym_DQUOTE,
    ACTIONS(221), 1,
      aux_sym_string_token1,
    STATE(57), 1,
      aux_sym_string_repeat1,
  [875] = 3,
    ACTIONS(223), 1,
      anon_sym_COMMA,
    ACTIONS(226), 1,
      anon_sym_RBRACK,
    STATE(66), 1,
      aux_sym_group_location_repeat1,
  [885] = 3,
    ACTIONS(215), 1,
      anon_sym_COMMA,
    ACTIONS(228), 1,
      anon_sym_RBRACK,
    STATE(66), 1,
      aux_sym_group_location_repeat1,
  [895] = 3,
    ACTIONS(64), 1,
      anon_sym_RBRACK,
    ACTIONS(215), 1,
      anon_sym_COMMA,
    STATE(64), 1,
      aux_sym_group_location_repeat1,
  [905] = 3,
    ACTIONS(183), 1,
      anon_sym_COMMA,
    ACTIONS(185), 1,
      anon_sym_RBRACK,
    STATE(62), 1,
      aux_sym_group_port_repeat1,
  [915] = 3,
    ACTIONS(111), 1,
      anon_sym_RBRACK,
    ACTIONS(183), 1,
      anon_sym_COMMA,
    STATE(69), 1,
      aux_sym_group_port_repeat1,
  [925] = 2,
    STATE(14), 1,
      sym_direction,
    ACTIONS(230), 2,
      anon_sym_DASH_GT,
      anon_sym_LT_GT,
  [933] = 3,
    ACTIONS(206), 1,
      anon_sym_COMMA,
    ACTIONS(232), 1,
      sym_semicolon,
    STATE(2), 1,
      sym_comma,
  [943] = 1,
    ACTIONS(234), 2,
      anon_sym_COMMA,
      sym_semicolon,
  [948] = 1,
    ACTIONS(236), 2,
      anon_sym_COMMA,
      sym_semicolon,
  [953] = 2,
    ACTIONS(141), 1,
      anon_sym_RPAREN,
    ACTIONS(238), 1,
      aux_sym_text_token1,
  [960] = 2,
    ACTIONS(240), 1,
      sym_colon,
    ACTIONS(242), 1,
      sym_semicolon,
  [967] = 1,
    ACTIONS(244), 2,
      anon_sym_COMMA,
      sym_semicolon,
  [972] = 1,
    ACTIONS(246), 2,
      anon_sym_COMMA,
      sym_semicolon,
  [977] = 2,
    ACTIONS(248), 1,
      anon_sym_LBRACK,
    ACTIONS(250), 1,
      aux_sym_port_token1,
  [984] = 1,
    ACTIONS(252), 2,
      anon_sym_COMMA,
      sym_semicolon,
  [989] = 2,
    ACTIONS(254), 1,
      anon_sym_LPAREN,
    STATE(19), 1,
      sym_options,
  [996] = 1,
    ACTIONS(256), 2,
      anon_sym_COMMA,
      sym_semicolon,
  [1001] = 1,
    ACTIONS(226), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1006] = 1,
    ACTIONS(213), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1011] = 1,
    ACTIONS(258), 1,
      sym_semicolon,
  [1015] = 1,
    ACTIONS(260), 1,
      aux_sym_variable_token1,
  [1019] = 1,
    ACTIONS(262), 1,
      sym_semicolon,
  [1023] = 1,
    ACTIONS(264), 1,
      anon_sym_LPAREN,
  [1027] = 1,
    ACTIONS(266), 1,
      ts_builtin_sym_end,
  [1031] = 1,
    ACTIONS(268), 1,
      aux_sym_digit_token1,
  [1035] = 1,
    ACTIONS(270), 1,
      sym_semicolon,
  [1039] = 1,
    ACTIONS(272), 1,
      aux_sym_digit_token1,
  [1043] = 1,
    ACTIONS(274), 1,
      aux_sym_digit_token1,
  [1047] = 1,
    ACTIONS(276), 1,
      sym_semicolon,
  [1051] = 1,
    ACTIONS(278), 1,
      aux_sym_comment_token1,
  [1055] = 1,
    ACTIONS(280), 1,
      sym_semicolon,
  [1059] = 1,
    ACTIONS(282), 1,
      aux_sym_hexidecimal_token1,
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
  [SMALL_STATE(20)] = 327,
  [SMALL_STATE(21)] = 345,
  [SMALL_STATE(22)] = 359,
  [SMALL_STATE(23)] = 373,
  [SMALL_STATE(24)] = 394,
  [SMALL_STATE(25)] = 415,
  [SMALL_STATE(26)] = 436,
  [SMALL_STATE(27)] = 454,
  [SMALL_STATE(28)] = 472,
  [SMALL_STATE(29)] = 490,
  [SMALL_STATE(30)] = 502,
  [SMALL_STATE(31)] = 511,
  [SMALL_STATE(32)] = 520,
  [SMALL_STATE(33)] = 539,
  [SMALL_STATE(34)] = 550,
  [SMALL_STATE(35)] = 559,
  [SMALL_STATE(36)] = 568,
  [SMALL_STATE(37)] = 577,
  [SMALL_STATE(38)] = 596,
  [SMALL_STATE(39)] = 605,
  [SMALL_STATE(40)] = 624,
  [SMALL_STATE(41)] = 633,
  [SMALL_STATE(42)] = 642,
  [SMALL_STATE(43)] = 653,
  [SMALL_STATE(44)] = 665,
  [SMALL_STATE(45)] = 673,
  [SMALL_STATE(46)] = 681,
  [SMALL_STATE(47)] = 689,
  [SMALL_STATE(48)] = 699,
  [SMALL_STATE(49)] = 707,
  [SMALL_STATE(50)] = 717,
  [SMALL_STATE(51)] = 733,
  [SMALL_STATE(52)] = 745,
  [SMALL_STATE(53)] = 753,
  [SMALL_STATE(54)] = 761,
  [SMALL_STATE(55)] = 769,
  [SMALL_STATE(56)] = 779,
  [SMALL_STATE(57)] = 787,
  [SMALL_STATE(58)] = 797,
  [SMALL_STATE(59)] = 807,
  [SMALL_STATE(60)] = 815,
  [SMALL_STATE(61)] = 825,
  [SMALL_STATE(62)] = 835,
  [SMALL_STATE(63)] = 845,
  [SMALL_STATE(64)] = 855,
  [SMALL_STATE(65)] = 865,
  [SMALL_STATE(66)] = 875,
  [SMALL_STATE(67)] = 885,
  [SMALL_STATE(68)] = 895,
  [SMALL_STATE(69)] = 905,
  [SMALL_STATE(70)] = 915,
  [SMALL_STATE(71)] = 925,
  [SMALL_STATE(72)] = 933,
  [SMALL_STATE(73)] = 943,
  [SMALL_STATE(74)] = 948,
  [SMALL_STATE(75)] = 953,
  [SMALL_STATE(76)] = 960,
  [SMALL_STATE(77)] = 967,
  [SMALL_STATE(78)] = 972,
  [SMALL_STATE(79)] = 977,
  [SMALL_STATE(80)] = 984,
  [SMALL_STATE(81)] = 989,
  [SMALL_STATE(82)] = 996,
  [SMALL_STATE(83)] = 1001,
  [SMALL_STATE(84)] = 1006,
  [SMALL_STATE(85)] = 1011,
  [SMALL_STATE(86)] = 1015,
  [SMALL_STATE(87)] = 1019,
  [SMALL_STATE(88)] = 1023,
  [SMALL_STATE(89)] = 1027,
  [SMALL_STATE(90)] = 1031,
  [SMALL_STATE(91)] = 1035,
  [SMALL_STATE(92)] = 1039,
  [SMALL_STATE(93)] = 1043,
  [SMALL_STATE(94)] = 1047,
  [SMALL_STATE(95)] = 1051,
  [SMALL_STATE(96)] = 1055,
  [SMALL_STATE(97)] = 1059,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comma, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 1),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(95),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options, 2),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_options, 2),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ipv6, 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ipv6, 1),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rule, 3),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__rule, 3),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ipv6_repeat1, 2),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ipv6_repeat1, 2), SHIFT_REPEAT(20),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ipv6_repeat1, 2),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options, 5),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_options, 5),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options, 4),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_options, 4),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ipv4, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ipv4, 2),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_location, 5),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ipv6, 2),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__standalone_location, 2),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_location, 4),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_options_repeat1, 2),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(43),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_location, 2),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_location, 3),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port, 2),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 1),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_port, 3),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_port, 5),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_port, 4),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_protocol, 1),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_protocol, 1),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction, 1),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_direction, 1),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(51),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port, 3),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_port, 2),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_digit, 2),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(57),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_digit, 1),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_port_repeat1, 2), SHIFT_REPEAT(28),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_port_repeat1, 2),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_location_repeat1, 2), SHIFT_REPEAT(13),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_location_repeat1, 2),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 2),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_digit, 3),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hexidecimal, 2),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__opt, 1, .production_id = 1),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_digit, 4),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__opt, 3, .production_id = 2),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 6),
  [266] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 3),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 4),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
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
