extern int fn_82E9AC18();
extern int fn_82E9B140();
extern unsigned int uStack00000024;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;
extern unsigned int *uStack_b0;


void fn_82E9F460(int param_1, unsigned __int64 param_2, unsigned __int64 param_3, unsigned __int64 param_4, unsigned __int64 param_5, int param_6, __int64 param_7, __int64 param_8, int in_stack_00000054, int in_stack_0000005c, unsigned __int64 unused_arg_11, unsigned int in_stack_0000006c, unsigned __int64 unused_arg_13, unsigned __int64 unused_arg_14, int in_stack_00000084, unsigned int in_stack_0000008c, unsigned int in_stack_00000094, unsigned __int64 unused_arg_18, unsigned __int64 unused_arg_19, int in_stack_000000ac, int in_stack_000000b4)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned int uVar8;
  unsigned __int64 uVar9;
  unsigned int uVar10;
  unsigned __int64 uVar11;
  __int64 lVar12;
  unsigned __int64 uVar13;
  unsigned __int64 uVar14;
  int iVar15;
  unsigned int uStack00000024;








  unsigned int *in_stack_000000bc;
  unsigned int *in_stack_000000c4;
  int *in_stack_000000cc;
  unsigned int uStack_b0;
  unsigned int uStack_ac;
  unsigned int uStack_a8;
  
  uStack00000024 = (unsigned int)param_3;
  uVar2 = -(unsigned __int64)(in_stack_00000054 != 0);
  uVar11 = (unsigned __int64)in_stack_0000008c;
  uVar13 = 2;
  uVar4 = -(unsigned int)(param_8 != 0) & 2;
  uVar6 = -(unsigned __int64)(param_7 != 0) & 0xfffffffffffffffe;
  uVar14 = uVar2 & 0xfffffffffffffffe;
  uVar5 = -(unsigned int)(in_stack_0000005c != 0) & 2;
  iVar15 = (int)uVar14;
  uVar9 = 0;
  uVar7 = 0;
  if ((int)uVar6 < 0) {
    do {
      uVar1 = *(unsigned int *)(param_1 + 0x564);
      if ((int)uVar14 < 0) {
        do {
          if (in_stack_00000084 == 1) {
            (**(int (***)())(param_1 + 0x9b8))();
          }
          else {
            (**(int (***)())(param_1 + 0x9c0))
                      ((param_3 - uVar1) + -1,*(unsigned int *)(param_1 + 0x564),in_stack_0000006c,
                       0x10,uVar14,uVar6,in_stack_00000084,*(unsigned int *)(param_1 + 0x618));
          }
          fn_82E9AC18(param_1,param_2,0x10,in_stack_0000006c,0x10,0x10,0x10,in_stack_000000ac);
          iVar3 = fn_82E9B140(param_1,uVar14 + uVar11,uVar6 + in_stack_00000094,uStack_ac,1);
          uStack_b0 = iVar3 + uStack_b0;
          if (in_stack_000000b4 != 0) {
            uStack_b0 = uStack_b0 + 1;
          }
          iVar3 = *(int *)(in_stack_000000ac + 0x6c) * uStack_b0 + uStack_a8;
          if (iVar3 < param_6) {
            uVar7 = uVar6;
            uVar9 = uVar14;
            param_6 = iVar3;
          }
          uVar14 = uVar14 + 2;
        } while ((__int64)uVar14 < 0);
        param_3 = (unsigned __int64)uStack00000024;
      }
      uVar1 = *(unsigned int *)(param_1 + 0x564);
      uVar14 = 0;
      if (-1 < (int)uVar5) {
        do {
          if (in_stack_00000084 == 1) {
            (**(int (***)())(param_1 + 0x9b8))();
          }
          else {
            (**(int (***)())(param_1 + 0x9c0))
                      (param_3 - uVar1,*(unsigned int *)(param_1 + 0x564),in_stack_0000006c,0x10,
                       uVar14,uVar6,in_stack_00000084,*(unsigned int *)(param_1 + 0x618));
          }
          fn_82E9AC18(param_1,param_2,0x10,in_stack_0000006c,0x10,0x10,0x10,in_stack_000000ac);
          iVar3 = fn_82E9B140(param_1,uVar14 + uVar11,uVar6 + in_stack_00000094,uStack_ac,1);
          uStack_b0 = iVar3 + uStack_b0;
          if (in_stack_000000b4 != 0) {
            uStack_b0 = uStack_b0 + 1;
          }
          iVar3 = *(int *)(in_stack_000000ac + 0x6c) * uStack_b0 + uStack_a8;
          if (iVar3 < param_6) {
            uVar7 = uVar6;
            uVar9 = uVar14;
            param_6 = iVar3;
          }
          uVar14 = uVar14 + 2;
        } while ((int)uVar14 <= (int)uVar5);
        param_3 = (unsigned __int64)uStack00000024;
      }
      uVar14 = uVar2 & 0xfffffffe;
      uVar6 = uVar6 + 2;
    } while ((__int64)uVar6 < 0);
  }
  lVar12 = param_3 - 1;
  if ((int)uVar14 < 0) {
    do {
      if (in_stack_00000084 == 1) {
        (**(int (***)())(param_1 + 0x9b8))();
      }
      else {
        (**(int (***)())(param_1 + 0x9c0))
                  (lVar12,*(unsigned int *)(param_1 + 0x564),in_stack_0000006c,0x10,uVar14,0,
                   in_stack_00000084,*(unsigned int *)(param_1 + 0x618));
      }
      fn_82E9AC18(param_1,param_2,0x10,in_stack_0000006c,0x10,0x10,0x10,in_stack_000000ac);
      iVar3 = fn_82E9B140(param_1,uVar14 + uVar11,in_stack_00000094,uStack_ac,1);
      uStack_b0 = iVar3 + uStack_b0;
      if (in_stack_000000b4 != 0) {
        uStack_b0 = uStack_b0 + 1;
      }
      iVar3 = *(int *)(in_stack_000000ac + 0x6c) * uStack_b0 + uStack_a8;
      if (iVar3 < param_6) {
        uVar7 = 0;
        uVar9 = uVar14;
        param_6 = iVar3;
      }
      uVar14 = uVar14 + 2;
    } while ((__int64)uVar14 < 0);
    param_3 = (unsigned __int64)uStack00000024;
  }
  uVar6 = 2;
  if (1 < uVar5) {
    do {
      if (in_stack_00000084 == 1) {
        (**(int (***)())(param_1 + 0x9b8))();
      }
      else {
        (**(int (***)())(param_1 + 0x9c0))
                  (param_3,*(unsigned int *)(param_1 + 0x564),in_stack_0000006c,0x10,uVar6,0,
                   in_stack_00000084,*(unsigned int *)(param_1 + 0x618));
      }
      fn_82E9AC18(param_1,param_2,0x10,in_stack_0000006c,0x10,0x10,0x10,in_stack_000000ac);
      iVar3 = fn_82E9B140(param_1,uVar6 + uVar11,in_stack_00000094,uStack_ac,1);
      uStack_b0 = iVar3 + uStack_b0;
      if (in_stack_000000b4 != 0) {
        uStack_b0 = uStack_b0 + 1;
      }
      iVar3 = *(int *)(in_stack_000000ac + 0x6c) * uStack_b0 + uStack_a8;
      if (iVar3 < param_6) {
        uVar7 = 0;
        uVar9 = uVar6;
        param_6 = iVar3;
      }
      uVar6 = uVar6 + 2;
      param_3 = (unsigned __int64)uStack00000024;
    } while ((int)uVar6 <= (int)uVar5);
  }
  uVar8 = (unsigned int)uVar7;
  uVar10 = (unsigned int)uVar9;
  if (1 < uVar4) {
    do {
      uVar6 = uVar2 & 0xfffffffe;
      if (iVar15 < 0) {
        do {
          if (in_stack_00000084 == 1) {
            (**(int (***)())(param_1 + 0x9b8))();
          }
          else {
            (**(int (***)())(param_1 + 0x9c0))
                      (lVar12,*(unsigned int *)(param_1 + 0x564),in_stack_0000006c,0x10,uVar6,uVar13,
                       in_stack_00000084,*(unsigned int *)(param_1 + 0x618));
          }
          fn_82E9AC18(param_1,param_2,0x10,in_stack_0000006c,0x10,0x10,0x10,in_stack_000000ac);
          iVar3 = fn_82E9B140(param_1,uVar6 + uVar11,uVar13 + in_stack_00000094,uStack_ac,1);
          uStack_b0 = iVar3 + uStack_b0;
          if (in_stack_000000b4 != 0) {
            uStack_b0 = uStack_b0 + 1;
          }
          iVar3 = *(int *)(in_stack_000000ac + 0x6c) * uStack_b0 + uStack_a8;
          if (iVar3 < param_6) {
            uVar7 = uVar13;
            uVar9 = uVar6;
            param_6 = iVar3;
          }
          uVar6 = uVar6 + 2;
        } while ((__int64)uVar6 < 0);
        param_3 = (unsigned __int64)uStack00000024;
      }
      uVar6 = 0;
      if (-1 < (int)uVar5) {
        do {
          if (in_stack_00000084 == 1) {
            (**(int (***)())(param_1 + 0x9b8))();
          }
          else {
            (**(int (***)())(param_1 + 0x9c0))
                      (param_3,*(unsigned int *)(param_1 + 0x564),in_stack_0000006c,0x10,uVar6,uVar13,
                       in_stack_00000084,*(unsigned int *)(param_1 + 0x618));
          }
          fn_82E9AC18(param_1,param_2,0x10,in_stack_0000006c,0x10,0x10,0x10,in_stack_000000ac);
          iVar3 = fn_82E9B140(param_1,uVar6 + uVar11,uVar13 + in_stack_00000094,uStack_ac,1);
          uStack_b0 = iVar3 + uStack_b0;
          if (in_stack_000000b4 != 0) {
            uStack_b0 = uStack_b0 + 1;
          }
          iVar3 = *(int *)(in_stack_000000ac + 0x6c) * uStack_b0 + uStack_a8;
          if (iVar3 < param_6) {
            uVar7 = uVar13;
            uVar9 = uVar6;
            param_6 = iVar3;
          }
          uVar6 = uVar6 + 2;
          param_3 = (unsigned __int64)uStack00000024;
        } while ((int)uVar6 <= (int)uVar5);
      }
      uVar8 = (unsigned int)uVar7;
      uVar10 = (unsigned int)uVar9;
      uVar13 = uVar13 + 2;
    } while ((int)uVar13 <= (int)uVar4);
  }
  *in_stack_000000bc = uVar10;
  *in_stack_000000c4 = uVar8;
  *in_stack_000000cc = param_6;
  return;
}

