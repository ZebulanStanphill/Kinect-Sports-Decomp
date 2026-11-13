extern int fn_822848B8();
extern int fn_82476360();
extern unsigned int lbl_821BCFD4;
extern unsigned int lbl_821BE838;


void fn_82478B10(unsigned int *param_1)

{
  *param_1 = &lbl_821BCFD4;
  if (param_1[0x6f] != 0) {
    fn_822848B8(param_1[0x6f]);
    param_1[0x6f] = 0;
  }
  fn_82476360(param_1 + 4);
  *param_1 = &lbl_821BE838;
  return;
}

