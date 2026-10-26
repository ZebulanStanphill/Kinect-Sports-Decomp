extern void fn_82230300(void *, int, int);
extern void fn_822315A0(void *);
extern void fn_822C71C8(void *);
extern void fn_82359C18(void *);
extern unsigned int lbl_821ADB5C;
extern unsigned int lbl_821C7FB8;

void fn_822DDA00(void **param_1)
{
  void **sub;

  *param_1 = &lbl_821ADB5C;
  sub = param_1 + 0x20;
  fn_82359C18(sub + 2);
  *sub = &lbl_821C7FB8;
  if (param_1[0x1f] != 0) {
    fn_822315A0(param_1[0x1f]);
  }
  fn_82230300(param_1 + 0x17, 1, 0);
  fn_822C71C8(param_1);
}
