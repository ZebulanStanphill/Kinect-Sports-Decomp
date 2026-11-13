extern int fn_82BE8D50();
extern int fn_82BF79D8();
extern unsigned int lbl_820EBC38;


void fn_82BF7A60(unsigned int *param_1)

{
  *param_1 = &lbl_820EBC38;
  if (param_1[4] != 0) {
    fn_82BE8D50(param_1[4]);
    param_1[4] = 0;
  }
  fn_82BF79D8(param_1);
  return;
}

