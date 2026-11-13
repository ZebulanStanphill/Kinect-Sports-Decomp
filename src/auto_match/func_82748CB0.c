extern int fn_826C1AD8();
extern int fn_826C26B0();
extern unsigned int lbl_82012C60;
extern unsigned int lbl_82012D54;
extern unsigned int lbl_82012D58;


void fn_82748CB0(unsigned int *param_1)

{
  *param_1 = &lbl_82012D58;
  param_1[4] = &lbl_82012C60;
  param_1[0x14] = &lbl_82012D54;
  fn_826C26B0(param_1 + 0x14);
  fn_826C1AD8(param_1);
  return;
}

