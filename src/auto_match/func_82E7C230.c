unsigned int * fn_82E7C230(unsigned int *param_1,int *param_2)

{
  *param_1 = param_2;
  param_1[1] = 0;
  if (param_2 != (int *)0x0) {
    (*(int (**)())(*param_2 + 4))(param_2);
  }
  return param_1;
}

