extern int fn_82359C18();
extern int fn_828E3228();
extern int fn_828E32A0();
extern unsigned int lbl_821968A4;
extern unsigned int lbl_82198478;


void fn_82258B00(unsigned int *param_1)
{
  unsigned int *q = param_1 + 0xc;
  *param_1 = (unsigned int)&lbl_82198478;
  param_1[10] = (unsigned int)&lbl_821968A4;
  fn_82359C18(q + 0x14);
  fn_82359C18(q + 0xe);
  fn_828E32A0(q);
  fn_828E3228(param_1);
}
