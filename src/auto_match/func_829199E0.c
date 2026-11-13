extern int fn_829191A0();
extern unsigned int lbl_8202E370;
extern unsigned int lbl_8202E380;
extern unsigned int lbl_821AAD20;


unsigned int fn_829199E0(int param_1,unsigned __int64 param_2,unsigned int *param_3,unsigned __int64 param_4,__int64 param_5)

{
  unsigned short uVar1;
  unsigned short uVar2;
  unsigned short *puVar3;
  unsigned int *puVar4;
  int iVar5;
  unsigned int *puVar6;
  unsigned __int64 uVar7;
  float fVar8;
  unsigned int uVar9;
  int iVar10;
  unsigned char *puVar11;
  __int64 lVar12;
  unsigned __int64 uVar13;
  __int64 lVar14;
  unsigned int uVar17;
  unsigned int uVar18;
  unsigned int *puVar19;
  unsigned __int64 uVar15;
  unsigned __int64 uVar16;
  unsigned int *puVar20;
  unsigned int *puVar21;
  unsigned __int64 uVar22;
  unsigned __int64 uVar23;
  __int64 lVar24;
  
  puVar3 = *(unsigned short **)(param_1 + 0x18);
  puVar4 = *(unsigned int **)(param_1 + 0x20);
  uVar1 = *puVar3;
  puVar20 = param_3;
  if (uVar1 == 0) {
    param_4 = (param_4 & 0xfffffff) << 4;
    if (puVar3[4] < param_4) {
      param_4 = (unsigned __int64)puVar3[4];
    }
  }
  else {
    puVar20 = puVar4;
    if (uVar1 == 1) {
      param_4 = (param_4 & 0x3fffffff) << 2;
      if (puVar3[4] < param_4) {
        param_4 = (unsigned __int64)puVar3[4];
      }
      uVar23 = (unsigned __int64)puVar3[3];
      puVar20 = param_3;
      if ((uVar23 != 4) && (uVar22 = 0, puVar20 = puVar4, param_4 != 0)) {
        puVar21 = puVar4 + -1;
        do {
          uVar13 = 0;
          if (uVar23 != 0) {
            do {
              if ((uVar13 & 0xffffffff) < 5) {
                uVar17 = *(unsigned int *)((int)(((((uVar22 & 0xfffffffc) + (uVar22 & 3)) * 4 & 0xfffffffc)
                                          + uVar13 & 0xffffffff) << 2) + (int)param_3);
              }
              else {
                uVar17 = 0;
              }
              puVar21 = puVar21 + 1;
              *puVar21 = uVar17;
              uVar13 = uVar13 + 1;
              uVar23 = (unsigned __int64)puVar3[3];
            } while ((uVar13 & 0xffffffff) < uVar23);
          }
          uVar22 = uVar22 + 1;
        } while ((uVar22 & 0xffffffff) < param_4);
      }
    }
    else if (uVar1 < 3) {
      if ((unsigned __int64)puVar3[4] < (param_4 & 0xffffffff)) {
        param_4 = (unsigned __int64)puVar3[4];
      }
      uVar17 = (unsigned int)puVar3[2];
      if (((uVar17 != 4) || (puVar20 = param_3, puVar3[3] != 4)) &&
         (puVar20 = puVar4, (param_4 & 0xffffffff) != 0)) {
        iVar10 = 0;
        puVar21 = puVar4 + -1;
        uVar23 = param_4;
        do {
          uVar9 = 0;
          if (uVar17 != 0) {
            uVar18 = (unsigned int)puVar3[3];
            do {
              uVar17 = 0;
              if (uVar18 != 0) {
                do {
                  if ((uVar9 < 5) && (uVar17 < 5)) {
                    uVar18 = param_3[(iVar10 + uVar9) * 4 + uVar17];
                  }
                  else {
                    uVar18 = 0;
                  }
                  uVar17 = uVar17 + 1;
                  puVar21 = puVar21 + 1;
                  *puVar21 = uVar18;
                  uVar18 = (unsigned int)puVar3[3];
                } while (uVar17 < uVar18);
              }
              uVar17 = (unsigned int)puVar3[2];
              uVar9 = uVar9 + 1;
            } while (uVar9 < uVar17);
          }
          iVar10 = iVar10 + 4;
          uVar23 = uVar23 - 1;
        } while (uVar23 != 0);
      }
    }
    else {
      if (uVar1 != 3) {
        if (uVar1 != 5) {
          return 0x80004001;
        }
        uVar23 = ((param_4 & 0xfffffff) << 4) / (unsigned __int64)*(unsigned int *)(param_1 + 0x34);
        trapWord(6,(unsigned __int64)*(unsigned int *)(param_1 + 0x34),0);
        if (puVar3[4] < uVar23) {
          uVar23 = (unsigned __int64)puVar3[4];
        }
        uVar22 = 0;
        if (uVar23 != 0) {
          do {
            uVar17 = 0;
            if (puVar3[5] != 0) {
              iVar10 = 0;
              do {
                iVar5 = *(int *)(*(int *)(param_1 + 0x38) + iVar10);
                uVar9 = fn_829191A0(iVar5,param_2,param_3,*(unsigned int *)(iVar5 + 0x30),param_5);
                if ((int)uVar9 < 0) {
                  return uVar9;
                }
                uVar17 = uVar17 + 1;
                iVar10 = iVar10 + 4;
                param_3 = param_3 + *(int *)(iVar5 + 0x30);
              } while (uVar17 < puVar3[5]);
            }
            uVar22 = uVar22 + 1;
          } while ((uVar22 & 0xffffffff) < uVar23);
        }
        return 0;
      }
      if ((unsigned __int64)puVar3[4] < (param_4 & 0xffffffff)) {
        param_4 = (unsigned __int64)puVar3[4];
      }
      uVar17 = (unsigned int)puVar3[2];
      if ((uVar17 == 4) && (puVar3[3] == 4)) {
        if ((param_4 & 0xffffffff) != 0) {
          puVar21 = puVar4 + -1;
          puVar19 = param_3 + 8;
          uVar23 = param_4;
          do {
            puVar21[1] = puVar19[-8];
            puVar21[2] = puVar19[-4];
            puVar21[3] = *puVar19;
            puVar21[4] = puVar19[4];
            puVar21[5] = puVar19[-7];
            puVar21[6] = puVar19[-3];
            puVar21[7] = puVar19[1];
            puVar21[8] = puVar19[5];
            *(unsigned int *)(((int)puVar4 - (int)param_3) + (int)puVar19) = puVar19[-6];
            puVar21[10] = puVar19[-2];
            puVar21[0xb] = puVar19[2];
            puVar21[0xc] = puVar19[6];
            puVar21[0xd] = puVar19[-5];
            puVar21[0xe] = puVar19[-1];
            puVar21[0xf] = puVar19[3];
            puVar6 = puVar19 + 7;
            puVar19 = puVar19 + 0x10;
            puVar21 = puVar21 + 0x10;
            *puVar21 = *puVar6;
            uVar23 = uVar23 - 1;
          } while (uVar23 != 0);
        }
      }
      else if ((param_4 & 0xffffffff) != 0) {
        iVar10 = 0;
        puVar21 = puVar4 + -1;
        uVar23 = param_4;
        do {
          uVar9 = 0;
          if (puVar3[3] != 0) {
            do {
              uVar18 = 0;
              if (uVar17 != 0) {
                do {
                  if ((uVar18 < 5) && (uVar9 < 5)) {
                    uVar17 = param_3[(iVar10 + uVar18) * 4 + uVar9];
                  }
                  else {
                    uVar17 = 0;
                  }
                  uVar18 = uVar18 + 1;
                  puVar21 = puVar21 + 1;
                  *puVar21 = uVar17;
                  uVar17 = (unsigned int)puVar3[2];
                } while (uVar18 < uVar17);
              }
              uVar9 = uVar9 + 1;
            } while (uVar9 < puVar3[3]);
          }
          iVar10 = iVar10 + 4;
          uVar23 = uVar23 - 1;
        } while (uVar23 != 0);
      }
    }
  }
  fVar8 = lbl_821AAD20;
  uVar1 = puVar3[1];
  iVar10 = (int)param_4;
  puVar21 = puVar20;
  if (uVar1 != 3) {
    uVar23 = (__int64)*(int *)(param_1 + 0x34) * (__int64)iVar10;
    puVar21 = puVar4;
    if (uVar1 == 1) {
      if ((uVar23 & 0xffffffff) != 0) {
        puVar19 = puVar4;
        do {
          *puVar19 = (unsigned int)(*(float *)(((int)puVar20 - (int)puVar4) + (int)puVar19) != fVar8);
          puVar19 = puVar19 + 1;
          uVar23 = uVar23 - 1;
        } while (uVar23 != 0);
      }
    }
    else if ((uVar1 == 2) && ((uVar23 & 0xffffffff) != 0)) {
      puVar19 = puVar4;
      do {
        *puVar19 = (int)*(float *)(((int)puVar20 - (int)puVar4) + (int)puVar19);
        puVar19 = puVar19 + 1;
        uVar23 = uVar23 - 1;
      } while (uVar23 != 0);
    }
  }
  puVar20 = puVar21;
  if (*(short *)(param_1 + 8) != 0) {
    if (*puVar3 == 3) {
      uVar1 = puVar3[2];
      uVar2 = puVar3[3];
    }
    else {
      uVar1 = puVar3[3];
      uVar2 = puVar3[2];
    }
    uVar23 = (unsigned __int64)uVar1;
    if ((uVar1 & 3) != 0) {
      if (*(short *)(param_1 + 8) == 1) {
        puVar11 = &lbl_8202E380;
      }
      else {
        puVar11 = &lbl_8202E370;
      }
      uVar13 = (__int64)(int)(unsigned int)uVar2 * (__int64)iVar10;
      uVar22 = uVar23 + 3 & 0xfffffffc;
      puVar20 = puVar4;
      if (uVar13 != 0) {
        lVar14 = (__int64)(int)uVar13 * (__int64)(int)uVar22;
        lVar12 = (__int64)(int)uVar13 * (__int64)(int)(unsigned int)uVar1;
        do {
          uVar13 = uVar13 - 1;
          lVar12 = lVar12 - uVar23;
          lVar14 = lVar14 - uVar22;
          uVar16 = uVar23;
          uVar7 = uVar23;
          if ((unsigned int)uVar1 < uVar22) {
            lVar24 = uVar22 - uVar23;
            uVar15 = uVar22;
            do {
              uVar15 = uVar15 - 1;
              *(unsigned int *)((int)((uVar15 + lVar14 & 0xffffffff) << 2) + (int)puVar4) =
                   *(unsigned int *)(puVar11 + ((unsigned int)((uVar15 & 0xffffffff) << 2) & 0xc));
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
          }
          for (; uVar7 != 0; uVar7 = uVar7 - 1) {
            uVar16 = uVar16 - 1;
            *(unsigned int *)((int)((uVar16 + lVar14 & 0xffffffff) << 2) + (int)puVar4) =
                 *(unsigned int *)((int)((uVar16 + lVar12 & 0xffffffff) << 2) + (int)puVar21);
          }
        } while ((uVar13 & 0xffffffff) != 0);
      }
    }
  }
  uVar23 = (__int64)*(int *)(param_1 + 0x2c) * (__int64)iVar10;
  if ((unsigned __int64)*(unsigned short *)(param_1 + 0xc) < (uVar23 & 0xffffffff)) {
    uVar23 = (unsigned __int64)*(unsigned short *)(param_1 + 0xc);
  }
  if (*(int (***)())(param_1 + 0x1c) == (int (**)())0x0) {
    uVar17 = 0x80004005;
  }
  else {
    uVar17 = (**(int (***)())(param_1 + 0x1c))
                       (param_2,(unsigned __int64)*(unsigned short *)(param_1 + 10) + param_5,puVar20,puVar4,uVar23
                       );
    uVar17 = (int)uVar17 >> 0x1f & uVar17;
  }
  return uVar17;
}

