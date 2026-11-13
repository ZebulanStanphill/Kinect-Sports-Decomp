extern int fn_82D0F4F0();
extern unsigned int uStack_10;
extern unsigned int uStack_c;


void fn_82D0F838(unsigned __int64 param_1,unsigned int param_2,unsigned int param_3)

{
  struct { unsigned int first; unsigned int second; } stack_pair_10;

  
  stack_pair_10.first = param_2;
  stack_pair_10.second = param_3;
  fn_82D0F4F0(param_1,&stack_pair_10.first,2);
  return;
}

