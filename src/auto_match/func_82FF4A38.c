extern int fn_82A1E7D8();
extern int fn_82A1E810();
extern int fn_82FF5200();
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_82FF4A38(int param_1,unsigned __int64 param_2,unsigned int param_3,unsigned int param_4)

{
  int (**pcVar1)();
  int iVar2;
  int iVar3;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  unsigned int uStack_48;
  unsigned int uStack_44;
  unsigned int uStack_40;
  
  iVar3 = param_1 + 0x88;
  RtlEnterCriticalSection(iVar3);
  iVar2 = fn_82FF5200(param_1 + 4,param_2);
  if ((iVar2 == 0) || ((*(unsigned int *)(iVar2 + 0x28) & 2) == 0)) {
    RtlLeaveCriticalSection(iVar3);
  }
  else {
    uStack_50 = *(unsigned int *)(iVar2 + 0x24);
    uStack_4c = *(unsigned int *)(iVar2 + 0xc);
    uStack_48 = (unsigned int)param_2;
    pcVar1 = *(int (***)())(iVar2 + 0x20);
    uStack_44 = param_3;
    uStack_40 = param_4;
    fn_82A1E7D8(*(unsigned int *)(param_1 + 0xa4));
    RtlLeaveCriticalSection(iVar3);
    (*pcVar1)(2,&uStack_50);
    fn_82A1E810(*(unsigned int *)(param_1 + 0xa4));
  }
  return;
}

