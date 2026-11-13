extern int fn_82A3F6F0();
extern int fn_82A411B8();
extern int fn_82A446E8();
extern unsigned int lbl_8208998C;
extern unsigned int lbl_82089A38;


void fn_82A491B8(unsigned int *param_1)

{
  param_1[1] = &lbl_82089A38;
  param_1[0x23] = &lbl_8208998C;
  *param_1 = 0;
  fn_82A411B8(param_1 + 0x87);
  fn_82A411B8(param_1 + 0x7d);
  fn_82A3F6F0(param_1 + 0x7b);
  fn_82A446E8(param_1);
  return;
}

