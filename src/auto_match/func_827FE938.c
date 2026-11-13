extern int fn_82800DE0();


void fn_827FE938(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = param_2;
  fn_82800DE0(param_1 + 1);
  param_1[7] = 0;
  return;
}

