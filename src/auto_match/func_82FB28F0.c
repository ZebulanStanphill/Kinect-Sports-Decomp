extern int fn_82FB63E0();
extern unsigned int lbl_8216D5A4;
extern unsigned int lbl_8216D5B0;
extern unsigned int lbl_8217C940;


unsigned int * fn_82FB28F0(unsigned int *param_1)

{
  fn_82FB63E0();
  *param_1 = &lbl_8216D5B0;
  param_1[7] = &lbl_8217C940;
  param_1[0x2c] = 0;
  param_1[0x2b] = &lbl_8216D5A4;
  param_1[0x2d] = 0;
  *(unsigned short *)((int)param_1 + 0xba) = 0x32;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(unsigned char *)(param_1 + 0x34) = 0;
  *(unsigned char *)((int)param_1 + 0xd1) = 1;
  *(unsigned char *)((int)param_1 + 0xd2) = 0;
  *(unsigned short *)(param_1 + 0x35) = 0;
  return param_1;
}

