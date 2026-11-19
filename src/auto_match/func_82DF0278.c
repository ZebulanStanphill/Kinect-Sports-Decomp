void fn_82DF0278(unsigned char *self,int param_2,int param_3,int param_4)

{
  int iVar1;
  unsigned int *piVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(param_2 + 0x30)) {
    piVar2 = *(int **)(param_2 + 0x2c);
    do {
      if ((*piVar2 + 0x10 == param_3) || (*piVar2 + 0x10 == param_4)) {
        *self = 0;
        return;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < *(int *)(param_2 + 0x30));
  }
  *self = 1;
  return;
}

