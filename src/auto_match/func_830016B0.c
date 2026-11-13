extern int fn_83005EF8();
extern unsigned int lbl_8217BDC0;
extern unsigned int lbl_8217C940;
extern unsigned int lbl_821AAD20;


unsigned int * fn_830016B0(unsigned int *param_1)

{
  unsigned int uVar1;
  
  fn_83005EF8();
  *param_1 = &lbl_8217BDC0;
  param_1[7] = &lbl_8217C940;
  param_1[0x12] = 0;
  uVar1 = lbl_821AAD20;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = uVar1;
  param_1[0x16] = uVar1;
  param_1[0x15] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(unsigned short *)(param_1 + 0x1b) = 0;
  *(unsigned short *)((int)param_1 + 0x6e) = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  *(unsigned short *)((int)param_1 + 0x62) = 0;
  *(unsigned char *)(param_1 + 0x18) = 0;
  return param_1;
}

