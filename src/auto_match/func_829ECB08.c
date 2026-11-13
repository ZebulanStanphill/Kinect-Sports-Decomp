typedef unsigned char bool;
#define false 0
extern int fn_829EC740();


bool fn_829ECB08(int param_1,__int64 param_2,unsigned __int64 param_3,short param_4)

{
  int iVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  int iVar4;
  unsigned __int64 uVar5;
  int *piVar6;
  short sVar7;
  __int64 lVar8;
  unsigned short uVar12;
  unsigned __int64 uVar9;
  int iVar10;
  int iVar11;
  unsigned __int64 uVar13;
  int iVar14;
  int iVar15;
  
  if ((1 < (param_3 & 0xffffffff)) && ((param_3 & 0xffffffff) != 0)) {
    uVar12 = *(unsigned short *)param_2;
    uVar13 = param_2 + param_3;
    *(unsigned short *)(param_1 + 0x10) = uVar12;
    lVar8 = param_2;
    if (9 < uVar12) {
      lVar8 = param_2 + 2;
      uVar3 = lVar8 - param_2 & 1;
      if (uVar3 != 0) {
        lVar8 = (lVar8 - uVar3) + 2;
      }
      if ((uVar13 & 0xffffffff) < (lVar8 + 2U & 0xffffffff)) {
        return false;
      }
      uVar12 = *(unsigned short *)lVar8;
    }
    *(unsigned short *)(param_1 + 0x12) = uVar12;
    if (uVar12 == 2) {
      lVar8 = lVar8 + 2;
      uVar3 = lVar8 - param_2 & 1;
      if (uVar3 != 0) {
        lVar8 = (lVar8 - uVar3) + 2;
      }
      if ((((lVar8 + 2U & 0xffffffff) <= (uVar13 & 0xffffffff)) && (param_4 == *(short *)lVar8)) &&
         (uVar3 = fn_829EC740(param_1,param_2,param_3,lVar8 + 2U,*(unsigned short *)(param_1 + 0x10)),
         (uVar3 & 0xffffffff) != 0)) {
        uVar9 = uVar3 - param_2 & 3;
        if (uVar9 != 0) {
          uVar3 = (uVar3 - uVar9) + 4;
        }
        uVar9 = uVar3 + 4;
        if ((uVar9 & 0xffffffff) <= (uVar13 & 0xffffffff)) {
          uVar5 = uVar9 - param_2 & 1;
          *(unsigned int *)(param_1 + 0x94) = *(unsigned int *)uVar3;
          if (uVar5 != 0) {
            uVar9 = (uVar9 - uVar5) + 2;
          }
          iVar4 = (int)uVar9;
          uVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 0x94);
          if (((uVar3 != 0) && (uVar3 < 0x1fffffff)) &&
             ((uVar3 * 6 + uVar9 & 0xffffffff) <= (uVar13 & 0xffffffff))) {
            iVar11 = *(int *)(param_1 + 0x50);
            iVar14 = 1;
            *(int *)(param_1 + 0x98) = iVar4;
            if (1 < *(unsigned short *)(param_1 + 0x14)) {
              iVar15 = *(int *)(param_1 + 0x2c);
              iVar10 = 2;
              piVar6 = (int *)(param_1 + 0x78);
              uVar3 = uVar9;
              do {
                uVar12 = *(unsigned short *)(iVar10 + iVar15);
                uVar2 = iVar11 + 3U & 0xfffffffc;
                piVar6[-8] = uVar2;
                iVar11 = (unsigned int)uVar12 * 4 + uVar2;
                *piVar6 = iVar11;
                iVar15 = *(int *)(param_1 + 0x2c);
                if (*(short *)(iVar10 + iVar15 + -2) != 0) {
                  uVar5 = (unsigned __int64)*(unsigned short *)(iVar10 + iVar15 + -2);
                  sVar7 = *(short *)uVar3;
                  do {
                    do {
                      iVar1 = (int)uVar3;
                      uVar3 = uVar3 + 6;
                      iVar11 = (((unsigned int)*(unsigned short *)(iVar1 + 4) - (unsigned int)*(unsigned short *)(iVar1 + 2)) + 1) *
                               2 + iVar11;
                    } while (sVar7 == *(short *)uVar3);
                    uVar5 = uVar5 - 1;
                    sVar7 = *(short *)uVar3;
                  } while (uVar5 != 0);
                }
                iVar14 = iVar14 + 1;
                piVar6 = piVar6 + 1;
                iVar10 = iVar10 + 2;
              } while (iVar14 < (int)(unsigned int)*(unsigned short *)(param_1 + 0x14));
            }
            if (*(unsigned short *)(param_1 + 0x10) < 10) {
              iVar11 = iVar4 - (int)param_2;
            }
            else {
              lVar8 = (unsigned __int64)*(unsigned int *)(param_1 + 0x94) * 6 + uVar9;
              uVar3 = lVar8 - param_2 & 3;
              if (uVar3 != 0) {
                lVar8 = (lVar8 - uVar3) + 4;
              }
              iVar4 = (int)(lVar8 + 4U);
              if ((uVar13 & 0xffffffff) < (lVar8 + 4U & 0xffffffff)) {
                return false;
              }
              iVar11 = *(int *)lVar8;
            }
            return iVar4 - (int)param_2 == iVar11;
          }
        }
      }
    }
  }
  return false;
}

