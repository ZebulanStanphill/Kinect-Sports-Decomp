extern int fn_82CA8A18();


void fn_82CA91C8(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                  __int64 param_7,__int64 param_8)

{
  unsigned __int64 uVar1;
  unsigned int *puVar2;
  unsigned char *puVar3;
  unsigned char *pbVar4;
  unsigned int *puVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  __int64 lVar8;
  unsigned __int64 uVar9;
  unsigned int in_stack_00000054;
  unsigned int in_stack_0000005c;
  int in_stack_00000064;
  int in_stack_0000006c;
  int in_stack_00000074;
  
  if (0 < (int)param_7) {
    param_1 = param_1 - param_4;
    do {
      if (0 < (int)param_8) {
        puVar2 = (unsigned int *)(in_stack_00000074 + -4);
        pbVar4 = (unsigned char *)((param_1 - in_stack_00000064) + param_4);
        lVar8 = param_8;
        do {
          pbVar4 = pbVar4 + in_stack_00000064;
          puVar2 = puVar2 + 1;
          *puVar2 = (unsigned int)*pbVar4;
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
      }
      in_stack_00000074 = fn_82CA8A18();
      if (0 < (int)param_8) {
        puVar5 = (unsigned int *)(in_stack_00000074 + -4);
        puVar3 = (unsigned char *)(param_4 - in_stack_00000064);
        lVar8 = param_8;
        do {
          puVar5 = puVar5 + 1;
          puVar3 = puVar3 + in_stack_00000064;
          *puVar3 = (char)*puVar5;
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
      }
      param_7 = param_7 + -1;
      param_4 = param_4 + 1;
    } while (param_7 != 0);
  }
  uVar6 = (unsigned __int64)in_stack_00000054;
  uVar1 = (unsigned __int64)in_stack_0000005c;
  if (0 < (int)in_stack_00000054) {
    param_2 = param_2 - param_5;
    uVar7 = uVar6;
    do {
      if (0 < (int)uVar1) {
        puVar2 = (unsigned int *)(in_stack_00000074 + -4);
        pbVar4 = (unsigned char *)((param_2 - in_stack_0000006c) + param_5);
        uVar9 = uVar1;
        do {
          pbVar4 = pbVar4 + in_stack_0000006c;
          puVar2 = puVar2 + 1;
          *puVar2 = (unsigned int)*pbVar4;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      in_stack_00000074 = fn_82CA8A18();
      if (0 < (int)uVar1) {
        puVar5 = (unsigned int *)(in_stack_00000074 + -4);
        puVar3 = (unsigned char *)(param_5 - in_stack_0000006c);
        uVar9 = uVar1;
        do {
          puVar5 = puVar5 + 1;
          puVar3 = puVar3 + in_stack_0000006c;
          *puVar3 = (char)*puVar5;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      uVar7 = uVar7 - 1;
      param_5 = param_5 + 1;
    } while (uVar7 != 0);
    if (0 < (int)in_stack_00000054) {
      param_3 = param_3 - param_6;
      do {
        if (0 < (int)uVar1) {
          puVar2 = (unsigned int *)(in_stack_00000074 + -4);
          pbVar4 = (unsigned char *)((param_3 - in_stack_0000006c) + param_6);
          uVar7 = uVar1;
          do {
            pbVar4 = pbVar4 + in_stack_0000006c;
            puVar2 = puVar2 + 1;
            *puVar2 = (unsigned int)*pbVar4;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        in_stack_00000074 = fn_82CA8A18();
        if (0 < (int)uVar1) {
          puVar5 = (unsigned int *)(in_stack_00000074 + -4);
          puVar3 = (unsigned char *)(param_6 - in_stack_0000006c);
          uVar7 = uVar1;
          do {
            puVar5 = puVar5 + 1;
            puVar3 = puVar3 + in_stack_0000006c;
            *puVar3 = (char)*puVar5;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        uVar6 = uVar6 - 1;
        param_6 = param_6 + 1;
      } while (uVar6 != 0);
    }
  }
  return;
}

