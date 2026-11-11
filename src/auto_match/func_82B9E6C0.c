typedef void (*Cb_82B9E6C0)(void *ctx, const char *fmt, ...);
extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);
extern void fn_82B9A4B0(float v, void *buf);
extern int lbl_8316E480[];

int fn_82B9E6C0(void *obj, int index, float *out, Cb_82B9E6C0 cb, void *ctx)
{
  char buf[32];
  float v;
  if (obj == 0) {
    fn_82AB15D0(obj, "Assertion failed: %s (%s:%u)", "pAS_Object", "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\statecompiler\\compilertossm.cpp", 0x10a1);
  }
  v = 0.0f;
  *out = v;
  if (cb != 0 && ctx != 0) {
    fn_82B9A4B0(v, buf);
    cb(ctx, "%s (%d) %d : %s\n", lbl_8316E480[64], 0x40, index, buf);
  }
  return 1;
}
