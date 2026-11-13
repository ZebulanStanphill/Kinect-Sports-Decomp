extern int fn_82E4FE40();
extern int fn_82E50EA0();
extern unsigned int lbl_8215FF94;


unsigned int * fn_82EE9508(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_8215FF94;
  fn_82E50EA0(param_1 + 1);
  if ((param_2 & 1) != 0) {
    fn_82E4FE40(param_1);
  }
  return param_1;
}

