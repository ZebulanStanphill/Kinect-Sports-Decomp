extern int fn_822ABA88();


unsigned int fn_82373530(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = *(int **)(*(int *)(param_1 + 0x1e4) * 4 + **(int **)(param_1 + 8));
  if (1 < *(unsigned int *)(*(int *)(piVar3[4] * 4 + *piVar3) + 8)) {
    iVar1 = fn_822ABA88(*(unsigned int *)(piVar3[4] * 4 + *piVar3),0);
    iVar2 = fn_822ABA88(*(unsigned int *)(piVar3[4] * 4 + *piVar3),1);
    if ((*(int *)(iVar1 + 0x24) != 0) != (*(int *)(iVar2 + 0x24) != 0)) {
      return (unsigned int)(*(int *)(iVar1 + 0x24) == 0);
    }
  }
  return *(unsigned int *)(param_1 + 0x1e8);
}

