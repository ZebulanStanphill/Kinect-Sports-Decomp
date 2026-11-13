extern int fn_82FB2BD0();
extern int fn_82FB6790();
extern int fn_82FB7DB8();
extern unsigned int lbl_8216D5B0;
extern unsigned int lbl_8217C940;


void fn_82FB30A8(unsigned int *param_1)

{
  *param_1 = &lbl_8216D5B0;
  param_1[7] = &lbl_8217C940;
  fn_82FB2BD0();
  fn_82FB7DB8(param_1 + 0x2b);
  fn_82FB6790(param_1);
  return;
}

