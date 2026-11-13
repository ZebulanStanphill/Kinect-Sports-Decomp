extern int fn_82366A98();
extern int fn_8251FA58();
extern int fn_825708F0();
extern unsigned int lbl_821B51E8;


void fn_8239E260(unsigned int *param_1)

{
  *param_1 = &lbl_821B51E8;
  fn_825708F0(param_1[0xa7],param_1[0xb1]);
  fn_825708F0(param_1[0xa7],param_1[0xad]);
  fn_825708F0(param_1[0xa7],param_1[0xae]);
  fn_825708F0(param_1[0xa7],param_1[0xaf]);
  fn_825708F0(param_1[0xa7],param_1[0xb0]);
  if (param_1[0xb2] != 0) {
    fn_8251FA58(param_1[0xb2]);
  }
  if (param_1[0xb3] != 0) {
    fn_8251FA58(param_1[0xb3]);
  }
  if (param_1[0xb4] != 0) {
    fn_8251FA58(param_1[0xb4]);
  }
  if (param_1[0xb5] != 0) {
    fn_8251FA58(param_1[0xb5]);
  }
  fn_82366A98(param_1);
  return;
}

