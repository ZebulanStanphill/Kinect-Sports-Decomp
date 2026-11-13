typedef unsigned char bool;


bool fn_8303E6A8(int param_1,int param_2)

{
  int *piVar1;
  
  for (piVar1 = *(int **)(param_1 + 4); (piVar1 != *(int **)(param_1 + 8) && (*piVar1 != param_2));
      piVar1 = piVar1 + 1) {
  }
  return *(int **)(param_1 + 8) != piVar1;
}

