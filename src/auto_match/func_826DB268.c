extern unsigned int *auStack_30;
extern int fn_8267C4C8();
extern int fn_826DABA8();
extern int fn_826DABA8();
extern int fn_826DAEE0();
extern unsigned int stack0x0000001c;
extern unsigned int uStack0000001c;


void fn_826DB268(__int64 param_1,unsigned int param_2,unsigned __int64 param_3)

{
  unsigned int uStack0000001c;
  unsigned int auStack_30;

  uStack0000001c = param_2;
  RtlEnterCriticalSection(param_1 + 0x14);
  if ((param_3 & 0xffffffff) == 0) {
    fn_826DABA8(param_1 + 0x10,&stack0x0000001c);
  }
  else {
    fn_8267C4C8(param_3);
    auStack_30 = (unsigned int)param_3;
    fn_826DAEE0(param_1 + 0x10,param_1 + 0x10,&auStack_30);
    fn_826DABA8(param_3);
  }
  RtlLeaveCriticalSection(param_1 + 0x14);
  return;
}
