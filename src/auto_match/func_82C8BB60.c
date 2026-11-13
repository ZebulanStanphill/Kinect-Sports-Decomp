typedef unsigned char bool;


void fn_82C8BB60(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar4;
  __int64 lVar5;
  int iVar6;
  unsigned int uVar7;
  unsigned __int64 uVar8;
  __int64 lVar9;
  unsigned int uVar10;
  unsigned int *puVar11;
  bool bVar12;
  bool bVar13;
  __int64 lVar14;
  
  lVar5 = 2;
  bVar12 = *(int *)(param_1 + 0x54a4) != 0;
  iVar6 = *(int *)(param_1 + 0x178);
  iVar4 = *(int *)(param_1 + 0x50d0) * 0x1f8;
  lVar14 = 0x7d;
  bVar13 = *(int *)(param_1 + 0x54a8) != 0;
  *(unsigned int *)(iVar4 + iVar6) = (unsigned int)bVar12;
  puVar11 = (unsigned int *)(iVar4 + iVar6);
  do {
    iVar6 = (int)lVar5;
    uVar2 = iVar6 / 9 + (iVar6 >> 0x1f);
    uVar8 = (__int64)(int)uVar2 + (unsigned __int64)(uVar2 >> 0x1f);
    lVar9 = lVar5 - (uVar8 + (uVar8 & 0x1fffffff) * 8);
    if (lVar9 == 0) {
      uVar3 = 0;
      uVar2 = 0;
    }
    else {
      iVar4 = (int)lVar9;
      uVar3 = iVar4 + (unsigned int)bVar12;
      uVar2 = (1 << ((iVar4 + (unsigned int)bVar12) - 1 & 0x3f)) - (unsigned int)bVar12;
    }
    uVar1 = iVar6 / 9;
    if ((int)uVar1 >> 1 == 0) {
      uVar10 = 0;
      uVar7 = 0;
    }
    else {
      uVar10 = (int)((unsigned int)bVar13 * 2 + uVar1) >> 1;
      uVar7 = (1 << ((((int)uVar1 >> 1) + (unsigned int)bVar13) - 1 & 0x3f)) - (unsigned int)bVar13;
    }
    lVar5 = lVar5 + 1;
    puVar11 = puVar11 + 1;
    *puVar11 = ((((uVar1 & 1) << 8 | uVar7 & 0xff) << 8 | uVar2 & 0xff) << 4 | uVar10 & 0xf) << 4 |
               uVar3 & 0xf;
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  return;
}

