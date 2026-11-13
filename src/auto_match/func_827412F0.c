extern int fn_826C26B0();
extern int fn_82740318();
extern unsigned int lbl_82012410;
extern unsigned int lbl_82012464;
extern unsigned int lbl_820124CC;


void fn_827412F0(unsigned int *param_1)

{
  *param_1 = &lbl_82012464;
  param_1[4] = &lbl_82012410;
  param_1[0x11] = &lbl_820124CC;
  fn_826C26B0(param_1 + 0x11);
  fn_82740318(param_1);
  return;
}

