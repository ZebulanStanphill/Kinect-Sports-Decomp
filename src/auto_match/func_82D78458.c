typedef unsigned char bool;
#define true 1
#define false 0


void fn_82D78458(unsigned __int64 param_1,unsigned char *param_2,int param_3,int param_4)

{
  bool bVar1;
  unsigned char bVar2;
  bool bVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned char *pbVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  int iVar10;
  unsigned __int64 uVar11;
  unsigned __int64 uVar12;
  int iVar13;
  int iVar14;
  
  if (2 < param_2[0x21]) {
    if (param_2[0x20] < 4) {
      if ((param_3 >> 4 & 8U) == 0) {
        iVar13 = ((unsigned int)LZCOUNT(param_3 >> 4 & 4) >> 5) + 1;
      }
      else {
        iVar13 = 0;
      }
      if ((param_4 >> 4 & 8U) == 0) {
        iVar14 = ((unsigned int)LZCOUNT(param_4 >> 4 & 4) >> 5) + 1;
      }
      else {
        iVar14 = 0;
      }
      uVar9 = 0;
      bVar3 = true;
      uVar8 = 0;
      if (param_2[0x21] != 0) {
        uVar11 = (unsigned __int64)param_2[0x21];
        pbVar7 = param_2;
        uVar9 = 0;
        uVar8 = 0;
        do {
          bVar2 = *pbVar7;
          if (bVar2 < 3) {
            uVar12 = (unsigned __int64)(pbVar7[1] >> 4);
            uVar6 = (unsigned int)((~uVar12 & 0xffffffff) >> 3) & 1;
            uVar4 = (unsigned int)((~uVar12 & 0xffffffff) >> 2) & 1;
            uVar5 = (unsigned int)((~uVar12 & 0xffffffff) >> 1) & 1;
            if ((iVar14 != 0) && (iVar10 = 1 << (uVar5 * 2 + uVar4) * 2, (iVar10 << 1 & uVar8) == 0)
               ) {
              uVar8 = iVar10 + uVar8;
            }
            if ((iVar14 != 1) &&
               (iVar10 = 1 << ((uVar5 + 2) * 2 + uVar6) * 2, (iVar10 << 1 & uVar8) == 0)) {
              uVar8 = iVar10 + uVar8;
            }
            if (iVar14 != 2) {
              iVar10 = 1 << ((uVar4 + 4) * 2 + uVar6) * 2;
              bVar1 = (iVar10 << 1 & uVar8) == 0;
LAB_82d7875c:
              if (bVar1) {
                uVar8 = iVar10 + uVar8;
              }
            }
          }
          else {
            if (6 < bVar2) {
              uVar12 = (unsigned __int64)((int)(unsigned int)bVar2 >> 4);
              uVar4 = (unsigned int)((~uVar12 & 0xffffffff) >> 2) & 1;
              uVar5 = (unsigned int)((~uVar12 & 0xffffffff) >> 1) & 1;
              if ((bVar2 & 0xf) == 0) {
                iVar10 = uVar5 * 2 + uVar4;
              }
              else {
                if ((bVar2 & 0xf) == 1) {
                  iVar10 = uVar5 + 2;
                }
                else {
                  iVar10 = uVar4 + 4;
                }
                iVar10 = iVar10 * 2 + ((unsigned int)((~uVar12 & 0xffffffff) >> 3) & 1);
              }
              iVar10 = 1 << iVar10 * 2;
              if ((iVar10 << 1 & uVar9) == 0) {
                uVar9 = iVar10 + uVar9;
              }
              bVar2 = pbVar7[1];
              uVar12 = (unsigned __int64)((int)(unsigned int)bVar2 >> 4);
              uVar4 = (unsigned int)((~uVar12 & 0xffffffff) >> 2) & 1;
              uVar5 = (unsigned int)((~uVar12 & 0xffffffff) >> 1) & 1;
              if ((bVar2 & 0xf) == 0) {
                iVar10 = 1 << (uVar5 * 2 + uVar4) * 2;
                bVar1 = (iVar10 << 1 & uVar8) == 0;
              }
              else {
                if ((bVar2 & 0xf) == 1) {
                  iVar10 = uVar5 + 2;
                }
                else {
                  iVar10 = uVar4 + 4;
                }
                iVar10 = 1 << (iVar10 * 2 + ((unsigned int)((~uVar12 & 0xffffffff) >> 3) & 1)) * 2;
                bVar1 = (iVar10 << 1 & uVar8) == 0;
              }
              goto LAB_82d7875c;
            }
            uVar12 = (unsigned __int64)(pbVar7[1] >> 4);
            uVar6 = (unsigned int)((~uVar12 & 0xffffffff) >> 3) & 1;
            uVar4 = (unsigned int)((~uVar12 & 0xffffffff) >> 2) & 1;
            uVar5 = (unsigned int)((~uVar12 & 0xffffffff) >> 1) & 1;
            if ((iVar13 != 0) && (iVar10 = 1 << (uVar5 * 2 + uVar4) * 2, (iVar10 << 1 & uVar9) == 0)
               ) {
              uVar9 = iVar10 + uVar9;
            }
            if ((iVar13 != 1) &&
               (iVar10 = 1 << ((uVar5 + 2) * 2 + uVar6) * 2, (iVar10 << 1 & uVar9) == 0)) {
              uVar9 = iVar10 + uVar9;
            }
            if ((iVar13 != 2) &&
               (iVar10 = 1 << ((uVar4 + 4) * 2 + uVar6) * 2, (iVar10 << 1 & uVar9) == 0)) {
              uVar9 = iVar10 + uVar9;
            }
          }
          pbVar7 = pbVar7 + 4;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      if (((uVar9 & 0x555555) == 0) && ((uVar8 & 0x555555) == 0)) {
        bVar3 = false;
      }
      param_2[0x22] = !bVar3;
    }
    else {
      param_2[0x22] = 1;
    }
  }
  return;
}

