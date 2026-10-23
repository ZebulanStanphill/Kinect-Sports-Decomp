extern int fn_82C10EC0();
extern int fn_82C10F40();

void fn_82C06C18(int param_1, __int64 param_2)
{
  unsigned int *p;
  unsigned int a;
  int hr;

  a = 0;
  p = 0;
  hr = fn_82C10F40(*(int *)(param_1 + 0x238), param_2, &a);
  if (hr >= 0) {
    fn_82C10F40(*(int *)(param_1 + 0x23c), param_2, &p);
    if (p != 0 && *p != 0) {
      fn_82C10EC0(*(int *)(param_1 + 0x23c), param_2);
    }
    fn_82C10EC0(*(int *)(param_1 + 0x238), param_2);
  }
}
