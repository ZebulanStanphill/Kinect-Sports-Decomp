extern int fn_82E58050();
extern unsigned int lbl_82154B08;
extern unsigned int lbl_82154B0C;
extern unsigned int lbl_82154B10;
extern unsigned int lbl_82154B14;
extern unsigned int lbl_8215FDA0;
extern unsigned int lbl_8215FDD0;
extern unsigned int lbl_82162C1C;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

unsigned int * fn_82EE6550(unsigned int *param_1)

{
  fn_82E58050();
  *param_1 = &lbl_8215FDA0;
  param_1[1] = &lbl_8215FDD0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(unsigned short *)(param_1 + 0x17) = 0;
  *(unsigned char *)((int)param_1 + 0x5e) = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x12] = &lbl_82162C1C;
  param_1[2] = 1;
  param_1[4] = lbl_82154B08;
  param_1[5] = lbl_82154B0C;
  param_1[6] = lbl_82154B10;
  param_1[7] = lbl_82154B14;
  return param_1;
}

