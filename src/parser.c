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
#define STATE_COUNT 94
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 195
#define ALIAS_COUNT 2
#define TOKEN_COUNT 162
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
  aux_sym_digit_token1 = 56,
  aux_sym_text_token1 = 57,
  anon_sym_DQUOTE = 58,
  aux_sym_string_token1 = 59,
  sym_decimal = 60,
  anon_sym_x = 61,
  aux_sym_hexidecimal_token1 = 62,
  anon_sym_rr = 63,
  anon_sym_eol = 64,
  anon_sym_nop = 65,
  anon_sym_ts = 66,
  anon_sym_sec = 67,
  anon_sym_esec = 68,
  anon_sym_lsrr = 69,
  anon_sym_ssrr = 70,
  anon_sym_satid = 71,
  anon_sym_only = 72,
  anon_sym_STAR = 73,
  anon_sym_set = 74,
  anon_sym_isset = 75,
  anon_sym_toggle = 76,
  anon_sym_unset = 77,
  anon_sym_isnotset = 78,
  anon_sym_noalert = 79,
  anon_sym_to_client = 80,
  anon_sym_to_server = 81,
  anon_sym_from_client = 82,
  anon_sym_from_server = 83,
  anon_sym_established = 84,
  anon_sym_not_established = 85,
  anon_sym_stateless = 86,
  anon_sym_only_stream = 87,
  anon_sym_no_stream = 88,
  anon_sym_only_frag = 89,
  anon_sym_no_frag = 90,
  anon_sym_request_SLASHto_server = 91,
  anon_sym_response_SLASHto_client = 92,
  anon_sym_both = 93,
  anon_sym_file = 94,
  anon_sym_tx = 95,
  anon_sym_ssn_SLASHflow = 96,
  anon_sym_sslv2 = 97,
  anon_sym_sslv3 = 98,
  anon_sym_tls1_DOT0 = 99,
  anon_sym_tls1_DOT1 = 100,
  anon_sym_tls1_DOT2 = 101,
  anon_sym_tls1_DOT3 = 102,
  anon_sym_client_hello = 103,
  anon_sym_server_hello = 104,
  anon_sym_client_kyx = 105,
  anon_sym_server_keyx = 106,
  anon_sym_unkown = 107,
  anon_sym_2_compat = 108,
  anon_sym_confirm = 109,
  anon_sym_read = 110,
  anon_sym_write = 111,
  anon_sym_select = 112,
  anon_sym_operate = 113,
  anon_sym_direct_operate = 114,
  anon_sym_direct_operate_nr = 115,
  anon_sym_immed_freeze = 116,
  anon_sym_immed_freeze_nr = 117,
  anon_sym_freeze_clear = 118,
  anon_sym_freeze_clear_nr = 119,
  anon_sym_freeze_at_time = 120,
  anon_sym_freeze_at_time_nr = 121,
  anon_sym_cold_restart = 122,
  anon_sym_warm_restart = 123,
  anon_sym_initialize_data = 124,
  anon_sym_initialize_appl = 125,
  anon_sym_start_appl = 126,
  anon_sym_stop_appl = 127,
  anon_sym_save_config = 128,
  anon_sym_enable_unsolicited = 129,
  anon_sym_disable_unsolicited = 130,
  anon_sym_assign_class = 131,
  anon_sym_delay_measure = 132,
  anon_sym_record_current_time = 133,
  anon_sym_open_file = 134,
  anon_sym_close_file = 135,
  anon_sym_delete_file = 136,
  anon_sym_get_file_info = 137,
  anon_sym_authenticate_file = 138,
  anon_sym_abort_file = 139,
  anon_sym_activate_config = 140,
  anon_sym_authenticate_req = 141,
  anon_sym_authenticate_err = 142,
  anon_sym_response = 143,
  anon_sym_unsolicited_response = 144,
  anon_sym_authenticate_respo = 145,
  anon_sym_all_stations = 146,
  anon_sym_class_1_events = 147,
  anon_sym_class_2_events = 148,
  anon_sym_class_3_events = 149,
  anon_sym_need_time = 150,
  anon_sym_local_control = 151,
  anon_sym_device_trouble = 152,
  anon_sym_device_restart = 153,
  anon_sym_no_func_code_support = 154,
  anon_sym_object_unknown = 155,
  anon_sym_parameter_error = 156,
  anon_sym_event_buffer_overflow = 157,
  anon_sym_alread_executing = 158,
  anon_sym_config_corrupt = 159,
  anon_sym_reserved_2 = 160,
  anon_sym_reserved_1 = 161,
  sym_source_file = 162,
  sym__lines = 163,
  sym_comment = 164,
  sym__rule = 165,
  sym_action = 166,
  sym_header = 167,
  sym_protocol = 168,
  sym__location = 169,
  sym__standalone_location = 170,
  sym_group_location = 171,
  sym_variable = 172,
  sym_ipv4 = 173,
  sym_ipv6 = 174,
  sym__port_choices = 175,
  sym_port = 176,
  sym_group_port = 177,
  sym_comma = 178,
  sym_direction = 179,
  sym_options = 180,
  sym__opt = 181,
  sym_digit = 182,
  sym_text = 183,
  sym_string = 184,
  sym_hexidecimal = 185,
  sym_value = 186,
  sym_constant = 187,
  aux_sym_source_file_repeat1 = 188,
  aux_sym_group_location_repeat1 = 189,
  aux_sym_ipv6_repeat1 = 190,
  aux_sym_group_port_repeat1 = 191,
  aux_sym_options_repeat1 = 192,
  aux_sym_text_repeat1 = 193,
  aux_sym_string_repeat1 = 194,
  alias_sym_keyword = 195,
  alias_sym_separator = 196,
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
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [aux_sym_digit_token1] = "digit_token1",
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
  [anon_sym_LT] = anon_sym_LT,
  [aux_sym_digit_token1] = aux_sym_digit_token1,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(737);
      if (lookahead == '!') ADVANCE(778);
      if (lookahead == '"') ADVANCE(1463);
      if (lookahead == '#') ADVANCE(738);
      if (lookahead == '$') ADVANCE(779);
      if (lookahead == '(') ADVANCE(819);
      if (lookahead == ')') ADVANCE(820);
      if (lookahead == '*') ADVANCE(1493);
      if (lookahead == ',') ADVANCE(776);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '/') ADVANCE(731);
      if (lookahead == '2') ADVANCE(784);
      if (lookahead == ':') ADVANCE(815);
      if (lookahead == ';') ADVANCE(816);
      if (lookahead == '<') ADVANCE(824);
      if (lookahead == '>') ADVANCE(821);
      if (lookahead == '[') ADVANCE(775);
      if (lookahead == ']') ADVANCE(777);
      if (lookahead == 'a') ADVANCE(790);
      if (lookahead == 'b') ADVANCE(798);
      if (lookahead == 'c') ADVANCE(794);
      if (lookahead == 'd') ADVANCE(791);
      if (lookahead == 'e') ADVANCE(797);
      if (lookahead == 'f') ADVANCE(793);
      if (lookahead == 'g') ADVANCE(212);
      if (lookahead == 'h') ADVANCE(646);
      if (lookahead == 'i') ADVANCE(131);
      if (lookahead == 'k') ADVANCE(529);
      if (lookahead == 'l') ADVANCE(470);
      if (lookahead == 'm') ADVANCE(462);
      if (lookahead == 'n') ADVANCE(210);
      if (lookahead == 'o') ADVANCE(119);
      if (lookahead == 'p') ADVANCE(79);
      if (lookahead == 'r') ADVANCE(171);
      if (lookahead == 's') ADVANCE(75);
      if (lookahead == 't') ADVANCE(142);
      if (lookahead == 'u') ADVANCE(176);
      if (lookahead == 'w') ADVANCE(80);
      if (lookahead == 'x') ADVANCE(1467);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(807);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(786);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '!') ADVANCE(778);
      if (lookahead == '"') ADVANCE(1463);
      if (lookahead == '*') ADVANCE(1494);
      if (lookahead == '2') ADVANCE(838);
      if (lookahead == '<') ADVANCE(825);
      if (lookahead == '>') ADVANCE(822);
      if (lookahead == 'a') ADVANCE(927);
      if (lookahead == 'b') ADVANCE(1240);
      if (lookahead == 'c') ADVANCE(1143);
      if (lookahead == 'd') ADVANCE(972);
      if (lookahead == 'e') ADVANCE(1203);
      if (lookahead == 'f') ADVANCE(1105);
      if (lookahead == 'g') ADVANCE(1000);
      if (lookahead == 'i') ADVANCE(1186);
      if (lookahead == 'l') ADVANCE(1233);
      if (lookahead == 'n') ADVANCE(998);
      if (lookahead == 'o') ADVANCE(926);
      if (lookahead == 'p') ADVANCE(893);
      if (lookahead == 'r') ADVANCE(973);
      if (lookahead == 's') ADVANCE(889);
      if (lookahead == 't') ADVANCE(1153);
      if (lookahead == 'u') ADVANCE(1199);
      if (lookahead == 'w') ADVANCE(897);
      if (lookahead == 'x') ADVANCE(1468);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(829);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1460);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == ')') ADVANCE(820);
      if (lookahead == ',') ADVANCE(776);
      if (lookahead == ':') ADVANCE(815);
      if (lookahead == ';') ADVANCE(816);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1459);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(') ADVANCE(1462);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '"') ADVANCE(1463);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1464);
      if (lookahead != 0) ADVANCE(1465);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(778);
      if (lookahead == '"') ADVANCE(1463);
      if (lookahead == '*') ADVANCE(1493);
      if (lookahead == '2') ADVANCE(826);
      if (lookahead == '<') ADVANCE(823);
      if (lookahead == '>') ADVANCE(821);
      if (lookahead == 'a') ADVANCE(125);
      if (lookahead == 'b') ADVANCE(469);
      if (lookahead == 'c') ADVANCE(368);
      if (lookahead == 'd') ADVANCE(208);
      if (lookahead == 'e') ADVANCE(461);
      if (lookahead == 'f') ADVANCE(327);
      if (lookahead == 'g') ADVANCE(212);
      if (lookahead == 'i') ADVANCE(416);
      if (lookahead == 'l') ADVANCE(470);
      if (lookahead == 'n') ADVANCE(211);
      if (lookahead == 'o') ADVANCE(119);
      if (lookahead == 'p') ADVANCE(101);
      if (lookahead == 'r') ADVANCE(209);
      if (lookahead == 's') ADVANCE(76);
      if (lookahead == 't') ADVANCE(390);
      if (lookahead == 'u') ADVANCE(427);
      if (lookahead == 'w') ADVANCE(80);
      if (lookahead == 'x') ADVANCE(1467);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(827);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(778);
      if (lookahead == '$') ADVANCE(779);
      if (lookahead == '[') ADVANCE(775);
      if (lookahead == ']') ADVANCE(777);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(786);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(807);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(778);
      if (lookahead == ',') ADVANCE(776);
      if (lookahead == '/') ADVANCE(731);
      if (lookahead == '[') ADVANCE(775);
      if (lookahead == ']') ADVANCE(777);
      if (lookahead == 'a') ADVANCE(796);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(803);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(807);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(1463);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == ')') ADVANCE(820);
      if (lookahead == ',') ADVANCE(776);
      if (lookahead == ':') ADVANCE(815);
      if (lookahead == ';') ADVANCE(816);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(15);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(733);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(735);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(296);
      END_STATE();
    case 14:
      if (lookahead == '/') ADVANCE(654);
      END_STATE();
    case 15:
      if (lookahead == '0') ADVANCE(1545);
      if (lookahead == '1') ADVANCE(1547);
      if (lookahead == '2') ADVANCE(1549);
      if (lookahead == '3') ADVANCE(1551);
      END_STATE();
    case 16:
      if (lookahead == '1') ADVANCE(1669);
      if (lookahead == '2') ADVANCE(1667);
      END_STATE();
    case 17:
      if (lookahead == '1') ADVANCE(9);
      END_STATE();
    case 18:
      if (lookahead == '1') ADVANCE(51);
      if (lookahead == '2') ADVANCE(71);
      if (lookahead == '3') ADVANCE(72);
      END_STATE();
    case 19:
      if (lookahead == '2') ADVANCE(765);
      END_STATE();
    case 20:
      if (lookahead == '2') ADVANCE(1541);
      if (lookahead == '3') ADVANCE(1543);
      END_STATE();
    case 21:
      if (lookahead == '3') ADVANCE(762);
      END_STATE();
    case 22:
      if (lookahead == '5') ADVANCE(766);
      END_STATE();
    case 23:
      if (lookahead == '>') ADVANCE(817);
      END_STATE();
    case 24:
      if (lookahead == '>') ADVANCE(818);
      END_STATE();
    case 25:
      if (lookahead == '_') ADVANCE(292);
      if (lookahead == 'a') ADVANCE(383);
      if (lookahead == 'p') ADVANCE(1477);
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 26:
      if (lookahead == '_') ADVANCE(140);
      if (lookahead == 'g') ADVANCE(315);
      END_STATE();
    case 27:
      if (lookahead == '_') ADVANCE(18);
      END_STATE();
    case 28:
      if (lookahead == '_') ADVANCE(321);
      END_STATE();
    case 29:
      if (lookahead == '_') ADVANCE(100);
      END_STATE();
    case 30:
      if (lookahead == '_') ADVANCE(16);
      END_STATE();
    case 31:
      if (lookahead == '_') ADVANCE(109);
      END_STATE();
    case 32:
      if (lookahead == '_') ADVANCE(268);
      END_STATE();
    case 33:
      if (lookahead == '_') ADVANCE(583);
      END_STATE();
    case 34:
      if (lookahead == '_') ADVANCE(325);
      END_STATE();
    case 35:
      if (lookahead == '_') ADVANCE(303);
      END_STATE();
    case 36:
      if (lookahead == '_') ADVANCE(694);
      END_STATE();
    case 37:
      if (lookahead == '_') ADVANCE(420);
      END_STATE();
    case 38:
      if (lookahead == '_') ADVANCE(124);
      END_STATE();
    case 39:
      if (lookahead == '_') ADVANCE(605);
      END_STATE();
    case 40:
      if (lookahead == '_') ADVANCE(97);
      END_STATE();
    case 41:
      if (lookahead == '_') ADVANCE(580);
      END_STATE();
    case 42:
      if (lookahead == '_') ADVANCE(146);
      END_STATE();
    case 43:
      if (lookahead == '_') ADVANCE(143);
      END_STATE();
    case 44:
      if (lookahead == '_') ADVANCE(256);
      END_STATE();
    case 45:
      if (lookahead == '_') ADVANCE(155);
      END_STATE();
    case 46:
      if (lookahead == '_') ADVANCE(337);
      END_STATE();
    case 47:
      if (lookahead == '_') ADVANCE(164);
      END_STATE();
    case 48:
      if (lookahead == '_') ADVANCE(491);
      END_STATE();
    case 49:
      if (lookahead == '_') ADVANCE(615);
      END_STATE();
    case 50:
      if (lookahead == '_') ADVANCE(192);
      END_STATE();
    case 51:
      if (lookahead == '_') ADVANCE(219);
      END_STATE();
    case 52:
      if (lookahead == '_') ADVANCE(265);
      END_STATE();
    case 53:
      if (lookahead == '_') ADVANCE(145);
      END_STATE();
    case 54:
      if (lookahead == '_') ADVANCE(297);
      END_STATE();
    case 55:
      if (lookahead == '_') ADVANCE(481);
      END_STATE();
    case 56:
      if (lookahead == '_') ADVANCE(691);
      END_STATE();
    case 57:
      if (lookahead == '_') ADVANCE(652);
      END_STATE();
    case 58:
      if (lookahead == '_') ADVANCE(148);
      END_STATE();
    case 59:
      if (lookahead == '_') ADVANCE(620);
      END_STATE();
    case 60:
      if (lookahead == '_') ADVANCE(149);
      END_STATE();
    case 61:
      if (lookahead == '_') ADVANCE(570);
      END_STATE();
    case 62:
      if (lookahead == '_') ADVANCE(103);
      END_STATE();
    case 63:
      if (lookahead == '_') ADVANCE(160);
      END_STATE();
    case 64:
      if (lookahead == '_') ADVANCE(305);
      END_STATE();
    case 65:
      if (lookahead == '_') ADVANCE(680);
      END_STATE();
    case 66:
      if (lookahead == '_') ADVANCE(306);
      END_STATE();
    case 67:
      if (lookahead == '_') ADVANCE(682);
      END_STATE();
    case 68:
      if (lookahead == '_') ADVANCE(307);
      END_STATE();
    case 69:
      if (lookahead == '_') ADVANCE(308);
      END_STATE();
    case 70:
      if (lookahead == '_') ADVANCE(582);
      END_STATE();
    case 71:
      if (lookahead == '_') ADVANCE(286);
      END_STATE();
    case 72:
      if (lookahead == '_') ADVANCE(288);
      END_STATE();
    case 73:
      if (lookahead == '_') ADVANCE(163);
      END_STATE();
    case 74:
      if (lookahead == '_') ADVANCE(701);
      END_STATE();
    case 75:
      if (lookahead == 'a') ADVANCE(647);
      if (lookahead == 'e') ADVANCE(133);
      if (lookahead == 'i') ADVANCE(501);
      if (lookahead == 'm') ADVANCE(122);
      if (lookahead == 'n') ADVANCE(418);
      if (lookahead == 's') ADVANCE(318);
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 76:
      if (lookahead == 'a') ADVANCE(647);
      if (lookahead == 'e') ADVANCE(133);
      if (lookahead == 's') ADVANCE(378);
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 77:
      if (lookahead == 'a') ADVANCE(551);
      if (lookahead == 'o') ADVANCE(514);
      END_STATE();
    case 78:
      if (lookahead == 'a') ADVANCE(1595);
      END_STATE();
    case 79:
      if (lookahead == 'a') ADVANCE(543);
      END_STATE();
    case 80:
      if (lookahead == 'a') ADVANCE(571);
      if (lookahead == 'r') ADVANCE(336);
      END_STATE();
    case 81:
      if (lookahead == 'a') ADVANCE(725);
      if (lookahead == 'e') ADVANCE(688);
      END_STATE();
    case 82:
      if (lookahead == 'a') ADVANCE(424);
      END_STATE();
    case 83:
      if (lookahead == 'a') ADVANCE(127);
      END_STATE();
    case 84:
      if (lookahead == 'a') ADVANCE(127);
      if (lookahead == 'i') ADVANCE(506);
      END_STATE();
    case 85:
      if (lookahead == 'a') ADVANCE(165);
      if (lookahead == 'c') ADVANCE(477);
      if (lookahead == 'j') ADVANCE(255);
      if (lookahead == 'q') ADVANCE(700);
      if (lookahead == 's') ADVANCE(225);
      END_STATE();
    case 86:
      if (lookahead == 'a') ADVANCE(165);
      if (lookahead == 'c') ADVANCE(477);
      if (lookahead == 'q') ADVANCE(700);
      if (lookahead == 's') ADVANCE(225);
      END_STATE();
    case 87:
      if (lookahead == 'a') ADVANCE(309);
      END_STATE();
    case 88:
      if (lookahead == 'a') ADVANCE(600);
      if (lookahead == 'i') ADVANCE(277);
      if (lookahead == 'o') ADVANCE(602);
      END_STATE();
    case 89:
      if (lookahead == 'a') ADVANCE(405);
      END_STATE();
    case 90:
      if (lookahead == 'a') ADVANCE(310);
      END_STATE();
    case 91:
      if (lookahead == 'a') ADVANCE(126);
      END_STATE();
    case 92:
      if (lookahead == 'a') ADVANCE(413);
      END_STATE();
    case 93:
      if (lookahead == 'a') ADVANCE(414);
      END_STATE();
    case 94:
      if (lookahead == 'a') ADVANCE(509);
      END_STATE();
    case 95:
      if (lookahead == 'a') ADVANCE(509);
      if (lookahead == 'm') ADVANCE(262);
      END_STATE();
    case 96:
      if (lookahead == 'a') ADVANCE(599);
      END_STATE();
    case 97:
      if (lookahead == 'a') ADVANCE(518);
      END_STATE();
    case 98:
      if (lookahead == 'a') ADVANCE(630);
      END_STATE();
    case 99:
      if (lookahead == 'a') ADVANCE(534);
      END_STATE();
    case 100:
      if (lookahead == 'a') ADVANCE(684);
      if (lookahead == 'c') ADVANCE(397);
      END_STATE();
    case 101:
      if (lookahead == 'a') ADVANCE(542);
      END_STATE();
    case 102:
      if (lookahead == 'a') ADVANCE(662);
      END_STATE();
    case 103:
      if (lookahead == 'a') ADVANCE(521);
      END_STATE();
    case 104:
      if (lookahead == 'a') ADVANCE(606);
      END_STATE();
    case 105:
      if (lookahead == 'a') ADVANCE(564);
      END_STATE();
    case 106:
      if (lookahead == 'a') ADVANCE(384);
      END_STATE();
    case 107:
      if (lookahead == 'a') ADVANCE(655);
      END_STATE();
    case 108:
      if (lookahead == 'a') ADVANCE(668);
      END_STATE();
    case 109:
      if (lookahead == 'a') ADVANCE(522);
      if (lookahead == 'd') ADVANCE(102);
      END_STATE();
    case 110:
      if (lookahead == 'a') ADVANCE(182);
      END_STATE();
    case 111:
      if (lookahead == 'a') ADVANCE(598);
      END_STATE();
    case 112:
      if (lookahead == 'a') ADVANCE(566);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(685);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(567);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(670);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(671);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(129);
      END_STATE();
    case 118:
      if (lookahead == 'a') ADVANCE(130);
      END_STATE();
    case 119:
      if (lookahead == 'b') ADVANCE(365);
      if (lookahead == 'n') ADVANCE(376);
      if (lookahead == 'p') ADVANCE(186);
      END_STATE();
    case 120:
      if (lookahead == 'b') ADVANCE(22);
      END_STATE();
    case 121:
      if (lookahead == 'b') ADVANCE(769);
      END_STATE();
    case 122:
      if (lookahead == 'b') ADVANCE(755);
      if (lookahead == 't') ADVANCE(510);
      END_STATE();
    case 123:
      if (lookahead == 'b') ADVANCE(692);
      END_STATE();
    case 124:
      if (lookahead == 'b') ADVANCE(690);
      END_STATE();
    case 125:
      if (lookahead == 'b') ADVANCE(472);
      if (lookahead == 'c') ADVANCE(641);
      if (lookahead == 'l') ADVANCE(369);
      if (lookahead == 'n') ADVANCE(721);
      if (lookahead == 's') ADVANCE(597);
      if (lookahead == 'u') ADVANCE(623);
      END_STATE();
    case 126:
      if (lookahead == 'b') ADVANCE(382);
      END_STATE();
    case 127:
      if (lookahead == 'b') ADVANCE(388);
      END_STATE();
    case 128:
      if (lookahead == 'b') ADVANCE(399);
      END_STATE();
    case 129:
      if (lookahead == 'b') ADVANCE(410);
      END_STATE();
    case 130:
      if (lookahead == 'b') ADVANCE(411);
      END_STATE();
    case 131:
      if (lookahead == 'c') ADVANCE(417);
      if (lookahead == 'k') ADVANCE(185);
      if (lookahead == 'm') ADVANCE(95);
      if (lookahead == 'n') ADVANCE(334);
      if (lookahead == 'p') ADVANCE(751);
      if (lookahead == 's') ADVANCE(431);
      END_STATE();
    case 132:
      if (lookahead == 'c') ADVANCE(417);
      if (lookahead == 'k') ADVANCE(185);
      if (lookahead == 'm') ADVANCE(94);
      if (lookahead == 'p') ADVANCE(751);
      END_STATE();
    case 133:
      if (lookahead == 'c') ADVANCE(1481);
      if (lookahead == 'l') ADVANCE(263);
      if (lookahead == 'r') ADVANCE(704);
      if (lookahead == 't') ADVANCE(1495);
      END_STATE();
    case 134:
      if (lookahead == 'c') ADVANCE(1483);
      END_STATE();
    case 135:
      if (lookahead == 'c') ADVANCE(757);
      END_STATE();
    case 136:
      if (lookahead == 'c') ADVANCE(745);
      END_STATE();
    case 137:
      if (lookahead == 'c') ADVANCE(488);
      END_STATE();
    case 138:
      if (lookahead == 'c') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1466);
      END_STATE();
    case 139:
      if (lookahead == 'c') ADVANCE(89);
      END_STATE();
    case 140:
      if (lookahead == 'c') ADVANCE(381);
      if (lookahead == 's') ADVANCE(279);
      END_STATE();
    case 141:
      if (lookahead == 'c') ADVANCE(502);
      if (lookahead == 'f') ADVANCE(659);
      if (lookahead == 'l') ADVANCE(587);
      END_STATE();
    case 142:
      if (lookahead == 'c') ADVANCE(502);
      if (lookahead == 'f') ADVANCE(659);
      if (lookahead == 'l') ADVANCE(587);
      if (lookahead == 'o') ADVANCE(26);
      if (lookahead == 's') ADVANCE(1479);
      if (lookahead == 'x') ADVANCE(1537);
      END_STATE();
    case 143:
      if (lookahead == 'c') ADVANCE(695);
      END_STATE();
    case 144:
      if (lookahead == 'c') ADVANCE(504);
      END_STATE();
    case 145:
      if (lookahead == 'c') ADVANCE(475);
      END_STATE();
    case 146:
      if (lookahead == 'c') ADVANCE(385);
      END_STATE();
    case 147:
      if (lookahead == 'c') ADVANCE(696);
      END_STATE();
    case 148:
      if (lookahead == 'c') ADVANCE(490);
      END_STATE();
    case 149:
      if (lookahead == 'c') ADVANCE(487);
      END_STATE();
    case 150:
      if (lookahead == 'c') ADVANCE(627);
      END_STATE();
    case 151:
      if (lookahead == 'c') ADVANCE(628);
      END_STATE();
    case 152:
      if (lookahead == 'c') ADVANCE(236);
      END_STATE();
    case 153:
      if (lookahead == 'c') ADVANCE(45);
      END_STATE();
    case 154:
      if (lookahead == 'c') ADVANCE(250);
      if (lookahead == 'h') ADVANCE(144);
      if (lookahead == 'n') ADVANCE(497);
      if (lookahead == 'r') ADVANCE(478);
      END_STATE();
    case 155:
      if (lookahead == 'c') ADVANCE(474);
      END_STATE();
    case 156:
      if (lookahead == 'c') ADVANCE(343);
      END_STATE();
    case 157:
      if (lookahead == 'c') ADVANCE(660);
      END_STATE();
    case 158:
      if (lookahead == 'c') ADVANCE(355);
      END_STATE();
    case 159:
      if (lookahead == 'c') ADVANCE(676);
      END_STATE();
    case 160:
      if (lookahead == 'c') ADVANCE(494);
      END_STATE();
    case 161:
      if (lookahead == 'c') ADVANCE(357);
      END_STATE();
    case 162:
      if (lookahead == 'c') ADVANCE(115);
      END_STATE();
    case 163:
      if (lookahead == 'c') ADVANCE(406);
      if (lookahead == 's') ADVANCE(282);
      END_STATE();
    case 164:
      if (lookahead == 'c') ADVANCE(408);
      END_STATE();
    case 165:
      if (lookahead == 'd') ADVANCE(1567);
      END_STATE();
    case 166:
      if (lookahead == 'd') ADVANCE(1489);
      END_STATE();
    case 167:
      if (lookahead == 'd') ADVANCE(1515);
      END_STATE();
    case 168:
      if (lookahead == 'd') ADVANCE(1517);
      END_STATE();
    case 169:
      if (lookahead == 'd') ADVANCE(1605);
      END_STATE();
    case 170:
      if (lookahead == 'd') ADVANCE(1607);
      END_STATE();
    case 171:
      if (lookahead == 'd') ADVANCE(500);
      if (lookahead == 'e') ADVANCE(85);
      if (lookahead == 'f') ADVANCE(121);
      if (lookahead == 'r') ADVANCE(1473);
      END_STATE();
    case 172:
      if (lookahead == 'd') ADVANCE(500);
      if (lookahead == 'e') ADVANCE(364);
      if (lookahead == 'f') ADVANCE(121);
      END_STATE();
    case 173:
      if (lookahead == 'd') ADVANCE(123);
      END_STATE();
    case 174:
      if (lookahead == 'd') ADVANCE(41);
      END_STATE();
    case 175:
      if (lookahead == 'd') ADVANCE(503);
      END_STATE();
    case 176:
      if (lookahead == 'd') ADVANCE(503);
      if (lookahead == 'n') ADVANCE(366);
      END_STATE();
    case 177:
      if (lookahead == 'd') ADVANCE(57);
      END_STATE();
    case 178:
      if (lookahead == 'd') ADVANCE(35);
      END_STATE();
    case 179:
      if (lookahead == 'd') ADVANCE(43);
      END_STATE();
    case 180:
      if (lookahead == 'd') ADVANCE(30);
      END_STATE();
    case 181:
      if (lookahead == 'd') ADVANCE(259);
      END_STATE();
    case 182:
      if (lookahead == 'd') ADVANCE(50);
      END_STATE();
    case 183:
      if (lookahead == 'd') ADVANCE(61);
      END_STATE();
    case 184:
      if (lookahead == 'e') ADVANCE(435);
      END_STATE();
    case 185:
      if (lookahead == 'e') ADVANCE(702);
      END_STATE();
    case 186:
      if (lookahead == 'e') ADVANCE(458);
      END_STATE();
    case 187:
      if (lookahead == 'e') ADVANCE(1535);
      END_STATE();
    case 188:
      if (lookahead == 'e') ADVANCE(726);
      END_STATE();
    case 189:
      if (lookahead == 'e') ADVANCE(1569);
      END_STATE();
    case 190:
      if (lookahead == 'e') ADVANCE(1499);
      END_STATE();
    case 191:
      if (lookahead == 'e') ADVANCE(1573);
      END_STATE();
    case 192:
      if (lookahead == 'e') ADVANCE(720);
      END_STATE();
    case 193:
      if (lookahead == 'e') ADVANCE(1634);
      END_STATE();
    case 194:
      if (lookahead == 'e') ADVANCE(1647);
      END_STATE();
    case 195:
      if (lookahead == 'e') ADVANCE(1615);
      END_STATE();
    case 196:
      if (lookahead == 'e') ADVANCE(1625);
      END_STATE();
    case 197:
      if (lookahead == 'e') ADVANCE(1617);
      END_STATE();
    case 198:
      if (lookahead == 'e') ADVANCE(1619);
      END_STATE();
    case 199:
      if (lookahead == 'e') ADVANCE(1579);
      END_STATE();
    case 200:
      if (lookahead == 'e') ADVANCE(1611);
      END_STATE();
    case 201:
      if (lookahead == 'e') ADVANCE(1651);
      END_STATE();
    case 202:
      if (lookahead == 'e') ADVANCE(1575);
      END_STATE();
    case 203:
      if (lookahead == 'e') ADVANCE(1587);
      END_STATE();
    case 204:
      if (lookahead == 'e') ADVANCE(528);
      END_STATE();
    case 205:
      if (lookahead == 'e') ADVANCE(1623);
      END_STATE();
    case 206:
      if (lookahead == 'e') ADVANCE(1613);
      END_STATE();
    case 207:
      if (lookahead == 'e') ADVANCE(1635);
      END_STATE();
    case 208:
      if (lookahead == 'e') ADVANCE(370);
      if (lookahead == 'i') ADVANCE(545);
      END_STATE();
    case 209:
      if (lookahead == 'e') ADVANCE(86);
      if (lookahead == 'r') ADVANCE(1473);
      END_STATE();
    case 210:
      if (lookahead == 'e') ADVANCE(252);
      if (lookahead == 'f') ADVANCE(586);
      if (lookahead == 'o') ADVANCE(25);
      if (lookahead == 't') ADVANCE(499);
      END_STATE();
    case 211:
      if (lookahead == 'e') ADVANCE(252);
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 212:
      if (lookahead == 'e') ADVANCE(642);
      END_STATE();
    case 213:
      if (lookahead == 'e') ADVANCE(134);
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 214:
      if (lookahead == 'e') ADVANCE(547);
      END_STATE();
    case 215:
      if (lookahead == 'e') ADVANCE(547);
      if (lookahead == 'l') ADVANCE(39);
      if (lookahead == 'r') ADVANCE(216);
      END_STATE();
    case 216:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 217:
      if (lookahead == 'e') ADVANCE(724);
      END_STATE();
    case 218:
      if (lookahead == 'e') ADVANCE(167);
      END_STATE();
    case 219:
      if (lookahead == 'e') ADVANCE(710);
      END_STATE();
    case 220:
      if (lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 221:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 222:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 223:
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 224:
      if (lookahead == 'e') ADVANCE(188);
      if (lookahead == 'o') ADVANCE(415);
      END_STATE();
    case 225:
      if (lookahead == 'e') ADVANCE(572);
      if (lookahead == 'p') ADVANCE(473);
      END_STATE();
    case 226:
      if (lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 227:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 228:
      if (lookahead == 'e') ADVANCE(402);
      END_STATE();
    case 229:
      if (lookahead == 'e') ADVANCE(625);
      END_STATE();
    case 230:
      if (lookahead == 'e') ADVANCE(557);
      END_STATE();
    case 231:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 232:
      if (lookahead == 'e') ADVANCE(626);
      if (lookahead == 'o') ADVANCE(401);
      END_STATE();
    case 233:
      if (lookahead == 'e') ADVANCE(576);
      END_STATE();
    case 234:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 235:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 236:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 237:
      if (lookahead == 'e') ADVANCE(532);
      END_STATE();
    case 238:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 239:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 240:
      if (lookahead == 'e') ADVANCE(581);
      END_STATE();
    case 241:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 242:
      if (lookahead == 'e') ADVANCE(533);
      END_STATE();
    case 243:
      if (lookahead == 'e') ADVANCE(610);
      END_STATE();
    case 244:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 245:
      if (lookahead == 'e') ADVANCE(631);
      END_STATE();
    case 246:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 247:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 248:
      if (lookahead == 'e') ADVANCE(579);
      END_STATE();
    case 249:
      if (lookahead == 'e') ADVANCE(541);
      END_STATE();
    case 250:
      if (lookahead == 'e') ADVANCE(555);
      END_STATE();
    case 251:
      if (lookahead == 'e') ADVANCE(439);
      END_STATE();
    case 252:
      if (lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 253:
      if (lookahead == 'e') ADVANCE(603);
      END_STATE();
    case 254:
      if (lookahead == 'e') ADVANCE(556);
      END_STATE();
    case 255:
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 256:
      if (lookahead == 'e') ADVANCE(607);
      END_STATE();
    case 257:
      if (lookahead == 'e') ADVANCE(261);
      END_STATE();
    case 258:
      if (lookahead == 'e') ADVANCE(562);
      END_STATE();
    case 259:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 260:
      if (lookahead == 'e') ADVANCE(444);
      END_STATE();
    case 261:
      if (lookahead == 'e') ADVANCE(728);
      END_STATE();
    case 262:
      if (lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 263:
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 264:
      if (lookahead == 'e') ADVANCE(608);
      END_STATE();
    case 265:
      if (lookahead == 'e') ADVANCE(560);
      END_STATE();
    case 266:
      if (lookahead == 'e') ADVANCE(609);
      END_STATE();
    case 267:
      if (lookahead == 'e') ADVANCE(447);
      END_STATE();
    case 268:
      if (lookahead == 'e') ADVANCE(561);
      if (lookahead == 'f') ADVANCE(359);
      if (lookahead == 'r') ADVANCE(204);
      END_STATE();
    case 269:
      if (lookahead == 'e') ADVANCE(392);
      END_STATE();
    case 270:
      if (lookahead == 'e') ADVANCE(669);
      END_STATE();
    case 271:
      if (lookahead == 'e') ADVANCE(448);
      END_STATE();
    case 272:
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 273:
      if (lookahead == 'e') ADVANCE(449);
      END_STATE();
    case 274:
      if (lookahead == 'e') ADVANCE(450);
      END_STATE();
    case 275:
      if (lookahead == 'e') ADVANCE(460);
      END_STATE();
    case 276:
      if (lookahead == 'e') ADVANCE(451);
      END_STATE();
    case 277:
      if (lookahead == 'e') ADVANCE(454);
      END_STATE();
    case 278:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 279:
      if (lookahead == 'e') ADVANCE(574);
      END_STATE();
    case 280:
      if (lookahead == 'e') ADVANCE(404);
      END_STATE();
    case 281:
      if (lookahead == 'e') ADVANCE(618);
      END_STATE();
    case 282:
      if (lookahead == 'e') ADVANCE(575);
      END_STATE();
    case 283:
      if (lookahead == 'e') ADVANCE(619);
      END_STATE();
    case 284:
      if (lookahead == 'e') ADVANCE(578);
      END_STATE();
    case 285:
      if (lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 286:
      if (lookahead == 'e') ADVANCE(712);
      END_STATE();
    case 287:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 288:
      if (lookahead == 'e') ADVANCE(713);
      END_STATE();
    case 289:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 290:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 291:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 292:
      if (lookahead == 'f') ADVANCE(546);
      if (lookahead == 's') ADVANCE(675);
      END_STATE();
    case 293:
      if (lookahead == 'f') ADVANCE(586);
      if (lookahead == 't') ADVANCE(499);
      END_STATE();
    case 294:
      if (lookahead == 'f') ADVANCE(302);
      END_STATE();
    case 295:
      if (lookahead == 'f') ADVANCE(326);
      END_STATE();
    case 296:
      if (lookahead == 'f') ADVANCE(380);
      END_STATE();
    case 297:
      if (lookahead == 'f') ADVANCE(352);
      END_STATE();
    case 298:
      if (lookahead == 'f') ADVANCE(549);
      if (lookahead == 's') ADVANCE(678);
      END_STATE();
    case 299:
      if (lookahead == 'f') ADVANCE(333);
      END_STATE();
    case 300:
      if (lookahead == 'f') ADVANCE(335);
      END_STATE();
    case 301:
      if (lookahead == 'f') ADVANCE(466);
      END_STATE();
    case 302:
      if (lookahead == 'f') ADVANCE(258);
      END_STATE();
    case 303:
      if (lookahead == 'f') ADVANCE(563);
      END_STATE();
    case 304:
      if (lookahead == 'f') ADVANCE(391);
      END_STATE();
    case 305:
      if (lookahead == 'f') ADVANCE(353);
      END_STATE();
    case 306:
      if (lookahead == 'f') ADVANCE(354);
      END_STATE();
    case 307:
      if (lookahead == 'f') ADVANCE(356);
      END_STATE();
    case 308:
      if (lookahead == 'f') ADVANCE(358);
      END_STATE();
    case 309:
      if (lookahead == 'g') ADVANCE(1527);
      END_STATE();
    case 310:
      if (lookahead == 'g') ADVANCE(1525);
      END_STATE();
    case 311:
      if (lookahead == 'g') ADVANCE(1603);
      END_STATE();
    case 312:
      if (lookahead == 'g') ADVANCE(1627);
      END_STATE();
    case 313:
      if (lookahead == 'g') ADVANCE(1663);
      END_STATE();
    case 314:
      if (lookahead == 'g') ADVANCE(436);
      END_STATE();
    case 315:
      if (lookahead == 'g') ADVANCE(389);
      END_STATE();
    case 316:
      if (lookahead == 'g') ADVANCE(60);
      if (lookahead == 'r') ADVANCE(412);
      END_STATE();
    case 317:
      if (lookahead == 'h') ADVANCE(758);
      END_STATE();
    case 318:
      if (lookahead == 'h') ADVANCE(758);
      if (lookahead == 'l') ADVANCE(703);
      if (lookahead == 'n') ADVANCE(13);
      if (lookahead == 'r') ADVANCE(531);
      END_STATE();
    case 319:
      if (lookahead == 'h') ADVANCE(1533);
      END_STATE();
    case 320:
      if (lookahead == 'h') ADVANCE(747);
      END_STATE();
    case 321:
      if (lookahead == 'h') ADVANCE(228);
      if (lookahead == 'k') ADVANCE(723);
      END_STATE();
    case 322:
      if (lookahead == 'h') ADVANCE(218);
      END_STATE();
    case 323:
      if (lookahead == 'h') ADVANCE(221);
      END_STATE();
    case 324:
      if (lookahead == 'h') ADVANCE(251);
      END_STATE();
    case 325:
      if (lookahead == 'h') ADVANCE(280);
      if (lookahead == 'k') ADVANCE(217);
      END_STATE();
    case 326:
      if (lookahead == 'i') ADVANCE(316);
      END_STATE();
    case 327:
      if (lookahead == 'i') ADVANCE(379);
      if (lookahead == 'r') ADVANCE(224);
      END_STATE();
    case 328:
      if (lookahead == 'i') ADVANCE(314);
      END_STATE();
    case 329:
      if (lookahead == 'i') ADVANCE(501);
      if (lookahead == 'm') ADVANCE(122);
      if (lookahead == 'n') ADVANCE(418);
      if (lookahead == 's') ADVANCE(317);
      END_STATE();
    case 330:
      if (lookahead == 'i') ADVANCE(166);
      END_STATE();
    case 331:
      if (lookahead == 'i') ADVANCE(709);
      END_STATE();
    case 332:
      if (lookahead == 'i') ADVANCE(152);
      END_STATE();
    case 333:
      if (lookahead == 'i') ADVANCE(311);
      END_STATE();
    case 334:
      if (lookahead == 'i') ADVANCE(648);
      END_STATE();
    case 335:
      if (lookahead == 'i') ADVANCE(312);
      END_STATE();
    case 336:
      if (lookahead == 'i') ADVANCE(661);
      END_STATE();
    case 337:
      if (lookahead == 'i') ADVANCE(432);
      END_STATE();
    case 338:
      if (lookahead == 'i') ADVANCE(156);
      END_STATE();
    case 339:
      if (lookahead == 'i') ADVANCE(506);
      END_STATE();
    case 340:
      if (lookahead == 'i') ADVANCE(614);
      END_STATE();
    case 341:
      if (lookahead == 'i') ADVANCE(162);
      END_STATE();
    case 342:
      if (lookahead == 'i') ADVANCE(433);
      END_STATE();
    case 343:
      if (lookahead == 'i') ADVANCE(674);
      END_STATE();
    case 344:
      if (lookahead == 'i') ADVANCE(727);
      END_STATE();
    case 345:
      if (lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 346:
      if (lookahead == 'i') ADVANCE(421);
      END_STATE();
    case 347:
      if (lookahead == 'i') ADVANCE(489);
      END_STATE();
    case 348:
      if (lookahead == 'i') ADVANCE(260);
      END_STATE();
    case 349:
      if (lookahead == 'i') ADVANCE(422);
      END_STATE();
    case 350:
      if (lookahead == 'i') ADVANCE(267);
      END_STATE();
    case 351:
      if (lookahead == 'i') ADVANCE(423);
      END_STATE();
    case 352:
      if (lookahead == 'i') ADVANCE(393);
      END_STATE();
    case 353:
      if (lookahead == 'i') ADVANCE(394);
      END_STATE();
    case 354:
      if (lookahead == 'i') ADVANCE(395);
      END_STATE();
    case 355:
      if (lookahead == 'i') ADVANCE(672);
      END_STATE();
    case 356:
      if (lookahead == 'i') ADVANCE(396);
      END_STATE();
    case 357:
      if (lookahead == 'i') ADVANCE(673);
      END_STATE();
    case 358:
      if (lookahead == 'i') ADVANCE(398);
      END_STATE();
    case 359:
      if (lookahead == 'i') ADVANCE(400);
      END_STATE();
    case 360:
      if (lookahead == 'i') ADVANCE(158);
      END_STATE();
    case 361:
      if (lookahead == 'i') ADVANCE(616);
      END_STATE();
    case 362:
      if (lookahead == 'i') ADVANCE(161);
      END_STATE();
    case 363:
      if (lookahead == 'i') ADVANCE(276);
      END_STATE();
    case 364:
      if (lookahead == 'j') ADVANCE(255);
      END_STATE();
    case 365:
      if (lookahead == 'j') ADVANCE(278);
      END_STATE();
    case 366:
      if (lookahead == 'k') ADVANCE(463);
      if (lookahead == 's') ADVANCE(232);
      END_STATE();
    case 367:
      if (lookahead == 'k') ADVANCE(453);
      END_STATE();
    case 368:
      if (lookahead == 'l') ADVANCE(88);
      if (lookahead == 'o') ADVANCE(377);
      END_STATE();
    case 369:
      if (lookahead == 'l') ADVANCE(39);
      if (lookahead == 'r') ADVANCE(216);
      END_STATE();
    case 370:
      if (lookahead == 'l') ADVANCE(81);
      if (lookahead == 'v') ADVANCE(332);
      END_STATE();
    case 371:
      if (lookahead == 'l') ADVANCE(1475);
      END_STATE();
    case 372:
      if (lookahead == 'l') ADVANCE(1601);
      END_STATE();
    case 373:
      if (lookahead == 'l') ADVANCE(1599);
      END_STATE();
    case 374:
      if (lookahead == 'l') ADVANCE(1649);
      END_STATE();
    case 375:
      if (lookahead == 'l') ADVANCE(1597);
      END_STATE();
    case 376:
      if (lookahead == 'l') ADVANCE(722);
      END_STATE();
    case 377:
      if (lookahead == 'l') ADVANCE(174);
      if (lookahead == 'n') ADVANCE(295);
      END_STATE();
    case 378:
      if (lookahead == 'l') ADVANCE(703);
      if (lookahead == 'n') ADVANCE(13);
      if (lookahead == 'r') ADVANCE(531);
      END_STATE();
    case 379:
      if (lookahead == 'l') ADVANCE(187);
      END_STATE();
    case 380:
      if (lookahead == 'l') ADVANCE(468);
      END_STATE();
    case 381:
      if (lookahead == 'l') ADVANCE(348);
      END_STATE();
    case 382:
      if (lookahead == 'l') ADVANCE(340);
      END_STATE();
    case 383:
      if (lookahead == 'l') ADVANCE(254);
      END_STATE();
    case 384:
      if (lookahead == 'l') ADVANCE(344);
      END_STATE();
    case 385:
      if (lookahead == 'l') ADVANCE(104);
      END_STATE();
    case 386:
      if (lookahead == 'l') ADVANCE(464);
      END_STATE();
    case 387:
      if (lookahead == 'l') ADVANCE(465);
      END_STATE();
    case 388:
      if (lookahead == 'l') ADVANCE(239);
      END_STATE();
    case 389:
      if (lookahead == 'l') ADVANCE(190);
      END_STATE();
    case 390:
      if (lookahead == 'l') ADVANCE(596);
      if (lookahead == 'o') ADVANCE(26);
      if (lookahead == 's') ADVANCE(1479);
      if (lookahead == 'x') ADVANCE(1537);
      END_STATE();
    case 391:
      if (lookahead == 'l') ADVANCE(471);
      END_STATE();
    case 392:
      if (lookahead == 'l') ADVANCE(253);
      END_STATE();
    case 393:
      if (lookahead == 'l') ADVANCE(244);
      END_STATE();
    case 394:
      if (lookahead == 'l') ADVANCE(195);
      END_STATE();
    case 395:
      if (lookahead == 'l') ADVANCE(196);
      END_STATE();
    case 396:
      if (lookahead == 'l') ADVANCE(197);
      END_STATE();
    case 397:
      if (lookahead == 'l') ADVANCE(238);
      END_STATE();
    case 398:
      if (lookahead == 'l') ADVANCE(198);
      END_STATE();
    case 399:
      if (lookahead == 'l') ADVANCE(201);
      END_STATE();
    case 400:
      if (lookahead == 'l') ADVANCE(205);
      END_STATE();
    case 401:
      if (lookahead == 'l') ADVANCE(338);
      END_STATE();
    case 402:
      if (lookahead == 'l') ADVANCE(386);
      END_STATE();
    case 403:
      if (lookahead == 'l') ADVANCE(214);
      if (lookahead == 'n') ADVANCE(721);
      END_STATE();
    case 404:
      if (lookahead == 'l') ADVANCE(387);
      END_STATE();
    case 405:
      if (lookahead == 'l') ADVANCE(58);
      END_STATE();
    case 406:
      if (lookahead == 'l') ADVANCE(350);
      END_STATE();
    case 407:
      if (lookahead == 'l') ADVANCE(360);
      END_STATE();
    case 408:
      if (lookahead == 'l') ADVANCE(363);
      END_STATE();
    case 409:
      if (lookahead == 'l') ADVANCE(362);
      END_STATE();
    case 410:
      if (lookahead == 'l') ADVANCE(361);
      END_STATE();
    case 411:
      if (lookahead == 'l') ADVANCE(291);
      END_STATE();
    case 412:
      if (lookahead == 'm') ADVANCE(1565);
      END_STATE();
    case 413:
      if (lookahead == 'm') ADVANCE(1523);
      END_STATE();
    case 414:
      if (lookahead == 'm') ADVANCE(1521);
      END_STATE();
    case 415:
      if (lookahead == 'm') ADVANCE(73);
      END_STATE();
    case 416:
      if (lookahead == 'm') ADVANCE(425);
      if (lookahead == 'n') ADVANCE(334);
      if (lookahead == 's') ADVANCE(431);
      END_STATE();
    case 417:
      if (lookahead == 'm') ADVANCE(508);
      END_STATE();
    case 418:
      if (lookahead == 'm') ADVANCE(511);
      END_STATE();
    case 419:
      if (lookahead == 'm') ADVANCE(526);
      END_STATE();
    case 420:
      if (lookahead == 'm') ADVANCE(231);
      END_STATE();
    case 421:
      if (lookahead == 'm') ADVANCE(194);
      END_STATE();
    case 422:
      if (lookahead == 'm') ADVANCE(203);
      END_STATE();
    case 423:
      if (lookahead == 'm') ADVANCE(206);
      END_STATE();
    case 424:
      if (lookahead == 'm') ADVANCE(270);
      END_STATE();
    case 425:
      if (lookahead == 'm') ADVANCE(262);
      END_STATE();
    case 426:
      if (lookahead == 'm') ADVANCE(70);
      END_STATE();
    case 427:
      if (lookahead == 'n') ADVANCE(366);
      END_STATE();
    case 428:
      if (lookahead == 'n') ADVANCE(1561);
      END_STATE();
    case 429:
      if (lookahead == 'n') ADVANCE(367);
      END_STATE();
    case 430:
      if (lookahead == 'n') ADVANCE(1657);
      END_STATE();
    case 431:
      if (lookahead == 'n') ADVANCE(479);
      if (lookahead == 's') ADVANCE(229);
      END_STATE();
    case 432:
      if (lookahead == 'n') ADVANCE(301);
      END_STATE();
    case 433:
      if (lookahead == 'n') ADVANCE(313);
      END_STATE();
    case 434:
      if (lookahead == 'n') ADVANCE(153);
      END_STATE();
    case 435:
      if (lookahead == 'n') ADVANCE(653);
      END_STATE();
    case 436:
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 437:
      if (lookahead == 'n') ADVANCE(604);
      END_STATE();
    case 438:
      if (lookahead == 'n') ADVANCE(591);
      END_STATE();
    case 439:
      if (lookahead == 'n') ADVANCE(677);
      END_STATE();
    case 440:
      if (lookahead == 'n') ADVANCE(339);
      END_STATE();
    case 441:
      if (lookahead == 'n') ADVANCE(535);
      END_STATE();
    case 442:
      if (lookahead == 'n') ADVANCE(536);
      END_STATE();
    case 443:
      if (lookahead == 'n') ADVANCE(539);
      END_STATE();
    case 444:
      if (lookahead == 'n') ADVANCE(633);
      END_STATE();
    case 445:
      if (lookahead == 'n') ADVANCE(540);
      END_STATE();
    case 446:
      if (lookahead == 'n') ADVANCE(667);
      END_STATE();
    case 447:
      if (lookahead == 'n') ADVANCE(634);
      END_STATE();
    case 448:
      if (lookahead == 'n') ADVANCE(663);
      END_STATE();
    case 449:
      if (lookahead == 'n') ADVANCE(665);
      END_STATE();
    case 450:
      if (lookahead == 'n') ADVANCE(666);
      END_STATE();
    case 451:
      if (lookahead == 'n') ADVANCE(639);
      END_STATE();
    case 452:
      if (lookahead == 'n') ADVANCE(612);
      END_STATE();
    case 453:
      if (lookahead == 'n') ADVANCE(486);
      END_STATE();
    case 454:
      if (lookahead == 'n') ADVANCE(657);
      END_STATE();
    case 455:
      if (lookahead == 'n') ADVANCE(299);
      END_STATE();
    case 456:
      if (lookahead == 'n') ADVANCE(300);
      END_STATE();
    case 457:
      if (lookahead == 'n') ADVANCE(613);
      END_STATE();
    case 458:
      if (lookahead == 'n') ADVANCE(64);
      if (lookahead == 'r') ADVANCE(108);
      END_STATE();
    case 459:
      if (lookahead == 'n') ADVANCE(621);
      END_STATE();
    case 460:
      if (lookahead == 'n') ADVANCE(687);
      END_STATE();
    case 461:
      if (lookahead == 'n') ADVANCE(83);
      if (lookahead == 'o') ADVANCE(371);
      if (lookahead == 's') ADVANCE(213);
      if (lookahead == 'v') ADVANCE(184);
      END_STATE();
    case 462:
      if (lookahead == 'o') ADVANCE(173);
      END_STATE();
    case 463:
      if (lookahead == 'o') ADVANCE(716);
      END_STATE();
    case 464:
      if (lookahead == 'o') ADVANCE(1553);
      END_STATE();
    case 465:
      if (lookahead == 'o') ADVANCE(1555);
      END_STATE();
    case 466:
      if (lookahead == 'o') ADVANCE(1621);
      END_STATE();
    case 467:
      if (lookahead == 'o') ADVANCE(1637);
      END_STATE();
    case 468:
      if (lookahead == 'o') ADVANCE(714);
      END_STATE();
    case 469:
      if (lookahead == 'o') ADVANCE(643);
      END_STATE();
    case 470:
      if (lookahead == 'o') ADVANCE(139);
      if (lookahead == 's') ADVANCE(544);
      END_STATE();
    case 471:
      if (lookahead == 'o') ADVANCE(715);
      END_STATE();
    case 472:
      if (lookahead == 'o') ADVANCE(585);
      END_STATE();
    case 473:
      if (lookahead == 'o') ADVANCE(452);
      END_STATE();
    case 474:
      if (lookahead == 'o') ADVANCE(181);
      END_STATE();
    case 475:
      if (lookahead == 'o') ADVANCE(455);
      END_STATE();
    case 476:
      if (lookahead == 'o') ADVANCE(699);
      END_STATE();
    case 477:
      if (lookahead == 'o') ADVANCE(577);
      END_STATE();
    case 478:
      if (lookahead == 'o') ADVANCE(505);
      END_STATE();
    case 479:
      if (lookahead == 'o') ADVANCE(650);
      END_STATE();
    case 480:
      if (lookahead == 'o') ADVANCE(374);
      END_STATE();
    case 481:
      if (lookahead == 'o') ADVANCE(525);
      END_STATE();
    case 482:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 483:
      if (lookahead == 'o') ADVANCE(645);
      END_STATE();
    case 484:
      if (lookahead == 'o') ADVANCE(537);
      END_STATE();
    case 485:
      if (lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 486:
      if (lookahead == 'o') ADVANCE(717);
      END_STATE();
    case 487:
      if (lookahead == 'o') ADVANCE(553);
      END_STATE();
    case 488:
      if (lookahead == 'o') ADVANCE(419);
      END_STATE();
    case 489:
      if (lookahead == 'o') ADVANCE(438);
      END_STATE();
    case 490:
      if (lookahead == 'o') ADVANCE(446);
      END_STATE();
    case 491:
      if (lookahead == 'o') ADVANCE(707);
      END_STATE();
    case 492:
      if (lookahead == 'o') ADVANCE(568);
      END_STATE();
    case 493:
      if (lookahead == 'o') ADVANCE(457);
      END_STATE();
    case 494:
      if (lookahead == 'o') ADVANCE(456);
      END_STATE();
    case 495:
      if (lookahead == 'o') ADVANCE(407);
      END_STATE();
    case 496:
      if (lookahead == 'o') ADVANCE(409);
      END_STATE();
    case 497:
      if (lookahead == 'p') ADVANCE(21);
      if (lookahead == 's') ADVANCE(756);
      END_STATE();
    case 498:
      if (lookahead == 'p') ADVANCE(753);
      END_STATE();
    case 499:
      if (lookahead == 'p') ADVANCE(767);
      END_STATE();
    case 500:
      if (lookahead == 'p') ADVANCE(770);
      END_STATE();
    case 501:
      if (lookahead == 'p') ADVANCE(773);
      END_STATE();
    case 502:
      if (lookahead == 'p') ADVANCE(748);
      END_STATE();
    case 503:
      if (lookahead == 'p') ADVANCE(749);
      END_STATE();
    case 504:
      if (lookahead == 'p') ADVANCE(768);
      END_STATE();
    case 505:
      if (lookahead == 'p') ADVANCE(743);
      END_STATE();
    case 506:
      if (lookahead == 'p') ADVANCE(763);
      END_STATE();
    case 507:
      if (lookahead == 'p') ADVANCE(752);
      END_STATE();
    case 508:
      if (lookahead == 'p') ADVANCE(750);
      END_STATE();
    case 509:
      if (lookahead == 'p') ADVANCE(760);
      END_STATE();
    case 510:
      if (lookahead == 'p') ADVANCE(759);
      END_STATE();
    case 511:
      if (lookahead == 'p') ADVANCE(771);
      END_STATE();
    case 512:
      if (lookahead == 'p') ADVANCE(772);
      END_STATE();
    case 513:
      if (lookahead == 'p') ADVANCE(135);
      END_STATE();
    case 514:
      if (lookahead == 'p') ADVANCE(40);
      END_STATE();
    case 515:
      if (lookahead == 'p') ADVANCE(372);
      END_STATE();
    case 516:
      if (lookahead == 'p') ADVANCE(373);
      END_STATE();
    case 517:
      if (lookahead == 'p') ADVANCE(375);
      END_STATE();
    case 518:
      if (lookahead == 'p') ADVANCE(515);
      END_STATE();
    case 519:
      if (lookahead == 'p') ADVANCE(467);
      END_STATE();
    case 520:
      if (lookahead == 'p') ADVANCE(492);
      END_STATE();
    case 521:
      if (lookahead == 'p') ADVANCE(516);
      END_STATE();
    case 522:
      if (lookahead == 'p') ADVANCE(517);
      END_STATE();
    case 523:
      if (lookahead == 'p') ADVANCE(520);
      END_STATE();
    case 524:
      if (lookahead == 'p') ADVANCE(637);
      END_STATE();
    case 525:
      if (lookahead == 'p') ADVANCE(240);
      END_STATE();
    case 526:
      if (lookahead == 'p') ADVANCE(98);
      END_STATE();
    case 527:
      if (lookahead == 'p') ADVANCE(493);
      END_STATE();
    case 528:
      if (lookahead == 'q') ADVANCE(1629);
      if (lookahead == 's') ADVANCE(519);
      END_STATE();
    case 529:
      if (lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 530:
      if (lookahead == 'r') ADVANCE(1485);
      END_STATE();
    case 531:
      if (lookahead == 'r') ADVANCE(1487);
      END_STATE();
    case 532:
      if (lookahead == 'r') ADVANCE(1509);
      END_STATE();
    case 533:
      if (lookahead == 'r') ADVANCE(1513);
      END_STATE();
    case 534:
      if (lookahead == 'r') ADVANCE(1583);
      END_STATE();
    case 535:
      if (lookahead == 'r') ADVANCE(1585);
      END_STATE();
    case 536:
      if (lookahead == 'r') ADVANCE(1581);
      END_STATE();
    case 537:
      if (lookahead == 'r') ADVANCE(1659);
      END_STATE();
    case 538:
      if (lookahead == 'r') ADVANCE(1631);
      END_STATE();
    case 539:
      if (lookahead == 'r') ADVANCE(1577);
      END_STATE();
    case 540:
      if (lookahead == 'r') ADVANCE(1589);
      END_STATE();
    case 541:
      if (lookahead == 'r') ADVANCE(1529);
      END_STATE();
    case 542:
      if (lookahead == 'r') ADVANCE(82);
      END_STATE();
    case 543:
      if (lookahead == 'r') ADVANCE(82);
      if (lookahead == 's') ADVANCE(588);
      END_STATE();
    case 544:
      if (lookahead == 'r') ADVANCE(530);
      END_STATE();
    case 545:
      if (lookahead == 'r') ADVANCE(220);
      if (lookahead == 's') ADVANCE(118);
      END_STATE();
    case 546:
      if (lookahead == 'r') ADVANCE(87);
      if (lookahead == 'u') ADVANCE(434);
      END_STATE();
    case 547:
      if (lookahead == 'r') ADVANCE(624);
      END_STATE();
    case 548:
      if (lookahead == 'r') ADVANCE(693);
      END_STATE();
    case 549:
      if (lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 550:
      if (lookahead == 'r') ADVANCE(476);
      END_STATE();
    case 551:
      if (lookahead == 'r') ADVANCE(679);
      if (lookahead == 't') ADVANCE(269);
      END_STATE();
    case 552:
      if (lookahead == 'r') ADVANCE(136);
      END_STATE();
    case 553:
      if (lookahead == 'r') ADVANCE(548);
      END_STATE();
    case 554:
      if (lookahead == 'r') ADVANCE(480);
      END_STATE();
    case 555:
      if (lookahead == 'r') ADVANCE(513);
      END_STATE();
    case 556:
      if (lookahead == 'r') ADVANCE(629);
      END_STATE();
    case 557:
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 558:
      if (lookahead == 'r') ADVANCE(584);
      END_STATE();
    case 559:
      if (lookahead == 'r') ADVANCE(227);
      END_STATE();
    case 560:
      if (lookahead == 'r') ADVANCE(573);
      END_STATE();
    case 561:
      if (lookahead == 'r') ADVANCE(538);
      END_STATE();
    case 562:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 563:
      if (lookahead == 'r') ADVANCE(257);
      END_STATE();
    case 564:
      if (lookahead == 'r') ADVANCE(635);
      END_STATE();
    case 565:
      if (lookahead == 'r') ADVANCE(234);
      END_STATE();
    case 566:
      if (lookahead == 'r') ADVANCE(636);
      END_STATE();
    case 567:
      if (lookahead == 'r') ADVANCE(638);
      END_STATE();
    case 568:
      if (lookahead == 'r') ADVANCE(640);
      END_STATE();
    case 569:
      if (lookahead == 'r') ADVANCE(200);
      END_STATE();
    case 570:
      if (lookahead == 'r') ADVANCE(243);
      END_STATE();
    case 571:
      if (lookahead == 'r') ADVANCE(426);
      END_STATE();
    case 572:
      if (lookahead == 'r') ADVANCE(711);
      END_STATE();
    case 573:
      if (lookahead == 'r') ADVANCE(484);
      END_STATE();
    case 574:
      if (lookahead == 'r') ADVANCE(705);
      END_STATE();
    case 575:
      if (lookahead == 'r') ADVANCE(706);
      END_STATE();
    case 576:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 577:
      if (lookahead == 'r') ADVANCE(179);
      END_STATE();
    case 578:
      if (lookahead == 'r') ADVANCE(708);
      END_STATE();
    case 579:
      if (lookahead == 'r') ADVANCE(304);
      END_STATE();
    case 580:
      if (lookahead == 'r') ADVANCE(266);
      END_STATE();
    case 581:
      if (lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 582:
      if (lookahead == 'r') ADVANCE(281);
      END_STATE();
    case 583:
      if (lookahead == 'r') ADVANCE(283);
      if (lookahead == 't') ADVANCE(550);
      END_STATE();
    case 584:
      if (lookahead == 'r') ADVANCE(275);
      END_STATE();
    case 585:
      if (lookahead == 'r') ADVANCE(686);
      END_STATE();
    case 586:
      if (lookahead == 's') ADVANCE(764);
      END_STATE();
    case 587:
      if (lookahead == 's') ADVANCE(754);
      END_STATE();
    case 588:
      if (lookahead == 's') ADVANCE(742);
      END_STATE();
    case 589:
      if (lookahead == 's') ADVANCE(761);
      END_STATE();
    case 590:
      if (lookahead == 's') ADVANCE(1519);
      END_STATE();
    case 591:
      if (lookahead == 's') ADVANCE(1639);
      END_STATE();
    case 592:
      if (lookahead == 's') ADVANCE(1609);
      END_STATE();
    case 593:
      if (lookahead == 's') ADVANCE(1641);
      END_STATE();
    case 594:
      if (lookahead == 's') ADVANCE(1643);
      END_STATE();
    case 595:
      if (lookahead == 's') ADVANCE(1645);
      END_STATE();
    case 596:
      if (lookahead == 's') ADVANCE(17);
      END_STATE();
    case 597:
      if (lookahead == 's') ADVANCE(328);
      END_STATE();
    case 598:
      if (lookahead == 's') ADVANCE(588);
      END_STATE();
    case 599:
      if (lookahead == 's') ADVANCE(698);
      END_STATE();
    case 600:
      if (lookahead == 's') ADVANCE(601);
      END_STATE();
    case 601:
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 602:
      if (lookahead == 's') ADVANCE(289);
      END_STATE();
    case 603:
      if (lookahead == 's') ADVANCE(590);
      END_STATE();
    case 604:
      if (lookahead == 's') ADVANCE(495);
      END_STATE();
    case 605:
      if (lookahead == 's') ADVANCE(649);
      END_STATE();
    case 606:
      if (lookahead == 's') ADVANCE(592);
      END_STATE();
    case 607:
      if (lookahead == 's') ADVANCE(689);
      END_STATE();
    case 608:
      if (lookahead == 's') ADVANCE(644);
      END_STATE();
    case 609:
      if (lookahead == 's') ADVANCE(656);
      END_STATE();
    case 610:
      if (lookahead == 's') ADVANCE(527);
      END_STATE();
    case 611:
      if (lookahead == 's') ADVANCE(632);
      END_STATE();
    case 612:
      if (lookahead == 's') ADVANCE(193);
      END_STATE();
    case 613:
      if (lookahead == 's') ADVANCE(207);
      END_STATE();
    case 614:
      if (lookahead == 's') ADVANCE(322);
      END_STATE();
    case 615:
      if (lookahead == 's') ADVANCE(697);
      END_STATE();
    case 616:
      if (lookahead == 's') ADVANCE(323);
      END_STATE();
    case 617:
      if (lookahead == 's') ADVANCE(245);
      END_STATE();
    case 618:
      if (lookahead == 's') ADVANCE(681);
      END_STATE();
    case 619:
      if (lookahead == 's') ADVANCE(683);
      END_STATE();
    case 620:
      if (lookahead == 's') ADVANCE(284);
      END_STATE();
    case 621:
      if (lookahead == 's') ADVANCE(496);
      END_STATE();
    case 622:
      if (lookahead == 't') ADVANCE(498);
      END_STATE();
    case 623:
      if (lookahead == 't') ADVANCE(324);
      END_STATE();
    case 624:
      if (lookahead == 't') ADVANCE(741);
      END_STATE();
    case 625:
      if (lookahead == 't') ADVANCE(1497);
      END_STATE();
    case 626:
      if (lookahead == 't') ADVANCE(1501);
      END_STATE();
    case 627:
      if (lookahead == 't') ADVANCE(744);
      END_STATE();
    case 628:
      if (lookahead == 't') ADVANCE(1571);
      END_STATE();
    case 629:
      if (lookahead == 't') ADVANCE(1505);
      END_STATE();
    case 630:
      if (lookahead == 't') ADVANCE(1563);
      END_STATE();
    case 631:
      if (lookahead == 't') ADVANCE(1503);
      END_STATE();
    case 632:
      if (lookahead == 't') ADVANCE(746);
      END_STATE();
    case 633:
      if (lookahead == 't') ADVANCE(1507);
      END_STATE();
    case 634:
      if (lookahead == 't') ADVANCE(1511);
      END_STATE();
    case 635:
      if (lookahead == 't') ADVANCE(1591);
      END_STATE();
    case 636:
      if (lookahead == 't') ADVANCE(1593);
      END_STATE();
    case 637:
      if (lookahead == 't') ADVANCE(1665);
      END_STATE();
    case 638:
      if (lookahead == 't') ADVANCE(1653);
      END_STATE();
    case 639:
      if (lookahead == 't') ADVANCE(1531);
      END_STATE();
    case 640:
      if (lookahead == 't') ADVANCE(1655);
      END_STATE();
    case 641:
      if (lookahead == 't') ADVANCE(331);
      END_STATE();
    case 642:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 643:
      if (lookahead == 't') ADVANCE(319);
      END_STATE();
    case 644:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 645:
      if (lookahead == 't') ADVANCE(320);
      END_STATE();
    case 646:
      if (lookahead == 't') ADVANCE(651);
      END_STATE();
    case 647:
      if (lookahead == 't') ADVANCE(330);
      if (lookahead == 'v') ADVANCE(222);
      END_STATE();
    case 648:
      if (lookahead == 't') ADVANCE(345);
      END_STATE();
    case 649:
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 650:
      if (lookahead == 't') ADVANCE(617);
      END_STATE();
    case 651:
      if (lookahead == 't') ADVANCE(507);
      END_STATE();
    case 652:
      if (lookahead == 't') ADVANCE(346);
      END_STATE();
    case 653:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 654:
      if (lookahead == 't') ADVANCE(485);
      END_STATE();
    case 655:
      if (lookahead == 't') ADVANCE(347);
      END_STATE();
    case 656:
      if (lookahead == 't') ADVANCE(105);
      END_STATE();
    case 657:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 658:
      if (lookahead == 't') ADVANCE(482);
      END_STATE();
    case 659:
      if (lookahead == 't') ADVANCE(512);
      END_STATE();
    case 660:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 661:
      if (lookahead == 't') ADVANCE(189);
      END_STATE();
    case 662:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 663:
      if (lookahead == 't') ADVANCE(593);
      END_STATE();
    case 664:
      if (lookahead == 't') ADVANCE(342);
      END_STATE();
    case 665:
      if (lookahead == 't') ADVANCE(594);
      END_STATE();
    case 666:
      if (lookahead == 't') ADVANCE(595);
      END_STATE();
    case 667:
      if (lookahead == 't') ADVANCE(554);
      END_STATE();
    case 668:
      if (lookahead == 't') ADVANCE(191);
      END_STATE();
    case 669:
      if (lookahead == 't') ADVANCE(233);
      END_STATE();
    case 670:
      if (lookahead == 't') ADVANCE(247);
      END_STATE();
    case 671:
      if (lookahead == 't') ADVANCE(202);
      END_STATE();
    case 672:
      if (lookahead == 't') ADVANCE(223);
      END_STATE();
    case 673:
      if (lookahead == 't') ADVANCE(226);
      END_STATE();
    case 674:
      if (lookahead == 't') ADVANCE(285);
      END_STATE();
    case 675:
      if (lookahead == 't') ADVANCE(559);
      END_STATE();
    case 676:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 677:
      if (lookahead == 't') ADVANCE(341);
      END_STATE();
    case 678:
      if (lookahead == 't') ADVANCE(565);
      END_STATE();
    case 679:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 680:
      if (lookahead == 't') ADVANCE(349);
      END_STATE();
    case 681:
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 682:
      if (lookahead == 't') ADVANCE(351);
      END_STATE();
    case 683:
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 684:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 685:
      if (lookahead == 't') ADVANCE(287);
      END_STATE();
    case 686:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 687:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 688:
      if (lookahead == 't') ADVANCE(290);
      END_STATE();
    case 689:
      if (lookahead == 't') ADVANCE(117);
      END_STATE();
    case 690:
      if (lookahead == 'u') ADVANCE(294);
      END_STATE();
    case 691:
      if (lookahead == 'u') ADVANCE(429);
      END_STATE();
    case 692:
      if (lookahead == 'u') ADVANCE(589);
      END_STATE();
    case 693:
      if (lookahead == 'u') ADVANCE(524);
      END_STATE();
    case 694:
      if (lookahead == 'u') ADVANCE(437);
      END_STATE();
    case 695:
      if (lookahead == 'u') ADVANCE(558);
      END_STATE();
    case 696:
      if (lookahead == 'u') ADVANCE(664);
      END_STATE();
    case 697:
      if (lookahead == 'u') ADVANCE(523);
      END_STATE();
    case 698:
      if (lookahead == 'u') ADVANCE(569);
      END_STATE();
    case 699:
      if (lookahead == 'u') ADVANCE(128);
      END_STATE();
    case 700:
      if (lookahead == 'u') ADVANCE(264);
      END_STATE();
    case 701:
      if (lookahead == 'u') ADVANCE(459);
      END_STATE();
    case 702:
      if (lookahead == 'v') ADVANCE(19);
      END_STATE();
    case 703:
      if (lookahead == 'v') ADVANCE(20);
      END_STATE();
    case 704:
      if (lookahead == 'v') ADVANCE(230);
      END_STATE();
    case 705:
      if (lookahead == 'v') ADVANCE(237);
      END_STATE();
    case 706:
      if (lookahead == 'v') ADVANCE(242);
      END_STATE();
    case 707:
      if (lookahead == 'v') ADVANCE(248);
      END_STATE();
    case 708:
      if (lookahead == 'v') ADVANCE(249);
      END_STATE();
    case 709:
      if (lookahead == 'v') ADVANCE(113);
      END_STATE();
    case 710:
      if (lookahead == 'v') ADVANCE(271);
      END_STATE();
    case 711:
      if (lookahead == 'v') ADVANCE(272);
      END_STATE();
    case 712:
      if (lookahead == 'v') ADVANCE(273);
      END_STATE();
    case 713:
      if (lookahead == 'v') ADVANCE(274);
      END_STATE();
    case 714:
      if (lookahead == 'w') ADVANCE(1539);
      END_STATE();
    case 715:
      if (lookahead == 'w') ADVANCE(1661);
      END_STATE();
    case 716:
      if (lookahead == 'w') ADVANCE(428);
      END_STATE();
    case 717:
      if (lookahead == 'w') ADVANCE(430);
      END_STATE();
    case 718:
      if (lookahead == 'x') ADVANCE(1557);
      END_STATE();
    case 719:
      if (lookahead == 'x') ADVANCE(1559);
      END_STATE();
    case 720:
      if (lookahead == 'x') ADVANCE(235);
      END_STATE();
    case 721:
      if (lookahead == 'y') ADVANCE(809);
      END_STATE();
    case 722:
      if (lookahead == 'y') ADVANCE(1491);
      END_STATE();
    case 723:
      if (lookahead == 'y') ADVANCE(718);
      END_STATE();
    case 724:
      if (lookahead == 'y') ADVANCE(719);
      END_STATE();
    case 725:
      if (lookahead == 'y') ADVANCE(37);
      END_STATE();
    case 726:
      if (lookahead == 'z') ADVANCE(241);
      END_STATE();
    case 727:
      if (lookahead == 'z') ADVANCE(246);
      END_STATE();
    case 728:
      if (lookahead == 'z') ADVANCE(199);
      END_STATE();
    case 729:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(729)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1472);
      END_STATE();
    case 730:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(730)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(828);
      END_STATE();
    case 731:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(782);
      END_STATE();
    case 732:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 733:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(781);
      END_STATE();
    case 734:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1466);
      END_STATE();
    case 735:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 736:
      if (eof) ADVANCE(737);
      if (lookahead == '!') ADVANCE(778);
      if (lookahead == '#') ADVANCE(738);
      if (lookahead == '(') ADVANCE(819);
      if (lookahead == ',') ADVANCE(776);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '/') ADVANCE(731);
      if (lookahead == ':') ADVANCE(815);
      if (lookahead == '<') ADVANCE(24);
      if (lookahead == '[') ADVANCE(775);
      if (lookahead == ']') ADVANCE(777);
      if (lookahead == 'a') ADVANCE(403);
      if (lookahead == 'd') ADVANCE(154);
      if (lookahead == 'e') ADVANCE(440);
      if (lookahead == 'f') ADVANCE(622);
      if (lookahead == 'h') ADVANCE(646);
      if (lookahead == 'i') ADVANCE(132);
      if (lookahead == 'k') ADVANCE(529);
      if (lookahead == 'm') ADVANCE(462);
      if (lookahead == 'n') ADVANCE(293);
      if (lookahead == 'p') ADVANCE(111);
      if (lookahead == 'r') ADVANCE(172);
      if (lookahead == 's') ADVANCE(329);
      if (lookahead == 't') ADVANCE(141);
      if (lookahead == 'u') ADVANCE(175);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(736)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(814);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(740);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(740);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(anon_sym_alert);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(anon_sym_pass);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(anon_sym_drop);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(anon_sym_reject);
      if (lookahead == 'b') ADVANCE(483);
      if (lookahead == 'd') ADVANCE(611);
      if (lookahead == 's') ADVANCE(552);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(anon_sym_rejectsrc);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(anon_sym_rejectdst);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(anon_sym_rejectboth);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(anon_sym_tcp);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(anon_sym_udp);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(anon_sym_icmp);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(anon_sym_ip);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(anon_sym_http);
      if (lookahead == '2') ADVANCE(774);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(anon_sym_ftp);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(anon_sym_tls);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(anon_sym_smb);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(anon_sym_dns);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(anon_sym_dcerpc);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(anon_sym_ssh);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(anon_sym_smtp);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(anon_sym_imap);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(anon_sym_modbus);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(anon_sym_dnp3);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(anon_sym_enip);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(anon_sym_nfs);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(anon_sym_ikev2);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(anon_sym_krb5);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(anon_sym_ntp);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(anon_sym_dhcp);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(anon_sym_rfb);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(anon_sym_rdp);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(anon_sym_snmp);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(anon_sym_tftp);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(anon_sym_sip);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(anon_sym_http2);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym_negation);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(780);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(aux_sym_ipv4_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(781);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(aux_sym_ipv4_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(782);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym__ipv6_octet);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == '.') ADVANCE(732);
      if (lookahead == ':') ADVANCE(808);
      if (lookahead == '_') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(787);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(805);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == '.') ADVANCE(732);
      if (lookahead == ':') ADVANCE(808);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(788);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(789);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == '.') ADVANCE(732);
      if (lookahead == ':') ADVANCE(808);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(787);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(805);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == '.') ADVANCE(732);
      if (lookahead == ':') ADVANCE(808);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(785);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(806);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == '.') ADVANCE(732);
      if (lookahead == ':') ADVANCE(808);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(808);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(808);
      if (lookahead == 'b') ADVANCE(799);
      if (lookahead == 'c') ADVANCE(801);
      if (lookahead == 'l') ADVANCE(215);
      if (lookahead == 'n') ADVANCE(721);
      if (lookahead == 's') ADVANCE(597);
      if (lookahead == 'u') ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(805);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(808);
      if (lookahead == 'c') ADVANCE(792);
      if (lookahead == 'e') ADVANCE(795);
      if (lookahead == 'h') ADVANCE(144);
      if (lookahead == 'i') ADVANCE(545);
      if (lookahead == 'n') ADVANCE(497);
      if (lookahead == 'r') ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(805);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(808);
      if (lookahead == 'e') ADVANCE(800);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(806);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(808);
      if (lookahead == 'i') ADVANCE(379);
      if (lookahead == 'r') ADVANCE(224);
      if (lookahead == 't') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(805);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(808);
      if (lookahead == 'l') ADVANCE(88);
      if (lookahead == 'o') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(805);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(808);
      if (lookahead == 'l') ADVANCE(81);
      if (lookahead == 'v') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(806);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(808);
      if (lookahead == 'n') ADVANCE(721);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(805);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(808);
      if (lookahead == 'n') ADVANCE(84);
      if (lookahead == 'o') ADVANCE(371);
      if (lookahead == 's') ADVANCE(213);
      if (lookahead == 'v') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(805);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(808);
      if (lookahead == 'o') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(805);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(808);
      if (lookahead == 'o') ADVANCE(585);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(806);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(808);
      if (lookahead == 'r') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(789);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(808);
      if (lookahead == 't') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(806);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(808);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(789);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(789);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(808);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(804);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(805);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(808);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(802);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(806);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(808);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(806);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(808);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(789);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(808);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(805);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym__ipv6_octet);
      if (lookahead == ':') ADVANCE(783);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(anon_sym_any);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(anon_sym_any);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(aux_sym_port_token1);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(aux_sym_port_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(811);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(aux_sym_port_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(812);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(aux_sym_port_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(813);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_colon);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_semicolon);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '>') ADVANCE(818);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(aux_sym_digit_token1);
      if (lookahead == '_') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(827);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(734);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(aux_sym_digit_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(827);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(734);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(aux_sym_digit_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(828);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '*') ADVANCE(1494);
      if (lookahead == '2') ADVANCE(838);
      if (lookahead == '<') ADVANCE(825);
      if (lookahead == '>') ADVANCE(822);
      if (lookahead == 'a') ADVANCE(927);
      if (lookahead == 'b') ADVANCE(1240);
      if (lookahead == 'c') ADVANCE(1143);
      if (lookahead == 'd') ADVANCE(972);
      if (lookahead == 'e') ADVANCE(1203);
      if (lookahead == 'f') ADVANCE(1105);
      if (lookahead == 'g') ADVANCE(1000);
      if (lookahead == 'i') ADVANCE(1186);
      if (lookahead == 'l') ADVANCE(1233);
      if (lookahead == 'n') ADVANCE(998);
      if (lookahead == 'o') ADVANCE(926);
      if (lookahead == 'p') ADVANCE(893);
      if (lookahead == 'r') ADVANCE(973);
      if (lookahead == 's') ADVANCE(889);
      if (lookahead == 't') ADVANCE(1153);
      if (lookahead == 'u') ADVANCE(1199);
      if (lookahead == 'w') ADVANCE(897);
      if (lookahead == 'x') ADVANCE(1468);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(829);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1460);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '.') ADVANCE(833);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '/') ADVANCE(1076);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '/') ADVANCE(1386);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '0') ADVANCE(1546);
      if (lookahead == '1') ADVANCE(1548);
      if (lookahead == '2') ADVANCE(1550);
      if (lookahead == '3') ADVANCE(1552);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '1') ADVANCE(830);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '1') ADVANCE(1670);
      if (lookahead == '2') ADVANCE(1668);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '1') ADVANCE(866);
      if (lookahead == '2') ADVANCE(886);
      if (lookahead == '3') ADVANCE(887);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '2') ADVANCE(1542);
      if (lookahead == '3') ADVANCE(1544);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(936);
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ':' ||
          lookahead == ';') ADVANCE(734);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1460);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1461);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1074);
      if (lookahead == 'a') ADVANCE(1158);
      if (lookahead == 'p') ADVANCE(1478);
      if (lookahead == 't') ADVANCE(860);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(939);
      if (lookahead == 'g') ADVANCE(1097);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(836);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1099);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(920);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(835);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(923);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1049);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(928);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1424);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1331);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1103);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1084);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1347);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(948);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(942);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1245);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(898);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(940);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1326);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(938);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1037);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(957);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 862:
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
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1115);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1261);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(980);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1050);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1046);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1195);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1078);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1425);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(943);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1387);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1359);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(944);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1314);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(922);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1086);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1411);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1087);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1414);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1088);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1089);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(953);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1329);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1068);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1070);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '_') ADVANCE(1432);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1381);
      if (lookahead == 'e') ADVANCE(934);
      if (lookahead == 's') ADVANCE(1154);
      if (lookahead == 't') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(929);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1318);
      if (lookahead == 'o') ADVANCE(1267);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1596);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 893:
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
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(958);
      if (lookahead == 'c') ADVANCE(1249);
      if (lookahead == 'q') ADVANCE(1431);
      if (lookahead == 's') ADVANCE(1010);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1455);
      if (lookahead == 'e') ADVANCE(1421);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1341);
      if (lookahead == 'i') ADVANCE(1058);
      if (lookahead == 'o') ADVANCE(1346);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1316);
      if (lookahead == 'r') ADVANCE(1110);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1265);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1090);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1163);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1196);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1091);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1188);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1189);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1340);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1367);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1284);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1389);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(930);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1306);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1349);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1400);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1308);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(970);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1417);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1165);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1309);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1396);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1409);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1416);
      if (lookahead == 'c') ADVANCE(1174);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1402);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1275);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(1276);
      if (lookahead == 'd') ADVANCE(908);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(932);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'a') ADVANCE(933);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'b') ADVANCE(1140);
      if (lookahead == 'n') ADVANCE(1152);
      if (lookahead == 'p') ADVANCE(974);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'b') ADVANCE(1243);
      if (lookahead == 'c') ADVANCE(1380);
      if (lookahead == 'l') ADVANCE(1144);
      if (lookahead == 'n') ADVANCE(1451);
      if (lookahead == 's') ADVANCE(1339);
      if (lookahead == 'u') ADVANCE(1362);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'b') ADVANCE(1422);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'b') ADVANCE(1167);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'b') ADVANCE(1161);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'b') ADVANCE(1176);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'b') ADVANCE(1181);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'b') ADVANCE(1185);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'c') ADVANCE(1482);
      if (lookahead == 'l') ADVANCE(1036);
      if (lookahead == 'r') ADVANCE(1434);
      if (lookahead == 't') ADVANCE(1496);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'c') ADVANCE(1484);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'c') ADVANCE(1241);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1461);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'c') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'c') ADVANCE(1427);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'c') ADVANCE(1157);
      if (lookahead == 's') ADVANCE(1060);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'c') ADVANCE(1162);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'c') ADVANCE(1429);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'c') ADVANCE(1258);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'c') ADVANCE(1254);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'c') ADVANCE(1244);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'c') ADVANCE(1365);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'c') ADVANCE(1021);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'c') ADVANCE(1117);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'c') ADVANCE(1250);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'c') ADVANCE(874);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'c') ADVANCE(1398);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'c') ADVANCE(1408);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'c') ADVANCE(1129);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'c') ADVANCE(1263);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'c') ADVANCE(1131);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'c') ADVANCE(919);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'c') ADVANCE(1182);
      if (lookahead == 's') ADVANCE(1063);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'c') ADVANCE(1184);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'd') ADVANCE(1568);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'd') ADVANCE(1490);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'd') ADVANCE(1516);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'd') ADVANCE(1518);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'd') ADVANCE(1606);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'd') ADVANCE(1608);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'd') ADVANCE(858);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'd') ADVANCE(872);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'd') ADVANCE(851);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'd') ADVANCE(859);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'd') ADVANCE(844);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'd') ADVANCE(1041);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'd') ADVANCE(865);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'd') ADVANCE(875);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1146);
      if (lookahead == 'i') ADVANCE(1294);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(894);
      if (lookahead == 'r') ADVANCE(1474);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1230);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1536);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1457);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1570);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1500);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1574);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1450);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1633);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1648);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1616);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1626);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 985:
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
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1620);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1580);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1612);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 989:
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
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 990:
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
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1588);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1624);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1614);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1636);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1204);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(935);
      if (lookahead == 't') ADVANCE(909);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1031);
      if (lookahead == 'o') ADVANCE(839);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 999:
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
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1377);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(950);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(960);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(914);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1454);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(961);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(853);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(962);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(976);
      if (lookahead == 'o') ADVANCE(1191);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1363);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1315);
      if (lookahead == 'p') ADVANCE(1246);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(963);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1159);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1364);
      if (lookahead == 'o') ADVANCE(1160);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1299);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(941);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1305);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(905);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1322);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1282);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1283);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(849);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1368);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1023:
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
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(848);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(843);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(863);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(845);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1317);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1291);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(965);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1456);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1211);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1343);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(903);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(945);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1350);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1032);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1039:
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
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(907);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(862);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(966);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1327);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(904);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1351);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1304);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1214);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1352);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1307);
      if (lookahead == 'f') ADVANCE(1133);
      if (lookahead == 'r') ADVANCE(992);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1051:
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
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1170);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(968);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1055:
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
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1229);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1217);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1224);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(951);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1319);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1061:
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
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1062:
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
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1321);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1324);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(971);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(883);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1358);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1442);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1360);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(1443);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(881);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(882);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'e') ADVANCE(888);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'f') ADVANCE(1295);
      if (lookahead == 's') ADVANCE(1407);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'f') ADVANCE(1083);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'f') ADVANCE(1155);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'f') ADVANCE(1104);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'f') ADVANCE(1126);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'f') ADVANCE(1237);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'f') ADVANCE(1111);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'f') ADVANCE(1112);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'f') ADVANCE(1298);
      if (lookahead == 's') ADVANCE(1413);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'f') ADVANCE(1039);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'f') ADVANCE(1311);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'f') ADVANCE(1169);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'f') ADVANCE(1127);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'f') ADVANCE(1128);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'f') ADVANCE(1130);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'f') ADVANCE(1132);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1090:
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
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'g') ADVANCE(1526);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'g') ADVANCE(1604);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'g') ADVANCE(1628);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'g') ADVANCE(1664);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'g') ADVANCE(1210);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'g') ADVANCE(871);
      if (lookahead == 'r') ADVANCE(1187);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'g') ADVANCE(1168);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'h') ADVANCE(1534);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'h') ADVANCE(1012);
      if (lookahead == 'k') ADVANCE(1453);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'h') ADVANCE(1002);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'h') ADVANCE(1005);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'h') ADVANCE(999);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'h') ADVANCE(1061);
      if (lookahead == 'k') ADVANCE(1004);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1096);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1156);
      if (lookahead == 'r') ADVANCE(1008);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1095);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(946);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(959);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1439);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1394);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1092);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1093);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1355);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(947);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1205);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1207);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1406);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1383);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(955);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(916);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(952);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1192);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1257);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1193);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1194);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1180);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1171);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1403);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1173);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1404);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1175);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1177);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1458);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1033);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1356);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1047);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(1057);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'i') ADVANCE(954);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'j') ADVANCE(1059);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'k') ADVANCE(1234);
      if (lookahead == 's') ADVANCE(1013);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'k') ADVANCE(1219);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(896);
      if (lookahead == 'o') ADVANCE(1145);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(852);
      if (lookahead == 'r') ADVANCE(1003);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(964);
      if (lookahead == 'n') ADVANCE(1077);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(895);
      if (lookahead == 'v') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1476);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1602);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1600);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1650);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1598);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1452);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1332);
      if (lookahead == 'o') ADVANCE(840);
      if (lookahead == 's') ADVANCE(1480);
      if (lookahead == 'x') ADVANCE(1538);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1433);
      if (lookahead == 'n') ADVANCE(831);
      if (lookahead == 'r') ADVANCE(1281);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1239);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(975);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1135);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1014);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1164);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1114);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1113);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(911);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(854);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1235);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1134);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1236);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1024);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(978);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1242);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1034);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(983);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(984);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(985);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1040);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(986);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(989);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(993);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1166);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1121);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1026);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1136);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1137);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1139);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'l') ADVANCE(1073);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'm') ADVANCE(1197);
      if (lookahead == 'n') ADVANCE(1118);
      if (lookahead == 's') ADVANCE(1218);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'm') ADVANCE(1566);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'm') ADVANCE(1524);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'm') ADVANCE(1522);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'm') ADVANCE(1268);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'm') ADVANCE(884);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'm') ADVANCE(982);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'm') ADVANCE(991);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'm') ADVANCE(994);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'm') ADVANCE(1017);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'm') ADVANCE(1053);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'm') ADVANCE(1042);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'm') ADVANCE(885);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1199:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1141);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1200:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1562);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1201:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1142);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1202:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1658);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1203:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(890);
      if (lookahead == 'o') ADVANCE(1147);
      if (lookahead == 's') ADVANCE(997);
      if (lookahead == 'v') ADVANCE(996);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1204:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1385);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1205:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1079);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1206:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(949);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1207:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1094);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1208:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1348);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1209:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1334);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1210:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(857);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1211:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1369);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1212:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1285);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1213:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1286);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1214:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1370);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1215:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1289);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1216:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1290);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1217:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1375);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1218:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1248);
      if (lookahead == 's') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1219:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1256);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1220:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1353);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1221:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1390);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1222:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1397);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1223:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1080);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1224:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1393);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1225:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1392);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1226:
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
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1227:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1228:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1354);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1229:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1395);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1230:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(877);
      if (lookahead == 'r') ADVANCE(912);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1231:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1420);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1232:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(1361);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1233:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(937);
      if (lookahead == 's') ADVANCE(1293);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1234:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(1446);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1235:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(1554);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1236:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(1556);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1237:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(1622);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1238:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(1638);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1239:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(1444);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1240:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(1378);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1241:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(1190);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1242:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(1445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1243:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(1328);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1244:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(969);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1245:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(1274);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1246:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(1220);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1247:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(1430);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1248:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(1382);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1249:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(1323);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1250:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(1223);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1251:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(1150);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1252:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(1287);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1253:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(861);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1254:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(1300);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1255:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(873);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1256:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(1447);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1257:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(1209);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1258:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(1222);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1259:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(1179);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1260:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(1312);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1261:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(1437);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1262:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(1228);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1263:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(1227);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1264:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'o') ADVANCE(1183);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1265:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'p') ADVANCE(1266);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1266:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'p') ADVANCE(1148);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1267:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'p') ADVANCE(856);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1268:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'p') ADVANCE(906);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1269:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'p') ADVANCE(1277);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1270:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'p') ADVANCE(1149);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1271:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'p') ADVANCE(1151);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1272:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'p') ADVANCE(1238);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1273:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'p') ADVANCE(1373);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1274:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'p') ADVANCE(1043);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1275:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'p') ADVANCE(1270);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1276:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'p') ADVANCE(1271);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1277:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'p') ADVANCE(1260);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1278:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'p') ADVANCE(1262);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1279:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'q') ADVANCE(1630);
      if (lookahead == 's') ADVANCE(1272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1280:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1486);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1281:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1488);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1282:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1510);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1283:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1514);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1284:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1584);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1285:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1286:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1582);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1287:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1660);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1288:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1632);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1289:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1578);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1290:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1590);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1291:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1530);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1292:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(901);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1293:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1280);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1294:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1001);
      if (lookahead == 's') ADVANCE(925);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1295:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(899);
      if (lookahead == 'u') ADVANCE(1206);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1296:
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
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1297:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1247);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1298:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(902);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1299:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1366);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1300:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1296);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1301:
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
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1302:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1330);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1303:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1035);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1304:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1320);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1305:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(850);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1306:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1371);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1307:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1288);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1308:
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
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1309:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1374);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1310:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(864);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1311:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1038);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1312:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1376);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1313:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(988);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1314:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1023);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1315:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1440);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1316:
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
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1317:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1085);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1318:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1410);
      if (lookahead == 't') ADVANCE(1052);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1319:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1435);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1320:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1252);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1321:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1436);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1322:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(867);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1323:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(967);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1324:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1438);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1325:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1044);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1326:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1048);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1327:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(921);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1328:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1419);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1329:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1067);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1330:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1062);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1331:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(1069);
      if (lookahead == 't') ADVANCE(1297);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1332:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(834);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1333:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(1520);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1334:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(1640);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1335:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(1610);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1336:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(1642);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1337:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(1644);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1338:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(1646);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1339:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(1106);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1340:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(1428);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1341:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(1344);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1342:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(1278);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1343:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(1333);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1344:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(841);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1345:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(1426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1346:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(1071);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1347:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(1384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1348:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(1259);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1349:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(1335);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1350:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(1418);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1351:
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
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1352:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(1405);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1353:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(981);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1354:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(995);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1355:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(1100);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1356:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(1101);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1357:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(1022);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1358:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(1412);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1359:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(1064);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1360:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(1415);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1361:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 's') ADVANCE(1264);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1362:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1102);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1363:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1498);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1364:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1502);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1365:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1572);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1366:
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
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1367:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1564);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1368:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1504);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1369:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1508);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1370:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1512);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1371:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1592);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1372:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1594);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1373:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1666);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1374:
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
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1375:
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
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1376:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1656);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1377:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(869);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1378:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1098);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1379:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(832);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1380:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1109);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1381:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1108);
      if (lookahead == 'v') ADVANCE(1006);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1382:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1357);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1383:
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
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1384:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(918);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1385:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(847);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1386:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1255);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1387:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1122);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1388:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1253);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1389:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(892);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1390:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1336);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1391:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1392:
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
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1393:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(842);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1394:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(977);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1395:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1338);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1396:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1123);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1397:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1301);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1398:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1399:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1116);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1400:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(979);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1401:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1018);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1402:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(990);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1403:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1007);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1404:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1011);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1405:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1406:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1065);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1407:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1303);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1408:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(870);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1409:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1029);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1410:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(876);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1411:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1124);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1412:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(913);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1413:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1325);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1414:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1125);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1415:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(917);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1416:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1417:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1066);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1418:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(924);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1419:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(879);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1420:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(880);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1421:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 't') ADVANCE(1072);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1422:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'u') ADVANCE(1075);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1423:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'u') ADVANCE(1273);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1424:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'u') ADVANCE(1208);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1425:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'u') ADVANCE(1201);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1426:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'u') ADVANCE(1269);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1427:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'u') ADVANCE(1302);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1428:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'u') ADVANCE(1313);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1429:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'u') ADVANCE(1399);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1430:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'u') ADVANCE(931);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1431:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'u') ADVANCE(1045);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1432:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'u') ADVANCE(1232);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1433:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'v') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1434:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'v') ADVANCE(1016);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1435:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'v') ADVANCE(1019);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1436:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'v') ADVANCE(1020);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1437:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'v') ADVANCE(1028);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1438:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'v') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1439:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'v') ADVANCE(915);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1440:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'v') ADVANCE(1054);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1441:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'v') ADVANCE(1051);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1442:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'v') ADVANCE(1055);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1443:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'v') ADVANCE(1056);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1444:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'w') ADVANCE(1540);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1445:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'w') ADVANCE(1662);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1446:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'w') ADVANCE(1200);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1447:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'w') ADVANCE(1202);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1448:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'x') ADVANCE(1558);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1449:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'x') ADVANCE(1560);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1450:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'x') ADVANCE(1015);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1451:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'y') ADVANCE(810);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1452:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'y') ADVANCE(1492);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1453:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'y') ADVANCE(1448);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1454:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'y') ADVANCE(1449);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1455:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'y') ADVANCE(868);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1456:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'z') ADVANCE(987);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1457:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'z') ADVANCE(1025);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1458:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'z') ADVANCE(1027);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1459:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1459);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1460:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ':' ||
          lookahead == ';') ADVANCE(734);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1460);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1461);
      END_STATE();
    case 1461:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1461);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1462:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1463:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 1464:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1464);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1465);
      END_STATE();
    case 1465:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1465);
      END_STATE();
    case 1466:
      ACCEPT_TOKEN(sym_decimal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1466);
      END_STATE();
    case 1467:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 1468:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1469:
      ACCEPT_TOKEN(aux_sym_hexidecimal_token1);
      END_STATE();
    case 1470:
      ACCEPT_TOKEN(aux_sym_hexidecimal_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1469);
      END_STATE();
    case 1471:
      ACCEPT_TOKEN(aux_sym_hexidecimal_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1470);
      END_STATE();
    case 1472:
      ACCEPT_TOKEN(aux_sym_hexidecimal_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1471);
      END_STATE();
    case 1473:
      ACCEPT_TOKEN(anon_sym_rr);
      END_STATE();
    case 1474:
      ACCEPT_TOKEN(anon_sym_rr);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1475:
      ACCEPT_TOKEN(anon_sym_eol);
      END_STATE();
    case 1476:
      ACCEPT_TOKEN(anon_sym_eol);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1477:
      ACCEPT_TOKEN(anon_sym_nop);
      END_STATE();
    case 1478:
      ACCEPT_TOKEN(anon_sym_nop);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1479:
      ACCEPT_TOKEN(anon_sym_ts);
      END_STATE();
    case 1480:
      ACCEPT_TOKEN(anon_sym_ts);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1481:
      ACCEPT_TOKEN(anon_sym_sec);
      END_STATE();
    case 1482:
      ACCEPT_TOKEN(anon_sym_sec);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1483:
      ACCEPT_TOKEN(anon_sym_esec);
      END_STATE();
    case 1484:
      ACCEPT_TOKEN(anon_sym_esec);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1485:
      ACCEPT_TOKEN(anon_sym_lsrr);
      END_STATE();
    case 1486:
      ACCEPT_TOKEN(anon_sym_lsrr);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1487:
      ACCEPT_TOKEN(anon_sym_ssrr);
      END_STATE();
    case 1488:
      ACCEPT_TOKEN(anon_sym_ssrr);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1489:
      ACCEPT_TOKEN(anon_sym_satid);
      END_STATE();
    case 1490:
      ACCEPT_TOKEN(anon_sym_satid);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1491:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '_') ADVANCE(298);
      END_STATE();
    case 1492:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '_') ADVANCE(1082);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1493:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 1494:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1495:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 1496:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1497:
      ACCEPT_TOKEN(anon_sym_isset);
      END_STATE();
    case 1498:
      ACCEPT_TOKEN(anon_sym_isset);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1499:
      ACCEPT_TOKEN(anon_sym_toggle);
      END_STATE();
    case 1500:
      ACCEPT_TOKEN(anon_sym_toggle);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1501:
      ACCEPT_TOKEN(anon_sym_unset);
      END_STATE();
    case 1502:
      ACCEPT_TOKEN(anon_sym_unset);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1503:
      ACCEPT_TOKEN(anon_sym_isnotset);
      END_STATE();
    case 1504:
      ACCEPT_TOKEN(anon_sym_isnotset);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1505:
      ACCEPT_TOKEN(anon_sym_noalert);
      END_STATE();
    case 1506:
      ACCEPT_TOKEN(anon_sym_noalert);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1507:
      ACCEPT_TOKEN(anon_sym_to_client);
      END_STATE();
    case 1508:
      ACCEPT_TOKEN(anon_sym_to_client);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1509:
      ACCEPT_TOKEN(anon_sym_to_server);
      END_STATE();
    case 1510:
      ACCEPT_TOKEN(anon_sym_to_server);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1511:
      ACCEPT_TOKEN(anon_sym_from_client);
      END_STATE();
    case 1512:
      ACCEPT_TOKEN(anon_sym_from_client);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1513:
      ACCEPT_TOKEN(anon_sym_from_server);
      END_STATE();
    case 1514:
      ACCEPT_TOKEN(anon_sym_from_server);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1515:
      ACCEPT_TOKEN(anon_sym_established);
      END_STATE();
    case 1516:
      ACCEPT_TOKEN(anon_sym_established);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1517:
      ACCEPT_TOKEN(anon_sym_not_established);
      END_STATE();
    case 1518:
      ACCEPT_TOKEN(anon_sym_not_established);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1519:
      ACCEPT_TOKEN(anon_sym_stateless);
      END_STATE();
    case 1520:
      ACCEPT_TOKEN(anon_sym_stateless);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1521:
      ACCEPT_TOKEN(anon_sym_only_stream);
      END_STATE();
    case 1522:
      ACCEPT_TOKEN(anon_sym_only_stream);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1523:
      ACCEPT_TOKEN(anon_sym_no_stream);
      END_STATE();
    case 1524:
      ACCEPT_TOKEN(anon_sym_no_stream);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1525:
      ACCEPT_TOKEN(anon_sym_only_frag);
      END_STATE();
    case 1526:
      ACCEPT_TOKEN(anon_sym_only_frag);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1527:
      ACCEPT_TOKEN(anon_sym_no_frag);
      END_STATE();
    case 1528:
      ACCEPT_TOKEN(anon_sym_no_frag);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1529:
      ACCEPT_TOKEN(anon_sym_request_SLASHto_server);
      END_STATE();
    case 1530:
      ACCEPT_TOKEN(anon_sym_request_SLASHto_server);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1531:
      ACCEPT_TOKEN(anon_sym_response_SLASHto_client);
      END_STATE();
    case 1532:
      ACCEPT_TOKEN(anon_sym_response_SLASHto_client);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1533:
      ACCEPT_TOKEN(anon_sym_both);
      END_STATE();
    case 1534:
      ACCEPT_TOKEN(anon_sym_both);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1535:
      ACCEPT_TOKEN(anon_sym_file);
      END_STATE();
    case 1536:
      ACCEPT_TOKEN(anon_sym_file);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1537:
      ACCEPT_TOKEN(anon_sym_tx);
      END_STATE();
    case 1538:
      ACCEPT_TOKEN(anon_sym_tx);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1539:
      ACCEPT_TOKEN(anon_sym_ssn_SLASHflow);
      END_STATE();
    case 1540:
      ACCEPT_TOKEN(anon_sym_ssn_SLASHflow);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1541:
      ACCEPT_TOKEN(anon_sym_sslv2);
      END_STATE();
    case 1542:
      ACCEPT_TOKEN(anon_sym_sslv2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1543:
      ACCEPT_TOKEN(anon_sym_sslv3);
      END_STATE();
    case 1544:
      ACCEPT_TOKEN(anon_sym_sslv3);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1545:
      ACCEPT_TOKEN(anon_sym_tls1_DOT0);
      END_STATE();
    case 1546:
      ACCEPT_TOKEN(anon_sym_tls1_DOT0);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1547:
      ACCEPT_TOKEN(anon_sym_tls1_DOT1);
      END_STATE();
    case 1548:
      ACCEPT_TOKEN(anon_sym_tls1_DOT1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1549:
      ACCEPT_TOKEN(anon_sym_tls1_DOT2);
      END_STATE();
    case 1550:
      ACCEPT_TOKEN(anon_sym_tls1_DOT2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1551:
      ACCEPT_TOKEN(anon_sym_tls1_DOT3);
      END_STATE();
    case 1552:
      ACCEPT_TOKEN(anon_sym_tls1_DOT3);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1553:
      ACCEPT_TOKEN(anon_sym_client_hello);
      END_STATE();
    case 1554:
      ACCEPT_TOKEN(anon_sym_client_hello);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1555:
      ACCEPT_TOKEN(anon_sym_server_hello);
      END_STATE();
    case 1556:
      ACCEPT_TOKEN(anon_sym_server_hello);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1557:
      ACCEPT_TOKEN(anon_sym_client_kyx);
      END_STATE();
    case 1558:
      ACCEPT_TOKEN(anon_sym_client_kyx);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1559:
      ACCEPT_TOKEN(anon_sym_server_keyx);
      END_STATE();
    case 1560:
      ACCEPT_TOKEN(anon_sym_server_keyx);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1561:
      ACCEPT_TOKEN(anon_sym_unkown);
      END_STATE();
    case 1562:
      ACCEPT_TOKEN(anon_sym_unkown);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1563:
      ACCEPT_TOKEN(anon_sym_2_compat);
      END_STATE();
    case 1564:
      ACCEPT_TOKEN(anon_sym_2_compat);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1565:
      ACCEPT_TOKEN(anon_sym_confirm);
      END_STATE();
    case 1566:
      ACCEPT_TOKEN(anon_sym_confirm);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1567:
      ACCEPT_TOKEN(anon_sym_read);
      END_STATE();
    case 1568:
      ACCEPT_TOKEN(anon_sym_read);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1569:
      ACCEPT_TOKEN(anon_sym_write);
      END_STATE();
    case 1570:
      ACCEPT_TOKEN(anon_sym_write);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1571:
      ACCEPT_TOKEN(anon_sym_select);
      END_STATE();
    case 1572:
      ACCEPT_TOKEN(anon_sym_select);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1573:
      ACCEPT_TOKEN(anon_sym_operate);
      END_STATE();
    case 1574:
      ACCEPT_TOKEN(anon_sym_operate);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1575:
      ACCEPT_TOKEN(anon_sym_direct_operate);
      if (lookahead == '_') ADVANCE(443);
      END_STATE();
    case 1576:
      ACCEPT_TOKEN(anon_sym_direct_operate);
      if (lookahead == '_') ADVANCE(1215);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1577:
      ACCEPT_TOKEN(anon_sym_direct_operate_nr);
      END_STATE();
    case 1578:
      ACCEPT_TOKEN(anon_sym_direct_operate_nr);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1579:
      ACCEPT_TOKEN(anon_sym_immed_freeze);
      if (lookahead == '_') ADVANCE(442);
      END_STATE();
    case 1580:
      ACCEPT_TOKEN(anon_sym_immed_freeze);
      if (lookahead == '_') ADVANCE(1213);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1581:
      ACCEPT_TOKEN(anon_sym_immed_freeze_nr);
      END_STATE();
    case 1582:
      ACCEPT_TOKEN(anon_sym_immed_freeze_nr);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1583:
      ACCEPT_TOKEN(anon_sym_freeze_clear);
      if (lookahead == '_') ADVANCE(441);
      END_STATE();
    case 1584:
      ACCEPT_TOKEN(anon_sym_freeze_clear);
      if (lookahead == '_') ADVANCE(1212);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1585:
      ACCEPT_TOKEN(anon_sym_freeze_clear_nr);
      END_STATE();
    case 1586:
      ACCEPT_TOKEN(anon_sym_freeze_clear_nr);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1587:
      ACCEPT_TOKEN(anon_sym_freeze_at_time);
      if (lookahead == '_') ADVANCE(445);
      END_STATE();
    case 1588:
      ACCEPT_TOKEN(anon_sym_freeze_at_time);
      if (lookahead == '_') ADVANCE(1216);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1589:
      ACCEPT_TOKEN(anon_sym_freeze_at_time_nr);
      END_STATE();
    case 1590:
      ACCEPT_TOKEN(anon_sym_freeze_at_time_nr);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1591:
      ACCEPT_TOKEN(anon_sym_cold_restart);
      END_STATE();
    case 1592:
      ACCEPT_TOKEN(anon_sym_cold_restart);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1593:
      ACCEPT_TOKEN(anon_sym_warm_restart);
      END_STATE();
    case 1594:
      ACCEPT_TOKEN(anon_sym_warm_restart);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1595:
      ACCEPT_TOKEN(anon_sym_initialize_data);
      END_STATE();
    case 1596:
      ACCEPT_TOKEN(anon_sym_initialize_data);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1597:
      ACCEPT_TOKEN(anon_sym_initialize_appl);
      END_STATE();
    case 1598:
      ACCEPT_TOKEN(anon_sym_initialize_appl);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1599:
      ACCEPT_TOKEN(anon_sym_start_appl);
      END_STATE();
    case 1600:
      ACCEPT_TOKEN(anon_sym_start_appl);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1601:
      ACCEPT_TOKEN(anon_sym_stop_appl);
      END_STATE();
    case 1602:
      ACCEPT_TOKEN(anon_sym_stop_appl);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1603:
      ACCEPT_TOKEN(anon_sym_save_config);
      END_STATE();
    case 1604:
      ACCEPT_TOKEN(anon_sym_save_config);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1605:
      ACCEPT_TOKEN(anon_sym_enable_unsolicited);
      END_STATE();
    case 1606:
      ACCEPT_TOKEN(anon_sym_enable_unsolicited);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1607:
      ACCEPT_TOKEN(anon_sym_disable_unsolicited);
      END_STATE();
    case 1608:
      ACCEPT_TOKEN(anon_sym_disable_unsolicited);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1609:
      ACCEPT_TOKEN(anon_sym_assign_class);
      END_STATE();
    case 1610:
      ACCEPT_TOKEN(anon_sym_assign_class);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1611:
      ACCEPT_TOKEN(anon_sym_delay_measure);
      END_STATE();
    case 1612:
      ACCEPT_TOKEN(anon_sym_delay_measure);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1613:
      ACCEPT_TOKEN(anon_sym_record_current_time);
      END_STATE();
    case 1614:
      ACCEPT_TOKEN(anon_sym_record_current_time);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1615:
      ACCEPT_TOKEN(anon_sym_open_file);
      END_STATE();
    case 1616:
      ACCEPT_TOKEN(anon_sym_open_file);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1617:
      ACCEPT_TOKEN(anon_sym_close_file);
      END_STATE();
    case 1618:
      ACCEPT_TOKEN(anon_sym_close_file);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1619:
      ACCEPT_TOKEN(anon_sym_delete_file);
      END_STATE();
    case 1620:
      ACCEPT_TOKEN(anon_sym_delete_file);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1621:
      ACCEPT_TOKEN(anon_sym_get_file_info);
      END_STATE();
    case 1622:
      ACCEPT_TOKEN(anon_sym_get_file_info);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1623:
      ACCEPT_TOKEN(anon_sym_authenticate_file);
      END_STATE();
    case 1624:
      ACCEPT_TOKEN(anon_sym_authenticate_file);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1625:
      ACCEPT_TOKEN(anon_sym_abort_file);
      END_STATE();
    case 1626:
      ACCEPT_TOKEN(anon_sym_abort_file);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1627:
      ACCEPT_TOKEN(anon_sym_activate_config);
      END_STATE();
    case 1628:
      ACCEPT_TOKEN(anon_sym_activate_config);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1629:
      ACCEPT_TOKEN(anon_sym_authenticate_req);
      END_STATE();
    case 1630:
      ACCEPT_TOKEN(anon_sym_authenticate_req);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1631:
      ACCEPT_TOKEN(anon_sym_authenticate_err);
      END_STATE();
    case 1632:
      ACCEPT_TOKEN(anon_sym_authenticate_err);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1633:
      ACCEPT_TOKEN(anon_sym_response);
      if (lookahead == '/') ADVANCE(1388);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1634:
      ACCEPT_TOKEN(anon_sym_response);
      if (lookahead == '/') ADVANCE(658);
      END_STATE();
    case 1635:
      ACCEPT_TOKEN(anon_sym_unsolicited_response);
      END_STATE();
    case 1636:
      ACCEPT_TOKEN(anon_sym_unsolicited_response);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1637:
      ACCEPT_TOKEN(anon_sym_authenticate_respo);
      END_STATE();
    case 1638:
      ACCEPT_TOKEN(anon_sym_authenticate_respo);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1639:
      ACCEPT_TOKEN(anon_sym_all_stations);
      END_STATE();
    case 1640:
      ACCEPT_TOKEN(anon_sym_all_stations);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1641:
      ACCEPT_TOKEN(anon_sym_class_1_events);
      END_STATE();
    case 1642:
      ACCEPT_TOKEN(anon_sym_class_1_events);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1643:
      ACCEPT_TOKEN(anon_sym_class_2_events);
      END_STATE();
    case 1644:
      ACCEPT_TOKEN(anon_sym_class_2_events);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1645:
      ACCEPT_TOKEN(anon_sym_class_3_events);
      END_STATE();
    case 1646:
      ACCEPT_TOKEN(anon_sym_class_3_events);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1647:
      ACCEPT_TOKEN(anon_sym_need_time);
      END_STATE();
    case 1648:
      ACCEPT_TOKEN(anon_sym_need_time);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1649:
      ACCEPT_TOKEN(anon_sym_local_control);
      END_STATE();
    case 1650:
      ACCEPT_TOKEN(anon_sym_local_control);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1651:
      ACCEPT_TOKEN(anon_sym_device_trouble);
      END_STATE();
    case 1652:
      ACCEPT_TOKEN(anon_sym_device_trouble);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1653:
      ACCEPT_TOKEN(anon_sym_device_restart);
      END_STATE();
    case 1654:
      ACCEPT_TOKEN(anon_sym_device_restart);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1655:
      ACCEPT_TOKEN(anon_sym_no_func_code_support);
      END_STATE();
    case 1656:
      ACCEPT_TOKEN(anon_sym_no_func_code_support);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1657:
      ACCEPT_TOKEN(anon_sym_object_unknown);
      END_STATE();
    case 1658:
      ACCEPT_TOKEN(anon_sym_object_unknown);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1659:
      ACCEPT_TOKEN(anon_sym_parameter_error);
      END_STATE();
    case 1660:
      ACCEPT_TOKEN(anon_sym_parameter_error);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1661:
      ACCEPT_TOKEN(anon_sym_event_buffer_overflow);
      END_STATE();
    case 1662:
      ACCEPT_TOKEN(anon_sym_event_buffer_overflow);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1663:
      ACCEPT_TOKEN(anon_sym_alread_executing);
      END_STATE();
    case 1664:
      ACCEPT_TOKEN(anon_sym_alread_executing);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1665:
      ACCEPT_TOKEN(anon_sym_config_corrupt);
      END_STATE();
    case 1666:
      ACCEPT_TOKEN(anon_sym_config_corrupt);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1667:
      ACCEPT_TOKEN(anon_sym_reserved_2);
      END_STATE();
    case 1668:
      ACCEPT_TOKEN(anon_sym_reserved_2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    case 1669:
      ACCEPT_TOKEN(anon_sym_reserved_1);
      END_STATE();
    case 1670:
      ACCEPT_TOKEN(anon_sym_reserved_1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(1462);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 736},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 736},
  [8] = {.lex_state = 736},
  [9] = {.lex_state = 736},
  [10] = {.lex_state = 736},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 736},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 736},
  [19] = {.lex_state = 736},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 736},
  [22] = {.lex_state = 736},
  [23] = {.lex_state = 736},
  [24] = {.lex_state = 736},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 736},
  [27] = {.lex_state = 736},
  [28] = {.lex_state = 736},
  [29] = {.lex_state = 736},
  [30] = {.lex_state = 736},
  [31] = {.lex_state = 736},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 736},
  [34] = {.lex_state = 736},
  [35] = {.lex_state = 736},
  [36] = {.lex_state = 736},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 736},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 736},
  [41] = {.lex_state = 736},
  [42] = {.lex_state = 736},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 736},
  [45] = {.lex_state = 736},
  [46] = {.lex_state = 736},
  [47] = {.lex_state = 736},
  [48] = {.lex_state = 736},
  [49] = {.lex_state = 5},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 736},
  [54] = {.lex_state = 736},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 736},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 736},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 739},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 729},
  [86] = {.lex_state = 730},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 780},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
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
  },
  [1] = {
    [sym_source_file] = STATE(88),
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
    [sym_digit] = STATE(59),
    [sym_text] = STATE(59),
    [sym_string] = STATE(59),
    [sym_hexidecimal] = STATE(59),
    [sym_value] = STATE(93),
    [sym_constant] = STATE(59),
    [aux_sym_text_repeat1] = STATE(43),
    [sym_negation] = ACTIONS(11),
    [anon_sym_any] = ACTIONS(13),
    [anon_sym_GT] = ACTIONS(15),
    [anon_sym_LT] = ACTIONS(15),
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
  },
  [3] = {
    [sym_digit] = STATE(59),
    [sym_text] = STATE(59),
    [sym_string] = STATE(59),
    [sym_hexidecimal] = STATE(59),
    [sym_value] = STATE(91),
    [sym_constant] = STATE(59),
    [aux_sym_text_repeat1] = STATE(43),
    [sym_negation] = ACTIONS(11),
    [anon_sym_any] = ACTIONS(13),
    [anon_sym_GT] = ACTIONS(15),
    [anon_sym_LT] = ACTIONS(15),
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
  },
  [4] = {
    [sym_digit] = STATE(59),
    [sym_text] = STATE(59),
    [sym_string] = STATE(59),
    [sym_hexidecimal] = STATE(59),
    [sym_value] = STATE(84),
    [sym_constant] = STATE(59),
    [aux_sym_text_repeat1] = STATE(43),
    [sym_negation] = ACTIONS(11),
    [anon_sym_any] = ACTIONS(13),
    [anon_sym_GT] = ACTIONS(15),
    [anon_sym_LT] = ACTIONS(15),
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
  },
  [5] = {
    [sym_digit] = STATE(67),
    [sym_text] = STATE(67),
    [sym_string] = STATE(67),
    [sym_hexidecimal] = STATE(67),
    [sym_constant] = STATE(67),
    [aux_sym_text_repeat1] = STATE(43),
    [anon_sym_any] = ACTIONS(13),
    [anon_sym_GT] = ACTIONS(15),
    [anon_sym_LT] = ACTIONS(15),
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
  },
  [6] = {
    [sym_negation] = ACTIONS(29),
    [anon_sym_any] = ACTIONS(29),
    [anon_sym_GT] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(29),
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
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(33), 1,
      anon_sym_http,
    STATE(15), 1,
      sym_protocol,
    STATE(80), 1,
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
    STATE(66), 6,
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
    STATE(70), 6,
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
    STATE(72), 6,
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
    STATE(60), 3,
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
    STATE(69), 3,
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
    STATE(61), 3,
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
    STATE(87), 3,
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
    STATE(78), 3,
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
    STATE(75), 1,
      sym_text,
    STATE(92), 1,
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
    STATE(75), 1,
      sym_text,
    STATE(92), 1,
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
    STATE(75), 1,
      sym_text,
    STATE(92), 1,
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
  [689] = 1,
    ACTIONS(164), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH_GT,
      anon_sym_LT_GT,
      anon_sym_LPAREN,
  [697] = 1,
    ACTIONS(150), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH_GT,
      anon_sym_LT_GT,
      anon_sym_LPAREN,
  [705] = 2,
    ACTIONS(168), 1,
      sym__ipv6_octet,
    ACTIONS(166), 4,
      anon_sym_LBRACK,
      sym_negation,
      anon_sym_DOLLAR,
      aux_sym_ipv4_token1,
  [715] = 5,
    ACTIONS(125), 1,
      aux_sym_text_token1,
    ACTIONS(170), 1,
      anon_sym_RPAREN,
    STATE(43), 1,
      aux_sym_text_repeat1,
    STATE(75), 1,
      sym_text,
    STATE(90), 1,
      sym__opt,
  [731] = 3,
    ACTIONS(174), 1,
      aux_sym_text_token1,
    STATE(51), 1,
      aux_sym_text_repeat1,
    ACTIONS(172), 3,
      anon_sym_COMMA,
      sym_colon,
      sym_semicolon,
  [743] = 2,
    ACTIONS(179), 1,
      sym__ipv6_octet,
    ACTIONS(177), 4,
      anon_sym_LBRACK,
      sym_negation,
      anon_sym_DOLLAR,
      aux_sym_ipv4_token1,
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
    STATE(64), 1,
      aux_sym_group_location_repeat1,
  [779] = 3,
    ACTIONS(187), 1,
      anon_sym_COMMA,
    ACTIONS(189), 1,
      anon_sym_RBRACK,
    STATE(57), 1,
      aux_sym_group_port_repeat1,
  [789] = 3,
    ACTIONS(191), 1,
      anon_sym_COMMA,
    ACTIONS(194), 1,
      anon_sym_RBRACK,
    STATE(57), 1,
      aux_sym_group_port_repeat1,
  [799] = 3,
    ACTIONS(196), 1,
      anon_sym_DQUOTE,
    ACTIONS(198), 1,
      aux_sym_string_token1,
    STATE(63), 1,
      aux_sym_string_repeat1,
  [809] = 3,
    ACTIONS(200), 1,
      anon_sym_COMMA,
    ACTIONS(202), 1,
      sym_semicolon,
    STATE(3), 1,
      sym_comma,
  [819] = 3,
    ACTIONS(111), 1,
      anon_sym_RBRACK,
    ACTIONS(187), 1,
      anon_sym_COMMA,
    STATE(68), 1,
      aux_sym_group_port_repeat1,
  [829] = 2,
    STATE(14), 1,
      sym_direction,
    ACTIONS(204), 2,
      anon_sym_DASH_GT,
      anon_sym_LT_GT,
  [837] = 3,
    ACTIONS(206), 1,
      anon_sym_DQUOTE,
    ACTIONS(208), 1,
      aux_sym_string_token1,
    STATE(62), 1,
      aux_sym_string_repeat1,
  [847] = 3,
    ACTIONS(211), 1,
      anon_sym_DQUOTE,
    ACTIONS(213), 1,
      aux_sym_string_token1,
    STATE(62), 1,
      aux_sym_string_repeat1,
  [857] = 3,
    ACTIONS(215), 1,
      anon_sym_COMMA,
    ACTIONS(218), 1,
      anon_sym_RBRACK,
    STATE(64), 1,
      aux_sym_group_location_repeat1,
  [867] = 3,
    ACTIONS(183), 1,
      anon_sym_COMMA,
    ACTIONS(220), 1,
      anon_sym_RBRACK,
    STATE(64), 1,
      aux_sym_group_location_repeat1,
  [877] = 3,
    ACTIONS(64), 1,
      anon_sym_RBRACK,
    ACTIONS(183), 1,
      anon_sym_COMMA,
    STATE(55), 1,
      aux_sym_group_location_repeat1,
  [887] = 3,
    ACTIONS(200), 1,
      anon_sym_COMMA,
    ACTIONS(222), 1,
      sym_semicolon,
    STATE(2), 1,
      sym_comma,
  [897] = 3,
    ACTIONS(187), 1,
      anon_sym_COMMA,
    ACTIONS(224), 1,
      anon_sym_RBRACK,
    STATE(57), 1,
      aux_sym_group_port_repeat1,
  [907] = 3,
    ACTIONS(187), 1,
      anon_sym_COMMA,
    ACTIONS(224), 1,
      anon_sym_RBRACK,
    STATE(56), 1,
      aux_sym_group_port_repeat1,
  [917] = 3,
    ACTIONS(183), 1,
      anon_sym_COMMA,
    ACTIONS(185), 1,
      anon_sym_RBRACK,
    STATE(65), 1,
      aux_sym_group_location_repeat1,
  [927] = 1,
    ACTIONS(226), 2,
      anon_sym_COMMA,
      sym_semicolon,
  [932] = 1,
    ACTIONS(218), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [937] = 1,
    ACTIONS(228), 2,
      anon_sym_COMMA,
      sym_semicolon,
  [942] = 1,
    ACTIONS(230), 2,
      anon_sym_COMMA,
      sym_semicolon,
  [947] = 2,
    ACTIONS(232), 1,
      sym_colon,
    ACTIONS(234), 1,
      sym_semicolon,
  [954] = 1,
    ACTIONS(236), 2,
      anon_sym_COMMA,
      sym_semicolon,
  [959] = 1,
    ACTIONS(238), 2,
      anon_sym_COMMA,
      sym_semicolon,
  [964] = 1,
    ACTIONS(194), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [969] = 2,
    ACTIONS(240), 1,
      anon_sym_LBRACK,
    ACTIONS(242), 1,
      aux_sym_port_token1,
  [976] = 2,
    ACTIONS(244), 1,
      anon_sym_LPAREN,
    STATE(19), 1,
      sym_options,
  [983] = 1,
    ACTIONS(246), 2,
      anon_sym_COMMA,
      sym_semicolon,
  [988] = 2,
    ACTIONS(141), 1,
      anon_sym_RPAREN,
    ACTIONS(248), 1,
      aux_sym_text_token1,
  [995] = 1,
    ACTIONS(250), 1,
      aux_sym_comment_token1,
  [999] = 1,
    ACTIONS(252), 1,
      sym_semicolon,
  [1003] = 1,
    ACTIONS(254), 1,
      aux_sym_hexidecimal_token1,
  [1007] = 1,
    ACTIONS(256), 1,
      aux_sym_digit_token1,
  [1011] = 1,
    ACTIONS(258), 1,
      anon_sym_LPAREN,
  [1015] = 1,
    ACTIONS(260), 1,
      ts_builtin_sym_end,
  [1019] = 1,
    ACTIONS(262), 1,
      aux_sym_variable_token1,
  [1023] = 1,
    ACTIONS(264), 1,
      sym_semicolon,
  [1027] = 1,
    ACTIONS(266), 1,
      sym_semicolon,
  [1031] = 1,
    ACTIONS(268), 1,
      sym_semicolon,
  [1035] = 1,
    ACTIONS(270), 1,
      sym_semicolon,
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
  [SMALL_STATE(48)] = 697,
  [SMALL_STATE(49)] = 705,
  [SMALL_STATE(50)] = 715,
  [SMALL_STATE(51)] = 731,
  [SMALL_STATE(52)] = 743,
  [SMALL_STATE(53)] = 753,
  [SMALL_STATE(54)] = 761,
  [SMALL_STATE(55)] = 769,
  [SMALL_STATE(56)] = 779,
  [SMALL_STATE(57)] = 789,
  [SMALL_STATE(58)] = 799,
  [SMALL_STATE(59)] = 809,
  [SMALL_STATE(60)] = 819,
  [SMALL_STATE(61)] = 829,
  [SMALL_STATE(62)] = 837,
  [SMALL_STATE(63)] = 847,
  [SMALL_STATE(64)] = 857,
  [SMALL_STATE(65)] = 867,
  [SMALL_STATE(66)] = 877,
  [SMALL_STATE(67)] = 887,
  [SMALL_STATE(68)] = 897,
  [SMALL_STATE(69)] = 907,
  [SMALL_STATE(70)] = 917,
  [SMALL_STATE(71)] = 927,
  [SMALL_STATE(72)] = 932,
  [SMALL_STATE(73)] = 937,
  [SMALL_STATE(74)] = 942,
  [SMALL_STATE(75)] = 947,
  [SMALL_STATE(76)] = 954,
  [SMALL_STATE(77)] = 959,
  [SMALL_STATE(78)] = 964,
  [SMALL_STATE(79)] = 969,
  [SMALL_STATE(80)] = 976,
  [SMALL_STATE(81)] = 983,
  [SMALL_STATE(82)] = 988,
  [SMALL_STATE(83)] = 995,
  [SMALL_STATE(84)] = 999,
  [SMALL_STATE(85)] = 1003,
  [SMALL_STATE(86)] = 1007,
  [SMALL_STATE(87)] = 1011,
  [SMALL_STATE(88)] = 1015,
  [SMALL_STATE(89)] = 1019,
  [SMALL_STATE(90)] = 1023,
  [SMALL_STATE(91)] = 1027,
  [SMALL_STATE(92)] = 1031,
  [SMALL_STATE(93)] = 1035,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comma, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 1),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(83),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
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
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
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
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 1),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_port, 2),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port, 3),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_port, 5),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_port, 3),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction, 1),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_direction, 1),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(51),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_protocol, 1),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_protocol, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_port, 4),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_port_repeat1, 2), SHIFT_REPEAT(28),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_port_repeat1, 2),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(62),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_location_repeat1, 2), SHIFT_REPEAT(13),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_location_repeat1, 2),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 2),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_digit, 1),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__opt, 1, .production_id = 1),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_digit, 2),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hexidecimal, 2),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__opt, 3, .production_id = 2),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 6),
  [260] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 3),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 4),
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
