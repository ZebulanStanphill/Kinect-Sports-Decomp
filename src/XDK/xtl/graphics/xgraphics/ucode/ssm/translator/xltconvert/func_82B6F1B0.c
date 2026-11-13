extern int fn_82AB15D0();
extern int fn_82B6EB98();
extern unsigned int iStack_3c;
extern unsigned int uStack_40;


void fn_82B6F1B0(int param_1,unsigned int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  struct { unsigned int first; int second; } stack_pair_40;

  
  iVar1 = *(int *)(param_1 + 0x1c);
  if (3 < param_2) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da494,0xffffffff820da3b8,0x5b5);
  }
  if (param_2 == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da46c,0xffffffff820da3b8,0x5b6);
  }
  iVar2 = (param_2 + 0x1064) * 4;
  if (*(int *)(iVar2 + iVar1) != 0) {
    return;
  }
  iVar3 = 0;
  if (param_2 != 1) {
    if (param_2 == 2) {
      iVar3 = *(int *)(iVar1 + 0x5aa4) + -1;
    }
    else {
      iVar3 = stack_pair_40.second;
      if (param_2 == 3) {
        stack_pair_40.second = 0;
        goto LAB_82b6f24c;
      }
    }
  }
  stack_pair_40.second = iVar3;
  *(unsigned int *)(iVar2 + iVar1) = 1;
LAB_82b6f24c:
  stack_pair_40.first = param_2;
  fn_82B6EB98(param_1,iVar1 + 0x3360,*(unsigned int *)(iVar1 + 0xc),1,&stack_pair_40.first);
  *(int *)(iVar1 + 0x336c) = *(int *)(iVar1 + 0x336c) + 1;
  return;
}

