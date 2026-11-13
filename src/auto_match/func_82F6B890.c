typedef unsigned char bool;
extern int fn_82F63BA0();
extern int fn_82F68240();
extern int fn_82F7C468();
extern int fn_82F82818();
extern unsigned int lbl_8329F620;


__int64 fn_82F6B890(unsigned int *param_1)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  unsigned int *puVar7;
  unsigned __int64 uVar5;
  __int64 lVar6;
  int iVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  __int64 lVar11;
  unsigned __int64 uVar12;
  __int64 lVar13;
  unsigned int uVar14;
  
  if (param_1 == (unsigned int *)0x0) {
    puVar7 = (unsigned int *)fn_82F68240();
    *puVar7 = 0x16;
    fn_82F63BA0();
  }
  else {
    uVar5 = fn_82F7C468(param_1);
    if ((int)param_1[1] < 0) {
      param_1[1] = 0;
    }
    lVar6 = fn_82F82818(uVar5,0,1);
    if (-1 < lVar6) {
      uVar1 = param_1[3];
      if ((uVar1 & 0x108) == 0) {
        return lVar6 - (unsigned __int64)param_1[1];
      }
      uVar9 = (unsigned __int64)*param_1;
      uVar12 = (unsigned __int64)param_1[2];
      lVar13 = uVar9 - uVar12;
      uVar14 = (unsigned int)uVar5;
      iVar2 = (int)uVar14 >> 5;
      if ((uVar1 & 3) == 0) {
        if ((uVar1 & 0x80) == 0) {
          puVar7 = (unsigned int *)fn_82F68240();
          *puVar7 = 0x16;
          return -1;
        }
      }
      else if (((*(unsigned char *)((&lbl_8329F620)[iVar2] + (uVar14 & 0x1f) * 0x48 + 4) & 0x80) != 0) &&
              (uVar12 < uVar9)) {
        uVar10 = uVar12;
        do {
          if (*(char *)uVar10 == '\n') {
            lVar13 = lVar13 + 1;
          }
          uVar10 = uVar10 + 1;
        } while ((uVar10 & 0xffffffff) < (unsigned __int64)*param_1);
      }
      if ((int)lVar6 != 0) {
        if ((uVar1 & 1) != 0) {
          if (param_1[1] == 0) {
            lVar13 = 0;
          }
          else {
            uVar9 = (uVar9 - uVar12) + (unsigned __int64)param_1[1];
            iVar3 = (uVar14 & 0x1f) * 0x48;
            if ((*(unsigned char *)((&lbl_8329F620)[iVar2] + iVar3 + 4) & 0x80) != 0) {
              iVar8 = fn_82F82818(uVar5,0,2);
              if (iVar8 == (int)lVar6) {
                uVar12 = (unsigned __int64)param_1[2];
                if (uVar12 < (uVar12 + uVar9 & 0xffffffff)) {
                  lVar11 = (uVar12 + uVar9) - uVar12;
                  do {
                    if (*(char *)uVar12 == '\n') {
                      uVar9 = uVar9 + 1;
                    }
                    uVar12 = uVar12 + 1;
                    lVar11 = lVar11 + -1;
                  } while (lVar11 != 0);
                }
                bVar4 = (param_1[3] & 0x2000) == 0;
              }
              else {
                iVar8 = fn_82F82818(uVar5,lVar6,0);
                if (iVar8 < 0) {
                  return -1;
                }
                if (((0x200 < (uVar9 & 0xffffffff)) || ((param_1[3] & 8) == 0)) ||
                   (uVar9 = 0x200, (param_1[3] & 0x400) != 0)) {
                  uVar9 = (unsigned __int64)param_1[6];
                }
                bVar4 = (*(unsigned char *)((&lbl_8329F620)[iVar2] + iVar3 + 4) & 4) == 0;
              }
              if (!bVar4) {
                uVar9 = uVar9 + 1;
              }
            }
            lVar6 = lVar6 - uVar9;
          }
        }
        return lVar13 + lVar6;
      }
      return lVar13;
    }
  }
  return -1;
}

