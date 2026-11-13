extern int fn_82E4FE40();
extern int fn_82EE1D08();
extern unsigned int lbl_8215FAE0;
extern unsigned int lbl_8215FDD0;


unsigned int * fn_82EE2190(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_8215FAE0;
  param_1[1] = &lbl_8215FDD0;
  fn_82EE1D08();
  if ((param_2 & 1) != 0) {
    fn_82E4FE40(param_1);
  }
  return param_1;
}

