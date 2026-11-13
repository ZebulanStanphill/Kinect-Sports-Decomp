extern int fn_82E4FE40();
extern int fn_82E569B0();
extern unsigned int lbl_82154D80;


unsigned int * fn_82E5A7D0(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_82154D80;
  if (param_1[1] == 0) {
    fn_82E569B0(param_1,0);
  }
  if ((param_2 & 1) != 0) {
    fn_82E4FE40(param_1);
  }
  return param_1;
}

