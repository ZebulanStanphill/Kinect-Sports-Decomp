void fn_82B8F1B0(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar2 = (int *)(param_1 + 0xc);
  for (piVar1 = *(int **)(param_1 + 0xc); *piVar1 != param_2; piVar1 = (int *)piVar1[2]) {
    piVar2 = piVar1 + 2;
  }
  *piVar2 = piVar1[2];
  piVar3 = (int *)(param_2 + 8);
  piVar2 = *(int **)(param_2 + 8);
  while (piVar1 != piVar2) {
    piVar3 = (int *)(*piVar3 + 0xc);
    piVar2 = (int *)*piVar3;
  }
  *piVar3 = piVar1[3];
  return;
}

