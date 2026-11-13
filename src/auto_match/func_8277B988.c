extern int fn_8267BF50();
extern int fn_8277B4A0();
extern int fn_8277B808();


unsigned int * fn_8277B988(unsigned int *param_1,unsigned int param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned int uVar1;
  
  if (param_2 == 0) {
    param_2 = fn_8267BF50();
  }
  param_1[4] = param_2;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[2] = 0;
  uVar1 = fn_8277B808(param_1,param_3);
  param_1[3] = uVar1;
  fn_8277B4A0(param_1,param_4);
  return param_1;
}

