unsigned __int64 fn_82B64278(int *param_1)

{
  int iVar1;
  unsigned short *puVar2;
  unsigned short *puVar3;
  unsigned short *puVar4;
  unsigned int uVar5;
  __int64 lVar6;
  unsigned short *puVar7;
  unsigned int uVar8;
  unsigned short *puVar9;
  unsigned int uVar10;
  int iVar11;
  
  iVar1 = *param_1;
  iVar11 = *(int *)(param_1[1] + 0x20);
  uVar5 = *(unsigned int *)(iVar1 + 0x20);
  uVar10 = *(int *)(iVar1 + 0x6c) * *(int *)(iVar1 + 0x60) + uVar5;
  for (; uVar5 < uVar10; uVar5 = *(int *)(iVar1 + 0x60) * 2 + uVar5) {
    uVar8 = *(int *)(iVar1 + 0x68) * 2 + uVar5;
    if (uVar5 < uVar8) {
      puVar9 = (unsigned short *)(uVar5 + *(int *)(iVar1 + 0x60) + -4);
      puVar7 = (unsigned short *)(uVar5 - 4);
      puVar4 = (unsigned short *)(iVar11 + -2);
      lVar6 = (unsigned __int64)((uVar8 - uVar5) - 1 >> 2) + 1;
      do {
        puVar2 = puVar9 + 3;
        puVar3 = puVar7 + 3;
        puVar9 = puVar9 + 2;
        puVar7 = puVar7 + 2;
        puVar4 = puVar4 + 1;
        *puVar4 = (unsigned short)(((unsigned __int64)*puVar7 & 0x83e0) + ((unsigned __int64)*puVar9 & 0x83e0) +
                           ((unsigned __int64)*puVar3 & 0x83e0) + ((unsigned __int64)*puVar2 & 0x83e0) + 0x10040
                          >> 2) & 0x83e0 |
                  (unsigned short)(((unsigned __int64)*puVar7 & 0x7c1f) + ((unsigned __int64)*puVar9 & 0x7c1f) +
                           ((unsigned __int64)*puVar3 & 0x7c1f) + ((unsigned __int64)*puVar2 & 0x7c1f) + 0x802 >>
                          2) & 0x7c1f;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    iVar1 = *param_1;
    iVar11 = *(int *)(param_1[1] + 0x60) + iVar11;
  }
  return 0;
}

