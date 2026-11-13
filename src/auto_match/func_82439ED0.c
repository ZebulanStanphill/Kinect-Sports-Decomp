int fn_82439ED0(int param_1,int param_2)

{
  int iVar1;
  unsigned int uVar2;
  int iVar3;
  int *piVar4;
  
  iVar1 = *(int *)(param_1 + 0x40);
  uVar2 = 0;
  piVar4 = (int *)(iVar1 + 0x1c4);
  if (*(int *)(iVar1 + 0x1c8) - *piVar4 >> 2 != 0) {
    iVar3 = 0;
    do {
      if (*(int *)(*(int *)(*(int *)(*piVar4 + iVar3) + 0x40) + 0x114) == param_2) {
        return *(int *)(*piVar4 + iVar3);
      }
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 4;
    } while (uVar2 < (unsigned int)(*(int *)(iVar1 + 0x1c8) - *piVar4 >> 2));
  }
  return *(int *)*piVar4;
}

