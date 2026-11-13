extern int fn_82BE8CF8();
extern int fn_82BE8D50();
extern unsigned int lbl_820EBDB8;


void fn_82BF88E8(unsigned int *param_1)

{
  *param_1 = &lbl_820EBDB8;
  if (param_1[2] != 0) {
    fn_82BE8D50(param_1[2]);
    param_1[2] = 0;
  }
  if (param_1[3] != 0) {
    fn_82BE8D50(param_1[3]);
    param_1[3] = 0;
  }
  fn_82BE8CF8(param_1);
  return;
}

