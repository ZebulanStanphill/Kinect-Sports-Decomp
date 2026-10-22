extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);
extern void *fn_82BD4D50(void *, int);
extern int fn_82BD97C0(void *, int, int, int, int);

int fn_82BD5A88(char *param_1, int param_2, int param_3, int param_4, int param_5, int param_6)
{
  void *obj;
  int hr;

  RtlEnterCriticalSection(param_1 + 0xf0);
  obj = fn_82BD4D50(param_1, param_2);
  if (obj == 0) {
    hr = 0x80070057;
  } else {
    hr = fn_82BD97C0(obj, param_3, param_4, param_5, param_6);
  }
  RtlLeaveCriticalSection(param_1 + 0xf0);
  return hr;
}
