void fn_82DF02D0(unsigned char *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (param_3 != 0) {
    iVar3 = 0;
    if (0 < *(int *)(param_2 + 0x38)) {
      piVar1 = *(int **)(param_2 + 0x34);
      do {
        if (*piVar1 == param_3) {
          iVar2 = *(int *)(param_2 + 0x38) + -1;
          *(int *)(param_2 + 0x38) = iVar2;
          if (iVar2 != iVar3) {
            *(unsigned int *)(iVar3 * 4 + *(int *)(param_2 + 0x34)) =
                 *(unsigned int *)(iVar2 * 4 + *(int *)(param_2 + 0x34));
          }
          *param_1 = 1;
          return;
        }
        iVar3 = iVar3 + 1;
        piVar1 = piVar1 + 1;
      } while (iVar3 < *(int *)(param_2 + 0x38));
    }
  }
  *param_1 = 0;
  return;
}

