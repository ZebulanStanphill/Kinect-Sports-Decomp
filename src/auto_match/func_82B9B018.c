extern void fn_82AB15D0(int, const char *, const char *, const char *, int);
extern unsigned int fn_82AB6EC0(void *, unsigned int);
extern void fn_82AB7550(void *, int, int, int);
extern int lbl_8316E480[];

unsigned int fn_82B9B018(void *obj, int unused, void *out, void (*cb)(void *, const char *, int, int, int), void *user)
{
  if (obj == 0) {
    fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", "pAS_Object",
                "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\statecompiler\\compilertossm.cpp", 0x557);
  }
  if (fn_82AB6EC0(obj, 0xaa) == 1) {
    if (out != 0) fn_82AB7550(out, 14, 0, 1);
    if (cb != 0 && user != 0) cb(user, "%s (%d) : %d\n", lbl_8316E480[20], 20, 1);
    return 1;
  }
  if (out != 0) fn_82AB7550(out, 14, 0, 0);
  if (cb != 0 && user != 0) cb(user, "%s (%d) : %d\n", lbl_8316E480[20], 20, 0);
  return 0;
}
