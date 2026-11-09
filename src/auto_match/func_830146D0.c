typedef struct { int w[7]; } RTL_CRITICAL_SECTION_830146D0;
extern void RtlEnterCriticalSection(RTL_CRITICAL_SECTION_830146D0 *);
extern void RtlLeaveCriticalSection(RTL_CRITICAL_SECTION_830146D0 *);
extern void fn_82FFFA70(void *, int);
extern char *lbl_832642E0;

void fn_830146D0(int param_1)
{
  int v = *(int *)(param_1 + 0xc);
  RTL_CRITICAL_SECTION_830146D0 *cs = (RTL_CRITICAL_SECTION_830146D0 *)(lbl_832642E0 + 0x1304);
  RtlEnterCriticalSection(cs);
  fn_82FFFA70(cs + 1, v);
  RtlLeaveCriticalSection(cs);
}
