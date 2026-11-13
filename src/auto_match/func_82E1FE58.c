extern void fn_82A1F2F8(void);
extern int fn_82E1F980(int p);
extern int fn_82E1FCA8(int p);
extern unsigned int fn_82E1FD10(int p, int hr);


int fn_82E1FE58(int param_1)
{
  int hr;

  fn_82A1F2F8();
  if (*(unsigned int *)(param_1 + 0x10) == 0) {
    return 0;
  }
  hr = fn_82E1F980(param_1);
  if (hr >= 0) {
    if (fn_82E1FD10(param_1, hr) == 0) {
      return 0;
    }
  }
  return fn_82E1FCA8(param_1);
}
