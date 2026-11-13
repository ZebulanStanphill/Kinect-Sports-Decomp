extern int fn_822315A0();
extern int fn_82251180();
extern int fn_82359C18();
extern int fn_828E3228();
extern int fn_828E32A0();
extern unsigned int lbl_821968A4;
extern unsigned int lbl_821980B4;


void fn_822551D8(unsigned int *param_1)

{
  *param_1 = &lbl_821980B4;
  param_1[10] = &lbl_821968A4;
  if (param_1[0x45] != 0) {
    fn_822315A0();
  }
  fn_82359C18(param_1 + 0x3e);
  fn_82359C18(param_1 + 0x38);
  fn_828E32A0(param_1 + 0x2a);
  fn_82251180(param_1 + 0xc);
  fn_828E3228(param_1);
  return;
}

