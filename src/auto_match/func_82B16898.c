void fn_82B16898(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x10);
  if (piVar1 == (int *)0x0) {
    return;
  }
  do {
    if (*piVar1 == 1) break;
    piVar1 = (int *)piVar1[1];
  } while (piVar1 != (int *)0x0);
  if (piVar1 == (int *)0x0) {
    return;
  }
  (piVar1 + (param_2 + 1) * 2)[0] = -0x100000;
  (piVar1 + (param_2 + 1) * 2)[1] = 0;
  (piVar1 + (param_2 + 5) * 2)[0] = 0x7ff00000;
  (piVar1 + (param_2 + 5) * 2)[1] = 0;
  return;
}

