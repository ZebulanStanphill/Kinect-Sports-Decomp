extern unsigned int lbl_8200C128;


void fn_826D28F0(unsigned int *param_1,unsigned int param_2)

{
  param_1[2] = 0;
  param_1[1] = 1;
  param_1[3] = 0x40000;
  *param_1 = &lbl_8200C128;
  param_1[4] = param_2;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(unsigned char *)(param_1 + 0xd) = 0;
  return;
}

