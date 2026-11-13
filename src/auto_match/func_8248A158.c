unsigned __int64 fn_8248A158(int param_1,unsigned int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  unsigned int uVar4;
  int iVar5;
  unsigned int uVar6;
  
  piVar1 = *(int **)(param_1 + 0x10);
  uVar6 = 0;
  iVar2 = *piVar1;
  uVar4 = piVar1[1] - iVar2 >> 2;
  if (uVar4 != 0) {
    iVar5 = 0;
    do {
      if ((*(int *)(*(int *)(iVar5 + iVar2) + 0x14) == *(int *)(param_1 + 0xc)) &&
         ((iVar3 = *(int *)(*(int *)(iVar5 + iVar2) + 4), iVar3 == 0 || (iVar3 == 3)))) {
        iVar2 = *(int *)(uVar6 * 4 + iVar2);
        if (*(int *)(iVar2 + 4) == 0) {
          *param_2 = *(unsigned int *)(iVar2 + 8);
          *param_3 = piVar1[4];
        }
        return 1;
      }
      uVar6 = uVar6 + 1;
      iVar5 = iVar5 + 4;
    } while (uVar6 < uVar4);
  }
  return 0;
}

