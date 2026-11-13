extern unsigned int lbl_8201467C;


unsigned __int64 fn_830462A8(int *param_1,int *param_2,__int64 param_3,short *param_4)

{
  unsigned short uVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  unsigned int uVar11;
  unsigned int uVar13;
  __int64 lVar12;
  unsigned int uVar15;
  unsigned __int64 uVar14;
  unsigned int uVar16;
  float *pfVar17;
  unsigned int uVar18;
  short *psVar19;
  int iVar20;
  unsigned __int64 uVar21;
  unsigned __int64 uVar22;
  short *psVar23;
  unsigned int uVar24;
  
  fVar8 = lbl_8201467C;
  uVar22 = (unsigned __int64)*(unsigned short *)((int)param_1 + 0xe);
  uVar21 = param_3 - (unsigned __int64)*(unsigned int *)(param_4 + 0xe);
  uVar10 = uVar21;
  if (uVar22 <= (uVar21 & 0xffffffff)) {
    uVar10 = uVar22;
  }
  iVar7 = (int)uVar10;
  uVar24 = 0;
  for (uVar18 = param_1[1]; uVar18 != 0; uVar18 = uVar18 - 1 & uVar18) {
    uVar24 = uVar24 + 1;
  }
  uVar18 = 0;
  if (uVar24 != 0) {
    psVar23 = param_4;
    do {
      uVar16 = param_1[1];
      psVar19 = (short *)((*(int *)(param_4 + 0xc) * uVar24 + uVar18) * 2 + *param_1);
      uVar13 = uVar18;
      if ((uVar16 & 8) != 0) {
        uVar11 = 0;
        for (uVar15 = uVar16 & 7; uVar15 != 0; uVar15 = uVar15 - 1 & uVar15) {
          uVar11 = uVar11 + 1;
        }
        if (uVar18 == uVar11) {
          iVar20 = 0;
          for (; uVar16 != 0; uVar16 = uVar16 - 1 & uVar16) {
            iVar20 = iVar20 + 1;
          }
          uVar13 = iVar20 - 1;
        }
        else if (uVar11 < uVar18) {
          uVar13 = uVar18 - 1;
        }
      }
      uVar1 = *(unsigned short *)(param_2 + 3);
      uVar14 = 0;
      iVar20 = *(int *)(param_4 + 0xe);
      iVar6 = *param_2;
      *psVar23 = psVar19[uVar24 * (iVar7 + -1)];
      pfVar17 = (float *)((uVar1 * uVar13 + iVar20) * 4 + iVar6);
      if (3 < iVar7) {
        do {
          sVar2 = *psVar19;
          uVar14 = uVar14 + 4;
          psVar19 = psVar19 + uVar24;
          sVar3 = *psVar19;
          psVar19 = psVar19 + uVar24;
          sVar4 = *psVar19;
          sVar5 = psVar19[uVar24];
          psVar19 = psVar19 + uVar24 + uVar24;
          *pfVar17 = (float)(__int64)sVar2 * fVar8;
          pfVar17[1] = (float)(__int64)sVar3 * fVar8;
          pfVar17[2] = (float)(__int64)sVar4 * fVar8;
          pfVar17[3] = (float)(__int64)sVar5 * fVar8;
          pfVar17 = pfVar17 + 4;
        } while ((uVar14 & 0xffffffff) < (uVar10 - 3 & 0xffffffff));
      }
      if ((uVar14 & 0xffffffff) < (uVar10 & 0xffffffff)) {
        lVar12 = uVar10 - uVar14;
        pfVar17 = pfVar17 + -1;
        psVar19 = psVar19 + -uVar24;
        do {
          psVar19 = psVar19 + uVar24;
          pfVar17 = pfVar17 + 1;
          *pfVar17 = (float)(__int64)*psVar19 * fVar8;
          lVar12 = lVar12 + -1;
        } while (lVar12 != 0);
      }
      uVar18 = uVar18 + 1;
      psVar23 = psVar23 + 1;
    } while (uVar18 < uVar24);
  }
  *(short *)((int)param_1 + 0xe) = *(short *)((int)param_1 + 0xe) - (short)uVar10;
  *(short *)((int)param_2 + 0xe) = (short)uVar10 + (short)*(unsigned int *)(param_4 + 0xe);
  param_4[0x10] = 1;
  param_4[0x11] = 0;
  if ((uVar10 & 0xffffffff) == uVar22) {
    iVar20 = 0;
  }
  else {
    iVar20 = *(int *)(param_4 + 0xc) + iVar7;
  }
  *(int *)(param_4 + 0xc) = iVar20;
  if ((uVar10 & 0xffffffff) == (uVar21 & 0xffffffff)) {
    uVar9 = 0x2d;
  }
  else {
    uVar9 = 0x2b;
    *(int *)(param_4 + 0xe) = iVar7 + *(int *)(param_4 + 0xe);
  }
  return uVar9;
}

