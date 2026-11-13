extern int fn_82BE8CF8();
extern int fn_82BF6CA8();
extern int fn_82BF6CE8();
extern int fn_82BFAA08();
extern int fn_82BFABC8();
extern int fn_82BFACE8();
extern unsigned int lbl_820EB7A0;


void fn_82BF3CC0(unsigned int *param_1)

{
  *param_1 = &lbl_820EB7A0;
  fn_82BF6CA8(param_1 + 6);
  fn_82BFAA08(param_1 + 0x16);
  fn_82BFABC8(param_1 + 0xb);
  fn_82BF6CE8(param_1 + 6);
  fn_82BFACE8(param_1 + 2);
  fn_82BE8CF8(param_1);
  return;
}

