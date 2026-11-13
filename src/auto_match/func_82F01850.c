extern int fn_8265C940();
extern int fn_8265C990();
extern int memcpy();
extern unsigned int lbl_8216079C;
extern unsigned int lbl_82160864;
extern unsigned int lbl_82160928;
extern unsigned int lbl_82160DC0;
extern unsigned int lbl_82160DD8;


void fn_82F01850(int param_1,int param_2,int param_3,int param_4)

{
  unsigned char bVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  unsigned int uVar10;
  int iVar12;
  unsigned __int64 uVar11;
  int iVar13;
  int iVar14;
  int *piVar15;
  int iVar16;
  int iVar17;
  unsigned int uVar18;
  unsigned int uVar19;
  unsigned char *puVar20;
  unsigned char *puVar21;
  unsigned __int64 uVar22;
  unsigned __int64 uVar23;
  __int64 lVar24;
  int iVar25;
  int iVar26;
  __int64 lVar27;
  unsigned __int64 uVar28;
  
  iVar25 = 2;
  lVar24 = 1;
  if ((*(int *)(param_1 + 0x7660) == 0) || (iVar6 = *(int *)(param_1 + 0x7610), iVar6 < 2)) {
    iVar6 = *(int *)(param_1 + 0x588);
    iVar26 = *(int *)(param_1 + 0x10) * 4;
    if (*(int *)(iVar26 + -0x7ce567c8) < iVar6) {
      iVar25 = 3;
      if (iVar6 < *(int *)(iVar26 + -0x7ce567b8)) {
        lVar24 = 2;
      }
      else if (iVar6 < *(int *)(iVar26 + -0x7ce567a8)) {
        lVar24 = 3;
      }
      else if (iVar6 < *(int *)(iVar26 + -0x7ce56798)) {
        lVar24 = 4;
      }
      else if (iVar6 < *(int *)(iVar26 + -0x7ce56788)) {
        lVar24 = 5;
      }
    }
  }
  else {
    iVar25 = 3;
    if (iVar6 == 2) {
      lVar24 = 2;
    }
    else if (iVar6 == 3) {
      lVar24 = 3;
    }
  }
  uVar22 = (__int64)param_3 * (__int64)param_4;
  iVar6 = fn_8265C940(uVar22,0x248c8000);
  if (iVar6 != 0) {
    iVar26 = param_3 * 3;
    memcpy(iVar6,param_2,iVar26);
    param_4 = param_4 + -3;
    memcpy(param_4 * param_3 + iVar6,param_4 * param_3 + param_2,iVar26);
    piVar7 = (int *)fn_8265C940(0xc4,0x248c8000);
    if (piVar7 != (int *)0x0) {
      piVar8 = (int *)fn_8265C940(0x80,0x248c8000);
      if (piVar8 == (int *)0x0) {
        fn_8265C990(iVar6,0x248c8000);
        fn_8265C990(piVar7,0x248c8000);
        return;
      }
      lVar27 = 0x31;
      iVar17 = 0;
      piVar15 = piVar7 + -1;
      do {
        iVar12 = iVar25 * 0x31 + iVar17;
        iVar17 = iVar17 + 1;
        piVar15 = piVar15 + 1;
        *piVar15 = *(int *)(&lbl_82160928 + iVar12 * 4);
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      lVar27 = 0;
      uVar2 = *(unsigned int *)(&lbl_82160DC0 + (int)(lVar24 << 2));
      uVar23 = (unsigned __int64)uVar2;
      if (-1 < (__int64)(uVar23 - 1)) {
        piVar15 = piVar8 + -1;
        uVar28 = uVar23;
        do {
          uVar11 = lVar24 * 0x20 + lVar27;
          lVar27 = lVar27 + 1;
          piVar15 = piVar15 + 1;
          *piVar15 = *(int *)(&lbl_82160DD8 + (int)((uVar11 & 0xffffffff) << 2));
          uVar28 = uVar28 - 1;
        } while (uVar28 != 0);
      }
      if ((int)uVar2 < 0x20) {
        uVar23 = 0x20 - uVar23;
        piVar15 = piVar8 + (uVar2 - 1);
        uVar28 = uVar23 & 0xffffffff;
        while (uVar28 != 0) {
          piVar15 = piVar15 + 1;
          *piVar15 = 0;
          uVar23 = uVar23 - 1;
          uVar28 = uVar23;
        }
      }
      iVar25 = 3;
      if (3 < param_4) {
        iVar17 = param_3 + -3;
        puVar20 = (unsigned char *)(iVar26 + param_2);
        puVar21 = (unsigned char *)(iVar26 + iVar6 + 1);
        do {
          puVar21[-1] = *puVar20;
          *puVar21 = puVar21[param_2 - iVar6];
          puVar21[1] = puVar20[2];
          if (iVar17 < param_3) {
            iVar13 = param_3 - iVar17;
            iVar12 = iVar17;
            do {
              (puVar21 + -1)[iVar12] = puVar20[iVar12];
              iVar12 = iVar12 + 1;
              iVar13 = iVar13 + -1;
            } while (iVar13 != 0);
          }
          iVar12 = 3;
          if (3 < iVar17) {
            do {
              iVar13 = iVar12 + iVar26;
              iVar9 = 0;
              iVar14 = 0;
              uVar23 = (__int64)*piVar7 * (__int64)*piVar8;
              uVar10 = (unsigned int)*(unsigned char *)(iVar13 + param_2) * (int)uVar23;
              do {
                if ((0xbf < iVar14) || (iVar3 = *(int *)((int)piVar7 + iVar14 + 4), iVar3 < 1))
                break;
                uVar18 = *(unsigned int *)(&lbl_8216079C + iVar14);
                uVar4 = *(unsigned int *)(&lbl_82160864 + iVar14);
                bVar1 = *(unsigned char *)((uVar18 + iVar25) * param_3 + uVar4 + iVar12 + param_2);
                uVar19 = (unsigned int)*(unsigned char *)(iVar13 + param_2) - (unsigned int)bVar1;
                uVar5 = (int)uVar19 >> 0x1f;
                iVar16 = (uVar19 ^ uVar5) - uVar5;
                if (iVar16 < (int)uVar2) {
                  iVar9 = 0;
                  lVar24 = (__int64)piVar8[iVar16] * (__int64)iVar3;
                  uVar10 = (unsigned int)bVar1 * (int)lVar24 + uVar10;
                  uVar23 = uVar23 + lVar24;
                }
                else {
                  iVar9 = iVar9 + 1;
                }
                iVar14 = iVar14 + 4;
              } while (iVar9 < (int)((((uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f)) +
                                     ((uVar18 ^ (int)uVar18 >> 0x1f) - ((int)uVar18 >> 0x1f))) * 4))
              ;
              if ((int)uVar23 < 1) {
                uVar18 = (unsigned int)*(unsigned char *)(iVar13 + param_2);
              }
              else {
                uVar18 = (int)uVar10 / (int)uVar23;
                trapWord(6,uVar23,0);
                trapWord(5,uVar23 & ~((((unsigned __int64)uVar10 & 0x7fffffff) << 1 |
                                      (unsigned __int64)(uVar10 >> 0x1f)) - 1),0xffff);
                if ((int)uVar18 < 0) {
                  uVar18 = 0;
                }
                else if (0xff < (int)uVar18) {
                  uVar18 = 0xff;
                }
              }
              iVar12 = iVar12 + 1;
              *(char *)(iVar13 + iVar6) = (char)uVar18;
            } while (iVar12 < iVar17);
          }
          iVar25 = iVar25 + 1;
          iVar26 = iVar26 + param_3;
          puVar21 = puVar21 + param_3;
          puVar20 = puVar20 + param_3;
        } while (iVar25 < param_4);
        uVar22 = uVar22 & 0xffffffff;
      }
      memcpy(param_2,iVar6,uVar22);
      fn_8265C990(piVar7,0x248c8000);
      fn_8265C990(piVar8,0x248c8000);
    }
    fn_8265C990(iVar6,0x248c8000);
  }
  return;
}

