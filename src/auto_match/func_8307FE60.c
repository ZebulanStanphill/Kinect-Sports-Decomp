void fn_8307FE60(int *param_1,int param_2)

{
  int iVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  
  iVar3 = param_1[3] + -1 >> 5;
  iVar1 = iVar3 * 4;
  uVar5 = param_1[3] + iVar3 * -0x20;
  if (0x1f < (int)uVar5) {
    return;
  }
  uVar2 = -1 << (uVar5 & 0x3f);
  uVar5 = *(unsigned int *)(iVar1 + *param_1);
  uVar4 = uVar5 & ~uVar2;
  if (param_2 != 0) {
    uVar4 = uVar5 | uVar2;
  }
  *(unsigned int *)(iVar1 + *param_1) = uVar4;
  return;
}

