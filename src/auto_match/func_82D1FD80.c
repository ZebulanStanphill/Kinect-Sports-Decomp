#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int iStack00000020;
extern unsigned int iStack00000024;
extern unsigned int uRam8323b6bc;
extern unsigned int uRam8323b6c0;
extern unsigned int uRam8323b6c4;


void fn_82D1FD80(int *param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned __int64 uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  int iVar11;
  unsigned int uVar12;
  __int64 lVar13;
  __int64 lVar14;
  unsigned __int64 uVar15;
  int iVar16;
  int iStack00000020;
  int iStack00000024;
  
  iStack00000020 = (int)(param_3 >> 0x20);
  iStack00000024 = (int)param_3;
  param_3 = param_3 & 0xffffffff;
  iVar16 = (int)((param_3 + 5 & 0xffffffff) << 2);
  uVar12 = *(unsigned int *)(iVar16 + iStack00000020);
  uVar5 = uVar12 & 0xfffffffc;
  uVar6 = (unsigned __int64)uVar12 & 3;
  if (uVar5 == 0) {
    uVar12 = uRam8323b6c4 & 1;
    if ((uRam8323b6c4 & 1) == 0) {
      uRam8323b6c4 = uRam8323b6c4 | 1;
      uRam8323b6c0 = 0;
      uRam8323b6bc = uVar12;
    }
    *(unsigned __int64 *)param_1 = CONCAT44(uRam8323b6bc,uRam8323b6c0);
  }
  else {
    uVar1 = *(unsigned int *)((int)(((-(unsigned __int64)(param_3 != 2) & param_3 + 1) + 5 & 0xffffffff) << 2) +
                     iStack00000020);
    uVar7 = uVar1 & 3;
    uVar1 = uVar1 & 0xfffffffc;
    lVar13 = 2;
    if (param_3 != 0) {
      lVar13 = param_3 - 1;
    }
    iVar11 = (int)uVar6;
    uVar2 = *(unsigned int *)((int)((lVar13 + 5U & 0xffffffff) << 2) + iStack00000020);
    uVar8 = uVar2 & 3;
    uVar2 = uVar2 & 0xfffffffc;
    uVar3 = *(unsigned int *)(((-(unsigned int)(uVar6 != 2) & iVar11 + 1U) + 5) * 4 + uVar5);
    uVar9 = uVar3 & 3;
    uVar3 = uVar3 & 0xfffffffc;
    lVar13 = 2;
    if ((uVar12 & 3) != 0) {
      lVar13 = uVar6 - 1;
    }
    lVar14 = 2;
    uVar4 = *(unsigned int *)((int)((lVar13 + 5U & 0xffffffff) << 2) + uVar5);
    uVar10 = uVar4 & 3;
    uVar4 = uVar4 & 0xfffffffc;
    if ((uVar12 & 3) != 0) {
      lVar14 = uVar6 - 1;
    }
    *(unsigned int *)((int)((param_3 + 2 & 0xffffffff) << 2) + iStack00000020) =
         *(unsigned int *)((int)((lVar14 + 2U & 0xffffffff) << 2) + uVar5);
    lVar13 = 2;
    if (param_3 != 0) {
      lVar13 = param_3 - 1;
    }
    lVar14 = 2;
    *(unsigned int *)((iVar11 + 2) * 4 + uVar5) =
         *(unsigned int *)((int)((lVar13 + 2U & 0xffffffff) << 2) + iStack00000020);
    if ((uVar12 & 3) != 0) {
      lVar14 = uVar6 - 1;
    }
    lVar13 = 2;
    if (param_3 != 0) {
      lVar13 = param_3 - 1;
    }
    uVar15 = -(unsigned __int64)(param_3 != 2) & param_3 + 1;
    *(unsigned int *)((int)((lVar13 + 5U & 0xffffffff) << 2) + iStack00000020) = (int)lVar14 + uVar5;
    *(int *)((int)((lVar14 + 5U & 0xffffffff) << 2) + uVar5) = (int)lVar13 + iStack00000020;
    *(unsigned int *)((int)((uVar15 + 5 & 0xffffffff) << 2) + iStack00000020) = uVar7 + uVar1;
    if (uVar1 != 0) {
      *(int *)((uVar7 + 5) * 4 + uVar1) = (int)uVar15 + iStack00000020;
    }
    *(unsigned int *)(iVar16 + iStack00000020) = uVar10 + uVar4;
    if (uVar4 != 0) {
      *(int *)((uVar10 + 5) * 4 + uVar4) = iStack00000020 + iStack00000024;
    }
    uVar12 = -(unsigned int)(uVar6 != 2) & iVar11 + 1U;
    *(unsigned int *)((uVar12 + 5) * 4 + uVar5) = uVar9 + uVar3;
    if (uVar3 != 0) {
      *(unsigned int *)((uVar9 + 5) * 4 + uVar3) = uVar12 + uVar5;
    }
    *(unsigned int *)((iVar11 + 5) * 4 + uVar5) = uVar8 + uVar2;
    if (uVar2 != 0) {
      *(unsigned int *)((uVar8 + 5) * 4 + uVar2) = iVar11 + uVar5;
    }
    iVar16 = 2;
    if (param_3 != 0) {
      iVar16 = iStack00000024 + -1;
    }
    *param_1 = iStack00000020;
    param_1[1] = iVar16;
  }
  return;
}

