extern int fn_82FFA5E0();
extern unsigned int lbl_832642F0;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


void fn_83008550(int param_1,unsigned int *param_2,unsigned int *param_3)

{
  struct { unsigned int first; unsigned int second; } stack_pair_20;

  
  fn_82FFA5E0(&stack_pair_20.first,lbl_832642F0,*(unsigned int *)(param_1 + 4));
  *param_3 = stack_pair_20.second;
  *param_2 = stack_pair_20.first;
  return;
}

