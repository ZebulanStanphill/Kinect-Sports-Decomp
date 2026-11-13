extern int fn_829191A0();
extern unsigned int lbl_8202E370;
extern unsigned int lbl_8202E380;
extern unsigned int lbl_821AAD20;


unsigned int fn_82919538(int param_1,unsigned __int64 param_2,unsigned int *param_3,unsigned __int64 param_4,__int64 param_5)

{
  unsigned short uVar1;
  unsigned short uVar2;
  unsigned short *puVar3;
  unsigned int *puVar4;
  int iVar5;
  unsigned __int64 uVar6;
  float fVar7;
  unsigned int uVar8;
  int iVar9;
  unsigned int uVar10;
  unsigned char *puVar11;
  __int64 lVar12;
  __int64 lVar13;
  unsigned __int64 uVar14;
  unsigned int *puVar17;
  unsigned __int64 uVar15;
  unsigned __int64 uVar16;
  unsigned int *puVar18;
  unsigned int *puVar19;
  unsigned __int64 uVar20;
  unsigned __int64 uVar21;
  __int64 lVar22;
  
  puVar3 = *(unsigned short **)(param_1 + 0x18);
  puVar4 = *(unsigned int **)(param_1 + 0x20);
  uVar1 = *puVar3;
  puVar18 = param_3;
  if (uVar1 == 0) {
    param_4 = (param_4 & 0x3fffffff) << 2;
    if (puVar3[4] < param_4) {
      param_4 = (unsigned __int64)puVar3[4];
    }
  }
  else {
    puVar18 = puVar4;
    if (uVar1 == 1) {
      if ((unsigned __int64)puVar3[4] < (param_4 & 0xffffffff)) {
        param_4 = (unsigned __int64)puVar3[4];
      }
      uVar10 = (unsigned int)puVar3[3];
      puVar18 = param_3;
      if ((uVar10 != 4) && (puVar18 = puVar4, (param_4 & 0xffffffff) != 0)) {
        iVar9 = 0;
        puVar19 = puVar4 + -1;
        uVar21 = param_4;
        do {
          uVar8 = 0;
          if (uVar10 != 0) {
            do {
              if (uVar8 < 5) {
                uVar10 = param_3[iVar9 + uVar8];
              }
              else {
                uVar10 = 0;
              }
              uVar8 = uVar8 + 1;
              puVar19 = puVar19 + 1;
              *puVar19 = uVar10;
              uVar10 = (unsigned int)puVar3[3];
            } while (uVar8 < uVar10);
          }
          iVar9 = iVar9 + 4;
          uVar21 = uVar21 - 1;
        } while (uVar21 != 0);
      }
    }
    else if (uVar1 < 3) {
      uVar21 = (unsigned __int64)puVar3[2];
      param_4 = (param_4 & 0xffffffff) / uVar21;
      trapWord(6,uVar21,0);
      if (puVar3[4] < param_4) {
        param_4 = (unsigned __int64)puVar3[4];
      }
      uVar20 = (unsigned __int64)puVar3[3];
      puVar18 = param_3;
      if ((uVar20 != 4) && (uVar10 = 0, puVar18 = puVar4, param_4 != 0)) {
        puVar19 = puVar4 + -1;
        do {
          uVar14 = 0;
          if (uVar21 != 0) {
            do {
              uVar21 = 0;
              if (uVar20 != 0) {
                do {
                  if ((uVar21 & 0xffffffff) < 5) {
                    uVar8 = *(unsigned int *)((int)((((__int64)(int)(unsigned int)puVar3[2] * (__int64)(int)uVar10
                                              + uVar14 & 0x3fffffff) * 4 + uVar21 & 0xffffffff) << 2
                                           ) + (int)param_3);
                  }
                  else {
                    uVar8 = 0;
                  }
                  puVar19 = puVar19 + 1;
                  *puVar19 = uVar8;
                  uVar21 = uVar21 + 1;
                  uVar20 = (unsigned __int64)puVar3[3];
                } while ((uVar21 & 0xffffffff) < uVar20);
              }
              uVar21 = (unsigned __int64)puVar3[2];
              uVar14 = uVar14 + 1;
            } while ((uVar14 & 0xffffffff) < uVar21);
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < param_4);
      }
    }
    else {
      if (uVar1 != 3) {
        if (uVar1 != 5) {
          return 0x80004001;
        }
        uVar21 = ((param_4 & 0x3fffffff) << 2) / (unsigned __int64)*(unsigned int *)(param_1 + 0x34);
        trapWord(6,(unsigned __int64)*(unsigned int *)(param_1 + 0x34),0);
        if (puVar3[4] < uVar21) {
          uVar21 = (unsigned __int64)puVar3[4];
        }
        uVar20 = 0;
        if (uVar21 != 0) {
          do {
            uVar10 = 0;
            if (puVar3[5] != 0) {
              iVar9 = 0;
              do {
                iVar5 = *(int *)(iVar9 + *(int *)(param_1 + 0x38));
                uVar8 = fn_829191A0(iVar5,param_2,param_3,*(unsigned int *)(iVar5 + 0x30),param_5);
                if ((int)uVar8 < 0) {
                  return uVar8;
                }
                uVar10 = uVar10 + 1;
                iVar9 = iVar9 + 4;
                param_3 = param_3 + *(int *)(iVar5 + 0x30);
              } while (uVar10 < puVar3[5]);
            }
            uVar20 = uVar20 + 1;
          } while ((uVar20 & 0xffffffff) < uVar21);
        }
        return 0;
      }
      uVar21 = (unsigned __int64)puVar3[3];
      param_4 = (param_4 & 0xffffffff) / uVar21;
      trapWord(6,uVar21,0);
      if (puVar3[4] < param_4) {
        param_4 = (unsigned __int64)puVar3[4];
      }
      uVar10 = 0;
      if (param_4 != 0) {
        puVar19 = puVar4 + -1;
        do {
          uVar20 = 0;
          if (uVar21 != 0) {
            uVar14 = (unsigned __int64)puVar3[2];
            do {
              uVar21 = 0;
              if (uVar14 != 0) {
                do {
                  if ((uVar20 & 0xffffffff) < 5) {
                    uVar8 = *(unsigned int *)((int)((((__int64)(int)uVar14 * (__int64)(int)uVar10 + uVar21
                                             & 0x3fffffff) * 4 + uVar20 & 0xffffffff) << 2) +
                                     (int)param_3);
                  }
                  else {
                    uVar8 = 0;
                  }
                  uVar21 = uVar21 + 1;
                  puVar19 = puVar19 + 1;
                  *puVar19 = uVar8;
                  uVar14 = (unsigned __int64)puVar3[2];
                } while ((uVar21 & 0xffffffff) < uVar14);
              }
              uVar21 = (unsigned __int64)puVar3[3];
              uVar20 = uVar20 + 1;
            } while ((uVar20 & 0xffffffff) < uVar21);
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < param_4);
      }
    }
  }
  fVar7 = lbl_821AAD20;
  uVar1 = puVar3[1];
  iVar9 = (int)param_4;
  puVar19 = puVar18;
  if (uVar1 != 3) {
    uVar21 = (__int64)*(int *)(param_1 + 0x34) * (__int64)iVar9;
    puVar19 = puVar4;
    if (uVar1 == 1) {
      if ((uVar21 & 0xffffffff) != 0) {
        puVar17 = puVar4;
        do {
          *puVar17 = (unsigned int)(*(float *)((int)puVar17 + ((int)puVar18 - (int)puVar4)) != fVar7);
          puVar17 = puVar17 + 1;
          uVar21 = uVar21 - 1;
        } while (uVar21 != 0);
      }
    }
    else if ((uVar1 == 2) && ((uVar21 & 0xffffffff) != 0)) {
      puVar17 = puVar4;
      do {
        *puVar17 = (int)*(float *)(((int)puVar18 - (int)puVar4) + (int)puVar17);
        puVar17 = puVar17 + 1;
        uVar21 = uVar21 - 1;
      } while (uVar21 != 0);
    }
  }
  puVar18 = puVar19;
  if (*(short *)(param_1 + 8) != 0) {
    if (*puVar3 == 3) {
      uVar1 = puVar3[2];
      uVar2 = puVar3[3];
    }
    else {
      uVar1 = puVar3[3];
      uVar2 = puVar3[2];
    }
    uVar21 = (unsigned __int64)uVar1;
    if ((uVar1 & 3) != 0) {
      if (*(short *)(param_1 + 8) == 1) {
        puVar11 = &lbl_8202E380;
      }
      else {
        puVar11 = &lbl_8202E370;
      }
      uVar14 = (__int64)(int)(unsigned int)uVar2 * (__int64)iVar9;
      uVar20 = uVar21 + 3 & 0xfffffffc;
      puVar18 = puVar4;
      if (uVar14 != 0) {
        lVar13 = (__int64)(int)uVar14 * (__int64)(int)uVar20;
        lVar12 = (__int64)(int)uVar14 * (__int64)(int)(unsigned int)uVar1;
        do {
          uVar14 = uVar14 - 1;
          lVar12 = lVar12 - uVar21;
          lVar13 = lVar13 - uVar20;
          uVar16 = uVar21;
          uVar6 = uVar21;
          if ((unsigned int)uVar1 < uVar20) {
            lVar22 = uVar20 - uVar21;
            uVar15 = uVar20;
            do {
              uVar15 = uVar15 - 1;
              *(unsigned int *)((int)((lVar13 + uVar15 & 0xffffffff) << 2) + (int)puVar4) =
                   *(unsigned int *)(puVar11 + ((unsigned int)((uVar15 & 0xffffffff) << 2) & 0xc));
              lVar22 = lVar22 + -1;
            } while (lVar22 != 0);
          }
          for (; uVar6 != 0; uVar6 = uVar6 - 1) {
            uVar16 = uVar16 - 1;
            *(unsigned int *)((int)((lVar13 + uVar16 & 0xffffffff) << 2) + (int)puVar4) =
                 *(unsigned int *)((int)((lVar12 + uVar16 & 0xffffffff) << 2) + (int)puVar19);
          }
        } while ((uVar14 & 0xffffffff) != 0);
      }
    }
  }
  uVar21 = (__int64)*(int *)(param_1 + 0x2c) * (__int64)iVar9;
  if ((unsigned __int64)*(unsigned short *)(param_1 + 0xc) < (uVar21 & 0xffffffff)) {
    uVar21 = (unsigned __int64)*(unsigned short *)(param_1 + 0xc);
  }
  if (*(int (***)())(param_1 + 0x1c) == (int (**)())0x0) {
    uVar10 = 0x80004005;
  }
  else {
    uVar10 = (**(int (***)())(param_1 + 0x1c))
                       (param_2,(unsigned __int64)*(unsigned short *)(param_1 + 10) + param_5,puVar18,puVar4,uVar21
                       );
    uVar10 = (int)uVar10 >> 0x1f & uVar10;
  }
  return uVar10;
}

