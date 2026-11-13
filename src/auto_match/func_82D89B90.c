unsigned int fn_82D89B90(int param_1,unsigned int param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 100)) {
    piVar2 = *(int **)(param_1 + 0x60);
    do {
      if (piVar2[1] == param_2 + 0x10) {
        return *(unsigned int *)(*piVar2 + 8);
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 2;
    } while (iVar1 < *(int *)(param_1 + 100));
  }
  return 0;
}

