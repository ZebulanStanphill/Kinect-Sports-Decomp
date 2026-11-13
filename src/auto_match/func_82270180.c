extern int fn_82270B70();


int fn_82270180(unsigned int param_1)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  
  iVar4 = fn_82270B70();
  iVar2 = **(int **)(iVar4 + 0x5c);
  uVar1 = ((*(int **)(iVar4 + 0x5c))[1] - iVar2) / 0x30;
  if (param_1 < uVar1) {
    uVar5 = 0;
    uVar6 = 0;
    if (uVar1 != 0) {
      iVar4 = 0;
      do {
        iVar3 = *(int *)(iVar4 + iVar2 + 0x24);
        if ((*(int *)(iVar3 + 0x54c) == 0) && (*(int *)(iVar3 + 0x548) == 0)) {
          if (uVar5 == param_1) {
            return iVar3;
          }
          uVar5 = uVar5 + 1;
        }
        uVar6 = uVar6 + 1;
        iVar4 = iVar4 + 0x30;
      } while (uVar6 < uVar1);
    }
  }
  return 0;
}

