extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern unsigned int *auStack_118;
extern int fn_827888E8();
extern int fn_82788C30();
extern int fn_82788E48();
extern int fn_82788F20();
extern int fn_82789C08();
extern int fn_82789D68();
extern int fn_82789EF0();
extern int fn_82789FE0();
extern int fn_8278A1E0();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int iStack_e8;
extern unsigned int iStack_ec;
extern unsigned int iStack_f0;
extern unsigned int lbl_82005344;
extern unsigned int lbl_8200D898;
extern unsigned int lbl_820155B0;
extern unsigned int lbl_820155B4;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_100;
extern unsigned int uStack_108;
extern unsigned int uStack_10c;
extern unsigned int uStack_110;
extern unsigned int uStack_11c;
extern unsigned int uStack_120;
extern unsigned int uStack_c8;
extern unsigned int uStack_cc;
extern unsigned int uStack_d0;
extern unsigned int uStack_d8;
extern unsigned int uStack_dc;
extern unsigned int uStack_e0;
extern unsigned int uStack_f8;
extern unsigned int uStack_fc;


void fn_8278A2F0(unsigned __int64 param_1,unsigned __int64 param_2,int param_3)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  float fVar5;
  float fVar6;
  unsigned int *puVar7;
  char cVar11;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  __int64 lVar12;
  int iVar13;
  int iVar14;
  float *pfVar15;
  unsigned int *puVar16;
  unsigned int uVar19;
  unsigned __int64 uVar17;
  unsigned __int64 uVar18;
  int iVar20;
  unsigned int uVar21;
  unsigned int *puVar22;
  unsigned int uVar23;
  unsigned int uVar24;
  float *pfVar25;
  int *piVar26;
  unsigned int *puVar27;
  unsigned int *puVar28;
  unsigned int *puVar29;
  int iVar30;
  unsigned __int64 uVar31;
  unsigned __int64 uVar32;
  double dVar33;
  double extraout_f1;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  unsigned int uStack_120;
  unsigned int uStack_11c;
  unsigned int auStack_118;
  unsigned int uStack_110;
  unsigned int uStack_10c;
  unsigned int uStack_108;
  struct { unsigned int first; unsigned int second; } stack_pair_100;

  unsigned int uStack_f8;
  struct { int first; int second; } stack_pair_f0;

  int iStack_e8;
  struct { unsigned int first; unsigned int second; } stack_pair_e0;

  unsigned int uStack_d8;
  unsigned int uStack_d0;
  unsigned int uStack_cc;
  unsigned int uStack_c8;

  puVar7 = (unsigned int *)fn_82F6A548();
  puVar7[0x17] = 0;
  puVar22 = puVar7 + 0x17;
  dVar37 = extraout_f1;
  fn_82789EF0();
  dVar34 = (double)lbl_821AAD20;
  if (dVar37 < dVar34) {
    uVar23 = 0x90ffffff;
    if (param_3 == 0) {
      uVar23 = puVar7[0x1f] | 0x90000000;
      dVar37 = (double)(float)(dVar37 * (double)lbl_82005344);
    }
    uVar21 = 0;
    dVar35 = (double)(float)(ABS(dVar37) * (double)lbl_8200D898);
    if (puVar7[8] != 0) {
      iVar13 = 0;
      do {
        uVar24 = 0;
        puVar27 = (unsigned int *)(*(int *)((uVar21 >> 6 & 0x3fffffc) + puVar7[0xb]) +
                          (uVar21 & 0xff) * 0x3c);
        puVar28 = puVar27;
        do {
          if (((*(unsigned char *)((int)puVar27 + uVar24 + 0x34) & 1) == 0) &&
             ((*(unsigned int *)(*(int *)((*puVar28 >> 6 & 0x3fffffc) + puVar7[3]) + (*puVar28 & 0xff) * 0xc
                        + 8) & 0x20000000) == 0)) {
            cVar11 = fn_82789FE0(puVar7,iVar13 + uVar24);
            if ((puVar7[0xf] != 0) &&
               ((cVar11 == '\0' ||
                (uVar19 = puVar7[0xf] - 1, uVar4 = **(int **)puVar7[0x12] >> 2,
                uVar19 = *(int *)(*(int *)((uVar19 >> 4 & 0xffffffc) + (int)puVar7[0x12]) +
                                 (uVar19 & 0x3f) * 4) >> 2,
                *(int *)(*(int *)((uVar4 >> 6 & 0x3fffffc) + puVar7[0xb]) + (uVar4 & 0xff) * 0x3c +
                        0x38) !=
                *(int *)(*(int *)((uVar19 >> 6 & 0x3fffffc) + puVar7[0xb]) + (uVar19 & 0xff) * 0x3c
                        + 0x38))))) {
              puVar7[0x13] = 0;
              puVar29 = puVar7 + 0x13;
              pfVar25 = (float *)(*(int *)((*puVar28 >> 6 & 0x3fffffc) + puVar7[3]) +
                                 (*puVar28 & 0xff) * 0xc);
              if (cVar11 == '\0') {
                fn_827888E8(-dVar37,dVar35,puVar7);
                uStack_110 = uStack_120;
                uVar4 = *puVar7;
                uStack_10c = uStack_11c;
                auStack_118 = uVar4;
                uStack_108 = uVar23;
                fn_82789C08(puVar7,&uStack_110);
                fn_82789D68(puVar29,&auStack_118);
                uVar19 = **(unsigned int **)puVar7[0x12];
                *(unsigned int *)(((&lbl_820155B4)[uVar19 & 3] + (uVar19 >> 2 & 0xff) * 0xf + 10) * 4 +
                         *(int *)((uVar19 >> 8 & 0xfffffc) + puVar7[0xb])) = uVar4;
                uVar19 = *(unsigned int *)(*(int *)((puVar7[0xf] - 1 >> 4 & 0xffffffc) + puVar7[0x12]) +
                                  ((puVar7[0xf] - 1) * 4 & 0xfc));
                *(unsigned int *)(((uVar19 >> 2 & 0xff) * 0xf + (uVar19 & 3) + 10) * 4 +
                         *(int *)((uVar19 >> 8 & 0xfffffc) + puVar7[0xb])) = uVar4;
              }
              if (param_3 == 1) {
                uVar32 = 0;
                uVar4 = uVar23;
                if (puVar7[0xf] != 0) {
                  do {
                    uStack_f8 = uVar4;
                    uVar31 = uVar32 + 1;
                    uVar4 = *(int *)(*(int *)(((unsigned int)uVar32 >> 4 & 0xffffffc) + puVar7[0x12]) +
                                    ((unsigned int)((uVar32 & 0xffffffff) << 2) & 0xfc)) >> 2;
                    if ((uVar31 & 0xffffffff) < (unsigned __int64)puVar7[0xf]) {
                      do {
                        uVar19 = *(int *)(*(int *)(((unsigned int)uVar31 >> 4 & 0xffffffc) + puVar7[0x12]) +
                                         ((unsigned int)((uVar31 & 0xffffffff) << 2) & 0xfc)) >> 2;
                        if (*(int *)(*(int *)((uVar4 >> 6 & 0x3fffffc) + puVar7[0xb]) +
                                     (uVar4 & 0xff) * 0x3c + 0x38) !=
                            *(int *)(*(int *)((uVar19 >> 6 & 0x3fffffc) + puVar7[0xb]) +
                                     (uVar19 & 0xff) * 0x3c + 0x38)) break;
                        uVar31 = uVar31 + 1;
                      } while ((uVar31 & 0xffffffff) < (unsigned __int64)puVar7[0xf]);
                    }
                    fn_827888E8(dVar37,dVar35,puVar7);
                    uVar4 = *puVar7;
                    stack_pair_100.first = uStack_120;
                    stack_pair_100.second = uStack_11c;
                    auStack_118 = uVar4;
                    fn_82789C08(puVar7,&stack_pair_100.first);
                    fn_82789D68(puVar29,&auStack_118);
                    if ((uVar32 & 0xffffffff) < (uVar31 & 0xffffffff)) {
                      dVar36 = -dVar37;
                      do {
                        uVar19 = *(unsigned int *)(*(int *)(((unsigned int)uVar32 >> 4 & 0xffffffc) + puVar7[0x12])
                                          + ((unsigned int)((uVar32 & 0xffffffff) << 2) & 0xfc));
                        uVar17 = (unsigned __int64)(unsigned int)(&lbl_820155B4)[uVar19 & 3] |
                                 (unsigned __int64)uVar19 & 0xfffffffc;
                        uVar18 = (unsigned __int64)(unsigned int)(&lbl_820155B4)[uVar19 & 3] & 3;
                        lVar12 = (unsigned __int64)*(unsigned int *)(((unsigned int)uVar17 >> 8 & 0xfffffc) + puVar7[0xb])
                                 + (uVar17 >> 2 & 0xff) * 0x3c;
                        fn_82788C30(dVar36,puVar7,
                                      (unsigned __int64)*(unsigned int *)((*puVar28 >> 6 & 0x3fffffc) + puVar7[3])
                                      + ((unsigned __int64)*puVar28 & 0xff) * 0xc,lVar12,uVar18);
                        iVar30 = (int)uVar18;
                        iVar20 = iVar30 + (int)lVar12;
                        uVar32 = uVar32 + 2;
                        *(unsigned int *)((iVar30 + 3) * 4 + (int)lVar12) = uVar4;
                        *(unsigned char *)(iVar20 + 0x34) = *(unsigned char *)(iVar20 + 0x34) | 1;
                      } while ((uVar32 & 0xffffffff) < (uVar31 & 0xffffffff));
                    }
                    uVar32 = uVar31;
                    uVar4 = uStack_f8;
                  } while ((uVar31 & 0xffffffff) < (unsigned __int64)puVar7[0xf]);
                }
                while (2 < *puVar29) {
                  uVar4 = *puVar29;
                  uVar18 = (unsigned __int64)uVar4;
                  uVar32 = 0;
                  uVar31 = 0;
                  if (uVar18 != 0) {
                    uVar17 = uVar18;
                    dVar36 = dVar34;
                    do {
                      uVar19 = *(unsigned int *)(*(int *)(((unsigned int)uVar31 >> 4 & 0xffffffc) + puVar7[0x16]) +
                                        ((unsigned int)((uVar31 & 0xffffffff) << 2) & 0xfc));
                      pfVar15 = (float *)(*(int *)((uVar19 >> 6 & 0x3fffffc) + puVar7[3]) +
                                         (uVar19 & 0xff) * 0xc);
                      fVar5 = *pfVar25 - *pfVar15;
                      fVar6 = pfVar25[1] - pfVar15[1];
                      dVar33 = (double)SQRT(fVar6 * fVar6 + fVar5 * fVar5);
                      if (dVar36 < dVar33) {
                        uVar32 = uVar31;
                        dVar36 = dVar33;
                      }
                      uVar31 = uVar31 + 1;
                      uVar17 = uVar17 - 1;
                    } while (uVar17 != 0);
                  }
                  uVar19 = puVar7[0x16];
                  uVar17 = (uVar18 + uVar32) - 1;
                  trapWord(6,uVar18,0);
                  trapWord(6,uVar18,0);
                  uVar17 = uVar17 - (__int64)(int)((uVar17 & 0xffffffff) / uVar18) *
                                    (__int64)(int)uVar4;
                  uVar31 = (uVar32 + 1) -
                           (__int64)(int)((uVar32 + 1 & 0xffffffff) / uVar18) *
                           (__int64)(int)uVar4;
                  stack_pair_f0.first = *(int *)(*(int *)(((unsigned int)uVar17 >> 4 & 0xffffffc) + uVar19) +
                                      ((unsigned int)((uVar17 & 0xffffffff) << 2) & 0xfc));
                  stack_pair_f0.second = *(int *)(*(int *)(((unsigned int)uVar32 >> 4 & 0xffffffc) + uVar19) +
                                      ((unsigned int)((uVar32 & 0xffffffff) << 2) & 0xfc));
                  iStack_e8 = *(int *)(*(int *)(((unsigned int)((uVar31 & 0xffffffff) >> 4) & 0xffffffc) +
                                               uVar19) + ((unsigned int)((uVar31 & 0xffffffff) << 2) & 0xfc)
                                      );
                  fn_82789C08(puVar22,&stack_pair_f0.first);
                  fn_82788E48(puVar29,uVar32);
                }
              }
              iVar20 = *(int *)((*puVar28 >> 6 & 0x3fffffc) + puVar7[3]) + (*puVar28 & 0xff) * 0xc;
              *(unsigned int *)(iVar20 + 8) = *(unsigned int *)(iVar20 + 8) | 0x20000000;
            }
          }
          uVar24 = uVar24 + 1;
          puVar28 = puVar28 + 1;
        } while (uVar24 < 3);
        uVar21 = uVar21 + 1;
        iVar13 = iVar13 + 4;
      } while (uVar21 < puVar7[8]);
    }
    uVar23 = 0;
    if (puVar7[8] != 0) {
      do {
        iVar30 = *(int *)((uVar23 >> 6 & 0x3fffffc) + puVar7[0xb]) + (uVar23 & 0xff) * 0x3c;
        iVar13 = *(int *)(iVar30 + 0xc);
        iVar20 = *(int *)(iVar30 + 0x10);
        if (((iVar13 != iVar20) && (iVar1 = *(int *)(iVar30 + 0x14), iVar20 != iVar1)) &&
           (iVar1 != iVar13)) {
          stack_pair_f0.first = iVar13;
          stack_pair_f0.second = iVar20;
          iStack_e8 = iVar1;
          fn_82789C08(puVar22,&stack_pair_f0.first);
        }
        uVar32 = 0;
        iVar13 = iVar30 + 0x34;
        puVar28 = (unsigned int *)(iVar30 + 0x1c);
        piVar26 = (int *)&lbl_820155B0;
        do {
          piVar26 = piVar26 + 1;
          *(unsigned int *)(*(int *)((puVar28[-4] >> 6 & 0x3fffffc) + puVar7[3]) +
                    (puVar28[-4] & 0xff) * 0xc + 8) = *(unsigned int *)(iVar30 + 0x38) | 0x10000000;
          uVar21 = (unsigned int)uVar32;
          if ((*(unsigned char *)(iVar13 + uVar21) & 2) == 0) {
            uVar24 = *puVar28;
            if ((int)uVar24 < 0) {
              uVar24 = puVar28[3];
              uVar4 = *(unsigned int *)((*piVar26 + 10) * 4 + iVar30);
              if ((-1 < (int)uVar4) && (-1 < (int)uVar24)) {
                uVar31 = ((unsigned __int64)uVar23 & 0x3fffffff) << 2;
                uVar19 = (unsigned int)uVar31 | uVar21;
                uVar10 = *(unsigned int *)
                          ((int)(((unsigned __int64)
                                  *(unsigned int *)((int)&lbl_820155B4 +
                                           ((unsigned int)((uVar32 & 0xffffffff) << 2) & 0xc)) +
                                  ((uVar31 | uVar32 & 0xffffffff) >> 2 & 0xff) * 0xf + 3 &
                                 0xffffffff) << 2) +
                          *(int *)((uVar19 >> 8 & 0xfffffc) + puVar7[0xb]));
                stack_pair_100.first = *(unsigned int *)((((unsigned int)((uVar31 | uVar32 & 0xffffffff) >> 2) & 0xff) * 0xf +
                                        (uVar21 & 3) + 3) * 4 +
                                      *(int *)((uVar19 >> 8 & 0xfffffc) + puVar7[0xb]));
                stack_pair_100.second = uVar10;
                uStack_f8 = uVar24;
                fn_82789C08(puVar22,&stack_pair_100.first);
                uStack_110 = uVar24;
                uStack_10c = uVar10;
                uStack_108 = uVar4;
                fn_82789C08(puVar22,&uStack_110);
              }
            }
            else {
              uVar4 = puVar7[0xb];
              iVar20 = *(int *)(((unsigned int)((int)uVar24 >> 2) >> 6 & 0x3fffffc) + uVar4) +
                       ((int)uVar24 >> 2 & 0xffU) * 0x3c;
              if (*(int *)(iVar20 + 0x38) != *(int *)(iVar30 + 0x38)) {
                uVar31 = ((unsigned __int64)uVar23 & 0x3fffffff) << 2;
                uVar19 = (unsigned int)uVar31 | uVar21;
                iVar14 = (uVar24 >> 2 & 0xff) * 0xf;
                iVar1 = *(int *)((uVar24 >> 8 & 0xfffffc) + uVar4);
                uVar10 = *(unsigned int *)
                          ((int)(((unsigned __int64)
                                  *(unsigned int *)((int)&lbl_820155B4 +
                                           ((unsigned int)((uVar32 & 0xffffffff) << 2) & 0xc)) +
                                  ((uVar31 | uVar32 & 0xffffffff) >> 2 & 0xff) * 0xf + 3 &
                                 0xffffffff) << 2) + *(int *)((uVar19 >> 8 & 0xfffffc) + uVar4));
                uVar2 = *(unsigned int *)(((&lbl_820155B4)[uVar24 & 3] + iVar14 + 3) * 4 + iVar1);
                stack_pair_e0.first = *(unsigned int *)
                             ((((unsigned int)((uVar31 | uVar32 & 0xffffffff) >> 2) & 0xff) * 0xf +
                               (uVar21 & 3) + 3) * 4 + *(int *)((uVar19 >> 8 & 0xfffffc) + uVar4));
                uVar3 = *(unsigned int *)((iVar14 + (uVar24 & 3) + 3) * 4 + iVar1);
                stack_pair_e0.second = uVar10;
                uStack_d8 = uVar2;
                fn_82789C08(puVar22,&stack_pair_e0.first);
                uStack_d0 = uVar2;
                uStack_cc = uVar10;
                uStack_c8 = uVar3;
                fn_82789C08(puVar22,&uStack_d0);
                iVar20 = (uVar24 & 3) + iVar20;
                *(unsigned char *)(iVar20 + 0x34) = *(unsigned char *)(iVar20 + 0x34) | 2;
              }
            }
            *(unsigned char *)(iVar13 + uVar21) = *(unsigned char *)(iVar13 + uVar21) | 2;
          }
          uVar32 = uVar32 + 1;
          puVar28 = puVar28 + 1;
        } while ((uVar32 & 0xffffffff) < 3);
        uVar23 = uVar23 + 1;
      } while (uVar23 < puVar7[8]);
    }
    if (param_3 == 1) {
      uVar23 = *puVar7;
      puVar28 = puVar7 + 0x1b;
      fn_82788F20(puVar28,uVar23,0);
      puVar7[0x1c] = uVar23;
      uVar21 = 0;
      uVar23 = 0;
      if (*puVar7 != 0) {
        iVar13 = 0;
        do {
          *(unsigned int *)(iVar13 + *puVar28) = uVar21;
          puVar16 = (unsigned int *)
                    (*(int *)((uVar23 >> 6 & 0x3fffffc) + puVar7[3]) + (uVar23 & 0xff) * 0xc);
          if ((puVar16[2] & 0x10000000) != 0) {
            uVar24 = uVar21 >> 6;
            uVar4 = uVar21 & 0xff;
            uVar21 = uVar21 + 1;
            iVar30 = uVar4 * 0xc;
            iVar20 = *(int *)((uVar24 & 0x3fffffc) + puVar7[3]);
            *(unsigned int *)(iVar20 + iVar30) = *puVar16;
            iVar20 = iVar20 + iVar30;
            *(unsigned int *)(iVar20 + 4) = puVar16[1];
            *(unsigned int *)(iVar20 + 8) = puVar16[2];
          }
          uVar23 = uVar23 + 1;
          iVar13 = iVar13 + 4;
        } while (uVar23 < *puVar7);
      }
      puVar7[0x1e] = uVar21;
      if (uVar21 < *puVar7) {
        *puVar7 = uVar21;
      }
      uVar32 = 0;
      if (*puVar22 != 0) {
        do {
          uVar21 = (unsigned int)((uVar32 & 0xffffffff) >> 6) & 0x3fffffc;
          uVar23 = *puVar28;
          iVar20 = ((unsigned int)uVar32 & 0xff) * 0xc;
          iVar13 = *(int *)(uVar21 + puVar7[0x1a]);
          iVar30 = iVar13 + iVar20;
          uVar10 = *(unsigned int *)(*(int *)(iVar13 + iVar20) * 4 + uVar23);
          uVar2 = *(unsigned int *)(*(int *)(iVar30 + 4) * 4 + uVar23);
          uVar3 = *(unsigned int *)(*(int *)(iVar30 + 8) * 4 + uVar23);
          uVar8 = fn_8278A1E0(puVar7,uVar10,uVar2,uVar3);
          uVar9 = fn_8278A1E0(puVar7,uVar2,uVar3,uVar10);
          uVar10 = fn_8278A1E0(puVar7,uVar3,uVar10,uVar2);
          uVar32 = uVar32 + 1;
          iVar13 = *(int *)(uVar21 + puVar7[0x1a]);
          iVar30 = iVar13 + iVar20;
          *(unsigned int *)(iVar13 + iVar20) = uVar8;
          *(unsigned int *)(iVar30 + 8) = uVar10;
          *(unsigned int *)(iVar30 + 4) = uVar9;
        } while ((uVar32 & 0xffffffff) < (unsigned __int64)*puVar22);
      }
    }
  }
  fn_82F6A594();
  return;
}
