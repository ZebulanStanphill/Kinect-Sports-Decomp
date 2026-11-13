void fn_822DD818(unsigned int *param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  
  if (param_1 == param_2) {
    return;
  }
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  uVar4 = param_1[3];
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  *param_2 = uVar1;
  param_2[1] = uVar2;
  param_2[2] = uVar3;
  param_2[3] = uVar4;
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  param_2[4] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  param_2[5] = uVar1;
  return;
}

