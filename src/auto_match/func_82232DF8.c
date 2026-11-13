extern int fn_82232D38();
extern int fn_822332E8();
extern int fn_82897D88();
extern unsigned int lbl_82196C48;
extern unsigned int lbl_82197534;


void fn_82232DF8(unsigned int *param_1)

{
  *param_1 = &lbl_82196C48;
  fn_822332E8(param_1 + 0x87);
  param_1[0x6d] = &lbl_82197534;
  fn_82897D88(param_1 + 0x6d);
  param_1[0x53] = &lbl_82197534;
  fn_82897D88(param_1 + 0x53);
  param_1[0x39] = &lbl_82197534;
  fn_82897D88(param_1 + 0x39);
  fn_82232D38(param_1);
  return;
}

