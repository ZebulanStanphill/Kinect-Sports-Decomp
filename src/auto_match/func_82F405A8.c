extern int fn_82E583E0();
extern int fn_82F3E1E0();
extern unsigned int lbl_82162F38;
extern unsigned int lbl_82162F4C;


void fn_82F405A8(unsigned int *param_1)

{
  *param_1 = &lbl_82162F4C;
  param_1[1] = &lbl_82162F38;
  fn_82F3E1E0(param_1 + 1);
  fn_82E583E0(param_1);
  return;
}

