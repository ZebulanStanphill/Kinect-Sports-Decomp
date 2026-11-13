extern int fn_826C1AD8();
extern int fn_82738D70();
extern unsigned int lbl_82011AD0;
extern unsigned int lbl_82011B24;


void fn_82738E60(unsigned int *param_1)

{
  *param_1 = &lbl_82011B24;
  param_1[4] = &lbl_82011AD0;
  fn_82738D70(param_1 + 0xc);
  fn_826C1AD8(param_1);
  return;
}

