extern int fn_82CA8A18();


void fn_82CA8DB8(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6, __int64 param_7, __int64 param_8, unsigned int in_stack_00000054, unsigned int in_stack_0000005c, int in_stack_00000064, int in_stack_0000006c, int in_stack_00000074)

{
  unsigned char *pbVar1;
  unsigned __int64 uVar2;
  int iVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  int iVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  __int64 lVar9;
  unsigned __int64 uVar10;





  
  if (0 < (int)param_8) {
    param_4 = param_4 - param_1;
    do {
      iVar6 = 0;
      if (0 < (int)param_7) {
        puVar4 = (unsigned int *)(in_stack_00000074 + -4);
        lVar9 = param_7;
        do {
          pbVar1 = (unsigned char *)(iVar6 + param_1);
          iVar6 = iVar6 + 1;
          puVar4 = puVar4 + 1;
          *puVar4 = (unsigned int)*pbVar1;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
      in_stack_00000074 = fn_82CA8A18();
      iVar6 = 0;
      if (0 < (int)param_7) {
        puVar5 = (unsigned int *)(in_stack_00000074 + -4);
        lVar9 = param_7;
        iVar3 = param_4;
        do {
          puVar5 = puVar5 + 1;
          iVar6 = iVar6 + 1;
          *(char *)(iVar3 + param_1) = (char)*puVar5;
          iVar3 = param_4 + iVar6;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
      param_8 = param_8 + -1;
      param_1 = param_1 + in_stack_00000064;
    } while (param_8 != 0);
  }
  uVar8 = (unsigned __int64)in_stack_0000005c;
  uVar2 = (unsigned __int64)in_stack_00000054;
  if (0 < (int)in_stack_0000005c) {
    param_5 = param_5 - param_2;
    uVar7 = uVar8;
    do {
      iVar6 = 0;
      if (0 < (int)uVar2) {
        puVar4 = (unsigned int *)(in_stack_00000074 + -4);
        uVar10 = uVar2;
        do {
          pbVar1 = (unsigned char *)(iVar6 + param_2);
          iVar6 = iVar6 + 1;
          puVar4 = puVar4 + 1;
          *puVar4 = (unsigned int)*pbVar1;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      in_stack_00000074 = fn_82CA8A18();
      iVar6 = 0;
      if (0 < (int)uVar2) {
        puVar5 = (unsigned int *)(in_stack_00000074 + -4);
        uVar10 = uVar2;
        iVar3 = param_5;
        do {
          puVar5 = puVar5 + 1;
          iVar6 = iVar6 + 1;
          *(char *)(iVar3 + param_2) = (char)*puVar5;
          iVar3 = param_5 + iVar6;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      uVar7 = uVar7 - 1;
      param_2 = param_2 + in_stack_0000006c;
    } while (uVar7 != 0);
  }
  if (0 < (int)in_stack_0000005c) {
    param_6 = param_6 - param_3;
    do {
      iVar6 = 0;
      if (0 < (int)uVar2) {
        puVar4 = (unsigned int *)(in_stack_00000074 + -4);
        uVar7 = uVar2;
        do {
          pbVar1 = (unsigned char *)(iVar6 + param_3);
          iVar6 = iVar6 + 1;
          puVar4 = puVar4 + 1;
          *puVar4 = (unsigned int)*pbVar1;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      in_stack_00000074 = fn_82CA8A18();
      iVar6 = 0;
      if (0 < (int)uVar2) {
        puVar5 = (unsigned int *)(in_stack_00000074 + -4);
        uVar7 = uVar2;
        iVar3 = param_6;
        do {
          puVar5 = puVar5 + 1;
          iVar6 = iVar6 + 1;
          *(char *)(iVar3 + param_3) = (char)*puVar5;
          iVar3 = param_6 + iVar6;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      uVar8 = uVar8 - 1;
      param_3 = param_3 + in_stack_0000006c;
    } while (uVar8 != 0);
  }
  return;
}

