void fn_82D8CD88(unsigned char *param_1,int param_2,unsigned int param_3)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_2 + 0xd4)) {
    piVar1 = *(int **)(param_2 + 0xd0);
    do {
      if (*piVar1 == param_3) {
        *param_1 = 1;
        return;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar2 < *(int *)(param_2 + 0xd4));
  }
  *param_1 = 0;
  return;
}

