typedef unsigned char bool;
#define true 1
#define false 0
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_110;
extern unsigned int *auStack_140;
extern unsigned int *auStack_150;
extern int fn_82AA66A8();
extern int fn_82ACA598();
extern int fn_82AD1228();
extern int fn_82AD1870();
extern int fn_82AD1978();
extern int fn_82AD1B28();
extern int fn_82AD35A8();
extern int fn_82AD35E8();
extern int fn_82AD36D8();
extern int fn_82AE93B0();
extern int fn_82AEFCD8();
extern int fn_82AF04D0();
extern int fn_82AF77E0();
extern int fn_82B0FC78();
extern int fn_82B0FE60();
extern int fn_82B0FF30();
extern int fn_82B102D8();
extern int fn_82B103B8();
extern int fn_82B10550();
extern int fn_82B10DF8();
extern int fn_82B80EE0();
extern int fn_82B84350();
extern int fn_82B85910();
extern int fn_82B86888();
extern int fn_82B8A3A0();
extern int fn_82B8AC10();
extern int fn_82B8CB58();
extern int fn_82B8EA70();
extern unsigned int iStack_b0;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;
extern unsigned int stack0x00000000;
extern unsigned int uRam00000008;
extern unsigned int uStack00000014;
extern unsigned int uStack0000001c;
extern unsigned int uStack_144;


/* WARNING: Removing unreachable block (ram,0x82b11984) */
/* WARNING: Removing unreachable block (ram,0x82b1198c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

unsigned __int64 fn_82B11330(unsigned __int64 param_1,unsigned int param_2,int *param_3)

{
  bool bVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  bool bVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  int iVar12;
  unsigned __int64 uVar9;
  unsigned int *puVar13;
  unsigned int *puVar14;
  unsigned int uVar15;
  char cVar18;
  unsigned int uVar16;
  int *piVar17;
  unsigned __int64 uVar19;
  unsigned __int64 uVar20;
  unsigned __int64 uVar21;
  unsigned __int64 uVar22;
  __int64 lVar23;
  unsigned __int64 uVar24;
  unsigned __int64 uVar25;
  unsigned __int64 uVar26;
  unsigned __int64 uVar27;
  int *piVar28;
  __int64 lVar29;
  unsigned int uVar31;
  __int64 lVar30;
  unsigned int uVar32;
  int *piVar33;
  unsigned int uVar35;
  int iVar36;
  unsigned int uVar37;
  unsigned int uVar38;
  unsigned int *puVar39;
  unsigned __int64 uVar34;
  int *piVar40;
  int iVar41;
  unsigned int *puVar42;
  unsigned int *puVar43;
  unsigned int uVar44;
  __int64 lVar45;
  unsigned __int64 uVar46;
  unsigned int uVar48;
  unsigned int *puVar49;
  unsigned __int64 uVar47;
  int iVar50;
  int *piVar51;
  unsigned __int64 uVar52;
  unsigned int uVar53;
  unsigned int uVar54;
  unsigned int uVar55;
  double dVar56;
  double dVar57;
  double dVar58;
  double dVar59;
  double dVar60;
  unsigned int uStack00000014;
  unsigned int uStack0000001c;
  int *piStack00000024;
  unsigned int auStack_150 [3];
  unsigned char uStack_144;
  unsigned int auStack_140 [12];
  unsigned int auStack_110 [24];
  int iStack_b0;
  
  uVar47 = ZEXT48(&stack0x00000000);
  uStack00000014 = (unsigned int)param_1;
  uVar32 = (unsigned int)param_3[2] >> 0x13;
  uVar55 = uVar32 & 7;
  iVar50 = 0;
  iVar12 = 0;
  auStack_150[2] = 0;
  uVar53 = 0;
  uVar44 = 0;
  uVar15 = 0;
  uVar10 = 0xffffffff;
  uVar31 = 0xe4;
  uVar16 = 0;
  uStack0000001c = param_2;
  piStack00000024 = param_3;
  if ((uVar32 & 7) != 0) {
    uVar19 = 0;
    uVar48 = 0;
    uVar54 = 0;
    piVar17 = param_3 + 0xb;
    lVar45 = 0;
    do {
      uVar5 = uVar54 >> 3 & 0x1ffffffc;
      uVar2 = (unsigned int)uVar19;
      uVar35 = 0;
      uVar38 = **(unsigned int **)(uVar2 + (int)piVar17);
      uVar37 = *(unsigned int *)((int)auStack_150 + uVar5 + 4);
      uVar3 = uVar38 & 0x1e;
      uVar6 = uVar38 >> 5 & 3;
      uVar38 = (*(unsigned int **)(uVar2 + (int)piVar17))[3];
      *(unsigned int *)((int)auStack_140 + uVar2 + 0x10) = uVar38;
      *(unsigned int *)((int)auStack_150 + uVar5 + 4) = uVar3 << (uVar54 & 0x1f) | uVar37;
      if (uVar16 != 0) {
        lVar29 = uVar47 - 0x130;
        do {
          if (uVar38 == *(unsigned int *)lVar29) break;
          uVar35 = uVar35 + 1;
          lVar29 = lVar29 + 4;
        } while (uVar35 < uVar16);
      }
      lVar29 = lVar45 + 1;
      if (uVar35 == uVar16) {
        uVar37 = (unsigned int)((uVar19 & 0xffffffff) >> 3) & 0x1ffffffc;
        uVar53 = uVar53 + 1;
        *(unsigned int *)((int)auStack_150 + uVar37) =
             (1 << uVar6) << (uVar2 & 0x1f) | *(unsigned int *)((int)auStack_150 + uVar37);
      }
      else {
        uVar37 = uVar35 >> 1 & 0x1ffffffc;
        iVar36 = (uVar35 & 7) << 2;
        if ((((2 << (uVar35 * 4 + 3 & 0x1f)) - 1U & -1 << iVar36 &
             *(unsigned int *)((int)auStack_150 + uVar37)) >> iVar36 & 1 << uVar6) == 0) {
          *(unsigned int *)((int)auStack_150 + uVar37) =
               (1 << uVar6) << iVar36 | *(unsigned int *)((int)auStack_150 + uVar37);
        }
        else {
          uVar37 = 0;
          if (uVar16 != 0) {
            lVar23 = uVar47 - 0x130;
            piVar40 = piVar17;
            do {
              if (((uVar38 == *(unsigned int *)lVar23) && ((*(unsigned int *)*piVar40 >> 5 & 3) == uVar6)) &&
                 ((*(unsigned int *)*piVar40 & 0x1e) == uVar3)) break;
              uVar37 = uVar37 + 1;
              lVar23 = lVar23 + 4;
              piVar40 = piVar40 + 1;
            } while (uVar37 < uVar16);
            if (uVar37 < uVar16) {
              uVar31 = uVar31 & ~(3 << (uVar48 & 0x3f)) | uVar37 << (uVar48 & 0x3f);
              lVar29 = lVar45;
            }
          }
        }
      }
      uVar38 = *(unsigned int *)(uVar38 + 8) >> 7 & 0x7f;
      if (uVar38 == 0x7d) {
        iVar50 = iVar50 + 1;
      }
      else {
        if (uVar38 == 0x7c) {
          iVar12 = iVar12 + 1;
        }
        else if (uVar38 == 0x71) {
          uVar44 = uVar44 + 1;
        }
        uVar15 = uVar3 | uVar15;
        uVar10 = uVar3 & uVar10;
      }
      uVar16 = uVar16 + 1;
      uVar54 = uVar54 + 5;
      uVar48 = uVar48 + 2;
      uVar19 = uVar19 + 4;
      lVar45 = lVar29;
    } while (uVar16 < uVar55);
    auStack_150[2] = iVar50;
    if (uVar31 != 0xe4) {
      uVar10 = fn_82B84350(param_1,param_2,0,lVar29);
      uVar32 = (unsigned int)param_3 & 0xfffffffe;
      uVar15 = uVar10 & 0xfffffffe;
      uVar44 = 0;
      iVar12 = 0;
      uVar16 = 0;
      uVar53 = 0;
      *(unsigned int *)(uVar15 + 0x28) = *(unsigned int *)(uVar32 + 0x28);
      puVar49 = (unsigned int *)(uVar10 + 0x28);
      *(unsigned int *)((*(unsigned int *)(uVar32 + 0x28) & 0xfffffffe) + 0x24) = uVar15 + 0x28;
      *(unsigned int *)(uVar15 + 0x24) = uVar32 + 0x28;
      *(unsigned int *)(uVar32 + 0x28) = uVar15;
      do {
        if (uVar16 == (uVar31 >> (uVar53 & 0x3f) & 3)) {
          uVar11 = fn_82AD1978(uVar10,*piVar17);
          uVar32 = iVar12 << (uVar53 & 0x3f);
          puVar49 = puVar49 + 1;
          *puVar49 = uVar11;
          iVar12 = iVar12 + 1;
          uVar44 = uVar44 & ~(3 << (uVar53 & 0x3f)) | uVar32;
        }
        uVar16 = uVar16 + 1;
        piVar17 = piVar17 + 1;
        uVar53 = uVar53 + 2;
      } while (uVar16 < uVar55);
      puVar13 = (unsigned int *)(param_3 + 1);
      while (puVar14 = (unsigned int *)*puVar13, puVar14 != (unsigned int *)0x0) {
        if (puVar14[4] != 0) {
          puVar39 = (unsigned int *)(puVar14[3] + 4);
          for (puVar42 = (unsigned int *)*puVar39; puVar42 != puVar14; puVar42 = (unsigned int *)puVar42[2]) {
            puVar39 = puVar42 + 2;
          }
          *puVar39 = puVar14[2];
          puVar14[2] = *(unsigned int *)(uVar10 + 4);
          *(unsigned int **)(uVar10 + 4) = puVar14;
          uVar32 = *puVar14;
          puVar14[3] = uVar10;
          *puVar14 = ((((uVar44 >> ((uVar31 >> (uVar32 >> 10 & 6) & 3) << 1) & 3) << 2 |
                       uVar44 >> ((uVar31 >> (uVar32 >> 8 & 6) & 3) << 1) & 3) << 2 |
                      uVar44 >> ((uVar31 >> (uVar32 >> 6 & 6) & 3) << 1) & 3) << 2 |
                     uVar44 >> ((uVar31 >> (uVar32 >> 4 & 6) & 3) << 1) & 3) << 5 |
                     uVar32 & 0xffffe01f;
        }
        if ((unsigned int *)*puVar13 == puVar14) {
          puVar13 = puVar14 + 2;
        }
      }
      goto LAB_82b11718;
    }
  }
  uVar16 = 0;
  uVar19 = 0;
  lVar45 = 0;
  if ((uVar15 & 0x18) != 0) {
    uVar31 = 0;
    if ((uVar32 & 7) != 0) {
      uVar48 = 0;
      lVar29 = uVar47 - 0x130;
      do {
        if ((((2 << (uVar16 + 4 & 0x1f)) - 1U &
              *(unsigned int *)((int)auStack_150 + (uVar16 >> 3 & 0x1ffffffc) + 4) & -1 << (uVar16 & 0x1f))
             >> (uVar16 & 0x1f) & 0x18) != 0) {
          uVar54 = uVar48 >> 3 & 0x1ffffffc;
          uVar38 = uVar31 + 1;
          lVar45 = lVar45 + 1;
          *(unsigned int *)((int)auStack_150 + uVar54) =
               (1 << (uVar31 & 0x3f)) << (uVar48 & 0x1f) | *(unsigned int *)((int)auStack_150 + uVar54);
          if (uVar38 < uVar55) {
            iVar50 = uVar55 - uVar38;
            lVar23 = lVar29;
            do {
              lVar23 = lVar23 + 4;
              if (*(int *)lVar29 == *(int *)lVar23) {
                lVar45 = lVar45 + 1;
                *(unsigned int *)((int)auStack_150 + uVar54) =
                     (1 << (uVar38 & 0x3f)) << (uVar48 & 0x1f) |
                     *(unsigned int *)((int)auStack_150 + uVar54);
              }
              uVar38 = uVar38 + 1;
              iVar50 = iVar50 + -1;
            } while (iVar50 != 0);
          }
          uVar19 = uVar19 + 1;
          uVar48 = uVar48 + 4;
        }
        uVar31 = uVar31 + 1;
        uVar16 = uVar16 + 5;
        lVar29 = lVar29 + 4;
      } while (uVar31 < uVar55);
    }
    uVar15 = uVar15 & 0xffffffe7;
    uVar10 = uVar10 & 0xffffffe7;
  }
  if (uVar15 != 0) {
    bVar4 = true;
    if ((uVar15 == uVar10) && (auStack_150[2] == 0)) {
      for (puVar13 = (unsigned int *)param_3[1]; puVar13 != (unsigned int *)0x0; puVar13 = (unsigned int *)puVar13[2]) {
        if (puVar13[4] != 0) {
          uVar10 = *puVar13;
          if (((uVar10 & 0x40000000) != 0) || (bVar1 = false, (uVar10 & 0xe000000) != 0)) {
            bVar1 = true;
          }
          if (bVar1) {
            if ((((uVar15 & 0x18) == 0) || ((uVar10 & 0x18) == 0)) &&
               (((uVar15 & 2) == 0 || ((uVar10 & 1) == 0)))) {
              if (((uVar15 & 4) == 0) || (bVar1 = false, (uVar10 & 1) == 0)) {
                bVar1 = true;
              }
            }
            else {
              bVar1 = false;
            }
            if (!bVar1) goto LAB_82b11904;
          }
        }
      }
    }
    else {
LAB_82b11904:
      bVar4 = false;
    }
    if (bVar4) {
      for (puVar13 = (unsigned int *)param_3[1]; puVar13 != (unsigned int *)0x0; puVar13 = (unsigned int *)puVar13[2]) {
        if (puVar13[4] != 0) {
          uVar10 = *puVar13;
          if (((uVar10 & 0x40000000) != 0) || (bVar4 = false, (uVar10 & 0xe000000) != 0)) {
            bVar4 = true;
          }
          if (bVar4) {
            uVar16 = uVar10 & 0x1f;
            uVar31 = uVar15;
            if (((uVar15 & 4) != 0) && ((uVar10 & 2) != 0)) {
              uVar31 = uVar15 - 4;
            }
            if ((uVar31 & uVar16 & 4) != 0) {
              uVar31 = uVar31 - 4;
              uVar16 = uVar16 - 4;
            }
            *puVar13 = uVar10 & 0xffffffe0 | (uVar31 | uVar16) & 0x1f;
          }
        }
      }
      piVar17 = param_3 + 10;
      for (uVar10 = 0; uVar10 < ((unsigned int)param_3[2] >> 0x13 & 7); uVar10 = uVar10 + 1) {
        piVar17 = piVar17 + 1;
        uVar16 = *(unsigned int *)*piVar17;
        *(unsigned int *)*piVar17 = uVar16 & 0xffffffe0 | uVar16 - uVar15 & 0x1f;
      }
    }
    else {
      uVar15 = 0;
      if ((uVar32 & 7) != 0) {
        uVar22 = (uVar19 & 0x3fffffff) << 2;
        uVar10 = 0;
        lVar29 = uVar47 - 0x130;
        do {
          uVar16 = ((2 << (uVar10 + 4 & 0x1f)) - 1U &
                    *(unsigned int *)((int)auStack_150 + (uVar10 >> 3 & 0x1ffffffc) + 4) &
                   -1 << (uVar10 & 0x1f)) >> (uVar10 & 0x1f);
          if (uVar16 != 0) {
            uVar31 = (unsigned int)((uVar22 & 0xffffffff) >> 3) & 0x1ffffffc;
            uVar48 = (unsigned int)uVar22 & 0x1f;
            lVar45 = lVar45 + 1;
            uVar54 = uVar15 + 1;
            *(unsigned int *)((int)auStack_150 + uVar31) =
                 (1 << (uVar15 & 0x3f)) << uVar48 | *(unsigned int *)((int)auStack_150 + uVar31);
            if (uVar54 < uVar55) {
              iVar50 = uVar55 - uVar54;
              lVar23 = lVar29;
              uVar38 = uVar10;
              do {
                uVar37 = uVar38 + 5;
                lVar23 = lVar23 + 4;
                if ((*(int *)lVar29 == *(int *)lVar23) &&
                   (((2 << (uVar38 + 9 & 0x1f)) - 1U &
                     *(unsigned int *)((int)auStack_150 + (uVar37 >> 3 & 0x1ffffffc) + 4) &
                    -1 << (uVar37 & 0x1f)) >> (uVar37 & 0x1f) == uVar16)) {
                  lVar45 = lVar45 + 1;
                  *(unsigned int *)((int)auStack_150 + uVar31) =
                       (1 << (uVar54 & 0x3f)) << uVar48 | *(unsigned int *)((int)auStack_150 + uVar31);
                }
                uVar54 = uVar54 + 1;
                iVar50 = iVar50 + -1;
                uVar38 = uVar37;
              } while (iVar50 != 0);
            }
            uVar19 = uVar19 + 1;
            uVar22 = uVar22 + 4;
          }
          uVar15 = uVar15 + 1;
          uVar10 = uVar10 + 5;
          lVar29 = lVar29 + 4;
        } while (uVar15 < uVar55);
      }
    }
  }
  if (iVar12 != 0) {
    if ((uVar19 & 0xffffffff) != 0) {
      iVar12 = 0;
      if ((uVar32 & 7) == 0) goto LAB_82b11b9c;
      piVar17 = param_3 + 0xb;
      uVar32 = uVar55;
      do {
        if ((*(unsigned int *)(*(int *)(*piVar17 + 0xc) + 8) & 0x3f80) == 0x3e00) {
          iVar12 = iVar12 + 1;
        }
        piVar17 = piVar17 + 1;
        uVar32 = uVar32 - 1;
      } while (uVar32 != 0);
    }
    if (iVar12 != 0) {
      if (1 < uVar53) goto LAB_82b11da8;
      if ((uVar19 & 0xffffffff) != 0) goto LAB_82b11da8;
    }
  }
LAB_82b11b9c:
  while (((auStack_150[2] == 0 && ((uVar19 & 0xffffffff) == 0)) && (uVar53 == 1))) {
    uVar16 = 0;
    uVar10 = 0;
    uVar32 = *(unsigned int *)param_3[0xb];
    piVar17 = param_3 + 10;
    for (uVar15 = 0; uVar15 < ((unsigned int)param_3[2] >> 0x13 & 7); uVar15 = uVar15 + 1) {
      piVar17 = piVar17 + 1;
      uVar16 = (*(unsigned int *)*piVar17 >> 5 & 3) << (uVar10 & 0x3f) | uVar16 & ~(3 << (uVar10 & 0x3f));
      uVar10 = uVar10 + 2;
    }
    puVar13 = (unsigned int *)(param_3 + 1);
    while (puVar14 = (unsigned int *)*puVar13, puVar14 != (unsigned int *)0x0) {
      if ((puVar14[4] != 0) && ((*puVar14 & 0xe000000) != 0)) {
        if ((*(unsigned int *)(auStack_140[4] + 8) & 0x3f80) == 0x3e00) {
          uVar15 = *(unsigned int *)(puVar14[4] + 8) >> 7 & 0x7f;
          if ((uVar15 == 0) || (bVar4 = true, 0x66 < uVar15)) {
            bVar4 = false;
          }
          if (!bVar4) goto LAB_82b11d14;
        }
        puVar39 = (unsigned int *)(puVar14[3] + 4);
        for (puVar42 = (unsigned int *)*puVar39; puVar42 != puVar14; puVar42 = (unsigned int *)puVar42[2]) {
          puVar39 = puVar42 + 2;
        }
        *puVar39 = puVar14[2];
        puVar14[2] = *(unsigned int *)(auStack_140[4] + 4);
        *(unsigned int **)(auStack_140[4] + 4) = puVar14;
        uVar15 = *puVar14;
        uVar31 = uVar15 >> 5 & 0xff;
        puVar14[3] = auStack_140[4];
        uVar10 = fn_82AD1228(uVar32 & 1,uVar15 & 0x1f);
        *puVar14 = ((((uVar16 >> (uVar31 >> 5 & 6) & 3) << 2 | uVar16 >> (uVar31 >> 3 & 6) & 3) << 2
                    | uVar16 >> (uVar31 >> 1 & 6) & 3) << 2 | uVar16 >> ((uVar15 >> 5 & 3) << 1) & 3
                   ) << 5 | uVar15 & 0xffffe000 | uVar10 & 0x1f;
      }
LAB_82b11d14:
      if ((unsigned int *)*puVar13 == puVar14) {
        puVar13 = puVar14 + 2;
      }
    }
    if (param_3[1] == 0) {
      param_1 = (unsigned __int64)uStack00000014;
      goto LAB_82b11718;
    }
    if (iVar12 == 0) break;
LAB_82b11da8:
    uVar32 = 0;
    if (uVar55 != 0) {
      uVar22 = (uVar19 & 0x3fffffff) << 2;
      uVar15 = 0;
      lVar29 = uVar47 - 0x130;
      piVar17 = param_3 + 0xb;
      do {
        if ((*(unsigned int *)(*(int *)(*piVar17 + 0xc) + 8) & 0x3f80) == 0x3e00) {
          uVar10 = (unsigned int)((uVar22 & 0xffffffff) >> 3) & 0x1ffffffc;
          uVar16 = (unsigned int)uVar22 & 0x1f;
          lVar45 = lVar45 + 1;
          uVar31 = uVar32 + 1;
          *(unsigned int *)((int)auStack_150 + uVar10) =
               (1 << (uVar32 & 0x3f)) << uVar16 | *(unsigned int *)((int)auStack_150 + uVar10);
          if (uVar31 < uVar55) {
            iVar12 = uVar55 - uVar31;
            lVar23 = lVar29;
            uVar48 = uVar15;
            do {
              lVar23 = lVar23 + 4;
              uVar54 = uVar48 + 5;
              if ((*(int *)lVar29 == *(int *)lVar23) &&
                 (((2 << (uVar48 + 9 & 0x1f)) - 1U &
                   *(unsigned int *)((int)auStack_150 + (uVar54 >> 3 & 0x1ffffffc) + 4) &
                  -1 << (uVar54 & 0x1f)) >> (uVar54 & 0x1f) ==
                  ((2 << (uVar15 + 4 & 0x1f)) - 1U &
                   *(unsigned int *)((int)auStack_150 + (uVar15 >> 3 & 0x1ffffffc) + 4) &
                  -1 << (uVar15 & 0x1f)) >> (uVar15 & 0x1f))) {
                lVar45 = lVar45 + 1;
                *(unsigned int *)((int)auStack_150 + uVar10) =
                     (1 << (uVar31 & 0x3f)) << uVar16 | *(unsigned int *)((int)auStack_150 + uVar10);
              }
              uVar31 = uVar31 + 1;
              iVar12 = iVar12 + -1;
              uVar48 = uVar54;
              param_3 = piStack00000024;
            } while (iVar12 != 0);
          }
          uVar19 = uVar19 + 1;
          uVar22 = uVar22 + 4;
        }
        uVar32 = uVar32 + 1;
        piVar17 = piVar17 + 1;
        lVar29 = lVar29 + 4;
        uVar15 = uVar15 + 5;
      } while (uVar32 < uVar55);
    }
    iVar12 = 0;
  }
  if (1 < uVar44) {
    uVar32 = 0;
    if (uVar55 != 0) {
      uVar22 = (uVar19 & 0x3fffffff) << 2;
      lVar29 = uVar47 - 0x130;
      piVar17 = param_3 + 0xb;
      iVar12 = 0;
      do {
        iVar50 = *(int *)(*piVar17 + 0xc);
        iVar36 = iVar12;
        if ((((*(unsigned int *)(iVar50 + 8) & 0x3f80) == 0x3880) && (iVar50 != iVar12)) &&
           (iVar36 = iVar50, iVar12 != 0)) {
          uVar15 = (unsigned int)((uVar22 & 0xffffffff) >> 3) & 0x1ffffffc;
          uVar10 = (unsigned int)uVar22 & 0x1f;
          lVar45 = lVar45 + 1;
          uVar16 = uVar32 + 1;
          *(unsigned int *)((int)auStack_150 + uVar15) =
               (1 << (uVar32 & 0x3f)) << uVar10 | *(unsigned int *)((int)auStack_150 + uVar15);
          if (uVar16 < uVar55) {
            iVar50 = uVar55 - uVar16;
            lVar23 = lVar29;
            do {
              lVar23 = lVar23 + 4;
              if (*(int *)lVar29 == *(int *)lVar23) {
                lVar45 = lVar45 + 1;
                *(unsigned int *)((int)auStack_150 + uVar15) =
                     (1 << (uVar16 & 0x3f)) << uVar10 | *(unsigned int *)((int)auStack_150 + uVar15);
              }
              uVar16 = uVar16 + 1;
              iVar50 = iVar50 + -1;
            } while (iVar50 != 0);
          }
          uVar19 = uVar19 + 1;
          uVar22 = uVar22 + 4;
          iVar36 = iVar12;
        }
        uVar32 = uVar32 + 1;
        piVar17 = piVar17 + 1;
        lVar29 = lVar29 + 4;
        iVar12 = iVar36;
      } while (uVar32 < uVar55);
    }
  }
  uVar22 = 0;
  lVar29 = 0;
  uVar32 = 0;
  if (uVar55 != 0) {
    uVar7 = (uVar19 & 0x3fffffff) << 2;
    uVar20 = 0;
    do {
      lVar23 = uVar20 + (uVar47 - 0x130);
      iVar12 = *(int *)((unsigned int)uVar20 + (int)(uVar47 - 0x130));
      uVar15 = *(unsigned int *)(iVar12 + 8) >> 7 & 0x7f;
      if ((uVar15 == 0x7d) || (bVar4 = false, uVar15 == 0x7c)) {
        bVar4 = true;
      }
      if (bVar4) {
        lVar29 = lVar29 + 1;
      }
      else {
        uVar8 = (unsigned __int64)(*(unsigned int *)(iVar12 + 8) >> 1) & 0xf;
        if ((((0x8da691691448U >> uVar8) >> uVar8) >> uVar8 & 7) == 4) {
          uVar15 = (unsigned int)((uVar7 & 0xffffffff) >> 3) & 0x1ffffffc;
          uVar10 = (unsigned int)uVar7 & 0x1f;
          lVar45 = lVar45 + 1;
          uVar16 = uVar32 + 1;
          *(unsigned int *)((int)auStack_150 + uVar15) =
               (1 << (uVar32 & 0x3f)) << uVar10 | *(unsigned int *)((int)auStack_150 + uVar15);
          if (uVar16 < uVar55) {
            iVar50 = uVar55 - uVar16;
            do {
              lVar23 = lVar23 + 4;
              if (iVar12 == *(int *)lVar23) {
                lVar45 = lVar45 + 1;
                *(unsigned int *)((int)auStack_150 + uVar15) =
                     (1 << (uVar16 & 0x3f)) << uVar10 | *(unsigned int *)((int)auStack_150 + uVar15);
              }
              uVar16 = uVar16 + 1;
              iVar50 = iVar50 + -1;
            } while (iVar50 != 0);
          }
          uVar19 = uVar19 + 1;
          uVar7 = uVar7 + 4;
        }
        else {
          uVar15 = 0;
          if (uVar32 != 0) {
            lVar23 = uVar47 - 0x130;
            do {
              if (iVar12 == *(int *)lVar23) break;
              uVar15 = uVar15 + 1;
              lVar23 = lVar23 + 4;
            } while (uVar15 < uVar32);
          }
          if (uVar15 == uVar32) {
            uVar15 = (unsigned int)((uVar20 & 0xffffffff) >> 3) & 0x1ffffffc;
            uVar22 = (unsigned int)(1 << (uVar32 & 0x3f)) | uVar22;
            *(unsigned int *)((int)auStack_150 + uVar15 + 8) =
                 (int)uVar8 << ((unsigned int)uVar20 & 0x1f) | *(unsigned int *)((int)auStack_150 + uVar15 + 8);
          }
          else {
            uVar10 = uVar15 >> 1 & 0x1ffffffc;
            iVar12 = (uVar15 & 7) << 2;
            *(unsigned int *)((int)auStack_140 + uVar10) =
                 (1 << (uVar32 & 0x3f)) << iVar12 | *(unsigned int *)((int)auStack_140 + uVar10);
            *(int *)((int)auStack_140 + uVar10 + 8) =
                 (1 << iVar12) + *(int *)((int)auStack_140 + uVar10 + 8);
          }
        }
      }
      uVar32 = uVar32 + 1;
      uVar20 = uVar20 + 4;
    } while (uVar32 < uVar55);
  }
  uVar7 = lVar29 + lVar45;
  uVar32 = 0;
  lVar45 = 4;
  do {
    uVar16 = uVar32 + 3;
    uVar15 = uVar32 >> 3;
    uVar10 = uVar32 & 0x1f;
    uVar32 = uVar32 + 4;
    uVar20 = (unsigned __int64)
             (((2 << (uVar16 & 0x1f)) - 1U & *(unsigned int *)((int)auStack_150 + (uVar15 & 0x1ffffffc) + 8)
              & -1 << uVar10) >> uVar10);
    uVar7 = (((0x8da691691448U >> (uVar20 & 0x7f)) >> (uVar20 & 0x7f)) >> (uVar20 & 0x7f) & 7) +
            uVar7;
    lVar45 = lVar45 + -1;
  } while (lVar45 != 0);
  if (4 < (uVar7 & 0xffffffff)) {
    iVar12 = 0;
    uVar52 = 0x1fff;
    iStack_b0 = 0;
    uVar8 = 0xf;
    uVar20 = 0;
    uVar21 = 0;
    uVar25 = uVar22;
    while( true ) {
      do {
        uVar26 = uVar25 & ~(uVar25 - 1);
        uVar25 = uVar25 - uVar26;
        uVar34 = 0x1f - LZCOUNT((int)uVar26);
        uVar32 = (unsigned int)((uVar34 & 0x3fffffff) << 2);
        uVar24 = ((unsigned __int64)(*(unsigned int *)(*(int *)((int)auStack_140 + uVar32 + 0x10) + 0x14) >> 0xd) &
                 0x1fff) + uVar21;
        if (0x1fff < uVar24) {
          uVar24 = 0x1fff;
        }
        if (uVar24 <= uVar52) {
          uVar10 = uVar32 & 0x1f;
          uVar15 = (unsigned int)((uVar34 & 0x3fffffff) >> 1) & 0x1ffffffc;
          uVar32 = (2 << (uVar32 + 3 & 0x1f)) - 1U & -1 << uVar10;
          uVar34 = (unsigned __int64)((*(unsigned int *)((int)auStack_150 + uVar15 + 8) & uVar32) >> uVar10);
          uVar46 = (unsigned __int64)((*(unsigned int *)((int)auStack_140 + uVar15) & uVar32) >> uVar10);
          uVar27 = uVar46 | uVar26;
          uVar34 = ((unsigned __int64)((*(unsigned int *)((int)auStack_140 + uVar15 + 8) & uVar32) >> uVar10) -
                   (((0x8da691691448U >> (uVar34 & 0x7f)) >> (uVar34 & 0x7f)) >> (uVar34 & 0x7f) & 7
                   )) + uVar7 + 1;
          if ((uVar34 & 0xffffffff) < 5) {
            if ((((0x8da691691448U >> (uVar27 & 0x7f | uVar20)) >> (uVar27 & 0x7f | uVar20)) >>
                 (uVar27 & 0x7f | uVar20) & 7) <=
                (((0x8da691691448U >> (uVar8 & 0x7f)) >> (uVar8 & 0x7f)) >> (uVar8 & 0x7f) & 7)) {
              uVar8 = uVar27 | uVar20;
              uVar52 = uVar24;
            }
          }
          else {
            auStack_110[iVar12] =
                 (unsigned int)(((uVar24 & 0x1fff) << 4 | uVar34 & 0xf) << 0xb) |
                 (unsigned int)(((uVar46 | uVar26 & 0xffffffff) & 0xf | uVar20) << 0x1c);
            iVar12 = iStack_b0 + 1;
            iStack_b0 = iVar12;
          }
        }
      } while ((uVar25 & 0xffffffff) != 0);
      if (iVar12 == 0) break;
      iVar12 = iVar12 + -1;
      uVar32 = auStack_110[iVar12];
      uVar20 = (unsigned __int64)(uVar32 >> 0x1c);
      uVar21 = (unsigned __int64)(uVar32 >> 0xf) & 0x1fff;
      uVar7 = (unsigned __int64)(uVar32 >> 0xb) & 0xf;
      uVar25 = uVar22 & ~uVar20;
      iStack_b0 = iVar12;
    }
    uVar32 = (unsigned int)((uVar19 & 0xffffffff) >> 1) & 0x1ffffffc;
    uVar22 = uVar19 & 0xffffffff;
    uVar19 = uVar19 + 1;
    *(unsigned int *)((int)auStack_150 + uVar32) =
         (int)uVar8 << ((unsigned int)(uVar22 << 2) & 0x1c) | *(unsigned int *)((int)auStack_150 + uVar32);
  }
  if (auStack_150[2] == 0) {
LAB_82b126b4:
    param_1 = (unsigned __int64)uStack00000014;
  }
  else {
    uVar10 = 0;
    lVar45 = 0;
    uVar32 = 0;
    uVar15 = 0;
    uVar16 = 0;
    if (uVar55 == 0) goto LAB_82b126b4;
    uVar22 = (uVar19 & 0x3fffffff) << 2;
    uVar44 = 0;
    lVar29 = uVar47 - 0x124;
    lVar23 = uVar47 - 0x130;
    piVar17 = param_3 + 0xb;
    do {
      iVar12 = *(int *)lVar23;
      if ((*(unsigned int *)(iVar12 + 8) & 0x3f80) == 16000) {
        if ((((2 << (uVar44 + 4 & 0x1f)) - 1U &
              *(unsigned int *)((int)auStack_150 + (uVar44 >> 3 & 0x1ffffffc) + 4) & -1 << (uVar44 & 0x1f))
             >> (uVar44 & 0x1f) & 0x18) == 0) {
          uVar15 = uVar15 + 1;
          uVar32 = 1 << (uVar16 & 0x3f) | uVar32;
          uVar53 = 0;
          if (uVar16 != 0) {
            lVar30 = uVar47 - 0x130;
            do {
              if (iVar12 == *(int *)lVar30) break;
              uVar53 = uVar53 + 1;
              lVar30 = lVar30 + 4;
            } while (uVar53 < uVar16);
          }
          if (uVar53 == uVar16) {
            uVar10 = uVar10 + 1;
          }
          dVar59 = (double)fn_82B80EE0(iVar12,*(unsigned int *)*piVar17 >> 5 & 3,*(unsigned int *)*piVar17 & 0x1f);
          lVar29 = lVar29 + 4;
          *(float *)lVar29 = (float)dVar59;
          lVar45 = lVar45 + 1;
        }
        else {
          uVar53 = (unsigned int)((uVar22 & 0xffffffff) >> 3) & 0x1ffffffc;
          uVar19 = uVar19 + 1;
          *(unsigned int *)((int)auStack_150 + uVar53) =
               (1 << (uVar16 & 0x3f)) << ((unsigned int)uVar22 & 0x1f) |
               *(unsigned int *)((int)auStack_150 + uVar53);
          uVar22 = uVar22 + 4;
        }
      }
      uVar16 = uVar16 + 1;
      lVar23 = lVar23 + 4;
      piVar17 = piVar17 + 1;
      uVar44 = uVar44 + 5;
    } while (uVar16 < uVar55);
    if (uVar15 == 0) goto LAB_82b126b4;
    param_1 = (unsigned __int64)uStack00000014;
    if (1 < uVar10) {
      iVar12 = fn_82B86888(param_1,lVar45,uVar47 - 0x120,0);
      uVar22 = 0;
      uVar10 = 0;
      lVar45 = uVar47 - 0x130;
      do {
        if ((*(unsigned int *)(*(int *)lVar45 + 8) & 0x3f80) == 16000) {
          uVar9 = fn_82AD1870(param_1,iVar12,1,uVar22 | 0xe4,0);
          uVar22 = uVar22 + 1;
          fn_82AD35A8(param_3,uVar10,uVar9,param_1);
        }
        uVar10 = uVar10 + 1;
        lVar45 = lVar45 + 4;
      } while (uVar10 < uVar55);
      fn_82AEFCD8(iVar12);
      *(unsigned int *)(iVar12 + 8) = *(unsigned int *)(iVar12 + 8) | 0x1000000;
    }
    if (uVar55 <= uVar15) {
      fn_82B8EA70(uVar47 - 0x140,param_3,param_1,0);
      if (param_3[1] != 0) {
        uVar9 = fn_82AD1870(param_1,0,uVar55,0xe4,0);
        uVar9 = fn_82AF77E0(param_1,0,param_3,uVar9,uVar9);
        uStack_144 = 0;
        fn_82B8CB58(param_1,param_3,uVar9,0xe4,0,0,uVar47 - 0x144);
      }
      if (param_3[1] == 0) {
        fn_82B8AC10(param_1,param_3,0,1);
        fn_82AEFCD8(0);
        uRam00000008 = uRam00000008 | 0x1000000;
        return 1;
      }
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0x12c0);
    }
    uVar15 = (unsigned int)((uVar19 & 0xffffffff) >> 1) & 0x1ffffffc;
    uVar47 = uVar19 & 0xffffffff;
    uVar19 = uVar19 + 1;
    *(unsigned int *)((int)auStack_150 + uVar15) =
         uVar32 << ((unsigned int)(uVar47 << 2) & 0x1c) | *(unsigned int *)((int)auStack_150 + uVar15);
  }
  uVar11 = uStack0000001c;
  uVar47 = 0;
  if ((uVar19 & 0xffffffff) != 0) {
    uVar22 = (uVar19 & 0x3fffffff) << 2;
    uVar32 = 0;
    do {
      uVar10 = uVar32 & 0x1f;
      uVar16 = uVar32 >> 3 & 0x1ffffffc;
      uVar15 = ((2 << (uVar32 + 3 & 0x1f)) - 1U & -1 << uVar10 &
               *(unsigned int *)((int)auStack_150 + uVar16)) >> uVar10;
      if ((uVar15 == 0) || (bVar4 = true, uVar15 != (uVar15 & ~(uVar15 - 1)))) {
        bVar4 = false;
      }
      if (!bVar4) {
        bVar4 = false;
        uVar44 = 0;
        uVar53 = 0;
        for (; uVar15 != 0; uVar15 = uVar15 - (uVar15 & ~(uVar15 - 1))) {
          lVar45 = -LZCOUNT(uVar15 & ~(uVar15 - 1));
          puVar13 = *(unsigned int **)((int)((lVar45 + 0x2aU & 0xffffffff) << 2) + (int)param_3);
          uVar31 = puVar13[3];
          uVar48 = *puVar13 & 0x1f;
          if ((uVar44 != 0) &&
             ((uVar31 != uVar44 ||
              (bVar1 = uVar48 != uVar53, uVar31 = uVar44, uVar48 = uVar53, bVar1)))) {
            bVar4 = true;
            uVar31 = (unsigned int)((uVar22 & 0xffffffff) >> 3) & 0x1ffffffc;
            iVar12 = 1 << ((int)lVar45 + 0x1fU & 0x3f);
            *(int *)((int)auStack_150 + uVar16) =
                 *(int *)((int)auStack_150 + uVar16) - (iVar12 << uVar10);
            *(unsigned int *)((int)auStack_150 + uVar31) =
                 iVar12 << ((unsigned int)uVar22 & 0x1f) | *(unsigned int *)((int)auStack_150 + uVar31);
            uVar31 = uVar44;
            uVar48 = uVar53;
          }
          uVar44 = uVar31;
          uVar53 = uVar48;
        }
        if (bVar4) {
          uVar19 = uVar19 + 1;
          uVar22 = uVar22 + 4;
        }
      }
      uVar47 = uVar47 + 1;
      uVar32 = uVar32 + 4;
    } while ((uVar47 & 0xffffffff) < (uVar19 & 0xffffffff));
  }
  uVar47 = 0;
  if (1 < (uVar19 & 0xffffffff)) {
    dVar59 = (double)lbl_82002AE0;
    dVar60 = (double)lbl_821AAD20;
    do {
      puVar13 = (unsigned int *)fn_82B0FE60(param_1,param_3,uVar55,0,0);
      uVar20 = (unsigned __int64)(*puVar13 >> 0x19) & 7;
      puVar14 = (unsigned int *)fn_82B0FE60(param_1,param_3,uVar55,0,uVar20);
      uVar7 = (unsigned __int64)(*puVar14 >> 0x19) & 7;
      uVar22 = (unsigned __int64)(*puVar13 >> 5) & 0xff;
      if (uVar20 < uVar7) {
        lVar29 = uVar7 - uVar20;
        lVar45 = uVar20 << 1;
        do {
          uVar32 = (unsigned int)lVar45;
          lVar45 = lVar45 + 2;
          uVar22 = (unsigned __int64)
                   (((unsigned int)uVar22 >> ((unsigned int)((uVar20 - 1 & 0xffffffff) << 1) & 0x3e) & 3) <<
                   (uVar32 & 0x3f)) | uVar22 & ~(unsigned __int64)(unsigned int)(3 << (uVar32 & 0x3f));
          lVar29 = lVar29 + -1;
        } while (lVar29 != 0);
      }
      uVar32 = *puVar13;
      uVar15 = puVar13[3];
      uVar22 = (uVar7 << 0x14 | uVar22 & 0xff) << 5 | (unsigned __int64)uVar32 & 0xf1ffe01f;
      *puVar13 = (unsigned int)uVar22;
      uVar10 = uVar15;
      if ((*(unsigned int *)(uVar15 + 8) & 0x3f80) == 0x3b00) {
        uVar10 = *(unsigned int *)(*(int *)(uVar15 + 0x2c) + 0xc);
      }
      uVar16 = puVar14[3];
      uVar44 = uVar16;
      if ((*(unsigned int *)(uVar16 + 8) & 0x3f80) == 0x3b00) {
        uVar44 = *(unsigned int *)(*(int *)(uVar16 + 0x2c) + 0xc);
      }
      uVar53 = *(unsigned int *)(uVar10 + 8) >> 7 & 0x7f;
      if ((uVar53 == 0x7d) || (bVar4 = false, uVar53 == 0x7c)) {
        bVar4 = true;
      }
      if (bVar4) {
        uVar53 = *(unsigned int *)(uVar44 + 8) >> 7 & 0x7f;
        if ((uVar53 == 0x7d) || (bVar4 = false, uVar53 == 0x7c)) {
          bVar4 = true;
        }
        if ((bVar4) &&
           ((((uVar22 ^ *puVar14) & 0x18) != 0 ||
            (((((unsigned __int64)uVar32 & 0xf1ffe01f) >> 1 ^ (unsigned __int64)(*puVar14 >> 1)) & 1) != 0)))) {
          if (uVar15 != uVar16) {
            fn_82AF04D0(uVar15,param_1);
          }
          fn_82AF04D0(puVar14[3],param_1);
          break;
        }
      }
      dVar58 = dVar59;
      if (3 < uVar20) {
        dVar58 = dVar60;
      }
      dVar57 = dVar59;
      if (2 < uVar20) {
        dVar57 = dVar60;
      }
      dVar56 = dVar59;
      if (1 < uVar20) {
        dVar56 = dVar60;
      }
      iVar12 = fn_82B8A3A0(dVar60,dVar56,dVar57,dVar58,param_1,4);
      uVar9 = 0;
      if ((*puVar13 >> 1 & 1) == 0) {
LAB_82b12a08:
        if ((*puVar14 >> 1 & 1) != 0) {
          uVar32 = *(unsigned int *)(uVar44 + 8) >> 7 & 0x7f;
          if ((uVar32 == 0x7d) || (bVar4 = false, uVar32 == 0x7c)) {
            bVar4 = true;
          }
          if (bVar4) goto LAB_82b12a3c;
        }
      }
      else {
        uVar32 = *(unsigned int *)(uVar10 + 8) >> 7 & 0x7f;
        if ((uVar32 == 0x7d) || (bVar4 = false, uVar32 == 0x7c)) {
          bVar4 = true;
        }
        if (!bVar4) goto LAB_82b12a08;
LAB_82b12a3c:
        uVar9 = 2;
      }
      uVar9 = fn_82AD1870(param_1,iVar12,uVar7,0xe4,uVar9);
      uVar15 = fn_82AD36D8(param_1,uVar11,0,uVar9,puVar13,puVar14);
      fn_82AEFCD8(iVar12);
      *(unsigned int *)(iVar12 + 8) = *(unsigned int *)(iVar12 + 8) | 0x1000000;
      fn_82B10DF8(param_1,param_3,uVar55,0,uVar15,0);
      fn_82B10DF8(param_1,param_3,uVar55,0,uVar15,uVar20);
      uVar32 = uVar15 & 0xfffffffe;
      puVar13 = (unsigned int *)(((unsigned int)param_3 & 0xfffffffe) + 0x24);
      *(unsigned int *)(uVar32 + 0x24) = *puVar13;
      *(unsigned int *)(*puVar13 & 0xfffffffe) = uVar32;
      *(unsigned int *)(uVar32 + 0x28) = (unsigned int)param_3 & 0xfffffffe;
      *puVar13 = uVar32 + 0x28;
      fn_82AD1B28(uVar15);
      fn_82AE93B0(uVar15);
      uVar19 = uVar19 - 2;
      uVar47 = uVar47 + 1;
      *(unsigned int *)(uVar15 + 8) = *(unsigned int *)(uVar15 + 8) | 0x1000000;
    } while (1 < (uVar19 & 0xffffffff));
  }
  if ((uVar19 & 0xffffffff) != 0) {
    uVar47 = uVar47 + uVar19;
    puVar13 = (unsigned int *)(((unsigned int)param_3 & 0xfffffffe) + 0x24);
    do {
      uVar9 = fn_82B0FE60(param_1,param_3,uVar55,0,0);
      uVar15 = fn_82AD35E8(param_1,uVar11,0,uVar9,uVar9);
      fn_82B10DF8(param_1,param_3,uVar55,0,uVar15,0);
      uVar32 = uVar15 & 0xfffffffe;
      *(unsigned int *)(uVar32 + 0x24) = *puVar13;
      *(unsigned int *)(*puVar13 & 0xfffffffe) = uVar32;
      *(unsigned int *)(uVar32 + 0x28) = (unsigned int)param_3 & 0xfffffffe;
      *puVar13 = uVar32 + 0x28;
      fn_82AD1B28(uVar15);
      fn_82AE93B0(uVar15);
      uVar19 = uVar19 - 1;
      *(unsigned int *)(uVar15 + 8) = *(unsigned int *)(uVar15 + 8) | 0x1000000;
    } while (uVar19 != 0);
  }
  if ((1 << uVar55 == 1) && ((uVar47 & 0xffffffff) == 1)) {
    uVar15 = 0;
    uVar32 = 0;
    if (uVar55 != 0) {
      uVar10 = 0;
      piVar17 = param_3 + 10;
      do {
        piVar17 = piVar17 + 1;
        uVar32 = ((unsigned int *)*piVar17)[3];
        uVar15 = uVar15 & ~(3 << (uVar10 & 0x3f)) | (*(unsigned int *)*piVar17 >> 5 & 3) << (uVar10 & 0x3f);
        uVar10 = uVar10 + 2;
        uVar55 = uVar55 - 1;
      } while (uVar55 != 0);
    }
    piVar17 = param_3 + 1;
    while (iVar12 = *piVar17, iVar12 != 0) {
      if (*(int *)(iVar12 + 0x10) != 0) {
        piVar40 = (int *)(*(int *)(iVar12 + 0xc) + 4);
        for (iVar50 = *piVar40; iVar50 != iVar12; iVar50 = *(int *)(iVar50 + 8)) {
          piVar40 = (int *)(iVar50 + 8);
        }
        *piVar40 = *(int *)(iVar12 + 8);
        *(unsigned int *)(iVar12 + 8) = *(unsigned int *)(uVar32 + 4);
        *(int *)(uVar32 + 4) = iVar12;
        *(unsigned int *)(iVar12 + 0xc) = uVar32;
        fn_82ACA598(iVar12,uVar15);
      }
      if (*piVar17 == iVar12) {
        piVar17 = (int *)(iVar12 + 8);
      }
    }
  }
  else {
    fn_82B0FC78(param_1,param_3);
    piVar40 = param_3 + 0xb;
    piVar17 = piVar40;
    for (uVar32 = 0; uVar32 < ((unsigned int)param_3[2] >> 0x13 & 7); uVar32 = uVar32 + 1) {
      uVar15 = *(unsigned int *)(*piVar17 + 0xc);
      puVar13 = (unsigned int *)(uVar15 + 4);
      while (puVar14 = (unsigned int *)*puVar13, puVar14 != (unsigned int *)0x0) {
        piVar28 = (int *)puVar14[4];
        if (piVar28 != (int *)0x0) {
          if (((*puVar14 & 0x40000000) != 0) || (bVar4 = false, (*puVar14 & 0xe000000) != 0)) {
            bVar4 = true;
          }
          if ((((bVar4) && (piVar28 != param_3)) && ((piVar28[2] & 0x3f80U) == 0x3700)) &&
             ((((unsigned int)piVar28[2] >> 0x18 & 1) != 0 &&
              (cVar18 = fn_82B85910(param_3,piVar28), cVar18 != '\0')))) {
            iVar12 = 0;
            uVar47 = 0;
            uVar16 = 0;
            uVar10 = (unsigned int)param_3[2] >> 0x13 & 7;
            piVar51 = piVar40;
            for (uVar44 = 0; uVar44 < uVar10; uVar44 = uVar44 + 1) {
              iVar50 = *piVar51;
              iVar36 = *(int *)(iVar50 + 0xc);
              uVar53 = *(unsigned int *)(iVar36 + 0x14) >> 0xd & 0x1fff;
              if (uVar16 < uVar53) {
                uVar16 = uVar53;
              }
              piVar33 = piVar40;
              for (uVar53 = 0; uVar53 < uVar10; uVar53 = uVar53 + 1) {
                iVar41 = *piVar33;
                if (iVar41 == iVar50) goto LAB_82b12e10;
                if (*(int *)(iVar41 + 0xc) == iVar36) goto LAB_82b12e08;
                piVar33 = piVar33 + 1;
              }
              iVar41 = 0;
LAB_82b12e08:
              if (iVar41 == iVar50) {
LAB_82b12e10:
                piVar33 = piVar28 + 0xb;
                for (uVar53 = 0; uVar53 < ((unsigned int)piVar28[2] >> 0x13 & 7); uVar53 = uVar53 + 1) {
                  if (iVar36 == *(int *)(*piVar33 + 0xc)) {
                    uVar47 = ((unsigned __int64)(*(unsigned int *)(iVar36 + 8) >> 0xe) & 7) + uVar47;
                    goto LAB_82b12e60;
                  }
                  piVar33 = piVar33 + 1;
                }
                iVar12 = (*(unsigned int *)(iVar36 + 8) >> 0xe & 7) + iVar12;
              }
LAB_82b12e60:
              piVar51 = piVar51 + 1;
            }
            if ((iVar12 == 0) && (((unsigned __int64)((unsigned int)piVar28[2] >> 0xe) & 7) == uVar47)) {
              piVar17 = piVar28;
              if (((unsigned __int64)((unsigned int)piVar28[2] >> 0x13) & 7) < (uVar47 & 0xffffffff)) {
                piVar17 = (int *)fn_82B84350(param_1,uVar11,0);
                uVar32 = (unsigned int)piVar17 & 0xfffffffe;
                puVar13 = (unsigned int *)(((unsigned int)piVar28 & 0xfffffffe) + 0x24);
                *(unsigned int *)(uVar32 + 0x24) = *puVar13;
                *(unsigned int *)(*puVar13 & 0xfffffffe) = uVar32;
                *(unsigned int *)(uVar32 + 0x28) = (unsigned int)piVar28 & 0xfffffffe;
                *puVar13 = uVar32 + 0x28;
                fn_82B10550(param_1,piVar17,0,piVar28);
                fn_82B0FF30(param_1,piVar28,piVar17);
                fn_82B8AC10(param_1);
              }
              fn_82B0FF30(param_1,param_3,piVar17);
              goto LAB_82b11718;
            }
            piVar51 = param_3;
            if (((unsigned int)piVar28[5] >> 0xd & 0x1fff) < uVar16) {
              piVar51 = piVar28;
            }
            piVar33 = piVar51 + 0xb;
            lVar45 = 0;
            uVar10 = 0;
            uVar53 = 0;
            uVar44 = 0;
            piVar28 = piVar33;
            for (uVar16 = 0; uVar16 < ((unsigned int)piVar51[2] >> 0x13 & 7); uVar16 = uVar16 + 1) {
              if (((unsigned int *)*piVar28)[3] == uVar15) {
                uVar31 = *(unsigned int *)*piVar28 >> 5 & 3;
                iVar12 = uVar31 << 1;
                uVar10 = uVar10 & ~(3 << (uVar44 & 0x3f)) | uVar31 << (uVar44 & 0x3f);
                uVar53 = uVar53 & ~(3 << iVar12) | (int)lVar45 << iVar12;
                lVar45 = lVar45 + 1;
                uVar44 = uVar44 + 2;
              }
              piVar28 = piVar28 + 1;
            }
            uVar9 = fn_82AD1870(param_1,uVar15,lVar45,uVar10,0);
            uVar16 = fn_82AD35E8(param_1,uVar11,0,uVar9,uVar9);
            uVar10 = uVar16 & 0xfffffffe;
            puVar42 = (unsigned int *)(((unsigned int)piVar51 & 0xfffffffe) + 0x24);
            *(unsigned int *)(uVar10 + 0x24) = *puVar42;
            *(unsigned int *)(*puVar42 & 0xfffffffe) = uVar10;
            *(unsigned int *)(uVar10 + 0x28) = (unsigned int)piVar51 & 0xfffffffe;
            *puVar42 = uVar10 + 0x28;
            for (uVar10 = 0; uVar10 < ((unsigned int)piVar51[2] >> 0x13 & 7); uVar10 = uVar10 + 1) {
              puVar42 = (unsigned int *)*piVar33;
              if (puVar42[3] == uVar15) {
                puVar43 = (unsigned int *)(puVar42[3] + 4);
                for (puVar39 = (unsigned int *)*puVar43; puVar39 != puVar42; puVar39 = (unsigned int *)puVar39[2]) {
                  puVar43 = puVar39 + 2;
                }
                *puVar43 = puVar42[2];
                puVar42[2] = *(unsigned int *)(uVar16 + 4);
                *(unsigned int **)(uVar16 + 4) = puVar42;
                puVar42[3] = uVar16;
                fn_82ACA598(puVar42,uVar53);
                *puVar42 = *puVar42 & 0xffffffe0;
              }
              piVar33 = piVar33 + 1;
            }
            fn_82AD1B28(uVar16);
            fn_82AE93B0(uVar16);
            *(unsigned int *)(uVar16 + 8) = *(unsigned int *)(uVar16 + 8) | 0x1000000;
            fn_82B0FC78(param_1,piVar51);
            if (((unsigned int)piVar51[2] >> 0x17 & 1) != 0) {
              piVar51[2] = piVar51[2] & 0xff7fffff;
              fn_82B102D8(param_1,piVar51);
            }
            if (piVar51 == param_3) break;
          }
        }
        if ((unsigned int *)*puVar13 == puVar14) {
          puVar13 = puVar14 + 2;
        }
      }
      piVar17 = piVar17 + 1;
    }
    if (((unsigned int)param_3[2] >> 0xe & 7) <= uVar55) {
      *param_3 = 0;
      if (uVar55 != 0) {
        iVar12 = (uVar55 + 10) * 4;
        do {
          iVar50 = *(int *)(iVar12 + (int)param_3);
          iVar12 = iVar12 + -4;
          *(int *)(iVar50 + 4) = *param_3;
          *param_3 = iVar50;
          uVar55 = uVar55 - 1;
        } while (uVar55 != 0);
      }
      return 0;
    }
    fn_82B103B8(param_1,param_3);
  }
LAB_82b11718:
  fn_82B8AC10(param_1,param_3,0,1);
  return 1;
}

