typedef unsigned char bool;


unsigned __int64 fn_82964E60(unsigned int param_1,unsigned int param_2,int param_3)

{
  bool bVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  int iVar7;
  unsigned int uVar8;
  int iVar9;
  unsigned __int64 uVar10;
  unsigned __int64 uVar11;
  __int64 lVar12;
  unsigned int uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  
  uVar10 = 0;
  uVar5 = 0;
  iVar16 = *(int *)(param_1 * 4 + *(int *)(param_3 + 0x18));
  iVar15 = *(int *)(param_2 * 4 + *(int *)(param_3 + 0x18));
  iVar7 = *(int *)(iVar16 + 0x34);
  iVar14 = *(int *)(iVar15 + 0x34);
  if (iVar7 != -1) {
    iVar9 = iVar7;
    do {
      uVar10 = uVar10 + 1;
      iVar9 = *(int *)(*(int *)(iVar9 * 4 + *(int *)(param_3 + 0x14)) + 0x14);
    } while (iVar9 != -1);
  }
  if (iVar14 != -1) {
    iVar9 = iVar14;
    do {
      uVar5 = uVar5 + 1;
      iVar9 = *(int *)(*(int *)(iVar9 * 4 + *(int *)(param_3 + 0x14)) + 0x14);
    } while (iVar9 != -1);
  }
  bVar1 = (uVar10 & 0xffffffff) < (uVar5 & 0xffffffff);
  uVar11 = uVar10;
  iVar9 = iVar7;
  if ((uVar5 & 0xffffffff) < (uVar10 & 0xffffffff)) {
    lVar12 = uVar10 - uVar5;
    do {
      uVar11 = uVar11 - 1;
      iVar9 = *(int *)(*(int *)(iVar9 * 4 + *(int *)(param_3 + 0x14)) + 0x14);
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    bVar1 = (uVar11 & 0xffffffff) < (uVar5 & 0xffffffff);
  }
  uVar6 = uVar5;
  iVar3 = iVar14;
  if (bVar1) {
    lVar12 = uVar5 - uVar11;
    do {
      uVar6 = uVar6 - 1;
      iVar3 = *(int *)(*(int *)(iVar3 * 4 + *(int *)(param_3 + 0x14)) + 0x14);
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  if (iVar9 != iVar3) {
    do {
      uVar11 = uVar11 - 1;
      uVar6 = uVar6 - 1;
      iVar9 = *(int *)(*(int *)(iVar9 * 4 + *(int *)(param_3 + 0x14)) + 0x14);
      iVar3 = *(int *)(*(int *)(iVar3 * 4 + *(int *)(param_3 + 0x14)) + 0x14);
    } while (iVar9 != iVar3);
  }
  uVar2 = param_1;
  uVar13 = param_1;
  if ((uVar11 & 0xffffffff) < (uVar10 & 0xffffffff)) {
    lVar12 = uVar10 - uVar11;
    do {
      iVar7 = *(int *)(iVar7 * 4 + *(int *)(param_3 + 0x14));
      if (*(unsigned int *)(iVar7 + 0x48) < uVar2) {
        uVar2 = *(unsigned int *)(iVar7 + 0x48);
      }
      if (uVar13 < *(unsigned int *)(iVar7 + 0x58)) {
        uVar13 = *(unsigned int *)(iVar7 + 0x58);
      }
      iVar7 = *(int *)(iVar7 + 0x14);
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  uVar8 = param_2;
  uVar4 = param_2;
  if ((uVar6 & 0xffffffff) < (uVar5 & 0xffffffff)) {
    lVar12 = uVar5 - uVar6;
    do {
      iVar7 = *(int *)(iVar14 * 4 + *(int *)(param_3 + 0x14));
      if (*(unsigned int *)(iVar7 + 0x48) < uVar8) {
        uVar8 = *(unsigned int *)(iVar7 + 0x48);
      }
      if (uVar4 < *(unsigned int *)(iVar7 + 0x58)) {
        uVar4 = *(unsigned int *)(iVar7 + 0x58);
      }
      iVar14 = *(int *)(iVar7 + 0x14);
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  if (((uVar8 <= param_1) && (param_1 <= uVar4)) || ((uVar2 <= param_2 && (param_2 <= uVar13)))) {
    if (uVar2 < uVar8) {
      return 1;
    }
    if (uVar8 < uVar2) {
      return 0xffffffffffffffff;
    }
  }
  uVar10 = 0;
  uVar5 = 0;
  iVar14 = *(int *)(**(int **)(iVar16 + 0x10) * 4 + *(int *)(param_3 + 0x14));
  iVar9 = *(int *)(**(int **)(iVar15 + 0x10) * 4 + *(int *)(param_3 + 0x14));
  iVar7 = *(int *)(iVar14 + 0x14);
  iVar15 = *(int *)(iVar9 + 0x18);
  iVar16 = *(int *)(iVar14 + 0x18);
  iVar14 = *(int *)(iVar9 + 0x14);
  if (iVar7 != -1) {
    iVar9 = iVar7;
    do {
      uVar10 = uVar10 + 1;
      iVar9 = *(int *)(*(int *)(iVar9 * 4 + *(int *)(param_3 + 0x14)) + 0x14);
    } while (iVar9 != -1);
  }
  if (iVar14 != -1) {
    iVar9 = iVar14;
    do {
      uVar5 = uVar5 + 1;
      iVar9 = *(int *)(*(int *)(iVar9 * 4 + *(int *)(param_3 + 0x14)) + 0x14);
    } while (iVar9 != -1);
  }
  bVar1 = (uVar10 & 0xffffffff) < (uVar5 & 0xffffffff);
  if ((uVar5 & 0xffffffff) < (uVar10 & 0xffffffff)) {
    lVar12 = uVar10 - uVar5;
    do {
      uVar10 = uVar10 - 1;
      iVar7 = *(int *)(iVar7 * 4 + *(int *)(param_3 + 0x14));
      iVar16 = *(int *)(iVar7 + 0x18);
      iVar7 = *(int *)(iVar7 + 0x14);
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    bVar1 = (uVar10 & 0xffffffff) < (uVar5 & 0xffffffff);
  }
  if (bVar1) {
    lVar12 = uVar5 - uVar10;
    do {
      iVar14 = *(int *)(iVar14 * 4 + *(int *)(param_3 + 0x14));
      iVar15 = *(int *)(iVar14 + 0x18);
      iVar14 = *(int *)(iVar14 + 0x14);
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  if (iVar7 != iVar14) {
    do {
      iVar16 = *(int *)(iVar7 * 4 + *(int *)(param_3 + 0x14));
      iVar15 = *(int *)(iVar14 * 4 + *(int *)(param_3 + 0x14));
      iVar7 = *(int *)(iVar16 + 0x14);
      iVar14 = *(int *)(iVar15 + 0x14);
      iVar16 = *(int *)(iVar16 + 0x18);
      iVar15 = *(int *)(iVar15 + 0x18);
    } while (iVar7 != iVar14);
  }
  if (iVar16 == 0) {
    if (iVar15 != 0) {
      return 1;
    }
  }
  else if (iVar15 == 0) {
    return 0xffffffffffffffff;
  }
  if (param_1 < param_2) {
    return 0xffffffffffffffff;
  }
  return -(unsigned __int64)(param_2 < param_1) & 1;
}

