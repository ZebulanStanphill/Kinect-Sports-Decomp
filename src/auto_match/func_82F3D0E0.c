extern int fn_82E579E0();
extern int fn_82E57CA0();
extern unsigned int lbl_82162D4C;
extern unsigned int lbl_82162D60;


void fn_82F3D0E0(unsigned int *param_1)

{
  *param_1 = &lbl_82162D60;
  param_1[1] = &lbl_82162D4C;
  fn_82E579E0(param_1 + 10);
  fn_82E57CA0(param_1 + 10);
  return;
}

