extern int fn_822CC3C0();
extern int fn_82517978();
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


void fn_822CC178(unsigned int *param_1)

{
  struct { unsigned int first; unsigned int second; } stack_pair_20;

  
  stack_pair_20.first = 0;
  stack_pair_20.second = 0;
  fn_82517978(&stack_pair_20.first,*param_1,param_1[1],0);
  fn_822CC3C0(param_1,&stack_pair_20.first,param_1 + 8,param_1 + 4,1);
  return;
}

