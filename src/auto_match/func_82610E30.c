extern int fn_822315A0();
extern int fn_82517978();
extern int fn_827D5078();
extern int fn_827D50C0();
extern int fn_827D5108();
extern int fn_827D5158();
extern unsigned int iStack_2c;
extern unsigned int uStack_24;
extern unsigned int uStack_28;
extern unsigned int uStack_30;


void fn_82610E30(int param_1,int (*param_2)(),unsigned __int64 param_3)

{
  struct { unsigned int first; void *second; } stack_pair_30;

  struct { unsigned int first; unsigned int second; } stack_pair_28;


  if (*(int *)(param_1 + 0x14) == 0) {
    *(unsigned int *)(param_1 + 0x14) = 1;
  }
  fn_827D5158(&stack_pair_30.first);
  fn_827D50C0(stack_pair_30.first,0);
  fn_827D5078(stack_pair_30.first,0);
  fn_827D5108(stack_pair_30.first,0);
  stack_pair_28.first = 0;
  stack_pair_28.second = 0;
  fn_82517978(&stack_pair_28.first,stack_pair_30.first,stack_pair_30.second,0);
  param_2(&stack_pair_28.first,param_3);
  fn_827D5108(stack_pair_30.first,3);
  if (stack_pair_30.second != 0) {
    fn_822315A0(stack_pair_30.second);
  }
  return;
}
