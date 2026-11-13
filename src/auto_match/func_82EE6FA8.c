extern int fn_82EE6CF0();
extern int fn_82F38638();
extern unsigned int lbl_8215FF24;


void fn_82EE6FA8(unsigned int *param_1)

{
  *param_1 = &lbl_8215FF24;
  fn_82EE6CF0();
  param_1[0x44] = 0;
  fn_82F38638(param_1 + 2);
  return;
}

