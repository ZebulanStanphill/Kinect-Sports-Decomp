void fn_82D1F758(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x7b0) == 0) {
    return;
  }
  piVar1 = *(int **)(param_1 + 0x2c);
  if (piVar1 == (int *)0x0) {
    return;
  }
  do {
    piVar1[0xc] = piVar1[0xd];
    piVar1 = (int *)*piVar1;
  } while (piVar1 != (int *)0x0);
  return;
}

