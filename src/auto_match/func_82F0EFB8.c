#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_82F23F28();


void fn_82F0EFB8(int param_1,int param_2)

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
  int iVar17;
  
  if (*(int *)(param_1 + 0x8e0) == 0) {
    uVar2 = *(unsigned int *)(param_2 + 0x10c);
    if (*(int *)(param_2 + 4) == 0) {
      uVar4 = *(unsigned int *)(param_1 + 0x4a98);
      lVar5 = (__int64)((int)*(unsigned int *)(param_1 + 0x568) >> 1) *
              (__int64)*(int *)(param_1 + 0x6de4) +
              ((unsigned __int64)*(unsigned int *)(param_1 + 0x568) & 0x3fffffff) * 4;
      lVar10 = (__int64)((int)*(unsigned int *)(param_1 + 0x564) >> 1) *
               (__int64)*(int *)(param_1 + 0x6de4) + (unsigned __int64)*(unsigned int *)(param_1 + 0x4a94);
      uVar15 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x564) & 0x3fffffff) << 2;
      uVar7 = CONCAT44(uVar2,uVar2);
    }
    else {
      uVar3 = *(unsigned int *)(param_2 + 0x108);
      uVar4 = *(unsigned int *)(param_1 + 0x4a98);
      uVar15 = (unsigned __int64)*(unsigned int *)(param_1 + 0x4a94);
      lVar10 = (__int64)(int)(uVar3 * 0x10 + 4) * (__int64)*(int *)(param_1 + 0x564) +
               (__int64)(*(int *)(param_1 + 0x564) >> 1) * (__int64)*(int *)(param_1 + 0x6de4);
      lVar5 = (__int64)(int)(uVar3 * 8 + 4) * (__int64)*(int *)(param_1 + 0x568) +
              (__int64)(*(int *)(param_1 + 0x568) >> 1) * (__int64)*(int *)(param_1 + 0x6de4);
      uVar7 = (unsigned __int64)uVar2 - (unsigned __int64)uVar3 & 0xffffffff;
    }
    fn_82F23F28(param_1,lVar10 + uVar15,(unsigned __int64)uVar4 + lVar5,
                  (unsigned __int64)*(unsigned int *)(param_1 + 0x4a9c) + lVar5,(uVar7 & 0x7fffffff) << 1,
                  *(unsigned int *)(param_2 + 0xd4),*(unsigned int *)(param_2 + 0xdc),
                  *(unsigned int *)(param_2 + 0xe4));
  }
  else {
    iVar1 = *(int *)(param_1 + 0x2d0);
    uVar2 = *(unsigned int *)(param_2 + 0x108);
    uVar7 = (unsigned __int64)uVar2;
    uVar3 = *(unsigned int *)(param_1 + 0x564);
    uVar4 = *(unsigned int *)(param_2 + 0x10c);
    lVar10 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x568) & 0x3fffffff) * 4;
    uVar15 = uVar7;
    if (uVar7 < uVar4) {
      uVar15 = uVar7 + 1;
    }
    if ((uVar15 & 0xffffffff) < (unsigned __int64)uVar4) {
      lVar5 = (uVar15 & 0x3fffffff) << 2;
      do {
        if (*(int *)((int)lVar5 + *(int *)(param_1 + 0x8d8)) != 0) break;
        uVar15 = uVar15 + 1;
        lVar5 = lVar5 + 4;
      } while ((uVar15 & 0xffffffff) < (unsigned __int64)uVar4);
    }
    uVar14 = (unsigned __int64)*(unsigned int *)(param_2 + 0xd4);
    uVar13 = (unsigned __int64)*(unsigned int *)(param_2 + 0xdc);
    uVar12 = (unsigned __int64)*(unsigned int *)(param_2 + 0xe4);
    lVar8 = (__int64)(*(int *)(param_1 + 0x568) >> 1) * (__int64)*(int *)(param_1 + 0x6de4) +
            ((__int64)(int)uVar2 * (__int64)*(int *)(param_1 + 0x568) & 0x1fffffffU) * 8;
    lVar5 = (unsigned __int64)*(unsigned int *)(param_1 + 0x4a98) + lVar8;
    lVar11 = (__int64)((int)uVar3 >> 1) * (__int64)*(int *)(param_1 + 0x6de4) +
             ((__int64)(int)uVar3 * (__int64)(int)uVar2 & 0xfffffffU) * 0x10 +
             (unsigned __int64)*(unsigned int *)(param_1 + 0x4a94);
    lVar8 = (unsigned __int64)*(unsigned int *)(param_1 + 0x4a9c) + lVar8;
    uVar7 = uVar15 - uVar7;
    while (uVar7 != 0) {
      fn_82F23F28(param_1,lVar11 + ((unsigned __int64)uVar3 & 0x3fffffff) * 4,lVar5 + lVar10,
                    lVar8 + lVar10,(uVar7 & 0x7fffffff) << 1,uVar14,uVar13,uVar12);
      iVar17 = (int)uVar7;
      uVar2 = *(unsigned int *)(param_2 + 0x10c);
      lVar6 = (__int64)iVar17 * (__int64)(int)(iVar1 + 3U >> 2);
      uVar14 = (__int64)iVar17 * (__int64)(int)(iVar1 + 1U & 0xfffffffe) + uVar14;
      lVar9 = ((__int64)iVar17 * (__int64)*(int *)(param_1 + 0x568) & 0x1fffffffU) * 8;
      uVar13 = lVar6 + uVar13;
      uVar12 = lVar6 + uVar12;
      lVar11 = ((__int64)iVar17 * (__int64)*(int *)(param_1 + 0x564) & 0xfffffffU) * 0x10 + lVar11
      ;
      lVar5 = lVar9 + lVar5;
      lVar8 = lVar9 + lVar8;
      uVar16 = uVar15;
      if (((uVar15 & 0xffffffff) < (unsigned __int64)uVar2) &&
         (uVar16 = uVar15 + 1, (uVar16 & 0xffffffff) < (unsigned __int64)uVar2)) {
        lVar6 = (uVar16 & 0x3fffffff) << 2;
        do {
          if (*(int *)((int)lVar6 + *(int *)(param_1 + 0x8d8)) != 0) break;
          uVar16 = uVar16 + 1;
          lVar6 = lVar6 + 4;
        } while ((uVar16 & 0xffffffff) < (unsigned __int64)uVar2);
      }
      uVar7 = uVar16 - uVar15;
      uVar15 = uVar16;
    }
  }
  return;
}

