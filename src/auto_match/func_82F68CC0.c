typedef unsigned char bool;
#define true 1
#define false 0


unsigned __int64 fn_82F68CC0(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  bool bVar1;
  unsigned char uVar2;
  unsigned char uVar3;
  unsigned char bVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  int iVar8;
  int iVar9;
  unsigned __int64 uVar10;
  __int64 lVar11;
  unsigned int *puVar13;
  __int64 lVar12;
  unsigned __int64 uVar14;
  unsigned __int64 uVar15;
  int iVar16;
  unsigned __int64 uVar17;
  unsigned __int64 uVar18;
  unsigned __int64 uVar19;
  __int64 lVar20;
  __int64 lVar21;
  
  dataCacheBlockTouch(param_2);
  uVar14 = 8 - (param_1 & 7);
  uVar10 = param_1;
  if ((param_1 & 7) == 0) {
LAB_82f68d24:
    bVar1 = 0x7f < (param_3 & 0xffffffff);
    if ((param_2 & 7) == 4) {
      param_2 = param_2 - 4;
      if (bVar1) {
        lVar12 = uVar10 - 4;
        uVar14 = 0x80 - (uVar10 & 0x7f);
        if ((uVar10 & 0x7f) != 0) {
          uVar10 = (uVar14 & 0xffffffff) >> 2;
          param_3 = param_3 - uVar14;
          do {
            param_2 = param_2 + 4;
            lVar12 = lVar12 + 4;
            *(unsigned int *)lVar12 = *(unsigned int *)param_2;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
        uVar10 = (param_3 & 0xffffffff) >> 7;
        if (uVar10 != 0) {
          bVar1 = (param_3 & 0x7f) == 0;
          lVar20 = (((param_3 + 0x7f & 0xffffffff) >> 7) - 1 & 7) + 1;
          lVar11 = 4;
          do {
            dataCacheBlockTouch(lVar11 + param_2);
            lVar11 = lVar11 + 0x80;
            lVar20 = lVar20 + -1;
          } while (lVar20 != 0);
          lVar20 = param_2 + param_3;
          lVar21 = lVar12 + param_3;
          do {
            while( true ) {
              iVar16 = 8;
              do {
                iVar16 = iVar16 + -1;
                iVar8 = (int)param_2;
                uVar5 = *(unsigned int *)(iVar8 + 8);
                uVar6 = *(unsigned int *)(iVar8 + 0xc);
                iVar9 = (int)lVar12;
                *(unsigned int *)(iVar9 + 4) = *(unsigned int *)(iVar8 + 4);
                param_2 = param_2 + 0x10;
                uVar7 = *(unsigned int *)param_2;
                *(unsigned int *)(iVar9 + 8) = uVar5;
                *(unsigned int *)(iVar9 + 0xc) = uVar6;
                lVar12 = lVar12 + 0x10;
                *(unsigned int *)lVar12 = uVar7;
              } while (iVar16 != 0);
              if ((lVar20 - lVar11 & 0xffffffffU) <= (param_2 & 0xffffffff)) break;
              dataCacheBlockTouch(lVar11 + param_2);
              uVar10 = uVar10 - 1;
              if (uVar10 == 0) goto LAB_82f68f18;
            }
            if (!bVar1) {
              dataCacheBlockTouchForStore(lVar21 + -1);
              bVar1 = false;
            }
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
      }
      else {
        dataCacheBlockTouchForStore(uVar10);
        lVar12 = uVar10 - 4;
      }
LAB_82f68f18:
      uVar10 = param_3 & 3;
      for (uVar14 = (param_3 & 0xffffffff) >> 2 & 0x1f; uVar14 != 0; uVar14 = uVar14 - 1) {
        param_2 = param_2 + 4;
        lVar12 = lVar12 + 4;
        *(unsigned int *)lVar12 = *(unsigned int *)param_2;
      }
      if (uVar10 != 0) {
        lVar12 = lVar12 + 3;
        lVar11 = param_2 + 3;
        do {
          lVar11 = lVar11 + 1;
          lVar12 = lVar12 + 1;
          *(unsigned char *)lVar12 = *(unsigned char *)lVar11;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      return param_1;
    }
    if ((param_2 & 7) != 0) {
      param_2 = param_2 - 1;
      if (bVar1) {
        lVar12 = uVar10 - 1;
        lVar11 = 0x80 - (uVar10 & 0x7f);
        if ((uVar10 & 0x7f) != 0) {
          param_3 = param_3 - lVar11;
          do {
            param_2 = param_2 + 1;
            lVar12 = lVar12 + 1;
            *(unsigned char *)lVar12 = *(unsigned char *)param_2;
            lVar11 = lVar11 + -1;
          } while (lVar11 != 0);
        }
        uVar10 = (param_3 & 0xffffffff) >> 7;
        if (uVar10 != 0) {
          bVar1 = (param_3 & 0x7f) == 0;
          lVar20 = (((param_3 + 0x7f & 0xffffffff) >> 7) - 1 & 7) + 1;
          lVar11 = 1;
          do {
            dataCacheBlockTouch(lVar11 + param_2);
            lVar11 = lVar11 + 0x80;
            lVar20 = lVar20 + -1;
          } while (lVar20 != 0);
          lVar20 = param_2 + param_3;
          lVar21 = lVar12 + param_3;
          do {
            while( true ) {
              iVar16 = 0x20;
              do {
                iVar8 = (int)param_2;
                iVar16 = iVar16 + -1;
                bVar4 = *(unsigned char *)(iVar8 + 2);
                param_2 = param_2 + 4;
                *(unsigned int *)((int)lVar12 + 1) = *(unsigned int *)(iVar8 + 1);
                lVar12 = lVar12 + 4;
              } while (iVar16 != 0);
              if ((lVar20 - lVar11 & 0xffffffffU) <= (param_2 & 0xffffffff)) break;
              dataCacheBlockTouch(bVar4 + param_2);
              uVar10 = uVar10 - 1;
              if (uVar10 == 0) goto LAB_82f69048;
            }
            if (!bVar1) {
              dataCacheBlockTouchForStore(lVar21 + -1);
              bVar1 = false;
            }
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
      }
      else {
        dataCacheBlockTouchForStore(uVar10);
        lVar12 = uVar10 - 1;
      }
LAB_82f69048:
      for (param_3 = param_3 & 0x7f; param_3 != 0; param_3 = param_3 - 1) {
        param_2 = param_2 + 1;
        lVar12 = lVar12 + 1;
        *(unsigned char *)lVar12 = *(unsigned char *)param_2;
      }
      return param_1;
    }
    if (bVar1) {
      uVar14 = uVar10 - 8;
      param_2 = param_2 - 8;
      uVar17 = 0x80 - (uVar10 & 0x7f);
      if ((uVar10 & 0x7f) != 0) {
        uVar10 = (uVar17 & 0xffffffff) >> 3;
        param_3 = param_3 - uVar17;
        do {
          param_2 = param_2 + 8;
          uVar14 = uVar14 + 8;
          *(unsigned __int64 *)uVar14 = *(unsigned __int64 *)param_2;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      uVar10 = (param_3 & 0xffffffff) >> 7;
      if (uVar10 != 0) {
        bVar1 = (param_3 & 0x7f) == 0;
        lVar11 = (((param_3 + 0x7f & 0xffffffff) >> 7) - 1 & 7) + 1;
        lVar12 = 8;
        do {
          dataCacheBlockTouch(lVar12 + param_2);
          lVar12 = lVar12 + 0x80;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
        lVar11 = param_2 + param_3;
        lVar20 = uVar14 + param_3;
        do {
          while( true ) {
            iVar16 = (int)param_2;
            uVar18 = *(unsigned __int64 *)(iVar16 + 0x10);
            uVar19 = *(unsigned __int64 *)(iVar16 + 0x18);
            iVar8 = (int)uVar14;
            *(unsigned __int64 *)(iVar8 + 8) = *(unsigned __int64 *)(iVar16 + 8);
            uVar15 = *(unsigned __int64 *)(iVar16 + 0x20);
            *(unsigned __int64 *)(iVar8 + 0x10) = uVar18;
            uVar18 = *(unsigned __int64 *)(iVar16 + 0x28);
            *(unsigned __int64 *)(iVar8 + 0x18) = uVar19;
            uVar19 = *(unsigned __int64 *)(iVar16 + 0x30);
            *(unsigned __int64 *)(iVar8 + 0x20) = uVar15;
            uVar15 = *(unsigned __int64 *)(iVar16 + 0x38);
            *(unsigned __int64 *)(iVar8 + 0x28) = uVar18;
            uVar18 = *(unsigned __int64 *)(iVar16 + 0x40);
            *(unsigned __int64 *)(iVar8 + 0x30) = uVar19;
            uVar19 = *(unsigned __int64 *)(iVar16 + 0x48);
            *(unsigned __int64 *)(iVar8 + 0x38) = uVar15;
            uVar15 = *(unsigned __int64 *)(iVar16 + 0x50);
            *(unsigned __int64 *)(iVar8 + 0x40) = uVar18;
            uVar18 = *(unsigned __int64 *)(iVar16 + 0x58);
            *(unsigned __int64 *)(iVar8 + 0x48) = uVar19;
            uVar19 = *(unsigned __int64 *)(iVar16 + 0x60);
            *(unsigned __int64 *)(iVar8 + 0x50) = uVar15;
            uVar15 = *(unsigned __int64 *)(iVar16 + 0x68);
            *(unsigned __int64 *)(iVar8 + 0x58) = uVar18;
            uVar18 = *(unsigned __int64 *)(iVar16 + 0x70);
            *(unsigned __int64 *)(iVar8 + 0x60) = uVar19;
            uVar19 = *(unsigned __int64 *)(iVar16 + 0x78);
            *(unsigned __int64 *)(iVar8 + 0x68) = uVar15;
            param_2 = param_2 + 0x80;
            uVar15 = *(unsigned __int64 *)param_2;
            *(unsigned __int64 *)(iVar8 + 0x70) = uVar18;
            *(unsigned __int64 *)(iVar8 + 0x78) = uVar19;
            uVar14 = uVar14 + 0x80;
            *(unsigned __int64 *)uVar14 = uVar15;
            if ((lVar11 - lVar12 & 0xffffffffU) <= (param_2 & 0xffffffff)) break;
            dataCacheBlockTouch(lVar12 + param_2);
            uVar10 = uVar10 - 1;
            if (uVar10 == 0) goto LAB_82f68d4c;
          }
          if (!bVar1) {
            dataCacheBlockTouchForStore(lVar20 + -1);
            bVar1 = false;
          }
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      goto LAB_82f68d4c;
    }
  }
  else if ((uVar14 & 0xffffffff) < (param_3 & 0xffffffff)) {
    if ((uVar14 & 0xffffffff) == 4) {
      param_3 = param_3 - uVar14;
      puVar13 = (unsigned int *)param_2;
      param_2 = param_2 + 4;
      *(unsigned int *)param_1 = *puVar13;
      uVar10 = param_1 + 4;
    }
    else {
      param_3 = param_3 - uVar14;
      lVar11 = param_1 - 1;
      lVar12 = param_2 - 1;
      do {
        lVar21 = lVar12;
        lVar20 = lVar11;
        lVar12 = lVar21 + 1;
        lVar11 = lVar20 + 1;
        *(unsigned char *)lVar11 = *(unsigned char *)lVar12;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
      uVar10 = lVar20 + 2;
      param_2 = lVar21 + 2;
    }
    goto LAB_82f68d24;
  }
  dataCacheBlockTouchForStore(uVar10);
  param_2 = param_2 - 8;
  uVar14 = uVar10 - 8;
LAB_82f68d4c:
  uVar10 = param_3 & 7;
  for (uVar17 = (param_3 & 0xffffffff) >> 3 & 0xf; uVar17 != 0; uVar17 = uVar17 - 1) {
    param_2 = param_2 + 8;
    uVar14 = uVar14 + 8;
    *(unsigned __int64 *)uVar14 = *(unsigned __int64 *)param_2;
  }
  if (uVar10 != 0) {
    if (uVar10 == 4) {
      iVar16 = (int)param_2;
      uVar5 = *(unsigned int *)(iVar16 + 8);
      iVar8 = (int)uVar14;
      if ((uVar14 & 3) != 0) {
        uVar2 = *(unsigned char *)(iVar16 + 9);
        uVar3 = *(unsigned char *)(iVar16 + 10);
        *(unsigned char *)(iVar8 + 8) = *(unsigned char *)(iVar16 + 8);
        *(unsigned char *)(iVar8 + 9) = uVar2;
        *(unsigned char *)(iVar8 + 10) = uVar3;
        *(char *)(iVar8 + 0xb) = (char)uVar5;
        return param_1;
      }
      *(unsigned int *)(iVar8 + 8) = uVar5;
      return param_1;
    }
    lVar11 = uVar14 + 7;
    lVar12 = param_2 + 7;
    do {
      lVar12 = lVar12 + 1;
      lVar11 = lVar11 + 1;
      *(unsigned char *)lVar11 = *(unsigned char *)lVar12;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  return param_1;
}

