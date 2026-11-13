unsigned __int64 fn_82E08B00(int param_1,int param_2,unsigned int *param_3)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    piVar1 = *(int **)(param_1 + 8);
    do {
      if (*piVar1 == param_2) {
        *param_3 = (*(int **)(param_1 + 8))[iVar2 * 2 + 1] & 0xfffffffe;
        return 0;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 2;
    } while (iVar2 < *(int *)(param_1 + 0xc));
  }
  return 1;
}

