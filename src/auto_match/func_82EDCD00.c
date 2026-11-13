typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82EDBFD8();
extern int fn_82F68CC0();


unsigned __int64 fn_82EDCD00(int param_1,unsigned __int64 param_2,int param_3,int param_4)

{
  unsigned short uVar1;
  unsigned int uVar2;
  bool bVar3;
  int iVar4;
  __int64 lVar5;
  __int64 lVar6;
  unsigned int uVar8;
  __int64 lVar7;
  int iVar9;
  unsigned int uVar10;
  int iVar11;
  __int64 lVar12;
  unsigned __int64 uVar13;
  unsigned int uVar14;
  __int64 lVar15;
  __int64 lVar16;
  unsigned __int64 uVar17;
  unsigned __int64 uVar18;
  unsigned int uVar19;
  
  if (((param_2 & 0xffffffff) == 0) || (*(int *)(param_1 + 0x160) == 0)) {
    return 0;
  }
  iVar4 = fn_82EDBFD8();
  if (iVar4 == 1) {
    uVar17 = 0;
    lVar16 = 0;
    iVar4 = *(int *)(*(int *)(param_1 + 4) + 0x10);
    uVar18 = 0;
    lVar15 = 0;
    uVar14 = 0;
    uVar10 = 0;
    lVar6 = 0;
    lVar12 = 0;
    lVar5 = 0;
    if (((iVar4 == 0x56555949) || (iVar4 == 0x30323449)) || (iVar4 == 0x32315659)) {
      uVar10 = *(unsigned int *)(param_1 + 0x20);
      uVar17 = (unsigned __int64)uVar10;
      uVar2 = *(unsigned int *)(param_1 + 0x24);
      uVar14 = *(unsigned int *)(param_1 + 0x30);
      lVar16 = (__int64)((int)uVar10 >> 1) + (unsigned __int64)((int)uVar10 < 0 && (uVar10 & 1) != 0);
      uVar18 = (__int64)((int)uVar2 >> 1) + (unsigned __int64)((int)uVar2 < 0 && (uVar2 & 1) != 0);
      uVar13 = (__int64)*(int *)(param_1 + 0x34) * (__int64)(int)uVar14;
      lVar15 = (__int64)((int)uVar18 >> 1) + (unsigned __int64)((int)uVar18 < 0 && (uVar18 & 1) != 0);
      uVar10 = ((int)uVar14 >> 1) + (unsigned int)((int)uVar14 < 0 && (uVar14 & 1) != 0);
      if (param_3 == 0) {
        uVar2 = *(unsigned int *)(param_1 + 0x18);
        uVar8 = *(int *)(param_1 + 0x1c) * uVar10;
        lVar5 = (__int64)((int)uVar8 >> 1) + (unsigned __int64)((int)uVar8 < 0 && (uVar8 & 1) != 0);
        uVar8 = (int)uVar13 + (int)((uVar13 & 0xffffffff) << 2);
        lVar7 = (__int64)((int)uVar2 >> 1) + (unsigned __int64)((int)uVar2 < 0 && (uVar2 & 1) != 0);
        lVar12 = lVar7 + uVar13 + lVar5;
        lVar6 = (__int64)*(int *)(param_1 + 0x1c) * (__int64)(int)uVar14 + (unsigned __int64)uVar2;
        lVar5 = (__int64)((int)uVar8 >> 2) + (unsigned __int64)((int)uVar8 < 0 && (uVar8 & 3) != 0) +
                lVar7 + lVar5;
      }
      else {
        uVar2 = *(unsigned int *)(param_1 + 0x1c);
        uVar8 = *(unsigned int *)(param_1 + 0x18);
        uVar19 = (int)uVar13 + (int)((uVar13 & 0xffffffff) << 2);
        lVar7 = (__int64)((int)uVar8 >> 1) + (unsigned __int64)((int)uVar8 < 0 && (uVar8 & 1) != 0);
        lVar5 = (__int64)(int)(((int)uVar2 >> 1) + (unsigned int)((int)uVar2 < 0 && (uVar2 & 1) != 0) + 1)
                * (__int64)(int)uVar10;
        lVar6 = (__int64)(int)(uVar2 + 1) * (__int64)(int)uVar14 + (unsigned __int64)uVar8;
        lVar12 = lVar7 + lVar5 + uVar13;
        lVar5 = (__int64)((int)uVar19 >> 2) + (unsigned __int64)((int)uVar19 < 0 && (uVar19 & 3) != 0) +
                lVar7 + lVar5;
      }
    }
    uVar13 = (unsigned __int64)*(unsigned int *)(param_1 + 0x164);
    lVar6 = lVar6 + param_2;
    lVar12 = lVar12 + param_2;
    lVar5 = lVar5 + param_2;
    lVar7 = ((unsigned __int64)uVar10 & 0x7fffffff) * 2;
    if (0 < (int)uVar18) {
      do {
        fn_82F68CC0(lVar6,uVar13,uVar17);
        uVar18 = uVar18 - 1;
        lVar6 = ((unsigned __int64)uVar14 & 0x7fffffff) * 2 + lVar6;
        uVar13 = uVar17 + uVar13;
      } while (uVar18 != 0);
    }
    lVar6 = lVar15;
    if (0 < (int)lVar15) {
      do {
        fn_82F68CC0(lVar12,uVar13,lVar16);
        lVar6 = lVar6 + -1;
        lVar12 = lVar7 + lVar12;
        uVar13 = lVar16 + uVar13;
      } while (lVar6 != 0);
    }
    if ((int)lVar15 < 1) {
      return 1;
    }
    do {
      fn_82F68CC0(lVar5,uVar13,lVar16);
      lVar15 = lVar15 + -1;
      lVar5 = lVar7 + lVar5;
      uVar13 = lVar16 + uVar13;
    } while (lVar15 != 0);
    return 1;
  }
  if (iVar4 != 2) {
    return 0;
  }
  iVar4 = *(int *)(param_1 + 4);
  iVar11 = *(int *)(param_1 + 0x30);
  uVar1 = *(unsigned short *)(iVar4 + 0xe);
  lVar5 = (__int64)((int)(*(int *)(param_1 + 0x20) * (unsigned int)uVar1 + 0x1f & 0xffffffe0) >> 3);
  if (iVar11 < 1) {
    iVar11 = -iVar11;
    iVar9 = -1;
  }
  else {
    iVar9 = 1;
  }
  uVar14 = *(unsigned int *)(param_1 + 0x24);
  bVar3 = false;
  uVar17 = (__int64)((int)(iVar11 * (unsigned int)uVar1 + 0x1f & 0xffffffe0) >> 3) * (__int64)iVar9;
  lVar6 = (__int64)((int)uVar14 >> 1) + (unsigned __int64)((int)uVar14 < 0 && (uVar14 & 1) != 0);
  if (((param_4 == 0) && (*(unsigned int *)(iVar4 + 0x10) < 4)) && (0 < *(int *)(iVar4 + 8))) {
    bVar3 = true;
  }
  uVar18 = (unsigned __int64)*(unsigned int *)(param_1 + 0x164);
  uVar10 = (unsigned int)uVar1;
  iVar4 = (int)uVar17;
  if (param_3 == 0) {
    if (bVar3) {
      uVar2 = (int)*(unsigned int *)(param_1 + 0x34) >> 0x1f;
      uVar10 = *(int *)(param_1 + 0x18) * uVar10;
      lVar15 = (__int64)
               (int)((((*(unsigned int *)(param_1 + 0x34) ^ uVar2) - uVar2) - *(int *)(param_1 + 0x1c)) -
                    uVar14) * (__int64)iVar4 +
               (__int64)((int)uVar10 >> 3) + (unsigned __int64)((int)uVar10 < 0 && (uVar10 & 7) != 0);
      goto LAB_82edd070;
    }
    uVar10 = *(int *)(param_1 + 0x18) * uVar10;
    lVar12 = (__int64)*(int *)(param_1 + 0x1c) * (__int64)iVar4;
    lVar15 = (__int64)((int)uVar10 >> 3) + (unsigned __int64)((int)uVar10 < 0 && (uVar10 & 7) != 0);
  }
  else if (bVar3) {
    uVar2 = (int)*(unsigned int *)(param_1 + 0x34) >> 0x1f;
    uVar10 = *(int *)(param_1 + 0x18) * uVar10;
    lVar12 = (__int64)((int)uVar10 >> 3) + (unsigned __int64)((int)uVar10 < 0 && (uVar10 & 7) != 0);
    lVar15 = (__int64)
             (int)(((*(unsigned int *)(param_1 + 0x34) ^ uVar2) - uVar2) +
                  ((1 - *(int *)(param_1 + 0x1c)) - uVar14)) * (__int64)iVar4;
  }
  else {
    uVar10 = *(int *)(param_1 + 0x18) * uVar10;
    lVar15 = (__int64)(*(int *)(param_1 + 0x1c) + 1) * (__int64)iVar4;
    lVar12 = (__int64)((int)uVar10 >> 3) + (unsigned __int64)((int)uVar10 < 0 && (uVar10 & 7) != 0);
  }
  lVar15 = lVar15 + lVar12;
LAB_82edd070:
  lVar15 = lVar15 + param_2;
  if (0 < (int)lVar6) {
    do {
      fn_82F68CC0(lVar15,uVar18,lVar5);
      lVar6 = lVar6 + -1;
      lVar15 = (uVar17 & 0x7fffffff) * 2 + lVar15;
      uVar18 = uVar18 + lVar5;
    } while (lVar6 != 0);
  }
  return 1;
}

