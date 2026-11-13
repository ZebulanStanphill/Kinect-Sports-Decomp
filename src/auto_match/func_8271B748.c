extern int fn_826C1AD8();
extern int fn_826C26B0();
extern int fn_827121D0();
extern unsigned int lbl_8200FB5C;
extern unsigned int lbl_8200FB60;
extern unsigned int lbl_8200FBB4;


void fn_8271B748(unsigned int *param_1)

{
  *param_1 = &lbl_8200FBB4;
  param_1[4] = &lbl_8200FB60;
  param_1[0xd] = &lbl_8200FB5C;
  fn_826C26B0(param_1 + 0xd);
  fn_827121D0(param_1 + 0xc);
  fn_826C1AD8(param_1);
  return;
}

