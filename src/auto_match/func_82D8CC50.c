extern int fn_82CEFB20();
extern int fn_82DBB6B0();


void fn_82D8CC50(int param_1,unsigned __int64 param_2)

{
  int iVar1;
  unsigned __int64 uVar2;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0xcc);
  if (*(short *)(iVar1 + 0x20) == -1) {
    iVar1 = *(int *)(*(int *)(param_1 + 8) + 0xcc);
  }
  if (*(int *)(param_1 + 0x10) == 2) {
    uVar2 = *(unsigned __int64 *)(iVar1 + 0x28);
    fn_82CEFB20(iVar1 + 0x28);
    fn_82DBB6B0(*(unsigned int *)(param_1 + 0xc),iVar1,param_2);
    *(unsigned __int64 *)(iVar1 + 0x28) = uVar2;
  }
  else {
    fn_82DBB6B0(*(unsigned int *)(param_1 + 0xc),iVar1,param_2);
  }
  return;
}

