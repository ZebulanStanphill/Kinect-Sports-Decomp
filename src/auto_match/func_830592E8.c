extern int fn_8305BB28(void *, double);


void fn_830592E8(unsigned int *param_1)

{
  int iVar1;
  
  iVar1 = fn_8305BB28(param_1 + 3, (double)*param_1);
  { float value = (float)(__int64)(iVar1 + 1);
  *(float *)(param_1[2] + 0x14) = value; }
  return;
}

