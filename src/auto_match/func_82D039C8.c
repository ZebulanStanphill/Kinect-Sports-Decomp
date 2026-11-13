void fn_82D039C8(int param_1,int (**param_2)(),unsigned __int64 param_3)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  int iVar4;
  
  *(unsigned int *)(*(int *)(param_1 + 0x10) + 4) = *(unsigned int *)(param_1 + 0x14) | 1;
  for (iVar1 = *(int *)(param_1 + 0xa8); iVar1 != param_1 + 0xa4; iVar1 = *(int *)(iVar1 + 4)) {
    iVar2 = *(int *)(iVar1 + 0x14);
    for (iVar4 = *(int *)(iVar1 + 0x10); iVar4 != iVar2 + -0x10;
        iVar4 = (uVar3 & 0xfffffffc) + iVar4) {
      uVar3 = *(unsigned int *)(iVar4 + 4);
      if ((uVar3 >> 1 & 1) != 0) {
        (*param_2)(iVar4 + 0x10,((unsigned __int64)uVar3 & 0xfffffffc) - 0x10,param_3);
      }
    }
  }
  return;
}

