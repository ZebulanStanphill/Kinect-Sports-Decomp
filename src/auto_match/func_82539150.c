extern int fn_82268638();
extern int fn_825388F0();
extern int fn_82538DC0();
extern int fn_82538E40();
extern int fn_82539468();
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_70;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_90;
extern unsigned int uStack_94;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;


unsigned __int64 fn_82539150(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,int param_4,
                       __int64 param_5,int param_6)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned __int64 uVar4;
  __int64 lVar5;
  unsigned int uStack_a0;
  unsigned int uStack_9c;
  unsigned int uStack_98;
  unsigned int uStack_94;
  unsigned int uStack_90;
  struct { unsigned int first; unsigned int second; } stack_pair_80;

  unsigned int uStack_78;
  unsigned int uStack_74;
  unsigned int uStack_70;
  unsigned int uStack_60;
  unsigned int uStack_5c;
  unsigned int uStack_58;
  unsigned int uStack_54;
  unsigned int uStack_50;
  
  if (((int)param_5 < param_4) || (iVar3 = fn_82538E40(param_6), iVar3 < param_4)) {
    iVar3 = fn_82538E40(param_6);
    if (iVar3 < (int)param_5) {
      if (((param_1 & 0xffffffff) != (param_2 & 0xffffffff)) &&
         ((param_2 & 0xffffffff) != (param_3 & 0xffffffff))) {
        fn_82539468(param_1,param_2,param_3);
      }
      param_3 = param_5 * 0x38 + param_1;
    }
    else {
      uStack_60 = 0;
      uStack_5c = 0;
      uStack_58 = 0;
      uStack_54 = 0;
      uStack_a0 = 0;
      uStack_9c = 0;
      uStack_98 = 0;
      (*(unsigned int **)(param_6 + 0x10))[1] = **(unsigned int **)(param_6 + 0x10);
      uVar1 = *(unsigned int *)(param_6 + 0x10);
      uStack_94 = 0;
      uVar4 = param_2;
      uStack_90 = uVar1;
      uStack_50 = uVar1;
      if ((param_2 & 0xffffffff) != (param_3 & 0xffffffff)) {
        do {
          fn_82538DC0(&uStack_a0,uVar4);
          uVar4 = uVar4 + 0x38;
        } while ((uVar4 & 0xffffffff) != (param_3 & 0xffffffff));
      }
      stack_pair_80.first = 0;
      stack_pair_80.second = 0;
      uStack_78 = 0;
      uStack_74 = 0;
      uStack_70 = uVar1;
      fn_825388F0(&uStack_a0);
      fn_825388F0(&uStack_60);
      fn_825388F0(&stack_pair_80.first);
      if ((param_1 & 0xffffffff) != (param_2 & 0xffffffff)) {
        lVar5 = param_3 - param_2;
        do {
          param_2 = param_2 - 0x38;
          fn_82268638(lVar5 + param_2,param_2);
        } while ((param_2 & 0xffffffff) != (param_1 & 0xffffffff));
      }
      uVar2 = (*(unsigned int **)(param_6 + 0x10))[1];
      param_3 = param_1;
      for (uVar4 = (unsigned __int64)**(unsigned int **)(param_6 + 0x10); (uVar4 & 0xffffffff) != (unsigned __int64)uVar2;
          uVar4 = uVar4 + 0x38) {
        fn_82268638(param_3,uVar4);
        param_3 = param_3 + 0x38;
      }
    }
  }
  else {
    stack_pair_80.first = 0;
    stack_pair_80.second = 0;
    uStack_78 = 0;
    uStack_74 = 0;
    uStack_a0 = 0;
    uStack_9c = 0;
    uStack_98 = 0;
    (*(unsigned int **)(param_6 + 0x10))[1] = **(unsigned int **)(param_6 + 0x10);
    uVar1 = *(unsigned int *)(param_6 + 0x10);
    uStack_94 = 0;
    uVar4 = param_1;
    uStack_90 = uVar1;
    uStack_70 = uVar1;
    if ((param_1 & 0xffffffff) != (param_2 & 0xffffffff)) {
      do {
        fn_82538DC0(&uStack_a0,uVar4);
        uVar4 = uVar4 + 0x38;
      } while ((uVar4 & 0xffffffff) != (param_2 & 0xffffffff));
    }
    uStack_60 = 0;
    uStack_5c = 0;
    uStack_58 = 0;
    uStack_54 = 0;
    uStack_50 = uVar1;
    fn_825388F0(&uStack_a0);
    fn_825388F0(&stack_pair_80.first);
    fn_825388F0(&uStack_60);
    if ((param_2 & 0xffffffff) != (param_3 & 0xffffffff)) {
      lVar5 = param_1 - param_2;
      do {
        fn_82268638(lVar5 + param_2,param_2);
        param_2 = param_2 + 0x38;
      } while ((param_2 & 0xffffffff) != (param_3 & 0xffffffff));
    }
    uVar2 = **(unsigned int **)(param_6 + 0x10);
    uVar4 = (unsigned __int64)(*(unsigned int **)(param_6 + 0x10))[1];
    if (uVar2 != uVar4) {
      do {
        uVar4 = uVar4 - 0x38;
        param_3 = param_3 - 0x38;
        fn_82268638(param_3,uVar4);
      } while ((uVar4 & 0xffffffff) != (unsigned __int64)uVar2);
    }
  }
  return param_3;
}

