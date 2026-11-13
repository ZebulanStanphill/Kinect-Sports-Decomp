void fn_82D1F1C8(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x14);
  if (piVar1 == (int *)0x0) {
    return;
  }
  do {
    piVar1[0x11] = param_2;
    piVar1 = (int *)*piVar1;
  } while (piVar1 != (int *)0x0);
  return;
}

