extern unsigned int *auStack_20;
extern int fn_82699FC8();


void fn_826C7400(int param_1,unsigned __int64 param_2,unsigned int *param_3)

{
  unsigned int auStack_20 [4];
  
  auStack_20[0] = *param_3;
  fn_82699FC8(param_1 + 0xa8,param_2,auStack_20);
  *(unsigned int *)(*(int *)(param_1 + 0xa0) + 0xb00) = *(unsigned int *)(*(int *)(param_1 + 0xa0) + 0xb00) | 0x400;
  return;
}

