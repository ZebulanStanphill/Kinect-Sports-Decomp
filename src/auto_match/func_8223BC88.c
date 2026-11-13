extern int fn_8288B338();
extern int fn_82897D88();
extern unsigned int lbl_82196884;
extern unsigned int lbl_821970C0;
extern unsigned int lbl_821970D0;
extern unsigned int lbl_821972A4;
extern unsigned int lbl_821972AC;
extern unsigned int lbl_821972BC;


void fn_8223BC88(unsigned int *param_1)

{
  *param_1 = &lbl_821972A4;
  param_1[0xa9] = &lbl_821970C0;
  fn_82897D88(param_1 + 0xa9);
  param_1[0x93] = &lbl_821970C0;
  fn_82897D88(param_1 + 0x93);
  param_1[0x7d] = &lbl_821970C0;
  fn_82897D88(param_1 + 0x7d);
  param_1[0x67] = &lbl_821970C0;
  fn_82897D88(param_1 + 0x67);
  param_1[0x51] = &lbl_821970C0;
  fn_82897D88(param_1 + 0x51);
  param_1[0x39] = &lbl_821970D0;
  fn_82897D88(param_1 + 0x39);
  param_1[0x23] = &lbl_821972BC;
  fn_82897D88(param_1 + 0x23);
  param_1[0xd] = &lbl_821972AC;
  fn_82897D88(param_1 + 0xd);
  *param_1 = &lbl_82196884;
  fn_8288B338(param_1);
  return;
}

