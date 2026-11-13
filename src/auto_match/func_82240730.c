extern int fn_8223BDA8();
extern int fn_8223C138();
extern int fn_822405D0();
extern int fn_82240688();
extern int fn_8288B300();
extern unsigned int lbl_821970D0;
extern unsigned int lbl_821972A4;
extern unsigned int lbl_821972AC;
extern unsigned int lbl_821972BC;


unsigned int * fn_82240730(unsigned int *param_1)

{
  fn_8288B300(param_1,1);
  *param_1 = &lbl_821972A4;
  fn_8223BDA8(param_1 + 0xd,1);
  param_1[0xd] = &lbl_821972AC;
  fn_8223C138(param_1 + 0x23,1);
  param_1[0x23] = &lbl_821972BC;
  fn_822405D0(param_1 + 0x39,1);
  param_1[0x39] = &lbl_821970D0;
  fn_82240688(param_1 + 0x51);
  fn_82240688(param_1 + 0x67);
  fn_82240688(param_1 + 0x7d);
  fn_82240688(param_1 + 0x93);
  fn_82240688(param_1 + 0xa9);
  return param_1;
}

