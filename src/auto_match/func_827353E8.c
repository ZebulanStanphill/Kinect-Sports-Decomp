extern int fn_826C26B0();
extern int fn_82735388();
extern unsigned int lbl_820117A8;
extern unsigned int lbl_820117B0;
extern unsigned int lbl_820118D0;


void fn_827353E8(unsigned int *param_1)

{
  *param_1 = &lbl_820118D0;
  param_1[4] = &lbl_820117B0;
  param_1[0x1d] = &lbl_820117A8;
  fn_826C26B0(param_1 + 0x1d);
  fn_82735388(param_1);
  return;
}

