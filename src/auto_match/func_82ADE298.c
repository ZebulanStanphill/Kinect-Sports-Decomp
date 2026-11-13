extern int fn_82ABE9F0();
extern int fn_82AC6808();


void fn_82ADE298(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int iVar1;
  int iVar2;
  unsigned __int64 *puVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned __int64 *puVar7;
  __int64 lVar8;
  __int64 lVar9;
  unsigned int uVar10;
  unsigned __int64 *puVar11;
  __int64 lVar12;
  
  lVar8 = param_3 * 0x28 + (unsigned __int64)*(unsigned int *)(param_1 + 0x2a4);
  lVar12 = 4;
  lVar9 = param_2 * 0x28 + (unsigned __int64)*(unsigned int *)(param_1 + 0x2a4);
  do {
    lVar9 = lVar9 + 8;
    iVar1 = (int)lVar8;
    lVar8 = lVar8 + 8;
    *(unsigned __int64 *)lVar8 = *(unsigned __int64 *)lVar9 | *(unsigned __int64 *)(iVar1 + 8);
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  iVar1 = *(int *)(param_1 + 0x2ac);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x2a0);
    uVar10 = iVar2 * (int)param_3 * 8 + iVar1;
    uVar6 = iVar2 * 8 + uVar10;
    if (uVar10 < uVar6) {
      puVar11 = (unsigned __int64 *)(uVar10 - 8);
      puVar7 = (unsigned __int64 *)(iVar2 * (int)param_2 * 8 + iVar1 + -8);
      lVar9 = (unsigned __int64)((uVar6 - uVar10) - 1 >> 3) + 1;
      do {
        puVar3 = puVar11 + 1;
        puVar7 = puVar7 + 1;
        puVar11 = puVar11 + 1;
        *puVar11 = *puVar3 | *puVar7;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
  }
  iVar1 = (int)((param_3 & 0x3fffffff) << 2);
  if (*(int *)(*(int *)(param_1 + 0x2a8) + iVar1) == 0) {
    iVar2 = (int)((param_2 & 0x3fffffff) << 2);
    if (*(unsigned int *)(iVar2 + *(int *)(param_1 + 0x2a8)) < 0x10000) {
      uVar5 = fn_82ABE9F0(param_1,*(int *)(param_1 + 0x2a0) << 3,0);
      *(unsigned int *)(*(int *)(param_1 + 0x2a8) + iVar1) = uVar5;
    }
    else {
      *(unsigned int *)(*(int *)(param_1 + 0x2a8) + iVar1) =
           *(unsigned int *)(*(int *)(param_1 + 0x2a8) + iVar2);
      *(unsigned int *)(*(int *)(param_1 + 0x2a8) + iVar2) = 0;
    }
    uVar6 = (unsigned int)((param_3 & 0xffffffff) >> 3) & 0x1ffffff8;
    iVar2 = *(int *)(*(int *)(param_1 + 0x2a8) + iVar1);
    *(unsigned __int64 *)(uVar6 + iVar2) = 1L << (param_3 & 0x3f) | *(unsigned __int64 *)(uVar6 + iVar2);
  }
  iVar2 = *(int *)(param_1 + 0x2a8);
  iVar4 = (int)((param_2 & 0x3fffffff) << 2);
  if (*(unsigned int *)(iVar4 + iVar2) < 0x10000) {
    uVar6 = (unsigned int)((param_2 & 0xffffffff) >> 3) & 0x1ffffff8;
    *(unsigned __int64 *)(uVar6 + *(int *)(iVar2 + iVar1)) =
         1L << (param_2 & 0x3f) | *(unsigned __int64 *)(uVar6 + *(int *)(iVar2 + iVar1));
  }
  else {
    uVar6 = *(unsigned int *)(iVar2 + iVar1);
    uVar10 = *(int *)(param_1 + 0x2a0) * 8 + uVar6;
    if (uVar6 < uVar10) {
      puVar11 = (unsigned __int64 *)(uVar6 - 8);
      puVar7 = (unsigned __int64 *)(*(int *)(iVar2 + iVar4) + -8);
      lVar9 = (unsigned __int64)((uVar10 - uVar6) - 1 >> 3) + 1;
      do {
        puVar3 = puVar11 + 1;
        puVar7 = puVar7 + 1;
        puVar11 = puVar11 + 1;
        *puVar11 = *puVar3 | *puVar7;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    fn_82AC6808(param_1,*(unsigned int *)(*(int *)(param_1 + 0x2a8) + iVar4),
                 *(int *)(param_1 + 0x2a0) << 3,0);
  }
  *(int *)(*(int *)(param_1 + 0x2a8) + iVar4) = (int)param_3;
  return;
}

