extern int fn_826C1AD8();
extern int fn_826C26B0();
extern unsigned int lbl_820125C0;
extern unsigned int lbl_820126EC;
extern unsigned int lbl_820126F0;


void fn_827417D8(unsigned int *param_1)

{
  *param_1 = &lbl_820126F0;
  param_1[4] = &lbl_820125C0;
  param_1[0xc] = &lbl_820126EC;
  fn_826C26B0(param_1 + 0xc);
  fn_826C1AD8(param_1);
  return;
}

