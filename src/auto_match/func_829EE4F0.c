extern int fn_829EA248();
extern int fn_829EE3F8();


void fn_829EE4F0(int *param_1,unsigned __int64 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = fn_829EE3F8(param_1 + 1);
  if ((iVar1 < 0) || (iVar1 = fn_829EA248(param_1 + 6,param_2), iVar1 < 0)) {
    *param_1 = iVar1;
  }
  else {
    param_1[5] = param_3;
  }
  return;
}

