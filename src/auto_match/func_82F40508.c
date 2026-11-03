extern int fn_82E58050(int *);
extern int lbl_820ED0A8[];
extern int lbl_82154BA8[];
extern int lbl_82162F38[];
extern int lbl_82162F4C[];

int *fn_82F40508(int *param_1)
{
  fn_82E58050(param_1);
  param_1[0] = (int)lbl_82162F4C;
  param_1[1] = (int)lbl_82162F38;
  param_1[4] = lbl_820ED0A8[0];
  param_1[5] = lbl_820ED0A8[1];
  param_1[6] = lbl_820ED0A8[2];
  param_1[7] = lbl_820ED0A8[3];
  param_1[0x12] = lbl_82154BA8[0];
  param_1[0x13] = lbl_82154BA8[1];
  param_1[0x14] = lbl_82154BA8[2];
  param_1[0x15] = lbl_82154BA8[3];
  *(short *)(param_1 + 0x16) = 6;
  return param_1;
}
