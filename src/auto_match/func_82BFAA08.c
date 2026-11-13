extern int fn_82A1E658();
extern int fn_82BE8CF8();
extern unsigned int lbl_820EBE70;


void fn_82BFAA08(unsigned int *param_1)

{
  *param_1 = &lbl_820EBE70;
  if (param_1[2] != 0) {
    fn_82A1E658(param_1[2]);
    param_1[2] = 0;
  }
  fn_82BE8CF8(param_1);
  return;
}

