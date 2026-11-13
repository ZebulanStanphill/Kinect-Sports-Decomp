extern int fn_82F22718();
extern int fn_82F23F28();


void fn_82F0EC20(int param_1,int param_2)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  __int64 lVar5;
  __int64 lVar6;
  unsigned __int64 uVar7;
  __int64 lVar8;
  __int64 lVar9;
  __int64 lVar10;
  __int64 lVar11;
  unsigned __int64 uVar12;
  unsigned __int64 uVar13;
  unsigned __int64 uVar14;
  unsigned __int64 uVar15;
  unsigned __int64 uVar16;
  unsigned __int64 uVar17;
  unsigned __int64 uVar18;
  unsigned __int64 uVar19;
  unsigned __int64 uVar20;
  int iVar21;
  
  iVar1 = *(int *)(param_1 + 0x2d0);
  if (*(int *)(param_1 + 0x8e0) == 0) {
    uVar19 = (__int64)iVar1 * (__int64)*(int *)(param_2 + 0x108);
    fn_82F22718(param_1,*(unsigned int *)(param_2 + 0xd0),*(unsigned int *)(param_2 + 0xd8),
                      *(unsigned int *)(param_2 + 0xe0),*(unsigned int *)(param_2 + 0xd4),
                      *(unsigned int *)(param_2 + 0xdc),*(unsigned int *)(param_2 + 0xe4),
                      (uVar19 + (uVar19 & 0x7fffffff) * 2 & 0x7fffffff) * 2 +
                      (unsigned __int64)*(unsigned int *)(param_1 + 0x874));
    iVar1 = (int)*(unsigned int *)(param_1 + 0x568) >> 1;
    if (*(int *)(param_2 + 4) == 0) {
      uVar4 = *(unsigned int *)(param_2 + 0xe0);
      lVar6 = (__int64)iVar1 * (__int64)*(int *)(param_1 + 0x6de4) +
              ((unsigned __int64)*(unsigned int *)(param_1 + 0x568) & 0x1fffffff) * 8;
      lVar5 = (__int64)((int)*(unsigned int *)(param_1 + 0x564) >> 1) *
              (__int64)*(int *)(param_1 + 0x6de4) +
              ((unsigned __int64)*(unsigned int *)(param_1 + 0x564) & 0x1fffffff) * 8;
      lVar10 = ((unsigned __int64)*(unsigned int *)(param_2 + 0x10c) & 0x7fffffff) * 2 + -1;
    }
    else {
      uVar2 = *(unsigned int *)(param_2 + 0x108);
      uVar4 = *(unsigned int *)(param_2 + 0xe0);
      lVar5 = (__int64)(*(int *)(param_1 + 0x564) >> 1) * (__int64)*(int *)(param_1 + 0x6de4) +
              ((__int64)(int)uVar2 * (__int64)*(int *)(param_1 + 0x564) & 0xfffffffU) * 0x10;
      lVar6 = (__int64)iVar1 * (__int64)*(int *)(param_1 + 0x6de4) +
              ((__int64)(int)uVar2 * (__int64)*(int *)(param_1 + 0x568) & 0x1fffffffU) * 8;
      lVar10 = ((unsigned __int64)*(unsigned int *)(param_2 + 0x10c) - (unsigned __int64)uVar2 & 0x7fffffff) << 1;
    }
    fn_82F23F28(param_1,lVar5 + (unsigned __int64)*(unsigned int *)(param_1 + 0x4a94),
                  (unsigned __int64)*(unsigned int *)(param_1 + 0x4a98) + lVar6,
                  (unsigned __int64)*(unsigned int *)(param_1 + 0x4a9c) + lVar6,lVar10,
                  *(unsigned int *)(param_2 + 0xd0),*(unsigned int *)(param_2 + 0xd8),uVar4);
  }
  else {
    uVar2 = *(unsigned int *)(param_2 + 0x108);
    uVar19 = (unsigned __int64)uVar2;
    uVar3 = *(unsigned int *)(param_2 + 0x10c);
    uVar18 = uVar19;
    if (uVar19 < uVar3) {
      uVar18 = uVar19 + 1;
    }
    if ((uVar18 & 0xffffffff) < (unsigned __int64)uVar3) {
      lVar5 = (uVar18 & 0x3fffffff) << 2;
      do {
        if (*(int *)((int)lVar5 + *(int *)(param_1 + 0x8d8)) != 0) break;
        uVar18 = uVar18 + 1;
        lVar5 = lVar5 + 4;
      } while ((uVar18 & 0xffffffff) < (unsigned __int64)uVar3);
    }
    uVar3 = *(unsigned int *)(param_1 + 0x564);
    uVar17 = (unsigned __int64)*(unsigned int *)(param_2 + 0xd0);
    uVar16 = (unsigned __int64)*(unsigned int *)(param_2 + 0xd8);
    uVar15 = (unsigned __int64)*(unsigned int *)(param_2 + 0xe0);
    uVar14 = (unsigned __int64)*(unsigned int *)(param_2 + 0xd4);
    uVar13 = (unsigned __int64)*(unsigned int *)(param_2 + 0xdc);
    uVar12 = (unsigned __int64)*(unsigned int *)(param_2 + 0xe4);
    lVar6 = (__int64)(*(int *)(param_1 + 0x568) >> 1) * (__int64)*(int *)(param_1 + 0x6de4) +
            ((__int64)*(int *)(param_1 + 0x568) * (__int64)(int)uVar2 & 0x1fffffffU) * 8;
    lVar5 = (__int64)((int)uVar3 >> 1) * (__int64)*(int *)(param_1 + 0x6de4) +
            ((__int64)(int)uVar3 * (__int64)(int)uVar2 & 0xfffffffU) * 0x10 +
            (unsigned __int64)*(unsigned int *)(param_1 + 0x4a94);
    lVar10 = (unsigned __int64)*(unsigned int *)(param_1 + 0x4a98) + lVar6;
    lVar6 = (unsigned __int64)*(unsigned int *)(param_1 + 0x4a9c) + lVar6;
    uVar20 = uVar18 - uVar19;
    while (uVar20 != 0) {
      if (((uVar19 & 0xffffffff) == 0) ||
         (*(int *)(*(int *)(param_1 + 0x8d8) + (int)((uVar19 & 0xffffffff) << 2)) != 0)) {
        lVar9 = ((unsigned __int64)uVar3 & 0x1fffffff) << 3;
        lVar11 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x568) & 0x1fffffff) << 3;
      }
      else {
        lVar9 = 0;
        lVar11 = 0;
      }
      iVar21 = (int)uVar20;
      uVar7 = (__int64)(int)uVar19 * (__int64)*(int *)(param_1 + 0x2d0);
      fn_82F22718(param_1,uVar17,uVar16,uVar15,uVar14,uVar13,uVar12,
                        (uVar7 + (uVar7 & 0x7fffffff) * 2 & 0x7fffffff) * 2 +
                        (unsigned __int64)*(unsigned int *)(param_1 + 0x874));
      if (((uVar19 & 0xffffffff) == 0) ||
         (lVar8 = 0, *(int *)(*(int *)(param_1 + 0x8d8) + (int)((uVar19 & 0xffffffff) << 2)) != 0))
      {
        lVar8 = 1;
      }
      fn_82F23F28(param_1,lVar5 + lVar9,lVar10 + lVar11,lVar6 + lVar11,
                    (uVar20 & 0x7fffffff) * 2 - lVar8,uVar17,uVar16,uVar15);
      uVar3 = *(unsigned int *)(param_1 + 0x564);
      uVar2 = *(unsigned int *)(param_2 + 0x10c);
      lVar11 = ((__int64)*(int *)(param_1 + 0x568) * (__int64)iVar21 & 0x1fffffffU) * 8;
      lVar8 = (__int64)iVar21 * (__int64)(int)(iVar1 + 3U >> 2);
      lVar9 = (__int64)iVar21 * (__int64)(int)(iVar1 + 1U & 0xfffffffe);
      uVar17 = lVar9 + uVar17;
      uVar16 = lVar8 + uVar16;
      uVar15 = lVar8 + uVar15;
      uVar14 = lVar9 + uVar14;
      uVar13 = lVar8 + uVar13;
      uVar12 = lVar8 + uVar12;
      lVar5 = ((__int64)(int)uVar3 * (__int64)iVar21 & 0xfffffffU) * 0x10 + lVar5;
      lVar10 = lVar11 + lVar10;
      lVar6 = lVar11 + lVar6;
      uVar7 = uVar18;
      if (((uVar18 & 0xffffffff) < (unsigned __int64)uVar2) &&
         (uVar7 = uVar18 + 1, (uVar7 & 0xffffffff) < (unsigned __int64)uVar2)) {
        lVar9 = (uVar7 & 0x3fffffff) << 2;
        do {
          if (*(int *)((int)lVar9 + *(int *)(param_1 + 0x8d8)) != 0) break;
          uVar7 = uVar7 + 1;
          lVar9 = lVar9 + 4;
        } while ((uVar7 & 0xffffffff) < (unsigned __int64)uVar2);
      }
      uVar20 = uVar7 - uVar18;
      uVar19 = uVar18;
      uVar18 = uVar7;
    }
  }
  return;
}

