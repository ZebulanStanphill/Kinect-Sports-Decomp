extern int fn_829632F0();
extern int fn_829640A0();
extern int fn_82964628();
extern int fn_829646C8();
extern unsigned int lbl_82005710;


unsigned __int64 fn_8294BDC8(int param_1)

{
  int *piVar1;
  int iVar4;
  unsigned __int64 uVar2;
  int iVar5;
  unsigned __int64 uVar3;
  unsigned int *puVar6;
  unsigned __int64 uVar7;
  unsigned int uVar8;
  unsigned __int64 uVar9;
  __int64 lVar10;
  int iVar11;
  
  iVar4 = *(int *)(param_1 + 0x14);
  piVar1 = *(int **)(*(int *)(param_1 + 0x104) + 0x10);
  iVar5 = *(int *)(*piVar1 * 4 + iVar4);
  if ((((*(unsigned int *)(*(int *)(*(int *)(iVar5 + 4) * 4 + *(int *)(param_1 + 0x10)) + 4) & 1) == 0) ||
      (*(int *)(iVar5 + 0x3c) != 0)) || (*(int *)(*(int *)(piVar1[1] * 4 + iVar4) + 0x3c) != 0)) {
    uVar9 = 0;
    uVar8 = 0;
    if (*(unsigned int *)(param_1 + 8) != 0) {
      iVar5 = 0;
      do {
        if ((*(int *)(param_1 + 0x88) == *(int *)(*(int *)(iVar5 + iVar4) + 4)) &&
           (uVar7 = (unsigned __int64)*(unsigned int *)(*(int *)(iVar5 + iVar4) + 0xc),
           (uVar9 & 0xffffffff) <= uVar7)) {
          uVar9 = uVar7 + 1;
        }
        uVar8 = uVar8 + 1;
        iVar5 = iVar5 + 4;
      } while (uVar8 < *(unsigned int *)(param_1 + 8));
    }
    iVar4 = fn_829646C8(param_1,0x10000004,4,4);
    if (iVar4 == -1) {
      return 0xffffffff8007000e;
    }
    iVar4 = *(int *)(iVar4 * 4 + *(int *)(param_1 + 0x18));
    uVar2 = fn_829632F0(iVar4,*(unsigned int *)(param_1 + 0x104));
    if ((int)uVar2 < 0) {
      return uVar2;
    }
    lVar10 = 0;
    uVar8 = 0;
    uVar2 = lbl_82005710;
    do {
      iVar5 = fn_82964628(uVar2,param_1,*(unsigned int *)(param_1 + 0x88),uVar9,lVar10);
      if (iVar5 == -1) {
        return 0xffffffff8007000e;
      }
      iVar11 = iVar5 * 4;
      uVar3 = fn_829640A0(*(unsigned int *)(iVar11 + *(int *)(param_1 + 0x14)),
                           *(unsigned int *)
                            (*(int *)(*(int *)(*(int *)(param_1 + 0x104) + 0x10) + uVar8) * 4 +
                            *(int *)(param_1 + 0x14)));
      if ((int)uVar3 < 0) {
        return uVar3;
      }
      lVar10 = lVar10 + 1;
      *(unsigned int *)(*(int *)(iVar11 + *(int *)(param_1 + 0x14)) + 0x18) =
           *(unsigned int *)
            (*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x104) + 0x10) + uVar8) * 4 +
                     *(int *)(param_1 + 0x14)) + 0x18);
      *(unsigned int *)(*(int *)(iVar11 + *(int *)(param_1 + 0x14)) + 0x14) =
           *(unsigned int *)
            (*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x104) + 0x10) + uVar8) * 4 +
                     *(int *)(param_1 + 0x14)) + 0x14);
      *(unsigned int *)(*(int *)(iVar4 + 0x10) + uVar8) =
           *(unsigned int *)(*(int *)(*(int *)(param_1 + 0x104) + 0x10) + uVar8);
      *(int *)(*(int *)(*(int *)(param_1 + 0x104) + 0x10) + uVar8) = iVar5;
      *(int *)(*(int *)(iVar4 + 8) + uVar8) = iVar5;
      uVar8 = uVar8 + 4;
    } while (uVar8 < 0x10);
    uVar8 = *(int *)(param_1 + 0xc) - 2;
    if (*(unsigned int *)(param_1 + 0x100) < uVar8) {
      iVar5 = uVar8 * 4;
      do {
        uVar8 = uVar8 - 1;
        puVar6 = (unsigned int *)(*(int *)(param_1 + 0x18) + iVar5);
        iVar5 = iVar5 + -4;
        puVar6[1] = *puVar6;
      } while (*(unsigned int *)(param_1 + 0x100) < uVar8);
    }
    *(int *)((*(int *)(param_1 + 0x100) + 1) * 4 + *(int *)(param_1 + 0x18)) = iVar4;
  }
  *(unsigned int *)(param_1 + 400) = 1;
  return 0;
}

