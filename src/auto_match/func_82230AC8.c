extern int fn_82681648();
extern unsigned int lbl_82002BE8;


unsigned int * fn_82230AC8(unsigned int *param_1,unsigned __int64 param_2)

{
  __int64 lVar1;
  
  lVar1 = 0;
  param_1[1] = 1;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *param_1 = &lbl_82002BE8;
  if ((param_2 & 0xffffffff) != 0) {
    lVar1 = param_2 + 8;
  }
  fn_82681648(param_1,lVar1);
  return param_1;
}

