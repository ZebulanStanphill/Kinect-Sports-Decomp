void fn_82CA98E8(int param_1, int param_2, int param_3, int param_4, unsigned __int64 param_5, int param_6, __int64 param_7, int param_8, int in_stack_00000054, int in_stack_0000005c, int in_stack_00000064)

{
  unsigned char *pbVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  unsigned int *puVar6;
  int iVar7;
  unsigned int *puVar8;
  int *piVar9;
  int iVar10;
  __int64 lVar11;
  unsigned __int64 uVar12;



  
  iVar7 = (int)param_7;
  iVar10 = 0;
  if (0 < param_6) {
    iVar5 = (int)param_5;
    do {
      iVar4 = 0;
      if (0 < iVar5) {
        puVar8 = (unsigned int *)(in_stack_00000064 + -8);
        lVar11 = ((param_5 - 1 & 0xffffffff) >> 1) + 1;
        do {
          pbVar1 = (unsigned char *)(iVar4 + param_1);
          iVar4 = iVar4 + 2;
          puVar8 = puVar8 + 2;
          *puVar8 = (unsigned int)*pbVar1;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
      }
      if (1 < iVar5 + -1) {
        piVar9 = (int *)(in_stack_00000064 + -4);
        lVar11 = ((param_5 - 3 & 0xffffffff) >> 1) + 1;
        do {
          piVar2 = piVar9 + 1;
          piVar3 = piVar9 + 3;
          piVar9 = piVar9 + 2;
          *piVar9 = *piVar3 + *piVar2 >> 1;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
      }
      iVar4 = 0;
      *(unsigned int *)((int)((param_5 & 0xffffffff) << 2) + in_stack_00000064 + -4) =
           *(unsigned int *)((int)((param_5 - 2 & 0xffffffff) << 2) + in_stack_00000064);
      if (0 < iVar5) {
        puVar6 = (unsigned int *)(in_stack_00000064 + -4);
        uVar12 = param_5;
        do {
          puVar6 = puVar6 + 1;
          *(char *)(iVar4 + param_1) = (char)*puVar6;
          iVar4 = iVar4 + 1;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      iVar10 = iVar10 + param_4;
      param_1 = param_4 * in_stack_00000054 + param_1;
    } while (iVar10 < param_6);
  }
  iVar10 = 0;
  if (0 < param_8) {
    do {
      iVar5 = 0;
      if (0 < iVar7) {
        puVar8 = (unsigned int *)(in_stack_00000064 + -8);
        lVar11 = ((param_7 - 1U & 0xffffffff) >> 1) + 1;
        do {
          pbVar1 = (unsigned char *)(iVar5 + param_2);
          iVar5 = iVar5 + 2;
          puVar8 = puVar8 + 2;
          *puVar8 = (unsigned int)*pbVar1;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
      }
      if (1 < iVar7 + -1) {
        piVar9 = (int *)(in_stack_00000064 + -4);
        lVar11 = (unsigned __int64)(iVar7 - 3U >> 1) + 1;
        do {
          piVar2 = piVar9 + 1;
          piVar3 = piVar9 + 3;
          piVar9 = piVar9 + 2;
          *piVar9 = *piVar3 + *piVar2 >> 1;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
      }
      iVar5 = 0;
      *(unsigned int *)(iVar7 * 4 + in_stack_00000064 + -4) =
           *(unsigned int *)((iVar7 + -2) * 4 + in_stack_00000064);
      if (0 < iVar7) {
        puVar6 = (unsigned int *)(in_stack_00000064 + -4);
        lVar11 = param_7;
        do {
          puVar6 = puVar6 + 1;
          *(char *)(iVar5 + param_2) = (char)*puVar6;
          iVar5 = iVar5 + 1;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
      }
      iVar10 = iVar10 + param_4;
      param_2 = param_4 * in_stack_0000005c + param_2;
    } while (iVar10 < param_8);
  }
  iVar10 = 0;
  if (0 < param_8) {
    do {
      iVar5 = 0;
      if (0 < iVar7) {
        puVar8 = (unsigned int *)(in_stack_00000064 + -8);
        lVar11 = ((param_7 - 1U & 0xffffffff) >> 1) + 1;
        do {
          pbVar1 = (unsigned char *)(iVar5 + param_3);
          iVar5 = iVar5 + 2;
          puVar8 = puVar8 + 2;
          *puVar8 = (unsigned int)*pbVar1;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
      }
      if (1 < iVar7 + -1) {
        piVar9 = (int *)(in_stack_00000064 + -4);
        lVar11 = (unsigned __int64)(iVar7 - 3U >> 1) + 1;
        do {
          piVar2 = piVar9 + 3;
          piVar3 = piVar9 + 1;
          piVar9 = piVar9 + 2;
          *piVar9 = *piVar2 + *piVar3 >> 1;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
      }
      iVar5 = 0;
      *(unsigned int *)(iVar7 * 4 + in_stack_00000064 + -4) =
           *(unsigned int *)((iVar7 + -2) * 4 + in_stack_00000064);
      if (0 < iVar7) {
        puVar6 = (unsigned int *)(in_stack_00000064 + -4);
        lVar11 = param_7;
        do {
          puVar6 = puVar6 + 1;
          *(char *)(iVar5 + param_3) = (char)*puVar6;
          iVar5 = iVar5 + 1;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
      }
      iVar10 = iVar10 + param_4;
      param_3 = param_4 * in_stack_0000005c + param_3;
    } while (iVar10 < param_8);
  }
  return;
}

