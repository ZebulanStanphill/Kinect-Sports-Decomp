extern unsigned int *auStack_8dc;
extern unsigned int uStack_8f4;
extern unsigned int uStack_8f8;
extern unsigned int uStack_8fc;


void fn_82EF96C8(int param_1,int param_2,__int64 param_3,unsigned int param_4,int param_5,int param_6)

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
  int iVar17;
  int iVar18;
  unsigned char *pbVar19;
  int iVar20;
  unsigned char *pbVar21;
  unsigned __int64 uVar22;
  short *psVar23;
  int iVar24;
  int iVar25;
  unsigned char *puVar26;
  unsigned short *puVar27;
  int iVar28;
  int iVar30;
  int iVar31;
  unsigned __int64 uVar29;
  short *psVar32;
  __int64 lVar33;
  __int64 lVar34;
  __int64 lVar35;
  int iVar36;
  __int64 lVar37;
  int iVar38;
  __int64 lVar39;
  __int64 lVar40;
  unsigned int uStack_8fc;
  unsigned int uStack_8f8;
  unsigned int uStack_8f4;
  short sStack_8de;
  unsigned char auStack_8dc [2092];
  
  uVar22 = (unsigned __int64)param_4;
  uVar29 = uVar22 & 0x7fffffff;
  lVar33 = uVar29 * 2;
  lVar34 = (__int64)(param_1 + -2 >> 2);
  lVar35 = 8;
  lVar37 = (__int64)(param_2 >> 2) * (__int64)(int)param_4 + lVar34 + param_3 + -1;
  iVar36 = param_5;
  do {
    iVar28 = 0;
    lVar39 = 0x11;
    do {
      iVar30 = (int)lVar37 + iVar28;
      iVar30 = (int)(((((unsigned int)*(unsigned char *)(iVar30 + 2) + (unsigned int)*(unsigned char *)(iVar30 + 1)) * 9 -
                      (unsigned int)*(unsigned char *)(iVar30 + 3)) - (unsigned int)*(unsigned char *)((int)lVar37 + iVar28)) +
                    (8 - param_6)) >> 4;
      if (iVar30 < 0) {
        iVar30 = 0;
      }
      else if (0xff < iVar30) {
        iVar30 = 0xff;
      }
      *(char *)(iVar36 + iVar28) = (char)iVar30;
      iVar28 = iVar28 + 1;
      lVar39 = lVar39 + -1;
    } while (lVar39 != 0);
    lVar35 = lVar35 + -1;
    lVar37 = lVar37 + lVar33;
    iVar36 = iVar36 + 0x20;
  } while (lVar35 != 0);
  iVar38 = param_5 + 0x280;
  lVar37 = (__int64)(param_2 + -6 >> 2) * (__int64)(int)param_4;
  iVar30 = (int)uVar29;
  iVar24 = param_6 + 7;
  iVar28 = (int)lVar33;
  iVar36 = iVar28 + iVar30 * 4;
  lVar39 = (param_1 >> 2) + lVar37 + param_3 + uVar29 * -2;
  lVar35 = 9;
  do {
    iVar31 = 0;
    iVar20 = (int)lVar39;
    lVar40 = 4;
    do {
      iVar25 = iVar20 + iVar31;
      iVar17 = (int)((uVar22 & 0x3fffffff) << 2);
      iVar25 = (int)(((((unsigned int)*(unsigned char *)(iVar17 + iVar25) + (unsigned int)*(unsigned char *)(iVar25 + iVar28)) * 9 -
                      (unsigned int)*(unsigned char *)(iVar36 + iVar25)) - (unsigned int)*(unsigned char *)(iVar20 + iVar31)) + iVar24
                    ) >> 4;
      if (iVar25 < 0) {
        iVar25 = 0;
      }
      else if (0xff < iVar25) {
        iVar25 = 0xff;
      }
      iVar18 = iVar20 + iVar31 + 1;
      *(char *)(iVar38 + iVar31) = (char)iVar25;
      iVar25 = (int)(((((unsigned int)*(unsigned char *)(iVar17 + iVar18) + (unsigned int)*(unsigned char *)(iVar18 + iVar28)) * 9 -
                      (unsigned int)*(unsigned char *)(iVar36 + iVar18)) - (unsigned int)*(unsigned char *)(iVar20 + iVar31 + 1)) +
                    iVar24) >> 4;
      if (iVar25 < 0) {
        iVar25 = 0;
      }
      else if (0xff < iVar25) {
        iVar25 = 0xff;
      }
      pbVar19 = (unsigned char *)(iVar20 + iVar31 + 2);
      *(char *)(iVar38 + iVar31 + 1) = (char)iVar25;
      iVar25 = (int)(((((unsigned int)pbVar19[iVar17] + (unsigned int)pbVar19[iVar28]) * 9 - (unsigned int)pbVar19[iVar36])
                     - (unsigned int)*pbVar19) + iVar24) >> 4;
      if (iVar25 < 0) {
        iVar25 = 0;
      }
      else if (0xff < iVar25) {
        iVar25 = 0xff;
      }
      iVar18 = iVar20 + 3 + iVar31;
      *(char *)(iVar38 + iVar31 + 2) = (char)iVar25;
      iVar25 = (int)(((((unsigned int)*(unsigned char *)(iVar17 + iVar18) + (unsigned int)*(unsigned char *)(iVar18 + iVar28)) * 9 -
                      (unsigned int)*(unsigned char *)(iVar36 + iVar18)) - (unsigned int)*(unsigned char *)(iVar20 + 3 + iVar31)) +
                    iVar24) >> 4;
      if (iVar25 < 0) {
        iVar25 = 0;
      }
      else if (0xff < iVar25) {
        iVar25 = 0xff;
      }
      *(char *)(iVar38 + 3 + iVar31) = (char)iVar25;
      iVar31 = iVar31 + 4;
      lVar40 = lVar40 + -1;
    } while (lVar40 != 0);
    lVar35 = lVar35 + -1;
    lVar39 = lVar39 + lVar33;
    iVar38 = iVar38 + 0x20;
  } while (lVar35 != 0);
  param_3 = lVar37 + lVar34 + param_3;
  param_5 = param_5 + 0x500;
  iVar36 = iVar30 * -2 + -2;
  puVar26 = auStack_8dc;
  lVar35 = param_3 + 1;
  lVar34 = param_3 + uVar29 * -2 + 1;
  uStack_8fc = (unsigned int)lVar35;
  iVar24 = iVar30 * -2 + 1;
  uStack_8f8 = (unsigned int)lVar34;
  iVar38 = iVar30 * -2 + 2;
  uStack_8f4 = 9;
  iVar28 = iVar28 + iVar30 * 4;
  iVar30 = iVar30 * -2 + -1;
  do {
    puVar27 = (unsigned short *)(puVar26 + -6);
    lVar37 = 4;
    do {
      pbVar21 = (unsigned char *)lVar35;
      bVar1 = *pbVar21;
      iVar20 = (int)((uVar22 & 0x3fffffff) << 2);
      pbVar19 = (unsigned char *)lVar34;
      bVar6 = pbVar19[iVar20];
      bVar2 = pbVar21[-1];
      bVar3 = pbVar21[1];
      bVar7 = pbVar21[iVar20 + iVar30];
      bVar8 = pbVar21[iVar20 + iVar24];
      bVar9 = pbVar21[iVar20 + iVar38];
      bVar4 = pbVar21[2];
      bVar10 = pbVar21[iVar28 + iVar30];
      bVar11 = pbVar21[iVar28 + iVar24];
      bVar12 = pbVar19[iVar28];
      bVar13 = pbVar21[iVar30];
      bVar14 = pbVar21[iVar28 + iVar38];
      bVar5 = *pbVar19;
      bVar15 = pbVar21[iVar24];
      bVar16 = pbVar21[iVar38];
      puVar27[1] = (short)((int)(((((unsigned int)pbVar21[iVar20 + iVar36] + (unsigned int)pbVar21[-2]) * 9 -
                                  (unsigned int)pbVar21[iVar28 + iVar36]) - (unsigned int)pbVar21[iVar36]) + param_6
                                ) >> 1);
      puVar27[2] = (short)((int)(((((unsigned int)bVar7 + (unsigned int)bVar2) * 9 - (unsigned int)bVar10) - (unsigned int)bVar13) +
                                param_6) >> 1);
      puVar27[3] = (short)((int)(((((unsigned int)bVar6 + (unsigned int)bVar1) * 9 - (unsigned int)bVar12) - (unsigned int)bVar5) +
                                param_6) >> 1);
      puVar27[4] = (short)((int)(((((unsigned int)bVar8 + (unsigned int)bVar3) * 9 - (unsigned int)bVar11) - (unsigned int)bVar15) +
                                param_6) >> 1);
      lVar34 = lVar34 + 5;
      puVar27 = puVar27 + 5;
      *puVar27 = (short)((int)(((((unsigned int)bVar9 + (unsigned int)bVar4) * 9 - (unsigned int)bVar14) - (unsigned int)bVar16) +
                              param_6) >> 1);
      lVar35 = lVar35 + 5;
      lVar37 = lVar37 + -1;
    } while (lVar37 != 0);
    uVar29 = (unsigned __int64)uStack_8f4;
    lVar34 = (unsigned __int64)uStack_8f8 + lVar33;
    lVar35 = (unsigned __int64)uStack_8fc + lVar33;
    uStack_8f4 = (unsigned int)(uVar29 - 1);
    puVar26 = puVar26 + 0x40;
    uStack_8f8 = (unsigned int)lVar34;
    uStack_8fc = (unsigned int)lVar35;
  } while (uVar29 - 1 != 0);
  lVar33 = 9;
  psVar23 = &sStack_8de;
  do {
    iVar36 = 0;
    lVar34 = 0x11;
    psVar32 = psVar23;
    do {
      iVar28 = ((((int)*psVar32 + (int)psVar32[1]) * 9 - (int)psVar32[-1]) - (int)psVar32[2]) +
               (0x40 - param_6) >> 7;
      if (iVar28 < 0) {
        iVar28 = 0;
      }
      else if (0xff < iVar28) {
        iVar28 = 0xff;
      }
      *(char *)(iVar36 + param_5) = (char)iVar28;
      psVar32 = psVar32 + 1;
      iVar36 = iVar36 + 1;
      lVar34 = lVar34 + -1;
    } while (lVar34 != 0);
    lVar33 = lVar33 + -1;
    psVar23 = psVar23 + 0x20;
    param_5 = param_5 + 0x20;
  } while (lVar33 != 0);
  return;
}

