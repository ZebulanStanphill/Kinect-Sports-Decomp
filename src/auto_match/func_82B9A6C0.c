extern void fn_82AB15D0(int, const char *, const char *, const char *, int);
extern unsigned int fn_82AB6EC0(void *, unsigned int);
extern void fn_82AB7550(void *, int, int, int);
extern int lbl_8316E480[];

unsigned int fn_82B9A6C0(void *obj, int unused, void *out, void (*cb)(void *, const char *, int, int, int), void *user)
{
  unsigned first;
  unsigned second;
  if (obj == 0) {
    fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", "pAS_Object",
                "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\statecompiler\\compilertossm.cpp", 0x331);
  }
  first = fn_82AB6EC0(obj, 0xa3);
  second = fn_82AB6EC0(obj, 0xa5);
  if (first != 0 && second == 0) {
    if (out != 0) fn_82AB7550(out, 5, 0, 1);
    if (cb != 0 && user != 0) cb(user, "%s (%d) : %d\n", lbl_8316E480[7], 7, 1);
    return 1;
  }
  if (out != 0) fn_82AB7550(out, 5, 0, 0);
  if (cb != 0 && user != 0) cb(user, "%s (%d) : %d\n", lbl_8316E480[7], 7, 0);
  return 0;
}
