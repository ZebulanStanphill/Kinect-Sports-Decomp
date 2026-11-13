extern int fn_82E27CF8();
extern int fn_82E4FE40();
extern unsigned int lbl_8214C450;
extern unsigned int lbl_8214C4F0;


void fn_82E2A9A8(unsigned int *param_1)

{
  *param_1 = &lbl_8214C4F0;
  param_1[1] = &lbl_8214C450;
  fn_82E27CF8();
  if (param_1[9] != 0) {
    fn_82E4FE40(param_1[9]);
  }
  param_1[9] = 0;
  param_1[10] = 0;
  return;
}

