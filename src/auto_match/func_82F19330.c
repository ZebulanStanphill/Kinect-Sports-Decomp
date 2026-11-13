typedef unsigned char bool;
#define true 1
#define false 0
extern int iRam831b8f14;
extern int iRam831b8f18;
extern int iRam831b8f1c;
extern int iRam831b8f20;
extern int iRam831b8f24;
extern int iRam831b8f28;
extern int iRam831b8f2c;
extern unsigned int iStack_ac;
extern unsigned int lbl_8215F808;
extern unsigned int lbl_82162860;
extern unsigned int uStack_a8;


void fn_82F19330(int param_1,unsigned __int64 param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned char bVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  int iVar9;
  char *pcVar11;
  __int64 lVar10;
  unsigned int uVar13;
  int iVar14;
  __int64 lVar12;
  int *piVar17;
  unsigned int *puVar18;
  unsigned __int64 uVar15;
  __int64 lVar16;
  unsigned int uVar19;
  int iVar21;
  unsigned __int64 uVar20;
  unsigned __int64 uVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  unsigned int uVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  unsigned int uVar32;
  int iStack_ac;
  unsigned int uStack_a8;
  
  iVar3 = *(int *)(param_1 + 0x1e54);
  uVar7 = (unsigned int)param_2;
  if ((*(int *)(param_1 + 0x6d54) == 0) || (iVar9 = 4, *(int *)(param_1 + 0x7b38) == 0)) {
    iVar9 = 1;
  }
  iVar23 = *(int *)(param_1 + 0x2d8);
  uVar32 = 0;
  iVar29 = iVar23 + iRam831b8f14;
  iVar30 = iRam831b8f1c + 1;
  iVar28 = iRam831b8f20 + 1;
  iVar31 = iRam831b8f18 + 1;
  iVar21 = iRam831b8f28 + 1;
  uVar13 = iRam831b8f2c + 1;
  iVar27 = iRam831b8f24 + 1;
  if ((param_2 & 0xffffffff) < 6) {
    bVar1 = uVar7 != 0;
    if (param_2 == 1 && bVar1) {
      uVar4 = *(unsigned int *)(param_1 + 0x1a88);
      uVar20 = (unsigned __int64)uVar4;
      uVar22 = 0;
      iVar9 = 0;
      if (0 < iVar23) {
        pcVar11 = (char *)(iVar3 + 0x58);
        do {
          cVar2 = *pcVar11;
          if (((cVar2 == '\x01') || (cVar2 == '\x05')) || (bVar1 = false, cVar2 == '\x06')) {
            bVar1 = true;
          }
          pcVar11 = pcVar11 + 0x114;
          *(char *)(iVar9 + uVar4) = -1 - !bVar1;
          iVar9 = iVar9 + 1;
          uVar22 = (__int64)(char)(-1 - !bVar1) + uVar22;
        } while (iVar9 < *(int *)(param_1 + 0x2d8));
      }
    }
    else if (param_2 == 2 && bVar1) {
      uVar4 = *(unsigned int *)(param_1 + 0x5290);
      uVar20 = (unsigned __int64)uVar4;
      if (*(int *)(param_1 + 0x6d54) == 0) {
        uVar22 = 0;
        iVar9 = 0;
        if (0 < iVar23) {
          pcVar11 = (char *)(iVar3 + -0xbc);
          do {
            pcVar11 = pcVar11 + 0x114;
            cVar2 = *pcVar11;
            *(bool *)(iVar9 + uVar4) = cVar2 == '\x02';
            iVar9 = iVar9 + 1;
            uVar22 = (__int64)(cVar2 == '\x02') + uVar22;
          } while (iVar9 < *(int *)(param_1 + 0x2d8));
        }
      }
      else if ((*(int *)(param_1 + 0xaf0) == 0) || (*(int *)(param_1 + 0xaf0) == 4)) {
        uVar22 = 0;
        iVar9 = 0;
        if (0 < iVar23) {
          pcVar11 = (char *)(iVar3 + -0xbb);
          do {
            pcVar11 = pcVar11 + 0x114;
            cVar2 = *pcVar11;
            *(bool *)(iVar9 + uVar4) = cVar2 == '\x01';
            iVar9 = iVar9 + 1;
            uVar22 = (__int64)(cVar2 == '\x01') + uVar22;
          } while (iVar9 < *(int *)(param_1 + 0x2d8));
        }
      }
      else {
        uVar22 = 0;
        iVar9 = 0;
        if (0 < iVar23) {
          pcVar11 = (char *)(iVar3 + -0xbc);
          do {
            pcVar11 = pcVar11 + 0x114;
            cVar2 = *pcVar11;
            *(bool *)(iVar9 + uVar4) = cVar2 == '\x02';
            iVar9 = iVar9 + 1;
            uVar22 = (__int64)(cVar2 == '\x02') + uVar22;
          } while (iVar9 < *(int *)(param_1 + 0x2d8));
        }
      }
    }
    else if (param_2 == 3 && bVar1) {
      uVar4 = *(unsigned int *)(param_1 + 0x1e9c);
      uVar20 = (unsigned __int64)uVar4;
      uVar22 = 0;
      iVar14 = 0;
      if (0 < iVar23) {
        piVar17 = (int *)(iVar3 + -0xb8);
        do {
          piVar17 = piVar17 + 0x45;
          bVar1 = iVar9 == *piVar17 >> 0x1c;
          *(bool *)(iVar14 + uVar4) = bVar1;
          iVar14 = iVar14 + 1;
          uVar22 = (__int64)bVar1 + uVar22;
        } while (iVar14 < *(int *)(param_1 + 0x2d8));
      }
    }
    else if (param_2 == 4 && bVar1) {
      uVar4 = *(unsigned int *)(param_1 + 0x6f00);
      uVar20 = (unsigned __int64)uVar4;
      uVar22 = 0;
      iVar9 = 0;
      if (0 < iVar23) {
        puVar18 = (unsigned int *)(iVar3 + -0xf8);
        do {
          puVar18 = puVar18 + 0x45;
          uVar5 = *puVar18;
          *(char *)(iVar9 + uVar4) = (char)uVar5;
          iVar9 = iVar9 + 1;
          uVar22 = (__int64)(char)uVar5 + uVar22;
        } while (iVar9 < *(int *)(param_1 + 0x2d8));
      }
    }
    else if (bVar1) {
      uVar4 = *(unsigned int *)(param_1 + 0x6f08);
      uVar20 = (unsigned __int64)uVar4;
      uVar22 = 0;
      iVar9 = 0;
      if (0 < iVar23) {
        puVar18 = (unsigned int *)(iVar3 + -0x98);
        do {
          puVar18 = puVar18 + 0x45;
          uVar5 = *puVar18;
          *(char *)(iVar9 + uVar4) = (char)uVar5;
          iVar9 = iVar9 + 1;
          uVar22 = (__int64)(char)uVar5 + uVar22;
        } while (iVar9 < *(int *)(param_1 + 0x2d8));
      }
    }
    else {
      uVar4 = *(unsigned int *)(param_1 + 0x1b84);
      uVar20 = (unsigned __int64)uVar4;
      uVar22 = 0;
      iVar9 = 0;
      if (0 < iVar23) {
        puVar18 = (unsigned int *)(iVar3 + -0x114);
        do {
          puVar18 = puVar18 + 0x45;
          bVar6 = (unsigned char)((unsigned int)*puVar18 >> 0x1f);
          *(unsigned char *)(iVar9 + uVar4) = bVar6;
          iVar9 = iVar9 + 1;
          uVar22 = (__int64)(char)bVar6 + uVar22;
        } while (iVar9 < *(int *)(param_1 + 0x2d8));
      }
    }
  }
  else {
    uVar20 = (unsigned __int64)uVar13;
    uVar22 = (unsigned __int64)uVar13;
  }
  uVar15 = (unsigned __int64)*(unsigned int *)(param_1 + 0x2d8);
  uVar22 = (uVar22 & 0x7fffffff) << 1;
  lVar10 = 0;
  uVar22 = ((~(uVar22 ^ uVar15) & 0xffffffff) >> 0x1f) + (unsigned __int64)(uVar22 <= uVar15) & 1;
  if (0 < *(int *)(param_1 + 0x2d4)) {
    lVar12 = uVar15 + uVar20 + -1;
    do {
      lVar16 = 0;
      if (0 < *(int *)(param_1 + 0x2d0)) {
        do {
          pcVar11 = (char *)uVar20;
          if (lVar16 + lVar10 == 0) {
LAB_82f196dc:
            uVar15 = uVar22;
          }
          else if ((int)lVar10 == 0) {
            uVar15 = (__int64)pcVar11[-1];
          }
          else if ((int)lVar16 == 0) {
            uVar15 = (__int64)pcVar11[-*(int *)(param_1 + 0x2d0)];
          }
          else {
            uVar15 = (__int64)pcVar11[-1];
            if (pcVar11[-1] != pcVar11[-*(int *)(param_1 + 0x2d0)]) goto LAB_82f196dc;
          }
          lVar16 = lVar16 + 1;
          uVar20 = uVar20 + 1;
          lVar12 = lVar12 + 1;
          *(char *)lVar12 = '\x01' - ((__int64)*pcVar11 == uVar15);
        } while ((int)lVar16 < *(int *)(param_1 + 0x2d0));
      }
      lVar10 = lVar10 + 1;
    } while ((int)lVar10 < *(int *)(param_1 + 0x2d4));
  }
  iVar23 = 0;
  iVar9 = (int)uVar20;
  iVar3 = iVar9 - *(int *)(param_1 + 0x2d8);
  if (0 < *(int *)(param_1 + 0x2d8)) {
    do {
      *(unsigned char *)(iVar23 + iVar3) = *(unsigned char *)(iVar23 + iVar3) ^ (unsigned char)uVar22;
      iVar23 = iVar23 + 1;
    } while (iVar23 < *(int *)(param_1 + 0x2d8));
  }
  uVar4 = *(unsigned int *)(param_1 + 0x2d8);
  uVar15 = (unsigned __int64)uVar4 & 1;
  if ((uVar4 & 1) != 0) {
    iVar30 = 2;
    iVar31 = 2;
  }
  if ((int)uVar15 < (int)uVar4) {
    lVar10 = uVar20 + uVar15;
    do {
      iVar23 = (int)uVar15;
      pcVar11 = (char *)lVar10;
      uVar15 = uVar15 + 2;
      lVar10 = lVar10 + 2;
      iVar31 = *(int *)(&lbl_82162860 +
                       ((int)*(char *)(iVar3 + 1 + iVar23) + (int)pcVar11[iVar3 - iVar9]) * 4) +
               iVar31;
      iVar30 = *(int *)(&lbl_82162860 + ((int)*(char *)(iVar9 + 1 + iVar23) + (int)*pcVar11) * 4) +
               iVar30;
    } while ((int)uVar15 < *(int *)(param_1 + 0x2d8));
  }
  iStack_ac = iVar29;
  if (iVar31 < iVar29) {
    iStack_ac = iVar31;
  }
  uStack_a8 = (unsigned int)(iVar31 < iVar29);
  if (iVar30 < iStack_ac) {
    uStack_a8 = 2;
    iStack_ac = iVar30;
  }
  uVar4 = *(unsigned int *)(param_1 + 0x2d4);
  if ((uVar4 == (uVar4 / 3) * 3) && (uVar8 = *(unsigned int *)(param_1 + 0x2d0), uVar8 != (uVar8 / 3) * 3))
  {
    uVar26 = uVar8 & 1;
    if (0 < (int)uVar4) {
      iVar23 = (uVar4 - 1) / 3 + 1;
      iVar29 = 0;
      do {
        if ((int)uVar26 < (int)uVar8) {
          iVar30 = iVar3 + 1;
          iVar31 = iVar9 + 1;
          uVar19 = uVar26;
          do {
            iVar24 = iVar29 + uVar19;
            uVar19 = uVar19 + 2;
            iVar25 = uVar8 + iVar24;
            iVar14 = uVar8 + iVar25;
            iVar28 = *(int *)(&lbl_8215F808 +
                             ((int)*(char *)(iVar30 + iVar14) + (int)*(char *)(iVar14 + iVar3) +
                             (int)*(char *)(iVar30 + iVar25) + (int)*(char *)(iVar25 + iVar3) +
                             (int)*(char *)(iVar30 + iVar24) + (int)*(char *)(iVar24 + iVar3)) * 4)
                     + iVar28;
            iVar27 = *(int *)(&lbl_8215F808 +
                             ((int)*(char *)(iVar31 + iVar14) + (int)*(char *)(iVar14 + iVar9) +
                             (int)*(char *)(iVar31 + iVar25) + (int)*(char *)(iVar25 + iVar9) +
                             (int)*(char *)(iVar31 + iVar24) + (int)*(char *)(iVar24 + iVar9)) * 4)
                     + iVar27;
          } while ((int)uVar19 < *(int *)(param_1 + 0x2d0));
        }
        iVar29 = uVar8 * 3 + iVar29;
        iVar23 = iVar23 + -1;
      } while (iVar23 != 0);
    }
  }
  else {
    uVar8 = *(unsigned int *)(param_1 + 0x2d0);
    uVar32 = uVar4 & 1;
    uVar26 = uVar8 % 3;
    if ((int)uVar32 < (int)uVar4) {
      iVar23 = uVar8 * uVar32;
      lVar10 = (unsigned __int64)((*(int *)(param_1 + 0x2d4) - uVar32) - 1 >> 1) + 1;
      do {
        if ((int)uVar26 < (int)uVar8) {
          uVar19 = uVar26;
          do {
            iVar29 = iVar23 + uVar19;
            uVar19 = uVar19 + 3;
            iVar30 = uVar8 + iVar29;
            iVar28 = *(int *)(&lbl_8215F808 +
                             ((int)*(char *)(iVar3 + 2 + iVar30) +
                              (int)*(char *)(iVar3 + 1 + iVar30) + (int)*(char *)(iVar30 + iVar3) +
                             (int)*(char *)(iVar3 + 2 + iVar29) + (int)*(char *)(iVar3 + 1 + iVar29)
                             + (int)*(char *)(iVar29 + iVar3)) * 4) + iVar28;
            iVar27 = *(int *)(&lbl_8215F808 +
                             ((int)*(char *)(iVar9 + 2 + iVar30) +
                              (int)*(char *)(iVar9 + 1 + iVar30) + (int)*(char *)(iVar30 + iVar9) +
                             (int)*(char *)(iVar9 + 2 + iVar29) + (int)*(char *)(iVar9 + 1 + iVar29)
                             + (int)*(char *)(iVar29 + iVar9)) * 4) + iVar27;
          } while ((int)uVar19 < *(int *)(param_1 + 0x2d0));
        }
        iVar23 = uVar8 * 2 + iVar23;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
    }
  }
  iVar23 = 0;
  if (uVar26 != 0) {
    do {
      iVar29 = 0;
      if (0 < (int)uVar4) {
        do {
          if (*(char *)(uVar8 * iVar29 + iVar23 + iVar3) != '\0') {
            iVar28 = uVar4 + iVar28;
            break;
          }
          iVar29 = iVar29 + 1;
        } while (iVar29 < *(int *)(param_1 + 0x2d4));
      }
      iVar29 = 0;
      if (0 < (int)uVar4) {
        do {
          if (*(char *)(uVar8 * iVar29 + iVar9 + iVar23) != '\0') {
            iVar27 = uVar4 + iVar27;
            break;
          }
          iVar29 = iVar29 + 1;
        } while (iVar29 < *(int *)(param_1 + 0x2d4));
      }
      iVar23 = iVar23 + 1;
      iVar28 = iVar28 + 1;
      iVar27 = iVar27 + 1;
    } while (iVar23 < (int)uVar26);
  }
  if (uVar32 != 0) {
    uVar32 = uVar26;
    if ((int)uVar26 < (int)uVar8) {
      do {
        if (*(char *)(uVar32 + iVar3) != '\0') {
          iVar28 = (uVar8 - uVar26) + iVar28;
          break;
        }
        uVar32 = uVar32 + 1;
      } while ((int)uVar32 < *(int *)(param_1 + 0x2d0));
    }
    uVar32 = uVar26;
    if ((int)uVar26 < (int)uVar8) {
      do {
        if (*(char *)(iVar9 + uVar32) != '\0') {
          iVar27 = (uVar8 - uVar26) + iVar27;
          break;
        }
        uVar32 = uVar32 + 1;
      } while ((int)uVar32 < *(int *)(param_1 + 0x2d0));
    }
  }
  if (iVar28 < iStack_ac) {
    uStack_a8 = 3;
    iStack_ac = iVar28;
  }
  if (iVar27 < iStack_ac) {
    uStack_a8 = 4;
    iStack_ac = iVar27;
  }
  iVar21 = uVar4 + iVar21;
  if (0 < (int)uVar4) {
    uVar20 = (unsigned __int64)*(unsigned int *)(param_1 + 0x2d4);
    iVar9 = 0;
    do {
      iVar27 = 0;
      iVar23 = iVar9;
      if (0 < (int)uVar8) {
        do {
          if (*(char *)(iVar23 + iVar3) != '\0') {
            iVar21 = uVar8 + iVar21;
            break;
          }
          iVar27 = iVar27 + 1;
          iVar23 = iVar9 + iVar27;
        } while (iVar27 < *(int *)(param_1 + 0x2d0));
      }
      iVar9 = iVar9 + uVar8;
      uVar20 = uVar20 - 1;
    } while (uVar20 != 0);
  }
  if (iVar21 < iStack_ac) {
    uStack_a8 = 5;
    iStack_ac = iVar21;
  }
  iVar23 = 0;
  iVar9 = uVar8 + uVar13;
  if (0 < (int)uVar8) {
    do {
      iVar21 = 0;
      if (0 < (int)uVar4) {
        do {
          if (*(char *)(uVar8 * iVar21 + iVar23 + iVar3) != '\0') {
            iVar9 = uVar4 + iVar9;
            break;
          }
          iVar21 = iVar21 + 1;
        } while (iVar21 < *(int *)(param_1 + 0x2d4));
      }
      iVar23 = iVar23 + 1;
    } while (iVar23 < *(int *)(param_1 + 0x2d0));
  }
  if (iVar9 < iStack_ac) {
    uStack_a8 = 6;
  }
  if (((*(int *)(param_1 + 0x8d4) == 0) && (*(int *)(param_1 + 0x8e0) == 0)) &&
     (*(int *)(param_1 + 0xb08) == 0)) {
    uVar32 = 0;
    if (uStack_a8 != 0) {
      uVar32 = uStack_a8 << 1 | (unsigned int)uVar22;
    }
  }
  else {
    uVar32 = 0;
  }
  if (uVar7 < 6) {
    if (uVar7 == 1) {
      *(unsigned int *)(param_1 + 0x8c8) = uVar32;
    }
    else if (uVar7 == 2) {
      *(unsigned int *)(param_1 + 0x6efc) = uVar32;
    }
    else if (uVar7 == 3) {
      *(unsigned int *)(param_1 + 0x8d0) = uVar32;
    }
    else if (uVar7 == 4) {
      *(unsigned int *)(param_1 + 0x6ef8) = uVar32;
    }
    else if (uVar7 == 0) {
      *(unsigned int *)(param_1 + 0x8c4) = uVar32;
    }
    else {
      *(unsigned int *)(param_1 + 0x6f04) = uVar32;
    }
  }
  return;
}

