extern unsigned int lbl_8217C06C;


void fn_83009C10(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x7c);
  if (piVar1 == (int *)0x0) {
    return;
  }
  do {
    if ((float)piVar1[5] < lbl_8217C06C) {
      return;
    }
    piVar1 = (int *)*piVar1;
  } while (piVar1 != (int *)0x0);
  return;
}

