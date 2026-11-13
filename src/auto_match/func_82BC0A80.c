extern int fn_82BC0088();


void fn_82BC0A80(unsigned int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 1;
  if (1 < param_2) {
    piVar1 = (int *)(param_3 + 0x20);
    do {
      if (*piVar1 == param_1) {
        return;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar2 < param_2);
  }
  piVar1 = (int *)fn_82BC0088(*(int *)(param_1 + 0x24),
                                *(unsigned int *)(*(int *)(param_1 + 0x24) + 4));
  *piVar1 = param_3;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  return;
}

