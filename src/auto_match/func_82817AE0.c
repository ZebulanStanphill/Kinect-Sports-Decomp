int  fn_82817AE0(unsigned int *param_1,unsigned int *param_2)

{
  int lVar1;
  
  lVar1 = (unsigned __int64)*param_1 - (unsigned __int64)*param_2;
  if (lVar1 == 0) {
    lVar1 = (unsigned __int64)param_1[1] - (unsigned __int64)param_2[1];
  }
  return lVar1;
}

