void fn_82D8E878(int param_1,int param_2,int param_3)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  
  if (*(int *)(param_2 + 0x30) == 0) {
    return;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) - *(int *)(param_3 + 4);
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) - *(int *)(param_3 + 8);
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) - *(int *)(param_3 + 0xc);
  iVar1 = *(int *)(param_2 + 0x30);
  uVar2 = *(unsigned int *)(param_3 + 0xc);
  uVar3 = *(unsigned int *)(param_3 + 8);
  *(short *)(iVar1 + 0x14) = *(short *)(iVar1 + 0x14) - (short)*(unsigned int *)(param_3 + 4);
  *(short *)(iVar1 + 0x16) = *(short *)(iVar1 + 0x16) - (short)uVar3;
  *(short *)(iVar1 + 0x18) = *(short *)(iVar1 + 0x18) - (short)uVar2;
  return;
}

