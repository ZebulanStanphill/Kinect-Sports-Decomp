void fn_83065EF0(unsigned int *param_1,unsigned int *param_2)

{
  (*(int (**)())*param_2)(param_2,0);
  *param_2 = *param_1;
  *param_1 = param_2;
  param_1[5] = param_1[5] + -1;
  return;
}

