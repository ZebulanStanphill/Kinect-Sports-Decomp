extern unsigned int lbl_8200D940;


void fn_826EF9F8(unsigned int *param_1,unsigned int param_2,unsigned int *param_3)

{
  param_1[1] = param_2;
  *(unsigned char *)(param_1 + 2) = 0;
  *param_1 = &lbl_8200D940;
  param_1[3] = *param_3;
  param_1[4] = param_3[1];
  return;
}

