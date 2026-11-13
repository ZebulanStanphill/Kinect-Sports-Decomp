extern int fn_82F230D8();
extern int fn_82F24118();


void fn_82F0F218(int param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned __int64 uVar9;
  __int64 lVar10;
  __int64 lVar11;
  __int64 lVar12;
  __int64 lVar13;
  unsigned __int64 uVar14;
  unsigned __int64 uVar15;
  unsigned __int64 uVar16;
  
  if (*(int *)(param_1 + 0x8e0) == 0) {
    uVar9 = (__int64)*(int *)(param_1 + 0x2d0) * (__int64)*(int *)(param_2 + 0x108);
    fn_82F230D8(param_1,*(unsigned int *)(param_2 + 0xe8),*(unsigned int *)(param_2 + 0xf0),
                    *(unsigned int *)(param_2 + 0xf8),*(unsigned int *)(param_2 + 0xec),
                    *(unsigned int *)(param_2 + 0xf4),*(unsigned int *)(param_2 + 0xfc),
                    (uVar9 + (uVar9 & 0x7fffffff) * 2 & 0x7fffffff) * 2 +
                    (unsigned __int64)*(unsigned int *)(param_1 + 0x874));
    uVar1 = *(unsigned int *)(param_2 + 0x108);
    lVar10 = (__int64)(*(int *)(param_1 + 0x568) >> 1) * (__int64)*(int *)(param_1 + 0x6de4) +
             ((__int64)(int)uVar1 * (__int64)*(int *)(param_1 + 0x568) & 0x1fffffffU) * 8;
    fn_82F24118(param_1,(__int64)(*(int *)(param_1 + 0x564) >> 1) *
                          (__int64)*(int *)(param_1 + 0x6de4) +
                          ((__int64)(int)uVar1 * (__int64)*(int *)(param_1 + 0x564) & 0xfffffffU)
                          * 0x10 + (unsigned __int64)*(unsigned int *)(param_1 + 0x4a94) + 8,
                  (unsigned __int64)*(unsigned int *)(param_1 + 0x4a98) + lVar10 + 8,
                  (unsigned __int64)*(unsigned int *)(param_1 + 0x4a9c) + lVar10 + 8,
                  ((unsigned __int64)*(unsigned int *)(param_1 + 0x2d0) & 0x7fffffff) * 2 + -1,
                  ((unsigned __int64)*(unsigned int *)(param_2 + 0x10c) - (unsigned __int64)uVar1 & 0xfffffff) << 4,
                  *(unsigned int *)(param_2 + 0xe8),*(unsigned int *)(param_2 + 0xf0));
  }
  else {
    uVar1 = *(unsigned int *)(param_2 + 0x108);
    uVar9 = (unsigned __int64)uVar1;
    uVar2 = *(unsigned int *)(param_2 + 0x10c);
    uVar14 = uVar9;
    if (uVar9 < uVar2) {
      uVar14 = uVar9 + 1;
    }
    if ((uVar14 & 0xffffffff) < (unsigned __int64)uVar2) {
      lVar10 = (uVar14 & 0x3fffffff) << 2;
      do {
        if (*(int *)((int)lVar10 + *(int *)(param_1 + 0x8d8)) != 0) break;
        uVar14 = uVar14 + 1;
        lVar10 = lVar10 + 4;
      } while ((uVar14 & 0xffffffff) < (unsigned __int64)uVar2);
    }
    uVar3 = *(unsigned int *)(param_2 + 0xe8);
    uVar4 = *(unsigned int *)(param_2 + 0xf0);
    uVar5 = *(unsigned int *)(param_2 + 0xf8);
    uVar6 = *(unsigned int *)(param_2 + 0xec);
    uVar7 = *(unsigned int *)(param_2 + 0xf4);
    uVar8 = *(unsigned int *)(param_2 + 0xfc);
    lVar11 = (__int64)(*(int *)(param_1 + 0x568) >> 1) * (__int64)*(int *)(param_1 + 0x6de4) +
             ((__int64)*(int *)(param_1 + 0x568) * (__int64)(int)uVar1 & 0x1fffffffU) * 8;
    lVar10 = (__int64)(*(int *)(param_1 + 0x564) >> 1) * (__int64)*(int *)(param_1 + 0x6de4) +
             ((__int64)*(int *)(param_1 + 0x564) * (__int64)(int)uVar1 & 0xfffffffU) * 0x10 +
             (unsigned __int64)*(unsigned int *)(param_1 + 0x4a94);
    lVar13 = (unsigned __int64)*(unsigned int *)(param_1 + 0x4a98) + lVar11;
    lVar11 = (unsigned __int64)*(unsigned int *)(param_1 + 0x4a9c) + lVar11;
    uVar16 = uVar14 - uVar9;
    while (uVar16 != 0) {
      uVar9 = (__int64)*(int *)(param_1 + 0x2d0) * (__int64)(int)uVar9;
      fn_82F230D8(param_1,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,
                      (uVar9 + (uVar9 & 0x7fffffff) * 2 & 0x7fffffff) * 2 +
                      (unsigned __int64)*(unsigned int *)(param_1 + 0x874));
      lVar12 = (uVar16 & 0xfffffff) << 4;
      fn_82F24118(param_1,lVar10 + 8,lVar13 + 8,lVar11 + 8,
                    ((unsigned __int64)*(unsigned int *)(param_1 + 0x2d0) & 0x7fffffff) * 2 + -1,lVar12,uVar3,uVar4
                   );
      fn_82F24118(param_1,lVar10 + 4,lVar13 + 4,lVar11 + 4,*(int *)(param_1 + 0x2d0) << 1,lVar12,
                    uVar6,uVar7);
      uVar1 = *(unsigned int *)(param_2 + 0x10c);
      lVar12 = ((__int64)*(int *)(param_1 + 0x568) * (__int64)(int)uVar16 & 0x1fffffffU) * 8;
      lVar13 = lVar12 + lVar13;
      lVar10 = ((__int64)*(int *)(param_1 + 0x564) * (__int64)(int)uVar16 & 0xfffffffU) * 0x10 +
               lVar10;
      lVar11 = lVar12 + lVar11;
      uVar15 = uVar14;
      if (((uVar14 & 0xffffffff) < (unsigned __int64)uVar1) &&
         (uVar15 = uVar14 + 1, (uVar15 & 0xffffffff) < (unsigned __int64)uVar1)) {
        lVar12 = (uVar15 & 0x3fffffff) << 2;
        do {
          if (*(int *)((int)lVar12 + *(int *)(param_1 + 0x8d8)) != 0) break;
          uVar15 = uVar15 + 1;
          lVar12 = lVar12 + 4;
        } while ((uVar15 & 0xffffffff) < (unsigned __int64)uVar1);
      }
      uVar16 = uVar15 - uVar14;
      uVar9 = uVar14;
      uVar14 = uVar15;
    }
  }
  return;
}

