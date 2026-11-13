extern int fn_82232728();
extern int fn_8289D6D0();
extern unsigned int lbl_82196BC0;
extern unsigned int lbl_82197100;


unsigned int * fn_82232B50(unsigned int *param_1)

{
  fn_82232728();
  *param_1 = &lbl_82196BC0;
  fn_8289D6D0(param_1 + 0x249,4);
  param_1[0x249] = &lbl_82197100;
  fn_8289D6D0(param_1 + 0x25e,4);
  param_1[0x25e] = &lbl_82197100;
  return param_1;
}

