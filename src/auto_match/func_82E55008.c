extern int fn_82E4FE40();


int * fn_82E55008(unsigned int *param_1,unsigned int param_2)

{
  if (*param_1 != 0) {
    fn_82E4FE40(*param_1);
  }
  *param_1 = 0;
  param_1[2] = 0;
  if ((param_2 & 1) != 0) {
    fn_82E4FE40(param_1);
  }
  return param_1;
}

