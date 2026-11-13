extern int fn_82C00478();
extern int fn_82C06348();
extern int fn_82C065C8();
extern int fn_82C06680();
extern int fn_82C09818();
extern unsigned int lbl_820EC508;


unsigned int * fn_82C02770(unsigned int *param_1)

{
  fn_82C06348();
  fn_82C065C8(param_1 + 0xe);
  fn_82C00478(param_1 + 0x22);
  fn_82C09818(param_1 + 0x35);
  *param_1 = &lbl_820EC508;
  fn_82C06680(param_1);
  param_1[0x82] = 0;
  param_1[0x7f] = 2;
  param_1[0x83] = 0;
  *(unsigned __int64 *)(param_1 + 0x84) = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 1;
  return param_1;
}

