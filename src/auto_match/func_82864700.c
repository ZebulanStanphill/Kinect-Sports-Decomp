extern int fn_82639EA8();
extern unsigned int uStack_10;
extern unsigned int uStack_14;
extern unsigned int uStack_18;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;
extern unsigned int uStack_24;
extern unsigned int uStack_2c;
extern unsigned int uStack_c;


void fn_82864700(int param_1,unsigned __int64 param_2)

{
  unsigned int uStack_2c;
  unsigned int uStack_24;
  struct { unsigned int first; unsigned int second; } stack_pair_20;

  unsigned int uStack_18;
  unsigned int uStack_14;
  unsigned int uStack_10;
  unsigned int uStack_c;
  
  uStack_2c = (unsigned int)(__int64)*(float *)(param_1 + 0xec);
  uStack_18 = uStack_2c;
  uStack_24 = (unsigned int)(__int64)*(float *)(param_1 + 0xf0);
  uStack_14 = uStack_24;
  uStack_2c = (unsigned int)(__int64)*(float *)(param_1 + 0xe4);
  uStack_24 = (unsigned int)(__int64)*(float *)(param_1 + 0xe8);
  uStack_10 = *(unsigned int *)(param_1 + 0xf4);
  uStack_c = *(unsigned int *)(param_1 + 0xf8);
  stack_pair_20.first = uStack_2c;
  stack_pair_20.second = uStack_24;
  fn_82639EA8(param_2,&stack_pair_20.first);
  return;
}

