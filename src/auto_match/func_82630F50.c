extern int fn_82630C60();
extern int fn_8265C940();


unsigned __int64 fn_82630F50(int param_1)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int iVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  __int64 lVar7;
  unsigned int *puVar9;
  __int64 lVar8;
  unsigned int *puVar10;
  unsigned int uVar11;
  __int64 lVar12;
  
  uVar5 = fn_8265C940(0x2000,0xffffffffb5800000);
  if (uVar5 == 0) {
    uVar6 = 0;
  }
  else {
    *(unsigned int *)(param_1 + 0x36a8) = (unsigned int)uVar5;
    lVar7 = fn_82630C60(uVar5);
    *(unsigned int *)(param_1 + 14000) =
         ((int)((uVar5 & 0xffffffff) >> 0x14) + 0x200U & 0x1000) + ((unsigned int)uVar5 & 0x1fffffff);
    *(unsigned int *)(param_1 + 0x36ac) = *(unsigned int *)(param_1 + 0x36ac) & 0xff000000 | (unsigned int)lVar7 & 0xffffff;
    uVar11 = 0x10;
    uVar5 = (lVar7 + 7U & 0x3ffffff8) * 4 + uVar5;
    puVar10 = (unsigned int *)(param_1 + 0x372c);
    do {
      puVar9 = (unsigned int *)uVar5;
      *puVar9 = 0x5c8;
      uVar1 = ((uVar11 & 0x7f) << 8 | -uVar11 & 0x7f) << 4;
      puVar9[1] = 0x20000;
      lVar12 = 8;
      *(unsigned int *)(uVar5 + 8) = 0x78d00;
      lVar7 = uVar5 + 8;
      do {
        lVar8 = lVar7;
        lVar7 = lVar8 + 4;
        *(unsigned int *)lVar7 = uVar1 | 1;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
      iVar4 = (int)lVar8;
      *(unsigned int *)(iVar4 + 8) = 0xd00;
      uVar11 = uVar11 + 1;
      puVar2 = (unsigned int *)(iVar4 + 0xc);
      *puVar2 = uVar1;
      puVar10[3] = ((int)((uVar5 & 0xffffffff) >> 0x14) + 0x200U & 0x1000) +
                   ((unsigned int)puVar9 & 0x1fffffff);
      puVar3 = puVar10 + 2;
      uVar1 = (int)puVar2 + (4 - (int)puVar9) >> 2;
      puVar10 = puVar10 + 2;
      *puVar10 = *puVar3 & 0xff000000 | uVar1 & 0xffffff;
      uVar5 = ((__int64)(int)uVar1 + 7U & 0x3ffffff8) * 4 + uVar5;
    } while (uVar11 < 0x71);
    lVar7 = uVar5 - 4;
    lVar12 = 0x18;
    do {
      *(unsigned int *)((int)lVar7 + 4) = 0xc0003600;
      lVar7 = lVar7 + 8;
      *(unsigned int *)lVar7 = 0x10081;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    *(unsigned int *)(param_1 + 0x3ab8) =
         ((int)((uVar5 & 0xffffffff) >> 0x14) + 0x200U & 0x1000) + ((unsigned int)uVar5 & 0x1fffffff);
    uVar6 = 1;
    *(unsigned int *)(param_1 + 0x3ab4) =
         *(unsigned int *)(param_1 + 0x3ab4) & 0xff000000 |
         (int)((int)(unsigned int *)lVar7 + (4 - (unsigned int)uVar5)) >> 2 & 0xffffffU;
  }
  return uVar6;
}

