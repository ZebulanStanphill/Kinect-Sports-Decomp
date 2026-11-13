extern int fn_826FDED0();
extern unsigned int lbl_8200DE24;


unsigned int * fn_82704C38(unsigned int *param_1,unsigned int param_2,unsigned char param_3)

{
  *param_1 = &lbl_8200DE24;
  param_1[1] = 1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[7] = param_2;
  param_1[4] = 100;
  param_1[5] = 100;
  param_1[6] = 1;
  fn_826FDED0(param_1 + 8);
  *(unsigned char *)(param_1 + 0x13) = param_3;
  return param_1;
}

