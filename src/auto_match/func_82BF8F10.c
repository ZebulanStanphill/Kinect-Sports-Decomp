extern int fn_82BE5230();
extern int fn_82BE54C0();
extern int fn_82BF8D78();
extern unsigned int lbl_820EBE5C;


void fn_82BF8F10(unsigned int *param_1)

{
  *param_1 = &lbl_820EBE5C;
  fn_82BF8D78();
  fn_82BE54C0(param_1 + 0x39);
  fn_82BE5230(param_1 + 0x20);
  fn_82BE5230(param_1 + 8);
  fn_82BE5230(param_1);
  return;
}
