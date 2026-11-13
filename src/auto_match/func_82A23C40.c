extern unsigned int *auStack_1c;
extern int fn_82A20370();
extern int fn_82A23408();
extern unsigned int uStack_20;


void fn_82A23C40(unsigned __int64 param_1,unsigned __int64 param_2,unsigned short *param_3)

{
  struct { unsigned int first; unsigned int second; } stack_pair_20;

  
  stack_pair_20.second = *(unsigned int *)(param_3 + 2);
  stack_pair_20.first = (unsigned int)*param_3;
  fn_82A20370(&stack_pair_20.second,&stack_pair_20.first,0x3a,param_1);
  fn_82A23408(param_1,param_2,stack_pair_20.second,stack_pair_20.first & 0xffff,1);
  return;
}

