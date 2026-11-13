extern int fn_82809558();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


void fn_82806A38(int param_1,int param_2,unsigned __int64 param_3,__int64 param_4)

{
  unsigned char bVar1;
  unsigned char bVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  __int64 lVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  unsigned char *pbVar11;
  int iVar12;
  unsigned __int64 uVar13;
  unsigned __int64 uVar14;
  int iVar15;
  unsigned __int64 uVar16;
  __int64 lVar17;
  unsigned int *puVar19;
  unsigned __int64 uVar18;
  double dVar20;
  double dVar21;
  double dVar22;
  
  uVar18 = param_3 & 0xfffffffc;
  uVar16 = (param_3 & 3) << 3;
  uVar13 = 0;
  iVar12 = 0;
  if (*(short *)(param_2 + 0x48) != 0) {
    dVar22 = (double)lbl_821AAD20;
    dVar21 = (double)lbl_82002AE0;
    do {
      if (0x20 < (uVar13 & 0xffffffff)) {
        uVar13 = uVar13 - 0x20;
        dataCacheBlockTouch(param_4 + 0x80);
        dataCacheBlockTouch(uVar18 + 0x80);
      }
      uVar14 = 0;
      lVar17 = param_4;
      if (*(short *)(param_1 + 0x1e) != 0) {
        do {
          uVar7 = 0x80;
          lVar8 = (uVar14 & 0x3fffffff) << 2;
          bVar1 = **(unsigned char **)(param_2 + 0x24);
          uVar6 = uVar14;
          do {
            if ((unsigned __int64)*(unsigned short *)(param_1 + 0x1e) <= (uVar6 & 0xffffffff)) break;
            if ((uVar7 & bVar1) != 0) {
              if ((uVar7 >> 3 & (unsigned __int64)bVar1) == 0) {
                iVar3 = (int)uVar16;
                iVar15 = **(int **)(param_2 + 0x2c);
                *(int **)(param_2 + 0x2c) = *(int **)(param_2 + 0x2c) + 1;
                bVar2 = **(unsigned char **)(param_2 + 0x30);
                *(unsigned char **)(param_2 + 0x30) = *(unsigned char **)(param_2 + 0x30) + 1;
                puVar19 = (unsigned int *)uVar18;
                uVar9 = bVar2 + uVar16;
                uVar16 = uVar9 & 0x1f;
                uVar18 = ((uVar9 & 0xff) >> 3 & 0x1ffffffc) + uVar18;
                *(float *)lVar17 =
                     ((float)(((puVar19[1] << 1) << (0x1fU - iVar3 & 0x3f) | *puVar19 >> iVar3) &
                             (1 << (bVar2 & 0x3f)) - 1U) + (float)(__int64)iVar15) *
                     *(float *)(*(int *)(param_1 + 4) + (int)lVar8);
              }
              else {
                *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 4;
              }
            }
            uVar7 = uVar7 >> 1;
            lVar17 = lVar17 + 4;
            uVar6 = uVar6 + 1;
            lVar8 = lVar8 + 4;
          } while (uVar7 != 0x10);
          iVar15 = (int)uVar14;
          if ((iVar15 == 0) && (iVar3 = *(int *)(*(int *)(param_2 + 100) + 0x3c), iVar3 != 0)) {
            if (iVar3 == 1) {
              pfVar4 = (float *)param_4;
              if (dVar22 < (double)(float)(dVar21 - (double)(pfVar4[2] * pfVar4[2] +
                                                            *pfVar4 * *pfVar4 +
                                                            pfVar4[1] * pfVar4[1]))) {
                dVar20 = (double)fn_82809558();
                *(float *)lVar17 = (float)dVar20;
              }
              else {
                *(float *)lVar17 = (float)dVar22;
              }
            }
            lVar17 = lVar17 + 4;
          }
          pbVar11 = *(unsigned char **)(param_2 + 0x24);
          bVar1 = *pbVar11 & 3;
          if (bVar1 == 1) {
            if ((iVar15 == 0) && (*(int *)(*(int *)(param_2 + 100) + 0x3c) != 0)) {
              lVar17 = lVar17 + 4;
            }
            uVar9 = uVar14 + 6;
            *(unsigned char **)(param_2 + 0x24) = pbVar11 + 1;
            lVar17 = lVar17 + 0xc;
            uVar7 = 0x80;
            lVar8 = (uVar9 & 0x3fffffff) << 2;
            uVar6 = (unsigned __int64)pbVar11[1];
            do {
              if ((unsigned __int64)*(unsigned short *)(param_1 + 0x1e) <= (uVar9 & 0xffffffff)) break;
              if ((uVar7 & uVar6) != 0) {
                if ((uVar7 >> 3 & uVar6) == 0) {
                  iVar3 = (int)uVar16;
                  iVar15 = **(int **)(param_2 + 0x2c);
                  *(int **)(param_2 + 0x2c) = *(int **)(param_2 + 0x2c) + 1;
                  bVar1 = **(unsigned char **)(param_2 + 0x30);
                  *(unsigned char **)(param_2 + 0x30) = *(unsigned char **)(param_2 + 0x30) + 1;
                  uVar10 = uVar16 + bVar1;
                  puVar19 = (unsigned int *)uVar18;
                  uVar16 = uVar10 & 0x1f;
                  uVar18 = ((uVar10 & 0xff) >> 3 & 0x1ffffffc) + uVar18;
                  *(float *)lVar17 =
                       ((float)(((puVar19[1] << 1) << (0x1fU - iVar3 & 0x3f) | *puVar19 >> iVar3) &
                               (1 << (bVar1 & 0x3f)) - 1U) + (float)(__int64)iVar15) *
                       *(float *)(*(int *)(param_1 + 4) + (int)lVar8);
                }
                else {
                  *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 4;
                }
              }
              uVar7 = uVar7 >> 1;
              lVar17 = lVar17 + 4;
              uVar9 = uVar9 + 1;
              lVar8 = lVar8 + 4;
            } while (uVar7 != 0x10);
          }
          else if (bVar1 == 2) {
            uVar9 = uVar14 + 3;
            *(unsigned char **)(param_2 + 0x24) = pbVar11 + 1;
            uVar7 = 0x80;
            lVar8 = (uVar9 & 0x3fffffff) << 2;
            uVar6 = (unsigned __int64)pbVar11[1];
            do {
              if ((unsigned __int64)*(unsigned short *)(param_1 + 0x1e) <= (uVar9 & 0xffffffff)) break;
              if ((uVar7 & uVar6) != 0) {
                if ((uVar7 >> 3 & uVar6) == 0) {
                  iVar5 = (int)uVar16;
                  iVar3 = **(int **)(param_2 + 0x2c);
                  *(int **)(param_2 + 0x2c) = *(int **)(param_2 + 0x2c) + 1;
                  bVar1 = **(unsigned char **)(param_2 + 0x30);
                  *(unsigned char **)(param_2 + 0x30) = *(unsigned char **)(param_2 + 0x30) + 1;
                  uVar10 = uVar16 + bVar1;
                  uVar16 = uVar10 & 0x1f;
                  puVar19 = (unsigned int *)uVar18;
                  uVar18 = ((uVar10 & 0xff) >> 3 & 0x1ffffffc) + uVar18;
                  *(float *)lVar17 =
                       ((float)(((puVar19[1] << 1) << (0x1fU - iVar5 & 0x3f) | *puVar19 >> iVar5) &
                               (1 << (bVar1 & 0x3f)) - 1U) + (float)(__int64)iVar3) *
                       *(float *)(*(int *)(param_1 + 4) + (int)lVar8);
                }
                else {
                  *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 4;
                }
              }
              uVar7 = uVar7 >> 1;
              lVar17 = lVar17 + 4;
              uVar9 = uVar9 + 1;
              lVar8 = lVar8 + 4;
            } while (uVar7 != 0x10);
            if ((iVar15 == 0) && (*(int *)(*(int *)(param_2 + 100) + 0x3c) != 0)) {
              lVar17 = lVar17 + 4;
            }
            lVar17 = lVar17 + 0xc;
          }
          else if (bVar1 == 3) {
            uVar9 = uVar14 + 3;
            *(unsigned char **)(param_2 + 0x24) = pbVar11 + 1;
            uVar7 = 0x80;
            lVar8 = (uVar9 & 0x3fffffff) << 2;
            uVar6 = (unsigned __int64)pbVar11[1];
            do {
              if ((unsigned __int64)*(unsigned short *)(param_1 + 0x1e) <= (uVar9 & 0xffffffff)) break;
              if ((uVar7 & uVar6) != 0) {
                if ((uVar7 >> 3 & uVar6) == 0) {
                  iVar5 = (int)uVar16;
                  iVar3 = **(int **)(param_2 + 0x2c);
                  *(int **)(param_2 + 0x2c) = *(int **)(param_2 + 0x2c) + 1;
                  bVar1 = **(unsigned char **)(param_2 + 0x30);
                  *(unsigned char **)(param_2 + 0x30) = *(unsigned char **)(param_2 + 0x30) + 1;
                  uVar10 = bVar1 + uVar16;
                  puVar19 = (unsigned int *)uVar18;
                  uVar16 = uVar10 & 0x1f;
                  uVar18 = ((uVar10 & 0xff) >> 3 & 0x1ffffffc) + uVar18;
                  *(float *)lVar17 =
                       ((float)(((puVar19[1] << 1) << (0x1fU - iVar5 & 0x3f) | *puVar19 >> iVar5) &
                               (1 << (bVar1 & 0x3f)) - 1U) + (float)(__int64)iVar3) *
                       *(float *)(*(int *)(param_1 + 4) + (int)lVar8);
                }
                else {
                  *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 4;
                }
              }
              uVar7 = uVar7 >> 1;
              lVar17 = lVar17 + 4;
              uVar9 = uVar9 + 1;
              lVar8 = lVar8 + 4;
            } while (uVar7 != 0x10);
            if ((iVar15 == 0) && (*(int *)(*(int *)(param_2 + 100) + 0x3c) != 0)) {
              lVar17 = lVar17 + 4;
            }
            uVar9 = uVar14 + 6;
            uVar7 = 0x80;
            pbVar11 = (unsigned char *)(*(int *)(param_2 + 0x24) + 1);
            *(unsigned char **)(param_2 + 0x24) = pbVar11;
            lVar8 = (uVar9 & 0x3fffffff) << 2;
            uVar6 = (unsigned __int64)*pbVar11;
            do {
              if ((unsigned __int64)*(unsigned short *)(param_1 + 0x1e) <= (uVar9 & 0xffffffff)) break;
              if ((uVar7 & uVar6) != 0) {
                if ((uVar7 >> 3 & uVar6) == 0) {
                  iVar3 = (int)uVar16;
                  iVar15 = **(int **)(param_2 + 0x2c);
                  *(int **)(param_2 + 0x2c) = *(int **)(param_2 + 0x2c) + 1;
                  bVar1 = **(unsigned char **)(param_2 + 0x30);
                  *(unsigned char **)(param_2 + 0x30) = *(unsigned char **)(param_2 + 0x30) + 1;
                  uVar16 = bVar1 + uVar16;
                  puVar19 = (unsigned int *)uVar18;
                  uVar18 = ((uVar16 & 0xff) >> 3 & 0x1ffffffc) + uVar18;
                  uVar16 = uVar16 & 0x1f;
                  *(float *)lVar17 =
                       ((float)(((puVar19[1] << 1) << (0x1fU - iVar3 & 0x3f) | *puVar19 >> iVar3) &
                               (1 << (bVar1 & 0x3f)) - 1U) + (float)(__int64)iVar15) *
                       *(float *)(*(int *)(param_1 + 4) + (int)lVar8);
                }
                else {
                  *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 4;
                }
              }
              uVar7 = uVar7 >> 1;
              lVar17 = lVar17 + 4;
              uVar9 = uVar9 + 1;
              lVar8 = lVar8 + 4;
            } while (uVar7 != 0x10);
          }
          else {
            if ((iVar15 == 0) && (*(int *)(*(int *)(param_2 + 100) + 0x3c) != 0)) {
              lVar17 = lVar17 + 4;
            }
            lVar17 = lVar17 + 0x18;
          }
          uVar14 = uVar14 + 9;
          *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
        } while ((int)uVar14 < (int)(unsigned int)*(unsigned short *)(param_1 + 0x1e));
      }
      iVar12 = iVar12 + 1;
      uVar14 = (unsigned __int64)*(unsigned short *)(*(int *)(param_2 + 100) + 0x32);
      uVar13 = uVar14 + uVar13;
      param_4 = uVar14 * 4 + param_4;
    } while (iVar12 < (int)(unsigned int)*(unsigned short *)(param_2 + 0x48));
  }
  return;
}

