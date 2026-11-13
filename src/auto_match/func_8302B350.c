typedef struct { int w[7]; } RTL_CRITICAL_SECTION_8302B350;
extern void RtlEnterCriticalSection(RTL_CRITICAL_SECTION_8302B350 *);
extern void RtlLeaveCriticalSection(RTL_CRITICAL_SECTION_8302B350 *);
extern void fn_82FFFA70(void *, int);
extern void fn_830160B0(void *, int, int);
extern char *lbl_832642E0;

void fn_8302B350(int param_1)
{
  if ((*(unsigned int *)(param_1 + 0x28) & 0x40000000) != 0) {
    int v = *(int *)(param_1 + 0xc);
    RTL_CRITICAL_SECTION_8302B350 *cs = (RTL_CRITICAL_SECTION_8302B350 *)(lbl_832642E0 + 0x350);
    RtlEnterCriticalSection(cs);
    fn_82FFFA70(cs + 1, v);
    RtlLeaveCriticalSection(cs);
  } else {
    fn_830160B0(lbl_832642E0 + 0x328, *(int *)(param_1 + 0x2c), *(int *)(param_1 + 0xc));
  }
}
