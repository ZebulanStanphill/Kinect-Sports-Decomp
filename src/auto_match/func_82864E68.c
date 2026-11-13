extern int fn_82FE8948();


int fn_82864E68(unsigned int *param_1)

{
  int uVar1;
  
  if (param_1[4] == 0) {
    return 0;
  }
  if (param_1[5] >= 8) {
    param_1 = (unsigned int *)*param_1;
  }
  uVar1 = fn_82FE8948(param_1);
  return uVar1;
}

