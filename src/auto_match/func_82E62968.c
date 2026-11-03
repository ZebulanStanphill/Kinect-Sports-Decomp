extern int fn_82E58050();
extern unsigned int lbl_8202E618[];
extern unsigned int lbl_82154AA8[];
extern unsigned int lbl_82154EC0;
extern unsigned int lbl_8215FDD0;

unsigned int *fn_82E62968(unsigned int *param_1)
{
  unsigned int v;
  unsigned __int64 *z;

  fn_82E58050();
  param_1[0] = (unsigned int)&lbl_82154EC0;
  param_1[1] = (unsigned int)&lbl_8215FDD0;
  param_1[4] = lbl_82154AA8[0];
  param_1[5] = lbl_82154AA8[1];
  param_1[6] = lbl_82154AA8[2];
  param_1[7] = lbl_82154AA8[3];
  param_1[0x12] = lbl_8202E618[0];
  param_1[0x13] = lbl_8202E618[1];
  param_1[0x14] = lbl_8202E618[2];
  v = lbl_8202E618[3];
  z = (unsigned __int64 *)(param_1 + 0x16);
  z[0] = 0;
  param_1[0x15] = v;
  z[1] = 0;
  z[2] = 0;
  z[3] = 0;
  z[4] = 0;
  z[5] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  return param_1;
}
