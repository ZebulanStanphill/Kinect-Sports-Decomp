unsigned __int64 fn_82ED22F8(int param_1,unsigned int *param_2)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  unsigned __int64 uVar6;
  int *piVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  int iVar10;
  __int64 lVar11;
  __int64 lVar12;
  __int64 lVar13;
  
  lVar13 = 0x5fb;
  lVar12 = 0;
  lVar11 = 0;
  uVar8 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x3c) +
           ((unsigned __int64)*(unsigned int *)(param_1 + 0x3c) & 0x1fffffff) * 8 & 0xffffffff) +
          ((unsigned __int64)*(unsigned int *)(param_1 + 0x38) & 0x1fffffff) * 8 +
          (((unsigned __int64)*(unsigned int *)(param_1 + 0x34) & 0x1fffffff) * 8 -
           (unsigned __int64)*(unsigned int *)(param_1 + 0x34) & 0xffffffff) +
          ((unsigned __int64)*(unsigned int *)(param_1 + 0x30) +
           ((unsigned __int64)*(unsigned int *)(param_1 + 0x30) & 0x7fffffff) * 2 & 0x7fffffff) * 2 +
          ((unsigned __int64)*(unsigned int *)(param_1 + 0x2c) +
           ((unsigned __int64)*(unsigned int *)(param_1 + 0x2c) & 0x3fffffff) * 4 & 0xffffffff) +
          ((unsigned __int64)*(unsigned int *)(param_1 + 0x28) & 0x3fffffff) * 4 +
          ((unsigned __int64)*(unsigned int *)(param_1 + 0x24) +
           ((unsigned __int64)*(unsigned int *)(param_1 + 0x24) & 0x7fffffff) * 2 & 0xffffffff) +
          ((unsigned __int64)*(unsigned int *)(param_1 + 0x20) & 0x7fffffff) * 2 +
          (unsigned __int64)*(unsigned int *)(param_1 + 0x1c);
  iVar10 = 10;
  iVar3 = 0xb;
  piVar7 = (int *)(param_1 + 0x40);
  uVar6 = uVar8;
  uVar9 = uVar8;
  iVar5 = 10;
  do {
    iVar4 = iVar5;
    uVar1 = (__int64)*piVar7 * (__int64)iVar4 & 0xffffffff;
    lVar12 = uVar1 + lVar12;
    uVar9 = (uVar1 - ((__int64)(iVar3 + -0xb) * (__int64)piVar7[-10] & 0xffffffffU)) + uVar9;
    if (uVar6 < uVar9) {
      uVar6 = uVar9;
      iVar10 = iVar4;
    }
    uVar1 = (__int64)piVar7[1] * (__int64)iVar3 & 0xffffffff;
    lVar11 = uVar1 + lVar11;
    uVar9 = (uVar1 - ((__int64)piVar7[-9] * (__int64)(iVar3 + -10) & 0xffffffffU)) + uVar9;
    if (uVar6 < uVar9) {
      uVar6 = uVar9;
      iVar10 = iVar3;
    }
    iVar5 = iVar4 + 2;
    piVar7 = piVar7 + 2;
    iVar3 = iVar3 + 2;
    lVar13 = lVar13 + -1;
  } while (lVar13 != 0);
  if (iVar5 < 0xc00) {
    uVar1 = (__int64)*(int *)((iVar4 + 8) * 4 + param_1) * (__int64)iVar5 & 0xffffffff;
    uVar8 = uVar1 + uVar8;
    uVar9 = (uVar1 - ((__int64)*(int *)((iVar4 + -2) * 4 + param_1) * (__int64)(iVar4 + -8) &
                     0xffffffffU)) + uVar9;
    if (uVar6 < uVar9) {
      uVar6 = uVar9;
      iVar10 = iVar5;
    }
  }
  if ((iVar10 - 10U < 0x1f) || (uVar6 * 10 <= lVar11 + lVar12 + uVar8)) {
    uVar2 = 0;
  }
  else {
    *param_2 = iVar10 - 10U;
    uVar2 = 1;
  }
  return uVar2;
}

