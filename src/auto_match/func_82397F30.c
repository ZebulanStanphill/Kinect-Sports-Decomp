unsigned __int64 fn_82397F30(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)**(int **)(param_1 + 8);
  if ((*(unsigned int *)(*(unsigned int *)(piVar1[4] * 4 + *piVar1) + 8) == 2) &&
     (piVar1 = (unsigned int *)((unsigned int *)**(int **)(param_1 + 8))[1],
     *(unsigned int *)(*(unsigned int *)(piVar1[4] * 4 + *piVar1) + 8) == 2)) {
    return 1;
  }
  return 0;
}

