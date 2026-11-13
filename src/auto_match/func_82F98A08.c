extern int memset();
extern unsigned int lbl_82002AE0;


void fn_82F98A08(int param_1,unsigned int *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  unsigned short uVar9;
  unsigned int uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  unsigned __int64 uVar15;
  float fVar16;
  float *pfVar17;
  unsigned __int64 uVar18;
  float *pfVar19;
  unsigned __int64 uVar20;
  unsigned int uVar21;
  int iVar22;
  unsigned __int64 uVar23;
  unsigned int uVar24;
  unsigned int uVar25;
  unsigned __int64 uVar26;
  unsigned __int64 uVar27;
  float *pfVar28;
  float *pfVar29;
  
  fVar16 = lbl_82002AE0;
  uVar9 = *(unsigned short *)(param_2 + 3);
  fVar1 = *(float *)(param_1 + 0x10);
  fVar2 = *(float *)(param_1 + 0x30);
  fVar3 = *(float *)(param_1 + 0x34);
  uVar27 = (unsigned __int64)*(unsigned short *)((int)param_2 + 0xe);
  fVar4 = *(float *)(param_1 + 0x14);
  fVar5 = *(float *)(param_1 + 0xc);
  fVar6 = *(float *)(param_1 + 0x38);
  fVar14 = (float)(unsigned int)uVar9;
  if (*(int *)(param_1 + 0x20) == 0) {
    uVar21 = 0;
  }
  else {
    uVar24 = *(unsigned int *)(param_1 + 0x24);
    pfVar29 = *(float **)(param_1 + 0x1c);
    uVar10 = *(unsigned int *)(param_1 + 0x28);
    uVar25 = *param_2;
    pfVar28 = pfVar29 + uVar24;
    uVar26 = (unsigned __int64)*(unsigned int *)(param_1 + 0x20);
    do {
      uVar18 = 0;
      uVar20 = (unsigned __int64)uVar24;
      if (uVar27 != 0) {
        pfVar17 = (float *)(uVar25 - 4);
        fVar11 = fVar3;
        fVar12 = fVar6;
        fVar13 = fVar2;
        pfVar19 = pfVar28;
        do {
          uVar23 = uVar10 - uVar20;
          if ((uVar27 - uVar18 & 0xffffffff) <= (uVar23 & 0xffffffff)) {
            uVar23 = uVar27 - uVar18;
          }
          uVar18 = uVar23 + uVar18;
          uVar20 = uVar23 + uVar20;
          uVar15 = uVar23 & 0xffffffff;
          while (uVar15 != 0) {
            fVar11 = fVar11 + (fVar1 - fVar3) / fVar14;
            fVar7 = *pfVar19;
            fVar12 = fVar12 + (fVar5 - fVar6) / fVar14;
            fVar8 = pfVar17[1];
            fVar13 = fVar13 + (fVar4 - fVar2) / fVar14;
            *pfVar19 = fVar7 * fVar12 + fVar8;
            pfVar19 = pfVar19 + 1;
            pfVar17 = pfVar17 + 1;
            *pfVar17 = ((fVar16 - fVar11) * fVar8 + fVar7 * fVar11) * fVar13;
            uVar23 = uVar23 - 1;
            uVar15 = uVar23;
          }
          if ((uVar20 & 0xffffffff) == (unsigned __int64)uVar10) {
            uVar20 = 0;
            pfVar19 = pfVar29;
          }
        } while ((uVar18 & 0xffffffff) < uVar27);
      }
      uVar21 = (unsigned int)uVar20;
      uVar26 = uVar26 - 1;
      uVar25 = (unsigned int)uVar9 * 4 + uVar25;
      pfVar29 = pfVar29 + uVar10;
      pfVar28 = pfVar28 + uVar10;
    } while (uVar26 != 0);
  }
  *(unsigned int *)(param_1 + 0x24) = uVar21;
  if (*(char *)(param_1 + 0x3e) == '\0') {
    return;
  }
  uVar24 = param_2[1];
  if ((uVar24 & 8) == 0) {
                    /* WARNING: Subroutine does not return */
    memset(0,0,uVar27 << 2);
  }
  iVar22 = 0;
  for (; uVar24 != 0; uVar24 = uVar24 - 1 & uVar24) {
    iVar22 = iVar22 + 1;
  }
                    /* WARNING: Subroutine does not return */
  memset(((__int64)(iVar22 + -1) * (__int64)(int)(unsigned int)*(unsigned short *)(param_2 + 3) &
               0x3fffffffU) * 4 + (unsigned __int64)*param_2,0,uVar27 << 2);
}

