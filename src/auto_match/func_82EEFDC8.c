extern int fn_82E4FE40();
extern int fn_82EEF998();
extern unsigned int lbl_82160304;


unsigned int * fn_82EEFDC8(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_82160304;
  if (param_1[1] == 0) {
    fn_82EEF998(param_1,0);
  }
  if ((param_2 & 1) != 0) {
    fn_82E4FE40(param_1);
  }
  return param_1;
}

