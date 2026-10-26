extern void fn_82491E88(void *);
extern void fn_82499F80(void *);
extern unsigned int lbl_821BEBB0;
extern unsigned int lbl_821BEBB8;
extern unsigned int lbl_821BEEC4;
extern unsigned int lbl_821BEFDC;

void fn_82499CB8(void **param_1)
{
  void **sub;

  *param_1 = &lbl_821BEFDC;
  fn_82499F80(param_1 + 0x24);
  sub = param_1 + 4;
  *sub = &lbl_821BEBB8;
  fn_82491E88(sub + 0x14);
  *sub = &lbl_821BEBB0;
  *param_1 = &lbl_821BEEC4;
}
