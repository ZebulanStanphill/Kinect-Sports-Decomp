void fn_82CA9D58(int param_1, int param_2, int param_3, __int64 param_4, unsigned __int64 param_5, __int64 param_6, __int64 param_7, unsigned int param_8, int in_stack_00000054, int in_stack_0000005c)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  unsigned int *puVar4;
  __int64 lVar5;
  int iVar6;
  unsigned char *pbVar7;
  unsigned char *puVar8;
  int *piVar9;
  unsigned int *puVar10;
  __int64 lVar11;
  unsigned __int64 uVar12;


  
  iVar6 = (int)param_7;
  if (0 < (int)param_4) {
    iVar3 = (int)param_5;
    do {
      if (0 < iVar3) {
        puVar4 = (unsigned int *)(in_stack_0000005c + -8);
        lVar11 = ((param_5 - 1 & 0xffffffff) >> 1) + 1;
        pbVar7 = (unsigned char *)(param_1 + (param_8 & 0x7fffffff) * -2);
        do {
          pbVar7 = pbVar7 + param_8 * 2;
          puVar4 = puVar4 + 2;
          *puVar4 = (unsigned int)*pbVar7;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
      }
      if (1 < iVar3 + -1) {
        piVar9 = (int *)(in_stack_0000005c + -4);
        lVar11 = ((param_5 - 3 & 0xffffffff) >> 1) + 1;
        do {
          piVar1 = piVar9 + 1;
          piVar2 = piVar9 + 3;
          piVar9 = piVar9 + 2;
          *piVar9 = *piVar2 + *piVar1 >> 1;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
      }
      *(unsigned int *)((int)((param_5 & 0xffffffff) << 2) + in_stack_0000005c + -4) =
           *(unsigned int *)((int)((param_5 - 2 & 0xffffffff) << 2) + in_stack_0000005c);
      if (0 < iVar3) {
        puVar10 = (unsigned int *)(in_stack_0000005c + -4);
        puVar8 = (unsigned char *)(param_1 - param_8);
        uVar12 = param_5;
        do {
          puVar10 = puVar10 + 1;
          puVar8 = puVar8 + param_8;
          *puVar8 = (char)*puVar10;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      param_4 = param_4 + -1;
      param_1 = param_1 + 1;
    } while (param_4 != 0);
  }
  if (0 < (int)param_6) {
    lVar11 = param_6;
    do {
      if (0 < iVar6) {
        puVar4 = (unsigned int *)(in_stack_0000005c + -8);
        lVar5 = ((param_7 - 1U & 0xffffffff) >> 1) + 1;
        pbVar7 = (unsigned char *)(param_2 + in_stack_00000054 * -2);
        do {
          pbVar7 = pbVar7 + in_stack_00000054 * 2;
          puVar4 = puVar4 + 2;
          *puVar4 = (unsigned int)*pbVar7;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
      if (1 < iVar6 + -1) {
        piVar9 = (int *)(in_stack_0000005c + -4);
        lVar5 = (unsigned __int64)(iVar6 - 3U >> 1) + 1;
        do {
          piVar1 = piVar9 + 1;
          piVar2 = piVar9 + 3;
          piVar9 = piVar9 + 2;
          *piVar9 = *piVar2 + *piVar1 >> 1;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
      *(unsigned int *)(iVar6 * 4 + in_stack_0000005c + -4) =
           *(unsigned int *)((iVar6 + -2) * 4 + in_stack_0000005c);
      if (0 < iVar6) {
        puVar10 = (unsigned int *)(in_stack_0000005c + -4);
        puVar8 = (unsigned char *)(param_2 - in_stack_00000054);
        lVar5 = param_7;
        do {
          puVar10 = puVar10 + 1;
          puVar8 = puVar8 + in_stack_00000054;
          *puVar8 = (char)*puVar10;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
      lVar11 = lVar11 + -1;
      param_2 = param_2 + 1;
    } while (lVar11 != 0);
    if (0 < (int)param_6) {
      do {
        if (0 < iVar6) {
          puVar4 = (unsigned int *)(in_stack_0000005c + -8);
          lVar11 = ((param_7 - 1U & 0xffffffff) >> 1) + 1;
          pbVar7 = (unsigned char *)(param_3 + in_stack_00000054 * -2);
          do {
            pbVar7 = pbVar7 + in_stack_00000054 * 2;
            puVar4 = puVar4 + 2;
            *puVar4 = (unsigned int)*pbVar7;
            lVar11 = lVar11 + -1;
          } while (lVar11 != 0);
        }
        if (1 < iVar6 + -1) {
          piVar9 = (int *)(in_stack_0000005c + -4);
          lVar11 = (unsigned __int64)(iVar6 - 3U >> 1) + 1;
          do {
            piVar1 = piVar9 + 1;
            piVar2 = piVar9 + 3;
            piVar9 = piVar9 + 2;
            *piVar9 = *piVar2 + *piVar1 >> 1;
            lVar11 = lVar11 + -1;
          } while (lVar11 != 0);
        }
        *(unsigned int *)(iVar6 * 4 + in_stack_0000005c + -4) =
             *(unsigned int *)((iVar6 + -2) * 4 + in_stack_0000005c);
        if (0 < iVar6) {
          puVar10 = (unsigned int *)(in_stack_0000005c + -4);
          puVar8 = (unsigned char *)(param_3 - in_stack_00000054);
          lVar11 = param_7;
          do {
            puVar10 = puVar10 + 1;
            puVar8 = puVar8 + in_stack_00000054;
            *puVar8 = (char)*puVar10;
            lVar11 = lVar11 + -1;
          } while (lVar11 != 0);
        }
        param_6 = param_6 + -1;
        param_3 = param_3 + 1;
      } while (param_6 != 0);
    }
  }
  return;
}

