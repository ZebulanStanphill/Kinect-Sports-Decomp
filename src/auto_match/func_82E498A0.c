extern int fn_82A29D80(int, unsigned *);
extern unsigned fn_82A1F470(void);

int fn_82E498A0(int param_1, unsigned __int64 *param_2)
{
  int hr;
  int r;
  unsigned hi;

  hr = 0;
  hi = 0;
  if (param_2 == 0) {
    hr = 0x80070057;
  } else if (*(int *)(param_1 + 0x9c) == -1) {
    hr = 0xc00d36b2;
  } else {
    r = fn_82A29D80(*(int *)(param_1 + 0x9c), &hi);
    if (r == -1 && fn_82A1F470() != 0) {
      int e = fn_82A1F470();
      if (e <= 0) {
        hr = e;
      } else {
        hr = (e & 0xffff) | 0x80070000;
      }
    } else {
      *param_2 = ((unsigned __int64)hi << 32) + (unsigned)r;
    }
  }
  return hr;
}
