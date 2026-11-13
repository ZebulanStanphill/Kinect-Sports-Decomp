extern int fn_828974A8();
extern int fn_8289D4C0();
extern unsigned int lbl_82196CC0;
extern unsigned int lbl_82196CE0;
extern unsigned int lbl_82196D38;
extern unsigned int lbl_82197070;
extern unsigned int lbl_82197100;


void fn_82233888(unsigned int *param_1)

{
  *param_1 = &lbl_82196CC0;
  param_1[0x66] = &lbl_82196D38;
  fn_8289D4C0(param_1 + 0x66);
  param_1[0x51] = &lbl_82196CE0;
  fn_8289D4C0(param_1 + 0x51);
  param_1[0x3c] = &lbl_82196D38;
  fn_8289D4C0(param_1 + 0x3c);
  param_1[0x27] = &lbl_82197100;
  fn_8289D4C0(param_1 + 0x27);
  param_1[0x12] = &lbl_82197100;
  fn_8289D4C0(param_1 + 0x12);
  *param_1 = &lbl_82197070;
  fn_828974A8(param_1);
  return;
}

