#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int fStack_168;
extern int fn_82A6E650();
extern int fn_82A70900();
extern int fn_82A7C8B8();
extern int fn_82A7C958();
extern int fn_82E6BD90();
extern int fn_82F655D8();
extern int fn_82F691F0();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int iStack_120;
extern unsigned int iStack_160;
extern unsigned int iStack_164;
extern unsigned int lbl_8200D8DC;
extern unsigned int lbl_82015618;
extern unsigned int lbl_820A80B0;
extern unsigned int lbl_820A80B4;
extern unsigned int lbl_820A80B8;
extern unsigned int uStack_150;
extern unsigned int uStack_16c;
extern unsigned int uStack_170;
extern unsigned int uStack_cc;
extern unsigned int uStack_d0;


/* WARNING: Removing unreachable block (ram,0x82a7dbc4) */
/* WARNING: Removing unreachable block (ram,0x82a7dbd0) */
/* WARNING: Removing unreachable block (ram,0x82a7db4c) */
/* WARNING: Removing unreachable block (ram,0x82a7db58) */
/* WARNING: Removing unreachable block (ram,0x82a7dad4) */
/* WARNING: Removing unreachable block (ram,0x82a7dae0) */
/* WARNING: Removing unreachable block (ram,0x82a7d6a4) */
/* WARNING: Removing unreachable block (ram,0x82a7d6b0) */
/* WARNING: Removing unreachable block (ram,0x82a7d470) */
/* WARNING: Removing unreachable block (ram,0x82a7d47c) */
/* WARNING: Removing unreachable block (ram,0x82a7d568) */
/* WARNING: Removing unreachable block (ram,0x82a7d574) */
/* WARNING: Removing unreachable block (ram,0x82a7d4ec) */
/* WARNING: Removing unreachable block (ram,0x82a7d4f8) */
/* WARNING: Removing unreachable block (ram,0x82a7dc3c) */
/* WARNING: Removing unreachable block (ram,0x82a7dc48) */
/* WARNING: Removing unreachable block (ram,0x82a7d750) */
/* WARNING: Removing unreachable block (ram,0x82a7df98) */
/* WARNING: Removing unreachable block (ram,0x82a7dfa4) */
/* WARNING: Removing unreachable block (ram,0x82a7dfb4) */
/* WARNING: Removing unreachable block (ram,0x82a7dfc0) */
/* WARNING: Removing unreachable block (ram,0x82a7dfec) */
/* WARNING: Removing unreachable block (ram,0x82a7dfcc) */
/* WARNING: Removing unreachable block (ram,0x82a7dfd8) */
/* WARNING: Removing unreachable block (ram,0x82a7d5e4) */
/* WARNING: Removing unreachable block (ram,0x82a7d5f0) */
/* WARNING: Removing unreachable block (ram,0x82a7dcfc) */
/* WARNING: Removing unreachable block (ram,0x82a7dd08) */

void fn_82A7D0F8(unsigned __int64 param_1,unsigned __int64 param_2)

{
  short sVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  float *pfVar5;
  int iVar6;
  float fVar7;
  int iVar8;
  int *piVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  float *pfVar14;
  __int64 lVar15;
  unsigned int uVar17;
  int *piVar18;
  float *pfVar19;
  __int64 lVar16;
  unsigned __int64 uVar20;
  int iVar21;
  int iVar22;
  unsigned __int64 uVar23;
  float *pfVar24;
  int iVar25;
  float *pfVar26;
  int iVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  unsigned __int64 uVar31;
  double dVar32;
  unsigned int uStack_170;
  unsigned int uStack_16c;
  float fStack_168;
  int iStack_164;
  int iStack_160;
  __int64 lStack_158;
  unsigned int uStack_150;
  __int64 lStack_148;
  float *pfStack_140;
  __int64 lStack_138;
  __int64 lStack_130;
  __int64 lStack_128;
  int iStack_120;
  __int64 lStack_118;
  __int64 lStack_110;
  __int64 lStack_108;
  __int64 lStack_100;
  __int64 lStack_f8;
  __int64 lStack_f0;
  __int64 lStack_e8;
  __int64 lStack_e0;
  __int64 lStack_d8;
  unsigned int uStack_d0;
  unsigned int uStack_cc;
  __int64 lStack_c0;
  
  pfVar5 = (float *)fn_82F6A548();
  piVar9 = (int *)param_2;
  iStack_164 = *piVar9;
  iVar27 = 0;
  iStack_120 = piVar9[3];
  iStack_160 = piVar9[1];
  uStack_150 = piVar9[0x10];
  iVar21 = 0;
  iVar22 = 0;
  iVar13 = piVar9[5];
  pfVar24 = (float *)piVar9[4];
  iVar2 = piVar9[0xe];
  uStack_170 = 0;
  if (piVar9[0x2b] == 0) {
    iVar25 = 0;
  }
  else {
    iVar25 = piVar9[0x2c];
  }
  if (((int)pfVar5[0x38] < 1) || (*(short *)((int)piVar9 + 0x76) < 1)) {
    fn_82F6A594(0xffffffff80040002);
  }
  else {
    if (iVar25 != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(iVar25,0,100);
    }
    uStack_16c = 0;
    uStack_d0 = ((int)pfVar5[0x38] << 6) / (int)*(short *)((int)piVar9 + 0x76);
    uVar3 = uStack_d0;
    while (1 < uVar3) {
      uStack_16c = uStack_16c + 1;
      uVar3 = uStack_d0 >> (uStack_16c & 0x3f);
    }
    lVar15 = 0;
    uVar3 = (int)pfVar5[0x40] / (int)pfVar5[0x38];
    uVar4 = uVar3;
    while (1 < uVar4) {
      lVar15 = lVar15 + 1;
      uVar4 = uVar3 >> ((unsigned int)lVar15 & 0x3f);
    }
    lVar15 = lVar15 * 0x74 + (unsigned __int64)(unsigned int)pfVar5[0x56];
    uVar17 = 0;
    uVar4 = uVar3;
    while (1 < uVar4) {
      uVar17 = uVar17 + 1;
      uVar4 = uVar3 >> (uVar17 & 0x3f);
    }
    fVar12 = pfVar5[0x4d];
    uVar20 = CONCAT44(uStack_d0,uStack_16c);
    uVar3 = *(unsigned int *)(uVar17 * 4 + (int)pfVar5[0x55]);
    fStack_168 = fVar12;
    uStack_cc = uStack_16c;
    fn_82A7C958(pfVar5,param_2,fVar12,lVar15,uVar20,(unsigned __int64)uVar3 << 0x20);
    fVar7 = pfVar5[0x42];
    fn_82E6BD90(0,&uStack_170,fVar7,lVar15,uVar20,(unsigned __int64)uVar3 << 0x20);
    piVar18 = (int *)((int)fVar12 + 4);
    iVar25 = *(int *)((int)fVar12 + 4);
    while (iVar25 < 1) {
      piVar18 = piVar18 + 1;
      iVar21 = iVar21 + 1;
      iVar25 = *piVar18;
    }
    uVar23 = (unsigned __int64)uStack_170;
    pfStack_140 = (float *)&lbl_820A80B0;
    if (0 < (int)fVar7) {
      dVar30 = (double)*pfVar5;
      iVar25 = uStack_170 * 4;
      pfVar26 = (float *)(iVar2 + -4);
      dVar32 = (double)lbl_8200D8DC;
      uVar31 = lbl_82015618;
      do {
        fVar7 = lbl_820A80B4;
        fVar12 = pfVar5[0x87];
        fVar11 = (float)((int)pfVar5[0x88] * 0x19660d + 0x3c6ef35f);
        pfVar5[0x88] = fVar11;
        fVar11 = (float)(((int)fVar11 >> 4) + ((int)fVar11 >> 2));
        pfVar5[0x87] = fVar11;
        lStack_158 = (__int64)((int)fVar11 - (int)fVar12);
        lStack_148 = (__int64)(int)(*(int *)(iVar25 + iStack_160) - uStack_150);
        dVar29 = (double)((float)lStack_158 * fVar7 * pfVar5[0x49]);
        dVar28 = (double)fn_82F655D8(uVar31,(double)(float)((double)lStack_148 * dVar32));
        iVar27 = iVar27 + 1;
        pfVar26 = pfVar26 + 1;
        *pfVar26 = (float)((double)(float)((double)(float)dVar28 * dVar29) * dVar30);
      } while (iVar27 < (int)pfVar5[0x42]);
    }
    iVar8 = iStack_164;
    fVar12 = pfVar5[0x65];
    dVar30 = (double)lbl_820A80B8;
    iVar25 = (int)lVar15;
    if (iVar27 < (int)fVar12) {
      do {
        iVar6 = fn_82E6BD90(iVar27,&uStack_170,fVar12,lVar15,uVar20,(unsigned __int64)uVar3 << 0x20);
        uVar23 = (unsigned __int64)uStack_170;
        dVar32 = (double)fn_82A70900(pfVar5,piVar9,uVar23);
        if (iVar27 < iVar6) {
          if (3 < iVar6 - iVar27) {
            pfVar14 = pfVar5 + 0x87;
            piVar18 = (int *)((iVar22 + 2) * 4 + iVar8);
            pfVar26 = (float *)((iVar27 + 2) * 4 + iVar2);
            do {
              fVar12 = *pfVar14;
              fVar7 = (float)((int)pfVar5[0x88] * 0x19660d + 0x3c6ef35f);
              pfVar5[0x88] = fVar7;
              fVar7 = (float)(((int)fVar7 >> 4) + ((int)fVar7 >> 2));
              *pfVar14 = fVar7;
              lStack_148 = (__int64)piVar18[-2];
              lStack_158 = (__int64)((int)fVar7 - (int)fVar12);
              pfVar26[-2] = (float)((double)(float)((double)lStack_158 * dVar30 + (double)lStack_148
                                                   ) * dVar32);
              fVar12 = *pfVar14;
              fVar7 = (float)((int)pfVar5[0x88] * 0x19660d + 0x3c6ef35f);
              pfVar5[0x88] = fVar7;
              fVar7 = (float)(((int)fVar7 >> 4) + ((int)fVar7 >> 2));
              *pfVar14 = fVar7;
              lStack_130 = (__int64)piVar18[-1];
              lStack_d8 = (__int64)((int)fVar7 - (int)fVar12);
              pfVar26[-1] = (float)((double)(float)((double)lStack_d8 * dVar30 + (double)lStack_130)
                                   * dVar32);
              fVar12 = *pfVar14;
              fVar7 = (float)((int)pfVar5[0x88] * 0x19660d + 0x3c6ef35f);
              pfVar5[0x88] = fVar7;
              fVar7 = (float)(((int)fVar7 >> 4) + ((int)fVar7 >> 2));
              *pfVar14 = fVar7;
              lStack_118 = (__int64)((int)fVar7 - (int)fVar12);
              lStack_110 = (__int64)*piVar18;
              *pfVar26 = (float)((double)(float)((double)lStack_118 * dVar30 + (double)lStack_110) *
                                dVar32);
              fVar12 = *pfVar14;
              fVar7 = (float)((int)pfVar5[0x88] * 0x19660d + 0x3c6ef35f);
              pfVar5[0x88] = fVar7;
              fVar7 = (float)(((int)fVar7 >> 4) + ((int)fVar7 >> 2));
              *pfVar14 = fVar7;
              lStack_108 = (__int64)((int)fVar7 - (int)fVar12);
              lStack_e8 = (__int64)piVar18[1];
              pfVar26[1] = (float)((double)(float)((double)lStack_108 * dVar30 + (double)lStack_e8)
                                  * dVar32);
              iVar27 = iVar27 + 4;
              iVar22 = iVar22 + 4;
              piVar18 = piVar18 + 4;
              pfVar26 = pfVar26 + 4;
            } while (iVar27 < iVar6 + -3);
          }
          if (iVar27 < iVar6) {
            iVar6 = iVar6 - iVar27;
            piVar18 = (int *)(iVar22 * 4 + iVar8);
            pfVar26 = (float *)(iVar27 * 4 + iVar2);
            iVar22 = iVar6 + iVar22;
            iVar27 = iVar6 + iVar27;
            do {
              fVar12 = pfVar5[0x87];
              fVar7 = (float)((int)pfVar5[0x88] * 0x19660d + 0x3c6ef35f);
              pfVar5[0x88] = fVar7;
              fVar7 = (float)(((int)fVar7 >> 4) + ((int)fVar7 >> 2));
              pfVar5[0x87] = fVar7;
              lStack_f8 = (__int64)((int)fVar7 - (int)fVar12);
              lStack_128 = (__int64)*piVar18;
              *pfVar26 = (float)((double)(float)((double)lStack_f8 * dVar30 + (double)lStack_128) *
                                dVar32);
              piVar18 = piVar18 + 1;
              pfVar26 = pfVar26 + 1;
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
          }
        }
        if (*(int *)((int)((uVar23 + 1 & 0xffffffff) << 2) + iVar25) <=
            (iVar27 + 1 << (uStack_16c & 0x3f)) >> 6) {
          uVar23 = uVar23 + 1;
          uStack_170 = (unsigned int)uVar23;
        }
        piVar18 = (int *)((iVar21 + 1) * 4 + (int)fStack_168);
        iVar6 = *piVar18;
        while (iVar6 <= iVar27) {
          piVar18 = piVar18 + 1;
          iVar21 = iVar21 + 1;
          iVar6 = *piVar18;
        }
        fVar12 = pfVar5[0x65];
      } while (iVar27 < (int)fVar12);
    }
    fVar12 = pfVar5[0x43];
    if (iVar27 < (int)fVar12) {
      iVar13 = iVar13 - (int)pfVar24;
      do {
        if (*(char *)(iStack_120 + iVar21) == '\x01') {
          dVar32 = (double)fn_82A6E650(*(unsigned int *)(iVar13 + (int)pfVar24));
          dVar32 = (double)(float)(dVar32 * (double)*pfVar24);
          pfVar26 = (float *)((iVar21 + 1) * 4 + (int)fStack_168);
          fVar12 = *pfVar26;
          if ((int)pfVar5[0x43] <= (int)*pfVar26) {
            fVar12 = pfVar5[0x43];
          }
          if (iVar27 < (int)fVar12) {
            dVar28 = (double)pfStack_140[1];
            do {
              dVar29 = (double)fn_82A7C8B8((unsigned __int64)
                                             *(unsigned int *)((int)((uVar23 & 0xffffffff) << 2) +
                                                      iStack_160) - (unsigned __int64)uStack_150);
              dVar29 = (double)(float)(dVar29 * dVar32);
              iVar8 = fn_82E6BD90(iVar27,&uStack_170,fVar12,lVar15,uVar20,(unsigned __int64)uVar3 << 0x20)
              ;
              if (iVar27 < iVar8) {
                if (3 < iVar8 - iVar27) {
                  pfVar19 = pfVar5 + 0x87;
                  pfVar14 = (float *)(iVar27 * 4 + iVar2 + -4);
                  do {
                    iVar27 = iVar27 + 4;
                    fVar7 = *pfVar19;
                    fVar11 = (float)((int)pfVar5[0x88] * 0x19660d + 0x3c6ef35f);
                    pfVar5[0x88] = fVar11;
                    fVar11 = (float)(((int)fVar11 >> 4) + ((int)fVar11 >> 2));
                    *pfVar19 = fVar11;
                    lStack_128 = (__int64)((int)fVar11 - (int)fVar7);
                    pfVar14[1] = (float)((double)(float)((double)lStack_128 * dVar28) * dVar29);
                    fVar11 = (float)((int)pfVar5[0x88] * 0x19660d + 0x3c6ef35f);
                    fVar7 = *pfVar19;
                    pfVar5[0x88] = fVar11;
                    fVar11 = (float)(((int)fVar11 >> 4) + ((int)fVar11 >> 2));
                    *pfVar19 = fVar11;
                    lStack_f8 = (__int64)((int)fVar11 - (int)fVar7);
                    pfVar14[2] = (float)((double)(float)((double)lStack_f8 * dVar28) * dVar29);
                    fVar7 = *pfVar19;
                    fVar11 = (float)((int)pfVar5[0x88] * 0x19660d + 0x3c6ef35f);
                    pfVar5[0x88] = fVar11;
                    fVar11 = (float)(((int)fVar11 >> 4) + ((int)fVar11 >> 2));
                    *pfVar19 = fVar11;
                    lStack_e8 = (__int64)((int)fVar11 - (int)fVar7);
                    pfVar14[3] = (float)((double)(float)((double)lStack_e8 * dVar28) * dVar29);
                    fVar7 = *pfVar19;
                    fVar11 = (float)((int)pfVar5[0x88] * 0x19660d + 0x3c6ef35f);
                    pfVar5[0x88] = fVar11;
                    fVar11 = (float)(((int)fVar11 >> 4) + ((int)fVar11 >> 2));
                    *pfVar19 = fVar11;
                    lStack_108 = (__int64)((int)fVar11 - (int)fVar7);
                    pfVar14 = pfVar14 + 4;
                    *pfVar14 = (float)((double)(float)((double)lStack_108 * dVar28) * dVar29);
                  } while (iVar27 < iVar8 + -3);
                  uVar20 = CONCAT44(uStack_d0,uStack_cc);
                }
                if (iVar27 < iVar8) {
                  iVar8 = iVar8 - iVar27;
                  pfVar14 = (float *)(iVar27 * 4 + iVar2 + -4);
                  iVar27 = iVar8 + iVar27;
                  do {
                    fVar7 = pfVar5[0x87];
                    fVar11 = (float)((int)pfVar5[0x88] * 0x19660d + 0x3c6ef35f);
                    pfVar5[0x88] = fVar11;
                    fVar11 = (float)(((int)fVar11 >> 4) + ((int)fVar11 >> 2));
                    pfVar5[0x87] = fVar11;
                    lStack_110 = (__int64)((int)fVar11 - (int)fVar7);
                    pfVar14 = pfVar14 + 1;
                    *pfVar14 = (float)((double)(float)((double)lStack_110 * dVar28) * dVar29);
                    iVar8 = iVar8 + -1;
                  } while (iVar8 != 0);
                }
              }
              uVar23 = (unsigned __int64)uStack_170;
              if (*(int *)((int)((uVar23 + 1 & 0xffffffff) << 2) + iVar25) <=
                  (iVar27 + 1 << (uStack_16c & 0x3f)) >> 6) {
                uVar23 = uVar23 + 1;
                uStack_170 = (unsigned int)uVar23;
              }
            } while (iVar27 < (int)fVar12);
          }
          pfVar24 = pfVar24 + 1;
        }
        else {
          iVar6 = fn_82E6BD90(iVar27,&uStack_170,fVar12,lVar15,uVar20,(unsigned __int64)uVar3 << 0x20);
          iVar8 = iVar21 * 4 + (int)fStack_168;
          pfVar26 = (float *)(iVar8 + 4);
          iVar8 = *(int *)(iVar8 + 4);
          if (iVar8 < iVar6) {
            iVar6 = iVar8;
          }
          uVar23 = (unsigned __int64)uStack_170;
          dVar32 = (double)fn_82A70900(pfVar5,piVar9,uVar23);
          if (iVar27 < iVar6) {
            if (3 < iVar6 - iVar27) {
              pfVar19 = pfVar5 + 0x87;
              piVar18 = (int *)((iVar22 + 2) * 4 + iStack_164);
              pfVar14 = (float *)((iVar27 + 2) * 4 + iVar2);
              do {
                fVar12 = *pfVar19;
                fVar7 = (float)((int)pfVar5[0x88] * 0x19660d + 0x3c6ef35f);
                pfVar5[0x88] = fVar7;
                fVar7 = (float)(((int)fVar7 >> 4) + ((int)fVar7 >> 2));
                *pfVar19 = fVar7;
                lStack_118 = (__int64)((int)fVar7 - (int)fVar12);
                lStack_130 = (__int64)piVar18[-2];
                pfVar14[-2] = (float)((double)(float)((double)lStack_118 * dVar30 +
                                                     (double)lStack_130) * dVar32);
                fVar12 = *pfVar19;
                fVar7 = (float)((int)pfVar5[0x88] * 0x19660d + 0x3c6ef35f);
                pfVar5[0x88] = fVar7;
                fVar7 = (float)(((int)fVar7 >> 4) + ((int)fVar7 >> 2));
                *pfVar19 = fVar7;
                lStack_d8 = (__int64)((int)fVar7 - (int)fVar12);
                lStack_148 = (__int64)piVar18[-1];
                pfVar14[-1] = (float)((double)(float)((double)lStack_d8 * dVar30 +
                                                     (double)lStack_148) * dVar32);
                fVar12 = *pfVar19;
                fVar7 = (float)((int)pfVar5[0x88] * 0x19660d + 0x3c6ef35f);
                pfVar5[0x88] = fVar7;
                fVar7 = (float)(((int)fVar7 >> 4) + ((int)fVar7 >> 2));
                *pfVar19 = fVar7;
                lStack_158 = (__int64)((int)fVar7 - (int)fVar12);
                lStack_c0 = (__int64)*piVar18;
                *pfVar14 = (float)((double)(float)((double)lStack_158 * dVar30 + (double)lStack_c0)
                                  * dVar32);
                fVar12 = *pfVar19;
                fVar7 = (float)((int)pfVar5[0x88] * 0x19660d + 0x3c6ef35f);
                pfVar5[0x88] = fVar7;
                fVar7 = (float)(((int)fVar7 >> 4) + ((int)fVar7 >> 2));
                *pfVar19 = fVar7;
                lStack_100 = (__int64)((int)fVar7 - (int)fVar12);
                lStack_f0 = (__int64)piVar18[1];
                pfVar14[1] = (float)((double)(float)((double)lStack_100 * dVar30 + (double)lStack_f0
                                                    ) * dVar32);
                iVar27 = iVar27 + 4;
                iVar22 = iVar22 + 4;
                piVar18 = piVar18 + 4;
                pfVar14 = pfVar14 + 4;
              } while (iVar27 < iVar6 + -3);
            }
            if (iVar27 < iVar6) {
              iVar6 = iVar6 - iVar27;
              piVar18 = (int *)(iVar22 * 4 + iStack_164);
              pfVar14 = (float *)(iVar27 * 4 + iVar2);
              iVar22 = iVar6 + iVar22;
              iVar27 = iVar6 + iVar27;
              do {
                fVar12 = pfVar5[0x87];
                fVar7 = (float)((int)pfVar5[0x88] * 0x19660d + 0x3c6ef35f);
                pfVar5[0x88] = fVar7;
                fVar7 = (float)(((int)fVar7 >> 4) + ((int)fVar7 >> 2));
                pfVar5[0x87] = fVar7;
                lStack_e0 = (__int64)((int)fVar7 - (int)fVar12);
                lStack_138 = (__int64)*piVar18;
                *pfVar14 = (float)((double)(float)((double)lStack_e0 * dVar30 + (double)lStack_138)
                                  * dVar32);
                piVar18 = piVar18 + 1;
                pfVar14 = pfVar14 + 1;
                iVar6 = iVar6 + -1;
              } while (iVar6 != 0);
            }
          }
        }
        if (*(int *)((int)((uVar23 + 1 & 0xffffffff) << 2) + iVar25) <=
            (iVar27 + 1 << (uStack_16c & 0x3f)) >> 6) {
          uVar23 = uVar23 + 1;
          uStack_170 = (unsigned int)uVar23;
        }
        fVar12 = *pfVar26;
        while ((int)fVar12 <= iVar27) {
          pfVar26 = pfVar26 + 1;
          iVar21 = iVar21 + 1;
          fVar12 = *pfVar26;
        }
        fVar12 = pfVar5[0x43];
      } while (iVar27 < (int)fVar12);
    }
    sVar1 = *(short *)((int)piVar9 + 0x76);
    if (iVar27 < sVar1) {
      lVar16 = (uVar23 & 0x3fffffff) * 4;
      lVar15 = lVar16 + lVar15;
      iVar13 = *(int *)((int)lVar16 + iVar25);
      while (((int)fVar12 + -1 << (uStack_16c & 0x3f)) >> 6 < iVar13) {
        lVar15 = lVar15 + -4;
        uVar23 = uVar23 - 1;
        iVar13 = *(int *)lVar15;
      }
      dVar30 = (double)fn_82A70900(pfVar5,piVar9,uVar23);
      fVar7 = pfStack_140[1];
      fVar12 = (float)(dVar30 * (double)*pfStack_140);
      if (3 < sVar1 - iVar27) {
        pfVar26 = pfVar5 + 0x87;
        pfVar24 = (float *)(iVar27 * 4 + iVar2 + -4);
        do {
          iVar27 = iVar27 + 4;
          fVar11 = *pfVar26;
          fVar10 = (float)((int)pfVar5[0x88] * 0x19660d + 0x3c6ef35f);
          pfVar5[0x88] = fVar10;
          fVar10 = (float)(((int)fVar10 >> 4) + ((int)fVar10 >> 2));
          *pfVar26 = fVar10;
          lStack_138 = (__int64)((int)fVar10 - (int)fVar11);
          pfVar24[1] = (float)lStack_138 * fVar7 * fVar12;
          fVar11 = *pfVar26;
          fVar10 = (float)((int)pfVar5[0x88] * 0x19660d + 0x3c6ef35f);
          pfVar5[0x88] = fVar10;
          fVar10 = (float)(((int)fVar10 >> 4) + ((int)fVar10 >> 2));
          *pfVar26 = fVar10;
          lStack_e0 = (__int64)((int)fVar10 - (int)fVar11);
          pfVar24[2] = (float)lStack_e0 * fVar7 * fVar12;
          fVar11 = *pfVar26;
          fVar10 = (float)((int)pfVar5[0x88] * 0x19660d + 0x3c6ef35f);
          pfVar5[0x88] = fVar10;
          fVar10 = (float)(((int)fVar10 >> 4) + ((int)fVar10 >> 2));
          *pfVar26 = fVar10;
          lStack_f0 = (__int64)((int)fVar10 - (int)fVar11);
          pfVar24[3] = (float)lStack_f0 * fVar7 * fVar12;
          fVar11 = *pfVar26;
          fVar10 = (float)((int)pfVar5[0x88] * 0x19660d + 0x3c6ef35f);
          pfVar5[0x88] = fVar10;
          fVar10 = (float)(((int)fVar10 >> 4) + ((int)fVar10 >> 2));
          *pfVar26 = fVar10;
          lStack_100 = (__int64)((int)fVar10 - (int)fVar11);
          pfVar24 = pfVar24 + 4;
          *pfVar24 = (float)lStack_100 * fVar7 * fVar12;
        } while (iVar27 < sVar1 + -3);
      }
      if (iVar27 < sVar1) {
        iVar13 = sVar1 - iVar27;
        pfVar24 = (float *)(iVar27 * 4 + iVar2 + -4);
        do {
          fVar11 = pfVar5[0x87];
          fVar10 = (float)((int)pfVar5[0x88] * 0x19660d + 0x3c6ef35f);
          pfVar5[0x88] = fVar10;
          fVar10 = (float)(((int)fVar10 >> 4) + ((int)fVar10 >> 2));
          pfVar5[0x87] = fVar10;
          lStack_138 = (__int64)((int)fVar10 - (int)fVar11);
          pfVar24 = pfVar24 + 1;
          *pfVar24 = (float)lStack_138 * fVar7 * fVar12;
          iVar13 = iVar13 + -1;
        } while (iVar13 != 0);
      }
    }
    fn_82F6A594(0);
  }
  return;
}

