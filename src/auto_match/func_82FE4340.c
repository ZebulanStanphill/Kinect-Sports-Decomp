void fn_82FE4340(unsigned int *param_1,int param_2,int param_3,unsigned __int64 param_4)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  unsigned int *puVar9;
  unsigned int *puVar10;
  unsigned __int64 uVar11;
  
  uVar2 = param_1[2];
  uVar7 = (unsigned __int64)uVar2;
  uVar6 = (unsigned __int64)*param_1;
  puVar9 = (unsigned int *)param_1[1];
  uVar8 = uVar6 - uVar7;
  puVar10 = puVar9 + uVar2;
  if ((param_4 & 0xffffffff) < (uVar8 & 0xffffffff)) {
    param_2 = param_2 - (int)puVar10;
    puVar9 = (unsigned int *)(param_3 + -4);
    uVar8 = param_4;
    do {
      uVar1 = *puVar10;
      *puVar10 = *(unsigned int *)(param_2 + (int)puVar10);
      puVar10 = puVar10 + 1;
      puVar9 = puVar9 + 1;
      *puVar9 = uVar1;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
    param_1[2] = uVar2 + (int)param_4;
    return;
  }
  if ((param_4 & 0xffffffff) != 0) {
    puVar4 = (unsigned int *)(param_3 + -4);
    puVar5 = (unsigned int *)(param_2 + -4);
    do {
      if ((param_4 & 0xffffffff) < (uVar8 & 0xffffffff)) {
        uVar8 = param_4;
      }
      uVar11 = uVar8;
      uVar3 = uVar8 & 0xffffffff;
      while (uVar3 != 0) {
        uVar1 = *puVar10;
        puVar5 = puVar5 + 1;
        *puVar10 = *puVar5;
        puVar10 = puVar10 + 1;
        puVar4 = puVar4 + 1;
        *puVar4 = uVar1;
        uVar11 = uVar11 - 1;
        uVar3 = uVar11;
      }
      uVar7 = uVar7 + uVar8;
      if ((uVar7 & 0xffffffff) == uVar6) {
        uVar7 = 0;
        puVar10 = puVar9;
      }
      param_4 = param_4 - uVar8;
      uVar8 = uVar6 - uVar7;
    } while (param_4 != 0);
    param_1[2] = (unsigned int)uVar7;
  }
  return;
}

