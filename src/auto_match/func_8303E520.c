#define true 1


unsigned __int64 fn_8303E520(int param_1,unsigned int param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 4);
  while( true ) {
    if (piVar1 == *(int **)(param_1 + 8)) {
      return 0;
    }
    if (*piVar1 == param_2) break;
    piVar1 = piVar1 + 2;
  }
  return 1;
}

