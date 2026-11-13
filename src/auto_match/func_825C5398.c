extern int fn_826186D8();


void fn_825C5398(int param_1)

{
  unsigned int *piVar1;
  
  for (piVar1 = *(int **)(param_1 + 8); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
    if (*piVar1 != 0) {
      fn_826186D8(*piVar1);
    }
  }
  return;
}

