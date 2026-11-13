extern int fn_826C1AD8();
extern int fn_826C26B0();
extern unsigned int lbl_8200FC70;
extern unsigned int lbl_8200FC78;
extern unsigned int lbl_8200FCCC;


void fn_8271C280(unsigned int *param_1)

{
  *param_1 = &lbl_8200FCCC;
  param_1[4] = &lbl_8200FC78;
  param_1[0x10] = &lbl_8200FC70;
  fn_826C26B0(param_1 + 0x10);
  fn_826C1AD8(param_1);
  return;
}

