extern int fn_8268F6B8();
extern unsigned int lbl_820054D0;
extern unsigned int lbl_820054E8;


unsigned int * fn_8267B430(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  
  *param_1 = &lbl_820054E8;
  param_1[1] = 0;
  param_1[2] = &lbl_820054D0;
  if (param_1 + 4 == (unsigned int *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = fn_8268F6B8(param_1 + 4,param_1 + 2,param_3,param_2,1);
  }
  param_1[3] = uVar1;
  return param_1;
}

