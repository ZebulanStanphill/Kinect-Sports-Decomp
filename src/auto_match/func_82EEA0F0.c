extern int fn_82A1E658();
extern int fn_82E50EA0();
extern unsigned int lbl_8215FF94;
extern unsigned int lbl_8216000C;


void fn_82EEA0F0(unsigned int *param_1)

{
  *param_1 = &lbl_8216000C;
  if (param_1[0x1c] != 0) {
    fn_82A1E658(param_1[0x1c]);
    param_1[0x1c] = 0;
  }
  *param_1 = &lbl_8215FF94;
  fn_82E50EA0(param_1 + 1);
  return;
}

