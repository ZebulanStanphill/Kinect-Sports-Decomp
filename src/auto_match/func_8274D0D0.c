extern int fn_826C26B0();
extern int fn_8274CE00();
extern unsigned int lbl_820135A8;
extern unsigned int lbl_820135B0;
extern unsigned int lbl_82013660;


void fn_8274D0D0(unsigned int *param_1)

{
  *param_1 = &lbl_82013660;
  param_1[4] = &lbl_820135B0;
  param_1[0xe] = &lbl_820135A8;
  fn_826C26B0(param_1 + 0xe);
  fn_8274CE00(param_1);
  return;
}

