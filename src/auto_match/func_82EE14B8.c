extern int fn_82E58050();
extern unsigned int lbl_8215FA48;
extern unsigned int lbl_8215FA50;
extern unsigned int lbl_8215FDD0;


unsigned int * fn_82EE14B8(unsigned int *param_1)

{
  fn_82E58050();
  *param_1 = &lbl_8215FA50;
  param_1[1] = &lbl_8215FDD0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(unsigned short *)(param_1 + 0x1b) = 0;
  *(unsigned char *)((int)param_1 + 0x6e) = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x12] = &lbl_8215FA48;
  param_1[2] = 1;
  return param_1;
}

