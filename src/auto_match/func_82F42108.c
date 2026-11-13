void fn_82F42108(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  int iVar5;
  unsigned __int64 uVar4;
  __int64 lVar6;
  __int64 lVar7;
  __int64 lVar8;
  int iVar9;
  __int64 lVar10;
  __int64 lVar11;
  __int64 lVar12;
  __int64 lVar13;
  int iVar14;
  unsigned __int64 uVar15;
  
  uVar1 = *(unsigned int *)(param_1 + 0x2d0);
  lVar13 = ((unsigned __int64)uVar1 & 0x3fffffff) * 4;
  uVar15 = lVar13 + 0x10;
  iVar5 = (int)param_2;
  lVar7 = ((__int64)*(int *)(param_1 + 0x564) * (__int64)iVar5 & 0xfffffffU) * 0x10;
  lVar6 = ((__int64)(int)uVar15 * (__int64)iVar5 & 0x3fffffffU) * 4;
  iVar3 = (int)((param_3 - param_2 & 0xfffffff) << 4);
  lVar10 = (unsigned __int64)*(unsigned int *)(param_1 + 0x14) + lVar7;
  lVar11 = (unsigned __int64)*(unsigned int *)(param_1 + 0x1a94) + lVar6;
  lVar7 = (unsigned __int64)*(unsigned int *)(param_1 + 0x1e7c) + lVar7;
  lVar6 = (unsigned __int64)*(unsigned int *)(param_1 + 0x1a98) + lVar6;
  if (iVar5 == 0) {
    iVar9 = iVar3 + 0x20;
  }
  else {
    lVar8 = (uVar15 & 0x1fffffff) * 8;
    lVar12 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x564) & 0x7ffffff) * 0x20;
    lVar11 = lVar8 + lVar11;
    lVar10 = lVar12 + lVar10;
    lVar7 = lVar12 + lVar7;
    lVar6 = lVar8 + lVar6;
    iVar9 = iVar3;
  }
  if ((param_3 & 0xffffffff) == (unsigned __int64)*(unsigned int *)(param_1 + 0x2d4)) {
    iVar9 = iVar9 + 0x20;
    iVar3 = (*(int *)(param_1 + 800) - (int)((param_3 & 0xffffffff) << 4)) + iVar3;
  }
  iVar9 = iVar9 >> 1;
  lVar12 = (uVar15 & 0x7fffffff) << 1;
  uVar2 = iVar3 >> 1 & 0xfffffffe;
  (**(int (***)())(param_1 + 0x1bac))
            (lVar10,*(int *)(param_1 + 0x564),*(int *)(param_1 + 0x564) << 1,lVar11,lVar12,iVar9);
  iVar3 = *(int *)(param_1 + 0x31c);
  iVar14 = (int)lVar13;
  lVar13 = ((unsigned __int64)uVar1 & 0x1fffffff) << 3;
  (**(int (***)())(param_1 + 0x1bac))
            (((__int64)iVar3 * (__int64)iVar5 & 0xfffffffU) * 0x10 +
             (unsigned __int64)*(unsigned int *)(param_1 + 0x1abc),iVar3,iVar3 << 1,
             ((__int64)iVar14 * (__int64)iVar5 & 0x3fffffffU) * 4 +
             (unsigned __int64)*(unsigned int *)(param_1 + 0x1a90),lVar13,uVar2);
  if (*(int *)(param_1 + 0xaf0) == 2) {
    (**(int (***)())(param_1 + 0x1bac))
              (lVar7,*(int *)(param_1 + 0x564),*(int *)(param_1 + 0x564) << 1,lVar6,lVar12,iVar9);
  }
  uVar4 = (unsigned __int64)*(unsigned int *)(param_1 + 0x564);
  (**(int (***)())(param_1 + 0x1bac))
            (uVar4 + lVar10,uVar4,*(unsigned int *)(param_1 + 0x564) << 1,lVar11 + uVar15,lVar12,iVar9);
  iVar3 = *(int *)(param_1 + 0x31c);
  (**(int (***)())(param_1 + 0x1bac))
            ((__int64)((int)((param_2 & 0xffffffff) << 4) + 1) * (__int64)iVar3 +
             (unsigned __int64)*(unsigned int *)(param_1 + 0x1abc),iVar3,iVar3 << 1,
             (__int64)((int)((param_2 & 0xffffffff) << 2) + 1) * (__int64)iVar14 +
             (unsigned __int64)*(unsigned int *)(param_1 + 0x1a90),lVar13,uVar2);
  if (*(int *)(param_1 + 0xaf0) == 2) {
    (**(int (***)())(param_1 + 0x1bac))
              (uVar4 + lVar7,*(int *)(param_1 + 0x564),*(int *)(param_1 + 0x564) << 1,lVar6 + uVar15
               ,lVar12,iVar9);
  }
  return;
}

