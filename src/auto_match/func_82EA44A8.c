extern int fn_82E9AC18();
extern int fn_82E9B140();
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;
extern unsigned int *uStack_b0;


void fn_82EA44A8(int param_1, unsigned __int64 param_2, __int64 param_3, unsigned __int64 param_4, unsigned __int64 param_5, int param_6, __int64 param_7, __int64 param_8, int in_stack_00000054, int in_stack_0000005c, unsigned __int64 unused_arg_11, unsigned int in_stack_0000006c, unsigned __int64 unused_arg_13, unsigned __int64 unused_arg_14, unsigned int in_stack_00000084, unsigned int in_stack_0000008c, unsigned __int64 unused_arg_17, unsigned __int64 unused_arg_18, int in_stack_000000a4, int in_stack_000000ac)

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
  unsigned __int64 uVar12;
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
  uVar13 = -(unsigned __int64)(param_7 != 0) & 0xfffffffffffffffd;
  uVar12 = uVar2 & 0xfffffffffffffffd;
  uVar5 = -(unsigned int)(param_8 != 0) & 3;
  uVar4 = -(unsigned int)(in_stack_0000005c != 0) & 3;
  uVar9 = 0;
  uVar7 = 0;
  if ((int)uVar13 < 0) {
    do {
      uVar1 = *(unsigned int *)(param_1 + 0x564);
      if ((int)uVar12 < 0) {
        do {
          (**(int (***)())(param_1 + 0x9b8))
                    ((param_3 - (unsigned __int64)uVar1) + -1,*(unsigned int *)(param_1 + 0x564),
                     in_stack_0000006c,0x10,uVar12,uVar13,*(unsigned int *)(param_1 + 0x904),
                     *(unsigned int *)(param_1 + 0x618));
          fn_82E9AC18(param_1,param_2,0x10,in_stack_0000006c,0x10,0x10,0x10,in_stack_000000a4);
          iVar3 = fn_82E9B140(param_1,uVar12 + uVar11,uVar13 + uVar6,uStack_ac,0);
          uStack_b0 = iVar3 + uStack_b0;
          if (in_stack_000000ac != 0) {
            uStack_b0 = uStack_b0 + 1;
          }
          iVar3 = *(int *)(in_stack_000000a4 + 0x6c) * uStack_b0 + uStack_a8;
          if (iVar3 < param_6) {
            uVar7 = uVar13;
            uVar9 = uVar12;
            param_6 = iVar3;
          }
          uVar12 = uVar12 + 1;
        } while ((__int64)uVar12 < 0);
        uVar12 = uVar2 & 0xfffffffd;
      }
      uVar1 = *(unsigned int *)(param_1 + 0x564);
      uVar14 = 0;
      if (-1 < (int)uVar4) {
        do {
          (**(int (***)())(param_1 + 0x9b8))
                    (param_3 - (unsigned __int64)uVar1,*(unsigned int *)(param_1 + 0x564),in_stack_0000006c,
                     0x10,uVar14,uVar13,*(unsigned int *)(param_1 + 0x904),
                     *(unsigned int *)(param_1 + 0x618));
          fn_82E9AC18(param_1,param_2,0x10,in_stack_0000006c,0x10,0x10,0x10,in_stack_000000a4);
          iVar3 = fn_82E9B140(param_1,uVar14 + uVar11,uVar13 + uVar6,uStack_ac,0);
          uStack_b0 = iVar3 + uStack_b0;
          if (in_stack_000000ac != 0) {
            uStack_b0 = uStack_b0 + 1;
          }
          iVar3 = *(int *)(in_stack_000000a4 + 0x6c) * uStack_b0 + uStack_a8;
          if (iVar3 < param_6) {
            uVar7 = uVar13;
            uVar9 = uVar14;
            param_6 = iVar3;
          }
          uVar14 = uVar14 + 1;
        } while ((int)uVar14 <= (int)uVar4);
        uVar12 = uVar2 & 0xfffffffd;
      }
      uVar13 = uVar13 + 1;
    } while ((__int64)uVar13 < 0);
  }
  uVar13 = uVar12;
  if ((int)uVar12 < 0) {
    do {
      (**(int (***)())(param_1 + 0x9b8))
                (param_3 + -1,*(unsigned int *)(param_1 + 0x564),in_stack_0000006c,0x10,uVar13,0,
                 *(unsigned int *)(param_1 + 0x904),*(unsigned int *)(param_1 + 0x618));
      fn_82E9AC18(param_1,param_2,0x10,in_stack_0000006c,0x10,0x10,0x10,in_stack_000000a4);
      iVar3 = fn_82E9B140(param_1,uVar13 + uVar11,uVar6,uStack_ac,0);
      uStack_b0 = iVar3 + uStack_b0;
      if (in_stack_000000ac != 0) {
        uStack_b0 = uStack_b0 + 1;
      }
      iVar3 = *(int *)(in_stack_000000a4 + 0x6c) * uStack_b0 + uStack_a8;
      if (iVar3 < param_6) {
        uVar7 = 0;
        uVar9 = uVar13;
        param_6 = iVar3;
      }
      uVar13 = uVar13 + 1;
    } while ((__int64)uVar13 < 0);
  }
  uVar13 = 1;
  if (uVar4 != 0) {
    do {
      (**(int (***)())(param_1 + 0x9b8))
                (param_3,*(unsigned int *)(param_1 + 0x564),in_stack_0000006c,0x10,uVar13,0,
                 *(unsigned int *)(param_1 + 0x904),*(unsigned int *)(param_1 + 0x618));
      fn_82E9AC18(param_1,param_2,0x10,in_stack_0000006c,0x10,0x10,0x10,in_stack_000000a4);
      iVar3 = fn_82E9B140(param_1,uVar13 + uVar11,uVar6,uStack_ac,0);
      uStack_b0 = iVar3 + uStack_b0;
      if (in_stack_000000ac != 0) {
        uStack_b0 = uStack_b0 + 1;
      }
      iVar3 = *(int *)(in_stack_000000a4 + 0x6c) * uStack_b0 + uStack_a8;
      if (iVar3 < param_6) {
        uVar7 = 0;
        uVar9 = uVar13;
        param_6 = iVar3;
      }
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 <= (int)uVar4);
  }
  uVar8 = (unsigned int)uVar7;
  uVar10 = (unsigned int)uVar9;
  uVar13 = 1;
  if (uVar5 != 0) {
    do {
      if ((int)uVar12 < 0) {
        do {
          (**(int (***)())(param_1 + 0x9b8))
                    (param_3 + -1,*(unsigned int *)(param_1 + 0x564),in_stack_0000006c,0x10,uVar12,
                     uVar13,*(unsigned int *)(param_1 + 0x904),*(unsigned int *)(param_1 + 0x618));
          fn_82E9AC18(param_1,param_2,0x10,in_stack_0000006c,0x10,0x10,0x10,in_stack_000000a4);
          iVar3 = fn_82E9B140(param_1,uVar12 + uVar11,uVar13 + uVar6,uStack_ac,0);
          uStack_b0 = iVar3 + uStack_b0;
          if (in_stack_000000ac != 0) {
            uStack_b0 = uStack_b0 + 1;
          }
          iVar3 = *(int *)(in_stack_000000a4 + 0x6c) * uStack_b0 + uStack_a8;
          if (iVar3 < param_6) {
            uVar7 = uVar13;
            uVar9 = uVar12;
            param_6 = iVar3;
          }
          uVar12 = uVar12 + 1;
        } while ((__int64)uVar12 < 0);
        uVar12 = uVar2 & 0xfffffffd;
      }
      uVar14 = 0;
      if (-1 < (int)uVar4) {
        do {
          (**(int (***)())(param_1 + 0x9b8))
                    (param_3,*(unsigned int *)(param_1 + 0x564),in_stack_0000006c,0x10,uVar14,uVar13,
                     *(unsigned int *)(param_1 + 0x904),*(unsigned int *)(param_1 + 0x618));
          fn_82E9AC18(param_1,param_2,0x10,in_stack_0000006c,0x10,0x10,0x10,in_stack_000000a4);
          iVar3 = fn_82E9B140(param_1,uVar14 + uVar11,uVar13 + uVar6,uStack_ac,0);
          uStack_b0 = iVar3 + uStack_b0;
          if (in_stack_000000ac != 0) {
            uStack_b0 = uStack_b0 + 1;
          }
          iVar3 = *(int *)(in_stack_000000a4 + 0x6c) * uStack_b0 + uStack_a8;
          if (iVar3 < param_6) {
            uVar7 = uVar13;
            uVar9 = uVar14;
            param_6 = iVar3;
          }
          uVar14 = uVar14 + 1;
        } while ((int)uVar14 <= (int)uVar4);
        uVar12 = uVar2 & 0xfffffffd;
      }
      uVar8 = (unsigned int)uVar7;
      uVar10 = (unsigned int)uVar9;
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 <= (int)uVar5);
  }
  *in_stack_000000b4 = uVar10;
  *in_stack_000000bc = uVar8;
  *in_stack_000000c4 = param_6;
  return;
}

