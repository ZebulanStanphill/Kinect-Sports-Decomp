extern int fn_82E4FE40();
extern int fn_82E583E0();
extern int fn_82F3E1E0();
extern unsigned int lbl_8215FDD0;
extern unsigned int lbl_82162F08;


void fn_82F40018(unsigned int *param_1)

{
  *param_1 = &lbl_82162F08;
  param_1[1] = &lbl_8215FDD0;
  if (param_1[0x12] != 0) {
    fn_82E4FE40(param_1[0x12]);
  }
  param_1[0x12] = 0;
  if (param_1[0x13] != 0) {
    fn_82E4FE40(param_1[0x13]);
  }
  param_1[0x13] = 0;
  if (param_1[0x14] != 0) {
    fn_82E4FE40(param_1[0x14]);
  }
  param_1[0x14] = 0;
  if (param_1[0x15] != 0) {
    fn_82E4FE40(param_1[0x15]);
  }
  param_1[0x15] = 0;
  if (param_1[0x16] != 0) {
    fn_82E4FE40(param_1[0x16]);
  }
  param_1[0x16] = 0;
  fn_82F3E1E0(param_1 + 1);
  fn_82E583E0(param_1);
  return;
}

