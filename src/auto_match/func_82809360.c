extern int fn_82A1DDC0();
extern int fn_82F68B4C();
extern int fn_82F68B58();
extern int fn_82F68CC0();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82005344;
extern unsigned int lbl_820145BC;
extern unsigned int lbl_82016290;


void fn_82809360(int param_1,int *param_2,__int64 param_3)

{
  unsigned short uVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  int iVar4;
  __int64 lVar5;
  int iVar6;
  float *pfVar9;
  __int64 lVar7;
  __int64 lVar8;
  unsigned int uVar10;
  unsigned __int64 uVar11;
  __int64 lVar12;
  __int64 lVar13;
  unsigned int uVar15;
  __int64 lVar14;
  unsigned __int64 uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  
  puVar3 = *(unsigned int **)(param_1 + 100);
  dataCacheBlockTouch((unsigned __int64)*puVar3 + 0x80);
  dataCacheBlockTouch((unsigned __int64)puVar3[1] + 0x80 + (unsigned __int64)*puVar3);
  dataCacheBlockTouch(((unsigned __int64)puVar3[1] + 0x40 & 0x7fffffff) * 2 + (unsigned __int64)*puVar3);
  dataCacheBlockTouch((unsigned __int64)puVar3[1] * 3 + 0x80 + (unsigned __int64)*puVar3);
  if (*(char *)(param_1 + 0x47) == '\x02') {
    puVar3 = *(unsigned int **)(param_1 + 100);
    uVar1 = *(unsigned short *)((int)puVar3 + 0x32);
    fn_82A1DDC0(param_3,(__int64)(int)(unsigned int)*(unsigned char *)(puVar3[2] + param_2[1]) *
                              (__int64)(int)puVar3[1] + (unsigned __int64)*puVar3,puVar3[0xe]);
    lVar13 = 0;
    uVar15 = 0;
    if (*(short *)(param_1 + 0x48) != 0) {
      lVar14 = (unsigned __int64)uVar1 * 4;
      do {
        if ((*(int *)(param_1 + 0x50) != 0) &&
           (*(char *)(*(int *)(param_1 + 0x50) + uVar15) == '\0')) {
          fn_82A1DDC0(lVar13 + param_3,*(unsigned int *)(param_1 + 0x54),lVar14);
        }
        uVar15 = uVar15 + 1;
        lVar13 = lVar14 + lVar13;
      } while (uVar15 < *(unsigned short *)(param_1 + 0x48));
    }
  }
  else if (*(char *)(param_1 + 0x47) == '\x06') {
    if (puVar3[0xf] == 1) {
      fn_82F68B58();
      return;
    }
    puVar3 = *(unsigned int **)(param_1 + 100);
    uVar15 = 0;
    uVar11 = (unsigned __int64)*(unsigned short *)((int)puVar3 + 0x32);
    lVar14 = (__int64)(int)(unsigned int)*(unsigned char *)(param_2[1] + puVar3[2]) * (__int64)(int)puVar3[1] +
             (unsigned __int64)*puVar3;
    lVar13 = (__int64)(int)(unsigned int)*(unsigned char *)(param_2[2] + puVar3[2]) * (__int64)(int)puVar3[1] +
             (unsigned __int64)*puVar3;
    if (*(short *)(param_1 + 0x48) != 0) {
      lVar12 = uVar11 * 4;
      do {
        if ((*(int *)(param_1 + 0x50) == 0) ||
           (*(char *)(*(int *)(param_1 + 0x50) + uVar15) != '\0')) {
          if (uVar11 != 0) {
            lVar7 = lVar14;
            uVar16 = uVar11;
            do {
              pfVar9 = (float *)lVar7;
              *(float *)(((int)param_3 - (int)lVar14) + (int)pfVar9) =
                   (*(float *)(((int)lVar13 - (int)lVar14) + (int)pfVar9) - *pfVar9) *
                   *(float *)(param_1 + 0x40) + *pfVar9;
              lVar7 = lVar7 + 4;
              uVar16 = uVar16 - 1;
            } while (uVar16 != 0);
          }
        }
        else {
          fn_82F68CC0(param_3,*(unsigned int *)(param_1 + 0x54),lVar12);
        }
        uVar15 = uVar15 + 1;
        param_3 = lVar12 + param_3;
        lVar14 = lVar12 + lVar14;
        lVar13 = lVar12 + lVar13;
      } while (uVar15 < *(unsigned short *)(param_1 + 0x48));
    }
  }
  else {
    if (puVar3[0xf] == 1) {
      fn_82F68B4C();
      return;
    }
    iVar6 = fn_82F6A548();
    puVar3 = *(unsigned int **)(iVar6 + 100);
    uVar10 = 0;
    uVar15 = puVar3[2];
    uVar11 = (unsigned __int64)*puVar3;
    uVar2 = puVar3[1];
    uVar16 = (unsigned __int64)*(unsigned short *)((int)puVar3 + 0x32);
    lVar12 = (__int64)(int)(unsigned int)*(unsigned char *)(uVar15 + *param_2) * (__int64)(int)uVar2 + uVar11;
    lVar14 = (__int64)(int)(unsigned int)*(unsigned char *)(param_2[1] + uVar15) * (__int64)(int)uVar2 + uVar11;
    lVar7 = (__int64)(int)(unsigned int)*(unsigned char *)(param_2[2] + uVar15) * (__int64)(int)uVar2 + uVar11;
    lVar13 = (__int64)(int)(unsigned int)*(unsigned char *)(param_2[3] + uVar15) * (__int64)(int)uVar2 + uVar11;
    if (*(short *)(iVar6 + 0x48) != 0) {
      lVar5 = uVar16 * 4;
      dVar23 = (double)lbl_82005344;
      dVar24 = (double)lbl_82016290;
      dVar25 = (double)lbl_820145BC;
      dVar26 = (double)lbl_82002C5C;
      do {
        if ((*(int *)(iVar6 + 0x50) == 0) || (*(char *)(*(int *)(iVar6 + 0x50) + uVar10) != '\0')) {
          if (uVar16 != 0) {
            iVar4 = (int)lVar7;
            lVar8 = lVar7;
            uVar11 = uVar16;
            do {
              pfVar9 = (float *)lVar8;
              dVar22 = (double)*(float *)(((int)lVar12 - iVar4) + (int)pfVar9);
              dVar17 = (double)*pfVar9;
              dVar20 = (double)(float)(dVar22 * dVar26);
              dVar21 = (double)(float)((double)*(float *)(((int)lVar13 - iVar4) + (int)pfVar9) *
                                      dVar26);
              dVar19 = (double)*(float *)(((int)lVar14 - iVar4) + (int)pfVar9);
              dVar18 = (double)*(float *)(iVar6 + 0x40);
              *(float *)(((int)param_3 - iVar4) + (int)pfVar9) =
                   (float)((double)(float)((double)(float)((double)((float)(dVar19 * dVar25 -
                                                                           (double)(float)(dVar17 * 
                                                  dVar25)) + (float)(dVar21 - dVar20)) * dVar18 +
                                                  (double)(-(float)(dVar19 * dVar24 - dVar22) +
                                                          (float)(dVar17 * dVar23 - dVar21))) *
                                           dVar18 + (double)(float)(dVar17 * dVar26 - dVar20)) *
                           dVar18 + dVar19);
              lVar8 = lVar8 + 4;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
        }
        else {
          fn_82F68CC0(param_3,*(unsigned int *)(iVar6 + 0x54),lVar5);
        }
        uVar10 = uVar10 + 1;
        param_3 = lVar5 + param_3;
        lVar12 = lVar5 + lVar12;
        lVar14 = lVar5 + lVar14;
        lVar7 = lVar5 + lVar7;
        lVar13 = lVar5 + lVar13;
      } while (uVar10 < *(unsigned short *)(iVar6 + 0x48));
    }
    fn_82F6A594();
  }
  return;
}

