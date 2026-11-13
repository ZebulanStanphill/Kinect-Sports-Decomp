void fn_8275E580(unsigned char *param_1,unsigned int *param_2,unsigned int *param_3)

{
  int iVar1;
  unsigned int uVar2;
  int iVar3;
  int iVar4;
  __int64 lVar5;
  unsigned int uVar6;
  int iVar7;
  int iVar8;
  
  uVar6 = 0;
  iVar4 = (*param_1 >> 5 & 3) + 1;
  iVar3 = 0;
  uVar2 = 0;
  for (lVar5 = ((unsigned __int64)(*param_1 >> 3) & 3) + 1; lVar5 != 0; lVar5 = lVar5 + -1) {
    iVar7 = iVar3 + 1;
    iVar3 = iVar3 + 1;
    uVar6 = (unsigned int)param_1[iVar7] << (uVar2 & 0x3f) | uVar6;
    uVar2 = uVar2 + 8;
  }
  iVar3 = uVar6 + iVar4 * -2;
  if (param_2 != (unsigned int *)0x0) {
    uVar2 = 0;
    iVar7 = 0;
    uVar6 = 0;
    for (iVar8 = iVar4; iVar8 != 0; iVar8 = iVar8 + -1) {
      iVar1 = iVar7 + iVar3;
      iVar7 = iVar7 + 1;
      uVar2 = (unsigned int)param_1[iVar1] << (uVar6 & 0x3f) | uVar2;
      uVar6 = uVar6 + 8;
    }
    *param_2 = uVar2;
  }
  iVar3 = iVar4 + iVar3;
  if (param_3 == (unsigned int *)0x0) {
    return;
  }
  uVar2 = 0;
  iVar7 = 0;
  uVar6 = 0;
  for (; iVar4 != 0; iVar4 = iVar4 + -1) {
    iVar8 = iVar7 + iVar3;
    iVar7 = iVar7 + 1;
    uVar2 = (unsigned int)param_1[iVar8] << (uVar6 & 0x3f) | uVar2;
    uVar6 = uVar6 + 8;
  }
  *param_3 = uVar2;
  return;
}

