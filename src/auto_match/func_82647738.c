extern int fn_82645110();
extern unsigned __int64 storeDoubleWordConditionalIndexed();


void fn_82647738(__int64 param_1)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  __int64 lVar7;
  unsigned __int64 *puVar8;
  unsigned __int64 uVar9;
  unsigned int uVar10;
  unsigned __int64 uVar11;
  unsigned __int64 uVar12;
  __int64 lVar13;
  
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 0x2a9c) == 0) {
    fn_82645110();
  }
  lVar7 = param_1 + 0x5ea0;
  uVar11 = *(unsigned __int64 *)(iVar1 + 0x5ea0);
  while (puVar8 = (unsigned __int64 *)lVar7, (uVar11 & 0x8000000000000000) != 0) {
    lVar13 = 4;
    do {
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    uVar11 = *puVar8;
  }
  do {
    uVar12 = *puVar8;
    uVar9 = (uVar12 >> 0x1f) << 0x20 | (uVar12 & 0xffffffff) + 1 & 0xffffffff | 0x100000000;
    uVar11 = uVar12;
    if (uVar9 == uVar12) break;
    uVar4 = *puVar8;
    if (uVar4 == uVar12) {
      uVar11 = storeDoubleWordConditionalIndexed(uVar9,0,lVar7);
      *puVar8 = uVar11;
    }
    else {
      uVar11 = storeDoubleWordConditionalIndexed(uVar4,0,lVar7);
      *puVar8 = uVar11;
    }
    uVar11 = uVar9;
  } while (uVar12 != uVar4);
  uVar6 = (unsigned int)uVar11;
  uVar10 = *(int *)(iVar1 + 0x5e90) + 0x220;
  uVar3 = *(unsigned int *)(iVar1 + 0x30);
  puVar2 = (unsigned int *)(*(int *)(iVar1 + 0x5e98) + (uVar6 & 0x1f) * 0x10);
  uVar10 = ((uVar10 >> 0x14) + 0x200 & 0x1000) + (uVar10 & 0x1fffffff);
  if (*(unsigned int *)(iVar1 + 0x38) < uVar3) {
    uVar3 = fn_82645110(param_1);
  }
  *(unsigned int *)(uVar3 + 4) = 0x57a;
  *(unsigned int *)(uVar3 + 8) = uVar6 & 0x1f | 0x8000000;
  if ((uVar11 & 0x80000000) == 0) {
    uVar5 = uVar6 & 0x7fffffff;
    uVar6 = (unsigned int)((~(uVar11 & 0xffffffff) & 0xffffffff) << 1) & 0x80000000;
  }
  else {
    uVar5 = (unsigned int)((~(uVar11 & 0xffffffff) & 0xffffffff) << 1) & 0x80000000;
    uVar6 = uVar6 & 0x7fffffff;
  }
  *(unsigned int *)(uVar3 + 0xc) = 0xc0043c00;
  *(unsigned int *)(uVar3 + 0x10) = 0x15;
  *(unsigned int *)(uVar3 + 0x14) = uVar10 | 2;
  *(unsigned int *)(uVar3 + 0x18) = uVar5;
  *(unsigned int *)(uVar3 + 0x1c) = 0xffffffff;
  *(unsigned int *)(uVar3 + 0x20) = 0x100;
  *(unsigned int *)(uVar3 + 0x24) = 0xc0043c00;
  *(unsigned int *)(uVar3 + 0x28) = 0x15;
  *(unsigned int *)(uVar3 + 0x2c) = uVar10 + 4 | 2;
  *(unsigned int *)(uVar3 + 0x30) = uVar6;
  *(unsigned int *)(uVar3 + 0x34) = 0xffffffff;
  *(unsigned int *)(uVar3 + 0x38) = 0x100;
  *(unsigned int *)(uVar3 + 0x3c) = 0x57a;
  *(unsigned int *)(uVar3 + 0x40) = 0;
  *(unsigned int **)(iVar1 + 0x30) = (unsigned int *)(uVar3 + 0x40);
  *(unsigned __int64 *)(puVar2 + 2) = (uVar11 << 0x20) + (unsigned __int64)*(unsigned int *)(iVar1 + 0x2a9c);
  *puVar2 = 0;
  puVar2[1] = 0;
  return;
}

