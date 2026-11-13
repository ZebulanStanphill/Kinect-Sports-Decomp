#define true 1
extern unsigned int *auStack_8dc;
extern unsigned int *auStack_8e2;
extern unsigned int uStack_900;
extern unsigned int uStack_908;
extern unsigned int uStack_90c;


void fn_82EFA1A8(int param_1,int param_2,__int64 param_3,unsigned int param_4,int param_5,int param_6)

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
  unsigned char bVar17;
  unsigned char bVar18;
  unsigned char bVar19;
  unsigned char bVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  short sVar24;
  int iVar25;
  int iVar26;
  unsigned char *pbVar27;
  unsigned __int64 uVar28;
  unsigned __int64 uVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  unsigned char *pbVar35;
  unsigned short *puVar36;
  int iVar37;
  short *psVar38;
  unsigned __int64 uVar39;
  __int64 lVar40;
  __int64 lVar41;
  __int64 lVar42;
  unsigned __int64 uVar43;
  unsigned __int64 uVar44;
  short *psVar45;
  int iVar46;
  __int64 lVar47;
  int iVar48;
  __int64 lVar49;
  __int64 lVar50;
  unsigned int uStack_90c;
  unsigned int uStack_908;
  unsigned char *puStack_904;
  unsigned int uStack_900;
  unsigned short auStack_8e2 [3];
  unsigned char auStack_8dc [4];
  short asStack_8d8 [1020];
  
  uVar28 = (unsigned __int64)param_4;
  uVar29 = uVar28 & 0x7fffffff;
  lVar47 = uVar29 * 2;
  lVar40 = (__int64)(param_1 + -2 >> 2);
  iVar48 = (int)lVar47;
  iVar46 = 8 - param_6;
  lVar42 = (__int64)(param_2 >> 2) * (__int64)(int)param_4 + lVar40 + param_3;
  lVar41 = 8;
  iVar33 = param_5;
  do {
    iVar32 = 0;
    iVar30 = (int)lVar42;
    lVar49 = 3;
    do {
      iVar31 = iVar30 + iVar32;
      iVar31 = (int)(((((unsigned int)*(unsigned char *)(iVar31 + 1) + (unsigned int)*(unsigned char *)(iVar30 + iVar32)) * 9 -
                      (unsigned int)*(unsigned char *)(iVar31 + 2)) - (unsigned int)*(unsigned char *)(iVar31 + -1)) + iVar46) >> 4;
      if (iVar31 < 0) {
        iVar31 = 0;
      }
      else if (0xff < iVar31) {
        iVar31 = 0xff;
      }
      *(char *)(iVar33 + iVar32) = (char)iVar31;
      iVar31 = iVar30 + iVar32;
      iVar31 = (int)(((((unsigned int)*(unsigned char *)(iVar31 + 2) + (unsigned int)*(unsigned char *)(iVar31 + 1)) * 9 -
                      (unsigned int)*(unsigned char *)(iVar31 + 3)) - (unsigned int)*(unsigned char *)(iVar30 + iVar32)) + iVar46) >>
               4;
      if (iVar31 < 0) {
        iVar31 = 0;
      }
      else if (0xff < iVar31) {
        iVar31 = 0xff;
      }
      iVar37 = iVar30 + 1 + iVar32;
      *(char *)(iVar33 + iVar32 + 1) = (char)iVar31;
      iVar31 = (int)(((((unsigned int)*(unsigned char *)(iVar37 + 2) + (unsigned int)*(unsigned char *)(iVar37 + 1)) * 9 -
                      (unsigned int)*(unsigned char *)(iVar37 + 3)) - (unsigned int)*(unsigned char *)(iVar30 + 1 + iVar32)) + iVar46)
               >> 4;
      if (iVar31 < 0) {
        iVar31 = 0;
      }
      else if (0xff < iVar31) {
        iVar31 = 0xff;
      }
      *(char *)(iVar33 + 2 + iVar32) = (char)iVar31;
      iVar32 = iVar32 + 3;
      lVar49 = lVar49 + -1;
    } while (lVar49 != 0);
    lVar41 = lVar41 + -1;
    lVar42 = lVar42 + lVar47;
    iVar33 = iVar33 + 0x20;
  } while (lVar41 != 0);
  iVar32 = param_5 + 0x280;
  lVar42 = (__int64)(param_2 + -6 >> 2) * (__int64)(int)param_4;
  iVar46 = (int)uVar29;
  iVar30 = param_6 + 7;
  iVar33 = iVar48 + iVar46 * 4;
  lVar49 = (param_1 >> 2) + lVar42 + param_3 + uVar29 * -2;
  lVar41 = 9;
  do {
    iVar37 = 0;
    iVar31 = (int)lVar49;
    lVar50 = 2;
    do {
      iVar34 = iVar31 + iVar37;
      iVar25 = (int)((uVar28 & 0x3fffffff) << 2);
      iVar34 = (int)(((((unsigned int)*(unsigned char *)(iVar25 + iVar34) + (unsigned int)*(unsigned char *)(iVar34 + iVar48)) * 9 -
                      (unsigned int)*(unsigned char *)(iVar33 + iVar34)) - (unsigned int)*(unsigned char *)(iVar31 + iVar37)) + iVar30
                    ) >> 4;
      if (iVar34 < 0) {
        iVar34 = 0;
      }
      else if (0xff < iVar34) {
        iVar34 = 0xff;
      }
      *(char *)(iVar32 + iVar37) = (char)iVar34;
      pbVar35 = (unsigned char *)(iVar31 + iVar37 + 1);
      iVar34 = (int)(((((unsigned int)pbVar35[iVar25] + (unsigned int)pbVar35[iVar48]) * 9 - (unsigned int)pbVar35[iVar33])
                     - (unsigned int)*pbVar35) + iVar30) >> 4;
      if (iVar34 < 0) {
        iVar34 = 0;
      }
      else if (0xff < iVar34) {
        iVar34 = 0xff;
      }
      pbVar35 = (unsigned char *)(iVar31 + iVar37 + 2);
      *(char *)(iVar32 + iVar37 + 1) = (char)iVar34;
      iVar34 = (int)(((((unsigned int)pbVar35[iVar25] + (unsigned int)pbVar35[iVar48]) * 9 - (unsigned int)pbVar35[iVar33])
                     - (unsigned int)*pbVar35) + iVar30) >> 4;
      if (iVar34 < 0) {
        iVar34 = 0;
      }
      else if (0xff < iVar34) {
        iVar34 = 0xff;
      }
      iVar26 = iVar31 + 3 + iVar37;
      *(char *)(iVar32 + iVar37 + 2) = (char)iVar34;
      iVar34 = (int)(((((unsigned int)*(unsigned char *)(iVar25 + iVar26) + (unsigned int)*(unsigned char *)(iVar26 + iVar48)) * 9 -
                      (unsigned int)*(unsigned char *)(iVar33 + iVar26)) - (unsigned int)*(unsigned char *)(iVar31 + 3 + iVar37)) +
                    iVar30) >> 4;
      if (iVar34 < 0) {
        iVar34 = 0;
      }
      else if (0xff < iVar34) {
        iVar34 = 0xff;
      }
      *(char *)(iVar32 + 3 + iVar37) = (char)iVar34;
      iVar37 = iVar37 + 4;
      lVar50 = lVar50 + -1;
    } while (lVar50 != 0);
    lVar41 = lVar41 + -1;
    lVar49 = lVar49 + lVar47;
    iVar32 = iVar32 + 0x20;
  } while (lVar41 != 0);
  param_5 = param_5 + 0x500;
  param_3 = lVar42 + lVar40 + param_3;
  iVar32 = 0x40 - param_6;
  iVar33 = iVar46 * -2 + -2;
  iVar48 = iVar48 + iVar46 * 4;
  iVar30 = iVar46 * -2 + 1;
  iVar46 = iVar46 * -2 + 2;
  uVar43 = uVar29 * -2 + 3;
  uVar39 = uVar29 * -2 - 1;
  lVar41 = param_3 + 1;
  lVar40 = param_3 + uVar29 * -2 + 1;
  uStack_90c = (unsigned int)lVar41;
  uStack_908 = (unsigned int)lVar40;
  uStack_900 = 9;
  puVar36 = auStack_8e2;
  lVar42 = 2;
  uVar29 = uVar39;
  uVar44 = uVar43;
  puStack_904 = auStack_8dc;
  while( true ) {
    while( true ) {
      pbVar27 = (unsigned char *)lVar41;
      iVar37 = (int)uVar29;
      bVar1 = *pbVar27;
      pbVar35 = (unsigned char *)lVar40;
      iVar31 = (int)((uVar28 & 0x3fffffff) << 2);
      bVar7 = pbVar35[iVar31];
      bVar2 = pbVar27[-1];
      bVar3 = pbVar27[1];
      bVar8 = pbVar27[iVar48 + iVar37];
      bVar9 = pbVar27[iVar31 + iVar37];
      bVar10 = pbVar27[iVar31 + iVar30];
      bVar11 = pbVar27[iVar31 + iVar46];
      bVar4 = pbVar27[2];
      bVar12 = pbVar27[iVar48 + iVar30];
      bVar13 = pbVar35[iVar48];
      bVar14 = pbVar27[iVar37];
      bVar15 = pbVar27[iVar31 + (int)uVar44];
      bVar16 = pbVar27[iVar48 + (int)uVar44];
      bVar5 = pbVar27[3];
      bVar17 = pbVar27[iVar48 + iVar46];
      bVar6 = *pbVar35;
      bVar18 = pbVar27[iVar30];
      bVar19 = pbVar27[iVar46];
      uVar44 = uVar43 & 0xffffffff;
      bVar20 = pbVar27[(int)uVar43];
      puVar36[1] = (short)((int)(((((unsigned int)pbVar27[iVar31 + iVar33] + (unsigned int)pbVar27[-2]) * 9 -
                                  (unsigned int)pbVar27[iVar48 + iVar33]) - (unsigned int)pbVar27[iVar33]) + param_6
                                ) >> 1);
      puVar36[2] = (short)((int)(((((unsigned int)bVar9 + (unsigned int)bVar2) * 9 - (unsigned int)bVar8) - (unsigned int)bVar14) +
                                param_6) >> 1);
      puVar36[3] = (short)((int)(((((unsigned int)bVar7 + (unsigned int)bVar1) * 9 - (unsigned int)bVar13) - (unsigned int)bVar6) +
                                param_6) >> 1);
      puVar36[4] = (short)((int)(((((unsigned int)bVar10 + (unsigned int)bVar3) * 9 - (unsigned int)bVar12) - (unsigned int)bVar18)
                                + param_6) >> 1);
      puVar36[5] = (short)((int)(((((unsigned int)bVar11 + (unsigned int)bVar4) * 9 - (unsigned int)bVar17) - (unsigned int)bVar19)
                                + param_6) >> 1);
      lVar40 = lVar40 + 6;
      puVar36 = puVar36 + 6;
      *puVar36 = (short)((int)(((((unsigned int)bVar15 + (unsigned int)bVar5) * 9 - (unsigned int)bVar16) - (unsigned int)bVar20) +
                              param_6) >> 1);
      lVar41 = lVar41 + 6;
      lVar42 = lVar42 + -1;
      if (lVar42 == 0) break;
      uVar29 = uVar39 & 0xffffffff;
    }
    uVar29 = (unsigned __int64)uStack_900;
    lVar40 = (unsigned __int64)uStack_908 + lVar47;
    lVar41 = (unsigned __int64)uStack_90c + lVar47;
    uStack_908 = (unsigned int)lVar40;
    uStack_900 = (unsigned int)(uVar29 - 1);
    uStack_90c = (unsigned int)lVar41;
    if (uVar29 - 1 == 0) break;
    uVar29 = uVar39 & 0xffffffff;
    puVar36 = (unsigned short *)(puStack_904 + 0x3a);
    lVar42 = 2;
    puStack_904 = puStack_904 + 0x40;
  }
  lVar40 = 9;
  psVar45 = asStack_8d8;
  do {
    iVar48 = 0;
    lVar41 = 3;
    psVar38 = psVar45;
    do {
      sVar21 = psVar38[-2];
      sVar22 = psVar38[-3];
      sVar23 = psVar38[-1];
      iVar33 = ((((int)sVar22 + (int)sVar21) * 9 - (int)psVar38[-4]) - (int)sVar23) + iVar32 >> 7;
      if (iVar33 < 0) {
        iVar33 = 0;
      }
      else if (0xff < iVar33) {
        iVar33 = 0xff;
      }
      sVar24 = *psVar38;
      *(char *)(iVar48 + param_5) = (char)iVar33;
      iVar33 = ((((int)sVar23 + (int)sVar21) * 9 - (int)sVar22) - (int)sVar24) + iVar32 >> 7;
      if (iVar33 < 0) {
        iVar33 = 0;
      }
      else if (0xff < iVar33) {
        iVar33 = 0xff;
      }
      sVar22 = psVar38[1];
      *(char *)(param_5 + 1 + iVar48) = (char)iVar33;
      iVar33 = ((((int)sVar23 + (int)sVar24) * 9 - (int)sVar22) - (int)sVar21) + iVar32 >> 7;
      if (iVar33 < 0) {
        iVar33 = 0;
      }
      else if (0xff < iVar33) {
        iVar33 = 0xff;
      }
      *(char *)(param_5 + 2 + iVar48) = (char)iVar33;
      psVar38 = psVar38 + 3;
      iVar48 = iVar48 + 3;
      lVar41 = lVar41 + -1;
    } while (lVar41 != 0);
    lVar40 = lVar40 + -1;
    psVar45 = psVar45 + 0x20;
    param_5 = param_5 + 0x20;
  } while (lVar40 != 0);
  return;
}

