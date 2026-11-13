void fn_82CEA358(int *param_1,unsigned int param_2)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  
  param_1[1] = param_1[1] + -1;
  *(unsigned int *)(param_2 * 8 + *param_1) = 0xffffffff;
  iVar1 = *param_1;
  uVar6 = param_1[2];
  uVar4 = uVar6 + param_2 & uVar6;
  iVar2 = *(int *)(uVar4 * 8 + iVar1);
  while (iVar2 != -1) {
    uVar4 = uVar6 + uVar4 & uVar6;
    iVar2 = *(int *)(uVar4 * 8 + iVar1);
  }
  uVar5 = param_2 + 1 & uVar6;
  uVar4 = uVar4 + 1 & uVar6;
  iVar2 = uVar5 * 8;
  iVar1 = *(int *)(iVar1 + iVar2);
  while (iVar1 != -1) {
    uVar3 = *(unsigned int *)(*param_1 + iVar2);
    uVar6 = (uVar3 >> 4) * -0x61c8864f & uVar6;
    if ((((uVar5 < uVar4) || (uVar6 <= param_2)) &&
        ((param_2 <= uVar5 || ((uVar6 <= param_2 && (uVar5 < uVar6)))))) &&
       ((uVar6 <= param_2 || (uVar4 <= uVar6)))) {
      *(unsigned int *)(param_2 * 8 + *param_1) = uVar3;
      *(unsigned int *)(param_2 * 8 + *param_1 + 4) = *(unsigned int *)(*param_1 + iVar2 + 4);
      *(unsigned int *)(iVar2 + *param_1) = 0xffffffff;
      param_2 = uVar5;
    }
    uVar6 = param_1[2];
    uVar5 = uVar5 + 1 & uVar6;
    iVar2 = uVar5 * 8;
    iVar1 = *(int *)(iVar2 + *param_1);
  }
  return;
}

