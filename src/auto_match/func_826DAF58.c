extern int fn_8267C4C8();
extern int fn_826DAE80();
extern unsigned int stack0x0000001c;
extern unsigned int uStack0000001c;


unsigned __int64 fn_826DAF58(int param_1,unsigned __int64 param_2)

{
  unsigned int *puVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned int uStack0000001c;
  
  iVar2 = param_1 + 0x14;
  uStack0000001c = (unsigned int)param_2;
  RtlEnterCriticalSection(iVar2);
  puVar1 = (unsigned int *)fn_826DAE80(param_1 + 0x10,&stack0x0000001c);
  if (puVar1 == (unsigned int *)0x0) {
    RtlLeaveCriticalSection(iVar2);
    iVar2 = *(int *)(param_1 + 0xc);
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(int (***)())(*(int *)(iVar2 + 8) + 0xc))(iVar2 + 8,param_2);
    }
  }
  else {
    fn_8267C4C8(*puVar1);
    uVar3 = (unsigned __int64)*puVar1;
    RtlLeaveCriticalSection(iVar2);
  }
  return uVar3;
}

