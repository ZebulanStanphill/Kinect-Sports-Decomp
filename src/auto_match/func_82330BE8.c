extern int fn_822315A0();
extern int fn_82529320();
extern int fn_82672660();
extern unsigned int lbl_821B0970;


void fn_82330BE8(unsigned int *param_1)

{
  *param_1 = &lbl_821B0970;
  fn_82529320(param_1[4],0);
  fn_82672660(param_1[0x17],param_1 + 8);
  if (param_1[0x18] != 0) {
    fn_822315A0(param_1[0x18]);
  }
  return;
}

