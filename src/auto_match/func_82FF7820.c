extern int fn_82FF8358();


char fn_82FF7820(__int64 param_1,unsigned int param_2,unsigned int param_3)

{
  int iVar1;
  struct { unsigned int first; unsigned int second; unsigned int third; } stack_pair_20;
  
  stack_pair_20.second = 0;
  stack_pair_20.first = param_2;
  stack_pair_20.third = param_3;
  iVar1 = fn_82FF8358(param_1 + 0x30,&stack_pair_20.first);
  return (iVar1 == 0) + '\x01';
}

