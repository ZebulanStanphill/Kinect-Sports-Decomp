extern int fn_829DC830();
extern int fn_829DCFB0();


void fn_829DD328(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int aiStack_30;
  
  aiStack_30 = param_1;
  fn_829DCFB0(*(unsigned int *)(param_1 + 0xf4a10),param_2,&aiStack_30,param_3);
  fn_829DC830(param_1,param_1,param_2,param_3);
  *(unsigned int *)(param_1 + 0xf4a14) = 0;
  return;
}

