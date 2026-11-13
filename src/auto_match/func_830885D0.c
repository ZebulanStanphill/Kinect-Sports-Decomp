void fn_830885D0(int param_1,int *param_2,int param_3)

{
  int *piVar1;
  
  while (param_3 = param_3 + -1, param_3 >= 0) {
    piVar1 = *(int **)((*(char *)(*param_2 + 4) * 8 + (int)*(char *)(param_2[1] + 4)) * 4 + param_1)
    ;
    (*(int (**)())(*piVar1 + 8))(piVar1,param_2);
    param_2 = param_2 + 2;
  }
  return;
}

