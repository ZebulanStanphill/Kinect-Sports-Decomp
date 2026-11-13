extern unsigned int fStack_2c;
extern unsigned int fStack_30;
extern int fn_826EBD10();
extern int fn_82784648();


void fn_82784708(int param_1,float param_2,float param_3)

{
  struct { float first; float second; } stack_pair_30;

  
  fn_82784648();
  stack_pair_30.first = (float)param_2;
  stack_pair_30.second = (float)param_3;
  fn_826EBD10(param_1 + 8,&stack_pair_30.first);
  *(int *)(*(int *)(param_1 + 0x28) + 4) = *(int *)(*(int *)(param_1 + 0x28) + 4) + 1;
  return;
}

