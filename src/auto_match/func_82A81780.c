void fn_82A81780(int param_1,__int64 param_2,short param_3)

{
  int *piVar1;
  int *piVar2;
  
  if ((int)param_2 < 1) {
    return;
  }
  piVar2 = (int *)(param_1 + -4);
  do {
    piVar1 = piVar2 + 1;
    piVar2 = piVar2 + 1;
    *piVar2 = *piVar1 * (int)param_3;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}

