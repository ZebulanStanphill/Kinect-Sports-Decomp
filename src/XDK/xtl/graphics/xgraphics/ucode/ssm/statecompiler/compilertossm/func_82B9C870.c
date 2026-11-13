extern void fn_82AB15D0(int, const char *, const char *, const char *, int);
extern unsigned int fn_82AB6EC0(void *, unsigned int);
extern void fn_82AB7550(void *, int, int, int);
extern int lbl_8316E480[];

unsigned int fn_82B9C870(void *obj, int unused, void *out, void (*cb)(void *, const char *, int, int, int), void *user)
{
  if (obj == 0) {
    fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", "pAS_Object",
                "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\statecompiler\\compilertossm.cpp", 0x9df);
  }
  if (fn_82AB6EC0(obj, 0x39e) == 1) {
    if (out != 0) fn_82AB7550(out, 22, 0, 1);
    if (cb != 0 && user != 0) cb(user, "%s (%d) : %d\n", lbl_8316E480[36], 36, 1);
    return 1;
  }
  if (out != 0) fn_82AB7550(out, 22, 0, 0);
  if (cb != 0 && user != 0) cb(user, "%s (%d) : %d\n", lbl_8316E480[36], 36, 0);
  return 0;
}
