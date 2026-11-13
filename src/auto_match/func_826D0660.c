extern int fn_826D0418();


void fn_826D0660(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_2 * 4 + *(int *)(param_1 + 0x14));
  *(int *)(*piVar1 + 4) = piVar1[1];
  *(int *)piVar1[1] = *piVar1;
  fn_826D0418(param_1 + 0x14);
  *piVar1 = *(int *)(param_1 + 0xc);
  *(int **)(param_1 + 0xc) = piVar1;
  return;
}

