extern int fn_83027270();


void fn_83029E20(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x24);
  if (piVar1 != *(int **)(param_1 + 0x28)) {
    do {
      fn_83027270(*(unsigned int *)(*piVar1 + 0x38),param_1 + 0x4c);
      piVar1 = piVar1 + 1;
    } while (piVar1 != *(int **)(param_1 + 0x28));
  }
  return;
}

