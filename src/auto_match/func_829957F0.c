typedef unsigned char bool;
extern int fn_82975B00();


unsigned __int64 fn_829957F0(int param_1,int *param_2,unsigned __int64 param_3,unsigned __int64 param_4,unsigned int *param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  unsigned int uVar5;
  unsigned __int64 uVar6;
  int *piVar7;
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
  uVar6 = (unsigned __int64)bVar4;
  if ((param_4 & 0x20000) != 0) {
    uVar6 = uVar6 + 1;
    aiStack_40[bVar4] = 1;
  }
  if ((param_4 & 0x40000) != 0) {
    lVar10 = uVar6 << 2;
    uVar6 = uVar6 + 1;
    *(unsigned int *)((int)aiStack_40 + (int)lVar10) = 2;
  }
  if ((param_4 & 0x80000) != 0) {
    lVar10 = uVar6 << 2;
    uVar6 = uVar6 + 1;
    *(unsigned int *)((int)aiStack_40 + (int)lVar10) = 3;
  }
  if (uVar6 < (param_3 & 0xffffffff)) {
    param_3 = uVar6;
  }
  uVar5 = *(unsigned int *)(param_1 + 0x6c) << 2 | *(unsigned int *)(param_1 + 0x6c) >> 0x1e;
  if ((int)uVar5 < 0) {
    aiStack_30[2] = -1;
    aiStack_30[3] = -1;
  }
  else {
    uVar6 = 0;
    if ((param_3 & 0xffffffff) != 0) {
      piVar7 = param_2;
      do {
        if (*(int *)(*(int *)(*(int *)(param_1 + 0x14) + iVar8 * 4) + 0x10) !=
            *(int *)(*(int *)(*piVar7 * 4 + *(int *)(param_1 + 0x14)) + 0x10)) break;
        uVar6 = uVar6 + 1;
        piVar7 = piVar7 + 1;
      } while ((uVar6 & 0xffffffff) < (param_3 & 0xffffffff));
      if ((uVar6 & 0xffffffff) < (param_3 & 0xffffffff)) {
        piVar7 = aiStack_40 + 3;
        iVar8 = 0;
        lVar10 = 4;
        do {
          piVar7 = piVar7 + 1;
          *piVar7 = iVar8;
          iVar8 = iVar8 + 1;
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
        goto LAB_82995954;
      }
    }
    iVar8 = *(int *)(iVar2 + 0x10);
    piVar7 = aiStack_40 + 3;
    lVar10 = 4;
    do {
      piVar7 = piVar7 + 1;
      *piVar7 = iVar8;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
LAB_82995954:
  if ((param_3 & 0xffffffff) != 0) {
    piVar7 = aiStack_40;
    do {
      piVar3 = (int *)(((int)param_2 - (int)aiStack_40) + (int)piVar7);
      iVar8 = *piVar7;
      piVar7 = piVar7 + 1;
      aiStack_30[iVar8] = *(int *)(*(int *)(*piVar3 * 4 + iVar1) + 0x10);
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  if (-1 < (int)uVar5) {
    piVar7 = aiStack_30;
LAB_82995a2c:
    uVar5 = 0;
    uVar9 = 0x10;
    piVar7 = piVar7 + -1;
    lVar10 = 4;
    do {
      piVar7 = piVar7 + 1;
      uVar5 = *piVar7 << (uVar9 & 0x3f) | uVar5;
      uVar9 = uVar9 + 2;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    *param_5 = uVar5;
    return 0;
  }
  iVar8 = 0;
  uVar5 = 0;
  do {
    uVar9 = 0;
    piVar7 = aiStack_30;
    while ((*piVar7 == -1 || (*piVar7 == *(int *)((uVar5 + uVar9) * 4 + -0x7cea42d8)))) {
      uVar9 = uVar9 + 1;
      piVar7 = piVar7 + 1;
      if (3 < uVar9) {
        piVar7 = (int *)(iVar8 * 0x10 + -0x7cea42d8);
        if (piVar7 != (int *)0x0) goto LAB_82995a2c;
        goto LAB_829959f0;
      }
    }
    uVar5 = uVar5 + 4;
    iVar8 = iVar8 + 1;
  } while (uVar5 < 0x20);
LAB_829959f0:
  fn_82975B00(param_1,*(unsigned int *)(*(int *)(param_1 + 0x104) + 0x3c),0x12d2,0xffffffff8204fd98)
  ;
  return 0xffffffff80004005;
}

