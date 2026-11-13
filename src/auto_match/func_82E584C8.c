extern int fn_82E58050();
extern unsigned int lbl_82154A58;
extern unsigned int lbl_82154A5C;
extern unsigned int lbl_82154A60;
extern unsigned int lbl_82154A64;
extern unsigned int lbl_82154CE8;
extern unsigned int lbl_8215FDD0;
extern unsigned int lbl_82162BB0;


unsigned int * fn_82E584C8(unsigned int *param_1)

{
  fn_82E58050();
  *param_1 = &lbl_82154CE8;
  param_1[1] = &lbl_8215FDD0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(unsigned short *)(param_1 + 0x16) = 0;
  *(unsigned char *)((int)param_1 + 0x5a) = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x12] = &lbl_82162BB0;
  param_1[2] = 1;
  param_1[4] = lbl_82154A58;
  param_1[5] = lbl_82154A5C;
  param_1[6] = lbl_82154A60;
  param_1[7] = lbl_82154A64;
  return param_1;
}

