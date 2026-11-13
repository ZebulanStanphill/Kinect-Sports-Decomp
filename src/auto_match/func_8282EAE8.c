void fn_8282EAE8(int param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  
  uVar3 = param_2 - 1;
  iVar2 = ((int)uVar3 >> 1) + (unsigned int)((int)uVar3 < 0 && (uVar3 & 1) != 0);
  while ((param_3 < param_2 &&
         (iVar1 = *(int *)(iVar2 * 4 + param_1),
         (unsigned int)(*(int *)(iVar1 + 0xc) + *(int *)(iVar1 + 4)) <= *(unsigned int *)(*param_4 + 0xc)))) {
    uVar3 = iVar2 - 1;
    *(int *)(param_2 * 4 + param_1) = iVar1;
    param_2 = iVar2;
    iVar2 = ((int)uVar3 >> 1) + (unsigned int)((int)uVar3 < 0 && (uVar3 & 1) != 0);
  }
  *(int *)(param_2 * 4 + param_1) = *param_4;
  return;
}

