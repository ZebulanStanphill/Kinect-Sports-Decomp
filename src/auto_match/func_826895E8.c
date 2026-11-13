extern unsigned int lbl_82005BB4;
extern unsigned int lbl_82005C14;
extern unsigned int lbl_82005C20;


void fn_826895E8(unsigned int *param_1,int param_2,unsigned char param_3)

{
  param_1[1] = 1;
  param_1[2] = &lbl_82005BB4;
  param_1[3] = 0;
  *param_1 = &lbl_82005C20;
  param_1[2] = &lbl_82005C14;
  if (param_2 != 0) {
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
  }
  param_1[5] = param_2;
  *(unsigned char *)(param_1 + 8) = param_3;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 1;
  return;
}

