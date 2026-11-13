extern int fn_822CC3C0();
extern int fn_82517978();
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


void fn_822CC118(int param_1)

{
  struct { unsigned int first; unsigned int second; } stack_pair_20;

  
  stack_pair_20.first = 0;
  stack_pair_20.second = 0;
  fn_82517978(&stack_pair_20.first,*(unsigned int *)(param_1 + 0x24),*(unsigned int *)(param_1 + 0x28),0);
  fn_822CC3C0(param_1,&stack_pair_20.first,param_1 + 0x40,param_1 + 0x30,0);
  return;
}

