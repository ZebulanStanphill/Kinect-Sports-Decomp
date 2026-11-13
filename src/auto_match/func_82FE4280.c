void fn_82FE4280(unsigned int *param_1,int param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  int iVar4;
  unsigned int *puVar5;
  unsigned __int64 uVar6;
  unsigned int *puVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  unsigned int *puVar10;
  unsigned __int64 uVar11;
  
  iVar4 = (int)param_3;
  uVar2 = param_1[2];
  uVar8 = (unsigned __int64)uVar2;
  uVar6 = (unsigned __int64)*param_1;
  puVar7 = (unsigned int *)param_1[1];
  uVar9 = uVar6 - uVar8;
  puVar10 = puVar7 + uVar2;
  if ((param_3 & 0xffffffff) < (uVar9 & 0xffffffff)) {
    puVar7 = (unsigned int *)(param_2 + -4);
    puVar10 = puVar10 + -1;
    do {
      uVar1 = puVar10[1];
      puVar10 = puVar10 + 1;
      *puVar10 = puVar7[1];
      puVar7 = puVar7 + 1;
      *puVar7 = uVar1;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
    param_1[2] = uVar2 + iVar4;
    return;
  }
  if (iVar4 != 0) {
    puVar5 = (unsigned int *)(param_2 + -4);
    do {
      if ((param_3 & 0xffffffff) < (uVar9 & 0xffffffff)) {
        uVar9 = param_3;
      }
      uVar11 = uVar9;
      uVar3 = uVar9 & 0xffffffff;
      while (uVar3 != 0) {
        uVar1 = *puVar10;
        *puVar10 = puVar5[1];
        puVar10 = puVar10 + 1;
        puVar5 = puVar5 + 1;
        *puVar5 = uVar1;
        uVar11 = uVar11 - 1;
        uVar3 = uVar11;
      }
      uVar8 = uVar8 + uVar9;
      if ((uVar8 & 0xffffffff) == uVar6) {
        uVar8 = 0;
        puVar10 = puVar7;
      }
      param_3 = param_3 - uVar9;
      uVar9 = uVar6 - uVar8;
    } while (param_3 != 0);
    param_1[2] = (unsigned int)uVar8;
  }
  return;
}

