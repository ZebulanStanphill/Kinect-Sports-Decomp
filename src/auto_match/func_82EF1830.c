extern int fn_82E4FE40();
extern int fn_82EF1740();
extern unsigned int lbl_821603DC;
extern unsigned int lbl_82160438;
extern unsigned int lbl_82160440;


void fn_82EF1830(unsigned int *param_1)

{
  *param_1 = &lbl_82160440;
  param_1[1] = &lbl_821603DC;
  param_1[0x49] = &lbl_82160438;
  if (param_1[0x4a] != 0) {
    fn_82E4FE40(param_1[0x4a]);
  }
  param_1[0x4a] = 0;
  fn_82EF1740(param_1);
  return;
}

