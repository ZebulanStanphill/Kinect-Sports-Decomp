typedef void (*LogFn_82B9C788)(void *ctx, const char *fmt, const char *name, int id, int value);
extern unsigned int fn_82AB6EC0(int a, int code);
extern void fn_82AB7550(void *obj, int code, int a, int value);
extern char *lbl_8316E480[];

int fn_82B9C788(int a, int b, void *obj, LogFn_82B9C788 log, void *ctx)
{
  if (fn_82AB6EC0(a, 0x3cb) == 1) {
    if (obj != 0) {
      fn_82AB7550(obj, 0x25, 0, 1);
    }
    if (log != 0 && ctx != 0) {
      log(ctx, "%s (%d) : %d\n", lbl_8316E480[0x3c], 0x3c, 1);
    }
    return 1;
  }
  if (obj != 0) {
    fn_82AB7550(obj, 0x25, 0, 0);
  }
  if (log != 0 && ctx != 0) {
    log(ctx, "%s (%d) : %d\n", lbl_8316E480[0x3c], 0x3c, 0);
  }
  return 0;
}
