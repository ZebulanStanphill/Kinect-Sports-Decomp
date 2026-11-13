extern unsigned int lbl_8216CC28;


void fn_82FA9370(unsigned int *param_1,unsigned int param_2,unsigned char param_3)

{
  param_1[3] = param_2;
  *(unsigned char *)(param_1 + 4) = param_3;
  param_1[1] = 0;
  *param_1 = &lbl_8216CC28;
  param_1[2] = 0;
  return;
}

