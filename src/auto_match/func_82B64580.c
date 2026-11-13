unsigned __int64 fn_82B64580(int *param_1)

{
  int iVar1;
  unsigned short *puVar2;
  unsigned short *puVar3;
  unsigned int uVar4;
  unsigned short *puVar5;
  __int64 lVar6;
  unsigned short *puVar7;
  unsigned int uVar8;
  unsigned short *puVar9;
  unsigned int uVar10;
  int iVar11;
  
  iVar1 = *param_1;
  iVar11 = *(int *)(param_1[1] + 0x20);
  uVar4 = *(unsigned int *)(iVar1 + 0x20);
  uVar10 = *(int *)(iVar1 + 0x6c) * *(int *)(iVar1 + 0x60) + uVar4;
  for (; uVar4 < uVar10; uVar4 = *(int *)(iVar1 + 0x60) * 2 + uVar4) {
    uVar8 = *(int *)(iVar1 + 0x68) * 2 + uVar4;
    if (uVar4 < uVar8) {
      puVar9 = (unsigned short *)(uVar4 + *(int *)(iVar1 + 0x60) + -4);
      puVar7 = (unsigned short *)(uVar4 - 4);
      puVar5 = (unsigned short *)(iVar11 + -2);
      lVar6 = (unsigned __int64)((uVar8 - uVar4) - 1 >> 2) + 1;
      do {
        puVar2 = puVar9 + 3;
        puVar3 = puVar7 + 3;
        puVar9 = puVar9 + 2;
        puVar7 = puVar7 + 2;
        puVar5 = puVar5 + 1;
        *puVar5 = (unsigned short)(((unsigned __int64)*puVar7 & 0xff) + ((unsigned __int64)*puVar9 & 0xff) +
                           ((unsigned __int64)*puVar3 & 0xff) + ((unsigned __int64)*puVar2 & 0xff) + 2 >> 2) &
                  0xff | (unsigned short)(((unsigned __int64)*puVar7 & 0xffffff00) +
                                  ((unsigned __int64)*puVar9 & 0xffffff00) +
                                  ((unsigned __int64)*puVar3 & 0xffffff00) +
                                  ((unsigned __int64)*puVar2 & 0xffffff00) + 0x200 >> 2) & 0xff00;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    iVar1 = *param_1;
    iVar11 = *(int *)(param_1[1] + 0x60) + iVar11;
  }
  return 0;
}

