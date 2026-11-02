extern void fn_827BD8D0(void);
extern void fn_827BD908(void);
extern void fn_827BD950(void);
extern void fn_827BD9D0(void);
extern void fn_827BDAF0(void);
extern const char *const lbl_82017538[];

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

struct jpeg_error_mgr *fn_827BDB08(struct jpeg_error_mgr *err)
{
  err->error_exit = fn_827BD8D0;
  err->emit_message = fn_827BD950;
  err->output_message = fn_827BD908;
  err->format_message = fn_827BD9D0;
  err->reset_error_mgr = fn_827BDAF0;

  err->trace_level = 0;
  err->num_warnings = 0;
  err->msg_code = 0;

  err->jpeg_message_table = lbl_82017538;
  err->last_jpeg_message = 0x7c - 1;

  err->addon_message_table = 0;
  err->first_addon_message = 0;
  err->last_addon_message = 0;

  return err;
}
