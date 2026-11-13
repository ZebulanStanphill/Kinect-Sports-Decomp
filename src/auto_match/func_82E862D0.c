extern unsigned int lbl_82005710;
extern unsigned int lbl_82005758;
extern unsigned int lbl_82110FE0;
extern unsigned int lbl_8215F6A0;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82E862D0(int param_1,double *param_2,int param_3,int param_4)

{
  short sVar1;
  short sVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  short *psVar5;
  int iVar6;
  short *psVar7;
  unsigned int uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  unsigned int uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  
  uVar8 = 0;
  *(unsigned int *)(param_2 + 7) = 0;
  *(unsigned int *)((int)param_2 + 0x3c) = 0;
  dVar14 = lbl_82005710;
  iVar11 = 0;
  *(unsigned int *)(param_2 + 8) = 0;
  *param_2 = dVar14;
  iVar9 = 0;
  param_2[1] = dVar14;
  iVar10 = 0;
  param_2[2] = dVar14;
  param_2[3] = dVar14;
  param_2[6] = dVar14;
  uVar12 = *(int *)(param_1 + 0x2d4) * *(int *)(param_1 + 0x2d0);
  dVar17 = dVar14;
  dVar13 = dVar14;
  dVar18 = dVar14;
  if (3 < (int)uVar12) {
    psVar5 = (short *)(param_4 + 6);
    psVar7 = (short *)(param_3 + 2);
    do {
      sVar1 = psVar7[-1];
      if (sVar1 == 0x4000) {
        iVar11 = iVar11 + 1;
      }
      else {
        uVar4 = (int)sVar1 >> 0x1f;
        uVar3 = (int)psVar5[-3] >> 0x1f;
        dVar15 = (double)(__int64)(int)(((int)sVar1 ^ uVar4) - uVar4);
        dVar16 = (double)(__int64)(int)(((int)psVar5[-3] ^ uVar3) - uVar3);
        dVar14 = dVar15 + dVar14;
        dVar13 = dVar16 + dVar13;
        dVar18 = dVar15 * dVar15 + dVar18;
        dVar17 = dVar16 * dVar16 + dVar17;
        if (lbl_82110FE0 < dVar15) {
          iVar9 = iVar9 + 1;
        }
        if (lbl_8215F6A0 < dVar16) {
          iVar10 = iVar10 + 1;
        }
      }
      sVar1 = *psVar7;
      if (sVar1 == 0x4000) {
        iVar11 = iVar11 + 1;
      }
      else {
        sVar2 = *(short *)((param_4 - param_3) + (int)psVar7);
        uVar4 = (int)sVar1 >> 0x1f;
        uVar3 = (int)sVar2 >> 0x1f;
        dVar15 = (double)(__int64)(int)(((int)sVar1 ^ uVar4) - uVar4);
        dVar14 = dVar15 + dVar14;
        dVar18 = dVar15 * dVar15 + dVar18;
        dVar16 = (double)(__int64)(int)(((int)sVar2 ^ uVar3) - uVar3);
        dVar13 = dVar16 + dVar13;
        dVar17 = dVar16 * dVar16 + dVar17;
        if (lbl_82110FE0 < dVar15) {
          iVar9 = iVar9 + 1;
        }
        if (lbl_8215F6A0 < dVar16) {
          iVar10 = iVar10 + 1;
        }
      }
      sVar1 = psVar7[1];
      if (sVar1 == 0x4000) {
        iVar11 = iVar11 + 1;
      }
      else {
        uVar4 = (int)sVar1 >> 0x1f;
        uVar3 = (int)psVar5[-1] >> 0x1f;
        dVar15 = (double)(__int64)(int)(((int)sVar1 ^ uVar4) - uVar4);
        dVar16 = (double)(__int64)(int)(((int)psVar5[-1] ^ uVar3) - uVar3);
        dVar14 = dVar15 + dVar14;
        dVar18 = dVar15 * dVar15 + dVar18;
        dVar13 = dVar16 + dVar13;
        dVar17 = dVar16 * dVar16 + dVar17;
        if (lbl_82110FE0 < dVar15) {
          iVar9 = iVar9 + 1;
        }
        if (lbl_8215F6A0 < dVar16) {
          iVar10 = iVar10 + 1;
        }
      }
      sVar1 = psVar7[2];
      if (sVar1 == 0x4000) {
        iVar11 = iVar11 + 1;
      }
      else {
        uVar4 = (int)sVar1 >> 0x1f;
        uVar3 = (int)*psVar5 >> 0x1f;
        dVar15 = (double)(__int64)(int)(((int)sVar1 ^ uVar4) - uVar4);
        dVar16 = (double)(__int64)(int)(((int)*psVar5 ^ uVar3) - uVar3);
        dVar14 = dVar15 + dVar14;
        dVar18 = dVar15 * dVar15 + dVar18;
        dVar13 = dVar16 + dVar13;
        dVar17 = dVar16 * dVar16 + dVar17;
        if (lbl_82110FE0 < dVar15) {
          iVar9 = iVar9 + 1;
        }
        if (lbl_8215F6A0 < dVar16) {
          iVar10 = iVar10 + 1;
        }
      }
      uVar8 = uVar8 + 4;
      psVar7 = psVar7 + 4;
      psVar5 = psVar5 + 4;
    } while (uVar8 < uVar12 - 3);
  }
  if (uVar8 < uVar12) {
    iVar6 = uVar12 - uVar8;
    psVar5 = (short *)(uVar8 * 2 + param_3);
    do {
      sVar1 = *psVar5;
      if (sVar1 == 0x4000) {
        iVar11 = iVar11 + 1;
      }
      else {
        sVar2 = *(short *)((param_4 - param_3) + (int)psVar5);
        uVar8 = (int)sVar1 >> 0x1f;
        uVar4 = (int)sVar2 >> 0x1f;
        dVar15 = (double)(__int64)(int)(((int)sVar1 ^ uVar8) - uVar8);
        dVar16 = (double)(__int64)(int)(((int)sVar2 ^ uVar4) - uVar4);
        dVar14 = dVar15 + dVar14;
        dVar18 = dVar15 * dVar15 + dVar18;
        dVar13 = dVar16 + dVar13;
        dVar17 = dVar16 * dVar16 + dVar17;
        if (lbl_82110FE0 < dVar15) {
          iVar9 = iVar9 + 1;
        }
        if (lbl_8215F6A0 < dVar16) {
          iVar10 = iVar10 + 1;
        }
      }
      psVar5 = psVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  if (uVar12 - iVar11 != 0) {
    dVar16 = (double)(__int64)(int)(uVar12 - iVar11);
    dVar15 = lbl_82005758 / dVar16;
    dVar14 = dVar15 * dVar14;
    *param_2 = dVar14;
    dVar13 = dVar15 * dVar13;
    param_2[1] = dVar13;
    param_2[2] = dVar15 * dVar18 - dVar14 * dVar14;
    param_2[3] = dVar15 * dVar17 - dVar13 * dVar13;
    param_2[4] = (double)(__int64)iVar9 /
                 (double)(unsigned int)(*(int *)(param_1 + 0x2d4) * *(int *)(param_1 + 0x2d0));
    param_2[5] = (double)(__int64)iVar10 /
                 (double)(unsigned int)(*(int *)(param_1 + 0x2d4) * *(int *)(param_1 + 0x2d0));
    param_2[6] = dVar16 / (double)(unsigned int)(*(int *)(param_1 + 0x2d4) * *(int *)(param_1 + 0x2d0));
  }
  return;
}

