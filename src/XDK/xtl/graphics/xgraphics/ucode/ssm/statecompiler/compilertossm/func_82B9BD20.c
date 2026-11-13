extern void fn_82AB15D0(void *, const char *, const char *, const char *, int);
extern unsigned fn_82AB71F0(void *, int, int);
extern void fn_82AB7550(void *, int, int, int);
extern int lbl_8316E480[];

int fn_82B9BD20(void *a, int b, void *c, void (*cb)(void *, const char *, int, int, int, int), void *d)
{
  unsigned first;
  if (a == 0) {
    fn_82AB15D0(a, "Assertion failed: %s (%s:%u)", "pAS_Object",
      "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\statecompiler\\compilertossm.cpp", 0x7c7);
  }
  first = fn_82AB71F0(a, 0x14, b);
  if (fn_82AB71F0(a, 0x15, b) == 0 && first == 1) {
    if (c != 0) {
      fn_82AB7550(c, 0x1a, b, 1);
    }
    if (cb != 0 && d != 0) {
      cb(d, "%s (%d) %d : %d\n", lbl_8316E480[0x2d], 0x2d, b, 1);
    }
    return 1;
  } else {
    if (c != 0) {
      fn_82AB7550(c, 0x1a, b, 0);
    }
    if (cb != 0 && d != 0) {
      cb(d, "%s (%d) %d : %d\n", lbl_8316E480[0x2d], 0x2d, b, 0);
    }
    return 0;
  }
}
