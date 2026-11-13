#define true 1


int fn_82A50350(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = 0;
  if (param_2 != 0) {
    piVar2 = *(int **)(param_1 + 0x20);
    if (piVar2 == (int *)0x0) {
      return iVar1;
    }
    while( true ) {
      if (piVar2 == (int *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *piVar2;
        piVar2 = (int *)piVar2[1];
      }
      if (*(int *)(iVar3 + 4) == param_2 + 4) break;
      if (piVar2 == (int *)0x0) {
        return iVar1;
      }
    }
    return iVar3;
  }
  if (*(int *)(param_1 + 0x28) == 1) {
    if (*(int **)(param_1 + 0x20) == (int *)0x0) {
      return 0;
    }
    return **(int **)(param_1 + 0x20);
  }
  return iVar1;
}

