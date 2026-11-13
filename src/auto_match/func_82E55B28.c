extern int fn_82E4FE40();
extern int fn_82E50EA0();
extern unsigned int lbl_8215491C;


void fn_82E55B28(unsigned int *param_1)

{
  *param_1 = &lbl_8215491C;
  if (param_1[0x19] != 0) {
    fn_82E4FE40(param_1[0x19]);
  }
  param_1[0x19] = 0;
  fn_82E50EA0(param_1 + 2);
  return;
}

