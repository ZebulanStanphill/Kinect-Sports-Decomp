extern int fn_82AC8910();
extern int fn_82ADD198();


void fn_82ADDAA8(int param_1,__int64 param_2,unsigned __int64 param_3,int param_4,unsigned __int64 param_5,
                  char param_6)

{
  int iVar1;
  int iVar2;
  unsigned __int64 *puVar3;
  int iVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned __int64 *puVar8;
  unsigned int uVar10;
  __int64 lVar9;
  unsigned __int64 *puVar12;
  __int64 lVar11;
  unsigned int uVar13;
  __int64 lVar14;
  
  iVar1 = (int)param_2;
  uVar13 = *(unsigned int *)((int)((param_3 & 0xffffffff) << 2) + iVar1);
  iVar2 = (int)((param_5 & 0x3fffffff) << 2);
  uVar10 = *(int *)(param_1 + 0x2a0) * 8 + uVar13;
  if (uVar13 < uVar10) {
    puVar12 = (unsigned __int64 *)(uVar13 - 8);
    puVar8 = (unsigned __int64 *)(*(int *)(iVar2 + param_4) + -8);
    lVar9 = (unsigned __int64)((uVar10 - uVar13) - 1 >> 3) + 1;
    do {
      puVar3 = puVar12 + 1;
      puVar8 = puVar8 + 1;
      puVar12 = puVar12 + 1;
      *puVar12 = *puVar8 | *puVar3;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  uVar13 = *(unsigned int *)((int)((param_3 + 4 & 0xffffffff) << 2) + iVar1);
  uVar10 = *(int *)(param_1 + 0x2a0) * 8 + uVar13;
  if (uVar13 < uVar10) {
    puVar12 = (unsigned __int64 *)(uVar13 - 8);
    puVar8 = (unsigned __int64 *)(*(int *)((int)((param_5 + 4 & 0xffffffff) << 2) + param_4) + -8);
    lVar9 = (unsigned __int64)((uVar10 - uVar13) - 1 >> 3) + 1;
    do {
      puVar3 = puVar12 + 1;
      puVar8 = puVar8 + 1;
      puVar12 = puVar12 + 1;
      *puVar12 = *puVar3 | *puVar8;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  if ((*(unsigned int *)(param_4 + 0xc0) & 0x40000000) != 0) {
    lVar14 = 4;
    lVar11 = 0;
    lVar9 = (param_3 + 1) * 0x28 + param_2 + -8;
    do {
      uVar6 = (param_5 + 1) * 5 + lVar11;
      iVar4 = (int)lVar9;
      lVar11 = lVar11 + 1;
      lVar9 = lVar9 + 8;
      *(unsigned __int64 *)lVar9 =
           *(unsigned __int64 *)((int)((uVar6 & 0xffffffff) << 3) + param_4) | *(unsigned __int64 *)(iVar4 + 8);
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    *(unsigned int *)(iVar1 + 0xc0) = *(unsigned int *)(iVar1 + 0xc0) | 0x40000000;
  }
  if ((param_6 == '\0') &&
     (uVar6 = fn_82AC8910(*(unsigned int *)(iVar2 + param_4),0,*(unsigned int *)(param_1 + 0x2a0)),
     (uVar6 & 0xffffffff) <= (unsigned __int64)(*(int *)(param_1 + 0x29c) - 1))) {
    do {
      uVar5 = fn_82ADD198(param_1,uVar6);
      uVar13 = (unsigned int)((uVar5 & 0xffffffff) >> 2) & 0x1ffffff8;
      uVar7 = (uVar5 & 0x7fffffff) * 2 + (uVar5 & 0x7fffffe0) * -2;
      *(unsigned __int64 *)(uVar13 + *(int *)(param_1 + 0x2b4)) =
           *(unsigned __int64 *)(uVar13 + *(int *)(param_1 + 0x2b4)) & ~(3L << (uVar7 & 0x7f)) |
           ((__int64)(int)param_3 & 3U) << (uVar7 & 0x7f);
      *(int *)((int)((uVar5 & 0xffffffff) << 2) + *(int *)(param_1 + 0x2b0)) = iVar1;
      uVar13 = *(int *)(param_1 + 0x29c) - 1;
      if ((uVar6 & 0xffffffff) == (unsigned __int64)uVar13) {
        uVar6 = 0xffffffffffffffff;
      }
      else {
        uVar6 = fn_82AC8910(*(unsigned int *)(iVar2 + param_4),uVar6 + 1,
                             *(unsigned int *)(param_1 + 0x2a0));
      }
    } while ((uVar6 & 0xffffffff) <= (unsigned __int64)uVar13);
  }
  return;
}

