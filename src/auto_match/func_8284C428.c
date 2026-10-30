extern unsigned int fn_8280A620(unsigned int);

void fn_8284C428(unsigned int param_1, unsigned int param_2, int param_3, unsigned int *param_4, unsigned int *param_5)
{
  if (param_3 == 0) {
    *param_4 = param_1;
    *param_5 = param_2;
  }
  else {
    *param_4 = fn_8280A620(param_1) >> param_3;
    *param_5 = fn_8280A620(param_2) >> param_3;
  }
}
