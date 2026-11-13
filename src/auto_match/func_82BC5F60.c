extern int fn_82BBFE98();
extern int fn_82BC6DC0();
extern unsigned int lbl_820E0214;
extern unsigned int lbl_820E4BDC;


void fn_82BC5F60(unsigned int *param_1)

{
  *param_1 = &lbl_820E4BDC;
  if (param_1[0xf] != 0) {
    fn_82BC6DC0(param_1[0xf],1);
  }
  if (param_1[0xe] != 0) {
    fn_82BC6DC0(param_1[0xe],1);
  }
  if (param_1[0x16] != 0) {
    fn_82BC6DC0(param_1[0x16],1);
  }
  if (param_1[0x17] != 0) {
    fn_82BC6DC0(param_1[0x17],1);
  }
  if (param_1[0xb] != 0) {
    fn_82BC6DC0(param_1[0xb],1);
  }
  fn_82BBFE98(param_1 + 5);
  param_1[8] = &lbl_820E0214;
  param_1[5] = &lbl_820E0214;
  *param_1 = &lbl_820E0214;
  return;
}

