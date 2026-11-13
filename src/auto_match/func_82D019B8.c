void fn_82D019B8(int param_1,unsigned int *param_2)

{
  unsigned int *puVar1;
  int *piVar2;
  int *piVar3;
  
  for (puVar1 = *(unsigned int **)(param_1 + 0xc); puVar1 != (unsigned int *)0x0;
      puVar1 = (unsigned int *)*puVar1) {
    *param_2 = puVar1;
    param_2 = param_2 + 1;
  }
  piVar3 = *(int **)(param_1 + 0x10);
  if (piVar3 != (int *)0x0) {
    piVar2 = param_2 + -1;
    do {
      piVar2 = piVar2 + 1;
      *piVar2 = (int)piVar3;
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)0x0);
    return;
  }
  return;
}

