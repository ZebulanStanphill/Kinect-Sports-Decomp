typedef struct { int w[7]; } RTL_CRITICAL_SECTION_8302BC00;
extern void RtlEnterCriticalSection(RTL_CRITICAL_SECTION_8302BC00 *);
extern void RtlLeaveCriticalSection(RTL_CRITICAL_SECTION_8302BC00 *);
extern void fn_82FFFA70(void *, int);
extern char *lbl_832642E0;

void fn_8302BC00(int param_1)
{
  unsigned v = *(int *)(param_1 + 0xc);
  if (v != 0) {
  RTL_CRITICAL_SECTION_8302BC00 *cs = (RTL_CRITICAL_SECTION_8302BC00 *)(lbl_832642E0 + 0x998);
  RtlEnterCriticalSection(cs);
  fn_82FFFA70(cs + 1, v);
  RtlLeaveCriticalSection(cs);
  }
}
