__int64 fn_82D45230(int param_1)

{
  int iVar1;
  unsigned short *puVar2;
  int iVar3;
  __int64 lVar4;
  __int64 lVar6;
  __int64 lVar8;
  int iVar9;
  unsigned short *puVar10;
  unsigned __int64 uVar11;
  int iVar5;
  int iVar7;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  lVar6 = 0;
  iVar7 = 0;
  lVar4 = 0;
  iVar5 = 0;
  lVar8 = 0;
  uVar11 = 0;
  iVar3 = 0;
  if (1 < iVar1) {
    puVar10 = (unsigned short *)(*(int *)(param_1 + 0x28) + -2);
    iVar9 = (iVar1 - 2U >> 1) + 1;
    iVar3 = iVar9 * 2;
    do {
      puVar2 = puVar10 + 1;
      puVar10 = puVar10 + 2;
      lVar6 = (unsigned __int64)*puVar2 + lVar6;
      iVar7 = (int)lVar6;
      lVar4 = (unsigned __int64)*puVar10 + lVar4;
      iVar5 = (int)lVar4;
      lVar8 = (unsigned __int64)*puVar10 + (unsigned __int64)*puVar2 + lVar8 + -4;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  if (iVar3 < iVar1) {
    uVar11 = (unsigned __int64)*(unsigned short *)(iVar3 * 2 + *(int *)(param_1 + 0x28));
    lVar8 = uVar11 + lVar8 + -2;
  }
  return (((*(int *)(param_1 + 0x20) - iVar5) - iVar7) - (int)uVar11) / 3 + lVar8;
}

