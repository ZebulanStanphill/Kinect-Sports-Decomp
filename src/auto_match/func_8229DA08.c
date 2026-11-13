extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_82672C20();
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_8229DA08(int param_1,int param_2)

{
  double dVar1;
  struct { unsigned int first; unsigned int second; } stack_pair_30;

  double dStack_28;
  
  *(int *)(param_1 + 0x10) = param_2;
  stack_pair_30.first = 0;
  stack_pair_30.second = 0;
  dVar1 = (double)(__int64)param_2;
  fn_82273CD8(&stack_pair_30.first,3);
  dStack_28 = dVar1;
  fn_82672C20(*(unsigned int *)(param_1 + 4),0xffffffff821ab40c,&stack_pair_30.first,1);
  fn_82273C88(&stack_pair_30.first);
  return;
}

