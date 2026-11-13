void fn_829B3AC0(int param_1,int *param_2,unsigned int *param_3)

{
  int iVar1;
  unsigned int *puVar2;
  int iVar3;
  unsigned int uVar4;
  int *piVar5;
  unsigned __int64 uVar6;
  unsigned int uVar7;
  int iVar8;
  unsigned int uVar9;
  int iVar10;
  
  uVar4 = 0;
  iVar8 = 0;
  uVar7 = 0;
  uVar9 = 0;
  if (*(int *)(param_1 + 0x38) != 0) {
    iVar10 = 0;
    do {
      iVar1 = *(int *)(iVar10 + *(int *)(param_1 + 0x3c));
      iVar3 = iVar1 * 4;
      puVar2 = *(unsigned int **)(*(int *)(*(int *)(param_1 + 4) + 0x18) + iVar3);
      *(unsigned int *)(iVar3 + *(int *)(param_1 + 0x2c)) = uVar4;
      *(unsigned int *)(*(int *)(param_1 + 0x28) + iVar3) = 0;
      if ((*puVar2 & 0xfff00000) != 0) {
        piVar5 = (int *)(*(int *)(*(int *)(param_1 + 0xc) + iVar3) * 4 + *(int *)(param_1 + 0x10));
        for (uVar6 = (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 8) + iVar3); uVar6 != 0;
            uVar6 = uVar6 - 1) {
          if (iVar1 == *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 0x14) + *piVar5 * 4) +
                               0x58)) {
            *(int *)(*(int *)(param_1 + 0x28) + iVar3) =
                 *(int *)(*(int *)(param_1 + 0x28) + iVar3) + -1;
          }
          piVar5 = piVar5 + 1;
        }
        piVar5 = (int *)(*(int *)(*(int *)(param_1 + 0x20) + iVar3) * 4 + *(int *)(param_1 + 0x24));
        for (uVar6 = (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x1c) + iVar3); uVar6 != 0;
            uVar6 = uVar6 - 1) {
          if (*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 0x14) + *piVar5 * 4) + 0x5c) != 0)
          {
            *(int *)(*(int *)(param_1 + 0x28) + iVar3) =
                 *(int *)(*(int *)(param_1 + 0x28) + iVar3) + 1;
          }
          piVar5 = piVar5 + 1;
        }
        iVar8 = iVar8 + uVar4;
        if (uVar7 < uVar4) {
          uVar7 = uVar4;
        }
        uVar4 = *(int *)(*(int *)(param_1 + 0x28) + iVar3) + uVar4;
      }
      uVar9 = uVar9 + 1;
      iVar10 = iVar10 + 4;
    } while (uVar9 < *(unsigned int *)(param_1 + 0x38));
  }
  if (param_2 != (int *)0x0) {
    *param_2 = iVar8;
  }
  if (param_3 != (unsigned int *)0x0) {
    *param_3 = uVar7;
  }
  return;
}

