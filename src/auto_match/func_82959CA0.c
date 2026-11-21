unsigned __int64 fn_82959CA0(int param_1)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned __int64 uVar4;
  int *piVar5;
  unsigned int uVar6;
  int *piVar7;
  int *piVar8;
  
  puVar1 = *(unsigned int **)(param_1 + 0x104);
  *(unsigned int *)(param_1 + 0x160) = 0;
  uVar2 = *puVar1;
  if ((uVar2 & 0xfff00000) == 0x20500000) {
    piVar5 = (int *)puVar1[2];
    iVar3 = *(int *)(param_1 + 0x14);
    piVar8 = piVar5 + (uVar2 & 0xfffff);
    piVar7 = piVar8;
    if (((*(unsigned int *)(*(int *)(*(int *)(*(int *)(*piVar5 * 4 + iVar3) + 4) * 4 +
                            *(int *)(param_1 + 0x10)) + 4) & 0x100) == 0) &&
       (piVar7 = piVar5, piVar5 = piVar8,
       (*(unsigned int *)(*(int *)(*(int *)(*(int *)(*piVar8 * 4 + iVar3) + 4) * 4 +
                          *(int *)(param_1 + 0x10)) + 4) & 0x100) == 0)) {
      return 1;
    }
    uVar6 = 0;
    if ((uVar2 & 0xfffff) != 0) {
      piVar8 = piVar5;
      do {
        if (*(double *)
             (*(int *)(*(int *)(((int)piVar7 - (int)piVar5) + (int)piVar8) * 4 + iVar3) + 0x20) !=
            2.0) {
          return 1;
        }
        if (((*(unsigned int *)(*(int *)(*piVar8 * 4 + iVar3) + 0x3c) & 0x1f0000) != 0x20000) &&
           ((*(unsigned int *)(param_1 + 0x6c) & 0x800) != 0)) {
          return 1;
        }
        uVar6 = uVar6 + 1;
        piVar8 = piVar8 + 1;
      } while (uVar6 < (uVar2 & 0xfffff));
    }
  }
  else {
    if ((uVar2 & 0xfff00000) != 0x20400000) {
      return 1;
    }
    piVar5 = (int *)puVar1[2];
    uVar6 = 0;
    piVar7 = piVar5;
    if ((uVar2 & 0xfffff) != 0) {
      do {
        if (*piVar7 != piVar7[uVar2 & 0xfffff]) {
          return 1;
        }
        if (((*(unsigned int *)(*(int *)(*piVar7 * 4 + *(int *)(param_1 + 0x14)) + 0x3c) & 0x1f0000) !=
             0x20000) && ((*(unsigned int *)(param_1 + 0x6c) & 0x800) != 0)) {
          return 1;
        }
        uVar6 = uVar6 + 1;
        piVar7 = piVar7 + 1;
      } while (uVar6 < (uVar2 & 0xfffff));
    }
  }
  uVar4 = fn_82959138(param_1,0x40000,0x20000,piVar5,0x40000,0,0);
  return uVar4;
}
