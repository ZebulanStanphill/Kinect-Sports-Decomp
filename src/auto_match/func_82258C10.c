extern int fn_82233640();
extern int fn_8223C138();
extern int fn_82240688();
extern int fn_82240DB8();
extern int fn_8265C9E0();
extern unsigned int lbl_821972BC;
extern unsigned int lbl_82198390;
extern unsigned int lbl_821983D0;
extern unsigned int lbl_82198430;
extern unsigned int lbl_82198440;
extern unsigned int lbl_82198460;


unsigned int * fn_82258C10(unsigned int *param_1)

{
  unsigned char *puVar1;
  
  fn_82233640();
  *param_1 = &lbl_82198460;
  fn_8223C138(param_1 + 0x83,1);
  param_1[0x83] = &lbl_821972BC;
  fn_82240688(param_1 + 0x99);
  fn_82240DB8(param_1 + 0xaf,1);
  param_1[0xb1] = 7;
  param_1[0xb3] = 4;
  param_1[0xb2] = 0;
  param_1[0xaf] = &lbl_821983D0;
  fn_82240DB8(param_1 + 0xc5,1);
  param_1[199] = 7;
  param_1[0xc9] = 4;
  param_1[200] = 0;
  param_1[0xc5] = &lbl_821983D0;
  fn_82240DB8(param_1 + 0xdb,1);
  param_1[0xdd] = 7;
  param_1[0xdf] = 4;
  param_1[0xde] = 0;
  param_1[0xdb] = &lbl_821983D0;
  fn_82240DB8(param_1 + 0xf1,1);
  param_1[0xf3] = 7;
  param_1[0xf5] = 4;
  param_1[0xf4] = 0;
  param_1[0xf1] = &lbl_821983D0;
  fn_82240688(param_1 + 0x107);
  fn_82240688(param_1 + 0x11d);
  fn_82240DB8(param_1 + 0x133,1);
  param_1[0x133] = &lbl_82198390;
  param_1[0x135] = 7;
  param_1[0x137] = 5;
  puVar1 = (unsigned char *)fn_8265C9E0(5);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  param_1[0x136] = puVar1;
  param_1[0x133] = &lbl_82198430;
  fn_82240DB8(param_1 + 0x149,1);
  param_1[0x15f] = 0;
  param_1[0x160] = 0;
  param_1[0x149] = &lbl_82198440;
  fn_8223C138(param_1 + 0x161,1);
  param_1[0x161] = &lbl_821972BC;
  fn_82240688(param_1 + 0x177);
  fn_82240688(param_1 + 0x18d);
  return param_1;
}

