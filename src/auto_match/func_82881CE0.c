extern int fn_8265CA20();


void fn_82881CE0(unsigned int *param_1,int *param_2)

{
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      fn_8265CA20(*param_1);
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  return;
}

