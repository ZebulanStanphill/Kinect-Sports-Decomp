extern int fn_82E58050();
extern unsigned int lbl_82154A98;
extern unsigned int lbl_82154A9C;
extern unsigned int lbl_82154AA0;
extern unsigned int lbl_82154AA4;
extern unsigned int lbl_8215FD70;
extern unsigned int lbl_8215FDD0;
extern unsigned int lbl_82162BB0;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

unsigned int * fn_82EE5900(unsigned int *param_1)

{
  fn_82E58050();
  *param_1 = &lbl_8215FD70;
  param_1[1] = &lbl_8215FDD0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(unsigned short *)(param_1 + 0x17) = 0;
  *(unsigned char *)((int)param_1 + 0x5e) = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x13] = &lbl_82162BB0;
  param_1[2] = 1;
  param_1[4] = lbl_82154A98;
  param_1[5] = lbl_82154A9C;
  param_1[6] = lbl_82154AA0;
  param_1[7] = lbl_82154AA4;
  return param_1;
}

