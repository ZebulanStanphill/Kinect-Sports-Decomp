#define true 1
extern unsigned int *auStack_8dc;
extern unsigned int *auStack_8e2;
extern unsigned int uStack_900;


void fn_82EF9B68(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

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
  unsigned __int64 uVar26;
  unsigned char *pbVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  unsigned short *puVar32;
  unsigned char *pbVar33;
  short *psVar34;
  __int64 lVar35;
  int iVar36;
  int iVar37;
  short *psVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  __int64 lVar42;
  unsigned char *pbStack_908;
  unsigned char *puStack_904;
  unsigned int uStack_900;
  unsigned char *pbStack_8fc;
  unsigned short auStack_8e2 [3];
  unsigned char auStack_8dc [4];
  short asStack_8d8 [1020];
  
  iVar25 = param_1 + -2 >> 2;
  iVar40 = 8 - param_6;
  lVar35 = 8;
  iVar29 = (param_2 >> 2) * param_4 + iVar25 + param_3;
  iVar39 = param_5;
  do {
    iVar37 = 0;
    lVar42 = 3;
    do {
      iVar28 = iVar29 + iVar37;
      iVar28 = (int)(((((unsigned int)*(unsigned char *)(iVar28 + 1) + (unsigned int)*(unsigned char *)(iVar29 + iVar37)) * 9 -
                      (unsigned int)*(unsigned char *)(iVar28 + 2)) - (unsigned int)*(unsigned char *)(iVar28 + -1)) + iVar40) >> 4;
      if (iVar28 < 0) {
        iVar28 = 0;
      }
      else if (0xff < iVar28) {
        iVar28 = 0xff;
      }
      *(char *)(iVar39 + iVar37) = (char)iVar28;
      iVar28 = iVar29 + iVar37;
      iVar28 = (int)(((((unsigned int)*(unsigned char *)(iVar28 + 2) + (unsigned int)*(unsigned char *)(iVar28 + 1)) * 9 -
                      (unsigned int)*(unsigned char *)(iVar28 + 3)) - (unsigned int)*(unsigned char *)(iVar29 + iVar37)) + iVar40) >>
               4;
      if (iVar28 < 0) {
        iVar28 = 0;
      }
      else if (0xff < iVar28) {
        iVar28 = 0xff;
      }
      iVar41 = iVar29 + 1 + iVar37;
      *(char *)(iVar39 + iVar37 + 1) = (char)iVar28;
      iVar28 = (int)(((((unsigned int)*(unsigned char *)(iVar41 + 2) + (unsigned int)*(unsigned char *)(iVar41 + 1)) * 9 -
                      (unsigned int)*(unsigned char *)(iVar41 + 3)) - (unsigned int)*(unsigned char *)(iVar29 + 1 + iVar37)) + iVar40)
               >> 4;
      if (iVar28 < 0) {
        iVar28 = 0;
      }
      else if (0xff < iVar28) {
        iVar28 = 0xff;
      }
      *(char *)(iVar39 + 2 + iVar37) = (char)iVar28;
      iVar37 = iVar37 + 3;
      lVar42 = lVar42 + -1;
    } while (lVar42 != 0);
    lVar35 = lVar35 + -1;
    iVar29 = iVar29 + param_4;
    iVar39 = iVar39 + 0x20;
  } while (lVar35 != 0);
  iVar28 = param_5 + 0x280;
  iVar40 = (param_2 + -2 >> 2) * param_4;
  iVar41 = param_6 + 7;
  iVar29 = param_4 * 2;
  iVar39 = param_4 * 3;
  iVar37 = ((param_1 >> 2) + iVar40 + param_3) - param_4;
  lVar35 = 9;
  do {
    iVar36 = 0;
    lVar42 = 2;
    do {
      iVar30 = iVar37 + iVar36;
      iVar30 = (int)(((((unsigned int)*(unsigned char *)(iVar29 + iVar30) + (unsigned int)*(unsigned char *)(iVar30 + param_4)) * 9 -
                      (unsigned int)*(unsigned char *)(iVar39 + iVar30)) - (unsigned int)*(unsigned char *)(iVar37 + iVar36)) + iVar41
                    ) >> 4;
      if (iVar30 < 0) {
        iVar30 = 0;
      }
      else if (0xff < iVar30) {
        iVar30 = 0xff;
      }
      *(char *)(iVar28 + iVar36) = (char)iVar30;
      pbVar33 = (unsigned char *)(iVar37 + iVar36 + 1);
      iVar30 = (int)(((((unsigned int)pbVar33[iVar29] + (unsigned int)pbVar33[param_4]) * 9 - (unsigned int)pbVar33[iVar39])
                     - (unsigned int)*pbVar33) + iVar41) >> 4;
      if (iVar30 < 0) {
        iVar30 = 0;
      }
      else if (0xff < iVar30) {
        iVar30 = 0xff;
      }
      pbVar33 = (unsigned char *)(iVar37 + iVar36 + 2);
      *(char *)(iVar28 + iVar36 + 1) = (char)iVar30;
      iVar30 = (int)(((((unsigned int)pbVar33[iVar29] + (unsigned int)pbVar33[param_4]) * 9 - (unsigned int)pbVar33[iVar39])
                     - (unsigned int)*pbVar33) + iVar41) >> 4;
      if (iVar30 < 0) {
        iVar30 = 0;
      }
      else if (0xff < iVar30) {
        iVar30 = 0xff;
      }
      iVar31 = iVar37 + 3 + iVar36;
      *(char *)(iVar28 + iVar36 + 2) = (char)iVar30;
      iVar30 = (int)(((((unsigned int)*(unsigned char *)(iVar29 + iVar31) + (unsigned int)*(unsigned char *)(iVar31 + param_4)) * 9 -
                      (unsigned int)*(unsigned char *)(iVar39 + iVar31)) - (unsigned int)*(unsigned char *)(iVar37 + 3 + iVar36)) +
                    iVar41) >> 4;
      if (iVar30 < 0) {
        iVar30 = 0;
      }
      else if (0xff < iVar30) {
        iVar30 = 0xff;
      }
      *(char *)(iVar28 + 3 + iVar36) = (char)iVar30;
      iVar36 = iVar36 + 4;
      lVar42 = lVar42 + -1;
    } while (lVar42 != 0);
    lVar35 = lVar35 + -1;
    iVar37 = iVar37 + param_4;
    iVar28 = iVar28 + 0x20;
  } while (lVar35 != 0);
  param_5 = param_5 + 0x500;
  param_3 = iVar40 + iVar25 + param_3;
  iVar25 = 0x40 - param_6;
  pbStack_8fc = (unsigned char *)((param_3 - param_4) + 1);
  iVar41 = -2 - param_4;
  uStack_900 = 9;
  iVar28 = 1 - param_4;
  iVar37 = 2 - param_4;
  iVar36 = 3 - param_4;
  iVar40 = -1 - param_4;
  pbStack_908 = (unsigned char *)(param_3 + 1);
  puVar32 = auStack_8e2;
  lVar35 = 2;
  puStack_904 = auStack_8dc;
  pbVar33 = pbStack_908;
  pbVar27 = pbStack_8fc;
  while( true ) {
    do {
      bVar1 = *pbVar33;
      bVar7 = pbVar27[iVar29];
      bVar2 = pbVar33[-1];
      bVar3 = pbVar33[1];
      bVar8 = pbVar33[iVar39 + iVar40];
      bVar9 = pbVar33[iVar29 + iVar40];
      bVar10 = pbVar33[iVar29 + iVar28];
      bVar11 = pbVar33[iVar29 + iVar37];
      bVar4 = pbVar33[2];
      bVar12 = pbVar33[iVar39 + iVar28];
      bVar13 = pbVar27[iVar39];
      bVar14 = pbVar33[iVar40];
      bVar15 = pbVar33[iVar29 + iVar36];
      bVar16 = pbVar33[iVar39 + iVar36];
      bVar17 = pbVar33[iVar39 + iVar37];
      bVar5 = pbVar33[3];
      bVar6 = *pbVar27;
      bVar18 = pbVar33[iVar28];
      bVar19 = pbVar33[iVar37];
      bVar20 = pbVar33[iVar36];
      puVar32[1] = (short)((int)(((((unsigned int)pbVar33[iVar29 + iVar41] + (unsigned int)pbVar33[-2]) * 9 -
                                  (unsigned int)pbVar33[iVar39 + iVar41]) - (unsigned int)pbVar33[iVar41]) + param_6
                                ) >> 1);
      puVar32[2] = (short)((int)(((((unsigned int)bVar9 + (unsigned int)bVar2) * 9 - (unsigned int)bVar8) - (unsigned int)bVar14) +
                                param_6) >> 1);
      puVar32[3] = (short)((int)(((((unsigned int)bVar7 + (unsigned int)bVar1) * 9 - (unsigned int)bVar13) - (unsigned int)bVar6) +
                                param_6) >> 1);
      puVar32[4] = (short)((int)(((((unsigned int)bVar10 + (unsigned int)bVar3) * 9 - (unsigned int)bVar12) - (unsigned int)bVar18)
                                + param_6) >> 1);
      puVar32[5] = (short)((int)(((((unsigned int)bVar11 + (unsigned int)bVar4) * 9 - (unsigned int)bVar17) - (unsigned int)bVar19)
                                + param_6) >> 1);
      pbVar27 = pbVar27 + 6;
      puVar32 = puVar32 + 6;
      *puVar32 = (short)((int)(((((unsigned int)bVar15 + (unsigned int)bVar5) * 9 - (unsigned int)bVar16) - (unsigned int)bVar20) +
                              param_6) >> 1);
      pbVar33 = pbVar33 + 6;
      lVar35 = lVar35 + -1;
    } while (lVar35 != 0);
    uVar26 = (unsigned __int64)uStack_900;
    pbStack_8fc = pbStack_8fc + param_4;
    pbStack_908 = pbStack_908 + param_4;
    uStack_900 = (unsigned int)(uVar26 - 1);
    if (uVar26 - 1 == 0) break;
    puVar32 = (unsigned short *)(puStack_904 + 0x3a);
    lVar35 = 2;
    puStack_904 = puStack_904 + 0x40;
    pbVar33 = pbStack_908;
    pbVar27 = pbStack_8fc;
  }
  lVar35 = 9;
  psVar38 = asStack_8d8;
  do {
    iVar39 = 0;
    lVar42 = 3;
    psVar34 = psVar38;
    do {
      sVar21 = psVar34[-2];
      sVar22 = psVar34[-3];
      sVar23 = psVar34[-1];
      iVar29 = ((((int)sVar22 + (int)sVar21) * 9 - (int)psVar34[-4]) - (int)sVar23) + iVar25 >> 7;
      if (iVar29 < 0) {
        iVar29 = 0;
      }
      else if (0xff < iVar29) {
        iVar29 = 0xff;
      }
      sVar24 = *psVar34;
      *(char *)(iVar39 + param_5) = (char)iVar29;
      iVar29 = ((((int)sVar21 + (int)sVar23) * 9 - (int)sVar22) - (int)sVar24) + iVar25 >> 7;
      if (iVar29 < 0) {
        iVar29 = 0;
      }
      else if (0xff < iVar29) {
        iVar29 = 0xff;
      }
      sVar22 = psVar34[1];
      *(char *)(param_5 + 1 + iVar39) = (char)iVar29;
      iVar29 = ((((int)sVar24 + (int)sVar23) * 9 - (int)sVar22) - (int)sVar21) + iVar25 >> 7;
      if (iVar29 < 0) {
        iVar29 = 0;
      }
      else if (0xff < iVar29) {
        iVar29 = 0xff;
      }
      *(char *)(param_5 + 2 + iVar39) = (char)iVar29;
      psVar34 = psVar34 + 3;
      iVar39 = iVar39 + 3;
      lVar42 = lVar42 + -1;
    } while (lVar42 != 0);
    lVar35 = lVar35 + -1;
    psVar38 = psVar38 + 0x20;
    param_5 = param_5 + 0x20;
  } while (lVar35 != 0);
  return;
}

