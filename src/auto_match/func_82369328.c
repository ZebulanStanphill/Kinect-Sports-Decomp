unsigned __int64 fn_82369328(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = (int *)**(int **)(param_1 + 0x20);
  piVar2 = (int *)(*(int **)(param_1 + 0x20))[1];
  iVar3 = piVar1[1] - *piVar1 >> 2;
  iVar4 = piVar2[1] - *piVar2 >> 2;
  if (*(unsigned int *)(param_1 + 0x4c0) != 0) {
    return 2;
  }
  if (iVar3 == 1) {
    if (iVar4 == 1) {
      return 1;
    }
  }
  else if ((iVar3 == 2) && (iVar4 == 0)) {
    return 0;
  }
  return 3;
}

