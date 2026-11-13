extern int fn_82E579E0();
extern int fn_82E57CA0();
extern unsigned int lbl_82162E1C;
extern unsigned int lbl_82162E30;


void fn_82F3E338(unsigned int *param_1)

{
  *param_1 = &lbl_82162E30;
  param_1[1] = &lbl_82162E1C;
  fn_82E579E0(param_1 + 10);
  fn_82E57CA0(param_1 + 10);
  return;
}

