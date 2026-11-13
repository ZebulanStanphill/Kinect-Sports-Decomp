__int64 fn_82ED3678(int param_1,int param_2,__int64 param_3,int *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int *puVar8;
  __int64 lVar9;
  unsigned __int64 uVar10;
  unsigned __int64 uVar11;
  __int64 lVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  
  iVar15 = 0;
  uVar11 = 0;
  if ((-1 < (int)*(unsigned int *)(param_1 + 0x2c)) &&
     ((((uVar10 = (unsigned __int64)*(unsigned int *)(param_1 + 0x30), -1 < (int)*(unsigned int *)(param_1 + 0x30) ||
        (uVar10 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x2c) - (unsigned __int64)*(unsigned int *)(param_1 + 0x28)) + 1,
        -1 < (__int64)uVar10)) || (uVar10 = *(unsigned int *)(param_1 + 0x1c) + uVar10, -1 < (int)uVar10))
      && (lVar9 = uVar10 * 0x402c + (unsigned __int64)*(unsigned int *)(param_1 + 0x18), lVar9 != 0)))) {
    iVar1 = *(int *)(param_1 + 0x38);
    if ((*(int *)(iVar1 + 0x7b38) == 0) || (*(int *)(iVar1 + 0x6d54) == 0)) {
      lVar12 = 1;
    }
    else {
      param_2 = param_2 << 1;
      lVar12 = 2;
      uVar3 = *(unsigned int *)(param_1 + 0x10) >> 4;
      if ((int)uVar3 <= param_2) {
        param_2 = uVar3 - 1;
      }
    }
    iVar14 = 0;
    iVar13 = (int)lVar12;
    if (iVar13 != 0) {
      iVar2 = *(int *)((int)lVar9 + 4);
      iVar15 = 0;
      do {
        param_2 = iVar14 + param_2;
        uVar10 = ((__int64)*(int *)(iVar1 + 0x2d0) * (__int64)param_2 & 0x7fffffffU) * 2 + param_3
                 & 0x7fffffff;
        puVar8 = (unsigned int *)((int)(uVar10 << 3) + iVar2);
        uVar3 = *puVar8;
        if ((0x1d < uVar3) && (uVar3 < 0x3c)) {
          uVar11 = uVar11 + 1;
        }
        uVar4 = puVar8[1];
        if ((0x1d < uVar4) && (uVar4 < 0x3c)) {
          uVar11 = uVar11 + 1;
        }
        puVar8 = (unsigned int *)((int)((((unsigned __int64)*(unsigned int *)(param_1 + 0x14) & 0x7fffffff) * 2 +
                                 uVar10 * 2 & 0xffffffff) << 2) + iVar2);
        uVar5 = *puVar8;
        if ((0x1d < uVar5) && (uVar5 < 0x3c)) {
          uVar11 = uVar11 + 1;
        }
        uVar6 = puVar8[1];
        if ((0x1d < uVar6) && (uVar6 < 0x3c)) {
          uVar11 = uVar11 + 1;
        }
        if (param_4 != (int *)0x0) {
          uVar7 = *(unsigned int *)(param_1 + 0x48);
          iVar15 = (((-((uVar7 < uVar5) - 1) - ((uVar7 < uVar6) - 1)) - ((uVar7 < uVar4) - 1)) -
                   ((uVar7 < uVar3) - 1)) + iVar15;
        }
        iVar14 = iVar14 + 1;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
    }
    if (param_4 != (int *)0x0) {
      if (iVar13 == 1) {
        *param_4 = iVar15;
      }
      else {
        uVar11 = (unsigned __int64)((int)uVar11 >> 1);
        *param_4 = iVar15 >> 1;
      }
    }
    if (param_5 != (int *)0x0) {
      *param_5 = (int)uVar11;
    }
    return (__int64)((int)uVar11 >> 0x1f) + (unsigned __int64)(2 < uVar11);
  }
  return 0;
}

