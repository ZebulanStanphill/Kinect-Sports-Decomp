unsigned __int64 fn_82817B50(unsigned int *param_1,unsigned int param_2,int *param_3)

{
  unsigned __int64 uVar1;
  int iVar2;
  
  if ((((param_1 == (unsigned int *)0x0) || (param_3 == (int *)0x0)) || ((int)param_2 < 0)) ||
     (param_2 >= *param_1)) {
    iVar2 = 0;
    uVar1 = 0;
  }
  else {
    iVar2 = param_1[1] + param_2 * 0xc;
    uVar1 = 1;
  }
  *param_3 = iVar2;
  return uVar1;
}

