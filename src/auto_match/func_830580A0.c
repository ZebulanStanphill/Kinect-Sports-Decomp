extern int fn_8305BB28(void *, double);


void fn_830580A0(unsigned int *param_1)

{
  int iVar1;
  
  iVar1 = fn_8305BB28(param_1 + 3,(double)*param_1);
  { float f = (float)(iVar1 + 1);
    *(float *)(param_1[2] + 0x1c) = f; }
  return;
}

