extern void fn_82AB15D0(void *, const char *, const char *, const char *, int);
extern unsigned fn_82AB71F0(void *, int, int);
extern void fn_82AB7550(void *, int, int, int);
extern int lbl_8316E480[];

int fn_82B9B8F8(void *a, int b, void *c, void (*cb)(void *, const char *, int, int, int, int), void *d)
{
  if (a == 0) {
    fn_82AB15D0(a, "Assertion failed: %s (%s:%u)", "pAS_Object",
      "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\statecompiler\\compilertossm.cpp", 0x6f1);
  }
  if (fn_82AB71F0(a, 0xe, b) == 3) {
    if (c != 0) {
      fn_82AB7550(c, 0x15, b, 1);
    }
    if (cb != 0 && d != 0) {
      cb(d, "%s (%d) %d : %d\n", lbl_8316E480[0x23], 0x23, b, 1);
    }
    return 1;
  } else {
    if (c != 0) {
      fn_82AB7550(c, 0x15, b, 0);
    }
    if (cb != 0 && d != 0) {
      cb(d, "%s (%d) %d : %d\n", lbl_8316E480[0x23], 0x23, b, 0);
    }
    return 0;
  }
}
