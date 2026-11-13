extern int fn_82241178();
extern int fn_828E3228();
extern unsigned int lbl_821968A4;
extern unsigned int lbl_82197408;


void fn_82241088(unsigned int *param_1)

{
  *param_1 = &lbl_82197408;
  param_1[10] = &lbl_821968A4;
  fn_82241178(param_1 + 0xc);
  fn_828E3228(param_1);
  return;
}

