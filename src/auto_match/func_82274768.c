void fn_82274768(int param_1)

{
  int *piVar1;
  int iVar2;
  unsigned int *puVar3;
  int *piVar4;
  int iVar5;
  int *piVar7;
  int *piVar8;
  unsigned int uVar9;
  __int64 lVar6;
  
  if (*(int *)(param_1 + 0x54) != 0) {
    do {
      iVar5 = 0;
      if (*(int **)(param_1 + 0x44) != (int *)0x0) {
        iVar5 = **(int **)(param_1 + 0x44);
      }
      uVar9 = *(unsigned int *)(param_1 + 0x50) >> 2;
      if (*(unsigned int *)(iVar5 + 8) <= uVar9) {
        uVar9 = uVar9 - *(unsigned int *)(iVar5 + 8);
      }
      puVar3 = *(unsigned int **)
                (*(int *)(*(int *)(iVar5 + 4) + uVar9 * 4) + (*(unsigned int *)(param_1 + 0x50) & 3) * 4);
      piVar7 = *(int **)(param_1 + 0x24);
      if (*(int **)(param_1 + 0x24) != *(int **)(param_1 + 0x28)) {
LAB_822747e8:
        piVar8 = piVar7 + 2;
        if ((unsigned int *)*piVar7 != puVar3) goto code_r0x822747f8;
        piVar1 = *(int **)(param_1 + 0x28);
        if (piVar8 != piVar1) {
          piVar7 = piVar7 + -2;
          do {
            piVar7[2] = *piVar8;
            piVar4 = piVar8 + 1;
            piVar8 = piVar8 + 2;
            piVar7[3] = *piVar4;
            piVar7 = piVar7 + 2;
          } while (piVar8 != piVar1);
        }
        iVar2 = *(int *)(param_1 + 0x28);
        for (iVar5 = iVar2 + -8; iVar5 != iVar2; iVar5 = iVar5 + 8) {
        }
        *(int *)(param_1 + 0x28) = iVar2 + -8;
        *(unsigned int *)(param_1 + 0x18) = 1;
        if (puVar3 != (unsigned int *)0x0) {
          (**(int (***)())*puVar3)(puVar3,1);
        }
      }
LAB_8227487c:
      if ((unsigned __int64)*(unsigned int *)(param_1 + 0x54) != 0) {
        uVar9 = *(int *)(param_1 + 0x50) + 1;
        *(unsigned int *)(param_1 + 0x50) = uVar9;
        if ((unsigned int)(*(int *)(param_1 + 0x4c) << 2) <= uVar9) {
          *(unsigned int *)(param_1 + 0x50) = 0;
        }
        lVar6 = (unsigned __int64)*(unsigned int *)(param_1 + 0x54) - 1;
        *(int *)(param_1 + 0x54) = (int)lVar6;
        if (lVar6 == 0) {
          *(unsigned int *)(param_1 + 0x50) = 0;
        }
      }
    } while (*(int *)(param_1 + 0x54) != 0);
  }
  if (*(int *)(param_1 + 0x6c) != 0) {
    do {
      iVar5 = 0;
      if (*(int **)(param_1 + 0x5c) != (int *)0x0) {
        iVar5 = **(int **)(param_1 + 0x5c);
      }
      uVar9 = *(unsigned int *)(param_1 + 0x68) >> 2;
      if (*(unsigned int *)(iVar5 + 8) <= uVar9) {
        uVar9 = uVar9 - *(unsigned int *)(iVar5 + 8);
      }
      puVar3 = *(unsigned int **)
                (*(int *)(*(int *)(iVar5 + 4) + uVar9 * 4) + (*(unsigned int *)(param_1 + 0x68) & 3) * 4);
      piVar7 = *(int **)(param_1 + 0x34);
      if (*(int **)(param_1 + 0x34) != *(int **)(param_1 + 0x38)) {
LAB_8227492c:
        piVar8 = piVar7 + 2;
        if ((unsigned int *)*piVar7 != puVar3) goto code_r0x8227493c;
        piVar1 = *(int **)(param_1 + 0x38);
        if (piVar8 != piVar1) {
          piVar7 = piVar7 + -2;
          do {
            piVar7[2] = *piVar8;
            piVar4 = piVar8 + 1;
            piVar8 = piVar8 + 2;
            piVar7[3] = *piVar4;
            piVar7 = piVar7 + 2;
          } while (piVar8 != piVar1);
        }
        iVar2 = *(int *)(param_1 + 0x38);
        for (iVar5 = iVar2 + -8; iVar5 != iVar2; iVar5 = iVar5 + 8) {
        }
        *(int *)(param_1 + 0x38) = iVar2 + -8;
        *(unsigned int *)(param_1 + 0x18) = 1;
        if (puVar3 != (unsigned int *)0x0) {
          (**(int (***)())*puVar3)(puVar3,1);
        }
      }
LAB_822749c0:
      if ((unsigned __int64)*(unsigned int *)(param_1 + 0x6c) != 0) {
        uVar9 = *(int *)(param_1 + 0x68) + 1;
        *(unsigned int *)(param_1 + 0x68) = uVar9;
        if ((unsigned int)(*(int *)(param_1 + 100) << 2) <= uVar9) {
          *(unsigned int *)(param_1 + 0x68) = 0;
        }
        lVar6 = (unsigned __int64)*(unsigned int *)(param_1 + 0x6c) - 1;
        *(int *)(param_1 + 0x6c) = (int)lVar6;
        if (lVar6 == 0) {
          *(unsigned int *)(param_1 + 0x68) = 0;
        }
      }
    } while (*(int *)(param_1 + 0x6c) != 0);
  }
  return;
code_r0x822747f8:
  piVar7 = piVar8;
  if (piVar8 == *(int **)(param_1 + 0x28)) goto LAB_8227487c;
  goto LAB_822747e8;
code_r0x8227493c:
  piVar7 = piVar8;
  if (piVar8 == *(int **)(param_1 + 0x38)) goto LAB_822749c0;
  goto LAB_8227492c;
}

