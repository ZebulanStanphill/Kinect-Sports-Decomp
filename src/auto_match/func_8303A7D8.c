extern unsigned int lbl_8217D304;


void fn_8303A7D8(unsigned int *param_1,unsigned int param_2)

{
  param_1[2] = param_2;
  param_1[1] = 0;
  *param_1 = &lbl_8217D304;
  *(unsigned char *)(param_1 + 3) = *(unsigned char *)(param_1 + 3) & 0x7f;
  return;
}

