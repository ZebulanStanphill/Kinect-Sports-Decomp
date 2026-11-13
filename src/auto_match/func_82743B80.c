extern int fn_826C1AD8();
extern int fn_826C26B0();
extern unsigned int lbl_82012814;
extern unsigned int lbl_82012818;
extern unsigned int lbl_8201286C;


void fn_82743B80(unsigned int *param_1)

{
  *param_1 = &lbl_8201286C;
  param_1[4] = &lbl_82012818;
  param_1[0xc] = &lbl_82012814;
  fn_826C26B0(param_1 + 0xc);
  fn_826C1AD8(param_1);
  return;
}

