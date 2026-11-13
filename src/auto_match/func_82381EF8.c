extern int fn_82381CA8();
extern int fn_82381E58();
extern int fn_8289D4C0();
extern unsigned int lbl_82197100;
extern unsigned int lbl_821B3AE4;


void fn_82381EF8(unsigned int *param_1)

{
  *param_1 = &lbl_821B3AE4;
  fn_82381E58(param_1 + 0x7c);
  param_1[0x66] = &lbl_82197100;
  fn_8289D4C0(param_1 + 0x66);
  param_1[0x51] = &lbl_82197100;
  fn_8289D4C0(param_1 + 0x51);
  param_1[0x3c] = &lbl_82197100;
  fn_8289D4C0(param_1 + 0x3c);
  fn_82381CA8(param_1);
  return;
}

