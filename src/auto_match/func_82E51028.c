extern int fn_82A2A618();
extern int fn_82E50E18();
extern unsigned int iStack_20;
extern unsigned int uStack_1c;


unsigned __int64 fn_82E51028(int param_1,int param_2)

{
  __int64 lVar1;
  int iVar2;
  int iStack_20;
  unsigned int uStack_1c;
  
  if (param_2 != 0) {
    iStack_20 = 0;
    uStack_1c = 0;
    RtlEnterCriticalSection();
    lVar1 = (unsigned __int64)*(unsigned int *)(param_1 + 0x30) - 1;
    *(int *)(param_1 + 0x30) = (int)lVar1;
    iVar2 = 0;
    if (lVar1 == 0) {
      *(unsigned int *)(param_1 + 0x38) = 0;
      fn_82E50E18(param_1,&iStack_20,&uStack_1c);
      iVar2 = iStack_20;
    }
    RtlLeaveCriticalSection(param_1);
    if (iVar2 != 0) {
      fn_82A2A618(iVar2,uStack_1c,0);
    }
    return 0;
  }
  iStack_20 = 0;
  uStack_1c = 0;
  RtlEnterCriticalSection();
  lVar1 = (unsigned __int64)*(unsigned int *)(param_1 + 0x28) - 1;
  *(int *)(param_1 + 0x28) = (int)lVar1;
  iVar2 = 0;
  if (lVar1 == 0) {
    fn_82E50E18(param_1,&iStack_20,&uStack_1c);
    iVar2 = iStack_20;
  }
  RtlLeaveCriticalSection(param_1);
  if (iVar2 != 0) {
    fn_82A2A618(iVar2,uStack_1c,0);
  }
  return 0;
}

