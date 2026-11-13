extern int fn_822315A0();
extern int fn_822C87C8();
extern int fn_82359BB0();
extern int fn_82359C18();
extern unsigned int lbl_821B14A0;


void fn_8233C258(unsigned int *param_1)

{
  *param_1 = &lbl_821B14A0;
  if (param_1[0x3d] != 0) {
    fn_822315A0();
  }
  fn_82359BB0(param_1 + 0x38);
  if (param_1[0x37] != 0) {
    fn_822315A0();
  }
  fn_82359C18(param_1 + 0x30);
  fn_822C87C8(param_1);
  return;
}

