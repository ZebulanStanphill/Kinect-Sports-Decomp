extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);
extern short *fn_82E47870(void *, int);

int fn_82E482B0(char *param_1, int param_2, double *param_3)
{
  short *p;
  int hr = 0;
  RtlEnterCriticalSection(param_1 + 4);
  p = fn_82E47870(param_1, param_2);
  if (p != 0) {
    if (*p == 5) {
      *param_3 = *(double *)(p + 4);
    } else {
      hr = 0xC00D36BD;
    }
  } else {
    hr = 0xC00D36E6;
  }
  RtlLeaveCriticalSection(param_1 + 4);
  return hr;
}
