typedef int (*fp)(int);
void fn_82AA1EB0(int *param_1)
{
  int iVar1;
  iVar1 = ((fp)*param_1)(param_1[1]);
  if ((iVar1 < 0) && (param_1[2] >= 0)) {
    param_1[2] = iVar1;
  }
}
