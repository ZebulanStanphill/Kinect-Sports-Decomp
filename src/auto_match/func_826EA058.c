void fn_826EA058(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x18);
  *piVar1 = (int)(piVar1 + 6);
  piVar1[1] = 0x800;
  return;
}

