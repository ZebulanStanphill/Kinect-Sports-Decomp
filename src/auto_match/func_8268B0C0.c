extern int fn_8268B050();


void fn_8268B0C0(unsigned int *param_1,int param_2)

{
  fn_8268B050();
  param_1[1] = param_2;
  *(unsigned char *)(param_1 + 4) = 0;
  if (*param_1 != 0) {
    *(unsigned char *)(*param_1 + param_2) = 0;
  }
  return;
}

