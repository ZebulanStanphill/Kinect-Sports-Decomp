extern unsigned int fStack_80;
extern int fn_8277BB20();
extern int fn_8277BC28();
extern int fn_8277D280();
extern int fn_8277E0D8();
extern int fn_8277E2E0();
extern int fn_8277E7D0();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_84;
extern unsigned int uStack_88;


void fn_8277EE08(unsigned __int64 param_1,double param_2)

{
  float fVar1;
  int iVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned int uVar5;
  int iVar6;
  int iVar8;
  unsigned __int64 uVar7;
  unsigned __int64 in_r6;
  unsigned __int64 in_r7;
  unsigned int uVar9;
  int *piVar11;
  unsigned __int64 uVar10;
  float *pfVar12;
  unsigned char bVar13;
  unsigned int *puVar14;
  int iVar15;
  __int64 lVar16;
  __int64 lVar17;
  int iVar18;
  double dVar19;
  double extraout_f1;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  int *apiStack_90 [2];
  unsigned int uStack_88;
  unsigned int uStack_84;
  float fStack_80;
  
  iVar8 = fn_82F6A548();
  bVar13 = (in_r7 & 0xffffffff) != 0;
  uVar9 = 0;
  *(unsigned int *)(iVar8 + 0xdc) = 0;
  *(unsigned int *)(iVar8 + 0xa8) = 0;
  *(unsigned int *)(iVar8 + 0xd8) = 0x3fffffff;
  dVar22 = extraout_f1;
  if (*(int *)(iVar8 + 0x90) != 0) {
    iVar15 = 0;
    do {
      piVar11 = *(int **)(*(int *)(iVar8 + 0x8c) + iVar15);
      piVar11[0xb] = piVar11[0xb] & 0xfffffff7;
      iVar18 = *piVar11;
      iVar2 = *(int *)(iVar8 + 0x3c);
      if ((double)*(float *)(*(int *)((*(unsigned int *)(iVar18 + 4) >> 8 & 0xfffffc) + iVar2) +
                             (*(unsigned int *)(iVar18 + 4) & 0x3ff) * 8 + 4) == dVar22) {
        if (*(int *)(iVar18 + 0xc) == 0) {
          bVar13 = bVar13 | 2;
          piVar11[2] = piVar11[3];
          piVar11[0xb] = piVar11[0xb] | 2;
        }
        else {
          puVar14 = *(unsigned int **)(*piVar11 + 0xc);
          *piVar11 = (int)puVar14;
          pfVar12 = (float *)(*(int *)((puVar14[1] >> 8 & 0xfffffc) + *(int *)(iVar8 + 0x3c)) +
                             (puVar14[1] & 0x3ff) * 8);
          piVar11[2] = *(int *)(*(int *)((*puVar14 >> 8 & 0xfffffc) + *(int *)(iVar8 + 0x3c)) +
                               (*puVar14 & 0x3ff) * 8);
          if ((double)pfVar12[1] == param_2) {
            fVar1 = *pfVar12;
          }
          else {
            uVar3 = *(unsigned int *)*piVar11;
            pfVar12 = (float *)(*(int *)((uVar3 >> 8 & 0xfffffc) + *(int *)(iVar8 + 0x3c)) +
                               (uVar3 & 0x3ff) * 8);
            fVar1 = (float)(param_2 - (double)pfVar12[1]) * (float)((unsigned int *)*piVar11)[2] + *pfVar12;
          }
          piVar11[3] = (int)fVar1;
          fn_8277BB20(iVar8,piVar11);
          iVar18 = *(int *)(iVar8 + 0xa8);
          *(int *)(iVar8 + 0xa8) = iVar18 + 1;
          *(unsigned int *)(iVar18 * 4 + *(int *)(iVar8 + 0xa4)) = uVar9;
        }
        piVar11[0xb] = piVar11[0xb] | 8;
      }
      else {
        uVar3 = *(unsigned int *)(iVar18 + 4);
        piVar11[2] = piVar11[3];
        pfVar12 = (float *)(*(int *)((uVar3 >> 8 & 0xfffffc) + iVar2) + (uVar3 & 0x3ff) * 8);
        if ((double)pfVar12[1] == param_2) {
          fVar1 = *pfVar12;
        }
        else {
          uVar3 = *(unsigned int *)*piVar11;
          pfVar12 = (float *)(*(int *)((uVar3 >> 8 & 0xfffffc) + *(int *)(iVar8 + 0x3c)) +
                             (uVar3 & 0x3ff) * 8);
          fVar1 = (float)(param_2 - (double)pfVar12[1]) * (float)((unsigned int *)*piVar11)[2] + *pfVar12;
        }
        piVar11[3] = (int)fVar1;
        fn_8277BB20(iVar8,piVar11);
        iVar18 = *(int *)(iVar8 + 0xa8);
        *(int *)(iVar8 + 0xa8) = iVar18 + 1;
        *(unsigned int *)(iVar18 * 4 + *(int *)(iVar8 + 0xa4)) = uVar9;
      }
      uVar9 = uVar9 + 1;
      iVar15 = iVar15 + 4;
    } while (uVar9 < *(unsigned int *)(iVar8 + 0x90));
  }
  if ((in_r7 & 0xffffffff) != 0) {
    lVar16 = (in_r6 & 0x3fffffff) << 2;
    do {
      piVar11 = *(int **)(*(int *)(iVar8 + 0x70) + (int)lVar16);
      lVar16 = lVar16 + 4;
      uVar9 = *(unsigned int *)*piVar11;
      uVar3 = ((unsigned int *)*piVar11)[1];
      pfVar12 = (float *)(*(int *)((uVar3 >> 8 & 0xfffffc) + *(int *)(iVar8 + 0x3c)) +
                         (uVar3 & 0x3ff) * 8);
      piVar11[2] = *(int *)(*(int *)((uVar9 >> 8 & 0xfffffc) + *(int *)(iVar8 + 0x3c)) +
                           (uVar9 & 0x3ff) * 8);
      piVar11[0xb] = 8;
      if ((double)pfVar12[1] == param_2) {
        fVar1 = *pfVar12;
      }
      else {
        uVar9 = *(unsigned int *)*piVar11;
        pfVar12 = (float *)(*(int *)((uVar9 >> 8 & 0xfffffc) + *(int *)(iVar8 + 0x3c)) +
                           (uVar9 & 0x3ff) * 8);
        fVar1 = (float)(param_2 - (double)pfVar12[1]) * (float)((unsigned int *)*piVar11)[2] + *pfVar12;
      }
      piVar11[3] = (int)fVar1;
      apiStack_90[0] = piVar11;
      uVar7 = fn_8277BC28(iVar8 + 0x8c,0,*(unsigned int *)(iVar8 + 0x90),apiStack_90,
                            0xffffffff8277bad0);
      fn_8277E0D8(iVar8 + 0x8c,uVar7,apiStack_90);
      fn_8277BB20(iVar8,piVar11);
      in_r7 = in_r7 - 1;
    } while (in_r7 != 0);
  }
  *(unsigned int *)(iVar8 + 0xbc) = 0;
  puVar14 = (unsigned int *)(iVar8 + 0xbc);
  if ((bVar13 & 1) != 0) {
    uVar9 = 0;
    *(unsigned int *)(iVar8 + 0xa8) = 0;
    if (*(int *)(iVar8 + 0x90) != 0) {
      iVar15 = 0;
      do {
        if ((*(unsigned int *)(*(int *)(*(int *)(iVar8 + 0x8c) + iVar15) + 0x2c) & 2) == 0) {
          iVar18 = *(int *)(iVar8 + 0xa8);
          *(int *)(iVar8 + 0xa8) = iVar18 + 1;
          *(unsigned int *)(iVar18 * 4 + *(int *)(iVar8 + 0xa4)) = uVar9;
        }
        uVar9 = uVar9 + 1;
        iVar15 = iVar15 + 4;
      } while (uVar9 < *(unsigned int *)(iVar8 + 0x90));
    }
  }
  dVar23 = (double)(float)(param_2 - dVar22);
  if (1 < *(unsigned int *)(iVar8 + 0xa8)) {
    iVar15 = 0;
    dVar21 = (double)lbl_821AAD20;
    lVar16 = 0;
    do {
      lVar17 = lVar16;
      iVar18 = iVar15;
      if (-1 < (int)lVar16) {
        do {
          piVar11 = (int *)(iVar18 + *(int *)(iVar8 + 0xa4));
          iVar2 = *(int *)(*piVar11 * 4 + *(int *)(iVar8 + 0x8c));
          iVar4 = *(int *)(piVar11[1] * 4 + *(int *)(iVar8 + 0x8c));
          if (*(float *)(iVar2 + 0xc) <= *(float *)(iVar4 + 0xc)) break;
          if (*puVar14 == 0) {
            fn_8277E2E0(iVar8);
          }
          uStack_88 = *(unsigned int *)(iVar2 + 0x30);
          uStack_84 = *(unsigned int *)(iVar4 + 0x30);
          dVar20 = (double)(((*(float *)(iVar4 + 0xc) - *(float *)(iVar4 + 8)) -
                            *(float *)(iVar2 + 0xc)) + *(float *)(iVar2 + 8));
          dVar19 = dVar22;
          if (dVar20 != dVar21) {
            dVar19 = (double)(float)((double)(float)((double)(*(float *)(iVar2 + 8) -
                                                             *(float *)(iVar4 + 8)) / dVar20) *
                                     dVar23 + dVar22);
          }
          if (dVar19 < dVar22) {
            dVar19 = dVar22;
          }
          if (param_2 < dVar19) {
            dVar19 = param_2;
          }
          fStack_80 = (float)dVar19;
          fn_8277E7D0(puVar14,&uStack_88);
          iVar2 = *(int *)(iVar8 + 0x8c);
          lVar17 = lVar17 + -1;
          piVar11 = (int *)(iVar18 + *(int *)(iVar8 + 0xa4));
          iVar4 = piVar11[1] * 4;
          iVar6 = *piVar11 * 4;
          uVar5 = *(unsigned int *)(iVar6 + iVar2);
          *(unsigned int *)(iVar6 + iVar2) = *(unsigned int *)(iVar4 + iVar2);
          *(unsigned int *)(iVar4 + iVar2) = uVar5;
          iVar18 = iVar18 + -4;
        } while (-1 < lVar17);
      }
      iVar15 = iVar15 + 4;
      uVar10 = lVar16 + 2;
      lVar16 = lVar16 + 1;
    } while ((uVar10 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(iVar8 + 0xa8));
  }
  if (1 < *puVar14) {
    fn_8277D280(puVar14,0,*puVar14,0xffffffff8277bb00);
  }
  fn_82F6A594(bVar13);
  return;
}

