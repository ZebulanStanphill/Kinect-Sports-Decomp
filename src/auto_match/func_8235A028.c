unsigned int * fn_8235A028(unsigned int *param_1,int *param_2)

{
  unsigned int uVar1;
  
  if ((int *)*param_2 == (int *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(int (***)())(*(int *)*param_2 + 8))();
  }
  *param_1 = uVar1;
  return param_1;
}

