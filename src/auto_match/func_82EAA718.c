void fn_82EAA718(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned short *puVar6;
  unsigned int uVar7;
  __int64 lVar8;
  __int64 lVar9;
  unsigned __int64 uVar10;
  int iVar11;
  
  uVar4 = 0;
  if (*(int *)(param_1 + 0x2d4) == 0) {
    return;
  }
  uVar5 = *(unsigned int *)(param_1 + 0x2d0);
  iVar3 = 2;
  do {
    uVar7 = 0;
    uVar10 = (__int64)*(int *)(param_1 + 0x2d0) * (__int64)(int)uVar4;
    if (uVar5 != 0) {
      lVar8 = (uVar10 & 0x7fffffff) << 1;
      lVar9 = (uVar10 & 0x1fffffff) << 3;
      iVar11 = iVar3 * *(int *)(param_1 + 0x2d0) * 2;
      do {
        uVar7 = uVar7 + 1;
        iVar1 = (int)lVar8;
        *(unsigned short *)(iVar11 + *(int *)(param_1 + 0x990) + 2) =
             *(unsigned short *)(iVar1 + *(int *)(param_1 + 0x1d6c));
        puVar6 = (unsigned short *)(iVar11 + *(int *)(param_1 + 0x990));
        *puVar6 = puVar6[1];
        iVar2 = (int)lVar9;
        *(unsigned short *)(iVar2 + *(int *)(param_1 + 0x990) + 2) =
             *(unsigned short *)(iVar11 + *(int *)(param_1 + 0x990));
        puVar6 = (unsigned short *)(iVar2 + *(int *)(param_1 + 0x990));
        *puVar6 = puVar6[1];
        lVar8 = lVar8 + 2;
        *(unsigned short *)(iVar11 + *(int *)(param_1 + 0x994) + 2) =
             *(unsigned short *)(iVar1 + *(int *)(param_1 + 0x1d70));
        puVar6 = (unsigned short *)(iVar11 + *(int *)(param_1 + 0x994));
        *puVar6 = puVar6[1];
        puVar6 = (unsigned short *)(iVar11 + *(int *)(param_1 + 0x994));
        iVar11 = iVar11 + 4;
        *(unsigned short *)(iVar2 + *(int *)(param_1 + 0x994) + 2) = *puVar6;
        puVar6 = (unsigned short *)(iVar2 + *(int *)(param_1 + 0x994));
        lVar9 = lVar9 + 4;
        *puVar6 = puVar6[1];
        uVar5 = *(unsigned int *)(param_1 + 0x2d0);
      } while (uVar7 < uVar5);
    }
    uVar4 = uVar4 + 1;
    iVar3 = iVar3 + 4;
  } while (uVar4 < *(unsigned int *)(param_1 + 0x2d4));
  return;
}

