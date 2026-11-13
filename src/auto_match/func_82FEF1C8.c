extern int fn_83021E58();
extern unsigned int lbl_8217BB1C;


int fn_82FEF1C8(int param_1)

{
  *(unsigned int *)(param_1 + 0x1c) = 0;
  *(unsigned short *)(param_1 + 0x2c) = 0;
  *(unsigned int *)(param_1 + 0x30) = 0;
  *(unsigned int *)(param_1 + 0x1a4) = 0;
  *(unsigned int *)(param_1 + 0x1a8) = 0;
  *(unsigned char ***)(param_1 + 0x1a0) = &lbl_8217BB1C;
  fn_83021E58(param_1 + 0x1ac);
  return param_1;
}

