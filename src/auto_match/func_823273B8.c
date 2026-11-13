extern int fn_822CA390();
extern int fn_824A7FF8();
extern unsigned int lbl_821B03E8;
extern unsigned int lbl_821B043C;


void fn_823273B8(unsigned int *param_1)

{
  *param_1 = &lbl_821B03E8;
  param_1[0x1a] = &lbl_821B043C;
  fn_824A7FF8(param_1 + 0x34);
  fn_822CA390(param_1);
  return;
}

