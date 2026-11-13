extern unsigned int *auStack_38;
extern unsigned int *auStack_40;
extern int fn_827D96A0();
extern unsigned __int64 fn_827D9718();
extern int fn_827D9720();
extern void *fn_827DDDD8();
extern int fn_827DDFB8();


void fn_8260CAD8(__int64 param_1,unsigned __int64 param_2)

{
  void *lVar1;
  unsigned int auStack_40 [2];
  unsigned __int64 auStack_38;
  
  RtlEnterCriticalSection(param_1 + 0x1a0);
  auStack_40[0] = fn_827D96A0(param_2);
  lVar1 = fn_827DDDD8(param_1 + 200,auStack_40);
  if (lVar1 == 0) {
    fn_827DDFB8(param_1 + 200,param_2);
  }
  else {
    auStack_38 = fn_827D9718(param_2);
    fn_827D9720(lVar1,&auStack_38);
  }
  RtlLeaveCriticalSection(param_1 + 0x1a0);
  return;
}

