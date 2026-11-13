void fn_82FFE000(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  int iVar4;
  int iVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  
  iVar1 = param_3[2];
  iVar2 = *param_3;
  uVar3 = param_3[1];
  iVar4 = param_3[3];
  iVar5 = *(int *)(iVar1 + 8);
  *param_1 = iVar2;
  param_1[1] = uVar3;
  param_1[3] = iVar4;
  param_1[2] = iVar5;
  uVar7 = uVar3;
  while (iVar5 == 0) {
    uVar7 = uVar7 + 1;
    param_1[1] = uVar7;
    if (0x1e < uVar7) break;
    param_1[3] = 0;
    iVar5 = *(int *)(uVar7 * 4 + iVar2);
    param_1[2] = iVar5;
  }
  uVar6 = *(unsigned int *)(iVar1 + 8);
  if (iVar4 != 0) {
    *(unsigned int *)(iVar4 + 8) = uVar6;
    *(int *)(param_2 + 0x7c) = *(int *)(param_2 + 0x7c) + -1;
    return;
  }
  *(unsigned int *)(uVar3 * 4 + param_2) = uVar6;
  *(int *)(param_2 + 0x7c) = *(int *)(param_2 + 0x7c) + -1;
  return;
}

