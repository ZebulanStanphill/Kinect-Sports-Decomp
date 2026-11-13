typedef void (*Cb_82B9E620)(void *ctx, const char *fmt, int a, int b, void *c);
extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);
extern float fn_82B6E130(void *obj, int idx);
extern void fn_82B9A4B0(double v, void *buf);
extern int lbl_8316E480[];

int fn_82B9E620(void *obj, int unused, float *out, Cb_82B9E620 cb, void *ctx)
{
  char buf[32];
  float v;
  if (obj == 0) {
    fn_82AB15D0(obj, "Assertion failed: %s (%s:%u)", "pAS_Object", "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\statecompiler\\compilertossm.cpp", 0x1081);
  }
  v = fn_82B6E130(obj, 0xa8);
  *out = v;
  if (cb != 0 && ctx != 0) {
    fn_82B9A4B0(v, buf);
    cb(ctx, "%s (%d) : %s\n", lbl_8316E480[25], 0x19, buf);
  }
  return 1;
}
