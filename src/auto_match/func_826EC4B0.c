extern int fn_826EBBE0();
extern int fn_826EC098();


void fn_826EC4B0(unsigned int *param_1,unsigned __int64 param_2)

{
  int lVar1;
  
  fn_826EC098(param_1,param_1,(unsigned __int64)param_1[1] + 1);
  lVar1 = (unsigned __int64)param_1[1] * 0x154 + (unsigned __int64)*param_1 + -0x154;
  if (lVar1 != 0) {
    fn_826EBBE0(lVar1,param_2);
  }
  return;
}

