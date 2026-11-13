extern int fn_826C1AD8();
extern int fn_826C26B0();
extern unsigned int lbl_820129E0;
extern unsigned int lbl_82012AD0;
extern unsigned int lbl_82012B24;


void fn_82744FC0(unsigned int *param_1)

{
  *param_1 = &lbl_82012B24;
  param_1[4] = &lbl_82012AD0;
  param_1[0xc] = &lbl_820129E0;
  fn_826C26B0(param_1 + 0xc);
  fn_826C1AD8(param_1);
  return;
}

