extern int fn_82A2A618();
extern int fn_82E50E18();
extern unsigned int iStack_20;
extern unsigned int uStack_1c;


unsigned __int64 fn_82E50FA0(int param_1)

{
  int lVar1;
  unsigned int iVar2;
  unsigned int iStack_20;
  unsigned int uStack_1c;
  
  iStack_20 = 0;
  uStack_1c = 0;
  RtlEnterCriticalSection();
  lVar1 = *(int *)(param_1 + 0x28) - 1;
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

