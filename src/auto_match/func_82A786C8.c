extern unsigned fn_82A78158(int);
extern void fn_82A4F4E0(int);

int fn_82A786C8(int param_1, int param_2)
{
  int hr;
  if (fn_82A78158(param_1 + 0x84) != 0) {
    hr = 0;
  } else {
    hr = 0x8007000e;
    if (*(int *)(param_2 + 0x24) != 0) {
      *(int *)(param_2 + 0x24) = 0;
    } else {
      fn_82A4F4E0(param_2);
    }
  }
  return hr;
}
