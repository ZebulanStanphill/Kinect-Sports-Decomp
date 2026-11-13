extern int fn_82250EC8();
extern int fn_828E3228();
extern unsigned int lbl_821968A4;
extern unsigned int lbl_8219802C;


void fn_82250E10(unsigned int *param_1)

{
  *param_1 = &lbl_8219802C;
  param_1[10] = &lbl_821968A4;
  fn_82250EC8(param_1 + 0xc);
  fn_828E3228(param_1);
  return;
}

