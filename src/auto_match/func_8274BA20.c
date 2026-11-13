extern int fn_826C1AD8();
extern int fn_826C26B0();
extern unsigned int lbl_8200F0B0;
extern unsigned int lbl_82010284;
extern unsigned int lbl_82013318;


void fn_8274BA20(unsigned int *param_1)

{
  *param_1 = &lbl_82010284;
  param_1[4] = &lbl_82013318;
  param_1[0xc] = &lbl_8200F0B0;
  fn_826C26B0(param_1 + 0xc);
  fn_826C1AD8(param_1);
  return;
}

