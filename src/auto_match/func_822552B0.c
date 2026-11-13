extern int fn_82233640();
extern int fn_8223B8C8();
extern int fn_8223B930();
extern int fn_82240688();
extern int fn_82240DB8();
extern unsigned int lbl_82198138;
extern unsigned int lbl_82198148;
extern unsigned int lbl_821981C0;
extern unsigned int ltcg_pool_0_0f;


unsigned int * fn_822552B0(unsigned int *param_1)

{
  fn_82233640();
  *param_1 = &lbl_82198148;
  fn_82240DB8(param_1 + 0x83,1);
  param_1[0x85] = 5;
  param_1[0x86] = ltcg_pool_0_0f;
  param_1[0x83] = &lbl_821981C0;
  fn_82240688(param_1 + 0x99);
  fn_82240688(param_1 + 0xaf);
  fn_82240688(param_1 + 0xc5);
  fn_82240688(param_1 + 0xdb);
  fn_82240688(param_1 + 0xf1);
  fn_8223B930(param_1 + 0x107);
  fn_8223B930(param_1 + 0x121);
  fn_82240DB8(param_1 + 0x13b,1);
  param_1[0x13d] = 7;
  param_1[0x13f] = 1;
  param_1[0x13e] = 0;
  param_1[0x13b] = &lbl_82198138;
  fn_8223B930(param_1 + 0x151);
  fn_8223B8C8(param_1 + 0x16b);
  return param_1;
}

