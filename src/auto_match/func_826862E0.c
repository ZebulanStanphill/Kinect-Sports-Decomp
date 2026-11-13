int * fn_826862E0(int *param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = (int *)*param_2;
  if (piVar1 != (int *)0x0) {
    (*(int (**)())(*piVar1 + 4))(piVar1,param_2[1]);
  }
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    (*(int (**)())(*piVar1 + 8))(piVar1,param_1[1]);
  }
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  return param_1;
}

