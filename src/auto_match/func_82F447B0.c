extern int fn_83148440();
extern unsigned int iStack_a0;


void fn_82F447B0(int param_1,__int64 param_2,unsigned __int64 param_3)

{
  int iVar1;
  int iVar2;
  __int64 lVar3;
  __int64 lVar4;
  __int64 lVar5;
  __int64 lVar6;
  __int64 lVar7;
  __int64 lVar8;
  __int64 lVar9;
  __int64 lVar10;
  __int64 lVar11;
  unsigned __int64 uVar12;
  __int64 lVar13;
  __int64 lVar14;
  __int64 lVar15;
  __int64 lVar16;
  __int64 lVar17;
  __int64 lVar18;
  unsigned __int64 uVar19;
  int iStack_a0;
  
  if (*(int *)(param_1 + 0x5c8) == 0) {
    iVar2 = (int)param_2;
    lVar13 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x2d0) & 0x3fffffff) * 4;
    uVar12 = lVar13 + 0x10;
    uVar19 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x2d0) + 4 & 0x3fffffff) << 2;
    lVar5 = ((__int64)iVar2 * (__int64)*(int *)(param_1 + 0x564) & 0xfffffffU) * 0x10;
    lVar4 = ((__int64)(int)uVar12 * (__int64)iVar2 & 0x3fffffffU) * 4;
    lVar7 = ((__int64)*(int *)(param_1 + 0x568) * (__int64)iVar2 & 0x1fffffffU) * 8;
    lVar6 = ((__int64)(int)uVar19 * (__int64)iVar2 & 0x1fffffffU) * 8;
    lVar10 = (unsigned __int64)*(unsigned int *)(param_1 + 0x1c) + lVar7;
    lVar9 = (unsigned __int64)*(unsigned int *)(param_1 + 0x1e80) + lVar7;
    lVar11 = (unsigned __int64)*(unsigned int *)(param_1 + 0x18) + lVar7;
    lVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 0x14) + lVar5;
    lVar5 = (unsigned __int64)*(unsigned int *)(param_1 + 0x1e7c) + lVar5;
    lVar7 = (unsigned __int64)*(unsigned int *)(param_1 + 0x1e84) + lVar7;
    iStack_a0 = *(int *)(param_1 + 0x1a98) + (int)lVar4;
    lVar16 = (unsigned __int64)*(unsigned int *)(param_1 + 0x1aa4) + lVar6;
    lVar15 = (unsigned __int64)*(unsigned int *)(param_1 + 0x1aa8) + lVar6;
    lVar4 = (unsigned __int64)*(unsigned int *)(param_1 + 0x1a94) + lVar4;
    lVar14 = (unsigned __int64)*(unsigned int *)(param_1 + 0x1ab4) + lVar6;
    lVar6 = (unsigned __int64)*(unsigned int *)(param_1 + 0x1ab8) + lVar6;
    lVar17 = ((unsigned __int64)(unsigned int)((int)param_3 - iVar2) & 0xfffffff) * 0x10;
    if (iVar2 == 0) {
      lVar17 = lVar17 + 0x20;
    }
    else {
      lVar18 = (uVar12 & 0x1fffffff) * 8;
      lVar8 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x564) & 0x7ffffff) * 0x20;
      iStack_a0 = (int)lVar18 + iStack_a0;
      lVar4 = lVar18 + lVar4;
      lVar3 = lVar8 + lVar3;
      lVar5 = lVar8 + lVar5;
      if (*(int *)(param_1 + 0x6d8c) != 0) {
        lVar18 = (uVar19 & 0xfffffff) * 0x10;
        lVar8 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x568) & 0xfffffff) * 0x10;
        lVar16 = lVar18 + lVar16;
        lVar11 = lVar8 + lVar11;
        lVar10 = lVar8 + lVar10;
        lVar9 = lVar8 + lVar9;
        lVar7 = lVar8 + lVar7;
        lVar15 = lVar18 + lVar15;
        lVar14 = lVar18 + lVar14;
        lVar6 = lVar18 + lVar6;
      }
    }
    lVar18 = lVar17;
    if (((param_3 & 0xffffffff) == (unsigned __int64)*(unsigned int *)(param_1 + 0x2d4)) &&
       (lVar18 = lVar17 + 0x20, *(int *)(param_1 + 800) < (int)((param_3 & 0xffffffff) << 4))) {
      param_3 = param_3 - 1;
      lVar18 = lVar17 + 0x10;
    }
    (**(int (***)())(param_1 + 0x1bac))
              (lVar3,*(unsigned int *)(param_1 + 0x564),*(unsigned int *)(param_1 + 0x564),lVar4,uVar12,
               lVar18);
    iVar1 = *(int *)(param_1 + 0x31c);
    (**(int (***)())(param_1 + 0x1bac))
              (((__int64)iVar1 * (__int64)iVar2 & 0xfffffffU) * 0x10 +
               (unsigned __int64)*(unsigned int *)(param_1 + 0x1abc),iVar1,iVar1,
               ((__int64)(int)lVar13 * (__int64)iVar2 & 0x3fffffffU) * 4 +
               (unsigned __int64)*(unsigned int *)(param_1 + 0x1a90),lVar13,(param_3 - param_2 & 0xfffffff) << 4);
    iVar2 = (int)lVar18 >> 1;
    if (*(int *)(param_1 + 0x6d8c) != 0) {
      (**(int (***)())(param_1 + 0x1bb0))
                (lVar11,*(unsigned int *)(param_1 + 0x568),*(unsigned int *)(param_1 + 0x568),lVar16,
                 uVar19,iVar2);
      (**(int (***)())(param_1 + 0x1bb0))
                (lVar10,*(unsigned int *)(param_1 + 0x568),*(unsigned int *)(param_1 + 0x568),lVar15,
                 uVar19,iVar2);
    }
    if ((*(int *)(param_1 + 0xaf0) == 2) &&
       ((**(int (***)())(param_1 + 0x1bac))
                  (lVar5,*(unsigned int *)(param_1 + 0x564),*(unsigned int *)(param_1 + 0x564),iStack_a0
                   ,uVar12,lVar18), *(int *)(param_1 + 0x6d8c) != 0)) {
      (**(int (***)())(param_1 + 0x1bb0))
                (lVar9,*(unsigned int *)(param_1 + 0x568),*(unsigned int *)(param_1 + 0x568),lVar14,
                 uVar19,iVar2);
      (**(int (***)())(param_1 + 0x1bb0))
                (lVar7,*(unsigned int *)(param_1 + 0x568),*(unsigned int *)(param_1 + 0x568),lVar6,
                 uVar19,iVar2);
    }
  }
  else {
    fn_83148440(*(unsigned int *)(param_1 + 0x14),*(int *)(param_1 + 0x564),
                      *(unsigned int *)(param_1 + 0x56c),*(unsigned int *)(param_1 + 0x5d0),
                      *(unsigned int *)(param_1 + 0x5d4),*(unsigned int *)(param_1 + 0x5d8),
                      *(int *)(param_1 + 0x564) >> 1);
  }
  return;
}

