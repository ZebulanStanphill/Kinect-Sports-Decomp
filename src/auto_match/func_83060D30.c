extern int fn_83060438();


__int64 fn_83060D30(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  __int64 lVar4;
  int iVar5;
  int iVar6;
  
  if (*(char *)(param_1 + 0x14) == '\0') {
    param_1 = fn_83060438();
  }
  iVar1 = *(int *)(param_1 + 4);
  lVar4 = 0;
  iVar6 = 0;
  iVar2 = *(int *)(param_1 + 8) - iVar1 >> 3;
  if (0 < iVar2) {
    do {
      iVar3 = iVar6 * 8;
      iVar6 = iVar6 + 1;
      lVar4 = lVar4 + 1;
      if (iVar2 <= iVar6) {
        return lVar4;
      }
      iVar5 = iVar6 * 8;
      do {
        if (**(int **)(iVar5 + iVar1) != **(int **)(iVar3 + iVar1)) break;
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + 8;
      } while (iVar6 < iVar2);
    } while (iVar6 < iVar2);
  }
  return lVar4;
}

