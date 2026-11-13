extern int fn_82E583E0();
extern int fn_82EE0A68();
extern int fn_82EE1940();
extern int fn_82F3E1E0();
extern unsigned int lbl_8215FA48;
extern unsigned int lbl_8215FA50;
extern unsigned int lbl_8215FDD0;


void fn_82EE1D08(unsigned int *param_1)

{
  *param_1 = &lbl_8215FA50;
  param_1[1] = &lbl_8215FDD0;
  fn_82EE1940();
  fn_82F3E1E0(param_1 + 1);
  param_1[0x12] = &lbl_8215FA48;
  if (param_1[0x13] == 0) {
    fn_82EE0A68(param_1 + 0x12,0);
  }
  fn_82E583E0(param_1);
  return;
}

