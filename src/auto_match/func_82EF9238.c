extern unsigned int *auStack_8dc;
extern unsigned int uStack_8f4;


void fn_82EF9238(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned char bVar3;
  unsigned char bVar4;
  unsigned char bVar5;
  unsigned char bVar6;
  unsigned char bVar7;
  unsigned char bVar8;
  unsigned char bVar9;
  unsigned char bVar10;
  unsigned char bVar11;
  unsigned char bVar12;
  unsigned char bVar13;
  unsigned char bVar14;
  unsigned char bVar15;
  unsigned char bVar16;
  short *psVar17;
  unsigned char *pbVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  unsigned char *puVar23;
  unsigned short *puVar24;
  int iVar25;
  int iVar27;
  int iVar28;
  unsigned char *pbVar29;
  unsigned __int64 uVar26;
  short *psVar30;
  int iVar31;
  __int64 lVar32;
  int iVar33;
  int iVar34;
  __int64 lVar35;
  unsigned char *pbStack_8fc;
  unsigned char *pbStack_8f8;
  unsigned int uStack_8f4;
  short sStack_8de;
  unsigned char auStack_8dc [2060];
  
  iVar19 = param_1 + -2 >> 2;
  lVar32 = 0x10;
  iVar20 = (param_2 >> 2) * param_4 + iVar19 + param_3 + -1;
  iVar25 = param_5;
  do {
    iVar31 = 0;
    lVar35 = 0x11;
    do {
      iVar27 = iVar20 + iVar31;
      iVar27 = (int)(((((unsigned int)*(unsigned char *)(iVar27 + 2) + (unsigned int)*(unsigned char *)(iVar27 + 1)) * 9 -
                      (unsigned int)*(unsigned char *)(iVar27 + 3)) - (unsigned int)*(unsigned char *)(iVar20 + iVar31)) +
                    (8 - param_6)) >> 4;
      if (iVar27 < 0) {
        iVar27 = 0;
      }
      else if (0xff < iVar27) {
        iVar27 = 0xff;
      }
      *(char *)(iVar25 + iVar31) = (char)iVar27;
      iVar31 = iVar31 + 1;
      lVar35 = lVar35 + -1;
    } while (lVar35 != 0);
    lVar32 = lVar32 + -1;
    iVar20 = iVar20 + param_4;
    iVar25 = iVar25 + 0x20;
  } while (lVar32 != 0);
  iVar33 = param_5 + 0x280;
  iVar31 = (param_2 + -2 >> 2) * param_4;
  iVar34 = param_6 + 7;
  iVar20 = param_4 * 2;
  iVar25 = param_4 * 3;
  iVar27 = ((param_1 >> 2) + iVar31 + param_3) - param_4;
  lVar32 = 0x11;
  do {
    iVar28 = 0;
    lVar35 = 4;
    do {
      iVar21 = iVar27 + iVar28;
      iVar21 = (int)(((((unsigned int)*(unsigned char *)(iVar20 + iVar21) + (unsigned int)*(unsigned char *)(iVar21 + param_4)) * 9 -
                      (unsigned int)*(unsigned char *)(iVar25 + iVar21)) - (unsigned int)*(unsigned char *)(iVar27 + iVar28)) + iVar34
                    ) >> 4;
      if (iVar21 < 0) {
        iVar21 = 0;
      }
      else if (0xff < iVar21) {
        iVar21 = 0xff;
      }
      iVar22 = iVar27 + iVar28 + 1;
      *(char *)(iVar33 + iVar28) = (char)iVar21;
      iVar21 = (int)(((((unsigned int)*(unsigned char *)(iVar20 + iVar22) + (unsigned int)*(unsigned char *)(iVar22 + param_4)) * 9 -
                      (unsigned int)*(unsigned char *)(iVar25 + iVar22)) - (unsigned int)*(unsigned char *)(iVar27 + iVar28 + 1)) +
                    iVar34) >> 4;
      if (iVar21 < 0) {
        iVar21 = 0;
      }
      else if (0xff < iVar21) {
        iVar21 = 0xff;
      }
      pbVar29 = (unsigned char *)(iVar27 + iVar28 + 2);
      *(char *)(iVar33 + iVar28 + 1) = (char)iVar21;
      iVar21 = (int)(((((unsigned int)pbVar29[iVar20] + (unsigned int)pbVar29[param_4]) * 9 - (unsigned int)pbVar29[iVar25])
                     - (unsigned int)*pbVar29) + iVar34) >> 4;
      if (iVar21 < 0) {
        iVar21 = 0;
      }
      else if (0xff < iVar21) {
        iVar21 = 0xff;
      }
      iVar22 = iVar27 + 3 + iVar28;
      *(char *)(iVar33 + iVar28 + 2) = (char)iVar21;
      iVar21 = (int)(((((unsigned int)*(unsigned char *)(iVar20 + iVar22) + (unsigned int)*(unsigned char *)(iVar22 + param_4)) * 9 -
                      (unsigned int)*(unsigned char *)(iVar25 + iVar22)) - (unsigned int)*(unsigned char *)(iVar27 + 3 + iVar28)) +
                    iVar34) >> 4;
      if (iVar21 < 0) {
        iVar21 = 0;
      }
      else if (0xff < iVar21) {
        iVar21 = 0xff;
      }
      *(char *)(iVar33 + 3 + iVar28) = (char)iVar21;
      iVar28 = iVar28 + 4;
      lVar35 = lVar35 + -1;
    } while (lVar35 != 0);
    lVar32 = lVar32 + -1;
    iVar27 = iVar27 + param_4;
    iVar33 = iVar33 + 0x20;
  } while (lVar32 != 0);
  param_3 = iVar31 + iVar19 + param_3;
  param_5 = param_5 + 0x500;
  pbStack_8f8 = (unsigned char *)((param_3 - param_4) + 1);
  iVar33 = -2 - param_4;
  puVar23 = auStack_8dc;
  pbStack_8fc = (unsigned char *)(param_3 + 1);
  iVar27 = 1 - param_4;
  iVar31 = 2 - param_4;
  uStack_8f4 = 0x11;
  iVar19 = -1 - param_4;
  do {
    puVar24 = (unsigned short *)(puVar23 + -6);
    lVar32 = 4;
    pbVar29 = pbStack_8fc;
    pbVar18 = pbStack_8f8;
    do {
      bVar1 = *pbVar29;
      bVar6 = pbVar18[iVar20];
      bVar2 = pbVar29[-1];
      bVar3 = pbVar29[1];
      bVar7 = pbVar29[iVar20 + iVar19];
      bVar8 = pbVar29[iVar20 + iVar27];
      bVar9 = pbVar29[iVar20 + iVar31];
      bVar4 = pbVar29[2];
      bVar10 = pbVar29[iVar25 + iVar19];
      bVar11 = pbVar29[iVar25 + iVar27];
      bVar12 = pbVar18[iVar25];
      bVar13 = pbVar29[iVar19];
      bVar14 = pbVar29[iVar25 + iVar31];
      bVar5 = *pbVar18;
      bVar15 = pbVar29[iVar27];
      bVar16 = pbVar29[iVar31];
      puVar24[1] = (short)((int)(((((unsigned int)pbVar29[iVar20 + iVar33] + (unsigned int)pbVar29[-2]) * 9 -
                                  (unsigned int)pbVar29[iVar25 + iVar33]) - (unsigned int)pbVar29[iVar33]) + param_6
                                ) >> 1);
      puVar24[2] = (short)((int)(((((unsigned int)bVar7 + (unsigned int)bVar2) * 9 - (unsigned int)bVar10) - (unsigned int)bVar13) +
                                param_6) >> 1);
      puVar24[3] = (short)((int)(((((unsigned int)bVar6 + (unsigned int)bVar1) * 9 - (unsigned int)bVar12) - (unsigned int)bVar5) +
                                param_6) >> 1);
      puVar24[4] = (short)((int)(((((unsigned int)bVar8 + (unsigned int)bVar3) * 9 - (unsigned int)bVar11) - (unsigned int)bVar15) +
                                param_6) >> 1);
      pbVar18 = pbVar18 + 5;
      puVar24 = puVar24 + 5;
      *puVar24 = (short)((int)(((((unsigned int)bVar9 + (unsigned int)bVar4) * 9 - (unsigned int)bVar14) - (unsigned int)bVar16) +
                              param_6) >> 1);
      pbVar29 = pbVar29 + 5;
      lVar32 = lVar32 + -1;
    } while (lVar32 != 0);
    uVar26 = (unsigned __int64)uStack_8f4;
    pbStack_8f8 = pbStack_8f8 + param_4;
    pbStack_8fc = pbStack_8fc + param_4;
    uStack_8f4 = (unsigned int)(uVar26 - 1);
    puVar23 = puVar23 + 0x40;
  } while (uVar26 - 1 != 0);
  lVar32 = 0x11;
  psVar17 = &sStack_8de;
  do {
    iVar19 = 0;
    lVar35 = 0x11;
    psVar30 = psVar17;
    do {
      iVar25 = ((((int)*psVar30 + (int)psVar30[1]) * 9 - (int)psVar30[-1]) - (int)psVar30[2]) +
               (0x40 - param_6) >> 7;
      if (iVar25 < 0) {
        iVar25 = 0;
      }
      else if (0xff < iVar25) {
        iVar25 = 0xff;
      }
      *(char *)(iVar19 + param_5) = (char)iVar25;
      psVar30 = psVar30 + 1;
      iVar19 = iVar19 + 1;
      lVar35 = lVar35 + -1;
    } while (lVar35 != 0);
    lVar32 = lVar32 + -1;
    psVar17 = psVar17 + 0x20;
    param_5 = param_5 + 0x20;
  } while (lVar32 != 0);
  return;
}

