extern unsigned int lbl_82024D24;


void fn_828AC450(unsigned int *param_1,int param_2)

{
  *param_1 = &lbl_82024D24;
  *(unsigned char *)(param_1 + 1) = *(unsigned char *)(param_2 + 4);
  param_1[2] = *(unsigned int *)(param_2 + 8);
  param_1[3] = *(unsigned int *)(param_2 + 0xc);
  param_1[4] = *(unsigned int *)(param_2 + 0x10);
  param_1[5] = *(unsigned int *)(param_2 + 0x14);
  return;
}

