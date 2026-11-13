typedef unsigned char bool;
#define true 1
#define false 0
#define NAN(x) ((x) != (x))
extern double _seed_nan;
extern unsigned int *auStack_f8;
extern unsigned int fStack_c4;
extern unsigned int fStack_c8;
extern unsigned int fStack_cc;
extern unsigned int fStack_d0;
extern int fn_82AA66A8();
extern int fn_82AD1270();
extern int fn_82AD17B0();
extern int fn_82AEFCD8();
extern int fn_82AF4BA8();
extern int fn_82B86888();
extern unsigned int lbl_821AAD20;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

unsigned __int64 fn_82AF9290(unsigned __int64 param_1,int *param_2,int *param_3,int *param_4)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  float fVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  unsigned __int64 uVar7;
  unsigned int *puVar8;
  __int64 lVar9;
  float *pfVar10;
  float fVar11;
  unsigned __int64 uVar12;
  unsigned int uVar14;
  unsigned __int64 uVar13;
  unsigned int uVar16;
  __int64 lVar15;
  unsigned int uVar17;
  unsigned int uVar18;
  unsigned __int64 uVar19;
  unsigned int uVar20;
  unsigned int uVar21;
  unsigned __int64 uVar22;
  int iVar23;
  __int64 lVar24;
  unsigned __int64 uVar25;
  double dVar26;
  float afStack_110 [2];
  unsigned int *apuStack_108 [4];
  unsigned int auStack_f8 [4];
  int *apiStack_e8 [6];
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float afStack_c0 [48];
  
  puVar8 = (unsigned int *)*param_2;
  puVar1 = (unsigned int *)*param_3;
  puVar2 = (unsigned int *)*param_4;
  uVar21 = puVar8[3];
  uVar14 = puVar1[3];
  uVar16 = puVar2[3];
  uVar20 = *(unsigned int *)(uVar21 + 8) >> 7 & 0x7f;
  if ((uVar20 == 0x7d) || (bVar5 = false, uVar20 == 0x7c)) {
    bVar5 = true;
  }
  if (bVar5) {
    uVar20 = *puVar8;
    fn_82AF4BA8(param_1,uVar21,uVar20 >> 0x19 & 7,uVar20 >> 5 & 0xff,uVar20 & 0x1f,afStack_c0);
    apuStack_108[0] = puVar8;
    auStack_f8[0] = uVar21;
    apiStack_e8[0] = param_2;
  }
  uVar20 = (unsigned int)bVar5;
  uVar21 = *(unsigned int *)(uVar14 + 8) >> 7 & 0x7f;
  if ((uVar21 == 0x7d) || (bVar6 = false, uVar21 == 0x7c)) {
    bVar6 = true;
  }
  if (bVar6) {
    uVar21 = *puVar1;
    fn_82AF4BA8(param_1,uVar14,uVar21 >> 0x19 & 7,uVar21 >> 5 & 0xff,uVar21 & 0x1f,
                  afStack_c0 + uVar20 * 4);
    apuStack_108[bVar5] = puVar1;
    auStack_f8[bVar5] = uVar14;
    uVar20 = uVar20 + 1;
    apiStack_e8[bVar5] = param_3;
  }
  uVar21 = *(unsigned int *)(uVar16 + 8) >> 7 & 0x7f;
  if ((uVar21 == 0x7d) || (bVar5 = false, uVar21 == 0x7c)) {
    bVar5 = true;
  }
  uVar21 = uVar20;
  if (bVar5) {
    uVar21 = *puVar2;
    fn_82AF4BA8(param_1,uVar16,uVar21 >> 0x19 & 7,uVar21 >> 5 & 0xff,uVar21 & 0x1f,
                  afStack_c0 + uVar20 * 4);
    apuStack_108[uVar20] = puVar2;
    auStack_f8[uVar20] = uVar16;
    uVar21 = uVar20 + 1;
    apiStack_e8[uVar20] = param_4;
  }
  if (uVar21 != 1) {
    uVar14 = 0;
    uVar16 = 0;
    lVar24 = 3;
    do {
      uVar17 = uVar16 + 3;
      uVar20 = uVar16 >> 3;
      uVar18 = uVar16 & 0x1f;
      uVar16 = uVar16 + 4;
      uVar14 = ((2 << (uVar17 & 0x1f)) - 1U & *(unsigned int *)((int)afStack_110 + (uVar20 & 0x1ffffffc)) &
               -1 << uVar18) >> uVar18 | uVar14;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
    if ((uVar14 & 5) == 5) {
      return 0;
    }
    uVar16 = 0;
    if (uVar21 != 0) {
      lVar24 = 0;
      dVar26 = (double)lbl_821AAD20;
      do {
        iVar23 = (int)lVar24;
        if ((*(unsigned int *)(*(int *)((int)auStack_f8 + iVar23) + 8) & 0x3f80) == 16000) {
          lVar9 = 0;
          uVar18 = 0;
          bVar6 = true;
          bVar5 = false;
          fStack_d0 = (float)dVar26;
          fStack_cc = (float)dVar26;
          uVar20 = **(unsigned int **)((int)apuStack_108 + iVar23) >> 0x19;
          uVar19 = (unsigned __int64)uVar20 & 7;
          fStack_c8 = (float)dVar26;
          fStack_c4 = (float)dVar26;
          uVar13 = (unsigned __int64)(unsigned int)(1 << (int)uVar19) - 1;
          if (uVar13 != 0) {
            pfVar10 = &fStack_d0;
            do {
              fVar11 = -(_seed_nan);
              afStack_110[0] = -(_seed_nan);
              lVar15 = 0;
              uVar25 = uVar19;
              if ((uVar20 & 7) != 0) {
                do {
                  if ((((unsigned int)(1 << ((unsigned int)lVar15 & 0x3f)) & uVar13) != 0) &&
                     (fVar3 = *(float *)((int)afStack_c0 +
                                        (int)((lVar24 + lVar15 & 0xffffffffU) << 2)),
                     (unsigned int)fVar3 <= (unsigned int)fVar11)) {
                    fVar11 = fVar3;
                  }
                  lVar15 = lVar15 + 1;
                  uVar25 = uVar25 - 1;
                  afStack_110[0] = fVar11;
                } while (uVar25 != 0);
              }
              lVar15 = 0;
              if ((uVar20 & 7) != 0) {
                uVar17 = 0;
                uVar25 = uVar19;
                do {
                  uVar12 = (unsigned __int64)(unsigned int)(1 << ((unsigned int)lVar15 & 0x3f));
                  if (((uVar12 & uVar13) != 0) &&
                     (*(float *)((int)afStack_c0 + (int)((lVar24 + lVar15 & 0xffffffffU) << 2)) ==
                      afStack_110[0])) {
                    uVar13 = uVar13 - uVar12;
                    uVar18 = uVar18 & ~(3 << (uVar17 & 0x3f)) | (int)lVar9 << (uVar17 & 0x3f);
                  }
                  lVar15 = lVar15 + 1;
                  uVar17 = uVar17 + 2;
                  uVar25 = uVar25 - 1;
                } while (uVar25 != 0);
              }
              *pfVar10 = afStack_110[0];
              if ((double)afStack_110[0] <= dVar26) {
                if ((double)afStack_110[0] < dVar26) {
                  bVar5 = true;
                }
              }
              else {
                bVar6 = false;
              }
              lVar9 = lVar9 + 1;
              pfVar10 = pfVar10 + 1;
            } while ((uVar13 & 0xffffffff) != 0);
          }
          uVar7 = fn_82B86888(param_1,lVar9,&fStack_d0,0);
          *(int *)((int)auStack_f8 + iVar23) = (int)uVar7;
          uVar22 = 0;
          if (((uVar14 & 4) != 0) && (uVar22 = 2, bVar5)) {
            if (!bVar6) {
                    /* WARNING: Subroutine does not return */
              fn_82AA66A8(param_1,0x12c0);
            }
            uVar22 = 6;
          }
          puVar8 = (unsigned int *)fn_82AD17B0(param_1,uVar7);
          *puVar8 = (unsigned int)(uVar19 << 0x19) | *puVar8 & 0xf1ffffff;
          fn_82AD1270(puVar8,uVar22);
          uVar20 = *puVar8;
          *(unsigned int **)((int)apuStack_108 + iVar23) = puVar8;
          *puVar8 = (uVar18 & 0xff) << 5 | uVar20 & 0xffffe01f;
        }
        uVar16 = uVar16 + 1;
        lVar24 = lVar24 + 4;
      } while (uVar16 < uVar21);
    }
    puVar8 = apuStack_108[0];
    if ((2 < uVar21) && ((*apuStack_108[2] & 0x18) != (*apuStack_108[1] & 0x18))) {
      if ((*apuStack_108[2] & 0x18) != (*apuStack_108[0] & 0x18)) {
        return 0;
      }
      apuStack_108[0] = apuStack_108[1];
      apuStack_108[1] = puVar8;
    }
    if (uVar21 != 0) {
      iVar23 = 0;
      do {
        iVar4 = *(int *)((int)auStack_f8 + iVar23);
        **(unsigned int **)((int)apiStack_e8 + iVar23) = *(unsigned int *)((int)apuStack_108 + iVar23);
        if ((*(unsigned int *)(iVar4 + 8) & 0x3f80) == 16000) {
          fn_82AEFCD8(iVar4);
          *(unsigned int *)(iVar4 + 8) = *(unsigned int *)(iVar4 + 8) | 0x1000000;
        }
        uVar21 = uVar21 - 1;
        iVar23 = iVar23 + 4;
      } while (uVar21 != 0);
    }
  }
  return 1;
}

