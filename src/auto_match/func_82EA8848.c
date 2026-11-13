extern int fn_82E9AC18();
extern int fn_82E9B140();
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;


void fn_82EA8848(int param_1, unsigned __int64 param_2, __int64 param_3, unsigned __int64 param_4, unsigned __int64 param_5, int param_6, __int64 param_7, __int64 param_8, int in_stack_00000054, int in_stack_0000005c, unsigned __int64 unused_arg_11, unsigned int in_stack_0000006c, unsigned __int64 unused_arg_13, unsigned __int64 unused_arg_14, unsigned int in_stack_00000084, unsigned int in_stack_0000008c, unsigned __int64 unused_arg_17, unsigned __int64 unused_arg_18, int in_stack_000000a4, int in_stack_000000ac)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned int uVar8;
  unsigned __int64 uVar9;
  unsigned int uVar10;
  unsigned __int64 uVar11;
  unsigned int uVar12;
  unsigned __int64 uVar13;
  unsigned __int64 uVar14;







  unsigned int *in_stack_000000b4;
  unsigned int *in_stack_000000bc;
  int *in_stack_000000c4;
  unsigned int uStack_b0;
  unsigned int uStack_ac;
  unsigned int uStack_a8;

  uVar2 = -(unsigned __int64)(in_stack_00000054 != 0);
  uVar6 = (unsigned __int64)in_stack_0000008c;
  uVar11 = (unsigned __int64)in_stack_00000084;
  uVar5 = -(unsigned __int64)(param_7 != 0) & 0xfffffffffffffffd;
  uVar13 = uVar2 & 0xfffffffffffffffd;
  uVar3 = -(unsigned int)(param_8 != 0) & 3;
  uVar12 = -(unsigned int)(in_stack_0000005c != 0) & 3;
  uVar9 = 0;
  uVar7 = 0;
  if ((int)uVar5 < 0) {
    do {
      uVar1 = *(unsigned int *)(param_1 + 0x564);
      if ((int)uVar13 < 0) {
        do {
          (**(int (***)())(param_1 + 0xa5c))
                    ((param_3 - (unsigned __int64)uVar1) + -1,*(unsigned int *)(param_1 + 0x564),
                     in_stack_0000006c,0x10,uVar13 & 3,uVar5 & 3,*(unsigned int *)(param_1 + 0x618));
          fn_82E9AC18(param_1,param_2,0x10,in_stack_0000006c,0x10,8,8,in_stack_000000a4);
          iVar4 = fn_82E9B140(param_1,uVar13 + uVar11,uVar5 + uVar6,uStack_ac,0);
          uStack_b0 = iVar4 + uStack_b0;
          if (in_stack_000000ac != 0) {
            uStack_b0 = uStack_b0 + 1;
          }
          iVar4 = uStack_b0 * *(int *)(in_stack_000000a4 + 0x6c) + uStack_a8;
          if (iVar4 < param_6) {
            uVar7 = uVar5;
            uVar9 = uVar13;
            param_6 = iVar4;
          }
          uVar13 = uVar13 + 1;
        } while ((__int64)uVar13 < 0);
        uVar13 = uVar2 & 0xfffffffd;
      }
      uVar1 = *(unsigned int *)(param_1 + 0x564);
      uVar14 = 0;
      if (-1 < (int)uVar12) {
        do {
          (**(int (***)())(param_1 + 0xa5c))
                    (param_3 - (unsigned __int64)uVar1,*(unsigned int *)(param_1 + 0x564),in_stack_0000006c,
                     0x10,uVar14 & 3,uVar5 & 3,*(unsigned int *)(param_1 + 0x618));
          fn_82E9AC18(param_1,param_2,0x10,in_stack_0000006c,0x10,8,8,in_stack_000000a4);
          iVar4 = fn_82E9B140(param_1,uVar14 + uVar11,uVar5 + uVar6,uStack_ac,0);
          uStack_b0 = iVar4 + uStack_b0;
          if (in_stack_000000ac != 0) {
            uStack_b0 = uStack_b0 + 1;
          }
          iVar4 = uStack_b0 * *(int *)(in_stack_000000a4 + 0x6c) + uStack_a8;
          if (iVar4 < param_6) {
            uVar7 = uVar5;
            uVar9 = uVar14;
            param_6 = iVar4;
          }
          uVar14 = uVar14 + 1;
        } while ((int)uVar14 <= (int)uVar12);
        uVar13 = uVar2 & 0xfffffffd;
      }
      uVar5 = uVar5 + 1;
    } while ((__int64)uVar5 < 0);
  }
  uVar5 = uVar13;
  if ((int)uVar13 < 0) {
    do {
      (**(int (***)())(param_1 + 0xa5c))
                (param_3 + -1,*(unsigned int *)(param_1 + 0x564),in_stack_0000006c,0x10,uVar5 & 3,0,
                 *(unsigned int *)(param_1 + 0x618));
      fn_82E9AC18(param_1,param_2,0x10,in_stack_0000006c,0x10,8,8,in_stack_000000a4);
      iVar4 = fn_82E9B140(param_1,uVar5 + uVar11,uVar6,uStack_ac,0);
      uStack_b0 = iVar4 + uStack_b0;
      if (in_stack_000000ac != 0) {
        uStack_b0 = uStack_b0 + 1;
      }
      iVar4 = uStack_b0 * *(int *)(in_stack_000000a4 + 0x6c) + uStack_a8;
      if (iVar4 < param_6) {
        uVar7 = 0;
        uVar9 = uVar5;
        param_6 = iVar4;
      }
      uVar5 = uVar5 + 1;
    } while ((__int64)uVar5 < 0);
  }
  uVar5 = 1;
  if (uVar12 != 0) {
    do {
      (**(int (***)())(param_1 + 0xa5c))
                (param_3,*(unsigned int *)(param_1 + 0x564),in_stack_0000006c,0x10,uVar5 & 3,0,
                 *(unsigned int *)(param_1 + 0x618));
      fn_82E9AC18(param_1,param_2,0x10,in_stack_0000006c,0x10,8,8,in_stack_000000a4);
      iVar4 = fn_82E9B140(param_1,uVar5 + uVar11,uVar6,uStack_ac,0);
      uStack_b0 = iVar4 + uStack_b0;
      if (in_stack_000000ac != 0) {
        uStack_b0 = uStack_b0 + 1;
      }
      iVar4 = uStack_b0 * *(int *)(in_stack_000000a4 + 0x6c) + uStack_a8;
      if (iVar4 < param_6) {
        uVar7 = 0;
        uVar9 = uVar5;
        param_6 = iVar4;
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 <= (int)uVar12);
  }
  uVar8 = (unsigned int)uVar7;
  uVar10 = (unsigned int)uVar9;
  uVar5 = 1;
  if (uVar3 != 0) {
    do {
      if ((int)uVar13 < 0) {
        do {
          (**(int (***)())(param_1 + 0xa5c))
                    (param_3 + -1,*(unsigned int *)(param_1 + 0x564),in_stack_0000006c,0x10,uVar13 & 3
                     ,uVar5 & 3,*(unsigned int *)(param_1 + 0x618));
          fn_82E9AC18(param_1,param_2,0x10,in_stack_0000006c,0x10,8,8,in_stack_000000a4);
          iVar4 = fn_82E9B140(param_1,uVar13 + uVar11,uVar5 + uVar6,uStack_ac,0);
          uStack_b0 = iVar4 + uStack_b0;
          if (in_stack_000000ac != 0) {
            uStack_b0 = uStack_b0 + 1;
          }
          iVar4 = uStack_b0 * *(int *)(in_stack_000000a4 + 0x6c) + uStack_a8;
          if (iVar4 < param_6) {
            uVar7 = uVar5;
            uVar9 = uVar13;
            param_6 = iVar4;
          }
          uVar13 = uVar13 + 1;
        } while ((__int64)uVar13 < 0);
        uVar13 = uVar2 & 0xfffffffd;
      }
      uVar14 = 0;
      if (-1 < (int)uVar12) {
        do {
          (**(int (***)())(param_1 + 0xa5c))
                    (param_3,*(unsigned int *)(param_1 + 0x564),in_stack_0000006c,0x10,uVar14 & 3,
                     uVar5 & 3,*(unsigned int *)(param_1 + 0x618));
          fn_82E9AC18(param_1,param_2,0x10,in_stack_0000006c,0x10,8,8,in_stack_000000a4);
          iVar4 = fn_82E9B140(param_1,uVar14 + uVar11,uVar5 + uVar6,uStack_ac,0);
          uStack_b0 = iVar4 + uStack_b0;
          if (in_stack_000000ac != 0) {
            uStack_b0 = uStack_b0 + 1;
          }
          iVar4 = uStack_b0 * *(int *)(in_stack_000000a4 + 0x6c) + uStack_a8;
          if (iVar4 < param_6) {
            uVar7 = uVar5;
            uVar9 = uVar14;
            param_6 = iVar4;
          }
          uVar14 = uVar14 + 1;
        } while ((int)uVar14 <= (int)uVar12);
        uVar13 = uVar2 & 0xfffffffd;
      }
      uVar8 = (unsigned int)uVar7;
      uVar10 = (unsigned int)uVar9;
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 <= (int)uVar3);
  }
  *in_stack_000000b4 = uVar10;
  *in_stack_000000bc = uVar8;
  *in_stack_000000c4 = param_6;
  return;
}
