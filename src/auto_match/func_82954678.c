typedef unsigned char bool;


unsigned __int64 fn_82954678(int param_1,int *param_2,unsigned __int64 param_3,unsigned __int64 param_4,unsigned int *param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  int *piVar5;
  unsigned int uVar6;
  unsigned __int64 uVar7;
  int iVar8;
  unsigned int uVar9;
  __int64 lVar10;
  int aiStack_40 [4];
  int aiStack_30 [12];
  
  iVar8 = *param_2;
  iVar1 = *(int *)(param_1 + 0x14);
  iVar2 = *(int *)(iVar1 + iVar8 * 4);
  if ((*(unsigned int *)(*(int *)(*(int *)(iVar2 + 4) * 4 + *(int *)(param_1 + 0x10)) + 4) & 0x80) != 0) {
    *param_5 = 0xe40000;
    return 0;
  }
  bVar4 = (param_4 & 0x10000) != 0;
  if (bVar4) {
    aiStack_40[0] = 0;
  }
  uVar7 = (unsigned __int64)bVar4;
  if ((param_4 & 0x20000) != 0) {
    uVar7 = uVar7 + 1;
    aiStack_40[bVar4] = 1;
  }
  if ((param_4 & 0x40000) != 0) {
    lVar10 = uVar7 << 2;
    uVar7 = uVar7 + 1;
    *(unsigned int *)((int)aiStack_40 + (int)lVar10) = 2;
  }
  if ((param_4 & 0x80000) != 0) {
    lVar10 = uVar7 << 2;
    uVar7 = uVar7 + 1;
    *(unsigned int *)((int)aiStack_40 + (int)lVar10) = 3;
  }
  if (uVar7 < (param_3 & 0xffffffff)) {
    param_3 = uVar7;
  }
  uVar7 = 0;
  if ((param_3 & 0xffffffff) != 0) {
    piVar5 = param_2;
    do {
      if (*(int *)(*(int *)(*(int *)(param_1 + 0x14) + iVar8 * 4) + 0x10) !=
          *(int *)(*(int *)(*piVar5 * 4 + *(int *)(param_1 + 0x14)) + 0x10)) break;
      uVar7 = uVar7 + 1;
      piVar5 = piVar5 + 1;
    } while ((uVar7 & 0xffffffff) < (param_3 & 0xffffffff));
    if ((uVar7 & 0xffffffff) < (param_3 & 0xffffffff)) {
      piVar5 = aiStack_40 + 3;
      iVar8 = 0;
      lVar10 = 4;
      do {
        piVar5 = piVar5 + 1;
        *piVar5 = iVar8;
        iVar8 = iVar8 + 1;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      goto LAB_829547b4;
    }
  }
  iVar8 = *(int *)(iVar2 + 0x10);
  piVar5 = aiStack_40 + 3;
  lVar10 = 4;
  do {
    piVar5 = piVar5 + 1;
    *piVar5 = iVar8;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
LAB_829547b4:
  if ((param_3 & 0xffffffff) != 0) {
    piVar5 = aiStack_40;
    do {
      piVar3 = (int *)(((int)param_2 - (int)aiStack_40) + (int)piVar5);
      iVar8 = *piVar5;
      piVar5 = piVar5 + 1;
      aiStack_30[iVar8] = *(int *)(*(int *)(*piVar3 * 4 + iVar1) + 0x10);
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  piVar5 = aiStack_40 + 3;
  uVar6 = 0;
  uVar9 = 0x10;
  lVar10 = 4;
  do {
    piVar5 = piVar5 + 1;
    uVar6 = *piVar5 << (uVar9 & 0x3f) | uVar6;
    uVar9 = uVar9 + 2;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  *param_5 = uVar6;
  return 0;
}

