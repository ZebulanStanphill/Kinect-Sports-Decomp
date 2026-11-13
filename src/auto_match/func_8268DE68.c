void fn_8268DE68(unsigned __int64 param_1,unsigned int *param_2,unsigned int *param_3)

{
  unsigned int uVar1;
  
  uVar1 = *param_3;
  if (*param_3 <= *param_2) {
    uVar1 = *param_2;
  }
  *param_2 = uVar1;
  uVar1 = param_3[1];
  if (param_3[1] <= param_2[1]) {
    uVar1 = param_2[1];
  }
  param_2[1] = uVar1;
  uVar1 = param_2[2];
  if (param_3[2] > param_2[2]) {
    uVar1 = param_3[2];
  }
  param_2[2] = uVar1;
  return;
}

