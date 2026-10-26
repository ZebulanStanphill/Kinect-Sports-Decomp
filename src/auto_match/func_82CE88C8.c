extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);
extern void fn_82CE82A8(void *, int);
void fn_82CE88C8(int param_1, int param_2)
{
  int sub;
  RtlEnterCriticalSection((void *)param_1);
  sub = *(int *)(param_1 + 0x1c);
  *(int *)(sub + 0x1c) = param_2;
  if (param_2 == 0) {
    fn_82CE82A8((void *)param_1, sub);
  }
  RtlLeaveCriticalSection((void *)param_1);
}
