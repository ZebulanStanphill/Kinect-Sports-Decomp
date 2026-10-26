extern void fn_8229AA08(void *);
extern void fn_82359C18(void *);
extern void fn_8240D8A0(void *);
extern unsigned int lbl_821B80C0;
extern unsigned int lbl_821B817C;
extern unsigned int lbl_821BA984;

void fn_8240D578(void **param_1)
{
  void **sub;

  *param_1 = &lbl_821B817C;
  fn_8229AA08(param_1 + 0x18);
  sub = param_1 + 8;
  *sub = &lbl_821BA984;
  fn_82359C18(sub + 10);
  fn_8240D8A0(param_1 + 2);
  *param_1 = &lbl_821B80C0;
}
