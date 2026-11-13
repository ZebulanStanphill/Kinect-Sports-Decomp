__int64 fn_82ED3850(int param_1,int param_2,__int64 param_3,int param_4)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  unsigned __int64 uVar7;
  int iVar8;
  unsigned int *puVar9;
  unsigned int *puVar10;
  unsigned __int64 uVar11;
  unsigned __int64 uVar12;
  unsigned int uVar13;
  unsigned int uVar14;
  unsigned __int64 uVar15;
  __int64 lVar16;
  int iVar17;
  unsigned __int64 uVar18;
  int iVar19;
  unsigned __int64 uVar20;
  int iVar21;
  __int64 lVar22;
  
  uVar11 = (unsigned __int64)*(unsigned int *)(param_1 + 0x24);
  uVar20 = 0;
  uVar18 = 0;
  if (uVar11 == 0) {
    uVar11 = (unsigned __int64)*(unsigned int *)(param_1 + 0x28);
    iVar17 = param_1 + 0x18;
    if ((int)*(unsigned int *)(param_1 + 0x2c) < 0) {
      uVar15 = 0xffffffffffffffff;
    }
    else {
      uVar15 = (unsigned __int64)*(unsigned int *)(param_1 + 0x30);
      if (((int)*(unsigned int *)(param_1 + 0x30) < 0) &&
         (uVar15 = (*(unsigned int *)(param_1 + 0x2c) - uVar11) + 1, (__int64)uVar15 < 0)) {
        uVar15 = *(unsigned int *)(param_1 + 0x1c) + uVar15;
      }
    }
  }
  else {
    iVar17 = *(int *)(param_1 + 0x20);
    uVar15 = 0;
  }
  iVar4 = (int)uVar11;
  iVar8 = *(int *)(param_1 + 0x38);
  if ((*(int *)(iVar8 + 0x7b38) == 0) || (*(int *)(iVar8 + 0x6d54) == 0)) {
    lVar16 = 1;
  }
  else {
    param_2 = param_2 << 1;
    lVar16 = 2;
    uVar1 = *(unsigned int *)(param_1 + 0x10) >> 4;
    if ((int)uVar1 <= param_2) {
      param_2 = uVar1 - 1;
    }
  }
  uVar7 = 0;
  iVar5 = *(int *)(iVar8 + 0x2d0) * param_2 + (int)param_3;
  if (uVar11 != 0) {
    do {
      uVar12 = uVar7 + uVar15;
      if ((unsigned __int64)*(unsigned int *)(param_1 + 0x1c) <= (uVar12 & 0xffffffff)) {
        uVar12 = (uVar15 - *(unsigned int *)(param_1 + 0x1c)) + uVar7;
      }
      iVar19 = 0;
      if (lVar16 != 0) {
        uVar1 = *(unsigned int *)(param_1 + 0x48);
        iVar21 = *(int *)(*(int *)((int)((uVar12 & 0xffffffff) << 2) + iVar17) + 4);
        lVar22 = lVar16;
        do {
          param_2 = iVar19 + param_2;
          uVar12 = ((__int64)*(int *)(iVar8 + 0x2d0) * (__int64)param_2 & 0x7fffffffU) * 2 +
                   param_3 & 0x7fffffff;
          puVar10 = (unsigned int *)((int)(uVar12 << 3) + iVar21);
          puVar9 = (unsigned int *)((int)((((unsigned __int64)*(unsigned int *)(param_1 + 0x14) & 0x7fffffff) * 2 +
                                   uVar12 * 2 & 0xffffffff) << 2) + iVar21);
          uVar14 = *puVar10;
          uVar13 = puVar10[1];
          uVar2 = *puVar9;
          uVar3 = puVar9[1];
          uVar20 = (((-((unsigned __int64)(uVar1 < uVar13) - 1) - ((unsigned __int64)(uVar1 < uVar14) - 1)) -
                    ((unsigned __int64)(uVar1 < uVar2) - 1)) - ((unsigned __int64)(uVar1 < uVar3) - 1)) + uVar20;
          if (param_4 != 0) {
            uVar18 = (((-((unsigned __int64)(7 < uVar13) - 1) - ((unsigned __int64)(7 < uVar14) - 1)) -
                      ((unsigned __int64)(7 < uVar2) - 1)) - ((unsigned __int64)(7 < uVar3) - 1)) + uVar18;
          }
          iVar19 = iVar19 + 1;
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
      }
      uVar7 = uVar7 + 1;
    } while ((uVar7 & 0xffffffff) < uVar11);
  }
  if (lVar16 == 2) {
    uVar20 = (uVar20 & 0xffffffff) >> 1;
    uVar18 = (uVar18 & 0xffffffff) >> 1;
  }
  lVar16 = (-(unsigned __int64)(uVar18 < (uVar11 & 0x3fffffff) << 2) & 0xfffffffc) + 8;
  if ((uVar11 & 0x3fffffff) << 2 <= (uVar20 & 0xffffffff)) {
    if (uVar11 < 2) {
      return lVar16;
    }
    iVar19 = 0;
    iVar8 = 0;
    iVar21 = 0;
    uVar20 = 0;
    if (1 < iVar4 + -1) {
      uVar1 = *(unsigned int *)(param_1 + 0x1c);
      do {
        uVar18 = uVar15 + 1;
        if ((int)uVar1 <= (int)uVar18) {
          uVar18 = uVar18 - uVar1;
        }
        uVar7 = uVar15 & 0xffffffff;
        uVar15 = uVar18 + 1;
        iVar6 = iVar4 - (int)uVar20;
        uVar13 = (unsigned int)*(unsigned char *)(*(int *)(*(int *)((int)((uVar18 & 0xffffffff) << 2) + iVar17) + 8)
                                + iVar5) -
                 (unsigned int)*(unsigned char *)(*(int *)(*(int *)((int)(uVar7 << 2) + iVar17) + 8) + iVar5);
        uVar14 = (int)uVar13 >> 0x1f;
        iVar19 = ((uVar13 ^ uVar14) - uVar14) * (iVar6 + -1) + iVar19;
        if ((int)uVar1 <= (int)uVar15) {
          uVar15 = uVar15 - uVar1;
        }
        uVar20 = uVar20 + 2;
        uVar13 = (unsigned int)*(unsigned char *)(*(int *)(*(int *)((int)((uVar15 & 0xffffffff) << 2) + iVar17) + 8)
                                + iVar5) -
                 (unsigned int)*(unsigned char *)(*(int *)(*(int *)((int)((uVar18 & 0xffffffff) << 2) + iVar17) + 8)
                                + iVar5);
        uVar14 = (int)uVar13 >> 0x1f;
        iVar8 = ((uVar13 ^ uVar14) - uVar14) * (iVar6 + -2) + iVar8;
      } while ((uVar20 & 0xffffffff) < (uVar11 - 2 & 0xffffffff));
    }
    if ((uVar20 & 0xffffffff) < (uVar11 - 1 & 0xffffffff)) {
      uVar18 = uVar15 + 1;
      if ((int)*(unsigned int *)(param_1 + 0x1c) <= (int)uVar18) {
        uVar18 = uVar18 - *(unsigned int *)(param_1 + 0x1c);
      }
      uVar14 = (unsigned int)*(unsigned char *)(*(int *)(*(int *)((int)((uVar18 & 0xffffffff) << 2) + iVar17) + 8) +
                              iVar5) -
               (unsigned int)*(unsigned char *)(*(int *)(*(int *)((int)((uVar15 & 0xffffffff) << 2) + iVar17) + 8) +
                              iVar5);
      uVar1 = (int)uVar14 >> 0x1f;
      iVar21 = ((uVar14 ^ uVar1) - uVar1) * ((iVar4 - (int)uVar20) + -1);
    }
    if ((unsigned int)(iVar19 + iVar8 + iVar21) < ((iVar4 + -1) * iVar4 * 5 & 0x7fffffffU)) {
      return lVar16;
    }
  }
  return 0;
}

