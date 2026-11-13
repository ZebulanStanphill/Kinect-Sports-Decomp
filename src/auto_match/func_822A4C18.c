extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_82672C20();
extern unsigned int lbl_82195528;
extern unsigned int lbl_82195830;
extern unsigned int lbl_821958F0;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_822A4C18(int *param_1,int param_2)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned int *puVar3;
  unsigned __int64 uVar4;
  struct { unsigned int first; unsigned int second; } stack_pair_30;

  unsigned __int64 uStack_28;
  
  iVar1 = *param_1;
  if (param_2 == *(int *)(iVar1 + 0x54)) {
    return;
  }
  if (*(int *)(iVar1 + 0x28) == 0) {
    return;
  }
  stack_pair_30.first = 0;
  stack_pair_30.second = 0;
  if (param_2 == 0) {
    uVar4 = 0;
    uVar2 = 0xffffffff821ac32c;
    puVar3 = (unsigned int *)0x0;
  }
  else {
    iVar1 = *(int *)(iVar1 + 0x50);
    if (iVar1 == 1) {
      fn_82273CD8(&stack_pair_30.first,3);
      uStack_28 = lbl_82195528;
    }
    else {
      if (iVar1 != 2) {
        if (iVar1 == 3) {
          fn_82273CD8(&stack_pair_30.first,3);
          uStack_28 = lbl_821958F0;
          goto LAB_822a4ca0;
        }
        if (iVar1 != 4) goto LAB_822a4d0c;
      }
      fn_82273CD8(&stack_pair_30.first,3);
      uStack_28 = lbl_82195830;
    }
LAB_822a4ca0:
    iVar1 = *param_1;
    uVar4 = 1;
    uVar2 = 0xffffffff821ac314;
    puVar3 = &stack_pair_30.first;
  }
  fn_82672C20(*(unsigned int *)(iVar1 + 0x28),uVar2,puVar3,uVar4);
LAB_822a4d0c:
  *(int *)(*param_1 + 0x54) = param_2;
  fn_82273C88(&stack_pair_30.first);
  return;
}

