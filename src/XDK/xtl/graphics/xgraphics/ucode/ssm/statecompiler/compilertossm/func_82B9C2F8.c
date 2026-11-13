extern void fn_82AB15D0(void *, const char *, const char *, const char *, int);
extern unsigned fn_82AB71F0(void *, int, int);
extern void fn_82AB7550(void *, int, int, int);
extern int lbl_8316E480[];

int fn_82B9C2F8(void *a, int b, void *c, void (*cb)(void *, const char *, int, int, int, int), void *d)
{
  if (a == 0) {
    fn_82AB15D0(a, "Assertion failed: %s (%s:%u)", "pAS_Object",
      "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\statecompiler\\compilertossm.cpp", 0x8d5);
  }
  if (fn_82AB71F0(a, 0x16, b) == 0) {
    if (c != 0) {
      fn_82AB7550(c, 0x1e, 0, 1);
    }
    if (cb != 0 && d != 0) {
      cb(d, "%s (%d) %d : %d\n", lbl_8316E480[0x31], 0x31, b, 1);
    }
    return 1;
  }
  if (c != 0) {
    fn_82AB7550(c, 0x1e, 0, 0);
  }
  if (cb != 0 && d != 0) {
    cb(d, "%s (%d) %d : %d\n", lbl_8316E480[0x31], 0x31, b, 0);
  }
  return 0;
}
