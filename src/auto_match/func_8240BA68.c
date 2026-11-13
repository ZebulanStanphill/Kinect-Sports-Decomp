extern int fn_822315A0();
extern int fn_82359C18();
extern unsigned int lbl_821B80C0;
extern unsigned int lbl_821B8104;
extern unsigned int lbl_821BA984;
extern unsigned int lbl_821CB794;


void fn_8240BA68(unsigned int *param_1)

{
  *param_1 = &lbl_821B8104;
  if (param_1[0x43] != 0) {
    fn_822315A0();
  }
  if (param_1[0x41] != 0) {
    fn_822315A0();
  }
  param_1[0x20] = &lbl_821BA984;
  fn_82359C18(param_1 + 0x2a);
  param_1[0x11] = &lbl_821CB794;
  *param_1 = &lbl_821B80C0;
  return;
}

