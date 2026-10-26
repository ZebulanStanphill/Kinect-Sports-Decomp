extern void fn_82491E88(void *);
extern void fn_82496658(void *);
extern unsigned int lbl_821BEBAC;
extern unsigned int lbl_821BEBB0;
extern unsigned int lbl_821BEEC4;
extern unsigned int lbl_821BEEFC;

void fn_82496368(void **param_1)
{
  void **sub;

  *param_1 = &lbl_821BEEFC;
  fn_82496658(param_1 + 0x18);
  sub = param_1 + 4;
  *sub = &lbl_821BEBAC;
  fn_82491E88(sub + 0xc);
  *sub = &lbl_821BEBB0;
  *param_1 = &lbl_821BEEC4;
}
