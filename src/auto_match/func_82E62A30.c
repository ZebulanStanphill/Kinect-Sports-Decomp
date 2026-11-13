extern int fn_82E583E0();
extern int fn_82F3E1E0();
extern unsigned int lbl_82154EC0;
extern unsigned int lbl_8215FDD0;


void fn_82E62A30(unsigned int *param_1)

{
  *param_1 = &lbl_82154EC0;
  param_1[1] = &lbl_8215FDD0;
  fn_82F3E1E0(param_1 + 1);
  fn_82E583E0(param_1);
  return;
}

