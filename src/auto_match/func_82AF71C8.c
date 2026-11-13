typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82AF62F8();
extern int fn_82AF6A18();
extern int fn_82B857D8();
extern int fn_82B8D2B8();


/* WARNING: Type propagation algorithm not settling */

__int64 fn_82AF71C8(int *param_1,int *param_2)

{
  bool bVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int *piVar4;
  int *piVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  int iVar10;
  __int64 lVar11;
  char cVar13;
  __int64 lVar12;
  unsigned __int64 uVar14;
  unsigned __int64 uVar15;
  unsigned int uVar17;
  __int64 lVar16;
  unsigned int uVar18;
  int *piVar19;
  
  puVar2 = (unsigned int *)param_1[1];
  puVar3 = (unsigned int *)param_2[1];
  if (puVar2 == (unsigned int *)0x0) {
    if (puVar3 == (unsigned int *)0x0) {
      return 0;
    }
  }
  else if (puVar3 != (unsigned int *)0x0) {
    piVar4 = (int *)puVar2[3];
    piVar5 = (int *)puVar3[3];
    lVar11 = ((unsigned __int64)*puVar2 & 0x1e) - ((unsigned __int64)*puVar3 & 0x1e);
    if (lVar11 != 0) {
      return lVar11;
    }
    if (piVar4 == piVar5) {
      return 0;
    }
    uVar18 = piVar5[2];
    uVar17 = piVar4[2];
    lVar11 = ((unsigned __int64)(uVar17 >> 7) & 0x7f) - ((unsigned __int64)(uVar18 >> 7) & 0x7f);
    if ((lVar11 == 0) && (lVar11 = ((unsigned __int64)uVar17 & 1) - ((unsigned __int64)uVar18 & 1), lVar11 == 0))
    {
      lVar11 = ((unsigned __int64)(uVar17 >> 0x17) & 1) - ((unsigned __int64)(uVar18 >> 0x17) & 1);
    }
    uVar6 = *(unsigned int *)(*(int *)((unsigned int)piVar4 & 0xfffff000) + 0x94);
    if ((int)lVar11 != 0) {
      return lVar11;
    }
    if (((uVar17 >> 0x17 & 1) != 0) && (cVar13 = fn_82AF6A18(uVar6,piVar4,piVar5), cVar13 == '\0')
       ) {
      lVar12 = fn_82AF62F8(piVar4,piVar5);
      lVar11 = 0;
      if (lVar12 != 0) {
        return lVar12;
      }
    }
    uVar18 = (unsigned int)piVar4[2] >> 0x13 & 7;
    bVar1 = (piVar4[2] & 0x3f80U) == 0x3200;
    if (bVar1) {
      uVar18 = 1;
    }
    uVar17 = (unsigned int)bVar1;
    if (uVar17 < uVar18) {
      piVar19 = piVar5 + uVar17 + 0xb;
      do {
        puVar2 = *(unsigned int **)(((int)piVar4 - (int)piVar5) + (int)piVar19);
        uVar7 = puVar2[3];
        uVar8 = ((unsigned int *)*piVar19)[3];
        if (uVar7 != uVar8) {
          uVar9 = *(unsigned int *)(uVar7 + 8);
          uVar15 = (unsigned __int64)(*(unsigned int *)(uVar8 + 8) >> 7) & 0x7f;
          uVar14 = (unsigned __int64)(uVar9 >> 7) & 0x7f;
          lVar11 = uVar14 - uVar15;
          if (lVar11 != 0) {
            if ((uVar14 == 0x7d) || (lVar12 = 0, uVar14 == 0x7c)) {
              lVar12 = 1;
            }
            if ((uVar15 == 0x7d) || (lVar16 = 0, uVar15 == 0x7c)) {
              lVar16 = 1;
            }
            if ((lVar12 != lVar16) ||
               ((unsigned int)LZCOUNT((int)uVar14 + -0x7d) >> 5 != (unsigned int)LZCOUNT((int)uVar15 + -0x7d) >> 5))
            break;
          }
          if (uVar14 != 0x7d) {
            lVar11 = ((unsigned __int64)*puVar2 & 0x1e) - ((unsigned __int64)*(unsigned int *)*piVar19 & 0x1e);
            if (lVar11 != 0) {
              return lVar11;
            }
            if (uVar14 == 0x7c) {
              lVar11 = fn_82AF62F8(uVar7,uVar8);
              if (lVar11 != 0) {
                return lVar11;
              }
LAB_82af73d0:
              lVar11 = 0;
              if ((*(unsigned int *)(uVar7 + 8) >> 0xe & 7) + (*(unsigned int *)(uVar8 + 8) >> 0xe & 7) < 5)
              goto LAB_82af73ec;
            }
            else {
              lVar11 = ((unsigned __int64)(uVar9 >> 0x17) & 1) -
                       ((unsigned __int64)(*(unsigned int *)(uVar8 + 8) >> 0x17) & 1);
              if (lVar11 != 0) {
                return lVar11;
              }
              if (((uVar9 >> 0x17 & 1) == 0) ||
                 (cVar13 = fn_82AF6A18(uVar6,uVar7,uVar8), cVar13 != '\0')) goto LAB_82af73d0;
            }
            lVar11 = fn_82AF62F8(uVar7,uVar8);
            break;
          }
        }
LAB_82af73ec:
        uVar17 = uVar17 + 1;
        piVar19 = piVar19 + 1;
      } while (uVar17 < uVar18);
      if ((int)lVar11 != 0) {
        return lVar11;
      }
    }
    cVar13 = fn_82B857D8(piVar4,piVar5);
    if (cVar13 == '\0') {
      lVar12 = fn_82AF62F8(piVar4,piVar5);
      lVar11 = 0;
      if (lVar12 != 0) {
        return lVar12;
      }
    }
    iVar10 = *piVar5;
    do {
      if (iVar10 == 0) {
        bVar1 = false;
LAB_82af746c:
        if ((!bVar1) && (cVar13 = fn_82B8D2B8(uVar6,piVar4,piVar5,1,1), cVar13 != '\0')) {
          return lVar11;
        }
        lVar11 = fn_82AF62F8(piVar4,piVar5);
        return lVar11;
      }
      if (*(int **)(iVar10 + 0xc) == piVar4) {
        bVar1 = true;
        goto LAB_82af746c;
      }
      iVar10 = *(int *)(iVar10 + 4);
    } while( true );
  }
  lVar11 = fn_82AF62F8(*(unsigned int *)(*param_1 + 0xc),*(unsigned int *)(*param_2 + 0xc));
  return lVar11;
}

