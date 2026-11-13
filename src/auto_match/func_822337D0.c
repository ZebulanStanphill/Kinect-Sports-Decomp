extern int fn_8288B668();
extern int fn_8289D6D0();
extern int fn_8289D7E8();
extern unsigned int lbl_82196CC0;
extern unsigned int lbl_82196CE0;
extern unsigned int lbl_82196D38;
extern unsigned int lbl_82197100;


unsigned int * fn_822337D0(unsigned int *param_1)

{
  fn_8288B668();
  *param_1 = &lbl_82196CC0;
  fn_8289D6D0(param_1 + 0x12,4);
  param_1[0x12] = &lbl_82197100;
  fn_8289D6D0(param_1 + 0x27,4);
  param_1[0x27] = &lbl_82197100;
  fn_8289D7E8(param_1 + 0x3c,4);
  param_1[0x3c] = &lbl_82196D38;
  fn_8289D7E8(param_1 + 0x51,8);
  param_1[0x51] = &lbl_82196CE0;
  fn_8289D7E8(param_1 + 0x66,4);
  param_1[0x66] = &lbl_82196D38;
  return param_1;
}

