void fn_82DB0170(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  if (*param_1 > *param_2) {
    iVar1 = *param_1;
  }
  *param_1 = iVar1;
  param_1[1] = param_2[1] + param_1[1];
  param_1[2] = param_2[2] + param_1[2];
  param_1[3] = param_2[3] + param_1[3];
  return;
}

