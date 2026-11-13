typedef void (*Cb_82B9C1D0)(void *ctx, const char *fmt, int a, int b, int c, int d);
extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);
extern unsigned int fn_82AB71F0(void *obj, int op, int arg);
extern void fn_82AB7550(void *p, int a, int b, int c);
extern int lbl_8316E480[];

int fn_82B9C1D0(void *obj, int arg, void *out, Cb_82B9C1D0 cb, void *ctx)
{
  if (obj == 0) {
    fn_82AB15D0(obj, "Assertion failed: %s (%s:%u)", "pAS_Object", "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\statecompiler\\compilertossm.cpp", 0x8a0);
  }
  if (fn_82AB71F0(obj, 0x16, arg) == 2) {
    if (out != 0) {
      fn_82AB7550(out, 0x1e, 0, 1);
    }
    if (cb != 0 && ctx != 0) {
      cb(ctx, "%s (%d) %d : %d\n", lbl_8316E480[49], 0x31, arg, 1);
    }
    return 1;
  } else {
    if (out != 0) {
      fn_82AB7550(out, 0x1e, 0, 0);
    }
    if (cb != 0 && ctx != 0) {
      cb(ctx, "%s (%d) %d : %d\n", lbl_8316E480[49], 0x31, arg, 0);
    }
    return 0;
  }
}
