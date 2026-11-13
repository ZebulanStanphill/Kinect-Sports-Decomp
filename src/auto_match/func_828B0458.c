extern unsigned int lbl_82024D24;


void fn_828B0458(unsigned int *param_1,unsigned int param_2,unsigned int param_3)

{
  param_1[5] = param_2;
  param_1[6] = param_3;
  *(unsigned __int64 *)(param_1 + 2) = 0;
  *param_1 = &lbl_82024D24;
  param_1[4] = 0xffffffff;
  *(unsigned char *)(param_1 + 7) = 0;
  return;
}

