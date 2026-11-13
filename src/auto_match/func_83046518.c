extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8208E080;


unsigned __int64 fn_83046518(int *param_1,int *param_2,__int64 param_3,int param_4)

{
  unsigned char bVar1;
  unsigned char *pbVar2;
  unsigned char bVar3;
  unsigned char bVar4;
  unsigned short uVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  unsigned __int64 uVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  unsigned int uVar15;
  unsigned __int64 uVar13;
  __int64 lVar14;
  unsigned int uVar16;
  unsigned int uVar17;
  float *pfVar18;
  unsigned int uVar19;
  unsigned char *pbVar20;
  int iVar21;
  unsigned __int64 uVar22;
  unsigned __int64 uVar23;
  unsigned __int64 uVar24;
  
  fVar9 = lbl_8208E080;
  fVar8 = lbl_82002AE0;
  uVar23 = (unsigned __int64)*(unsigned short *)((int)param_1 + 0xe);
  uVar22 = param_3 - (unsigned __int64)*(unsigned int *)(param_4 + 0x1c);
  uVar24 = uVar22;
  if (uVar23 <= (uVar22 & 0xffffffff)) {
    uVar24 = uVar23;
  }
  iVar7 = (int)uVar24;
  uVar12 = 0;
  for (uVar19 = param_1[1]; uVar19 != 0; uVar19 = uVar19 - 1 & uVar19) {
    uVar12 = uVar12 + 1;
  }
  uVar19 = 0;
  if (uVar12 != 0) {
    do {
      uVar16 = param_1[1];
      pbVar20 = (unsigned char *)(*(int *)(param_4 + 0x18) * uVar12 + *param_1 + uVar19);
      uVar17 = uVar19;
      if ((uVar16 & 8) != 0) {
        uVar11 = 0;
        for (uVar15 = uVar16 & 7; uVar15 != 0; uVar15 = uVar15 - 1 & uVar15) {
          uVar11 = uVar11 + 1;
        }
        if (uVar19 == uVar11) {
          iVar21 = 0;
          for (; uVar16 != 0; uVar16 = uVar16 - 1 & uVar16) {
            iVar21 = iVar21 + 1;
          }
          uVar17 = iVar21 - 1;
        }
        else if (uVar11 < uVar19) {
          uVar17 = uVar19 - 1;
        }
      }
      uVar5 = *(unsigned short *)(param_2 + 3);
      uVar13 = 0;
      iVar21 = *(int *)(param_4 + 0x1c);
      iVar6 = *param_2;
      *(unsigned char *)(uVar19 + param_4) = pbVar20[uVar12 * (iVar7 + -1)];
      pfVar18 = (float *)((uVar5 * uVar17 + iVar21) * 4 + iVar6);
      if (3 < iVar7) {
        do {
          bVar1 = *pbVar20;
          uVar13 = uVar13 + 4;
          pbVar2 = pbVar20 + uVar12;
          pbVar20 = pbVar2 + uVar12;
          bVar3 = *pbVar20;
          bVar4 = pbVar20[uVar12];
          pbVar20 = pbVar20 + uVar12 + uVar12;
          pfVar18[1] = (float)*pbVar2 * fVar9 - fVar8;
          *pfVar18 = (float)bVar1 * fVar9 - fVar8;
          pfVar18[2] = (float)bVar3 * fVar9 - fVar8;
          pfVar18[3] = (float)bVar4 * fVar9 - fVar8;
          pfVar18 = pfVar18 + 4;
        } while ((uVar13 & 0xffffffff) < (uVar24 - 3 & 0xffffffff));
      }
      if ((uVar13 & 0xffffffff) < (uVar24 & 0xffffffff)) {
        lVar14 = uVar24 - uVar13;
        pfVar18 = pfVar18 + -1;
        pbVar20 = pbVar20 + -uVar12;
        do {
          pbVar20 = pbVar20 + uVar12;
          pfVar18 = pfVar18 + 1;
          *pfVar18 = (float)*pbVar20 * fVar9 - fVar8;
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
      }
      uVar19 = uVar19 + 1;
    } while (uVar19 < uVar12);
  }
  *(short *)((int)param_1 + 0xe) = *(short *)((int)param_1 + 0xe) - (short)uVar24;
  *(short *)((int)param_2 + 0xe) = (short)uVar24 + (short)*(unsigned int *)(param_4 + 0x1c);
  *(unsigned int *)(param_4 + 0x20) = 0x10000;
  if ((uVar24 & 0xffffffff) == uVar23) {
    iVar21 = 0;
  }
  else {
    iVar21 = *(int *)(param_4 + 0x18) + iVar7;
  }
  *(int *)(param_4 + 0x18) = iVar21;
  if ((uVar24 & 0xffffffff) == (uVar22 & 0xffffffff)) {
    uVar10 = 0x2d;
  }
  else {
    uVar10 = 0x2b;
    *(int *)(param_4 + 0x1c) = iVar7 + *(int *)(param_4 + 0x1c);
  }
  return uVar10;
}

