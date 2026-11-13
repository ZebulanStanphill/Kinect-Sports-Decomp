extern unsigned int lbl_83177358;


unsigned __int64 fn_82CB9AB8(int param_1,unsigned __int64 param_2,int param_3,int param_4)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  unsigned __int64 uVar13;
  unsigned int uVar14;
  unsigned int uVar15;
  unsigned int uVar16;
  unsigned int uVar18;
  unsigned __int64 uVar17;
  unsigned int uVar19;
  unsigned __int64 uVar20;
  unsigned __int64 uVar21;
  int iVar22;
  unsigned __int64 uVar23;
  __int64 lVar24;
  __int64 lVar25;
  int iVar26;
  __int64 lVar27;
  unsigned int uVar28;
  unsigned int uVar29;
  unsigned int uVar30;
  
  uVar14 = *(unsigned int *)(param_1 + 0x88);
  uVar30 = param_3 * 2 + 1;
  iVar22 = *(int *)(param_1 + 0x6f0);
  iVar9 = *(int *)(param_1 + 0x6f4);
  uVar13 = (param_2 & 0x7fffffff) * 2 + 1;
  lVar27 = ((unsigned __int64)uVar14 & 0x1fffffff) * 8;
  iVar26 = *(int *)(param_1 + 0x8c) * 8;
  uVar20 = ((__int64)(int)uVar14 * (__int64)(int)uVar30 & 0x7fffffffU) * 2 + uVar13;
  if (param_4 == 0) {
    iVar10 = (int)((uVar20 & 0xffffffff) << 1);
    iVar11 = (int)((uVar20 - 1 & 0xffffffff) << 1);
    uVar20 = (uVar20 - 1) + ((unsigned __int64)uVar14 & 0x7fffffff) * -2;
    sVar1 = *(short *)(iVar10 + iVar9);
    sVar2 = *(short *)(iVar10 + iVar22);
    iVar10 = (int)((uVar20 & 0xffffffff) << 1);
    iVar12 = (int)((uVar20 + 1 & 0xffffffff) << 1);
    sVar3 = *(short *)(iVar11 + iVar9);
    sVar4 = *(short *)(iVar11 + iVar22);
    uVar20 = (unsigned __int64)sVar2;
    uVar17 = (unsigned __int64)sVar4;
    sVar5 = *(short *)(iVar10 + iVar22);
    sVar6 = *(short *)(iVar12 + iVar22);
    uVar21 = (unsigned __int64)sVar5;
    sVar7 = *(short *)(iVar10 + iVar9);
    uVar23 = (unsigned __int64)sVar6;
    sVar8 = *(short *)(iVar12 + iVar9);
    uVar15 = (unsigned int)sVar1;
    uVar28 = ((unsigned int)LZCOUNT(sVar6 + -0x4000) >> 5) + ((unsigned int)LZCOUNT(sVar5 + -0x4000) >> 5) +
             ((unsigned int)LZCOUNT(sVar4 + -0x4000) >> 5) + ((unsigned int)LZCOUNT(sVar2 + -0x4000) >> 5);
    uVar16 = (unsigned int)sVar3;
    uVar18 = (unsigned int)sVar7;
    uVar19 = (unsigned int)sVar8;
    if (2 < uVar28) goto LAB_82cb9bcc;
    if (uVar28 == 1) {
      if (sVar6 == 0x4000) {
        uVar30 = (int)sVar5 - (int)sVar4 ^ (int)sVar5 - (int)sVar2;
        uVar14 = (int)sVar4 - (int)sVar2 ^ (int)sVar5 - (int)sVar2;
        uVar19 = (int)sVar7 - (int)sVar3 ^ (int)sVar7 - (int)sVar1;
        uVar28 = (int)sVar3 - (int)sVar1 ^ (int)sVar7 - (int)sVar1;
        uVar13 = uVar17 & ~(__int64)((int)(uVar30 | uVar14) >> 0x1f) |
                 (__int64)((int)uVar30 >> 0x1f) & uVar21 | (__int64)((int)uVar14 >> 0x1f) & uVar20
        ;
        uVar30 = uVar16 & ~((int)(uVar19 | uVar28) >> 0x1f) | (int)uVar19 >> 0x1f & uVar18 |
                 (int)uVar28 >> 0x1f & uVar15;
      }
      else if (sVar5 == 0x4000) {
        uVar30 = (int)sVar6 - (int)sVar4 ^ (int)sVar6 - (int)sVar2;
        uVar14 = (int)sVar4 - (int)sVar2 ^ (int)sVar6 - (int)sVar2;
        uVar18 = (int)sVar8 - (int)sVar3 ^ (int)sVar8 - (int)sVar1;
        uVar28 = (int)sVar3 - (int)sVar1 ^ (int)sVar8 - (int)sVar1;
        uVar13 = uVar17 & ~(__int64)((int)(uVar30 | uVar14) >> 0x1f) |
                 (__int64)((int)uVar30 >> 0x1f) & uVar23 | (__int64)((int)uVar14 >> 0x1f) & uVar20
        ;
        uVar30 = uVar16 & ~((int)(uVar18 | uVar28) >> 0x1f) | (int)uVar18 >> 0x1f & uVar19 |
                 (int)uVar28 >> 0x1f & uVar15;
      }
      else if (sVar4 == 0x4000) {
        uVar30 = (int)sVar5 - (int)sVar6 ^ (int)sVar5 - (int)sVar2;
        uVar14 = (int)sVar6 - (int)sVar2 ^ (int)sVar5 - (int)sVar2;
        uVar16 = (int)sVar7 - (int)sVar8 ^ (int)sVar7 - (int)sVar1;
        uVar28 = (int)sVar8 - (int)sVar1 ^ (int)sVar7 - (int)sVar1;
        uVar13 = uVar23 & ~(__int64)((int)(uVar30 | uVar14) >> 0x1f) |
                 (__int64)((int)uVar30 >> 0x1f) & uVar21 | (__int64)((int)uVar14 >> 0x1f) & uVar20
        ;
        uVar30 = uVar19 & ~((int)(uVar16 | uVar28) >> 0x1f) | (int)uVar16 >> 0x1f & uVar18 |
                 (int)uVar28 >> 0x1f & uVar15;
      }
      else if (sVar2 == 0x4000) {
        uVar30 = (int)sVar5 - (int)sVar4 ^ (int)sVar5 - (int)sVar6;
        uVar14 = (int)sVar4 - (int)sVar6 ^ (int)sVar5 - (int)sVar6;
        uVar15 = (int)sVar7 - (int)sVar3 ^ (int)sVar7 - (int)sVar8;
        uVar28 = (int)sVar3 - (int)sVar8 ^ (int)sVar7 - (int)sVar8;
        uVar13 = uVar17 & ~(__int64)((int)(uVar30 | uVar14) >> 0x1f) |
                 (__int64)((int)uVar14 >> 0x1f) & uVar23 | (__int64)((int)uVar30 >> 0x1f) & uVar21
        ;
        uVar30 = uVar16 & ~((int)(uVar15 | uVar28) >> 0x1f) | (int)uVar28 >> 0x1f & uVar19 |
                 (int)uVar15 >> 0x1f & uVar18;
      }
    }
    else if (uVar28 == 2) {
      uVar14 = 0;
      uVar30 = 0;
      if (sVar6 != 0x4000) {
        uVar14 = (int)sVar6;
        uVar30 = (int)sVar8;
      }
      if (sVar5 != 0x4000) {
        uVar14 = (int)sVar5 + uVar14;
        uVar30 = (int)sVar7 + uVar30;
      }
      if (sVar4 != 0x4000) {
        uVar14 = (int)sVar4 + uVar14;
        uVar30 = (int)sVar3 + uVar30;
      }
      if (sVar2 != 0x4000) {
        uVar14 = (int)sVar2 + uVar14;
        uVar30 = (int)sVar1 + uVar30;
      }
      uVar13 = (__int64)((int)uVar14 >> 1) + (unsigned __int64)((int)uVar14 < 0 && (uVar14 & 1) != 0);
      uVar30 = ((int)uVar30 >> 1) + (unsigned int)((int)uVar30 < 0 && (uVar30 & 1) != 0);
    }
    else {
      uVar14 = (int)sVar5 - (int)sVar6 >> 0x1f;
      uVar30 = (int)sVar4 - (int)sVar5 >> 0x1f;
      uVar19 = ~uVar30;
      uVar16 = ~((int)sVar4 - (int)sVar6 >> 0x1f);
      uVar28 = ~((int)sVar6 - (int)sVar5 >> 0x1f);
      uVar29 = ~((int)sVar6 - (int)sVar4 >> 0x1f);
      uVar18 = ~((int)sVar5 - (int)sVar4 >> 0x1f);
      uVar15 = ~uVar14 & uVar16 & (int)sVar6 | uVar28 & uVar19 & (int)sVar5 |
               uVar18 & uVar29 & (int)sVar4;
      uVar16 = uVar18 & ~uVar14 & (int)sVar5 | uVar28 & uVar29 & (int)sVar6 |
               uVar16 & uVar19 & (int)sVar4;
      uVar28 = ~((int)(uVar16 - (int)sVar2 ^ (int)sVar2 - uVar15) >> 0x1f);
      uVar18 = ~((int)(uVar15 - uVar16 ^ (int)sVar2 - uVar15) >> 0x1f);
      uVar14 = (uVar16 & ~(uVar28 | uVar18) | uVar15 & uVar18 | uVar28 & (int)sVar2) +
               ((uVar14 ^ uVar19) & (int)sVar5 | (uVar14 ^ uVar29) & (int)sVar6 |
               (uVar30 ^ uVar29) & (int)sVar4);
      uVar13 = (__int64)((int)uVar14 >> 1) + (unsigned __int64)((int)uVar14 < 0 && (uVar14 & 1) != 0);
      uVar14 = (int)sVar7 - (int)sVar8 >> 0x1f;
      uVar30 = (int)sVar3 - (int)sVar7 >> 0x1f;
      uVar29 = ~uVar30;
      uVar28 = ~((int)sVar8 - (int)sVar3 >> 0x1f);
      uVar19 = ~((int)sVar8 - (int)sVar7 >> 0x1f);
      uVar16 = ~((int)sVar3 - (int)sVar8 >> 0x1f);
      uVar18 = ~((int)sVar7 - (int)sVar3 >> 0x1f);
      uVar15 = ~uVar14 & uVar16 & (int)sVar8 | uVar19 & uVar29 & (int)sVar7 |
               uVar18 & uVar28 & (int)sVar3;
      uVar16 = uVar18 & ~uVar14 & (int)sVar7 | uVar19 & uVar28 & (int)sVar8 |
               uVar16 & uVar29 & (int)sVar3;
      uVar19 = ~((int)(uVar16 - (int)sVar1 ^ (int)sVar1 - uVar15) >> 0x1f);
      uVar18 = ~((int)(uVar15 - uVar16 ^ (int)sVar1 - uVar15) >> 0x1f);
      uVar14 = (uVar16 & ~(uVar19 | uVar18) | uVar15 & uVar18 | uVar19 & (int)sVar1) +
               ((uVar14 ^ uVar29) & (int)sVar7 | (uVar14 ^ uVar28) & (int)sVar8 |
               (uVar30 ^ uVar28) & (int)sVar3);
      uVar30 = ((int)uVar14 >> 1) + (unsigned int)((int)uVar14 < 0 && (uVar14 & 1) != 0);
    }
  }
  else {
    iVar10 = (int)((uVar20 & 0xffffffff) << 1);
    sVar1 = *(short *)(iVar10 + iVar22);
    uVar13 = (unsigned __int64)sVar1;
    if (sVar1 == 0x4000) {
LAB_82cb9bcc:
      uVar13 = (__int64)(int)uVar14 * (__int64)param_3 + param_2;
      iVar22 = (int)((uVar13 & 0xffffffff) << 1);
      *(unsigned short *)(*(int *)(param_1 + 0x6f8) + iVar22) = 0x4000;
      *(unsigned short *)(*(int *)(param_1 + 0x6fc) + iVar22) = 0x4000;
      if ((0 < *(int *)(param_1 + 0x39f4)) && (*(int *)(param_1 + 0x120) == 1)) {
        iVar22 = (int)((uVar13 & 0xffffffff) << 3);
        *(unsigned short *)(iVar22 + *(int *)(param_1 + 0xc0c)) = 0;
        *(unsigned short *)(iVar22 + *(int *)(param_1 + 0xc0c) + 2) = 0;
        if (6 < *(int *)(param_1 + 0x3cb0)) {
          uVar14 = *(unsigned int *)(param_1 + 0x88);
          uVar13 = (((__int64)(int)uVar14 * (__int64)param_3 & 0x7fffffffU) * 2 + param_2 &
                   0x7fffffff) * 2;
          iVar22 = (int)((uVar13 & 0x7fffffff) << 1);
          *(unsigned short *)(iVar22 + *(int *)(param_1 + 0x3be4)) = 0x4000;
          *(unsigned short *)(iVar22 + *(int *)(param_1 + 0x3be4) + 2) = 0x4000;
          iVar9 = (int)((((unsigned __int64)uVar14 & 0x7fffffff) * 2 + uVar13 & 0x7fffffff) << 1);
          *(unsigned short *)(iVar9 + *(int *)(param_1 + 0x3be4)) = 0x4000;
          *(unsigned short *)(iVar9 + *(int *)(param_1 + 0x3be4) + 2) = 0x4000;
          *(unsigned short *)(iVar22 + *(int *)(param_1 + 0x3be8)) = 0x4000;
          *(unsigned short *)(iVar22 + *(int *)(param_1 + 0x3be8) + 2) = 0x4000;
          *(unsigned short *)(iVar9 + *(int *)(param_1 + 0x3be8)) = 0x4000;
          *(unsigned short *)(iVar9 + *(int *)(param_1 + 0x3be8) + 2) = 0x4000;
        }
      }
      return 1;
    }
    uVar30 = (unsigned int)*(short *)(iVar10 + iVar9);
  }
  uVar20 = (__int64)param_3 * (__int64)*(int *)(param_1 + 0x88) + param_2;
  if (0 < *(int *)(param_1 + 0x39f4)) {
    uVar17 = uVar13;
    uVar14 = uVar30;
    if (*(int *)(param_1 + 0x3cb0) == 6) {
      lVar24 = (param_2 & 0x1fffffff) * 8 + (__int64)((int)uVar13 >> 2);
      iVar22 = param_3 * 8 + ((int)uVar30 >> 2);
      if ((int)lVar24 < -8) {
        uVar17 = uVar13 + (lVar24 + 8U & 0x3fffffff) * -4;
      }
      else if ((int)lVar27 < (int)lVar24) {
        uVar17 = (lVar27 - lVar24 & 0x3fffffffU) * 4 + uVar13;
      }
      if (iVar22 < -8) {
        uVar14 = uVar30 + (iVar22 + 8U & 0x3fffffff) * -4;
      }
      else if (iVar26 < iVar22) {
        uVar14 = (iVar26 - iVar22) * 4 + uVar30;
      }
    }
    iVar22 = (int)((uVar20 & 0xffffffff) << 3);
    *(short *)(iVar22 + *(int *)(param_1 + 0xc0c)) = (short)uVar17;
    *(short *)(iVar22 + *(int *)(param_1 + 0xc0c) + 2) = (short)uVar14;
  }
  uVar14 = *(int *)(&lbl_83177358 + ((unsigned int)((uVar13 & 0xffffffff) << 2) & 0xc)) + (int)uVar13 >> 1;
  lVar24 = (__int64)(int)uVar14;
  uVar30 = (int)(*(int *)(&lbl_83177358 + (uVar30 & 3) * 4) + uVar30) >> 1;
  if (*(int *)(param_1 + 0x704) != 0) {
    if ((uVar14 & 1) != 0) {
      if ((int)uVar14 < 1) {
        lVar24 = lVar24 + 1;
      }
      else {
        lVar24 = lVar24 + -1;
      }
    }
    if ((uVar30 & 1) != 0) {
      if ((int)uVar30 < 1) {
        uVar30 = uVar30 + 1;
      }
      else {
        uVar30 = uVar30 - 1;
      }
    }
  }
  if (*(int *)(param_1 + 0x3cb0) == 6) {
    lVar25 = (param_2 & 0x1fffffff) * 8 + (__int64)((int)lVar24 >> 2);
    iVar22 = param_3 * 8 + ((int)uVar30 >> 2);
    if ((int)lVar25 < -8) {
      lVar24 = lVar24 + (lVar25 + 8U & 0x3fffffff) * -4;
    }
    else if ((int)lVar27 < (int)lVar25) {
      lVar24 = (lVar27 - lVar25 & 0x3fffffffU) * 4 + lVar24;
    }
    if (iVar22 < -8) {
      uVar30 = uVar30 + (iVar22 + 8U & 0x3fffffff) * -4;
    }
    else if (iVar26 < iVar22) {
      uVar30 = (iVar26 - iVar22) * 4 + uVar30;
    }
  }
  iVar22 = (int)((uVar20 & 0xffffffff) << 1);
  *(short *)(*(int *)(param_1 + 0x6f8) + iVar22) = (short)lVar24;
  *(short *)(*(int *)(param_1 + 0x6fc) + iVar22) = (short)uVar30;
  return 0;
}

