extern int fn_82BE8D50();
extern int fn_82BF7A60();
extern unsigned int lbl_820EBCA4;


void fn_82BF7CB0(unsigned int *param_1)

{
  *param_1 = &lbl_820EBCA4;
  if (param_1[5] != 0) {
    fn_82BE8D50(param_1[5]);
    param_1[5] = 0;
  }
  fn_82BF7A60(param_1);
  return;
}

