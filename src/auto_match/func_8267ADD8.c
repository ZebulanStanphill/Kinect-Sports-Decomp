extern int fn_8268E898();
extern unsigned int lbl_82005448;


unsigned int * fn_8267ADD8(unsigned int *param_1,unsigned int param_2)

{
  unsigned int uVar1;
  
  param_1[1] = param_2;
  uVar1 = 0;
  param_1[2] = 0;
  *param_1 = &lbl_82005448;
  param_1[3] = 0;
  param_1[0x2c] = 0;
  if (param_1 != (unsigned int *)0xfffffff0) {
    uVar1 = fn_8268E898();
  }
  param_1[3] = uVar1;
  return param_1;
}

