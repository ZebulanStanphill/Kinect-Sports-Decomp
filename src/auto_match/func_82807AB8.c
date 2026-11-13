typedef unsigned char bool;
#define false 0
extern int fn_828114A8();
extern int fn_82811500();


void fn_82807AB8(int param_1,int param_2,unsigned char *param_3,int param_4)

{
  unsigned char bVar1;
  unsigned char bVar2;
  bool bVar3;
  unsigned __int64 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned __int64 uVar11;
  __int64 lVar12;
  unsigned char *pbVar13;
  unsigned char *pbVar14;
  unsigned __int64 uVar15;
  
  pbVar13 = *(unsigned char **)(param_2 + 0xc);
  if (param_4 == 0) {
    uVar11 = 0;
    uVar10 = 0;
    iVar5 = 0;
    if (*(short *)(param_1 + 0x48) != 0) {
      do {
        uVar9 = (unsigned int)*(unsigned short *)(param_2 + 0x1e);
        iVar6 = 0;
        if (*(unsigned short *)(param_2 + 0x1e) != 0) {
          do {
            pbVar14 = pbVar13 + 1;
            bVar1 = *pbVar13 & 3;
            uVar11 = (*pbVar13 & 0xffffffe0) << (0x18 - uVar10 & 0x3f) | uVar11;
            iVar7 = uVar10 + 3;
            if (bVar1 == 1) {
              uVar8 = 0x15 - iVar7;
LAB_82807c78:
              uVar8 = (*pbVar14 & 0xffffffe0) << (uVar8 & 0x3f);
LAB_82807c84:
              uVar11 = uVar8 | uVar11;
              pbVar14 = pbVar14 + 1;
            }
            else {
              if (bVar1 == 2) {
                uVar8 = 0x18 - iVar7;
                goto LAB_82807c78;
              }
              if (bVar1 == 3) {
                bVar1 = *pbVar14;
                pbVar14 = pbVar13 + 2;
                uVar11 = (bVar1 & 0xffffffe0) << (-iVar7 + 0x18U & 0x3f) | uVar11;
                uVar8 = (*pbVar14 & 0xffffffe0) << (-iVar7 + 0x15U & 0x3f);
                goto LAB_82807c84;
              }
            }
            pbVar13 = pbVar14;
            uVar10 = uVar10 + 9;
            if ((int)uVar9 < (int)uVar10) {
              uVar10 = uVar9;
            }
            if (7 < (int)uVar10) {
              uVar15 = (unsigned __int64)(uVar10 >> 3);
              uVar8 = uVar10 & 0xfffffff8;
              uVar10 = uVar10 - uVar8;
              uVar9 = uVar9 - uVar8;
              do {
                uVar4 = uVar11 >> 0x18;
                uVar11 = (uVar11 & 0xffffff) << 8;
                *param_3 = (char)uVar4;
                param_3 = param_3 + 1;
                uVar15 = uVar15 - 1;
              } while (uVar15 != 0);
            }
            iVar6 = iVar6 + 9;
          } while (iVar6 < (int)(unsigned int)*(unsigned short *)(param_2 + 0x1e));
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)(unsigned int)*(unsigned short *)(param_1 + 0x48));
      if (uVar10 != 0) {
        *param_3 = (char)(uVar11 >> 0x18);
      }
    }
  }
  else {
    lVar12 = 0;
    if (*(short *)(param_1 + 0x48) != 0) {
      iVar5 = 0;
      do {
        iVar6 = *(int *)(param_1 + 0x58);
        bVar3 = false;
        if ((iVar6 == 0) || ((unsigned int)*(unsigned short *)(iVar5 + iVar6) == (unsigned int)lVar12)) {
          iVar5 = iVar5 + 2;
          iVar7 = 0;
          if (*(unsigned short *)(param_2 + 0x1e) == 0) goto LAB_82807bb4;
          do {
            bVar1 = *pbVar13;
            pbVar14 = pbVar13 + 1;
            bVar3 = (bool)((bVar1 & 0xe0) != 0 | bVar3);
            if ((bVar1 & 3) != 0) {
              if ((bVar1 & 3) < 3) {
                bVar1 = *pbVar14;
              }
              else {
                if ((bVar1 & 3) != 3) goto LAB_82807b90;
                bVar2 = *pbVar14;
                pbVar14 = pbVar13 + 2;
                bVar1 = *pbVar14;
                bVar3 = (bool)((bVar2 & 0xe0) != 0 | bVar3);
              }
              bVar3 = (bool)((bVar1 & 0xe0) != 0 | bVar3);
              pbVar14 = pbVar14 + 1;
            }
LAB_82807b90:
            pbVar13 = pbVar14;
            iVar7 = iVar7 + 9;
          } while (iVar7 < (int)(unsigned int)*(unsigned short *)(param_2 + 0x1e));
          if (!bVar3) goto LAB_82807bb4;
          fn_828114A8(param_3,lVar12);
        }
        else {
LAB_82807bb4:
          if (iVar6 == 0) {
            fn_82811500(param_3,lVar12);
          }
        }
        lVar12 = lVar12 + 1;
      } while ((int)lVar12 < (int)(unsigned int)*(unsigned short *)(param_1 + 0x48));
    }
  }
  return;
}

