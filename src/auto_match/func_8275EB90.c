void fn_8275EB90(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)(*(int *)(param_1 + 8) - (unsigned int)*(unsigned short *)(param_1 + 0x14));
  if ((*(int *)(param_1 + 4) - (int)piVar3) + -8 < piVar3[1]) {
    return;
  }
  iVar1 = *piVar3;
  iVar2 = iVar1 + 8;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  *(int *)(param_1 + 4) = iVar2;
  if (iVar1 == 0) {
    return;
  }
  *(int *)(param_1 + 8) = iVar2;
  *(short *)(param_1 + 0x14) = (short)iVar2 - (short)iVar1;
  return;
}

