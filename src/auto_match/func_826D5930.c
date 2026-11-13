extern int fn_82698FC8();
extern int fn_8269A110();
extern int fn_826C6DA8();
extern int fn_826C6E68();
extern int fn_826C90C8();
extern int fn_826CD9A0();
extern int fn_826D0878();
extern int fn_826D46F0();
extern unsigned int iStack_44;
extern unsigned int iStack_84;
extern unsigned int uStack_40;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_80;
extern unsigned int uStack_90;
extern unsigned int uStack_94;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;
extern unsigned int uStack_a4;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;


void fn_826D5930(int param_1,unsigned __int64 param_2)

{
  int iVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  unsigned __int64 uVar5;
  unsigned int uVar6;
  unsigned int uStack_b0;
  unsigned int uStack_ac;
  unsigned int uStack_a8;
  unsigned int uStack_a4;
  unsigned int uStack_a0;
  unsigned int uStack_9c;
  unsigned int uStack_98;
  unsigned int uStack_94;
  unsigned int uStack_90;
  unsigned int **ppuStack_8c;
  unsigned int **ppuStack_88;
  int iStack_84;
  unsigned int uStack_80;
  struct { unsigned int first; unsigned int second; } stack_pair_70;

  unsigned int uStack_68;
  unsigned int uStack_64;
  unsigned int uStack_60;
  unsigned int uStack_5c;
  unsigned int uStack_58;
  unsigned int uStack_54;
  unsigned int uStack_50;
  unsigned int **ppuStack_4c;
  unsigned int **ppuStack_48;
  int iStack_44;
  unsigned int uStack_40;
  
  iVar1 = *(int *)(param_1 + 0x1ac);
  if ((iVar1 == 0) || (*(char *)(iVar1 + 0x18) != '\0')) {
    uVar3 = (**(int (***)())(**(int **)(param_1 + 0x9c) + 0x28))();
  }
  else {
    uVar3 = (unsigned __int64)*(unsigned int *)(iVar1 + 0x10);
  }
  uVar5 = uVar3 - 1;
  if ((int)param_2 < (int)(uVar3 - 1)) {
    uVar5 = param_2;
  }
  uVar5 = ((uVar5 & 0xffffffff) >> 0x1f) - 1 & uVar5;
  fn_826D0878(param_1,0);
  uVar2 = *(unsigned int *)(param_1 + 0xbc);
  uVar6 = (unsigned int)uVar5;
  if ((uVar5 & 0xffffffff) < (unsigned __int64)uVar2) {
    lVar4 = uVar5 - 1;
    if ((uVar5 & 0xffffffff) == 0) {
      lVar4 = 0;
    }
    fn_82698FC8(param_1 + 0xa8,lVar4);
    if ((uVar5 & 0xffffffff) == 0) {
      *(unsigned int *)(param_1 + 0xbc) = uVar6;
    }
    else {
      uStack_a0 = (**(int (***)())(**(int **)(param_1 + 0xa0) + 0xd8))();
      ppuStack_8c = &ppuStack_8c;
      uStack_b0 = 0;
      ppuStack_88 = &ppuStack_8c;
      uStack_ac = 0;
      uStack_a8 = 0x32;
      uStack_a4 = 0;
      uStack_9c = 0;
      uStack_98 = 0;
      uStack_94 = 0;
      uStack_80 = 1;
      uStack_90 = uStack_a0;
      iStack_84 = param_1;
      fn_826C6DA8(param_1,&uStack_b0,0,uVar5 - 1);
      *(unsigned int *)(param_1 + 0xbc) = uVar6;
      fn_826D46F0(param_1,&uStack_b0,4);
      fn_826CD9A0(&uStack_b0);
    }
    fn_826C90C8(param_1,uVar5);
    fn_8269A110(param_1 + 0xa8);
  }
  else if ((unsigned __int64)uVar2 < (uVar5 & 0xffffffff)) {
    if (((uVar5 & 0xffffffff) < 2) || ((uVar5 & 0xffffffff) <= (unsigned __int64)(uVar2 + 1))) {
      *(unsigned int *)(param_1 + 0xbc) = uVar6;
    }
    else {
      uStack_60 = (**(int (***)())(**(int **)(param_1 + 0xa0) + 0xd8))();
      stack_pair_70.first = 0;
      ppuStack_4c = &ppuStack_4c;
      stack_pair_70.second = 0;
      ppuStack_48 = &ppuStack_4c;
      uStack_68 = 0x32;
      uStack_64 = 0;
      uStack_5c = 0;
      uStack_58 = 0;
      uStack_54 = 0;
      uStack_40 = 0;
      uStack_50 = uStack_60;
      iStack_44 = param_1;
      fn_826C6DA8(param_1,&stack_pair_70.first,(unsigned __int64)*(unsigned int *)(param_1 + 0xbc) + 1,uVar5 - 1);
      uVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 0xbc);
      while (uVar3 = uVar3 + 1, (uVar3 & 0xffffffff) < (uVar5 & 0xffffffff)) {
        fn_826C6E68(param_1,uVar3);
      }
      *(unsigned int *)(param_1 + 0xbc) = uVar6;
      fn_826D46F0(param_1,&stack_pair_70.first,4);
      fn_826CD9A0(&stack_pair_70.first);
    }
    fn_826C90C8(param_1,uVar5);
  }
  *(unsigned int *)(param_1 + 0xb8) = 1;
  return;
}

