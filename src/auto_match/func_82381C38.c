extern int fn_8288B668();
extern int fn_8289D6D0();
extern unsigned int lbl_82197080;
extern unsigned int lbl_821B3A60;


unsigned int * fn_82381C38(unsigned int *param_1)

{
  fn_8288B668();
  *param_1 = &lbl_821B3A60;
  fn_8289D6D0(param_1 + 0x12,0);
  param_1[0x12] = &lbl_82197080;
  fn_8289D6D0(param_1 + 0x27,0);
  param_1[0x27] = &lbl_82197080;
  return param_1;
}

