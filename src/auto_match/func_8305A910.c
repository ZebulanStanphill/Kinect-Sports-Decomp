typedef unsigned int uint;

extern int fn_8305B970(uint *p, double d);
extern double fn_8305BE58(double d);

void fn_8305A910(uint *param_1)
{
  int iVar1;

  iVar1 = fn_8305B970(param_1 + 3, (double)*param_1);
  *(float *)(param_1[2] + 0x34) = (float)fn_8305BE58((double)iVar1);
}
