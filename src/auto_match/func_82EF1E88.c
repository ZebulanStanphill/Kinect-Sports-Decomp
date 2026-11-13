extern int fn_82E4FE40();
extern int fn_82EF1C08();
extern unsigned int lbl_82160508;


unsigned int * fn_82EF1E88(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_82160508;
  if (param_1[2] == 0) {
    fn_82EF1C08(param_1,0);
  }
  if ((param_2 & 1) != 0) {
    fn_82E4FE40(param_1);
  }
  return param_1;
}

