extern int fn_82FF1A28();
extern unsigned int uStack_10;
extern unsigned int uStack_c;


void fn_82FA85B8(__int64 param_1,unsigned int param_2)

{
  struct { unsigned int first; unsigned int second; } stack_pair_10;

  
  stack_pair_10.second = stack_pair_10.second & 0x3fffffff | 0x40000000;
  stack_pair_10.first = param_2;
  fn_82FF1A28(param_1 + -0x188,&stack_pair_10.first);
  return;
}

