extern int fn_82E579E0();
extern int fn_82E57CA0();
extern unsigned int lbl_82154CB8;
extern unsigned int lbl_8215FDD0;


void fn_82E583E0(unsigned int *param_1)

{
  *param_1 = &lbl_82154CB8;
  param_1[1] = &lbl_8215FDD0;
  fn_82E579E0(param_1 + 10);
  fn_82E57CA0(param_1 + 10);
  return;
}

