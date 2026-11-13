extern unsigned int lbl_8200D940;


void fn_826EFA28(unsigned int *param_1,unsigned int param_2,unsigned int *param_3)

{
  param_1[1] = param_2;
  *(unsigned char *)(param_1 + 2) = 0;
  *param_1 = &lbl_8200D940;
  param_1[3] = (*param_3 & 0xfffffffc) + 8;
  param_1[4] = *(unsigned int *)(*param_3 & 0xfffffffc) & 0x7fffffff;
  return;
}

