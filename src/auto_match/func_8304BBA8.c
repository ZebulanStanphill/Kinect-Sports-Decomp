extern int fn_8304DC40();
extern unsigned int lbl_8217DB48;


unsigned int * fn_8304BBA8(unsigned int *param_1)

{
  fn_8304DC40();
  param_1[0x18] = 0;
  *param_1 = &lbl_8217DB48;
  *(unsigned short *)(param_1 + 0x4f) = 0;
  return param_1;
}

