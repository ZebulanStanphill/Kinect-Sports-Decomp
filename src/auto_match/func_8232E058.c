extern void fn_82230300(void *, int, int);
extern void fn_822C71C8(void *);
extern void fn_82359C18(void *);
extern unsigned int lbl_821B07D4;
extern unsigned int lbl_821C7FB8;

void fn_8232E058(void **param_1)
{
  void **sub;

  *param_1 = &lbl_821B07D4;
  sub = param_1 + 0x2a;
  fn_82359C18(sub + 2);
  *sub = &lbl_821C7FB8;
  fn_82230300(param_1 + 0x1e, 1, 0);
  fn_82230300(param_1 + 0x17, 1, 0);
  fn_822C71C8(param_1);
}
