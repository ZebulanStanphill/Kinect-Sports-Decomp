extern int fn_82C005C8();
extern int fn_82C06348();
extern int fn_82C065C8();
extern int fn_82C09960();
extern int fn_82C0BA98();
extern unsigned int lbl_820EC640;


unsigned int * fn_82C03AB8(unsigned int *param_1)

{
  fn_82C06348();
  fn_82C065C8(param_1 + 0xe);
  fn_82C005C8(param_1 + 0x1f);
  fn_82C0BA98(param_1 + 0x34);
  *param_1 = &lbl_820EC640;
  fn_82C09960(param_1);
  param_1[0xa8] = 0;
  param_1[0xa5] = 1;
  param_1[0xa9] = 0;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  return param_1;
}

