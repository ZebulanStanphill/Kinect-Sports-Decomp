typedef unsigned int uint;
extern int fn_82BD7170(int a, int b);
extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);

int fn_82BD4970(int param_1, int param_2)
{
  int **p;
  uint n;
  int i;
  int hr;

  n = 0;
  RtlEnterCriticalSection((void *)(param_1 + 0xf0));
  p = (int **)(param_1 + 0x50);
  for (i = 0; i < 4; i++) {
    if (p[i][1] == 0) {
      n++;
    }
  }
  if (n > *(uint *)(param_1 + 0xc)) {
    hr = 0x80004005;
  }
  else {
    hr = fn_82BD7170(*(int *)((param_2 + 0x14) * 4 + param_1), param_2);
    if (hr >= 0) {
      *(int *)(param_1 + 0x11c) = 1;
    }
  }
  RtlLeaveCriticalSection((void *)(param_1 + 0xf0));
  return hr;
}
