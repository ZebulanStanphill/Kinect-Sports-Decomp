void fn_82D93488(unsigned __int64 *param_1,int param_2,int param_3)

{
  int iVar1;
  unsigned __int64 *puVar2;
  int iVar4;
  __int64 lVar3;
  int *piVar5;
  unsigned __int64 uVar6;
  
  iVar4 = 0;
  if (0 < *(int *)(param_2 + 0x7c)) {
    piVar5 = *(int **)(param_2 + 0x78);
    do {
      if (*piVar5 == param_3) {
        iVar1 = *(int *)(param_2 + 0x7c) + -1;
        puVar2 = (unsigned __int64 *)(*(int *)(param_2 + 0x78) + iVar4 * 0x10);
        uVar6 = *(unsigned __int64 *)(*(int **)(param_2 + 0x78) + iVar4 * 4 + 2);
        iVar4 = (iVar1 - iVar4) * 0x10;
        *(int *)(param_2 + 0x7c) = iVar1;
        if (0 < iVar4) {
          lVar3 = (unsigned __int64)(iVar4 - 1U >> 3) + 1;
          do {
            *puVar2 = puVar2[2];
            puVar2 = puVar2 + 1;
            lVar3 = lVar3 + -1;
          } while (lVar3 != 0);
        }
        *param_1 = uVar6;
        return;
      }
      iVar4 = iVar4 + 1;
      piVar5 = piVar5 + 4;
    } while (iVar4 < *(int *)(param_2 + 0x7c));
  }
  *param_1 = 0;
  return;
}

