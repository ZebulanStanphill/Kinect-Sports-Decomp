unsigned __int64 fn_82960C48(int param_1)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  int iVar3;
  unsigned int uVar4;
  int iVar5;
  unsigned int uVar6;
  int iVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  
  uVar8 = 0xffffffff;
  uVar4 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    iVar5 = 0;
    uVar10 = 0xffffffff;
    do {
      iVar7 = *(int *)(iVar5 + *(int *)(param_1 + 0x14));
      uVar11 = uVar10;
      if (((*(unsigned int *)(*(int *)(*(int *)(iVar7 + 4) * 4 + *(int *)(param_1 + 0x10)) + 4) & 0x10) != 0
          ) && (((iVar7 = *(int *)(iVar7 + 0x6c), iVar7 == 0x11 || (iVar7 == 0x12)) &&
                (puVar2 = *(unsigned int **)(iVar5 + *(int *)(param_1 + 0x14)), uVar9 = *puVar2,
                *puVar2 = uVar9 & 0x40000000, (uVar9 & 0x40000000) == 0)))) {
        iVar3 = *(int *)(iVar5 + *(int *)(param_1 + 0x14));
        iVar7 = *(int *)(iVar3 + 0x6c);
        uVar9 = uVar8;
        if ((iVar7 != 0x11) || (uVar9 = uVar4, uVar8 == 0xffffffff)) {
          uVar8 = uVar9;
          if ((iVar7 == 0x12) && (uVar11 = uVar4, uVar10 != 0xffffffff)) {
            *(unsigned int *)(*(int *)(iVar5 + *(int *)(param_1 + 0x14)) + 0xc) =
                 *(unsigned int *)(*(int *)(uVar10 * 4 + *(int *)(param_1 + 0x14)) + 0xc);
            uVar11 = uVar10;
          }
          else {
            uVar9 = 0xffffffff;
            uVar10 = *(unsigned int *)(iVar3 + 0xc);
            uVar6 = 0;
            if (*(int *)(param_1 + 8) != 0) {
              iVar7 = 0;
              do {
                if (((*(int *)(*(int *)(iVar5 + *(int *)(param_1 + 0x14)) + 4) ==
                      *(int *)(*(int *)(iVar7 + *(int *)(param_1 + 0x14)) + 4)) &&
                    (iVar3 = *(int *)(iVar7 + *(int *)(param_1 + 0x14)),
                    (*(unsigned int *)(*(int *)(*(int *)(iVar3 + 4) * 4 + *(int *)(param_1 + 0x10)) + 4) &
                    0x10) != 0)) && (uVar1 = *(unsigned int *)(iVar3 + 0xc), uVar10 < uVar1)) {
                  if ((int)uVar9 <= (int)uVar1) {
                    uVar9 = uVar1;
                  }
                  iVar3 = *(int *)(iVar7 + *(int *)(param_1 + 0x14));
                  *(int *)(iVar3 + 0xc) = *(int *)(iVar3 + 0xc) + -1;
                }
                uVar6 = uVar6 + 1;
                iVar7 = iVar7 + 4;
              } while (uVar6 < *(unsigned int *)(param_1 + 8));
              if (uVar9 != 0xffffffff) {
                *(unsigned int *)(*(int *)(iVar5 + *(int *)(param_1 + 0x14)) + 0xc) = uVar9;
              }
            }
          }
        }
      }
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + 4;
      uVar10 = uVar11;
    } while (uVar4 < *(unsigned int *)(param_1 + 8));
  }
  return 0;
}

