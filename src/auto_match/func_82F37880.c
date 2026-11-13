typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned char bRam831b9fbb;
extern unsigned char bRam831b9fcc;
extern int fn_82F37490();
extern int fn_82F63CA0();


__int64 fn_82F37880(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  bool bVar1;
  bool bVar2;
  unsigned char bVar3;
  unsigned int uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  unsigned char bVar8;
  bool bVar9;
  unsigned int uVar10;
  unsigned __int64 uVar11;
  int iVar12;
  unsigned int uVar13;
  __int64 lVar14;
  __int64 lVar15;
  __int64 lVar16;
  unsigned __int64 uVar17;
  unsigned __int64 uVar18;
  
  uVar18 = param_1;
  if ((param_1 & 0xffffffff) == 0) {
    lVar15 = -0x7fff0001;
  }
  else {
    do {
      if ((param_2 & 0xffffffff) < (unsigned __int64)(*(int *)((int)uVar18 + 4) + 0x14)) break;
      uVar18 = (unsigned __int64)*(unsigned int *)((int)uVar18 + 100);
    } while (uVar18 != 0);
    uVar13 = *(unsigned int *)((int)param_1 + 0xc);
    lVar15 = 0;
    bVar9 = false;
    lVar14 = 0;
    if ((uVar18 & 0xffffffff) != 0) {
      do {
        iVar5 = (int)uVar18;
        uVar11 = (unsigned __int64)*(unsigned int *)(iVar5 + 4);
        uVar17 = 0;
        bVar2 = uVar11 <= (param_2 & 0xffffffff);
        if (bVar2) {
          uVar17 = param_2 - uVar11;
        }
        lVar16 = 0;
        uVar4 = *(unsigned int *)((int)param_1 + 0xc);
        bVar1 = (*(unsigned char *)(iVar5 + 0x12) & bRam831b9fbb) != 0;
        if (bVar1) {
          uVar4 = *(unsigned int *)(iVar5 + 0x60);
          lVar16 = uVar11 + 0x14;
        }
        fn_82F63CA0((uVar17 + 6 & 0x3fffffff) * 4 + uVar18,(uVar17 + 5 & 0x3fffffff) * 4 + uVar18,
                     (0x13 - uVar17 & 0x3fffffff) << 2);
        iVar12 = 2;
        uVar10 = (unsigned int)((uVar17 & 0xffffffff) >> 3);
        iVar6 = uVar10 + iVar5;
        bVar3 = *(unsigned char *)(iVar6 + 0x10);
        if (uVar10 < 3) {
          iVar7 = iVar5 + 0x10;
          do {
            *(unsigned char *)(iVar7 + iVar12) = *(unsigned char *)(iVar7 + iVar12) >> 1;
            if (iVar12 == 2) {
              *(unsigned char *)(iVar5 + 0x12) = bRam831b9fcc & *(unsigned char *)(iVar5 + 0x12);
            }
            if (((int)uVar10 < iVar12) && ((*(unsigned char *)(iVar12 + iVar5 + 0xf) & 1) != 0)) {
              *(unsigned char *)(iVar7 + iVar12) = *(unsigned char *)(iVar7 + iVar12) | 0x80;
            }
            iVar12 = iVar12 + -1;
          } while ((int)uVar10 <= iVar12);
        }
        if ((bVar2) && ((uVar17 & 7) != 0)) {
          iVar12 = (int)(uVar17 & 7);
          bVar8 = *(unsigned char *)(-0x7ce46024 - iVar12) & *(unsigned char *)(iVar6 + 0x10);
          *(unsigned char *)(iVar6 + 0x10) = bVar8;
          *(unsigned char *)(iVar6 + 0x10) = *(unsigned char *)(iVar12 + -0x7ce46038) & bVar3 | bVar8;
        }
        if (bVar9) {
          lVar15 = fn_82F37490(param_1,lVar14,uVar13);
          if (lVar15 < 0) {
            return lVar15;
          }
          bVar9 = false;
        }
        if (bVar1) {
          bVar9 = true;
          lVar14 = lVar16;
          uVar13 = uVar4;
        }
        uVar18 = (unsigned __int64)*(unsigned int *)(iVar5 + 100);
      } while (uVar18 != 0);
      if ((int)lVar15 < 0) {
        return lVar15;
      }
    }
    lVar15 = fn_82F37490(param_1,param_2,param_3);
    if ((-1 < lVar15) && (bVar9)) {
      lVar15 = fn_82F37490(param_1,lVar14,uVar13);
    }
  }
  return lVar15;
}

