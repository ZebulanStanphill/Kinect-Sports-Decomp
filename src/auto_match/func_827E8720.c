int * fn_827E8720(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = *param_3;
  if (param_3 != (int *)*param_2) {
    *(int *)param_3[1] = *param_3;
    *(int *)(*param_3 + 4) = param_3[1];
    (**(int (***)())(*(int *)param_2[2] + 0x18))((int *)param_2[2],param_3,param_2 + 3);
    param_2[1] = param_2[1] + -1;
  }
  *param_1 = iVar1;
  return param_1;
}

