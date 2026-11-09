extern void error_exit(void);
extern void output_message(void);
extern void emit_message(void);
extern void format_message(void);
extern void reset_error_mgr(void);
extern const char *const jpeg_std_message_table[];

struct jpeg_error_mgr {
  void (*error_exit)(void);
  void (*emit_message)(void);
  void (*output_message)(void);
  void (*format_message)(void);
  void (*reset_error_mgr)(void);
  int msg_code;
  union {
    int i[8];
    char s[80];
  } msg_parm;
  int trace_level;
  long num_warnings;
  const char *const *jpeg_message_table;
  int last_jpeg_message;
  const char *const *addon_message_table;
  int first_addon_message;
  int last_addon_message;
};

struct jpeg_error_mgr *jpeg_std_error(struct jpeg_error_mgr *err)
{
  err->error_exit = error_exit;
  err->emit_message = emit_message;
  err->output_message = output_message;
  err->format_message = format_message;
  err->reset_error_mgr = reset_error_mgr;

  err->trace_level = 0;
  err->num_warnings = 0;
  err->msg_code = 0;

  err->jpeg_message_table = jpeg_std_message_table;
  err->last_jpeg_message = 0x7c - 1;

  err->addon_message_table = 0;
  err->first_addon_message = 0;
  err->last_addon_message = 0;

  return err;
}
