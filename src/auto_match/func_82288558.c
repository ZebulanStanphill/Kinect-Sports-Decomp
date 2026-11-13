extern int fn_822315A0();
extern int fn_82517978();
extern int fn_826728E8();
extern unsigned int iStack_3c;
extern unsigned int lbl_831CEE78;
extern unsigned int lbl_831CEE7C;
extern unsigned int lbl_831CEE80;
extern unsigned int lbl_831CEE84;
extern unsigned int uStack_40;


void fn_82288558(int param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  struct { unsigned int first; int second; } stack_pair_40;

  
  stack_pair_40.first = 0;
  stack_pair_40.second = 0;
  uVar1 = **(unsigned int **)(*(int *)(param_1 + 0x61c) + 0xb0);
  fn_82517978(&stack_pair_40.first,*param_2,param_2[1],0);
  fn_826728E8(stack_pair_40.first,lbl_831CEE78,uVar1);
  if (stack_pair_40.second != 0) {
    fn_822315A0();
  }
  stack_pair_40.first = 0;
  stack_pair_40.second = 0;
  uVar1 = **(unsigned int **)(*(int *)(param_1 + 0x634) + 0xb0);
  fn_82517978(&stack_pair_40.first,*param_2,param_2[1],0);
  fn_826728E8(stack_pair_40.first,lbl_831CEE7C,uVar1);
  if (stack_pair_40.second != 0) {
    fn_822315A0();
  }
  stack_pair_40.first = 0;
  stack_pair_40.second = 0;
  uVar1 = **(unsigned int **)(*(int *)(param_1 + 0x64c) + 0xb0);
  fn_82517978(&stack_pair_40.first,*param_2,param_2[1],0);
  fn_826728E8(stack_pair_40.first,lbl_831CEE80,uVar1);
  if (stack_pair_40.second != 0) {
    fn_822315A0();
  }
  stack_pair_40.first = 0;
  stack_pair_40.second = 0;
  uVar1 = **(unsigned int **)(*(int *)(param_1 + 0x664) + 0xb0);
  fn_82517978(&stack_pair_40.first,*param_2,param_2[1],0);
  fn_826728E8(stack_pair_40.first,lbl_831CEE84,uVar1);
  if (stack_pair_40.second != 0) {
    fn_822315A0();
  }
  if (param_2[1] != 0) {
    fn_822315A0();
  }
  return;
}

