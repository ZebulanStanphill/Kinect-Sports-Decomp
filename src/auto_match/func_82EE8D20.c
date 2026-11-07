typedef int (*Callback_82EE8D20)(void *, void *);

extern __int64 fn_82EE80A8(void *p);
extern int fn_82EE88B0(void *p);

int fn_82EE8D20(char *param_1, int param_2, Callback_82EE8D20 param_3)
{
  int hr;

  if (param_3 == 0) {
    hr = (int)0x80070057;
  }
  else {
    *(__int64 *)(param_1 + 0x38) = 0;
    *(__int64 *)(param_1 + 0x40) = fn_82EE80A8(param_1 + 0x18);
    hr = param_3(param_1 + 0x18, param_1 + 0xa0);
    if (hr >= 0 && param_2 != 0) {
      hr = fn_82EE88B0(param_1);
    }
  }
  return hr;
}
