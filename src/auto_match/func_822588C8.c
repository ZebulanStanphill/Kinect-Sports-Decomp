extern int fn_822511E0();
extern int fn_828E3228();
extern unsigned int lbl_821968A4;
extern unsigned int lbl_821983B8;


void fn_822588C8(unsigned int *param_1)

{
  *param_1 = &lbl_821983B8;
  param_1[10] = &lbl_821968A4;
  fn_822511E0(param_1 + 0xc);
  fn_828E3228(param_1);
  return;
}

