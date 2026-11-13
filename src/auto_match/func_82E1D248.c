extern int fn_82A1E228();
extern int fn_82A1F2F8();
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


void fn_82E1D248(int param_1)

{
  unsigned int uVar1;
  struct { unsigned int first; unsigned int second; } stack_pair_20;

  
  fn_82A1E228(&stack_pair_20.first);
  uVar1 = fn_82A1F2F8();
  *(unsigned int *)(param_1 + 4) = stack_pair_20.first ^ stack_pair_20.second ^ uVar1;
  return;
}

