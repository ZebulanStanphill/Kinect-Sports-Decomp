extern int fn_8267C498();


void fn_827381E0(int param_1,__int64 param_2)

{
  int *piVar1;
  
  piVar1 = (int *)((int)param_2 * 8 + param_1);
  if ((int)param_2 != 0) {
    do {
      piVar1 = piVar1 + -2;
      if (*piVar1 != 0) {
        fn_8267C498();
      }
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

