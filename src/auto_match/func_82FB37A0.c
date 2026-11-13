extern unsigned char fn_83019A10();
int *fn_82FB37A0(int *param_1, int *param_2, unsigned int param_3, unsigned int *param_4)
{
  int *piVar1;
  int *piVar2;
  if (fn_83019A10() != 0) {
    piVar1 = (int *)param_1[2];
    piVar2 = piVar1 + 1;
    param_1[2] = *piVar1;
    *piVar1 = param_3;
    piVar1[1] = *param_2;
    piVar1[2] = param_2[1];
    if (param_4 == 0) {
      *param_1 = (int)piVar1;
    } else {
      *param_4 = (unsigned int)piVar1;
    }
    if (param_3 == 0) {
      param_1[1] = (int)piVar1;
    }
    param_1[5] = param_1[5] + 1;
    return piVar2;
  }
  return 0;
}
