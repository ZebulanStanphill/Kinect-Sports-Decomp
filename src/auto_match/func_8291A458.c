extern int fn_829191A0();
extern unsigned int lbl_8202E370;
extern unsigned int lbl_8202E380;
extern unsigned int lbl_821AAD20;


unsigned int fn_8291A458(int param_1,unsigned __int64 param_2,unsigned int *param_3,unsigned __int64 param_4,__int64 param_5)

{
  unsigned short uVar1;
  unsigned short uVar2;
  unsigned short *puVar3;
  int iVar4;
  unsigned int *puVar5;
  unsigned __int64 uVar6;
  float fVar7;
  unsigned int uVar8;
  unsigned char *puVar9;
  unsigned int *puVar10;
  unsigned int *puVar11;
  unsigned __int64 uVar12;
  __int64 lVar13;
  __int64 lVar14;
  unsigned int uVar17;
  unsigned int uVar18;
  unsigned int *puVar19;
  unsigned __int64 uVar15;
  unsigned __int64 uVar16;
  unsigned __int64 uVar20;
  unsigned int *puVar22;
  __int64 lVar23;
  int iVar24;
  unsigned __int64 uVar25;
  unsigned int uVar21;
  
  puVar3 = *(unsigned short **)(param_1 + 0x18);
  puVar22 = *(unsigned int **)(param_1 + 0x20);
  uVar1 = *puVar3;
  puVar10 = puVar22;
  if (uVar1 == 0) {
    param_4 = (param_4 & 0xfffffff) << 4;
    if (puVar3[4] < param_4) {
      param_4 = (unsigned __int64)puVar3[4];
    }
    uVar20 = 0;
    if (param_4 != 0) {
      puVar11 = puVar22 + -1;
      uVar25 = param_4;
      do {
        uVar12 = uVar20 & 0xffffffff;
        uVar17 = (unsigned int)uVar20;
        uVar16 = uVar20 & 0xffffffff;
        uVar20 = uVar20 + 1;
        puVar11 = puVar11 + 1;
        *puVar11 = param_3[(((unsigned int)(uVar12 >> 2) & 0x3ffffffc) + (uVar17 & 3)) * 4 +
                           ((unsigned int)(uVar16 >> 2) & 3)];
        uVar25 = uVar25 - 1;
      } while (uVar25 != 0);
    }
  }
  else if (uVar1 == 1) {
    param_4 = (param_4 & 0x3fffffff) << 2;
    if (puVar3[4] < param_4) {
      param_4 = (unsigned __int64)puVar3[4];
    }
    uVar20 = 0;
    if (param_4 != 0) {
      uVar17 = (unsigned int)puVar3[3];
      puVar11 = puVar22 + -1;
      do {
        uVar21 = 0;
        if (uVar17 != 0) {
          do {
            if (uVar21 < 5) {
              uVar17 = param_3[(((unsigned int)uVar20 & 0xfffffffc) + uVar21) * 4 + ((unsigned int)uVar20 & 3)];
            }
            else {
              uVar17 = 0;
            }
            uVar21 = uVar21 + 1;
            puVar11 = puVar11 + 1;
            *puVar11 = uVar17;
            uVar17 = (unsigned int)puVar3[3];
          } while (uVar21 < uVar17);
        }
        uVar20 = uVar20 + 1;
      } while ((uVar20 & 0xffffffff) < param_4);
    }
  }
  else if (uVar1 < 3) {
    if ((unsigned __int64)puVar3[4] < (param_4 & 0xffffffff)) {
      param_4 = (unsigned __int64)puVar3[4];
    }
    uVar17 = (unsigned int)puVar3[2];
    if ((uVar17 == 4) && (puVar3[3] == 4)) {
      if ((param_4 & 0xffffffff) != 0) {
        puVar11 = puVar22 + -1;
        puVar19 = param_3 + 8;
        uVar20 = param_4;
        do {
          puVar11[1] = puVar19[-8];
          puVar11[2] = puVar19[-4];
          puVar11[3] = *puVar19;
          puVar11[4] = puVar19[4];
          puVar11[5] = puVar19[-7];
          puVar11[6] = puVar19[-3];
          puVar11[7] = puVar19[1];
          puVar11[8] = puVar19[5];
          *(unsigned int *)(((int)puVar22 - (int)param_3) + (int)puVar19) = puVar19[-6];
          puVar11[10] = puVar19[-2];
          puVar11[0xb] = puVar19[2];
          puVar11[0xc] = puVar19[6];
          puVar11[0xd] = puVar19[-5];
          puVar11[0xe] = puVar19[-1];
          puVar11[0xf] = puVar19[3];
          puVar5 = puVar19 + 7;
          puVar19 = puVar19 + 0x10;
          puVar11 = puVar11 + 0x10;
          *puVar11 = *puVar5;
          uVar20 = uVar20 - 1;
        } while (uVar20 != 0);
      }
    }
    else if ((param_4 & 0xffffffff) != 0) {
      iVar24 = 0;
      puVar11 = puVar22 + -1;
      uVar20 = param_4;
      do {
        uVar21 = 0;
        if (uVar17 != 0) {
          uVar18 = (unsigned int)puVar3[3];
          do {
            uVar17 = 0;
            if (uVar18 != 0) {
              do {
                if ((uVar21 < 5) && (uVar17 < 5)) {
                  uVar18 = param_3[(iVar24 + uVar17) * 4 + uVar21];
                }
                else {
                  uVar18 = 0;
                }
                uVar17 = uVar17 + 1;
                puVar11 = puVar11 + 1;
                *puVar11 = uVar18;
                uVar18 = (unsigned int)puVar3[3];
              } while (uVar17 < uVar18);
            }
            uVar17 = (unsigned int)puVar3[2];
            uVar21 = uVar21 + 1;
          } while (uVar21 < uVar17);
        }
        iVar24 = iVar24 + 4;
        uVar20 = uVar20 - 1;
      } while (uVar20 != 0);
    }
  }
  else {
    if (uVar1 != 3) {
      if (uVar1 != 5) {
        return 0x80004001;
      }
      uVar17 = *(unsigned int *)(param_1 + 0x34);
      uVar20 = ((param_4 & 0xfffffff) << 4) / (unsigned __int64)uVar17;
      uVar21 = (unsigned int)uVar20;
      trapWord(6,(unsigned __int64)uVar17,0);
      if (puVar3[4] < uVar20) {
        uVar21 = (unsigned int)puVar3[4];
      }
      lVar14 = (__int64)(int)uVar17 * (__int64)(int)uVar21;
      uVar20 = 0;
      if (lVar14 != 0) {
        puVar10 = puVar22 + -1;
        do {
          uVar17 = (unsigned int)uVar20;
          uVar25 = uVar20 & 0xffffffff;
          uVar12 = uVar20 & 0xffffffff;
          uVar20 = uVar20 + 1;
          puVar10 = puVar10 + 1;
          *puVar10 = param_3[(((unsigned int)(uVar25 >> 2) & 0x3ffffffc) + (uVar17 & 3)) * 4 +
                             ((unsigned int)(uVar12 >> 2) & 3)];
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
      }
      uVar17 = 0;
      if (uVar21 != 0) {
        do {
          uVar18 = 0;
          if (puVar3[5] != 0) {
            iVar24 = 0;
            do {
              iVar4 = *(int *)(iVar24 + *(int *)(param_1 + 0x38));
              uVar8 = fn_829191A0(iVar4,param_2,puVar22,*(unsigned int *)(iVar4 + 0x30),param_5);
              if ((int)uVar8 < 0) {
                return uVar8;
              }
              uVar18 = uVar18 + 1;
              iVar24 = iVar24 + 4;
              puVar22 = puVar22 + *(int *)(iVar4 + 0x30);
            } while (uVar18 < puVar3[5]);
          }
          uVar17 = uVar17 + 1;
        } while (uVar17 < uVar21);
      }
      return 0;
    }
    if ((unsigned __int64)puVar3[4] < (param_4 & 0xffffffff)) {
      param_4 = (unsigned __int64)puVar3[4];
    }
    uVar17 = (unsigned int)puVar3[2];
    if (((uVar17 != 4) || (puVar10 = param_3, puVar3[3] != 4)) &&
       (puVar10 = puVar22, (param_4 & 0xffffffff) != 0)) {
      iVar24 = 0;
      puVar11 = puVar22 + -1;
      uVar20 = param_4;
      do {
        uVar21 = 0;
        if (puVar3[3] != 0) {
          do {
            uVar18 = 0;
            if (uVar17 != 0) {
              do {
                if ((uVar18 < 5) && (uVar21 < 5)) {
                  uVar17 = param_3[(iVar24 + uVar21) * 4 + uVar18];
                }
                else {
                  uVar17 = 0;
                }
                uVar18 = uVar18 + 1;
                puVar11 = puVar11 + 1;
                *puVar11 = uVar17;
                uVar17 = (unsigned int)puVar3[2];
              } while (uVar18 < uVar17);
            }
            uVar21 = uVar21 + 1;
          } while (uVar21 < puVar3[3]);
        }
        iVar24 = iVar24 + 4;
        uVar20 = uVar20 - 1;
      } while (uVar20 != 0);
    }
  }
  fVar7 = lbl_821AAD20;
  uVar1 = puVar3[1];
  iVar24 = (int)param_4;
  puVar11 = puVar10;
  if (uVar1 != 3) {
    uVar20 = (__int64)*(int *)(param_1 + 0x34) * (__int64)iVar24;
    puVar11 = puVar22;
    if (uVar1 == 1) {
      if ((uVar20 & 0xffffffff) != 0) {
        puVar19 = puVar22;
        do {
          *puVar19 = (unsigned int)(*(float *)((int)puVar19 + ((int)puVar10 - (int)puVar22)) != fVar7);
          puVar19 = puVar19 + 1;
          uVar20 = uVar20 - 1;
        } while (uVar20 != 0);
      }
    }
    else if ((uVar1 == 2) && ((uVar20 & 0xffffffff) != 0)) {
      puVar19 = puVar22;
      do {
        *puVar19 = (int)*(float *)(((int)puVar10 - (int)puVar22) + (int)puVar19);
        puVar19 = puVar19 + 1;
        uVar20 = uVar20 - 1;
      } while (uVar20 != 0);
    }
  }
  puVar10 = puVar11;
  if (*(short *)(param_1 + 8) != 0) {
    if (*puVar3 == 3) {
      uVar1 = puVar3[2];
      uVar2 = puVar3[3];
    }
    else {
      uVar1 = puVar3[3];
      uVar2 = puVar3[2];
    }
    uVar20 = (unsigned __int64)uVar1;
    if ((uVar1 & 3) != 0) {
      if (*(short *)(param_1 + 8) == 1) {
        puVar9 = &lbl_8202E380;
      }
      else {
        puVar9 = &lbl_8202E370;
      }
      uVar12 = (__int64)(int)(unsigned int)uVar2 * (__int64)iVar24;
      uVar25 = uVar20 + 3 & 0xfffffffc;
      puVar10 = puVar22;
      if (uVar12 != 0) {
        lVar13 = (__int64)(int)uVar12 * (__int64)(int)uVar25;
        lVar14 = (__int64)(int)uVar12 * (__int64)(int)(unsigned int)uVar1;
        do {
          uVar12 = uVar12 - 1;
          lVar14 = lVar14 - uVar20;
          lVar13 = lVar13 - uVar25;
          uVar16 = uVar20;
          uVar6 = uVar20;
          if ((unsigned int)uVar1 < uVar25) {
            lVar23 = uVar25 - uVar20;
            uVar15 = uVar25;
            do {
              uVar15 = uVar15 - 1;
              *(unsigned int *)((int)((uVar15 + lVar13 & 0xffffffff) << 2) + (int)puVar22) =
                   *(unsigned int *)(puVar9 + ((unsigned int)((uVar15 & 0xffffffff) << 2) & 0xc));
              lVar23 = lVar23 + -1;
            } while (lVar23 != 0);
          }
          for (; uVar6 != 0; uVar6 = uVar6 - 1) {
            uVar16 = uVar16 - 1;
            *(unsigned int *)((int)((uVar16 + lVar13 & 0xffffffff) << 2) + (int)puVar22) =
                 *(unsigned int *)((int)((uVar16 + lVar14 & 0xffffffff) << 2) + (int)puVar11);
          }
        } while ((uVar12 & 0xffffffff) != 0);
      }
    }
  }
  uVar20 = (__int64)*(int *)(param_1 + 0x2c) * (__int64)iVar24;
  if ((unsigned __int64)*(unsigned short *)(param_1 + 0xc) < (uVar20 & 0xffffffff)) {
    uVar20 = (unsigned __int64)*(unsigned short *)(param_1 + 0xc);
  }
  if (*(int (***)())(param_1 + 0x1c) == (int (**)())0x0) {
    uVar17 = 0x80004005;
  }
  else {
    uVar17 = (**(int (***)())(param_1 + 0x1c))
                       (param_2,(unsigned __int64)*(unsigned short *)(param_1 + 10) + param_5,puVar10,puVar22,
                        uVar20);
    uVar17 = (int)uVar17 >> 0x1f & uVar17;
  }
  return uVar17;
}

