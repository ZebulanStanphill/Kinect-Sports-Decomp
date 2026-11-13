extern int fn_82CE5410();
extern int fn_82CFBE40();
extern int fn_82D05808();


void fn_82D05010(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned int param_4)

{
  int iVar1;
  
  if ((int)param_4 < 0) {
    param_4 = fn_82CFBE40(param_3);
  }
  iVar1 = fn_82CE5410();
  fn_82D05808(param_1,*(unsigned int *)(iVar1 + 0xc),param_2,0,param_3,param_4);
  return;
}

