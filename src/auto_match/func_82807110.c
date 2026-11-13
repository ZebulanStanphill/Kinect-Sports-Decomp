#define true 1
extern int fn_82806348();
extern int fn_82809558();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


void fn_82807110(int param_1,int param_2,unsigned int *param_3,unsigned int param_4)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned int *puVar3;
  unsigned int uVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  unsigned int uVar11;
  __int64 lVar10;
  unsigned int uVar14;
  unsigned __int64 uVar12;
  unsigned char *pbVar15;
  unsigned __int64 uVar13;
  unsigned __int64 uVar16;
  int iVar17;
  unsigned __int64 uVar18;
  unsigned __int64 uVar19;
  int iVar20;
  __int64 lVar21;
  unsigned int *puVar23;
  unsigned __int64 uVar22;
  __int64 lVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  
  puVar3 = *(unsigned int **)(param_2 + 100);
  dataCacheBlockTouch((unsigned __int64)puVar3[0xd]);
  uVar16 = (unsigned __int64)*puVar3;
  dataCacheBlockTouch(uVar16);
  uVar4 = puVar3[1];
  dataCacheBlockTouch(uVar4 + uVar16);
  dataCacheBlockTouch(((unsigned __int64)uVar4 & 0x7fffffff) * 2 + uVar16);
  dataCacheBlockTouch((unsigned __int64)uVar4 * 3 + uVar16);
  uVar4 = *(unsigned int *)(param_1 + 0x10);
  lVar24 = 4;
  puVar23 = puVar3 + 7;
  do {
    if (*puVar23 != 0) {
      *puVar23 = *puVar23 - 1;
    }
    puVar23 = puVar23 + 1;
    lVar24 = lVar24 + -1;
  } while (lVar24 != 0);
  lVar24 = 4;
  uVar14 = 0;
  puVar23 = param_3;
  do {
    if (((param_4 & 0xff & 1 << (uVar14 & 0x3f)) != 0) && (*(unsigned char *)(puVar3[2] + *puVar23) != 0xff))
    {
      puVar3[*(unsigned char *)(puVar3[2] + *puVar23) + 7] = 4;
    }
    uVar14 = uVar14 + 1;
    puVar23 = puVar23 + 1;
    lVar24 = lVar24 + -1;
  } while (lVar24 != 0);
  uVar14 = 0;
  dVar27 = (double)lbl_821AAD20;
  dVar26 = (double)lbl_82002AE0;
  do {
    if (((param_4 & 0xff & 1 << (uVar14 & 0x3f)) != 0) && (*(char *)(*param_3 + puVar3[2]) == -1)) {
      lVar24 = 4;
      uVar11 = 4;
      iVar17 = 0;
      iVar20 = 0;
      puVar23 = puVar3 + 7;
      do {
        if (*puVar23 < uVar11) {
          uVar11 = *puVar23 & 0xff;
          iVar17 = iVar20;
        }
        iVar20 = iVar20 + 1;
        puVar23 = puVar23 + 1;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      dataCacheBlockTouch((__int64)(int)puVar3[1] * (__int64)iVar17 + (unsigned __int64)*puVar3);
      if (puVar3[iVar17 + 3] != 0xffffffff) {
        *(unsigned char *)(puVar3[iVar17 + 3] + puVar3[2]) = 0xff;
      }
      puVar3[iVar17 + 3] = *param_3;
      *(char *)(*param_3 + puVar3[2]) = (char)iVar17;
      puVar3[iVar17 + 7] = 4;
      *(unsigned int *)(param_2 + 0x24) = *(unsigned int *)(param_1 + 0xc);
      *(unsigned int *)(param_2 + 0x28) = *(unsigned int *)(param_1 + 0x10);
      *(unsigned int *)(param_2 + 0x2c) = *(unsigned int *)(param_1 + 0x10);
      *(unsigned int *)(param_2 + 0x30) = puVar3[0xd];
      if (*(int *)(param_1 + 0x10) != 0) {
        uVar16 = (__int64)(int)(unsigned int)*(unsigned short *)(param_1 + 0x1c) * (__int64)(int)*param_3 +
                 (unsigned __int64)*(unsigned short *)(param_1 + 0x1a) + (unsigned __int64)*(unsigned short *)(param_1 + 0x18) +
                 (unsigned __int64)uVar4;
        if (*(char *)(param_1 + 0x26) == '\0') {
          fn_82806348(param_1,param_2,uVar16,
                        (__int64)(int)puVar3[1] * (__int64)iVar17 + (unsigned __int64)*puVar3,
                        (__int64)(int)(unsigned int)*(unsigned short *)((int)puVar3 + 0x32) *
                        (__int64)(int)(unsigned int)*(unsigned short *)(param_2 + 0x48));
        }
        else {
          uVar22 = uVar16 & 0xfffffffc;
          uVar16 = (uVar16 & 3) << 3;
          uVar18 = 0;
          lVar24 = (__int64)(int)puVar3[1] * (__int64)iVar17 + (unsigned __int64)*puVar3;
          iVar17 = 0;
          if (*(unsigned short *)(param_2 + 0x48) != 0) {
            do {
              if (0x20 < (uVar18 & 0xffffffff)) {
                uVar18 = uVar18 - 0x20;
                dataCacheBlockTouch(lVar24 + 0x80);
                dataCacheBlockTouch(uVar22 + 0x80);
              }
              uVar19 = 0;
              lVar21 = lVar24;
              if (*(short *)(param_1 + 0x1e) != 0) {
                do {
                  uVar9 = 0x80;
                  lVar10 = (uVar19 & 0x3fffffff) << 2;
                  bVar1 = **(unsigned char **)(param_2 + 0x24);
                  uVar8 = uVar19;
                  do {
                    if ((unsigned __int64)*(unsigned short *)(param_1 + 0x1e) <= (uVar8 & 0xffffffff)) break;
                    if ((uVar9 & bVar1) != 0) {
                      if ((uVar9 >> 3 & (unsigned __int64)bVar1) == 0) {
                        iVar5 = (int)uVar16;
                        iVar20 = **(int **)(param_2 + 0x2c);
                        *(int **)(param_2 + 0x2c) = *(int **)(param_2 + 0x2c) + 1;
                        bVar2 = **(unsigned char **)(param_2 + 0x30);
                        *(unsigned char **)(param_2 + 0x30) = *(unsigned char **)(param_2 + 0x30) + 1;
                        uVar12 = bVar2 + uVar16;
                        puVar23 = (unsigned int *)uVar22;
                        uVar16 = uVar12 & 0x1f;
                        uVar22 = ((uVar12 & 0xff) >> 3 & 0x1ffffffc) + uVar22;
                        *(float *)lVar21 =
                             ((float)(((puVar23[1] << 1) << (0x1fU - iVar5 & 0x3f) |
                                      *puVar23 >> iVar5) & (1 << (bVar2 & 0x3f)) - 1U) +
                             (float)(__int64)iVar20) *
                             *(float *)(*(int *)(param_1 + 4) + (int)lVar10);
                      }
                      else {
                        *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 4;
                      }
                    }
                    uVar9 = uVar9 >> 1;
                    lVar21 = lVar21 + 4;
                    uVar8 = uVar8 + 1;
                    lVar10 = lVar10 + 4;
                  } while (uVar9 != 0x10);
                  iVar20 = (int)uVar19;
                  if ((iVar20 == 0) &&
                     (iVar5 = *(int *)(*(int *)(param_2 + 100) + 0x3c), iVar5 != 0)) {
                    if (iVar5 == 1) {
                      pfVar6 = (float *)lVar24;
                      if (dVar27 < (double)(float)(dVar26 - (double)(pfVar6[2] * pfVar6[2] +
                                                                    *pfVar6 * *pfVar6 +
                                                                    pfVar6[1] * pfVar6[1]))) {
                        dVar25 = (double)fn_82809558();
                        *(float *)lVar21 = (float)dVar25;
                      }
                      else {
                        *(float *)lVar21 = (float)dVar27;
                      }
                    }
                    lVar21 = lVar21 + 4;
                  }
                  pbVar15 = *(unsigned char **)(param_2 + 0x24);
                  bVar1 = *pbVar15 & 3;
                  if (bVar1 == 1) {
                    if ((iVar20 == 0) && (*(int *)(*(int *)(param_2 + 100) + 0x3c) != 0)) {
                      lVar21 = lVar21 + 4;
                    }
                    uVar12 = uVar19 + 6;
                    *(unsigned char **)(param_2 + 0x24) = pbVar15 + 1;
                    lVar21 = lVar21 + 0xc;
                    uVar9 = 0x80;
                    lVar10 = (uVar12 & 0x3fffffff) << 2;
                    uVar8 = (unsigned __int64)pbVar15[1];
                    do {
                      if ((unsigned __int64)*(unsigned short *)(param_1 + 0x1e) <= (uVar12 & 0xffffffff)) break;
                      if ((uVar9 & uVar8) != 0) {
                        if ((uVar9 >> 3 & uVar8) == 0) {
                          iVar5 = (int)uVar16;
                          iVar20 = **(int **)(param_2 + 0x2c);
                          *(int **)(param_2 + 0x2c) = *(int **)(param_2 + 0x2c) + 1;
                          bVar1 = **(unsigned char **)(param_2 + 0x30);
                          *(unsigned char **)(param_2 + 0x30) = *(unsigned char **)(param_2 + 0x30) + 1;
                          puVar23 = (unsigned int *)uVar22;
                          uVar13 = bVar1 + uVar16;
                          uVar16 = uVar13 & 0x1f;
                          uVar22 = ((uVar13 & 0xff) >> 3 & 0x1ffffffc) + uVar22;
                          *(float *)lVar21 =
                               ((float)(((puVar23[1] << 1) << (0x1fU - iVar5 & 0x3f) |
                                        *puVar23 >> iVar5) & (1 << (bVar1 & 0x3f)) - 1U) +
                               (float)(__int64)iVar20) *
                               *(float *)(*(int *)(param_1 + 4) + (int)lVar10);
                        }
                        else {
                          *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 4;
                        }
                      }
                      uVar9 = uVar9 >> 1;
                      lVar21 = lVar21 + 4;
                      uVar12 = uVar12 + 1;
                      lVar10 = lVar10 + 4;
                    } while (uVar9 != 0x10);
                  }
                  else if (bVar1 == 2) {
                    uVar12 = uVar19 + 3;
                    *(unsigned char **)(param_2 + 0x24) = pbVar15 + 1;
                    uVar9 = 0x80;
                    lVar10 = (uVar12 & 0x3fffffff) << 2;
                    uVar8 = (unsigned __int64)pbVar15[1];
                    do {
                      if ((unsigned __int64)*(unsigned short *)(param_1 + 0x1e) <= (uVar12 & 0xffffffff)) break;
                      if ((uVar9 & uVar8) != 0) {
                        if ((uVar9 >> 3 & uVar8) == 0) {
                          iVar7 = (int)uVar16;
                          iVar5 = **(int **)(param_2 + 0x2c);
                          *(int **)(param_2 + 0x2c) = *(int **)(param_2 + 0x2c) + 1;
                          bVar1 = **(unsigned char **)(param_2 + 0x30);
                          *(unsigned char **)(param_2 + 0x30) = *(unsigned char **)(param_2 + 0x30) + 1;
                          uVar13 = bVar1 + uVar16;
                          puVar23 = (unsigned int *)uVar22;
                          uVar16 = uVar13 & 0x1f;
                          uVar22 = ((uVar13 & 0xff) >> 3 & 0x1ffffffc) + uVar22;
                          *(float *)lVar21 =
                               ((float)(((puVar23[1] << 1) << (0x1fU - iVar7 & 0x3f) |
                                        *puVar23 >> iVar7) & (1 << (bVar1 & 0x3f)) - 1U) +
                               (float)(__int64)iVar5) *
                               *(float *)(*(int *)(param_1 + 4) + (int)lVar10);
                        }
                        else {
                          *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 4;
                        }
                      }
                      uVar9 = uVar9 >> 1;
                      lVar21 = lVar21 + 4;
                      uVar12 = uVar12 + 1;
                      lVar10 = lVar10 + 4;
                    } while (uVar9 != 0x10);
                    if ((iVar20 == 0) && (*(int *)(*(int *)(param_2 + 100) + 0x3c) != 0)) {
                      lVar21 = lVar21 + 4;
                    }
                    lVar21 = lVar21 + 0xc;
                  }
                  else if (bVar1 == 3) {
                    uVar12 = uVar19 + 3;
                    *(unsigned char **)(param_2 + 0x24) = pbVar15 + 1;
                    uVar9 = 0x80;
                    lVar10 = (uVar12 & 0x3fffffff) << 2;
                    uVar8 = (unsigned __int64)pbVar15[1];
                    do {
                      if ((unsigned __int64)*(unsigned short *)(param_1 + 0x1e) <= (uVar12 & 0xffffffff)) break;
                      if ((uVar9 & uVar8) != 0) {
                        if ((uVar9 >> 3 & uVar8) == 0) {
                          iVar7 = (int)uVar16;
                          iVar5 = **(int **)(param_2 + 0x2c);
                          *(int **)(param_2 + 0x2c) = *(int **)(param_2 + 0x2c) + 1;
                          bVar1 = **(unsigned char **)(param_2 + 0x30);
                          *(unsigned char **)(param_2 + 0x30) = *(unsigned char **)(param_2 + 0x30) + 1;
                          uVar13 = bVar1 + uVar16;
                          puVar23 = (unsigned int *)uVar22;
                          uVar16 = uVar13 & 0x1f;
                          uVar22 = ((uVar13 & 0xff) >> 3 & 0x1ffffffc) + uVar22;
                          *(float *)lVar21 =
                               ((float)(((puVar23[1] << 1) << (0x1fU - iVar7 & 0x3f) |
                                        *puVar23 >> iVar7) & (1 << (bVar1 & 0x3f)) - 1U) +
                               (float)(__int64)iVar5) *
                               *(float *)(*(int *)(param_1 + 4) + (int)lVar10);
                        }
                        else {
                          *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 4;
                        }
                      }
                      uVar9 = uVar9 >> 1;
                      lVar21 = lVar21 + 4;
                      uVar12 = uVar12 + 1;
                      lVar10 = lVar10 + 4;
                    } while (uVar9 != 0x10);
                    if ((iVar20 == 0) && (*(int *)(*(int *)(param_2 + 100) + 0x3c) != 0)) {
                      lVar21 = lVar21 + 4;
                    }
                    uVar12 = uVar19 + 6;
                    uVar9 = 0x80;
                    pbVar15 = (unsigned char *)(*(int *)(param_2 + 0x24) + 1);
                    *(unsigned char **)(param_2 + 0x24) = pbVar15;
                    lVar10 = (uVar12 & 0x3fffffff) << 2;
                    uVar8 = (unsigned __int64)*pbVar15;
                    do {
                      if ((unsigned __int64)*(unsigned short *)(param_1 + 0x1e) <= (uVar12 & 0xffffffff)) break;
                      if ((uVar9 & uVar8) != 0) {
                        if ((uVar9 >> 3 & uVar8) == 0) {
                          iVar5 = (int)uVar16;
                          iVar20 = **(int **)(param_2 + 0x2c);
                          *(int **)(param_2 + 0x2c) = *(int **)(param_2 + 0x2c) + 1;
                          bVar1 = **(unsigned char **)(param_2 + 0x30);
                          *(unsigned char **)(param_2 + 0x30) = *(unsigned char **)(param_2 + 0x30) + 1;
                          uVar13 = bVar1 + uVar16;
                          puVar23 = (unsigned int *)uVar22;
                          uVar16 = uVar13 & 0x1f;
                          uVar22 = ((uVar13 & 0xff) >> 3 & 0x1ffffffc) + uVar22;
                          *(float *)lVar21 =
                               ((float)(((puVar23[1] << 1) << (0x1fU - iVar5 & 0x3f) |
                                        *puVar23 >> iVar5) & (1 << (bVar1 & 0x3f)) - 1U) +
                               (float)(__int64)iVar20) *
                               *(float *)(*(int *)(param_1 + 4) + (int)lVar10);
                        }
                        else {
                          *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 4;
                        }
                      }
                      uVar9 = uVar9 >> 1;
                      lVar21 = lVar21 + 4;
                      uVar12 = uVar12 + 1;
                      lVar10 = lVar10 + 4;
                    } while (uVar9 != 0x10);
                  }
                  else {
                    if ((iVar20 == 0) && (*(int *)(*(int *)(param_2 + 100) + 0x3c) != 0)) {
                      lVar21 = lVar21 + 4;
                    }
                    lVar21 = lVar21 + 0x18;
                  }
                  uVar19 = uVar19 + 9;
                  *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
                } while ((int)uVar19 < (int)(unsigned int)*(unsigned short *)(param_1 + 0x1e));
              }
              iVar17 = iVar17 + 1;
              uVar19 = (unsigned __int64)*(unsigned short *)(*(int *)(param_2 + 100) + 0x32);
              uVar18 = uVar19 + uVar18;
              lVar24 = uVar19 * 4 + lVar24;
            } while (iVar17 < (int)(unsigned int)*(unsigned short *)(param_2 + 0x48));
          }
        }
      }
    }
    uVar14 = uVar14 + 1;
    param_3 = param_3 + 1;
    if (3 < (int)uVar14) {
      return;
    }
  } while( true );
}

