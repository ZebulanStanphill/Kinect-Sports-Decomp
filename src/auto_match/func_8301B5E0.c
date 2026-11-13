extern int fn_8302A3C0();


void fn_8301B5E0(int param_1,unsigned __int64 param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != *(int **)(param_1 + 8)) {
    do {
      if (*(int *)(*piVar1 + 4) == 1) {
        fn_8302A3C0(*piVar1,param_2);
      }
      piVar1 = piVar1 + 1;
    } while (piVar1 != *(int **)(param_1 + 8));
  }
  return;
}

