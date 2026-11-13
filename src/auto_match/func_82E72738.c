extern int fn_82E58050();
extern unsigned int lbl_821549E8;
extern unsigned int lbl_821549EC;
extern unsigned int lbl_821549F0;
extern unsigned int lbl_821549F4;
extern unsigned int lbl_8215FDD0;
extern unsigned int lbl_8215FDE4;
extern unsigned int lbl_82162BB0;


unsigned int * fn_82E72738(unsigned int *param_1)

{
  unsigned int uVar1;
  
  fn_82E58050();
  *param_1 = &lbl_8215FDE4;
  param_1[1] = &lbl_8215FDD0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(unsigned short *)(param_1 + 0x17) = 0;
  *(unsigned char *)((int)param_1 + 0x5e) = 0;
  param_1[0x13] = &lbl_82162BB0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[2] = 1;
  param_1[4] = lbl_821549E8;
  param_1[5] = lbl_821549EC;
  param_1[6] = lbl_821549F0;
  uVar1 = lbl_821549F4;
  param_1[0x12] = 0;
  param_1[7] = uVar1;
  return param_1;
}

