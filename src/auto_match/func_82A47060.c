extern int fn_82A3F6F0();
extern int fn_82A411B8();
extern int fn_82A446E8();
extern unsigned int lbl_82089874;
extern unsigned int lbl_820898A0;


void fn_82A47060(unsigned int *param_1)

{
  param_1[1] = &lbl_820898A0;
  param_1[0x23] = &lbl_82089874;
  *param_1 = 0;
  fn_82A411B8(param_1 + 0xa6);
  fn_82A411B8(param_1 + 0x9c);
  fn_82A3F6F0(param_1 + 0x9a);
  fn_82A411B8(param_1 + 0x89);
  fn_82A411B8(param_1 + 0x7f);
  fn_82A446E8(param_1);
  return;
}

