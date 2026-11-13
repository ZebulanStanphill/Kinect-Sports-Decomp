typedef unsigned char bool;
extern unsigned int lbl_8202E370;
extern unsigned int lbl_8202E380;
extern unsigned int lbl_821AAD20;


unsigned int fn_829191A0(int param_1,unsigned __int64 param_2,unsigned int *param_3,unsigned int param_4,__int64 param_5)

{
  bool bVar1;
  unsigned short uVar2;
  unsigned short uVar3;
  unsigned short *puVar4;
  unsigned int *puVar5;
  int iVar6;
  unsigned __int64 uVar7;
  float fVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned char *puVar11;
  __int64 lVar12;
  unsigned int uVar14;
  unsigned __int64 uVar13;
  unsigned int uVar16;
  __int64 lVar15;
  int iVar19;
  unsigned int *puVar20;
  unsigned __int64 uVar17;
  unsigned __int64 uVar18;
  unsigned int *puVar21;
  unsigned int *puVar22;
  unsigned __int64 uVar23;
  unsigned __int64 uVar24;
  __int64 lVar25;
  
  puVar4 = *(unsigned short **)(param_1 + 0x18);
  puVar5 = *(unsigned int **)(param_1 + 0x20);
  uVar2 = *puVar4;
  if (uVar2 == 0) {
    uVar2 = puVar4[4];
    bVar1 = uVar2 < param_4;
  }
  else {
    if (uVar2 == 1) {
      uVar24 = (unsigned __int64)puVar4[3];
    }
    else {
      if (2 < uVar2) {
        if (uVar2 != 3) {
          if (uVar2 != 5) {
            return 0x80004001;
          }
          uVar24 = (unsigned __int64)param_4 / (unsigned __int64)*(unsigned int *)(param_1 + 0x34);
          trapWord(6,(unsigned __int64)*(unsigned int *)(param_1 + 0x34),0);
          if (puVar4[4] < uVar24) {
            uVar24 = (unsigned __int64)puVar4[4];
          }
          uVar23 = 0;
          if (uVar24 != 0) {
            do {
              uVar14 = 0;
              if (puVar4[5] != 0) {
                iVar19 = 0;
                do {
                  iVar6 = *(int *)(iVar19 + *(int *)(param_1 + 0x38));
                  uVar9 = fn_829191A0(iVar6,param_2,param_3,*(unsigned int *)(iVar6 + 0x30),param_5)
                  ;
                  if ((int)uVar9 < 0) {
                    return uVar9;
                  }
                  uVar14 = uVar14 + 1;
                  iVar19 = iVar19 + 4;
                  param_3 = param_3 + *(int *)(iVar6 + 0x30);
                } while (uVar14 < puVar4[5]);
              }
              uVar23 = uVar23 + 1;
            } while ((uVar23 & 0xffffffff) < uVar24);
          }
          return 0;
        }
        uVar14 = (unsigned int)puVar4[3];
        uVar9 = (unsigned int)puVar4[2];
        uVar23 = (__int64)(int)(unsigned int)puVar4[2] * (__int64)(int)(unsigned int)puVar4[3];
        uVar24 = param_4 / uVar23;
        trapWord(6,uVar23,0);
        if (puVar4[4] < uVar24) {
          uVar24 = (unsigned __int64)puVar4[4];
        }
        param_4 = (unsigned int)uVar24;
        uVar10 = 0;
        puVar21 = puVar5;
        if (uVar24 != 0) {
          puVar22 = puVar5 + -1;
          do {
            uVar16 = 0;
            if (uVar14 != 0) {
              do {
                uVar14 = 0;
                if (uVar9 != 0) {
                  do {
                    iVar19 = uVar9 * uVar10 + uVar14;
                    uVar14 = uVar14 + 1;
                    puVar22 = puVar22 + 1;
                    *puVar22 = param_3[iVar19 * (unsigned int)puVar4[3] + uVar16];
                    uVar9 = (unsigned int)puVar4[2];
                  } while (uVar14 < uVar9);
                }
                uVar14 = (unsigned int)puVar4[3];
                uVar16 = uVar16 + 1;
              } while (uVar16 < uVar14);
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 < uVar24);
        }
        goto LAB_8291936c;
      }
      uVar24 = (__int64)(int)(unsigned int)puVar4[3] * (__int64)(int)(unsigned int)puVar4[2];
    }
    uVar2 = puVar4[4];
    uVar23 = (unsigned __int64)param_4;
    param_4 = (unsigned int)(uVar23 / uVar24);
    trapWord(6,uVar24,0);
    bVar1 = (unsigned __int64)uVar2 < uVar23 / uVar24;
  }
  puVar21 = param_3;
  if (bVar1) {
    param_4 = (unsigned int)uVar2;
  }
LAB_8291936c:
  fVar8 = lbl_821AAD20;
  uVar2 = puVar4[1];
  puVar22 = puVar21;
  if (uVar2 != 3) {
    uVar24 = (__int64)*(int *)(param_1 + 0x34) * (__int64)(int)param_4;
    puVar22 = puVar5;
    if (uVar2 == 1) {
      if ((uVar24 & 0xffffffff) != 0) {
        puVar20 = puVar5;
        do {
          *puVar20 = (unsigned int)(*(float *)((int)puVar20 + ((int)puVar21 - (int)puVar5)) != fVar8);
          puVar20 = puVar20 + 1;
          uVar24 = uVar24 - 1;
        } while (uVar24 != 0);
      }
    }
    else if ((uVar2 == 2) && ((uVar24 & 0xffffffff) != 0)) {
      puVar20 = puVar5;
      do {
        *puVar20 = (int)*(float *)(((int)puVar21 - (int)puVar5) + (int)puVar20);
        puVar20 = puVar20 + 1;
        uVar24 = uVar24 - 1;
      } while (uVar24 != 0);
    }
  }
  puVar21 = puVar22;
  if (*(short *)(param_1 + 8) != 0) {
    if (*puVar4 == 3) {
      uVar2 = puVar4[2];
      uVar3 = puVar4[3];
    }
    else {
      uVar2 = puVar4[3];
      uVar3 = puVar4[2];
    }
    uVar24 = (unsigned __int64)uVar2;
    if ((uVar2 & 3) != 0) {
      if (*(short *)(param_1 + 8) == 1) {
        puVar11 = &lbl_8202E380;
      }
      else {
        puVar11 = &lbl_8202E370;
      }
      uVar13 = (__int64)(int)(unsigned int)uVar3 * (__int64)(int)param_4;
      uVar23 = uVar24 + 3 & 0xfffffffc;
      puVar21 = puVar5;
      if (uVar13 != 0) {
        lVar15 = (__int64)(int)uVar13 * (__int64)(int)uVar23;
        lVar12 = (__int64)(int)uVar13 * (__int64)(int)(unsigned int)uVar2;
        do {
          uVar13 = uVar13 - 1;
          lVar12 = lVar12 - uVar24;
          lVar15 = lVar15 - uVar23;
          uVar18 = uVar24;
          uVar7 = uVar24;
          if ((unsigned int)uVar2 < uVar23) {
            lVar25 = uVar23 - uVar24;
            uVar17 = uVar23;
            do {
              uVar17 = uVar17 - 1;
              *(unsigned int *)((int)((lVar15 + uVar17 & 0xffffffff) << 2) + (int)puVar5) =
                   *(unsigned int *)(puVar11 + ((unsigned int)((uVar17 & 0xffffffff) << 2) & 0xc));
              lVar25 = lVar25 + -1;
            } while (lVar25 != 0);
          }
          for (; uVar7 != 0; uVar7 = uVar7 - 1) {
            uVar18 = uVar18 - 1;
            *(unsigned int *)((int)((lVar15 + uVar18 & 0xffffffff) << 2) + (int)puVar5) =
                 *(unsigned int *)((int)((lVar12 + uVar18 & 0xffffffff) << 2) + (int)puVar22);
          }
        } while ((uVar13 & 0xffffffff) != 0);
      }
    }
  }
  uVar24 = (__int64)*(int *)(param_1 + 0x2c) * (__int64)(int)param_4;
  if ((unsigned __int64)*(unsigned short *)(param_1 + 0xc) < (uVar24 & 0xffffffff)) {
    uVar24 = (unsigned __int64)*(unsigned short *)(param_1 + 0xc);
  }
  if (*(int (***)())(param_1 + 0x1c) == (int (**)())0x0) {
    uVar14 = 0x80004005;
  }
  else {
    uVar14 = (**(int (***)())(param_1 + 0x1c))
                       (param_2,(unsigned __int64)*(unsigned short *)(param_1 + 10) + param_5,puVar21,puVar5,uVar24
                       );
    uVar14 = (int)uVar14 >> 0x1f & uVar14;
  }
  return uVar14;
}

