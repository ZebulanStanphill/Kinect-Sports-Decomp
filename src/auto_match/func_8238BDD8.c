extern int fn_822315A0();
extern int fn_822B17A8();
extern int fn_8236F648();
extern int fn_82373C68();
extern int fn_82373F48();
extern int fn_82374078();
extern int fn_824D2AE8();
extern unsigned int iStack_2c;
extern unsigned int iStack_30;


void fn_8238BDD8(int param_1,unsigned __int64 param_2)

{
  int iVar1;
  struct { int first; int second; } stack_pair_30;

  
  iVar1 = *(int *)(param_1 + 8);
  *(unsigned int *)(param_1 + 0x14) = 1;
  fn_82373F48(iVar1);
  fn_8236F648(iVar1,param_2);
  fn_82373C68(iVar1,param_2,*(int *)(iVar1 + 0x200) == 1);
  fn_824D2AE8(&stack_pair_30.first,param_1 + 0xc);
  if (*(int *)(stack_pair_30.first + 0x2148) == 0xb) {
    fn_82374078(iVar1,param_2,0x31);
  }
  iVar1 = *(int *)(stack_pair_30.first + 0x2130);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x2c) == (int)param_2)) {
    if ((*(int *)(iVar1 + 0x24) != 0) &&
       (((*(unsigned int *)(iVar1 + 0x1ec) & 100) != 0 &&
        (iVar1 = *(int *)(*(int *)(iVar1 + 0x24) + 0x34), iVar1 != 0)))) {
      fn_822B17A8(iVar1,0x32,0);
    }
  }
  if (stack_pair_30.second != 0) {
    fn_822315A0();
  }
  return;
}

