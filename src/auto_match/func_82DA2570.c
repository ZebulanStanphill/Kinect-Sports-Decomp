void fn_82DA2570(unsigned char *self,int param_2,unsigned int param_3)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_2 + 0x164)) {
    piVar1 = *(int **)(param_2 + 0x160);
    do {
      if (*piVar1 == param_3) {
        *self = 1;
        return;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar2 < *(int *)(param_2 + 0x164));
  }
  *self = 0;
  return;
}

