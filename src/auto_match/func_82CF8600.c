void fn_82CF8600(int *param_1,unsigned int param_2)

{
  int iVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  int iVar7;
  
  param_1[1] = param_1[1] + -1;
  *(unsigned int *)(param_2 * 0x10 + *param_1) = 0xffffffff;
  iVar3 = *param_1;
  uVar6 = param_1[2];
  uVar4 = uVar6 + param_2 & uVar6;
  iVar1 = *(int *)(uVar4 * 0x10 + iVar3);
  while (iVar1 != -1) {
    uVar4 = uVar6 + uVar4 & uVar6;
    iVar1 = *(int *)(uVar4 * 0x10 + iVar3);
  }
  uVar5 = param_2 + 1 & uVar6;
  uVar4 = uVar4 + 1 & uVar6;
  iVar1 = uVar5 * 0x10;
  iVar3 = *(int *)(iVar3 + iVar1);
  while (iVar3 != -1) {
    uVar2 = *(unsigned int *)(*param_1 + iVar1);
    uVar6 = (uVar2 >> 4) * -0x61c8864f & uVar6;
    if ((((uVar5 < uVar4) || (uVar6 <= param_2)) &&
        ((param_2 <= uVar5 || ((uVar6 <= param_2 && (uVar5 < uVar6)))))) &&
       ((uVar6 <= param_2 || (uVar4 <= uVar6)))) {
      *(unsigned int *)(param_2 * 0x10 + *param_1) = uVar2;
      iVar3 = *param_1 + iVar1;
      iVar7 = param_2 * 0x10 + *param_1;
      *(unsigned int *)(iVar7 + 4) = *(unsigned int *)(iVar3 + 4);
      *(unsigned int *)(iVar7 + 8) = *(unsigned int *)(iVar3 + 8);
      *(unsigned int *)(iVar7 + 0xc) = *(unsigned int *)(iVar3 + 0xc);
      *(unsigned int *)(iVar1 + *param_1) = 0xffffffff;
      param_2 = uVar5;
    }
    uVar6 = param_1[2];
    uVar5 = uVar5 + 1 & uVar6;
    iVar1 = uVar5 * 0x10;
    iVar3 = *(int *)(iVar1 + *param_1);
  }
  return;
}

