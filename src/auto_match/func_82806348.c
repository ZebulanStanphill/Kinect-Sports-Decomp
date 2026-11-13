extern int fn_82803798();
extern int fn_82809558();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


void fn_82806348(int param_1,int param_2,unsigned __int64 param_3,__int64 param_4)

{
  unsigned char bVar1;
  unsigned char bVar2;
  short sVar3;
  int iVar4;
  float *pfVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  __int64 lVar8;
  unsigned __int64 uVar9;
  unsigned char *pbVar11;
  unsigned __int64 uVar10;
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
  
  if (*(int *)(*(int *)(param_2 + 100) + 0x3c) == 1) {
    fn_82803798();
  }
  else {
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
                  iVar15 = (int)uVar16;
                  sVar3 = **(short **)(param_2 + 0x28);
                  *(short **)(param_2 + 0x28) = *(short **)(param_2 + 0x28) + 1;
                  bVar2 = **(unsigned char **)(param_2 + 0x30);
                  *(unsigned char **)(param_2 + 0x30) = *(unsigned char **)(param_2 + 0x30) + 1;
                  puVar19 = (unsigned int *)uVar18;
                  uVar9 = bVar2 + uVar16;
                  uVar16 = uVar9 & 0x1f;
                  uVar18 = ((uVar9 & 0xff) >> 3 & 0x1ffffffc) + uVar18;
                  *(float *)lVar17 =
                       ((float)(((puVar19[1] << 1) << (0x1fU - iVar15 & 0x3f) | *puVar19 >> iVar15)
                               & (1 << (bVar2 & 0x3f)) - 1U) + (float)(__int64)sVar3) *
                       *(float *)(*(int *)(param_1 + 4) + (int)lVar8);
                }
                else {
                  *(int *)(param_2 + 0x28) = *(int *)(param_2 + 0x28) + 2;
                }
              }
              uVar7 = uVar7 >> 1;
              lVar17 = lVar17 + 4;
              uVar6 = uVar6 + 1;
              lVar8 = lVar8 + 4;
            } while (uVar7 != 0x10);
            iVar15 = (int)uVar14;
            if ((iVar15 == 0) && (iVar4 = *(int *)(*(int *)(param_2 + 100) + 0x3c), iVar4 != 0)) {
              if (iVar4 == 1) {
                pfVar5 = (float *)param_4;
                if (dVar22 < (double)(float)(dVar21 - (double)(pfVar5[2] * pfVar5[2] +
                                                              *pfVar5 * *pfVar5 +
                                                              pfVar5[1] * pfVar5[1]))) {
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
              uVar6 = (unsigned __int64)pbVar11[1];
              lVar8 = (uVar9 & 0x3fffffff) << 2;
              do {
                if ((unsigned __int64)*(unsigned short *)(param_1 + 0x1e) <= (uVar9 & 0xffffffff)) break;
                if ((uVar7 & uVar6) != 0) {
                  if ((uVar7 >> 3 & uVar6) == 0) {
                    iVar15 = (int)uVar16;
                    sVar3 = **(short **)(param_2 + 0x28);
                    *(short **)(param_2 + 0x28) = *(short **)(param_2 + 0x28) + 1;
                    bVar1 = **(unsigned char **)(param_2 + 0x30);
                    *(unsigned char **)(param_2 + 0x30) = *(unsigned char **)(param_2 + 0x30) + 1;
                    uVar10 = uVar16 + bVar1;
                    puVar19 = (unsigned int *)uVar18;
                    uVar16 = uVar10 & 0x1f;
                    uVar18 = ((uVar10 & 0xff) >> 3 & 0x1ffffffc) + uVar18;
                    *(float *)lVar17 =
                         ((float)(((puVar19[1] << 1) << (0x1fU - iVar15 & 0x3f) | *puVar19 >> iVar15
                                  ) & (1 << (bVar1 & 0x3f)) - 1U) + (float)(__int64)sVar3) *
                         *(float *)(*(int *)(param_1 + 4) + (int)lVar8);
                  }
                  else {
                    *(int *)(param_2 + 0x28) = *(int *)(param_2 + 0x28) + 2;
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
                    iVar4 = (int)uVar16;
                    sVar3 = **(short **)(param_2 + 0x28);
                    *(short **)(param_2 + 0x28) = *(short **)(param_2 + 0x28) + 1;
                    bVar1 = **(unsigned char **)(param_2 + 0x30);
                    *(unsigned char **)(param_2 + 0x30) = *(unsigned char **)(param_2 + 0x30) + 1;
                    uVar10 = uVar16 + bVar1;
                    puVar19 = (unsigned int *)uVar18;
                    uVar16 = uVar10 & 0x1f;
                    uVar18 = ((uVar10 & 0xff) >> 3 & 0x1ffffffc) + uVar18;
                    *(float *)lVar17 =
                         ((float)(((puVar19[1] << 1) << (0x1fU - iVar4 & 0x3f) | *puVar19 >> iVar4)
                                 & (1 << (bVar1 & 0x3f)) - 1U) + (float)(__int64)sVar3) *
                         *(float *)(*(int *)(param_1 + 4) + (int)lVar8);
                  }
                  else {
                    *(int *)(param_2 + 0x28) = *(int *)(param_2 + 0x28) + 2;
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
                    iVar4 = (int)uVar16;
                    sVar3 = **(short **)(param_2 + 0x28);
                    *(short **)(param_2 + 0x28) = *(short **)(param_2 + 0x28) + 1;
                    bVar1 = **(unsigned char **)(param_2 + 0x30);
                    *(unsigned char **)(param_2 + 0x30) = *(unsigned char **)(param_2 + 0x30) + 1;
                    puVar19 = (unsigned int *)uVar18;
                    uVar16 = bVar1 + uVar16;
                    uVar18 = ((uVar16 & 0xff) >> 3 & 0x1ffffffc) + uVar18;
                    uVar16 = uVar16 & 0x1f;
                    *(float *)lVar17 =
                         ((float)(((puVar19[1] << 1) << (0x1fU - iVar4 & 0x3f) | *puVar19 >> iVar4)
                                 & (1 << (bVar1 & 0x3f)) - 1U) + (float)(__int64)sVar3) *
                         *(float *)(*(int *)(param_1 + 4) + (int)lVar8);
                  }
                  else {
                    *(int *)(param_2 + 0x28) = *(int *)(param_2 + 0x28) + 2;
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
                    iVar15 = (int)uVar16;
                    sVar3 = **(short **)(param_2 + 0x28);
                    *(short **)(param_2 + 0x28) = *(short **)(param_2 + 0x28) + 1;
                    bVar1 = **(unsigned char **)(param_2 + 0x30);
                    *(unsigned char **)(param_2 + 0x30) = *(unsigned char **)(param_2 + 0x30) + 1;
                    uVar10 = bVar1 + uVar16;
                    puVar19 = (unsigned int *)uVar18;
                    uVar16 = uVar10 & 0x1f;
                    uVar18 = ((uVar10 & 0xff) >> 3 & 0x1ffffffc) + uVar18;
                    *(float *)lVar17 =
                         ((float)(((puVar19[1] << 1) << (0x1fU - iVar15 & 0x3f) | *puVar19 >> iVar15
                                  ) & (1 << (bVar1 & 0x3f)) - 1U) + (float)(__int64)sVar3) *
                         *(float *)(*(int *)(param_1 + 4) + (int)lVar8);
                  }
                  else {
                    *(int *)(param_2 + 0x28) = *(int *)(param_2 + 0x28) + 2;
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
  }
  return;
}

