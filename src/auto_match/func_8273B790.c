extern int fn_826C1AD8();
extern int fn_826C26B0();
extern unsigned int lbl_82011FB8;
extern unsigned int lbl_82011FC0;
extern unsigned int lbl_820120A4;


void fn_8273B790(unsigned int *param_1)

{
  *param_1 = &lbl_820120A4;
  param_1[4] = &lbl_82011FC0;
  param_1[0x18] = &lbl_82011FB8;
  fn_826C26B0(param_1 + 0x18);
  fn_826C1AD8(param_1);
  return;
}

