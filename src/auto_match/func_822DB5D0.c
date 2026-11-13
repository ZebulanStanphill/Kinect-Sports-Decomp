extern int fn_822DB718();
extern int fn_8265CA20();


void fn_822DB5D0(unsigned int *param_1)

{
  if (*param_1 != 0) {
    fn_822DB718(*param_1,param_1[1],param_1 + 3);
    fn_8265CA20(*param_1);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}

