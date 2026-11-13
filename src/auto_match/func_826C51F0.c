int fn_826C51F0(int param_1,char param_2)

{
  int *piVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned int uVar4;
  int iVar5;
  
  piVar1 = *(int **)(param_1 + 0x20);
  if (piVar1 == (int *)0x0) {
    return param_1;
  }
  if (param_2 == '\0') {
    if (((*(unsigned char *)(param_1 + 0x1cc) & 0x10) != 0) && ((*(unsigned char *)(param_1 + 0x1cc) & 0x20) != 0)) {
      return param_1;
    }
  }
  if ((*(unsigned char *)(param_1 + 0x66) & 0x10) == 0) {
                    /* WARNING: Could not recover jumptable at 0x826c5240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar3 = (**(int (***)())(*piVar1 + 0x54))(piVar1);
    return iVar3;
  }
  uVar2 = *(unsigned int *)(*(int *)(param_1 + 0xa0) + 0x60);
  uVar4 = 0;
  if (uVar2 != 0) {
    iVar3 = *(int *)(*(int *)(param_1 + 0xa0) + 0x5c);
    iVar5 = 0;
    do {
      if (*(int *)(iVar5 + iVar3) == 0) {
        return *(int *)(uVar4 * 8 + iVar3 + 4);
      }
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + 8;
    } while (uVar4 < uVar2);
  }
  return 0;
}

