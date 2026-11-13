void fn_82631400(unsigned int *param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  uVar1 = *param_1;
  uVar2 = param_1[1];
  *param_2 = param_1;
  param_2[2] = uVar2 + (int)param_1;
  param_2[1] = ((uVar1 & 1) ? 0x368 : 0x28) + uVar2;
  param_2[3] = param_1[2];
  return;
}

