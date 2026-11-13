typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82EDBFD8();
extern int fn_82F68CC0();


unsigned __int64 fn_82EDC950(int param_1,unsigned __int64 param_2,int param_3,int param_4)

{
  unsigned short uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  bool bVar4;
  int iVar5;
  unsigned int uVar6;
  __int64 lVar7;
  __int64 lVar8;
  __int64 lVar9;
  int iVar10;
  unsigned int uVar11;
  __int64 lVar12;
  unsigned __int64 uVar13;
  unsigned int uVar14;
  __int64 lVar15;
  __int64 lVar16;
  unsigned __int64 uVar17;
  unsigned __int64 uVar18;
  unsigned __int64 uVar19;
  
  if (((param_2 & 0xffffffff) == 0) || (uVar19 = (unsigned __int64)*(unsigned int *)(param_1 + 0x160), uVar19 == 0)
     ) {
    return 0;
  }
  iVar5 = fn_82EDBFD8();
  if (iVar5 == 1) {
    uVar14 = 0;
    uVar11 = 0;
    uVar17 = 0;
    iVar5 = *(int *)(*(int *)(param_1 + 4) + 0x10);
    lVar16 = 0;
    uVar18 = 0;
    lVar15 = 0;
    lVar8 = 0;
    lVar12 = 0;
    lVar7 = 0;
    if (((iVar5 == 0x56555949) || (iVar5 == 0x30323449)) || (iVar5 == 0x32315659)) {
      uVar14 = *(unsigned int *)(param_1 + 0x28);
      uVar2 = *(unsigned int *)(param_1 + 0x10);
      uVar17 = (unsigned __int64)uVar2;
      uVar3 = *(unsigned int *)(param_1 + 0x14);
      uVar11 = ((int)uVar14 >> 1) + (unsigned int)((int)uVar14 < 0 && (uVar14 & 1) != 0);
      uVar13 = (__int64)*(int *)(param_1 + 0x2c) * (__int64)(int)uVar14;
      lVar16 = (__int64)((int)uVar2 >> 1) + (unsigned __int64)((int)uVar2 < 0 && (uVar2 & 1) != 0);
      uVar2 = *(unsigned int *)(param_1 + 0xc);
      uVar18 = (__int64)((int)uVar3 >> 1) + (unsigned __int64)((int)uVar3 < 0 && (uVar3 & 1) != 0);
      lVar15 = (__int64)((int)uVar18 >> 1) + (unsigned __int64)((int)uVar18 < 0 && (uVar18 & 1) != 0);
      if (param_3 == 0) {
        uVar6 = uVar2 * uVar11;
        uVar3 = *(unsigned int *)(param_1 + 8);
        lVar7 = (__int64)((int)uVar6 >> 1) + (unsigned __int64)((int)uVar6 < 0 && (uVar6 & 1) != 0);
        uVar6 = (int)uVar13 + (int)((uVar13 & 0xffffffff) << 2);
        lVar9 = (__int64)((int)uVar3 >> 1) + (unsigned __int64)((int)uVar3 < 0 && (uVar3 & 1) != 0);
        lVar8 = (__int64)(int)uVar2 * (__int64)(int)uVar14 + (unsigned __int64)uVar3;
        lVar12 = lVar9 + uVar13 + lVar7;
        lVar7 = (__int64)((int)uVar6 >> 2) + (unsigned __int64)((int)uVar6 < 0 && (uVar6 & 3) != 0) +
                lVar9 + lVar7;
      }
      else {
        uVar3 = *(unsigned int *)(param_1 + 8);
        uVar6 = (int)uVar13 + (int)((uVar13 & 0xffffffff) << 2);
        lVar9 = (__int64)((int)uVar3 >> 1) + (unsigned __int64)((int)uVar3 < 0 && (uVar3 & 1) != 0);
        lVar7 = (__int64)(int)(((int)uVar2 >> 1) + (unsigned int)((int)uVar2 < 0 && (uVar2 & 1) != 0) + 1)
                * (__int64)(int)uVar11;
        lVar8 = (__int64)(int)(uVar2 + 1) * (__int64)(int)uVar14 + (unsigned __int64)uVar3;
        lVar12 = lVar9 + lVar7 + uVar13;
        lVar7 = (__int64)((int)uVar6 >> 2) + (unsigned __int64)((int)uVar6 < 0 && (uVar6 & 3) != 0) +
                lVar9 + lVar7;
      }
    }
    lVar8 = lVar8 + param_2;
    lVar12 = lVar12 + param_2;
    lVar7 = lVar7 + param_2;
    lVar9 = ((unsigned __int64)uVar11 & 0x7fffffff) * 2;
    if (0 < (int)uVar18) {
      do {
        fn_82F68CC0(uVar19,lVar8,uVar17);
        uVar18 = uVar18 - 1;
        lVar8 = ((unsigned __int64)uVar14 & 0x7fffffff) * 2 + lVar8;
        uVar19 = uVar17 + uVar19;
      } while (uVar18 != 0);
    }
    lVar8 = lVar15;
    if (0 < (int)lVar15) {
      do {
        fn_82F68CC0(uVar19,lVar12,lVar16);
        lVar8 = lVar8 + -1;
        lVar12 = lVar9 + lVar12;
        uVar19 = lVar16 + uVar19;
      } while (lVar8 != 0);
    }
    if ((int)lVar15 < 1) {
      return 1;
    }
    do {
      fn_82F68CC0(uVar19,lVar7,lVar16);
      lVar15 = lVar15 + -1;
      lVar7 = lVar9 + lVar7;
      uVar19 = lVar16 + uVar19;
    } while (lVar15 != 0);
    return 1;
  }
  if (iVar5 != 2) {
    return 0;
  }
  iVar5 = *(int *)(param_1 + 4);
  uVar1 = *(unsigned short *)(iVar5 + 0xe);
  lVar7 = (__int64)*(int *)(param_1 + 0x28) * (__int64)(int)(unsigned int)uVar1;
  if (lVar7 < 1) {
    lVar7 = -lVar7;
  }
  iVar10 = 1;
  if (*(int *)(param_1 + 0x28) < 1) {
    iVar10 = -1;
  }
  uVar14 = *(unsigned int *)(param_1 + 0x14);
  bVar4 = false;
  lVar8 = (__int64)((int)(*(int *)(param_1 + 0x10) * (unsigned int)uVar1 + 0x1f & 0xffffffe0) >> 3);
  uVar17 = (__int64)((int)((int)lVar7 + 0x1fU & 0xffffffe0) >> 3) * (__int64)iVar10;
  lVar7 = (__int64)((int)uVar14 >> 1) + (unsigned __int64)((int)uVar14 < 0 && (uVar14 & 1) != 0);
  if (((param_4 == 0) && (*(unsigned int *)(iVar5 + 0x10) < 4)) && (0 < *(int *)(iVar5 + 8))) {
    bVar4 = true;
  }
  uVar11 = (unsigned int)uVar1;
  iVar5 = (int)uVar17;
  if (param_3 == 0) {
    if (bVar4) {
      uVar2 = (int)*(unsigned int *)(param_1 + 0x2c) >> 0x1f;
      uVar11 = *(int *)(param_1 + 8) * uVar11;
      lVar15 = (__int64)
               (int)((((*(unsigned int *)(param_1 + 0x2c) ^ uVar2) - uVar2) - *(int *)(param_1 + 0xc)) -
                    uVar14) * (__int64)iVar5 +
               (__int64)((int)uVar11 >> 3) + (unsigned __int64)((int)uVar11 < 0 && (uVar11 & 7) != 0);
      goto LAB_82edccb4;
    }
    uVar11 = *(int *)(param_1 + 8) * uVar11;
    lVar12 = (__int64)*(int *)(param_1 + 0xc) * (__int64)iVar5;
    lVar15 = (__int64)((int)uVar11 >> 3) + (unsigned __int64)((int)uVar11 < 0 && (uVar11 & 7) != 0);
  }
  else if (bVar4) {
    uVar2 = (int)*(unsigned int *)(param_1 + 0x2c) >> 0x1f;
    uVar11 = *(int *)(param_1 + 8) * uVar11;
    lVar12 = (__int64)((int)uVar11 >> 3) + (unsigned __int64)((int)uVar11 < 0 && (uVar11 & 7) != 0);
    lVar15 = (__int64)
             (int)(((*(unsigned int *)(param_1 + 0x2c) ^ uVar2) - uVar2) +
                  ((1 - *(int *)(param_1 + 0xc)) - uVar14)) * (__int64)iVar5;
  }
  else {
    uVar11 = *(int *)(param_1 + 8) * uVar11;
    lVar15 = (__int64)(*(int *)(param_1 + 0xc) + 1) * (__int64)iVar5;
    lVar12 = (__int64)((int)uVar11 >> 3) + (unsigned __int64)((int)uVar11 < 0 && (uVar11 & 7) != 0);
  }
  lVar15 = lVar15 + lVar12;
LAB_82edccb4:
  lVar15 = lVar15 + param_2;
  if (0 < (int)lVar7) {
    do {
      fn_82F68CC0(uVar19,lVar15,lVar8);
      lVar7 = lVar7 + -1;
      lVar15 = (uVar17 & 0x7fffffff) * 2 + lVar15;
      uVar19 = uVar19 + lVar8;
    } while (lVar7 != 0);
  }
  return 1;
}

