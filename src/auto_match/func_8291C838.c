void fn_8291C838(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x18);
  *piVar1 = *piVar1 + param_2;
  piVar1[1] = piVar1[1] - param_2;
  return;
}

