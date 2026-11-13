extern int fn_82E9AC18();
extern int fn_82E9B140();
extern int fn_82F26F98();
extern unsigned int iStack_a8;
extern unsigned int iStack_b0;
extern unsigned int iStack_b4;
extern unsigned int *iStack_b8;
extern unsigned int iStack_c0;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000034;
extern unsigned int uStack_a4;
extern unsigned int uStack_ac;
extern unsigned int uStack_bc;


void fn_82E9FBB0(int param_1, unsigned __int64 param_2, unsigned __int64 param_3, unsigned __int64 param_4, __int64 param_5, unsigned __int64 param_6, unsigned __int64 param_7, unsigned __int64 unused_arg_8, unsigned __int64 unused_arg_9, int in_stack_0000005c, int in_stack_00000064, int in_stack_0000006c, int in_stack_00000074, int in_stack_0000007c, unsigned __int64 unused_arg_15, unsigned int in_stack_0000008c, unsigned __int64 unused_arg_17, unsigned __int64 unused_arg_18, int in_stack_000000a4, unsigned int in_stack_000000ac, unsigned int in_stack_000000b4, unsigned __int64 unused_arg_22, unsigned __int64 unused_arg_23, int in_stack_000000cc, int in_stack_000000d4, unsigned int in_stack_000000dc, unsigned int in_stack_000000e4)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  __int64 lVar7;
  unsigned int uStack0000001c;
  unsigned int uStack00000034;













  int *in_stack_000000ec;
  unsigned int *in_stack_000000f4;
  int *in_stack_000000fc;
  int iStack_c0;
  unsigned int uStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  unsigned int uStack_ac;
  int iStack_a8;
  unsigned int uStack_a4;
  
  uStack0000001c = (unsigned int)param_2;
  uVar6 = (unsigned __int64)in_stack_000000e4;
  uVar5 = (unsigned __int64)in_stack_000000dc;
  uVar3 = -(unsigned int)(in_stack_0000007c != 0) & 2;
  uStack00000034 = (unsigned int)param_5;
  iStack_a8 = 0;
  uStack_a4 = 0;
  if (in_stack_00000064 != 0) {
    if (in_stack_00000074 != 0) {
      if (in_stack_000000a4 == 1) {
        (**(int (***)())(param_1 + 0x9b8))();
      }
      else {
        (**(int (***)())(param_1 + 0x9c0))
                  ((param_5 - (unsigned __int64)*(unsigned int *)(param_1 + 0x564)) + -1,
                   (unsigned __int64)*(unsigned int *)(param_1 + 0x564),in_stack_0000008c,0x10,0xfffffffffffffffe,
                   0xfffffffffffffffe,in_stack_000000a4,*(unsigned int *)(param_1 + 0x618));
      }
      fn_82E9AC18(param_1,param_2,0x10,in_stack_0000008c,0x10,0x10,0x10,in_stack_000000cc);
      if ((*(unsigned int *)(param_1 + 0x6dc4) & 1) != 0) {
        fn_82F26F98(param_1,param_6,*(unsigned int *)(param_1 + 0x568),in_stack_0000008c,8,
                          uVar5 - 1,uVar6 - 1,0);
        fn_82E9AC18(param_1,param_3,8,in_stack_0000008c,8,8,8,in_stack_000000cc);
        iStack_c0 = iStack_b4 + iStack_c0;
        uStack_bc = uStack_ac | uStack_bc;
        iStack_b8 = iStack_b0 + iStack_b8;
      }
      if ((*(unsigned int *)(param_1 + 0x6dc4) & 2) != 0) {
        fn_82F26F98(param_1,param_7,*(unsigned int *)(param_1 + 0x568),in_stack_0000008c,8,
                          uVar5 - 1,uVar6 - 1,0);
        fn_82E9AC18(param_1,param_4,8,in_stack_0000008c,8,8,8,in_stack_000000cc);
        iStack_c0 = iStack_b4 + iStack_c0;
        uStack_bc = uStack_ac | uStack_bc;
        iStack_b8 = iStack_b0 + iStack_b8;
      }
      iVar2 = fn_82E9B140(param_1,(unsigned __int64)in_stack_000000ac - 2,
                            (unsigned __int64)in_stack_000000b4 - 2,uStack_bc,1);
      iStack_b8 = iVar2 + iStack_b8;
      if (in_stack_000000d4 != 0) {
        iStack_b8 = iStack_b8 + 1;
      }
      iVar2 = *(int *)(in_stack_000000cc + 0x6c) * iStack_b8 + iStack_c0;
      if (iVar2 < in_stack_0000005c) {
        iStack_a8 = -2;
        uStack_a4 = 0xfffffffe;
        in_stack_0000005c = iVar2;
      }
    }
    uVar1 = *(unsigned int *)(param_1 + 0x564);
    lVar7 = 0;
    uVar4 = (unsigned __int64)uStack00000034;
    do {
      if (in_stack_000000a4 == 1) {
        (**(int (***)())(param_1 + 0x9b8))();
      }
      else {
        (**(int (***)())(param_1 + 0x9c0))
                  (uVar4 - uVar1,*(unsigned int *)(param_1 + 0x564),in_stack_0000008c,0x10,lVar7,
                   0xfffffffffffffffe,in_stack_000000a4,*(unsigned int *)(param_1 + 0x618));
      }
      fn_82E9AC18(param_1,uStack0000001c,0x10,in_stack_0000008c,0x10,0x10,0x10,in_stack_000000cc);
      iVar2 = (int)lVar7 >> 1;
      if ((*(unsigned int *)(param_1 + 0x6dc4) & 1) != 0) {
        fn_82F26F98(param_1,param_6,*(unsigned int *)(param_1 + 0x568),in_stack_0000008c,8,
                          (__int64)iVar2 + uVar5,uVar6 - 1,0);
        fn_82E9AC18(param_1,param_3,8,in_stack_0000008c,8,8,8,in_stack_000000cc);
        iStack_c0 = iStack_b4 + iStack_c0;
        uStack_bc = uStack_ac | uStack_bc;
        iStack_b8 = iStack_b0 + iStack_b8;
      }
      if ((*(unsigned int *)(param_1 + 0x6dc4) & 2) != 0) {
        fn_82F26F98(param_1,param_7,*(unsigned int *)(param_1 + 0x568),in_stack_0000008c,8,
                          (__int64)iVar2 + uVar5,uVar6 - 1,0);
        fn_82E9AC18(param_1,param_4,8,in_stack_0000008c,8,8,8,in_stack_000000cc);
        iStack_c0 = iStack_b4 + iStack_c0;
        uStack_bc = uStack_ac | uStack_bc;
        iStack_b8 = iStack_b0 + iStack_b8;
      }
      iVar2 = fn_82E9B140(param_1,lVar7 + (unsigned __int64)in_stack_000000ac,
                            (unsigned __int64)in_stack_000000b4 - 2,uStack_bc,1);
      iStack_b8 = iVar2 + iStack_b8;
      if (in_stack_000000d4 != 0) {
        iStack_b8 = iStack_b8 + 1;
      }
      iVar2 = *(int *)(in_stack_000000cc + 0x6c) * iStack_b8 + iStack_c0;
      if (iVar2 < in_stack_0000005c) {
        uStack_a4 = 0xfffffffe;
        in_stack_0000005c = iVar2;
        iStack_a8 = (int)lVar7;
      }
      lVar7 = lVar7 + 2;
    } while ((int)lVar7 <= (int)uVar3);
  }
  uVar4 = (unsigned __int64)in_stack_000000b4;
  if (in_stack_00000074 != 0) {
    if (in_stack_000000a4 == 1) {
      (**(int (***)())(param_1 + 0x9b8))();
    }
    else {
      (**(int (***)())(param_1 + 0x9c0))
                ((unsigned __int64)uStack00000034 - 1,*(unsigned int *)(param_1 + 0x564),in_stack_0000008c,
                 0x10,0xfffffffffffffffe,0,in_stack_000000a4,*(unsigned int *)(param_1 + 0x618));
    }
    fn_82E9AC18(param_1,uStack0000001c,0x10,in_stack_0000008c,0x10,0x10,0x10,in_stack_000000cc);
    if ((*(unsigned int *)(param_1 + 0x6dc4) & 1) != 0) {
      fn_82F26F98(param_1,param_6,*(unsigned int *)(param_1 + 0x568),in_stack_0000008c,8,
                        uVar5 - 1,uVar6,0);
      fn_82E9AC18(param_1,param_3,8,in_stack_0000008c,8,8,8,in_stack_000000cc);
      iStack_c0 = iStack_b4 + iStack_c0;
      uStack_bc = uStack_ac | uStack_bc;
      iStack_b8 = iStack_b0 + iStack_b8;
    }
    if ((*(unsigned int *)(param_1 + 0x6dc4) & 2) != 0) {
      fn_82F26F98(param_1,param_7,*(unsigned int *)(param_1 + 0x568),in_stack_0000008c,8,
                        uVar5 - 1,uVar6,0);
      fn_82E9AC18(param_1,param_4,8,in_stack_0000008c,8,8,8,in_stack_000000cc);
      iStack_c0 = iStack_b4 + iStack_c0;
      uStack_bc = uStack_ac | uStack_bc;
      iStack_b8 = iStack_b0 + iStack_b8;
    }
    iVar2 = fn_82E9B140(param_1,(unsigned __int64)in_stack_000000ac - 2,uVar4,uStack_bc,1);
    iStack_b8 = iVar2 + iStack_b8;
    if (in_stack_000000d4 != 0) {
      iStack_b8 = iStack_b8 + 1;
    }
    iVar2 = *(int *)(in_stack_000000cc + 0x6c) * iStack_b8 + iStack_c0;
    if (iVar2 < in_stack_0000005c) {
      iStack_a8 = -2;
      uStack_a4 = 0;
      in_stack_0000005c = iVar2;
    }
  }
  if (in_stack_0000007c != 0) {
    if (in_stack_000000a4 == 1) {
      (**(int (***)())(param_1 + 0x9b8))();
    }
    else {
      (**(int (***)())(param_1 + 0x9c0))
                (uStack00000034,*(unsigned int *)(param_1 + 0x564),in_stack_0000008c,0x10,2,0,
                 in_stack_000000a4,*(unsigned int *)(param_1 + 0x618));
    }
    fn_82E9AC18(param_1,uStack0000001c,0x10,in_stack_0000008c,0x10,0x10,0x10,in_stack_000000cc);
    if ((*(unsigned int *)(param_1 + 0x6dc4) & 1) != 0) {
      fn_82F26F98(param_1,param_6,*(unsigned int *)(param_1 + 0x568),in_stack_0000008c,8,
                        uVar5 + 1,uVar6,0);
      fn_82E9AC18(param_1,param_3,8,in_stack_0000008c,8,8,8,in_stack_000000cc);
      iStack_c0 = iStack_b4 + iStack_c0;
      uStack_bc = uStack_ac | uStack_bc;
      iStack_b8 = iStack_b0 + iStack_b8;
    }
    if ((*(unsigned int *)(param_1 + 0x6dc4) & 2) != 0) {
      fn_82F26F98(param_1,param_7,*(unsigned int *)(param_1 + 0x568),in_stack_0000008c,8,
                        uVar5 + 1,uVar6,0);
      fn_82E9AC18(param_1,param_4,8,in_stack_0000008c,8,8,8,in_stack_000000cc);
      iStack_c0 = iStack_b4 + iStack_c0;
      uStack_bc = uStack_ac | uStack_bc;
      iStack_b8 = iStack_b0 + iStack_b8;
    }
    iVar2 = fn_82E9B140(param_1,(unsigned __int64)in_stack_000000ac + 2,uVar4,uStack_bc,1);
    iStack_b8 = iVar2 + iStack_b8;
    if (in_stack_000000d4 != 0) {
      iStack_b8 = iStack_b8 + 1;
    }
    iVar2 = *(int *)(in_stack_000000cc + 0x6c) * iStack_b8 + iStack_c0;
    if (iVar2 < in_stack_0000005c) {
      iStack_a8 = 2;
      uStack_a4 = 0;
      in_stack_0000005c = iVar2;
    }
  }
  if (in_stack_0000006c != 0) {
    if (in_stack_00000074 != 0) {
      if (in_stack_000000a4 == 1) {
        (**(int (***)())(param_1 + 0x9b8))();
      }
      else {
        (**(int (***)())(param_1 + 0x9c0))
                  ((unsigned __int64)uStack00000034 - 1,*(unsigned int *)(param_1 + 0x564),in_stack_0000008c,
                   0x10,0xfffffffffffffffe,2,in_stack_000000a4,*(unsigned int *)(param_1 + 0x618));
      }
      fn_82E9AC18(param_1,uStack0000001c,0x10,in_stack_0000008c,0x10,0x10,0x10,in_stack_000000cc);
      if ((*(unsigned int *)(param_1 + 0x6dc4) & 1) != 0) {
        fn_82F26F98(param_1,param_6,*(unsigned int *)(param_1 + 0x568),in_stack_0000008c,8,
                          uVar5 - 1,uVar6 + 1,0);
        fn_82E9AC18(param_1,param_3,8,in_stack_0000008c,8,8,8,in_stack_000000cc);
        iStack_c0 = iStack_b4 + iStack_c0;
        uStack_bc = uStack_ac | uStack_bc;
        iStack_b8 = iStack_b0 + iStack_b8;
      }
      if ((*(unsigned int *)(param_1 + 0x6dc4) & 2) != 0) {
        fn_82F26F98(param_1,param_7,*(unsigned int *)(param_1 + 0x568),in_stack_0000008c,8,
                          uVar5 - 1,uVar6 + 1,0);
        fn_82E9AC18(param_1,param_4,8,in_stack_0000008c,8,8,8,in_stack_000000cc);
        iStack_c0 = iStack_b4 + iStack_c0;
        uStack_bc = uStack_ac | uStack_bc;
        iStack_b8 = iStack_b0 + iStack_b8;
      }
      iVar2 = fn_82E9B140(param_1,(unsigned __int64)in_stack_000000ac - 2,uVar4 + 2,uStack_bc,1);
      iStack_b8 = iVar2 + iStack_b8;
      if (in_stack_000000d4 != 0) {
        iStack_b8 = iStack_b8 + 1;
      }
      iVar2 = *(int *)(in_stack_000000cc + 0x6c) * iStack_b8 + iStack_c0;
      if (iVar2 < in_stack_0000005c) {
        iStack_a8 = -2;
        uStack_a4 = 2;
        in_stack_0000005c = iVar2;
      }
    }
    lVar7 = 0;
    if (-1 < (int)uVar3) {
      do {
        if (in_stack_000000a4 == 1) {
          (**(int (***)())(param_1 + 0x9b8))();
        }
        else {
          (**(int (***)())(param_1 + 0x9c0))
                    (uStack00000034,*(unsigned int *)(param_1 + 0x564),in_stack_0000008c,0x10,lVar7,2,
                     in_stack_000000a4,*(unsigned int *)(param_1 + 0x618));
        }
        fn_82E9AC18(param_1,uStack0000001c,0x10,in_stack_0000008c,0x10,0x10,0x10,in_stack_000000cc
                     );
        iVar2 = (int)lVar7 >> 1;
        if ((*(unsigned int *)(param_1 + 0x6dc4) & 1) != 0) {
          fn_82F26F98(param_1,param_6,*(unsigned int *)(param_1 + 0x568),in_stack_0000008c,8,
                            (__int64)iVar2 + uVar5,uVar6 + 1,0);
          fn_82E9AC18(param_1,param_3,8,in_stack_0000008c,8,8,8,in_stack_000000cc);
          iStack_c0 = iStack_b4 + iStack_c0;
          uStack_bc = uStack_ac | uStack_bc;
          iStack_b8 = iStack_b0 + iStack_b8;
        }
        if ((*(unsigned int *)(param_1 + 0x6dc4) & 2) != 0) {
          fn_82F26F98(param_1,param_7,*(unsigned int *)(param_1 + 0x568),in_stack_0000008c,8,
                            (__int64)iVar2 + uVar5,uVar6 + 1,0);
          fn_82E9AC18(param_1,param_4,8,in_stack_0000008c,8,8,8,in_stack_000000cc);
          iStack_c0 = iStack_b4 + iStack_c0;
          uStack_bc = uStack_ac | uStack_bc;
          iStack_b8 = iStack_b0 + iStack_b8;
        }
        iVar2 = fn_82E9B140(param_1,lVar7 + (unsigned __int64)in_stack_000000ac,uVar4 + 2,uStack_bc,1);
        iStack_b8 = iVar2 + iStack_b8;
        if (in_stack_000000d4 != 0) {
          iStack_b8 = iStack_b8 + 1;
        }
        iVar2 = *(int *)(in_stack_000000cc + 0x6c) * iStack_b8 + iStack_c0;
        if (iVar2 < in_stack_0000005c) {
          uStack_a4 = 2;
          in_stack_0000005c = iVar2;
          iStack_a8 = (int)lVar7;
        }
        lVar7 = lVar7 + 2;
      } while ((int)lVar7 <= (int)uVar3);
    }
  }
  *in_stack_000000ec = iStack_a8;
  *in_stack_000000f4 = uStack_a4;
  *in_stack_000000fc = in_stack_0000005c;
  return;
}

