extern int fn_82A4F4E0();
extern int fn_82A819E0();
extern unsigned int lbl_820A6C90;


void fn_82A76B10(unsigned int *param_1)

{
  *param_1 = &lbl_820A6C90;
  if (param_1[0x1e] != 0) {
    fn_82A4F4E0(param_1[0x1e]);
    param_1[0x1e] = 0;
  }
  if (param_1[0x1f] != 0) {
    fn_82A4F4E0(param_1[0x1f]);
    param_1[0x1f] = 0;
  }
  *param_1 = 0;
  fn_82A819E0(param_1);
  return;
}

