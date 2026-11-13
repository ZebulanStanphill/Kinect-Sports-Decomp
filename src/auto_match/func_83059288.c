extern int fn_8305B970(unsigned int *p, double x);
extern double fn_8305BE58(double x);

void fn_83059288(unsigned int *param_1)
{
  int iVar1;

  iVar1 = fn_8305B970(param_1 + 3, (double)*param_1);
  *(float *)(param_1[2] + 0x1c) = (float)fn_8305BE58((double)iVar1);
}
