extern int fn_82CEFB20();
extern int fn_82DBB0C8();


void fn_82D8C9E8(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

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
    fn_82DBB0C8(*(unsigned int *)(param_1 + 0xc),param_2,iVar1,param_3);
    *(unsigned __int64 *)(iVar1 + 0x28) = uVar2;
  }
  else {
    fn_82DBB0C8(*(unsigned int *)(param_1 + 0xc),param_2,iVar1,param_3);
  }
  return;
}

