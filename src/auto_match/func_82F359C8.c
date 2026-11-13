extern int fn_82E579E0();
extern int fn_82E57CA0();
extern unsigned int lbl_82162B24;
extern unsigned int lbl_82162B38;


void fn_82F359C8(unsigned int *param_1)

{
  *param_1 = &lbl_82162B38;
  param_1[1] = &lbl_82162B24;
  fn_82E579E0(param_1 + 10);
  fn_82E57CA0(param_1 + 10);
  return;
}

