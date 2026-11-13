extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern int fn_822315A0();
extern int fn_82517978();
extern int fn_827D5078();
extern int fn_827D50B8();
extern int fn_827D5100();
extern int fn_827D5108();
extern int fn_827D5600();
extern int fn_827D6EF0();
extern int fn_827D9698();
extern int fn_827D9918();
extern int fn_827DF840();
extern int fn_827DFF58();
extern int fn_827E2598();
extern int fn_827E2790();
extern unsigned int iStack_54;
extern unsigned int uStack_58;


unsigned __int64 fn_827E1E98(int param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  int *piVar4;
  int iVar5;
  unsigned __int64 uVar2;
  short sVar6;
  unsigned __int64 uVar3;
  unsigned __int64 uVar7;
  unsigned char auStack_60 [1];
  struct { unsigned int first; int second; } stack_pair_58;

  unsigned char auStack_50 [80];
  
  fn_827E2790(&stack_pair_58.first,*(unsigned int *)(param_1 + 0x28));
  if (*(char *)(param_1 + 0x39) == '\0') {
    uVar7 = fn_827D50B8(stack_pair_58.first);
LAB_827e2158:
    if (((int)uVar7 == 0x3e5) || ((int)uVar7 == 0x3e4)) goto LAB_827e21d4;
  }
  else {
    if (*(int *)(param_1 + 0x24) != 0) {
      iVar5 = fn_827D5100(stack_pair_58.first);
      if (iVar5 == 1) {
        if (*(int *)(param_1 + 0x30) != *(int *)(param_1 + 0x34)) {
LAB_827e1fbc:
          if (stack_pair_58.second != 0) {
            fn_822315A0();
          }
          return 0x3e5;
        }
        fn_827E2598(*(unsigned int *)(param_1 + 0x28));
        fn_827D9698();
        piVar4 = (int *)fn_827D6EF0(param_2,auStack_60);
        fn_82517978(auStack_50,stack_pair_58.first,stack_pair_58.second,0);
        (**(int (***)())(*piVar4 + 0xc))(piVar4,auStack_50,*(unsigned int *)(param_1 + 8));
        fn_827D9918(*(unsigned int *)(param_1 + 0x1c));
        *(char *)(param_1 + 0x49) = *(char *)(param_1 + 0x49) + '\x01';
        (**(int (***)())(**(int **)(param_1 + 0x1c) + 0x2c))
                  (*(int **)(param_1 + 0x1c),*(unsigned int *)(param_1 + 0x24));
        *(unsigned int *)(param_1 + 0x24) = 0;
        fn_827D5108(stack_pair_58.first,2);
        uVar1 = *(unsigned int *)(param_1 + 0x28);
        uVar2 = fn_827D5600(param_2);
        fn_827DF840(uVar2,uVar1);
        uVar7 = (unsigned __int64)*(unsigned int *)(param_1 + 0x44);
      }
      else {
        fn_82517978(auStack_50,stack_pair_58.first,stack_pair_58.second,0);
        uVar7 = (**(int (***)())(**(int **)(param_1 + 0x24) + 8))
                          (*(int **)(param_1 + 0x24),param_2,auStack_50);
        iVar5 = (int)uVar7;
        *(int *)(param_1 + 0x44) = iVar5;
        if (iVar5 == 0x3e5) goto LAB_827e21d4;
        if (iVar5 != 0x3e4) {
          if (iVar5 == 0) {
            fn_827E2598(*(unsigned int *)(param_1 + 0x28));
            fn_827D9698();
            piVar4 = (int *)fn_827D6EF0(param_2,auStack_60);
            fn_82517978(auStack_50,stack_pair_58.first,stack_pair_58.second,0);
            (**(int (***)())(*piVar4 + 8))(piVar4,auStack_50,*(unsigned int *)(param_1 + 8),param_1);
          }
          if (*(int *)(param_1 + 0x30) != 0) {
            fn_827D5108(stack_pair_58.first,1);
            goto LAB_827e1fbc;
          }
          if (iVar5 == 0) {
            fn_827E2598(*(unsigned int *)(param_1 + 0x28));
            fn_827D9698();
            piVar4 = (int *)fn_827D6EF0(param_2,auStack_60);
            fn_82517978(auStack_50,stack_pair_58.first,stack_pair_58.second,0);
            (**(int (***)())(*piVar4 + 0xc))(piVar4,auStack_50,*(unsigned int *)(param_1 + 8));
          }
          fn_827D9918(*(unsigned int *)(param_1 + 0x1c));
          *(char *)(param_1 + 0x49) = *(char *)(param_1 + 0x49) + '\x01';
          (**(int (***)())(**(int **)(param_1 + 0x1c) + 0x2c))
                    (*(int **)(param_1 + 0x1c),*(unsigned int *)(param_1 + 0x24));
          *(unsigned int *)(param_1 + 0x24) = 0;
          uVar1 = *(unsigned int *)(param_1 + 0x28);
          uVar2 = fn_827D5600(param_2);
          fn_827DF840(uVar2,uVar1);
        }
      }
      goto LAB_827e2158;
    }
    uVar7 = 2;
    fn_827D5078(*(unsigned int *)(param_1 + 0xc),0);
  }
  iVar5 = fn_827D5100(stack_pair_58.first);
  if (iVar5 != 1) {
    iVar5 = *(int *)(param_1 + 0x2c);
    if (iVar5 != 0) {
      *(int *)(iVar5 + 0x34) = *(int *)(iVar5 + 0x34) + 1;
      *(unsigned int *)(param_1 + 0x2c) = 0;
    }
    if (((int)uVar7 != 0) && (iVar5 = *(int *)(param_1 + 0x28), iVar5 != 0)) {
      uVar1 = *(unsigned int *)(param_1 + 0x40);
      uVar2 = fn_827D5600(param_2);
      sVar6 = fn_827DFF58(uVar2,iVar5,uVar1);
      if (sVar6 == 0) {
        *(unsigned int *)(param_1 + 0x28) = 0;
        *(unsigned int *)(param_1 + 0x40) = 0;
      }
    }
  }
LAB_827e21d4:
  if ((*(char *)(param_1 + 0x39) == '\0') && (*(int *)(param_1 + 0x24) != 0)) {
    fn_82517978(auStack_50,stack_pair_58.first,stack_pair_58.second,0);
    uVar3 = (**(int (***)())(**(int **)(param_1 + 0x24) + 8))
                      (*(int **)(param_1 + 0x24),param_2,auStack_50);
    if (((uVar3 & 0xffffffff) == 0x3e5) || ((uVar3 & 0xffffffff) == 0x3e4)) {
      if (stack_pair_58.second == 0) {
        return uVar3;
      }
      fn_822315A0();
      return uVar3;
    }
    fn_827D9918(*(unsigned int *)(param_1 + 0x1c));
    *(char *)(param_1 + 0x49) = *(char *)(param_1 + 0x49) + '\x01';
    (**(int (***)())(**(int **)(param_1 + 0x1c) + 0x2c))
              (*(int **)(param_1 + 0x1c),*(unsigned int *)(param_1 + 0x24));
    *(unsigned int *)(param_1 + 0x24) = 0;
  }
  if (stack_pair_58.second != 0) {
    fn_822315A0();
  }
  return uVar7;
}

