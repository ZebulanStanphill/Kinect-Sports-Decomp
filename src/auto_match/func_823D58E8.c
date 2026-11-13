extern int fn_822315A0();
extern int fn_82517E78();
extern unsigned int lbl_821B3080;
extern unsigned int lbl_821B6558;
extern unsigned int lbl_821B65A8;
extern unsigned int lbl_821B96A8;


void fn_823D58E8(unsigned int *param_1)

{
  unsigned int *field = param_1 + 0x23;
  *param_1 = &lbl_821B6558;
  param_1[0x1a] = &lbl_821B65A8;
  if (*field != 0) {
    fn_822315A0(*field);
  }
  *param_1 = &lbl_821B3080;
  param_1[0x1a] = &lbl_821B96A8;
  if (param_1[0x20] != 0) {
    *(unsigned int *)(param_1[0x20] + 0x84) = 0;
    param_1[0x20] = 0;
  }
  fn_82517E78(param_1);
  return;
}

