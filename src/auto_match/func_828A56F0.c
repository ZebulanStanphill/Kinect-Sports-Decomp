extern int fn_822315A0();
extern int fn_8265CA20();


void fn_828A56F0(int *param_1)

{
  int *piVar1;
  unsigned int *piVar2;
  
  piVar1 = (int *)*param_1;
  piVar2 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(int *)(*param_1 + 4) = *param_1;
  param_1[1] = 0;
  if (piVar2 != (int *)*param_1) {
    do {
      piVar1 = (int *)*piVar2;
      if (piVar2[3] != 0) {
        fn_822315A0(piVar2[3]);
      }
      fn_8265CA20(piVar2);
      piVar2 = piVar1;
    } while (piVar1 != (int *)*param_1);
  }
  return;
}

