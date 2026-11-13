extern int fn_8304DC40();
extern unsigned int lbl_8217DA58;


unsigned int * fn_83048518(unsigned int *param_1)

{
  fn_8304DC40();
  param_1[0x17] = 0;
  *param_1 = &lbl_8217DA58;
  *(unsigned short *)(param_1 + 0x18) = 0;
  *(unsigned short *)((int)param_1 + 0x62) = 0;
  return param_1;
}

