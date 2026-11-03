extern int fn_82E58050();
extern unsigned int lbl_821549A8[];
extern unsigned int lbl_8215FDD0;
extern unsigned int lbl_82162ED8;

unsigned int *fn_82F3F228(unsigned int *param_1)
{
  unsigned int v;

  fn_82E58050();
  param_1[0] = (unsigned int)&lbl_82162ED8;
  param_1[1] = (unsigned int)&lbl_8215FDD0;
  param_1[2] = 1;
  param_1[4] = lbl_821549A8[0];
  param_1[5] = lbl_821549A8[1];
  param_1[6] = lbl_821549A8[2];
  v = lbl_821549A8[3];
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[7] = v;
  return param_1;
}
