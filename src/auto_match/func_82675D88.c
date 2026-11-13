extern int fn_8263C7D8();
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


unsigned __int64 fn_82675D88(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned int *param_4)

{
  struct { unsigned int first; unsigned int second; } stack_pair_20;

  
  fn_8263C7D8(*(unsigned int *)(param_1 + 0x28),param_2,&stack_pair_20.first,0,0);
  param_4[2] = stack_pair_20.second;
  param_4[3] = stack_pair_20.first;
  *param_4 = *(unsigned int *)(param_1 + 0x20);
  param_4[1] = *(unsigned int *)(param_1 + 0x24);
  return 1;
}

