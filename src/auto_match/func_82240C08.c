extern int fn_822409E0();
extern int fn_82240B10();
extern int fn_82897458();
extern unsigned int lbl_82197060;


unsigned int * fn_82240C08(unsigned int *param_1)

{
  fn_82897458();
  *param_1 = &lbl_82197060;
  fn_822409E0(param_1 + 0xe);
  fn_82240B10(param_1 + 0x26);
  param_1[0x24] = param_1;
  param_1[0x3e] = 0;
  param_1[0x3c] = param_1;
  return param_1;
}

