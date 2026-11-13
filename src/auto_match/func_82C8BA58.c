typedef unsigned char bool;


void fn_82C8BA58(int param_1)

{
  unsigned __int64 uVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  __int64 lVar5;
  int iVar6;
  unsigned int *puVar10;
  unsigned __int64 uVar7;
  __int64 lVar8;
  unsigned __int64 uVar9;
  bool bVar11;
  bool bVar12;
  __int64 lVar13;
  
  lVar5 = 2;
  bVar11 = *(int *)(param_1 + 0x54a4) != 0;
  lVar13 = 0x47;
  bVar12 = *(int *)(param_1 + 0x54a8) != 0;
  puVar10 = (unsigned int *)(*(int *)(param_1 + 0x50d0) * 0x120 + *(int *)(param_1 + 0x174));
  uVar1 = (unsigned __int64)bVar12;
  *puVar10 = (unsigned int)bVar11;
  do {
    iVar6 = (int)lVar5;
    uVar3 = iVar6 / 9 + (iVar6 >> 0x1f);
    uVar7 = (__int64)(int)uVar3 + (unsigned __int64)(uVar3 >> 0x1f);
    lVar8 = lVar5 - (uVar7 + (uVar7 & 0x1fffffff) * 8);
    if (lVar8 == 0) {
      uVar3 = 0;
      uVar7 = 0;
    }
    else {
      iVar2 = (int)lVar8;
      uVar3 = iVar2 + (unsigned int)bVar11;
      uVar7 = (unsigned __int64)(unsigned int)(1 << ((iVar2 + (unsigned int)bVar11) - 1 & 0x3f)) - (unsigned __int64)bVar11;
    }
    iVar6 = iVar6 / 9;
    if (iVar6 == 0) {
      uVar9 = 0;
      uVar4 = 0;
    }
    else {
      uVar9 = (__int64)iVar6 + uVar1;
      uVar4 = (unsigned int)(1 << ((iVar6 + (unsigned int)bVar12) - 1 & 0x3f)) - uVar1;
    }
    lVar5 = lVar5 + 1;
    puVar10 = puVar10 + 1;
    *puVar10 = (unsigned int)((((uVar4 & 0xff) << 8 | uVar7 & 0xff) << 4 | uVar9 & 0xf) << 4) |
               (1 << ((unsigned int)uVar9 & 0x3f)) * 0x1000000 - 0x1000000U | uVar3 & 0xf;
    lVar13 = lVar13 + -1;
  } while (lVar13 != 0);
  return;
}

