extern int fn_82810470();
extern int fn_82810B78();
extern int fn_82863A70();


void fn_82863C50(int param_1,unsigned __int64 param_2)

{
  int iVar1;
  
  fn_82863A70(*(unsigned int *)(param_1 + 4),*(unsigned short *)(param_1 + 8),0,1,2,param_2);
  iVar1 = fn_82810470(param_2);
  if (iVar1 == 0) {
    fn_82810B78(param_2,param_2);
  }
  return;
}

