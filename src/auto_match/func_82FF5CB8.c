unsigned __int64 fn_82FF5CB8(int *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)param_1[1];
  for (piVar2 = (int *)*param_1; (piVar2 != piVar1 && (*piVar2 != param_2)); piVar2 = piVar2 + 1) {
  }
  if (piVar2 == piVar1) {
    return 2;
  }
  if (1 < (unsigned int)((int)piVar1 - *param_1 >> 2)) {
    *piVar2 = piVar1[-1];
  }
  param_1[1] = param_1[1] + -4;
  return 1;
}

