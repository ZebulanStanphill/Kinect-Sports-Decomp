extern int fn_82517978();
extern int fn_827D50F8();
extern int fn_827D5630();
extern int fn_827D7BD8();
extern int fn_827D7D48();
extern int fn_827D98B8();
extern int fn_827D98C0();
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


unsigned __int64 fn_827E15D8(int param_1,unsigned __int64 param_2)

{
  int iVar3;
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  int iVar4;
  struct { unsigned int first; unsigned int second; } stack_pair_30;

  
  if (*(int *)(param_1 + 0x1c) == 0) {
    iVar3 = fn_827D50F8(*(unsigned int *)(param_1 + 0xc));
    if (iVar3 != 0) {
      fn_827D98B8(*(int **)(param_1 + 0x14),0x4c7);
      if (*(int *)(param_1 + 0x20) == 0) {
        uVar1 = fn_827D98C0(*(unsigned int *)(param_1 + 0x14));
        fn_827D7BD8(param_2,uVar1);
      }
      else {
        stack_pair_30.first = 0;
        stack_pair_30.second = 0;
        fn_82517978(&stack_pair_30.first,*(unsigned int *)(param_1 + 0x14),*(unsigned int *)(param_1 + 0x18)
                          ,0);
        fn_827D7D48(param_2,&stack_pair_30.first);
        fn_827D5630(param_2);
      }
      return 0x4c7;
    }
    uVar2 = (**(int (***)())(**(int **)(param_1 + 0x14) + 4))();
    if (((uVar2 & 0xffffffff) == 0x3e5) || ((uVar2 & 0xffffffff) == 0x3e4)) {
      *(unsigned int *)(param_1 + 0x1c) = 1;
      return uVar2;
    }
    if ((uVar2 & 0xffffffff) == 0) {
      if (*(int *)(param_1 + 0x20) == 0) {
        return uVar2;
      }
      goto LAB_827e1770;
    }
    fn_827D98B8(*(unsigned int *)(param_1 + 0x14),uVar2);
    if (*(int *)(param_1 + 0x20) == 0) goto LAB_827e1784;
  }
  else {
    iVar4 = fn_827D50F8(*(unsigned int *)(param_1 + 0xc));
    iVar3 = **(int **)(param_1 + 0x14);
    if (iVar4 == 0) {
      uVar2 = (**(int (***)())(iVar3 + 0xc))(*(int **)(param_1 + 0x14),param_2);
    }
    else {
      (**(int (***)())(iVar3 + 0x10))();
      uVar2 = 0x4c7;
    }
    fn_827D98B8(*(unsigned int *)(param_1 + 0x14),uVar2);
    iVar3 = (int)uVar2;
    if (iVar3 == 0x3e5) {
      return uVar2;
    }
    if (iVar3 == 0x3e4) {
      return uVar2;
    }
    if (*(int *)(param_1 + 0x20) == 0) {
      if (iVar3 == 0) {
        return uVar2;
      }
LAB_827e1784:
      uVar1 = fn_827D98C0(*(unsigned int *)(param_1 + 0x14));
      fn_827D7BD8(param_2,uVar1);
      return uVar2;
    }
    if (iVar3 == 0) goto LAB_827e1770;
  }
  stack_pair_30.first = 0;
  stack_pair_30.second = 0;
  fn_82517978(&stack_pair_30.first,*(unsigned int *)(param_1 + 0x14),*(unsigned int *)(param_1 + 0x18),0);
  fn_827D7D48(param_2,&stack_pair_30.first);
LAB_827e1770:
  fn_827D5630(param_2);
  return uVar2;
}

