unsigned __int64 fn_82920BD8(int *param_1)

{
  int iVar1;
  unsigned char *pbVar2;
  unsigned char *pbVar3;
  __int64 lVar4;
  unsigned char *puVar5;
  unsigned char *pbVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned char *pbVar9;
  unsigned int uVar10;
  int iVar11;
  
  iVar1 = *param_1;
  iVar11 = *(int *)(param_1[1] + 0x20);
  uVar7 = *(unsigned int *)(iVar1 + 0x20);
  uVar10 = *(int *)(iVar1 + 0x6c) * *(int *)(iVar1 + 0x60) + uVar7;
  for (; uVar7 < uVar10; uVar7 = *(int *)(iVar1 + 0x60) * 2 + uVar7) {
    uVar8 = *(int *)(iVar1 + 0x68) + uVar7;
    if (uVar7 < uVar8) {
      pbVar9 = (unsigned char *)(uVar7 + *(int *)(iVar1 + 0x60) + -1);
      pbVar6 = (unsigned char *)(uVar7 - 1);
      puVar5 = (unsigned char *)(iVar11 + -1);
      lVar4 = (unsigned __int64)((uVar8 - uVar7) - 1 >> 1) + 1;
      do {
        pbVar2 = pbVar9 + 1;
        pbVar9 = pbVar9 + 2;
        pbVar3 = pbVar6 + 1;
        pbVar6 = pbVar6 + 2;
        puVar5 = puVar5 + 1;
        *puVar5 = (char)((unsigned __int64)*pbVar2 + (unsigned __int64)*pbVar9 + (unsigned __int64)*pbVar3 +
                         (unsigned __int64)*pbVar6 + 2 >> 2);
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    iVar1 = *param_1;
    iVar11 = *(int *)(param_1[1] + 0x60) + iVar11;
  }
  return 0;
}

