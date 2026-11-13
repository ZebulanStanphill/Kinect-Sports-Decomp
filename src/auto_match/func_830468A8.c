extern unsigned int lbl_8208E088;


unsigned __int64 fn_830468A8(int *param_1,unsigned int *param_2,__int64 param_3,unsigned short *param_4)

{
  unsigned short uVar1;
  unsigned short uVar2;
  unsigned short uVar3;
  short sVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  float fVar9;
  unsigned __int64 uVar10;
  int iVar12;
  unsigned __int64 uVar11;
  unsigned int uVar14;
  unsigned __int64 uVar13;
  unsigned int uVar17;
  unsigned int uVar18;
  unsigned int uVar19;
  __int64 lVar15;
  unsigned __int64 uVar16;
  unsigned __int64 uVar20;
  unsigned __int64 uVar21;
  int iVar22;
  int iVar23;
  unsigned __int64 uVar24;
  unsigned __int64 uVar25;
  unsigned short *puVar26;
  unsigned __int64 uVar27;
  unsigned __int64 uVar28;
  int iVar29;
  unsigned __int64 uVar30;
  unsigned __int64 uVar31;
  
  fVar9 = lbl_8208E088;
  uVar27 = (unsigned __int64)*(unsigned int *)(param_4 + 0x12);
  uVar5 = *(unsigned int *)(param_4 + 0x10);
  uVar20 = (unsigned __int64)uVar5;
  trapWord(6,uVar27,0);
  uVar6 = *(unsigned int *)(param_4 + 0xe);
  uVar1 = *(unsigned short *)((int)param_1 + 0xe);
  uVar25 = param_3 - (unsigned __int64)uVar6;
  uVar24 = ((uVar27 - uVar20) + 0xffff & 0xffffffff) / uVar27;
  if ((uVar25 & 0xffffffff) < uVar24) {
    uVar24 = uVar25;
  }
  uVar28 = 0;
  uVar7 = param_1[1];
  for (uVar17 = uVar7; uVar17 != 0; uVar17 = uVar17 - 1 & uVar17) {
    uVar28 = uVar28 + 1;
  }
  uVar17 = 0;
  iVar29 = (int)uVar28;
  iVar22 = (*(int *)(param_4 + 0xc) * 2 + -2) * iVar29 + *param_1;
  if ((uVar28 & 0xffffffff) == 0) {
    uVar31 = uVar25 & 0xffffffff;
  }
  else {
    uVar2 = *(unsigned short *)(param_2 + 3);
    uVar8 = *param_2;
    iVar23 = iVar22 - (int)param_4;
    puVar26 = param_4;
    do {
      uVar19 = uVar17;
      if ((uVar7 & 8) != 0) {
        uVar14 = 0;
        for (uVar18 = uVar7 & 7; uVar18 != 0; uVar18 = uVar18 - 1 & uVar18) {
          uVar14 = uVar14 + 1;
        }
        if (uVar17 == uVar14) {
          iVar12 = 0;
          for (uVar19 = uVar7; uVar19 != 0; uVar19 = uVar19 - 1 & uVar19) {
            iVar12 = iVar12 + 1;
          }
          uVar19 = iVar12 - 1;
        }
        else if (uVar14 < uVar17) {
          uVar19 = uVar17 - 1;
        }
      }
      uVar3 = *puVar26;
      lVar15 = ((__int64)(int)(unsigned int)uVar2 * (__int64)(int)uVar19 + (unsigned __int64)uVar6 & 0x3fffffff)
               * 4 + (unsigned __int64)uVar8;
      uVar11 = (unsigned __int64)uVar5 & 0xffff;
      uVar21 = uVar20;
      uVar30 = (unsigned __int64)(uVar5 >> 0x10);
      if ((uVar24 & 0xffffffff) != 0) {
        sVar4 = *(short *)((int)puVar26 + (int)((uVar28 & 0xffffffff) << 1) + iVar23);
        uVar31 = uVar24;
        do {
          uVar21 = uVar27 + uVar21;
          iVar12 = (int)uVar11;
          uVar30 = (uVar21 & 0xffffffff) >> 0x10;
          uVar11 = uVar21 & 0xffff;
          *(float *)lVar15 =
               (float)(__int64)
                      (int)(((int)sVar4 - (int)(short)uVar3) * iVar12 + (unsigned int)uVar3 * 0x10000) *
               fVar9;
          lVar15 = lVar15 + 4;
          uVar31 = uVar31 - 1;
        } while (uVar31 != 0);
      }
      trapWord(6,uVar27,0);
      uVar13 = ((((unsigned __int64)uVar1 * 0x10000 - uVar21) + uVar27) - 1 & 0xffffffff) / uVar27;
      uVar31 = uVar25 - uVar24;
      if (uVar13 <= (uVar25 - uVar24 & 0xffffffff)) {
        uVar31 = uVar13;
      }
      if ((uVar31 & 0xffffffff) != 0) {
        lVar15 = lVar15 + -4;
        uVar13 = uVar31;
        do {
          uVar16 = (__int64)iVar29 * (__int64)(int)uVar30;
          uVar21 = uVar27 + uVar21;
          uVar30 = (uVar21 & 0xffffffff) >> 0x10;
          uVar3 = *(unsigned short *)((int)puVar26 + (int)((uVar16 & 0xffffffff) << 1) + iVar23);
          iVar12 = (int)uVar11;
          uVar11 = uVar21 & 0xffff;
          lVar15 = lVar15 + 4;
          *(float *)lVar15 =
               (float)(__int64)
                      (int)(((int)*(short *)((int)puVar26 +
                                            (int)((uVar28 + uVar16 & 0xffffffff) << 1) + iVar23) -
                            (int)(short)uVar3) * iVar12 + (unsigned int)uVar3 * 0x10000) * fVar9;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
      uVar17 = uVar17 + 1;
      puVar26 = puVar26 + 1;
    } while ((unsigned __int64)uVar17 < (uVar28 & 0xffffffff));
    uVar25 = uVar25 & 0xffffffff;
    uVar20 = uVar21;
  }
  uVar30 = (unsigned __int64)uVar1;
  uVar27 = (uVar20 & 0xffffffff) >> 0x10;
  if (uVar30 <= uVar27) {
    uVar27 = uVar30;
  }
  if ((uVar27 != 0) && (iVar23 = 0, (uVar28 & 0xffffffff) != 0)) {
    puVar26 = param_4 + -1;
    do {
      iVar12 = iVar29 * (int)uVar27 + iVar23;
      iVar23 = iVar23 + 1;
      puVar26 = puVar26 + 1;
      *puVar26 = *(unsigned short *)(iVar12 * 2 + iVar22);
      uVar28 = uVar28 - 1;
    } while (uVar28 != 0);
  }
  uVar31 = uVar31 + uVar24;
  *(int *)(param_4 + 0x10) = (int)uVar20 - (int)(uVar27 << 0x10);
  *(short *)((int)param_1 + 0xe) = *(short *)((int)param_1 + 0xe) - (short)uVar27;
  *(short *)((int)param_2 + 0xe) = (short)uVar31 + (short)*(unsigned int *)(param_4 + 0xe);
  if (uVar27 == uVar30) {
    iVar22 = 0;
  }
  else {
    iVar22 = *(int *)(param_4 + 0xc) + (int)uVar27;
  }
  *(int *)(param_4 + 0xc) = iVar22;
  if ((uVar31 & 0xffffffff) == (uVar25 & 0xffffffff)) {
    uVar10 = 0x2d;
  }
  else {
    uVar10 = 0x2b;
    *(int *)(param_4 + 0xe) = (int)uVar31 + *(int *)(param_4 + 0xe);
  }
  return uVar10;
}

