#define true 1


void fn_82824AC0(__int64 param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4,__int64 param_5
                  )

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  int iVar4;
  unsigned __int64 uVar5;
  __int64 lVar6;
  int iVar7;
  unsigned __int64 uVar8;
  __int64 lVar9;
  __int64 lVar10;
  __int64 lVar11;
  unsigned int *puVar13;
  __int64 lVar12;
  int iVar14;
  int iVar15;
  unsigned __int64 uVar16;
  int iVar17;
  
  while( true ) {
    iVar4 = (int)param_4;
    iVar7 = (int)param_3;
    iVar3 = (int)param_1;
    if (iVar4 < 0x10) break;
    iVar14 = iVar7 + iVar4;
    lVar10 = 0;
    lVar6 = 0;
    iVar4 = *(int *)((int)(((unsigned __int64)
                            *(unsigned int *)((int)(((__int64)(iVar4 >> 1) +
                                             (unsigned __int64)(iVar4 < 0 && (param_4 & 1) != 0) + param_3
                                            & 0xffffffff) << 2) + iVar3) + param_5 & 0xffffffff) <<
                          2) + param_2);
    if (iVar7 < iVar14) {
      lVar9 = (param_3 & 0x3fffffff) * 4 + param_1;
      uVar8 = param_3;
      do {
        iVar17 = *(int *)((int)(((unsigned __int64)*(unsigned int *)lVar9 + param_5 & 0xffffffff) << 2) + param_2);
        if (iVar17 < iVar4) {
          lVar10 = lVar10 + 1;
        }
        if (iVar17 == iVar4) {
          lVar6 = lVar6 + 1;
        }
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 4;
      } while ((int)uVar8 < iVar14);
    }
    uVar16 = lVar10 + param_3;
    uVar8 = lVar6 + uVar16;
    lVar10 = 0;
    lVar6 = 0;
    iVar17 = (int)uVar16;
    if (iVar7 < iVar17) {
      lVar11 = (param_3 & 0x3fffffff) * 4 + param_1;
      lVar12 = (uVar8 & 0x3fffffff) * 4 + param_1 + -4;
      lVar9 = (uVar16 & 0x3fffffff) * 4 + param_1 + -4;
      uVar5 = param_3;
      do {
        puVar13 = (unsigned int *)lVar11;
        uVar1 = *puVar13;
        iVar15 = *(int *)((int)(((unsigned __int64)uVar1 + param_5 & 0xffffffff) << 2) + param_2);
        if (iVar15 < iVar4) {
          uVar5 = uVar5 + 1;
          lVar11 = lVar11 + 4;
        }
        else if (iVar15 == iVar4) {
          lVar10 = lVar10 + 1;
          *puVar13 = *(unsigned int *)((int)lVar9 + 4);
          lVar9 = lVar9 + 4;
          *(unsigned int *)lVar9 = uVar1;
        }
        else {
          lVar6 = lVar6 + 1;
          *puVar13 = *(unsigned int *)((int)lVar12 + 4);
          lVar12 = lVar12 + 4;
          *(unsigned int *)lVar12 = uVar1;
        }
      } while ((int)uVar5 < iVar17);
    }
    uVar5 = uVar16 + lVar10;
    iVar15 = (int)uVar8;
    if ((int)uVar5 < iVar15) {
      lVar9 = (uVar5 & 0x3fffffff) * 4 + param_1;
      lVar10 = (uVar8 + lVar6 & 0x3fffffff) * 4 + param_1 + -4;
      do {
        uVar1 = *(unsigned int *)lVar9;
        if (*(int *)((int)(((unsigned __int64)uVar1 + param_5 & 0xffffffff) << 2) + param_2) == iVar4) {
          lVar9 = lVar9 + 4;
          uVar5 = uVar5 + 1;
        }
        else {
          *(unsigned int *)lVar9 = *(unsigned int *)((int)lVar10 + 4);
          lVar10 = lVar10 + 4;
          *(unsigned int *)lVar10 = uVar1;
        }
      } while ((int)uVar5 < iVar15);
    }
    if (iVar7 < iVar17) {
      fn_82824AC0(param_1,param_2,param_3,uVar16 - param_3,param_5);
    }
    iVar7 = 0;
    if (0 < (__int64)(uVar8 - uVar16)) {
      lVar10 = (uVar16 & 0x3fffffff) * 4 + param_1 + -4;
      do {
        lVar10 = lVar10 + 4;
        iVar7 = iVar7 + 1;
        *(int *)(*(int *)lVar10 * 4 + param_2) = iVar15 + -1;
      } while (iVar7 < (int)(uVar8 - uVar16));
    }
    if (iVar17 == iVar15 + -1) {
      *(unsigned int *)((int)((uVar16 & 0xffffffff) << 2) + iVar3) = 0xffffffff;
    }
    if (iVar14 <= iVar15) {
      return;
    }
    param_4 = (param_3 - uVar8) + param_4;
    param_3 = uVar8;
  }
  iVar4 = iVar7 + iVar4;
  do {
    if (iVar4 <= iVar7) {
      return;
    }
    lVar9 = param_3 + 1;
    lVar6 = (param_3 & 0x3fffffff) * 4 + param_1;
    lVar12 = 1;
    iVar7 = *(int *)((int)(((unsigned __int64)*(unsigned int *)lVar6 + param_5 & 0xffffffff) << 2) + param_2);
    lVar10 = lVar6;
    if ((int)lVar9 < iVar4) {
      do {
        puVar13 = (unsigned int *)(lVar10 + 4);
        uVar1 = *puVar13;
        iVar14 = *(int *)((int)(((unsigned __int64)uVar1 + param_5 & 0xffffffff) << 2) + param_2);
        iVar17 = iVar7;
        if (iVar14 < iVar7) {
          lVar12 = 0;
          iVar17 = iVar14;
        }
        if (iVar14 <= iVar7) {
          uVar8 = lVar12 + param_3;
          lVar12 = lVar12 + 1;
          iVar7 = (int)((uVar8 & 0xffffffff) << 2);
          uVar2 = *(unsigned int *)(iVar7 + iVar3);
          *(unsigned int *)(iVar7 + iVar3) = uVar1;
          *puVar13 = uVar2;
        }
        lVar9 = lVar9 + 1;
        iVar7 = iVar17;
        lVar10 = lVar10 + 4;
      } while ((int)lVar9 < iVar4);
      if (0 < (int)lVar12) goto LAB_82824d64;
    }
    else {
LAB_82824d64:
      lVar10 = lVar6 + -4;
      lVar9 = lVar12;
      do {
        lVar10 = lVar10 + 4;
        *(int *)(*(int *)lVar10 * 4 + param_2) = (int)lVar12 + (int)param_3 + -1;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    if ((int)lVar12 == 1) {
      *(unsigned int *)lVar6 = 0xffffffff;
    }
    param_3 = lVar12 + param_3;
    iVar7 = (int)param_3;
  } while( true );
}

