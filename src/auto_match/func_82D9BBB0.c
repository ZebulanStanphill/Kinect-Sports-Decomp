void fn_82D9BBB0(unsigned char *param_1,int param_2,unsigned int param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(param_2 + 0x164)) {
    piVar2 = (int *)(*(int *)(param_2 + 0x160) + 4);
    do {
      if (*piVar2 == param_3) {
        *param_1 = 1;
        return;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 2;
    } while (iVar1 < *(int *)(param_2 + 0x164));
  }
  *param_1 = 0;
  return;
}

