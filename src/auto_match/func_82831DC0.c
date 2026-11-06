extern void fn_828319F8(int, void *);
extern int fn_82831A80(int, void *);
extern int fn_82831BE8(int, void *);
extern int fn_82831C48(int, void *);
extern int fn_82831CE8(int, void *);
extern void *fn_82F674A0(char *, const char *);
extern void fn_82F67988(void *);

int fn_82831DC0(int param_1)
{
  int r;
  void *f;

  if (*(char *)(param_1 + 0x1b8) == 0) {
    return 0;
  }
  f = fn_82F674A0((char *)(param_1 + 0x1b8), "wb");
  if (f == 0) {
    return 1;
  }
  r = fn_82831A80(param_1, f);
  if (r == 0) {
    r = fn_82831BE8(param_1, f);
    if (r == 0) {
      r = fn_82831C48(param_1, f);
      if (r == 0) {
        r = fn_82831CE8(param_1, f);
        if (r == 0) {
          fn_828319F8(param_1, f);
        }
      }
    }
  }
  fn_82F67988(f);
  return r;
}
