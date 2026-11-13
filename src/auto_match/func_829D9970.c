extern int fn_829D4B80();
extern int fn_829DCFB0();


void fn_829D9970(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int aiStack_30;
  
  aiStack_30 = param_1;
  fn_829DCFB0(*(unsigned int *)(param_1 + 0x9c90),param_2,&aiStack_30,param_3);
  fn_829D4B80(param_1,param_1,param_2,param_3);
  *(unsigned int *)(param_1 + 0x9c94) = 0;
  return;
}

