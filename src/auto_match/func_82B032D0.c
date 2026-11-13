typedef unsigned char bool;
#define true 1
#define false 0
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
#define BADSPACEBASE char
extern unsigned int *auStack_370;
extern unsigned int *auStack_3b0;
extern unsigned int *auStack_3f0;
extern unsigned int *auStack_450;
extern int fn_82AA6648();
extern int fn_82AA66A8();
extern int fn_82ABDBA0();
extern int fn_82ABDBE8();
extern int fn_82ABE250();
extern int fn_82ABE2E0();
extern int fn_82ABE5F8();
extern int fn_82ABE870();
extern int fn_82ABF768();
extern int fn_82AC6808();
extern int fn_82AC9EE0();
extern int fn_82AC9F80();
extern int fn_82ACA598();
extern int fn_82ACA920();
extern int fn_82AD0098();
extern int fn_82AD12C8();
extern int fn_82AD17B0();
extern int fn_82AD1870();
extern int fn_82AD18C0();
extern int fn_82AD1918();
extern int fn_82AD1978();
extern int fn_82AD19D8();
extern int fn_82AD1B28();
extern int fn_82AD20C0();
extern int fn_82AD35A8();
extern int fn_82AD6090();
extern int fn_82ADD810();
extern int fn_82AEFA80();
extern int fn_82AEFB18();
extern int fn_82AEFCD8();
extern int fn_82AEFDB8();
extern int fn_82AF06E8();
extern int fn_82AF4A00();
extern int fn_82AF4BA8();
extern int fn_82AF4D10();
extern int fn_82AF50F8();
extern int fn_82AF5160();
extern int fn_82AF5618();
extern int fn_82AF59F0();
extern int fn_82AF5D98();
extern int fn_82AF5EC0();
extern int fn_82AF6CC8();
extern int fn_82AF6E60();
extern int fn_82AF6F10();
extern int fn_82AF76C8();
extern int fn_82AF7710();
extern int fn_82AF77E0();
extern int fn_82AF78B0();
extern int fn_82AF7B20();
extern int fn_82AF7E20();
extern int fn_82AF7EE8();
extern int fn_82AF7FB0();
extern int fn_82AF87E0();
extern int fn_82AF88B0();
extern int fn_82AF8FA0();
extern int fn_82AF9290();
extern int fn_82AF9758();
extern int fn_82AF9DC8();
extern int fn_82AF9FF8();
extern int fn_82AFA378();
extern int fn_82AFB320();
extern int fn_82AFB698();
extern int fn_82AFC3B8();
extern int fn_82AFD740();
extern int fn_82AFE0E8();
extern int fn_82AFE190();
extern int fn_82AFE520();
extern int fn_82AFE7E0();
extern int fn_82AFED98();
extern int fn_82AFEEB0();
extern int fn_82B004A8();
extern int fn_82B02370();
extern int fn_82B02A28();
extern int fn_82B02F98();
extern int fn_82B09658();
extern int fn_82B0FC78();
extern int fn_82B168F8();
extern int fn_82B16998();
extern int fn_82B24700();
extern int fn_82B471E8();
extern int fn_82B80EE0();
extern int fn_82B81938();
extern int fn_82B82D28();
extern int fn_82B841E8();
extern int fn_82B843F0();
extern int fn_82B86888();
extern int fn_82B8A3A0();
extern int fn_82B8AC10();
extern int fn_82B8BCB0();
extern int fn_82B8C058();
extern int fn_82B8C970();
extern int fn_82B8D2B8();
extern int fn_82B8D3D0();
extern int fn_82B8D488();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005758;
extern unsigned int lbl_820D7D43;
extern unsigned int lbl_821AAD20;
extern unsigned int register0x0000000c;
extern unsigned int stack0x00000000;


void fn_82B032D0(unsigned __int64 param_1,unsigned __int64 param_2,unsigned int param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  bool bVar4;
  float fVar5;
  int iVar9;
  unsigned __int64 uVar6;
  unsigned int *puVar10;
  unsigned int uVar11;
  unsigned __int64 uVar7;
  char cVar25;
  int iVar12;
  int iVar13;
  int iVar14;
  unsigned int uVar15;
  unsigned int *puVar16;
  unsigned int uVar17;
  unsigned int uVar18;
  unsigned int uVar19;
  unsigned int *puVar20;
  unsigned int *puVar21;
  unsigned int *puVar22;
  int iVar23;
  unsigned __int64 uVar8;
  unsigned int uVar24;
  unsigned int uVar26;
  unsigned int uVar27;
  unsigned int uVar28;
  unsigned int uVar29;
  unsigned int uVar30;
  unsigned int uVar31;
  int iVar32;
  __int64 lVar33;
  int *piVar34;
  unsigned int *puVar35;
  unsigned int uVar39;
  int iVar40;
  unsigned __int64 uVar36;
  unsigned __int64 uVar37;
  unsigned int *puVar41;
  double *pdVar42;
  __int64 lVar38;
  unsigned int *puVar43;
  unsigned __int64 uVar44;
  __int64 lVar45;
  unsigned __int64 uVar46;
  unsigned __int64 uVar47;
  unsigned __int64 uVar48;
  unsigned __int64 uVar49;
  int *piVar50;
  unsigned __int64 uVar51;
  __int64 lVar52;
  unsigned int *puVar53;
  unsigned __int64 uVar54;
  bool bVar55;
  unsigned __int64 uVar56;
  unsigned __int64 uVar57;
  unsigned __int64 uVar58;
  double dVar59;
  double dVar60;
  double dVar61;
  double dVar62;
  unsigned int auStack_450 [24];
  unsigned int auStack_3f0 [16];
  unsigned int auStack_3b0 [16];
  unsigned int auStack_370 [220];
  
  uVar58 = ZEXT48(&stack0x00000000);
  iVar9 = fn_82F6A548();
  lVar45 = uVar58 - 0x4c0;
  iVar14 = (int)lVar45;
  *(BADSPACEBASE **)iVar14 = register0x0000000c;
  iVar23 = (int)param_2;
  uVar18 = *(unsigned int *)(iVar23 + 8);
  *(int *)(iVar14 + 0x4d4) = iVar9;
  uVar39 = uVar18 >> 7 & 0x7f;
  *(int *)(iVar14 + 0x4dc) = iVar23;
  *(unsigned int *)(iVar14 + 0x4e4) = param_3;
  dVar62 = lbl_82005710;
  if (uVar39 == 1) {
    cVar25 = fn_82ABF768(lbl_82005710,*(unsigned int *)(iVar23 + 0x30));
    if (cVar25 != '\0') {
      if ((*(unsigned int *)(iVar23 + 8) & 1) != 0) {
        uVar6 = fn_82AF77E0(iVar9,0,param_2,*(unsigned int *)(iVar23 + 0x2c),
                                  *(unsigned int *)(iVar23 + 0x2c));
        *(unsigned int *)((int)uVar6 + 8) = *(unsigned int *)((int)uVar6 + 8) | 1;
        goto LAB_82b06944;
      }
      uVar6 = (unsigned __int64)*(unsigned int *)(*(int *)(iVar23 + 0x2c) + 0xc);
      fn_82AFEEB0(iVar9,param_2,*(int *)(iVar23 + 0x2c),0);
      cVar25 = fn_82ABE2E0(param_2);
      if (cVar25 != '\0') goto LAB_82b042a8;
    }
    puVar10 = *(unsigned int **)(iVar23 + 0x2c);
    puVar16 = *(unsigned int **)(iVar23 + 0x30);
    puVar22 = puVar16;
    if (((*(unsigned int *)(puVar10[3] + 8) & 0x3f80) != 0x80) &&
       ((*(unsigned int *)(puVar16[3] + 8) & 0x3f80) == 0x80)) {
      *(unsigned int **)(iVar23 + 0x2c) = puVar16;
      *(unsigned int **)(iVar23 + 0x30) = puVar10;
      puVar22 = puVar10;
      puVar10 = puVar16;
    }
    dVar59 = (double)lbl_821AAD20;
    if (((*(unsigned int *)(iVar23 + 8) & 1) == 0) &&
       (uVar18 = *(unsigned int *)(puVar10[3] + 8) >> 7 & 0x7f,
       (unsigned int)LZCOUNT(uVar18 - 0x7d) >> 5 !=
       (unsigned int)LZCOUNT((*(unsigned int *)(puVar22[3] + 8) & 0x3f80) - 16000) >> 5)) {
      puVar16 = puVar22;
      if (uVar18 == 0x7d) {
        puVar16 = puVar10;
        puVar10 = puVar22;
      }
      uVar39 = 0;
      for (uVar18 = *(unsigned int *)(iVar23 + 8) >> 1 & 0xf; uVar18 != 0;
          uVar18 = uVar18 - (uVar18 & ~(uVar18 - 1))) {
        uVar6 = 0x1f - LZCOUNT(uVar18 & ~(uVar18 - 1));
        dVar61 = (double)fn_82B80EE0(puVar16[3],
                                      (*puVar16 >> 5 & 0xff) >>
                                      ((unsigned int)((uVar6 & 0xffffffff) << 1) & 0x3e) & 3,*puVar16 & 0x1f
                                     );
        if (dVar61 == dVar59) {
          uVar39 = 1 << ((unsigned int)uVar6 & 0x3f) | uVar39;
        }
      }
      if (uVar39 != 0) {
        iVar9 = *(int *)(iVar14 + 0x4dc);
        uVar24 = *(unsigned int *)(iVar14 + 0x4d4);
        puVar22 = (unsigned int *)(iVar9 + 4);
        puVar16 = *(unsigned int **)(iVar9 + 4);
        do {
          bVar55 = false;
          for (puVar53 = puVar16; puVar53 != (unsigned int *)0x0; puVar53 = (unsigned int *)puVar53[2]) {
            uVar18 = puVar53[4];
            if (uVar18 != 0) {
              uVar15 = *puVar53;
              uVar11 = uVar15 >> 0x19 & 7;
              if (uVar11 != 0) {
                uVar17 = 0;
                uVar19 = 0;
                if (uVar11 != 0) {
                  uVar26 = 0;
                  do {
                    uVar19 = uVar19 + 1;
                    uVar29 = uVar26 & 0x3f;
                    uVar26 = uVar26 + 2;
                    uVar17 = 1 << ((uVar15 >> 5 & 0xff) >> uVar29 & 3) | uVar17;
                  } while (uVar19 < uVar11);
                }
                if ((uVar17 & uVar39) != 0) {
                  if ((uVar17 & ~uVar39) == 0) {
                    uVar11 = *(unsigned int *)(uVar18 + 8) >> 7 & 0x7f;
                    if ((uVar11 == 0) || (bVar4 = true, 0x66 < uVar11)) {
                      bVar4 = false;
                    }
                    if ((bVar4) &&
                       (cVar25 = fn_82AEFDB8(uVar18,puVar10[3],uVar24), cVar25 != '\0')) {
                      uVar18 = *puVar10;
                      if ((((uVar18 & 0x18) == 0) || ((uVar15 & 0x18) == 0)) &&
                         (((uVar18 & 2) == 0 || ((uVar15 & 1) == 0)))) {
                        if (((uVar18 & 4) == 0) || (bVar4 = false, (uVar15 & 1) == 0)) {
                          bVar4 = true;
                        }
                      }
                      else {
                        bVar4 = false;
                      }
                      if (bVar4) goto LAB_82b06bb8;
                    }
                  }
                  uVar39 = uVar39 & ~uVar17;
                  bVar55 = true;
                }
              }
            }
LAB_82b06bb8:;}
        } while (bVar55);
        if (uVar39 != 0) {
          while (puVar16 = (unsigned int *)*puVar22, puVar16 != (unsigned int *)0x0) {
            if (puVar16[4] != 0) {
              uVar18 = *puVar16;
              uVar15 = uVar18 >> 0x19 & 7;
              if (uVar15 != 0) {
                uVar11 = 0;
                uVar19 = 0;
                if (uVar15 != 0) {
                  uVar15 = 0;
                  do {
                    uVar19 = uVar19 + 1;
                    uVar11 = 1 << ((uVar18 >> 5 & 0xff) >> (uVar15 & 0x3f) & 3) | uVar11;
                    uVar15 = uVar15 + 2;
                  } while (uVar19 < (uVar18 >> 0x19 & 7));
                }
                if ((uVar11 & uVar39) != 0) {
                  uVar18 = puVar10[3];
                  puVar20 = (unsigned int *)(puVar16[3] + 4);
                  for (puVar53 = (unsigned int *)*puVar20; puVar53 != puVar16; puVar53 = (unsigned int *)puVar53[2])
                  {
                    puVar20 = puVar53 + 2;
                  }
                  *puVar20 = puVar16[2];
                  puVar16[2] = *(unsigned int *)(uVar18 + 4);
                  *(unsigned int **)(uVar18 + 4) = puVar16;
                  puVar16[3] = uVar18;
                  uVar18 = *puVar16 & 0x1f;
                  uVar15 = *puVar10 & 0x1f;
                  if (((*puVar10 & 4) != 0) && ((*puVar16 & 2) != 0)) {
                    uVar15 = uVar15 - 4;
                  }
                  if ((uVar15 & uVar18 & 4) != 0) {
                    uVar15 = uVar15 - 4;
                    uVar18 = uVar18 - 4;
                  }
                  if (((uVar15 & 1) != 0) && ((uVar18 & 2) != 0)) {
                    uVar18 = uVar18 - 2;
                  }
                  uVar11 = *puVar16;
                  uVar17 = (unsigned int)((unsigned __int64)uVar11 & 0xffffffe0);
                  *puVar16 = uVar17 | (uVar15 | uVar18) & 0x1f;
                  uVar19 = *puVar10 >> 5 & 0xff;
                  *puVar16 = ((((uVar19 >> ((uVar17 & 0x1800) >> 10) & 3) << 2 |
                               uVar19 >> ((uVar17 & 0x600) >> 8) & 3) << 2 |
                              uVar19 >> ((uVar17 & 0x180) >> 6) & 3) << 2 |
                             uVar19 >> ((unsigned int)(((unsigned __int64)uVar11 & 0xffffffe0) >> 4) & 6) & 3) << 5
                             | uVar17 & 0xffffe01f | (uVar15 | uVar18) & 0x1f;
                  fn_82AFA378(uVar24,puVar10[3]);
                  fn_82AFA378(uVar24,puVar16[4]);
                  fn_82AFA378(uVar24,iVar9);
                }
              }
            }
            if ((unsigned int *)*puVar22 == puVar16) {
              puVar22 = puVar16 + 2;
            }
          }
        }
      }
    }
    iVar9 = *(int *)(iVar14 + 0x4d4);
    if ((*(unsigned int *)(iVar9 + 0x28) & 0x8000000) == 0) {
      uVar39 = *(unsigned int *)(iVar14 + 0x4dc);
      dVar61 = (double)lbl_82002AE0;
      uVar18 = *(unsigned int *)(uVar39 + 8) >> 1 & 0xf;
LAB_82b06d7c:
      *(unsigned int *)(iVar14 + 0x8c) = uVar18;
      if (uVar18 != 0) {
        lVar45 = 0x1f - LZCOUNT(uVar18 & ~(uVar18 - 1));
        *(int *)(iVar14 + 0x70) = (int)lVar45;
        cVar25 = fn_82AF5D98(iVar9,uVar39,lVar45);
        if (cVar25 == '\0') goto LAB_82b0826c;
        fn_82B82D28(*(unsigned int *)(uVar39 + 0x2c),lVar45,uVar58 - 0x44c,uVar58 - 0x3f8,
                          uVar58 - 0x3fc,*(unsigned int *)(uVar39 + 0x1c),0,1);
        fn_82B82D28(*(unsigned int *)(uVar39 + 0x30),lVar45,uVar58 - 0x444,uVar58 - 0x400,
                          uVar58 - 0x420,*(unsigned int *)(uVar39 + 0x1c),0,1);
        iVar23 = *(int *)(iVar14 + 0xc4);
        if (iVar23 == 0) {
          puVar10 = *(unsigned int **)(iVar14 + 0x74);
          if ((((puVar10[2] & 0x3f80) == 0x900) && (*(int *)(iVar14 + 0xa0) == 0)) &&
             ((*(unsigned int *)(*(int *)(iVar14 + 0x7c) + 8) & 0x3f80) == 0x900)) {
            uVar6 = fn_82AF4A00(puVar10[0xd],0);
            if (((uVar6 & 3) != 3) ||
               (uVar6 = fn_82AF4A00(*(unsigned int *)(*(int *)(iVar14 + 0x7c) + 0x34),0),
               (uVar6 & 3) != 3)) {
LAB_82b06f30:
              iVar23 = *(int *)(iVar14 + 0xc4);
              if (iVar23 != 0) goto LAB_82b06f7c;
              puVar10 = *(unsigned int **)(iVar14 + 0x74);
              goto LAB_82b06f40;
            }
            iVar23 = *(int *)(iVar14 + 0x74);
            iVar12 = *(int *)(iVar14 + 0x7c);
            *(int *)(iVar14 + 0x6c) = iVar14 + 0x150;
            *(int *)(iVar14 + 100) = iVar14 + 0x1e0;
            *(int *)(iVar14 + 0x5c) = iVar14 + 0x78;
            *(int *)(iVar14 + 0x54) = iVar14 + 0xb8;
            uVar24 = *(unsigned int *)(iVar23 + 0x2c);
            uVar1 = *(unsigned int *)(iVar23 + 0x30);
            cVar25 = fn_82AF9FF8(iVar9,iVar23,uVar24,uVar1,iVar12,
                                       *(unsigned int *)(iVar12 + 0x2c),*(unsigned int *)(iVar12 + 0x30)
                                       ,uVar39);
            if ((cVar25 == '\0') ||
               (*(unsigned int *)(iVar9 + 0x298) <
                (*(unsigned int *)(iVar14 + 0x150) >> 4 & 0x7f) + (*(unsigned int *)(iVar14 + 0x1e0) >> 4 & 0x7f)))
            goto LAB_82b06f30;
            *(int *)(iVar14 + 0x6c) = iVar14 + 0x150;
            *(int *)(iVar14 + 0x5c) = iVar14 + 0x88;
            *(int *)(iVar14 + 0x54) = iVar14 + 0x100;
            *(int *)(iVar14 + 100) = iVar14 + 0x1e0;
            cVar25 = fn_82B004A8(iVar9,*(unsigned int *)(iVar14 + 0x74),uVar24,uVar1,
                                   *(unsigned int *)(iVar14 + 0x7c),*(unsigned int *)(iVar14 + 0xb8),
                                   *(unsigned int *)(iVar14 + 0x78),uVar39);
            if (cVar25 == '\0') goto LAB_82b06f30;
            uVar6 = fn_82AF7E20(iVar9,0,uVar39,*(unsigned int *)(iVar14 + 0x100),
                                      *(unsigned int *)(iVar14 + 0x88));
            if (*(int *)(iVar14 + 0x1e8) != 0) {
              uVar51 = fn_82AC9F80(iVar9,*(int *)(iVar14 + 0x1e8),0);
              fn_82AD1978(uVar6,uVar51);
            }
            if (*(int *)(iVar14 + 0x158) != 0) {
              uVar51 = fn_82AC9F80(iVar9,*(int *)(iVar14 + 0x158),0);
              fn_82AD1978(uVar6,uVar51);
            }
            puVar10 = *(unsigned int **)(iVar14 + 0x74);
            while( true ) {
              puVar16 = (unsigned int *)*puVar10;
              puVar22 = (unsigned int *)uVar6;
              if (puVar16 == (unsigned int *)0x0) break;
              uVar18 = *puVar16;
              if (((uVar18 & 0xe000000) == 0) &&
                 (((uVar18 >> 0x1e & 1) == 0 || ((uVar18 & 0x1ffe000) != 0)))) {
                puVar53 = (unsigned int *)puVar16[4];
                for (puVar20 = (unsigned int *)*puVar53; puVar20 != puVar16; puVar20 = (unsigned int *)puVar20[1]) {
                  puVar53 = puVar20 + 1;
                }
                *puVar53 = puVar16[1];
                puVar16[1] = *puVar22;
                *puVar22 = (unsigned int)puVar16;
                puVar16[4] = (unsigned int)puVar22;
              }
              if ((unsigned int *)*puVar10 == puVar16) {
                puVar10 = puVar16 + 1;
              }
            }
            puVar10 = *(unsigned int **)(iVar14 + 0x7c);
            while (puVar16 = (unsigned int *)*puVar10, puVar16 != (unsigned int *)0x0) {
              uVar18 = *puVar16;
              if (((uVar18 & 0xe000000) == 0) &&
                 (((uVar18 >> 0x1e & 1) == 0 || ((uVar18 & 0x1ffe000) != 0)))) {
                puVar53 = (unsigned int *)puVar16[4];
                for (puVar20 = (unsigned int *)*puVar53; puVar20 != puVar16; puVar20 = (unsigned int *)puVar20[1]) {
                  puVar53 = puVar20 + 1;
                }
                *puVar53 = puVar16[1];
                puVar16[1] = *puVar22;
                *puVar22 = (unsigned int)puVar16;
                puVar16[4] = (unsigned int)puVar22;
              }
              if ((unsigned int *)*puVar10 == puVar16) {
                puVar10 = puVar16 + 1;
              }
            }
            if ((*(unsigned int *)(iVar14 + 0x1e0) >> 0xf & 7) != 0) {
              fn_82AF6CC8(iVar9,uVar6);
            }
            if ((*(unsigned int *)(uVar39 + 8) & 1) != 0) {
              puVar22[2] = puVar22[2] | 1;
            }
            fn_82AFE7E0(iVar9,uVar39,lVar45,uVar6);
            fn_82AFA378(iVar9,uVar39);
            fn_82AFA378(iVar9,*(unsigned int *)(iVar14 + 0x74));
            puVar16 = *(unsigned int **)(iVar14 + 0x7c);
LAB_82b08434:
            fn_82AFA378(iVar9,puVar16);
            goto LAB_82b042a8;
          }
LAB_82b06f40:
          uVar18 = puVar10[2] >> 7 & 0x7f;
          if ((uVar18 < 0x10) || (bVar55 = true, 0x12 < uVar18)) {
            bVar55 = false;
          }
          if (!bVar55) goto LAB_82b06f80;
          uVar24 = *(unsigned int *)(iVar14 + 0xc0);
          iVar23 = *(int *)(iVar14 + 0xa0);
          puVar22 = puVar10;
          puVar16 = *(unsigned int **)(iVar14 + 0x7c);
LAB_82b06fc0:
          if (puVar22 == (unsigned int *)0x0) goto LAB_82b0796c;
          uVar54 = 0;
          uVar18 = puVar22[2];
          uVar15 = *(unsigned int *)(uVar39 + 8) >> 0x1a & 1;
          *(unsigned int *)(uVar39 + 8) = *(unsigned int *)(uVar39 + 8) | 0x4000000;
          uVar11 = uVar18 >> 0x1a & 1;
          lVar45 = 0;
          *(char *)(iVar14 + 0x81) = (char)uVar15;
          *(char *)(iVar14 + 0x80) = (char)uVar11;
          puVar22[2] = puVar22[2] | 0x4000000;
          for (uVar18 = *(unsigned int *)(*(int *)(iVar9 + 0x28c) + 4); ((uVar18 & 1) == 0 && (uVar18 != 0))
              ; uVar18 = *(unsigned int *)((uVar18 & 0xfffffffe) + 4)) {
            lVar45 = (unsigned __int64)*(unsigned int *)(uVar18 + 8) + lVar45;
          }
          uVar51 = 0;
          uVar6 = fn_82B02F98(iVar9,puVar22,uVar39,*(unsigned int *)(iVar14 + 0x70));
          if ((uVar6 & 0xffffffff) != 0) {
            if (uVar15 == 0) {
              *(unsigned int *)(uVar39 + 8) = *(unsigned int *)(uVar39 + 8) & 0xfbffffff;
            }
            if (uVar11 == 0) {
              puVar22[2] = puVar22[2] & 0xfbffffff;
            }
            goto LAB_82b042a8;
          }
          puVar10 = (unsigned int *)puVar22[0xb];
          puVar53 = (unsigned int *)puVar22[0xc];
          uVar18 = *puVar10 >> 0x19 & 7;
          if (uVar18 < 4) {
            if ((iVar23 == 0) && ((puVar16[2] & 0x3f80) == 0x100)) {
              fn_82B82D28(puVar16[0xb],uVar24,uVar58 - 0x38c,uVar58 - 0x318,uVar58 - 0x304,
                                *(unsigned int *)(uVar39 + 0x1c),0,1);
              fn_82B82D28(puVar16[0xc],uVar24,uVar58 - 0x394,uVar58 - 0x310,uVar58 - 0x2fc,
                                *(unsigned int *)(uVar39 + 0x1c),0,1);
              iVar12 = fn_82AD1918(iVar9,*(unsigned int *)(iVar14 + 0x134),
                                         *(unsigned int *)(iVar14 + 0x1a8),
                                         *(unsigned int *)(iVar14 + 0x1bc));
              iVar13 = fn_82AD1918(iVar9,*(unsigned int *)(iVar14 + 300),
                                         *(unsigned int *)(iVar14 + 0x1b0),
                                         *(unsigned int *)(iVar14 + 0x1c4));
              *(unsigned int *)(iVar14 + 0x84) = 0;
              *(int *)(iVar14 + 0x54) = iVar14 + 0x84;
              *(int *)(iVar14 + 100) = iVar14 + 0xd0;
              *(int *)(iVar14 + 0x6c) = iVar14 + 0x180;
              *(int *)(iVar14 + 0x5c) = iVar14 + 0x98;
              *(unsigned int *)(iVar14 + 0x98) = 0;
              cVar25 = fn_82AF9FF8(iVar9,puVar22,puVar10,puVar53,puVar16,iVar12,iVar13,uVar39)
              ;
              if ((cVar25 != '\0') &&
                 (cVar25 = fn_82AFE0E8(iVar9,puVar22,uVar39,
                                         (*(unsigned int *)(iVar14 + 0x180) >> 4 & 0x7f) +
                                         (*(unsigned int *)(iVar14 + 0xd0) >> 4 & 0x7f),3), cVar25 != '\0'))
              {
                *(int *)(iVar14 + 0x6c) = iVar14 + 0x180;
                *(int *)(iVar14 + 100) = iVar14 + 0xd0;
                *(int *)(iVar14 + 0x5c) = iVar14 + 0x90;
                *(int *)(iVar14 + 0x54) = iVar14 + 0x94;
                cVar25 = fn_82B004A8(iVar9,puVar22,puVar10,puVar53,puVar16,
                                       *(unsigned int *)(iVar14 + 0x84),*(unsigned int *)(iVar14 + 0x98)
                                       ,uVar39);
                if (cVar25 != '\0') {
                  if (uVar18 == 3) {
                    uVar6 = fn_82AF7E20();
                  }
                  else {
                    uVar6 = fn_82AF7EE8(iVar9,0,uVar39,*(unsigned int *)(iVar14 + 0x94),
                                              *(unsigned int *)(iVar14 + 0x90));
                  }
                  if (*(int *)(iVar14 + 0xd8) != 0) {
                    uVar51 = fn_82AC9F80(iVar9,*(int *)(iVar14 + 0xd8),0);
                    fn_82AD1978(uVar6,uVar51);
                  }
                  puVar10 = puVar16;
                  if (*(int *)(iVar14 + 0x188) != 0) {
                    uVar51 = fn_82AC9F80(iVar9,*(int *)(iVar14 + 0x188),0);
                    fn_82AD1978(uVar6,uVar51);
                  }
                  while( true ) {
                    puVar53 = (unsigned int *)*puVar10;
                    puVar21 = (unsigned int *)uVar6;
                    puVar20 = puVar22;
                    if (puVar53 == (unsigned int *)0x0) break;
                    uVar15 = *puVar53;
                    if (((uVar15 & 0xe000000) == 0) &&
                       (((uVar15 >> 0x1e & 1) == 0 || ((uVar15 & 0x1ffe000) != 0)))) {
                      puVar20 = (unsigned int *)puVar53[4];
                      for (puVar41 = (unsigned int *)*puVar20; puVar41 != puVar53;
                          puVar41 = (unsigned int *)puVar41[1]) {
                        puVar20 = puVar41 + 1;
                      }
                      *puVar20 = puVar53[1];
                      puVar53[1] = *puVar21;
                      *puVar21 = (unsigned int)puVar53;
                      puVar53[4] = (unsigned int)puVar21;
                    }
                    if ((unsigned int *)*puVar10 == puVar53) {
                      puVar10 = puVar53 + 1;
                    }
                  }
                  while (puVar10 = (unsigned int *)*puVar20, puVar10 != (unsigned int *)0x0) {
                    uVar15 = *puVar10;
                    if (((uVar15 & 0xe000000) == 0) &&
                       (((uVar15 >> 0x1e & 1) == 0 || ((uVar15 & 0x1ffe000) != 0)))) {
                      puVar53 = (unsigned int *)puVar10[4];
                      for (puVar41 = (unsigned int *)*puVar53; puVar41 != puVar10;
                          puVar41 = (unsigned int *)puVar41[1]) {
                        puVar53 = puVar41 + 1;
                      }
                      *puVar53 = puVar10[1];
                      puVar10[1] = *puVar21;
                      *puVar21 = (unsigned int)puVar10;
                      puVar10[4] = (unsigned int)puVar21;
                    }
                    if ((unsigned int *)*puVar20 == puVar10) {
                      puVar20 = puVar10 + 1;
                    }
                  }
                  if ((*(unsigned int *)(iVar14 + 0xd0) >> 0xf & 7) != 0) {
                    fn_82AF6CC8(iVar9,uVar6);
                  }
                  if (uVar18 == 3) {
                    if ((*(unsigned int *)(uVar39 + 8) & 1) != 0) {
                      puVar21[2] = puVar21[2] | 1;
                    }
                    fn_82AFE7E0(iVar9,uVar39,*(unsigned int *)(iVar14 + 0x70),uVar6);
                  }
                  else {
                    fn_82AFED98(iVar9,uVar39,*(unsigned int *)(iVar14 + 0x70),uVar6,puVar22);
                  }
                  if (*(char *)(iVar14 + 0x81) == '\0') {
                    *(unsigned int *)(uVar39 + 8) = *(unsigned int *)(uVar39 + 8) & 0xfbffffff;
                  }
                  if (*(char *)(iVar14 + 0x80) == '\0') {
                    puVar22[2] = puVar22[2] & 0xfbffffff;
                  }
                  fn_82AFA378(iVar9,uVar39);
                  fn_82AFA378(iVar9,puVar22);
                  goto LAB_82b08434;
                }
              }
              piVar34 = (int *)(*(int *)(iVar14 + 0x134) + 4);
              for (iVar32 = *piVar34; iVar32 != iVar12; iVar32 = *(int *)(iVar32 + 8)) {
                piVar34 = (int *)(iVar32 + 8);
              }
              *piVar34 = *(int *)(iVar32 + 8);
              fn_82ABE5F8(iVar9,iVar12,0x14,0x1a);
              piVar34 = (int *)(*(int *)(iVar14 + 300) + 4);
              for (iVar12 = *piVar34; iVar12 != iVar13; iVar12 = *(int *)(iVar12 + 8)) {
                piVar34 = (int *)(iVar12 + 8);
              }
              *piVar34 = *(int *)(iVar12 + 8);
              fn_82ABE5F8(iVar9,iVar13,0x14,0x1a);
              fn_82AFD740(iVar9,lVar45,1,0);
            }
            uVar7 = fn_82AD1918(iVar9,puVar16,uVar24,iVar23);
            iVar23 = fn_82AF9758(iVar9,puVar22,puVar10,uVar39,uVar7,uVar39,uVar58 - 0x418,1);
            puVar16 = (unsigned int *)0x0;
            puVar20 = (unsigned int *)0x0;
            if (iVar23 == 0) {
              puVar16 = puVar10;
              puVar20 = puVar53;
            }
            iVar23 = fn_82AF9758(iVar9,puVar22,puVar53,uVar39,uVar7,uVar39,uVar58 - 0x3b0,1);
            if ((iVar23 == 0) &&
               ((puVar16 == (unsigned int *)0x0 ||
                ((*(unsigned int *)(iVar14 + 0x110) & 0x7f0) < (*(unsigned int *)(iVar14 + 0xa8) & 0x7f0))))) {
              *(unsigned int *)(iVar14 + 0xa8) = *(unsigned int *)(iVar14 + 0x110);
              *(unsigned int *)(iVar14 + 0xac) = *(unsigned int *)(iVar14 + 0x114);
              *(unsigned int *)(iVar14 + 0xb0) = *(unsigned int *)(iVar14 + 0x118);
              puVar20 = puVar10;
              puVar16 = puVar53;
            }
            if (puVar16 != (unsigned int *)0x0) {
              iVar12 = 0;
              iVar13 = 0;
              puVar10 = (unsigned int *)0x0;
              iVar23 = fn_82B8C058(dVar61,iVar9,puVar20[3]);
              if (iVar23 == 4) {
                iVar12 = fn_82B8A3A0(dVar61,dVar59,dVar59,dVar59,iVar9,1);
                puVar53 = (unsigned int *)fn_82AD18C0(iVar9,iVar12,0);
                fn_82AEFCD8(iVar12);
                *(unsigned int *)(iVar12 + 8) = *(unsigned int *)(iVar12 + 8) | 0x1000000;
                puVar10 = puVar53;
                if ((*(unsigned int *)(puVar20[3] + 8) & 0x3f80) != 16000) {
LAB_82b0746c:
                  for (puVar10 = *(unsigned int **)(puVar20[3] + 4); puVar10 != (unsigned int *)0x0;
                      puVar10 = (unsigned int *)puVar10[2]) {
                    uVar15 = puVar10[4];
                    if (((uVar15 != 0) && ((*(unsigned int *)(uVar15 + 8) & 0x3f80) == 0x3700)) &&
                       ((*puVar10 & 0xe000000) != 0)) goto LAB_82b074b0;
                  }
                  uVar15 = 0;
LAB_82b074b0:
                  if (uVar15 != 0) {
                    uVar11 = 0;
                    piVar34 = (int *)(uVar15 + 0x2c);
                    do {
                      if ((*(unsigned int *)(uVar15 + 8) >> 0x13 & 7) <= uVar11) break;
                      puVar10 = (unsigned int *)*piVar34;
                      uVar8 = fn_82B8C058(dVar61,iVar9,puVar10[3]);
                      if ((unsigned int)uVar8 != 4) {
                        if ((*(unsigned int *)(uVar15 + 8) & 0x3f80) == 0x3980) goto LAB_82b0746c;
                        fn_82AFA378(iVar9,uVar15);
                        fn_82AFA378(iVar9,puVar10[3]);
                        cVar25 = fn_82B8BCB0(iVar9,puVar10[3],puVar22,1);
                        if (cVar25 != '\0') {
                          if ((unsigned int)uVar8 != (*puVar10 >> 5 & 3)) {
                            puVar10 = (unsigned int *)fn_82AD18C0(iVar9,puVar10[3],uVar8);
                          }
                          if (puVar10 != (unsigned int *)0x0) goto LAB_82b075b8;
                          break;
                        }
                      }
                      uVar11 = uVar11 + 1;
                      piVar34 = piVar34 + 1;
                    } while( true );
                  }
                  iVar13 = fn_82AF77E0(iVar9,0,puVar22,puVar53,puVar53);
                  puVar10 = (unsigned int *)fn_82AD17B0(iVar9,iVar13);
                  fn_82AD1B28(iVar13);
                  *(unsigned int *)(iVar13 + 8) = *(unsigned int *)(iVar13 + 8) | 0x1000000;
                }
LAB_82b075b8:
                uVar8 = fn_82ACA920(iVar9,puVar20,puVar20[3]);
                cVar25 = fn_82AF9DC8(iVar9,puVar22,uVar8,iVar13,puVar10,uVar39,uVar58 - 0x418)
                ;
                if (cVar25 != '\0') {
                  puVar53 = (unsigned int *)fn_82AFC3B8(iVar9,puVar22,uVar8,iVar13,puVar10,
                                                      *(unsigned int *)(uVar39 + 0x1c),uVar39,
                                                      uVar58 - 0x418);
                  uVar15 = *(unsigned int *)(puVar53[3] + 8) >> 7 & 0x7f;
                  if ((uVar15 == 0) || (bVar55 = true, 0x66 < uVar15)) {
                    bVar55 = false;
                  }
                  if (bVar55) {
                    uVar54 = fn_82AD19D8(uVar39,puVar53[3],iVar9);
                  }
                  if ((iVar13 == 0) || (cVar25 = fn_82ABE2E0(iVar13), cVar25 != '\0')) {
                    uVar6 = (unsigned __int64)*(unsigned int *)(iVar14 + 0xa8);
                  }
                  else {
                    uVar15 = *(unsigned int *)(iVar14 + 0xa8);
                    uVar11 = puVar53[3];
                    uVar19 = *(unsigned int *)(uVar11 + 8);
                    uVar46 = CONCAT44(uVar15,uVar15) & 0xfffffffffffff80f;
                    uVar44 = ((unsigned __int64)uVar15 & 0xfffffff0) + 0xa0 & 0x7f0;
                    uVar6 = uVar46 | uVar44;
                    *(int *)(iVar14 + 0xa8) = (int)uVar6;
                    if (((uVar19 & 0x3f80) == 0x680) &&
                       (iVar23 = fn_82B8C058(dVar61,iVar9,
                                                   *(unsigned int *)(*(int *)(uVar11 + 0x2c) + 0xc)),
                       iVar23 != 4)) {
                      uVar6 = ((uVar44 >> 4) - 10 & 0x7f) << 4 | uVar46;
                      *(int *)(iVar14 + 0xa8) = (int)uVar6;
                    }
                  }
                  goto LAB_82b0773c;
                }
                if (iVar13 != 0) {
                  fn_82B8AC10(iVar9,iVar13,*(unsigned int *)(iVar9 + 0x28c),1);
                  goto LAB_82b07924;
                }
                puVar20 = (unsigned int *)(iVar12 + 4);
                for (puVar16 = *(unsigned int **)(iVar12 + 4); puVar16 != puVar53;
                    puVar16 = (unsigned int *)puVar16[2]) {
                  puVar20 = puVar16 + 2;
                }
                *puVar20 = puVar16[2];
                fn_82ABE5F8(iVar9,puVar53,0x14,0x1a);
                if (puVar10 == puVar53) goto LAB_82b07924;
              }
              else {
                puVar53 = (unsigned int *)fn_82ACA920(iVar9,puVar20,puVar20[3]);
                uVar15 = *puVar53;
                uVar6 = CONCAT44(*(unsigned int *)(iVar14 + 0xa8),*(unsigned int *)(iVar14 + 0xa8)) &
                        0xfffffffffffff80f;
                *(int *)(iVar14 + 0xa8) = (int)uVar6;
                *puVar53 = (uVar18 + 1) * 0x2000000 & 0xe000000 | uVar15 & 0xf1ffe01f |
                           (~(3 << (uVar18 << 1)) << 5 & uVar15 & 0xf1ffffff |
                           (iVar23 << (uVar18 << 1)) << 5) & 0x1fe0;
                for (puVar21 = *(unsigned int **)(puVar20[3] + 4); puVar21 != (unsigned int *)0x0;
                    puVar21 = (unsigned int *)puVar21[2]) {
                  uVar15 = puVar21[4];
                  if (((uVar15 != 0) && ((*(unsigned int *)(uVar15 + 8) & 0x3f80) == 0x3700)) &&
                     ((*puVar21 & 0xe000000) != 0)) goto LAB_82b073ec;
                }
                uVar15 = 0;
LAB_82b073ec:
                if (uVar15 != 0) {
                  fn_82AFA378(iVar9);
                }
                fn_82AFA378(iVar9,puVar20[3]);
LAB_82b0773c:
                uVar8 = fn_82B841E8(iVar9,*(unsigned int *)(uVar39 + 0x1c),0,0x75,0,0);
                uVar15 = (unsigned int)uVar8 & 0xfffffffe;
                puVar20 = (unsigned int *)((uVar39 & 0xfffffffe) + 0x24);
                *(unsigned int *)(uVar15 + 0x24) = *puVar20;
                *(unsigned int *)(*puVar20 & 0xfffffffe) = uVar15;
                *(unsigned int *)(uVar15 + 0x28) = uVar39 & 0xfffffffe;
                *puVar20 = uVar15 + 0x28;
                fn_82AD1978(uVar8,puVar53);
                cVar25 = fn_82AF9DC8(iVar9,puVar22,puVar16,uVar39,uVar7,uVar39,uVar58 - 0x3d0)
                ;
                if (cVar25 != '\0') {
                  uVar15 = *(unsigned int *)(iVar14 + 0xf0);
                  uVar44 = (uVar6 & 0xffffffff) >> 4 & 0x7f;
                  lVar33 = ((unsigned __int64)(uVar15 >> 4) & 0x7f) + uVar44;
                  if (((uVar18 == 2) && ((*(unsigned int *)(uVar39 + 8) & 0x1c000) == 0x4000)) &&
                     (cVar25 = fn_82ABF768(dVar62,puVar22[0xd]), cVar25 != '\0')) {
                    lVar33 = lVar33 + 0x14;
                  }
                  if ((((((uVar6 & 0xffffffff) >> 0xf & 7) == 0) || ((uVar15 >> 0xf & 7) == 0)) ||
                      ((((unsigned __int64)(uVar15 >> 0xf) ^ (uVar6 & 0xffffffff) >> 0xf) & 5) == 0)) &&
                     ((cVar25 = fn_82AFE0E8(iVar9,puVar22,uVar39,lVar33,3), cVar25 != '\0' &&
                      (((*(int *)(iVar14 + 0xb0) == 0 || (*(int *)(iVar14 + 0xf8) == 0)) ||
                       (*(int *)(iVar14 + 0xb0) == *(int *)(iVar14 + 0xf8))))))) {
                    uVar51 = fn_82ACA920(iVar9,puVar16,puVar16[3]);
                    iVar23 = fn_82AFC3B8(iVar9,puVar22,uVar51,uVar39,uVar7,
                                               *(unsigned int *)(uVar39 + 0x1c),uVar39,uVar58 - 0x3d0)
                    ;
                    if ((uVar54 & 0xffffffff) != 0) {
                      fn_82AD20C0(uVar39,uVar54,iVar9);
                    }
                    if (iVar12 != 0) {
                      fn_82AEFCD8(iVar12);
                      *(unsigned int *)(iVar12 + 8) = *(unsigned int *)(iVar12 + 8) | 0x1000000;
                      if (iVar13 != 0) {
                        cVar25 = fn_82ABE2E0(iVar13);
                        if (cVar25 == '\0') {
                          fn_82AD1B28(iVar13);
                          *(unsigned int *)(iVar13 + 8) = *(unsigned int *)(iVar13 + 8) | 0x1000000;
                        }
                        else {
                          fn_82B8AC10(iVar9,iVar13,*(unsigned int *)(iVar9 + 0x28c),1);
                          iVar13 = 0;
                        }
                      }
                    }
                    puVar10 = (unsigned int *)puVar53[4];
                    for (puVar16 = (unsigned int *)*puVar10; puVar16 != puVar53;
                        puVar16 = (unsigned int *)puVar16[1]) {
                      puVar10 = puVar16 + 1;
                    }
                    *puVar10 = puVar53[1];
                    puVar53[4] = 0;
                    fn_82B8AC10(iVar9,uVar8,0,1);
                    puVar10 = puVar22;
                    if (uVar18 == 3) {
                      uVar6 = fn_82AF7E20();
                    }
                    else {
                      uVar6 = fn_82AF7EE8(iVar9,0,uVar39,iVar23,puVar53);
                    }
                    while( true ) {
                      puVar16 = (unsigned int *)*puVar10;
                      puVar20 = (unsigned int *)uVar6;
                      if (puVar16 == (unsigned int *)0x0) break;
                      uVar15 = *puVar16;
                      if (((uVar15 & 0xe000000) == 0) &&
                         (((uVar15 >> 0x1e & 1) == 0 || ((uVar15 & 0x1ffe000) != 0)))) {
                        puVar21 = (unsigned int *)puVar16[4];
                        for (puVar41 = (unsigned int *)*puVar21; puVar41 != puVar16;
                            puVar41 = (unsigned int *)puVar41[1]) {
                          puVar21 = puVar41 + 1;
                        }
                        *puVar21 = puVar16[1];
                        puVar16[1] = *puVar20;
                        *puVar20 = (unsigned int)puVar16;
                        puVar16[4] = (unsigned int)puVar20;
                      }
                      if ((unsigned int *)*puVar10 == puVar16) {
                        puVar10 = puVar16 + 1;
                      }
                    }
                    if (*(int *)(iVar14 + 0xb0) != 0) {
                      uVar51 = fn_82AC9F80(iVar9,*(int *)(iVar14 + 0xb0),0);
                      fn_82AD1978(uVar6,uVar51);
                    }
                    if (*(int *)(iVar14 + 0xf8) != 0) {
                      uVar51 = fn_82AC9F80(iVar9,*(int *)(iVar14 + 0xf8),0);
                      fn_82AD1978(uVar6,uVar51);
                    }
                    fn_82AF6E60(iVar9,uVar6);
                    if (uVar18 == 3) {
                      if ((*(unsigned int *)(uVar39 + 8) & 1) != 0) {
                        puVar20[2] = puVar20[2] | 1;
                      }
                      fn_82AFE7E0(iVar9,uVar39,*(unsigned int *)(iVar14 + 0x70),uVar6);
                    }
                    else {
                      fn_82AFED98(iVar9,uVar39,*(unsigned int *)(iVar14 + 0x70),uVar6,puVar22);
                    }
                    if (*(char *)(iVar14 + 0x81) == '\0') {
                      *(unsigned int *)(uVar39 + 8) = *(unsigned int *)(uVar39 + 8) & 0xfbffffff;
                    }
                    if (*(char *)(iVar14 + 0x80) == '\0') {
                      puVar22[2] = puVar22[2] & 0xfbffffff;
                    }
                    if (iVar13 != 0) {
                      fn_82AFA378(iVar9,iVar13);
                    }
                    fn_82AFA378(iVar9,uVar39);
                    fn_82AFA378(iVar9,puVar22);
                    if ((*(unsigned int *)(iVar14 + 0xf0) & 0x7f0) != 0) {
                      fn_82AFA378(iVar9,*(unsigned int *)(iVar23 + 0xc));
                    }
                    if (uVar44 == 0) goto LAB_82b042a8;
                    puVar16 = (unsigned int *)puVar53[3];
                    goto LAB_82b08434;
                  }
                }
                *(int *)(iVar9 + 0x28) = *(int *)(iVar9 + 0x28) + -0x1000;
                fn_82B8AC10(iVar9,uVar8,0,1);
                *(int *)(iVar9 + 0x28) = *(int *)(iVar9 + 0x28) + 0x1000;
                if ((uVar54 & 0xffffffff) != 0) {
                  fn_82AD20C0(uVar39,uVar54,iVar9);
                }
                if (iVar13 != 0) {
                  fn_82AD1B28(iVar13);
                  *(unsigned int *)(iVar13 + 8) = *(unsigned int *)(iVar13 + 8) | 0x1000000;
                  fn_82AFA378(iVar9,iVar13);
                }
              }
              if (puVar10 != (unsigned int *)0x0) {
                uVar18 = *puVar10;
                uVar15 = puVar10[3];
                uVar51 = fn_82AFD740(iVar9,lVar45,0,0);
                if ((*(unsigned int *)(uVar15 + 8) & 0x3f80) != 0x3980) {
                  fn_82B8C970(iVar9,uVar15,uVar18 >> 5 & 3);
                }
              }
            }
          }
LAB_82b07924:
          fn_82AFD740(iVar9,lVar45,1,uVar51);
          if (*(char *)(iVar14 + 0x81) == '\0') {
            *(unsigned int *)(uVar39 + 8) = *(unsigned int *)(uVar39 + 8) & 0xfbffffff;
          }
          if (*(char *)(iVar14 + 0x80) == '\0') {
            puVar22[2] = puVar22[2] & 0xfbffffff;
          }
          puVar10 = *(unsigned int **)(iVar14 + 0x74);
        }
        else {
LAB_82b06f7c:
          puVar10 = *(unsigned int **)(iVar14 + 0x74);
LAB_82b06f80:
          if (*(int *)(iVar14 + 0xa0) == 0) {
            puVar22 = *(unsigned int **)(iVar14 + 0x7c);
            uVar18 = puVar22[2] >> 7 & 0x7f;
            if ((uVar18 < 0x10) || (bVar55 = true, 0x12 < uVar18)) {
              bVar55 = false;
            }
            if (bVar55) {
              uVar24 = *(unsigned int *)(iVar14 + 200);
              puVar16 = puVar10;
              goto LAB_82b06fc0;
            }
          }
        }
LAB_82b0796c:
        if (*(unsigned int *)(iVar14 + 0x4e4) < 3) {
          puVar16 = (unsigned int *)fn_82ABE250(*(unsigned int *)(iVar14 + 0x4d4),8,0);
          puVar10 = puVar16 + 1;
          puVar16[1] = (unsigned int)puVar16 | 1;
          *puVar16 = (unsigned int)puVar10 | 1;
          uVar18 = 0;
          fn_82B24700(uVar58 - 0x3e0,puVar16);
          iVar9 = *(int *)(iVar14 + 0x4dc);
          uVar39 = 0;
          *(unsigned int *)(iVar14 + 0xe8) = 0;
          uVar54 = 1;
          iVar23 = *(int *)(iVar14 + 0xe0);
          *(unsigned int *)(iVar14 + 0xe4) =
               -(unsigned int)((*(unsigned int *)(iVar23 + 4) & 1) == 0) & *(unsigned int *)(iVar23 + 4);
          uVar6 = 1;
          do {
            for (puVar22 = *(unsigned int **)(iVar9 + 4); puVar22 != (unsigned int *)0x0;
                puVar22 = (unsigned int *)puVar22[2]) {
              uVar15 = puVar22[4];
              if ((uVar15 != 0) && ((*puVar22 & 0xe000000) != 0)) {
                uVar11 = *(unsigned int *)(uVar15 + 8) >> 7 & 0x7f;
                if ((uVar11 == 1) && (puVar22 == *(unsigned int **)(uVar15 + 0x2c))) {
                  uVar11 = *puVar10;
                  *(unsigned int *)(iVar14 + 0x120) = uVar15;
                  *(int *)(iVar14 + 0x124) = (int)uVar54 + 1;
                  if ((uVar11 & 1) == 0) {
                    uVar15 = *puVar16 & 0xfffffffe;
                    iVar9 = uVar15 - 4;
                    if ((iVar9 == 0) || (*(unsigned int *)(uVar15 + 8) < *(int *)(uVar15 + 4) + 1U))
                    goto LAB_82b07a60;
                  }
                  else {
LAB_82b07a60:
                    iVar9 = fn_82AF87E0(puVar16,1);
                  }
                  iVar12 = *(int *)(iVar9 + 8);
                  uVar18 = uVar18 + 1;
                  uVar51 = *(unsigned __int64 *)(iVar14 + 0x120);
                  *(int *)(iVar9 + 8) = iVar12 + 1;
                  *(unsigned __int64 *)((iVar12 + 2) * 8 + iVar9) = uVar51;
                }
                else if (uVar11 == 0x6e) {
                  uVar11 = *(unsigned int *)(uVar15 + 8) >> 0x13 & 7;
                  uVar19 = 0;
                  if (uVar11 != 0) {
                    puVar43 = (unsigned int *)(uVar15 + 0x2c);
                    uVar19 = 0;
                    do {
                      if ((unsigned int *)*puVar43 == puVar22) break;
                      uVar19 = uVar19 + 1;
                      puVar43 = puVar43 + 1;
                    } while (uVar19 < uVar11);
                  }
                  for (puVar53 = *(unsigned int **)(uVar15 + 4); puVar53 != (unsigned int *)0x0;
                      puVar53 = (unsigned int *)puVar53[2]) {
                    uVar15 = puVar53[4];
                    if ((uVar15 != 0) && ((*(unsigned int *)(uVar15 + 8) & 0x3f80) == 0x80)) {
                      uVar11 = *puVar53;
                      uVar17 = 0;
                      if ((uVar11 & 0xe000000) != 0) {
                        uVar26 = 0;
                        do {
                          if (((uVar11 >> 5 & 0xff) >> (uVar26 & 0x3f) & 3) == uVar19) {
                            uVar11 = *puVar10;
                            *(unsigned int *)(iVar14 + 0x170) = uVar15;
                            *(int *)(iVar14 + 0x174) = (int)uVar54 + 1;
                            if ((uVar11 & 1) == 0) {
                              uVar11 = *puVar16 & 0xfffffffe;
                              iVar9 = uVar11 - 4;
                              if ((iVar9 == 0) ||
                                 (*(unsigned int *)(uVar11 + 8) < *(int *)(uVar11 + 4) + 1U))
                              goto LAB_82b07b54;
                            }
                            else {
LAB_82b07b54:
                              iVar9 = fn_82AF87E0(puVar16,1);
                            }
                            iVar12 = *(int *)(iVar9 + 8);
                            uVar18 = uVar18 + 1;
                            uVar51 = *(unsigned __int64 *)(iVar14 + 0x170);
                            *(int *)(iVar9 + 8) = iVar12 + 1;
                            *(unsigned __int64 *)((iVar12 + 2) * 8 + iVar9) = uVar51;
                          }
                          uVar11 = *puVar53;
                          uVar17 = uVar17 + 1;
                          uVar26 = uVar26 + 2;
                        } while (uVar17 < (uVar11 >> 0x19 & 7));
                      }
                    }
                  }
                }
              }
            }
            if ((uVar39 == uVar18) || (10000 < uVar18)) goto LAB_82b07c14;
            if (uVar39 == 0) {
              uVar15 = *(unsigned int *)(iVar23 + 4);
              *(unsigned int *)(iVar14 + 0xe8) = 0;
              *(unsigned int *)(iVar14 + 0xe4) = -(unsigned int)((uVar15 & 1) == 0) & uVar15;
            }
            else {
              fn_82ABE870(uVar58 - 0x3e0);
              iVar23 = *(int *)(iVar14 + 0xe0);
            }
            uVar39 = uVar39 + 1;
            piVar34 = (int *)((*(int *)(iVar14 + 0xe8) + 2) * 8 + *(int *)(iVar14 + 0xe4));
            uVar54 = (unsigned __int64)(unsigned int)piVar34[1];
            iVar9 = *piVar34;
            if (uVar6 < uVar54) {
              uVar6 = uVar54;
            }
          } while( true );
        }
        goto LAB_82b07dac;
      }
      if ((*(unsigned int *)(uVar39 + 8) & 0x1c000) == 0x8000) {
        uVar18 = 0;
        while (uVar15 = *(unsigned int *)(uVar39 + 8), *(unsigned int *)(iVar14 + 0x98) = uVar18,
              uVar18 < (uVar15 >> 0x13 & 7)) {
          puVar10 = *(unsigned int **)((uVar18 + 0xb) * 4 + uVar39);
          uVar18 = *puVar10;
          *(unsigned int **)(iVar14 + 0x100) = puVar10;
          if ((uVar18 & 0x1f) == 0) {
            uVar18 = puVar10[3];
            if (((*(unsigned int *)(uVar18 + 8) & 0x3f80) == 0x80) &&
               ((*(unsigned int *)(uVar18 + 8) & 0x1c000) == 0x8000)) {
              for (iVar23 = *(int *)(uVar18 + 4); iVar23 != 0; iVar23 = *(int *)(iVar23 + 8)) {
                if ((*(unsigned int *)(iVar23 + 0x10) != 0) && (*(unsigned int *)(iVar23 + 0x10) != uVar39)) {
                  bVar55 = true;
                  goto LAB_82b08a90;
                }
              }
              bVar55 = false;
LAB_82b08a90:
              if (!bVar55) {
                uVar15 = 0;
                piVar34 = (int *)(uVar18 + 0x2c);
                puVar43 = (unsigned int *)(uVar18 + 0x30);
                while( true ) {
                  uVar11 = *(unsigned int *)(uVar18 + 8);
                  *(int **)(iVar14 + 0x78) = piVar34;
                  *(unsigned int *)(iVar14 + 0xb8) = uVar15;
                  if ((uVar11 >> 0x13 & 7) <= uVar15) break;
                  puVar10 = (unsigned int *)*piVar34;
                  if ((*puVar10 & 0x1f) == 0) {
                    uVar11 = puVar10[3];
                    uVar19 = *(unsigned int *)(uVar11 + 8) >> 7 & 0x7f;
                    if (((uVar19 == 2) && ((*(unsigned int *)(uVar11 + 8) & 0x1c000) != 0x8000)) ||
                       (uVar19 == 0x6e)) {
                      for (iVar23 = *(int *)(uVar11 + 4); iVar23 != 0; iVar23 = *(int *)(iVar23 + 8)
                          ) {
                        uVar19 = *(unsigned int *)(iVar23 + 0x10);
                        if (((uVar19 != 0) && (uVar19 != uVar39)) && (uVar19 != uVar18))
                        goto LAB_82b0919c;
                      }
                      uVar39 = *(unsigned int *)(iVar14 + 0x4dc);
                      puVar16 = *(unsigned int **)((0xc - *(int *)(iVar14 + 0x98)) * 4 + uVar39);
                      if (((*puVar16 & 0x1f) != 0) ||
                         (puVar53 = puVar16, puVar22 = (unsigned int *)*puVar43, uVar19 = uVar18,
                         puVar16[3] != uVar11)) {
                        puVar53 = (unsigned int *)*puVar43;
                        puVar22 = puVar16;
                        uVar19 = uVar39;
                        uVar39 = uVar18;
                      }
                      if (((*puVar53 & 0x1f) == 0) && (puVar53[3] == uVar11)) {
                        uVar17 = *(unsigned int *)(*(int *)(iVar14 + 0x4dc) + 8) >> 1 & 0xf;
                        uVar26 = uVar17 & ~(uVar17 - 1);
                        uVar17 = uVar17 - uVar26;
                        uVar44 = 0x1f - LZCOUNT(uVar26);
                        uVar54 = 0x1f - LZCOUNT(uVar17 & ~(uVar17 - 1));
                        cVar25 = fn_82AF5D98(iVar9,*(int *)(iVar14 + 0x4dc),uVar44);
                        if ((cVar25 == '\0') ||
                           (cVar25 = fn_82AF5D98(iVar9,*(unsigned int *)(iVar14 + 0x4dc),uVar54)
                           , cVar25 == '\0')) break;
                        uVar17 = **(unsigned int **)(iVar14 + 0x100) >> 5 & 0xff;
                        uVar6 = (unsigned __int64)(uVar17 >> ((unsigned int)((uVar44 & 0xffffffff) << 1) & 0x3e)) &
                                3;
                        uVar46 = (unsigned __int64)(uVar17 >> ((unsigned int)((uVar54 & 0xffffffff) << 1) & 0x3e))
                                 & 3;
                        uVar56 = uVar54;
                        uVar48 = uVar44;
                        if (uVar39 == uVar18) {
                          uVar56 = uVar46;
                          uVar48 = uVar6;
                        }
                        if ((*(unsigned int *)(uVar11 + 8) & 0x3f80) == 0x3700) {
                          uVar26 = *puVar10 >> 5 & 0xff;
                          uVar17 = *puVar53 >> 5 & 0xff;
                          puVar10 = *(unsigned int **)(((uVar26 >> (int)(uVar6 << 1) & 3) + 0xb) * 4 +
                                              uVar11);
                          puVar16 = *(unsigned int **)(((uVar17 >> ((unsigned int)((uVar48 & 0xffffffff) << 1) &
                                                           0x3e) & 3) + 0xb) * 4 + uVar11);
                          uVar39 = *puVar10;
                          if ((((uVar39 & 0x1f) == 0) && (uVar29 = puVar10[3], uVar29 == puVar16[3])
                              ) && ((*(unsigned int *)(uVar29 + 8) & 0x3f80) == 0x100)) {
                            for (iVar23 = *(int *)(uVar29 + 4); iVar23 != 0;
                                iVar23 = *(int *)(iVar23 + 8)) {
                              if ((*(unsigned int *)(iVar23 + 0x10) != 0) &&
                                 (*(unsigned int *)(iVar23 + 0x10) != uVar11)) {
                                bVar55 = true;
                                goto LAB_82b08da8;
                              }
                            }
                            bVar55 = false;
LAB_82b08da8:
                            if (!bVar55) {
                              puVar20 = *(unsigned int **)(uVar29 + 0x2c);
                              puVar53 = *(unsigned int **)(uVar29 + 0x30);
                              uVar48 = (unsigned __int64)*puVar20;
                              uVar30 = *puVar16 >> 4 & 6;
                              uVar27 = *puVar20 >> 5 & 0xff;
                              uVar31 = uVar39 >> 4 & 6;
                              uVar28 = *puVar53 >> 5 & 0xff;
                              puVar10 = *(unsigned int **)(((uVar26 >> (int)(uVar46 << 1) & 3) + 0xb) * 4 +
                                                  uVar11);
                              uVar39 = *puVar10;
                              puVar16 = *(unsigned int **)(((uVar17 >> ((unsigned int)((uVar56 & 0xffffffff) << 1) &
                                                               0x3e) & 3) + 0xb) * 4 + uVar11);
                              uVar17 = (uVar27 >> uVar30 & 3) << 2 | 0xe0 | uVar27 >> uVar31 & 3;
                              uVar26 = (uVar28 >> uVar30 & 3) << 2 | 0xe0 | uVar28 >> uVar31 & 3;
                              if ((((uVar39 & 0x1f) == 0) &&
                                  (uVar27 = puVar10[3], uVar27 == puVar16[3])) &&
                                 ((*(unsigned int *)(uVar27 + 8) & 0x3f80) == 0x100)) {
                                for (iVar23 = *(int *)(uVar27 + 4); iVar23 != 0;
                                    iVar23 = *(int *)(iVar23 + 8)) {
                                  if ((*(unsigned int *)(iVar23 + 0x10) != 0) &&
                                     (*(unsigned int *)(iVar23 + 0x10) != uVar11)) {
                                    bVar55 = true;
                                    goto LAB_82b08e94;
                                  }
                                }
                                bVar55 = false;
LAB_82b08e94:
                                if (!bVar55) {
                                  puVar21 = *(unsigned int **)(uVar27 + 0x2c);
                                  uVar30 = uVar39 >> 4 & 6;
                                  puVar10 = *(unsigned int **)(uVar27 + 0x30);
                                  uVar28 = *puVar16 >> 4 & 6;
                                  uVar11 = *puVar21 >> 5 & 0xff;
                                  uVar39 = *puVar10 >> 5 & 0xff;
                                  uVar31 = (uVar11 >> uVar28 & 3) << 2 | 0xe0 | uVar11 >> uVar30 & 3
                                  ;
                                  uVar39 = (uVar39 >> uVar28 & 3) << 2 | 0xe0 | uVar39 >> uVar30 & 3
                                  ;
                                  goto LAB_82b08ef0;
                                }
                              }
                            }
                          }
                        }
                        else {
                          puVar20 = *(unsigned int **)(uVar11 + 0x2c);
                          uVar15 = *(unsigned int *)(iVar14 + 0xb8);
                          uVar17 = *puVar53 >> 5 & 0xff;
                          puVar53 = *(unsigned int **)(uVar11 + 0x30);
                          uVar39 = *puVar20;
                          uVar29 = *puVar10 >> 5 & 0xff;
                          *(unsigned __int64 *)(iVar14 + 0xb8) = (unsigned __int64)uVar39;
                          uVar39 = uVar39 >> 5 & 0xff;
                          iVar13 = (uVar17 >> ((unsigned int)((uVar48 & 0xffffffff) << 1) & 0x3e) & 3) << 1;
                          iVar32 = (uVar17 >> ((unsigned int)((uVar56 & 0xffffffff) << 1) & 0x3e) & 3) << 1;
                          iVar12 = (uVar29 >> (int)(uVar6 << 1) & 3) << 1;
                          uVar26 = *puVar53 >> 5 & 0xff;
                          iVar23 = (uVar29 >> (int)(uVar46 << 1) & 3) << 1;
                          uVar31 = (uVar39 >> iVar32 & 3) << 2 | 0xe0 | uVar39 >> iVar23 & 3;
                          uVar17 = (uVar39 >> iVar13 & 3) << 2 | 0xe0 | uVar39 >> iVar12 & 3;
                          uVar39 = (uVar26 >> iVar32 & 3) << 2 | 0xe0 | uVar26 >> iVar23 & 3;
                          uVar48 = *(unsigned __int64 *)(iVar14 + 0xb8);
                          uVar26 = (uVar26 >> iVar13 & 3) << 2 | 0xe0 | uVar26 >> iVar12 & 3;
                          puVar21 = puVar20;
                          puVar10 = puVar53;
                          uVar27 = uVar11;
                          uVar29 = uVar11;
LAB_82b08ef0:
                          uVar24 = fn_82AD1870(iVar9,puVar20[3],2,uVar17,uVar48 & 0x1f);
                          *(unsigned int *)(iVar14 + 0x94) = uVar24;
                          uVar24 = fn_82AD1870(iVar9,puVar21[3],2,uVar31,*puVar21 & 0x1f);
                          *(unsigned int *)(iVar14 + 0x84) = uVar24;
                          uVar24 = fn_82AD1870(iVar9,puVar53[3],2,uVar26,*puVar53 & 0x1f);
                          *(unsigned int *)(iVar14 + 0x70) = uVar24;
                          uVar24 = fn_82AD1870(iVar9,puVar10[3],2,uVar39,*puVar10 & 0x1f);
                          *(unsigned int *)(iVar14 + 0x8c) = uVar24;
                          uVar56 = uVar44;
                          uVar48 = uVar54;
                          if (uVar19 == uVar18) {
                            uVar56 = uVar6;
                            uVar48 = uVar46;
                          }
                          uVar24 = fn_82B471E8(iVar9,puVar22,uVar56);
                          *(unsigned int *)(iVar14 + 0x88) = uVar24;
                          uVar24 = fn_82B471E8(iVar9,puVar22,uVar48);
                          *(unsigned int *)(iVar14 + 0x90) = uVar24;
                          cVar25 = fn_82AF9290(iVar9,uVar58 - 0x42c,uVar58 - 0x450,
                                                     uVar58 - 0x438);
                          if ((((cVar25 != '\0') &&
                               (cVar25 = fn_82AF4D10(iVar9,*(unsigned int *)(iVar14 + 0x94),
                                                           uVar29,*(unsigned int *)(iVar14 + 0x70),
                                                           uVar29,*(unsigned int *)(iVar14 + 0x88),
                                                           uVar19,uVar58 - 0x350), cVar25 != '\0'))
                              && (cVar25 = fn_82AF9290(iVar9,uVar58 - 0x43c,uVar58 - 0x434,
                                                             uVar58 - 0x430), cVar25 != '\0')) &&
                             (cVar25 = fn_82AF4D10(iVar9,*(unsigned int *)(iVar14 + 0x84),uVar27
                                                         ,*(unsigned int *)(iVar14 + 0x8c),uVar27,
                                                         *(unsigned int *)(iVar14 + 0x90),uVar19,
                                                         uVar58 - 0x3a0), cVar25 != '\0')) {
                            iVar23 = *(int *)(iVar14 + 0x4dc);
                            uVar6 = fn_82AF7FB0(iVar9,0,iVar23,*(unsigned int *)(iVar14 + 0x94),
                                                      *(unsigned int *)(iVar14 + 0x70),
                                                      *(unsigned int *)(iVar14 + 0x88));
                            uVar58 = fn_82AF7FB0(iVar9,0,iVar23,*(unsigned int *)(iVar14 + 0x84)
                                                       ,*(unsigned int *)(iVar14 + 0x8c),
                                                       *(unsigned int *)(iVar14 + 0x90));
                            if ((*(unsigned int *)(iVar23 + 8) & 1) != 0) {
                              *(unsigned int *)((int)uVar6 + 8) = *(unsigned int *)((int)uVar6 + 8) | 1;
                              *(unsigned int *)((int)uVar58 + 8) = *(unsigned int *)((int)uVar58 + 8) | 1;
                            }
                            if (*(int *)(iVar14 + 0x170) != 0) {
                              uVar51 = fn_82AC9F80(iVar9,*(int *)(iVar14 + 0x170),0);
                              fn_82AD1978(uVar6,uVar51);
                            }
                            if (*(int *)(iVar14 + 0x120) != 0) {
                              uVar51 = fn_82AC9F80(iVar9,*(int *)(iVar14 + 0x120),0);
                              fn_82AD1978(uVar58,uVar51);
                            }
                            fn_82AF6E60(iVar9,uVar6);
                            fn_82AF6E60(iVar9,uVar58);
                            fn_82AFE7E0(iVar9,iVar23,uVar44,uVar6);
                            goto LAB_82b0802c;
                          }
                          iVar23 = *(int *)(iVar14 + 0x94);
                          puVar35 = (unsigned int *)(*(int *)(iVar23 + 0xc) + 4);
                          for (iVar12 = *(int *)(*(int *)(iVar23 + 0xc) + 4); iVar12 != iVar23;
                              iVar12 = *(int *)(iVar12 + 8)) {
                            puVar35 = (unsigned int *)(iVar12 + 8);
                          }
                          *puVar35 = *(unsigned int *)(iVar12 + 8);
                          fn_82ABE5F8(iVar9,iVar23,0x14,0x1a);
                          iVar23 = *(int *)(iVar14 + 0x70);
                          puVar35 = (unsigned int *)(*(int *)(iVar23 + 0xc) + 4);
                          for (iVar12 = *(int *)(*(int *)(iVar23 + 0xc) + 4); iVar12 != iVar23;
                              iVar12 = *(int *)(iVar12 + 8)) {
                            puVar35 = (unsigned int *)(iVar12 + 8);
                          }
                          *puVar35 = *(unsigned int *)(iVar12 + 8);
                          fn_82ABE5F8(iVar9,iVar23,0x14,0x1a);
                          iVar23 = *(int *)(iVar14 + 0x88);
                          puVar35 = (unsigned int *)(*(int *)(iVar23 + 0xc) + 4);
                          for (iVar12 = *(int *)(*(int *)(iVar23 + 0xc) + 4); iVar12 != iVar23;
                              iVar12 = *(int *)(iVar12 + 8)) {
                            puVar35 = (unsigned int *)(iVar12 + 8);
                          }
                          *puVar35 = *(unsigned int *)(iVar12 + 8);
                          fn_82ABE5F8(iVar9,iVar23,0x14,0x1a);
                          iVar23 = *(int *)(iVar14 + 0x84);
                          puVar35 = (unsigned int *)(*(int *)(iVar23 + 0xc) + 4);
                          for (iVar12 = *(int *)(*(int *)(iVar23 + 0xc) + 4); iVar12 != iVar23;
                              iVar12 = *(int *)(iVar12 + 8)) {
                            puVar35 = (unsigned int *)(iVar12 + 8);
                          }
                          *puVar35 = *(unsigned int *)(iVar12 + 8);
                          fn_82ABE5F8(iVar9,iVar23,0x14,0x1a);
                          iVar23 = *(int *)(iVar14 + 0x8c);
                          puVar35 = (unsigned int *)(*(int *)(iVar23 + 0xc) + 4);
                          for (iVar12 = *(int *)(*(int *)(iVar23 + 0xc) + 4); iVar12 != iVar23;
                              iVar12 = *(int *)(iVar12 + 8)) {
                            puVar35 = (unsigned int *)(iVar12 + 8);
                          }
                          *puVar35 = *(unsigned int *)(iVar12 + 8);
                          fn_82ABE5F8(iVar9,iVar23,0x14,0x1a);
                          iVar23 = *(int *)(iVar14 + 0x90);
                          puVar35 = (unsigned int *)(*(int *)(iVar23 + 0xc) + 4);
                          for (iVar12 = *(int *)(*(int *)(iVar23 + 0xc) + 4); iVar12 != iVar23;
                              iVar12 = *(int *)(iVar12 + 8)) {
                            puVar35 = (unsigned int *)(iVar12 + 8);
                          }
                          *puVar35 = *(unsigned int *)(iVar12 + 8);
                          fn_82ABE5F8(iVar9,iVar23,0x14,0x1a);
                        }
                      }
                    }
                  }
LAB_82b0919c:
                  uVar15 = uVar15 + 1;
                  uVar39 = *(unsigned int *)(iVar14 + 0x4dc);
                  puVar43 = puVar43 + -1;
                  piVar34 = (int *)(*(int *)(iVar14 + 0x78) + 4);
                }
              }
            }
          }
          uVar39 = *(unsigned int *)(iVar14 + 0x4dc);
          uVar18 = *(int *)(iVar14 + 0x98) + 1;
        }
      }
    }
  }
  else if (uVar39 == 3) {
    puVar10 = *(unsigned int **)(iVar23 + 0x2c);
    puVar16 = *(unsigned int **)(iVar23 + 0x30);
    if (((uVar18 & 1) != 0) && (cVar25 = fn_82ABDBE8(puVar10,puVar16), cVar25 != '\0')) {
      uVar18 = puVar10[3];
      cVar25 = fn_82AEFA80(uVar18);
      if (cVar25 != '\0') {
        for (iVar12 = *(int *)(uVar18 + 4); iVar12 != 0; iVar12 = *(int *)(iVar12 + 8)) {
          if ((*(unsigned int *)(iVar12 + 0x10) != 0) &&
             ((unsigned __int64)*(unsigned int *)(iVar12 + 0x10) != (param_2 & 0xffffffff))) {
            bVar55 = true;
            goto LAB_82b060d8;
          }
        }
        bVar55 = false;
LAB_82b060d8:
        if ((!bVar55) && ((*puVar10 & 0x1e) == 0)) {
          for (puVar22 = *(unsigned int **)(iVar23 + 4); puVar22 != (unsigned int *)0x0;
              puVar22 = (unsigned int *)puVar22[2]) {
            if ((puVar22[4] != 0) && (uVar18 = *puVar22, (uVar18 & 0xe000000) != 0)) {
              *puVar22 = uVar18 & 0xffffffe0 | uVar18 - 1 & 0x1f;
            }
          }
          *puVar10 = *puVar10 & 0xffffffe0 | 1;
          *puVar16 = *puVar16 & 0xffffffe0 | 1;
          *(unsigned int *)(iVar23 + 8) = *(unsigned int *)(iVar23 + 8) & 0xfffffffe;
          *(unsigned int *)(puVar10[3] + 8) = *(unsigned int *)(puVar10[3] + 8) | 1;
        }
      }
    }
    if (((*(unsigned int *)(iVar23 + 8) & 1) == 0) &&
       (cVar25 = fn_82ABDBE8(puVar10,puVar16), cVar25 != '\0')) {
      fn_82AFEEB0(iVar9,param_2,puVar10,0);
      cVar25 = fn_82ABE2E0(param_2);
      if (cVar25 != '\0') {
        uVar6 = (unsigned __int64)puVar10[3];
        goto LAB_82b042a8;
      }
      uVar6 = 0;
      uVar18 = *(unsigned int *)(iVar14 + 0x4dc);
      uVar39 = *puVar10 >> 0x19;
      uVar54 = (unsigned __int64)uVar39 & 7;
      uVar44 = 0;
      if ((uVar39 & 7) != 0) {
        lVar45 = 0;
        iVar9 = 0;
        do {
          lVar33 = lVar45 + (uVar58 - 0x3b0);
          fn_82B82D28(puVar10,uVar44,lVar33,lVar45 + (uVar58 - 0x370),
                            lVar45 + (uVar58 - 0x340),0,uVar18,0);
          iVar23 = *(int *)lVar33;
          if ((*(unsigned int *)(iVar23 + 8) & 0x3f80) == 16000) {
            uVar6 = uVar6 + 1;
          }
          if ((iVar9 != 0) && (bVar55 = iVar9 != iVar23, iVar23 = iVar9, bVar55)) {
            iVar23 = 1;
          }
          uVar44 = uVar44 + 1;
          lVar45 = lVar45 + 4;
          iVar9 = iVar23;
        } while ((uVar44 & 0xffffffff) < uVar54);
      }
      if ((uVar6 & 0xffffffff) == uVar54) {
        if ((uVar39 & 7) != 0) {
          iVar9 = 0;
          uVar6 = uVar54;
          do {
            dVar62 = (double)fn_82B80EE0(*(unsigned int *)((int)auStack_3b0 + iVar9),
                                          *(unsigned int *)((int)auStack_370 + iVar9),
                                          *(unsigned int *)(iVar9 + iVar14 + 0x180));
            uVar6 = uVar6 - 1;
            *(float *)(iVar9 + iVar14 + 0x3f0) = (float)dVar62;
            iVar9 = iVar9 + 4;
          } while (uVar6 != 0);
        }
        iVar9 = *(int *)(iVar14 + 0x4d4);
        uVar39 = fn_82B86888(iVar9,uVar54,uVar58 - 0xd0,*(unsigned int *)(iVar14 + 0x78));
        if (uVar39 != puVar10[3]) {
          fn_82AFA378(iVar9);
          puVar53 = (unsigned int *)(puVar10[3] + 4);
          for (puVar22 = (unsigned int *)*puVar53; puVar22 != puVar10; puVar22 = (unsigned int *)puVar22[2]) {
            puVar53 = puVar22 + 2;
          }
          *puVar53 = puVar10[2];
          puVar10[2] = *(unsigned int *)(uVar39 + 4);
          *(unsigned int **)(uVar39 + 4) = puVar10;
          puVar10[3] = uVar39;
          *puVar10 = *puVar10 & 0xffffe000 | 0x1c80;
          puVar53 = (unsigned int *)(puVar16[3] + 4);
          for (puVar22 = (unsigned int *)*puVar53; puVar22 != puVar16; puVar22 = (unsigned int *)puVar22[2]) {
            puVar53 = puVar22 + 2;
          }
          *puVar53 = puVar16[2];
          puVar16[2] = *(unsigned int *)(uVar39 + 4);
          *(unsigned int **)(uVar39 + 4) = puVar16;
          puVar16[3] = uVar39;
          *puVar16 = *puVar16 & 0xffffe000 | 0x1c80;
          fn_82AEFCD8(uVar39);
          *(unsigned int *)(uVar39 + 8) = *(unsigned int *)(uVar39 + 8) | 0x1000000;
          fn_82AFA378(iVar9,uVar18);
        }
      }
      else {
        iVar9 = *(int *)(iVar14 + 0x4d4);
      }
      uVar39 = puVar10[3];
      if ((*(unsigned int *)(uVar39 + 8) & 0x3f80) == 0x3700) {
        uVar15 = *(unsigned int *)(uVar39 + 8);
        uVar11 = fn_82ABDBA0(puVar10);
        if (((uVar11 == (uVar15 >> 1 & 0xf)) && (iVar14 = fn_82AD0098(uVar18), iVar14 != 0)) &&
           (uVar11 = *(unsigned int *)(iVar14 + 8) >> 0x17 & 1, uVar11 == (uVar15 >> 0x17 & 1))) {
          for (iVar23 = *(int *)(uVar18 + 4); iVar23 != 0; iVar23 = *(int *)(iVar23 + 8)) {
            if ((*(int *)(iVar23 + 0x10) != 0) && (*(int *)(iVar23 + 0x10) != iVar14)) {
              bVar55 = true;
              goto LAB_82b063fc;
            }
          }
          bVar55 = false;
LAB_82b063fc:
          if (!bVar55) {
            for (iVar23 = *(int *)(uVar39 + 4); iVar23 != 0; iVar23 = *(int *)(iVar23 + 8)) {
              if ((*(unsigned int *)(iVar23 + 0x10) != 0) && (*(unsigned int *)(iVar23 + 0x10) != uVar18)) {
                bVar55 = true;
                goto LAB_82b06438;
              }
            }
            bVar55 = false;
LAB_82b06438:
            if (!bVar55) {
              bVar55 = true;
              if (uVar11 != 0) {
                lVar45 = fn_82ADD810(iVar9,uVar39);
                lVar33 = fn_82ADD810(iVar9,iVar14);
                bVar55 = lVar33 == lVar45;
              }
              if (bVar55) {
                piVar34 = (int *)(iVar14 + 0x2c);
                for (uVar15 = 0; uVar15 < (*(unsigned int *)(iVar14 + 8) >> 0x13 & 7); uVar15 = uVar15 + 1)
                {
                  puVar16 = (unsigned int *)*piVar34;
                  if (puVar16[3] == uVar18) {
                    puVar20 = (unsigned int *)(puVar16[3] + 4);
                    puVar53 = *(unsigned int **)((((*puVar10 >> 5 & 0xff) >> (*puVar16 >> 4 & 6) & 3) + 0xb)
                                         * 4 + uVar39);
                    uVar11 = puVar53[3];
                    for (puVar22 = (unsigned int *)*puVar20; puVar22 != puVar16;
                        puVar22 = (unsigned int *)puVar22[2]) {
                      puVar20 = puVar22 + 2;
                    }
                    *puVar20 = puVar16[2];
                    puVar16[2] = *(unsigned int *)(uVar11 + 4);
                    *(unsigned int **)(uVar11 + 4) = puVar16;
                    puVar16[3] = uVar11;
                    uVar11 = *puVar16;
                    uVar19 = *puVar53;
                    *puVar16 = uVar11 & 0xffffffe0 | uVar19 & 0x1f;
                    *puVar16 = *puVar53 & 0x1fe0 | uVar11 & 0xffffe000 | uVar19 & 0x1f;
                  }
                  piVar34 = piVar34 + 1;
                }
                fn_82B8AC10(iVar9,uVar18,*(unsigned int *)(iVar9 + 0x28c),1);
                fn_82B8AC10(iVar9,uVar39,*(unsigned int *)(iVar9 + 0x28c),1);
              }
            }
          }
        }
      }
    }
    else if ((*puVar10 & 0xe000000) == 0x2000000) {
      fn_82B82D28(puVar10,0,uVar58 - 0x3d4,uVar58 - 0x3bc,uVar58 - 0x380,
                        *(unsigned int *)(iVar23 + 0x1c),0,1);
      fn_82B82D28(puVar16,0,uVar58 - 0x390,uVar58 - 0x3b8,uVar58 - 0x388,
                        *(unsigned int *)(iVar23 + 0x1c),0,1);
      uVar18 = *(unsigned int *)(iVar23 + 8);
      lVar45 = 0;
      *(unsigned int *)(iVar23 + 8) = uVar18 | 0x4000000;
      for (uVar39 = *(unsigned int *)(*(int *)(iVar9 + 0x28c) + 4); ((uVar39 & 1) == 0 && (uVar39 != 0));
          uVar39 = *(unsigned int *)((uVar39 & 0xfffffffe) + 4)) {
        lVar45 = (unsigned __int64)*(unsigned int *)(uVar39 + 8) + lVar45;
      }
      *(unsigned int *)(iVar14 + 0x220) = 0;
      *(unsigned int *)(iVar14 + 0x300) = 0;
      *(unsigned int *)(iVar14 + 0x228) = 0;
      *(unsigned int *)(iVar14 + 0x308) = 0;
      *(unsigned int *)(iVar14 + 0x23c) = 0;
      *(unsigned int *)(iVar14 + 0x2c0) = 0;
      *(unsigned int *)(iVar14 + 0x2e4) = 0;
      *(unsigned int *)(iVar14 + 0x31c) = 0;
      *(unsigned int *)(iVar14 + 0x3a0) = 0;
      *(unsigned int *)(iVar14 + 0x3c4) = 0;
      *(unsigned __int64 *)(iVar14 + 0x2f0) = 0;
      *(unsigned __int64 *)(iVar14 + 0x3d0) = 0;
      iVar12 = *(int *)(iVar14 + 0xec);
      if ((*(int *)(iVar14 + 0x140) == 0) && ((*(unsigned int *)(iVar12 + 8) & 0x3f80) == 0x180)) {
        iVar13 = *(int *)(iVar14 + 0x130);
        if ((*(unsigned int *)(iVar13 + 8) & 0x3f80) == 16000) {
          fn_82B82D28(*(unsigned int *)(iVar12 + 0x30),*(unsigned int *)(iVar14 + 0x104),
                            uVar58 - 0x2f4,uVar58 - 0x2f0,uVar58 - 0x300,
                            *(unsigned int *)(iVar23 + 0x1c),0,1);
          *(int *)(iVar14 + 0x54) = iVar23;
          *(int *)(iVar14 + 0x5c) = iVar14 + 0x220;
          fn_82AF59F0(iVar9,param_2,param_2,0,0,*(unsigned int *)(iVar14 + 0x1cc),
                            *(unsigned int *)(iVar14 + 0x1d0),*(unsigned int *)(iVar14 + 0x1c0));
        }
        else {
          uVar24 = *(unsigned int *)(iVar14 + 0x108);
          uVar1 = *(unsigned int *)(iVar14 + 0x138);
          uVar2 = *(unsigned int *)(iVar14 + 0x104);
          *(int *)(iVar14 + 0x54) = iVar23;
          *(int *)(iVar14 + 0x5c) = iVar14 + 0x220;
          *(unsigned int *)(*(int *)(iVar14 + 0x23c) * 4 + iVar14 + 0x22c) = uVar24;
          *(int *)(iVar14 + 0x23c) = *(int *)(iVar14 + 0x23c) + 1;
          *(int *)(*(int *)(iVar14 + 0x2e4) * 4 + iVar14 + 0x2c4) = iVar23;
          *(int *)(iVar14 + 0x2e4) = *(int *)(iVar14 + 0x2e4) + 1;
          fn_82AF59F0(iVar9,param_2,iVar12,uVar2,0,iVar13,uVar24,uVar1);
        }
        iVar12 = *(int *)(iVar14 + 0xec);
      }
      if ((*(int *)(iVar14 + 0x138) == 0) &&
         (iVar13 = *(int *)(iVar14 + 0x130), (*(unsigned int *)(iVar13 + 8) & 0x3f80) == 0x180)) {
        if ((*(unsigned int *)(iVar12 + 8) & 0x3f80) == 16000) {
          fn_82B82D28(*(unsigned int *)(iVar13 + 0x30),*(unsigned int *)(iVar14 + 0x108),
                            uVar58 - 0x30c,uVar58 - 0x314,uVar58 - 0x31c,
                            *(unsigned int *)(iVar23 + 0x1c),0,1);
          *(int *)(iVar14 + 0x54) = iVar23;
          *(int *)(iVar14 + 0x5c) = iVar14 + 0x300;
          fn_82AF59F0(iVar9,param_2,param_2,0,0,*(unsigned int *)(iVar14 + 0x1b4),
                            *(unsigned int *)(iVar14 + 0x1ac),*(unsigned int *)(iVar14 + 0x1a4));
        }
        else {
          uVar24 = *(unsigned int *)(iVar14 + 0x104);
          *(int *)(iVar14 + 0x54) = iVar23;
          uVar1 = *(unsigned int *)(iVar14 + 0x108);
          uVar2 = *(unsigned int *)(iVar14 + 0x140);
          *(int *)(iVar14 + 0x5c) = iVar14 + 0x300;
          *(unsigned int *)(*(int *)(iVar14 + 0x31c) * 4 + iVar14 + 0x30c) = uVar24;
          *(int *)(iVar14 + 0x31c) = *(int *)(iVar14 + 0x31c) + 1;
          *(int *)(*(int *)(iVar14 + 0x3c4) * 4 + iVar14 + 0x3a4) = iVar23;
          *(int *)(iVar14 + 0x3c4) = *(int *)(iVar14 + 0x3c4) + 1;
          fn_82AF59F0(iVar9,param_2,iVar13,uVar1,0,iVar12,uVar24,uVar2);
        }
      }
      if ((*(int *)(iVar14 + 0x23c) == 4) ||
         ((*(int *)(iVar14 + 0x23c) == 3 && (*(int *)(iVar14 + 0x2f0) != 0)))) {
        lVar45 = uVar58 - 0x2a0;
      }
      else {
        if ((*(int *)(iVar14 + 0x31c) != 4) &&
           ((iVar12 = *(int *)(iVar14 + 0x3d0), *(int *)(iVar14 + 0x31c) != 3 || (iVar12 == 0)))) {
          if (*(int *)(iVar14 + 0x2f0) != 0) {
            fn_82B8C970(iVar9,*(unsigned int *)(iVar14 + 0x220),*(unsigned int *)(iVar14 + 0x2f4))
            ;
          }
          if (iVar12 != 0) {
            fn_82B8C970(iVar9,*(unsigned int *)(iVar14 + 0x300),*(unsigned int *)(iVar14 + 0x3d4))
            ;
          }
          fn_82AFD740(iVar9,lVar45,1,0);
          if ((uVar18 >> 0x1a & 1) == 0) {
            *(unsigned int *)(iVar23 + 8) = *(unsigned int *)(iVar23 + 8) & 0xfbffffff;
          }
          goto LAB_82b042a4;
        }
        lVar45 = uVar58 - 0x1c0;
      }
      uVar6 = fn_82B02A28(iVar9,param_2,lVar45);
      goto LAB_82b042a8;
    }
  }
  else {
    if (uVar39 == 0xd) {
      puVar10 = *(unsigned int **)(iVar23 + 0x2c);
      puVar16 = *(unsigned int **)(iVar23 + 0x34);
      puVar22 = *(unsigned int **)(iVar23 + 0x30);
      uVar18 = puVar10[3];
      uVar39 = puVar16[3];
      dVar59 = (double)lbl_82002AE0;
      puVar53 = (unsigned int *)(uVar18 + 8);
      uVar15 = puVar22[3];
      dVar61 = (double)lbl_821AAD20;
      *(unsigned int **)(iVar14 + 0x70) = puVar53;
      *(unsigned int *)(iVar14 + 0x88) = uVar39;
      if ((*puVar53 & 0x3f80) == 16000) {
        uVar19 = 0;
        lVar33 = 0;
        uVar11 = *puVar10 >> 0x19;
        uVar54 = (unsigned __int64)uVar11 & 7;
        if ((uVar11 & 7) != 0) {
          uVar17 = 0;
          uVar6 = uVar54;
          do {
            dVar60 = (double)fn_82B80EE0(uVar18,(*puVar10 >> 5 & 0xff) >> (uVar17 & 0x3f) & 3,
                                          *puVar10 & 0x1f);
            if (dVar60 != dVar62) {
              uVar19 = uVar19 & ~(3 << (uVar17 & 0x3f)) | 1 << (uVar17 & 0x3f);
              lVar33 = lVar33 + 1;
            }
            uVar6 = uVar6 - 1;
            uVar17 = uVar17 + 2;
          } while (uVar6 != 0);
        }
        if ((*(unsigned int *)(uVar39 + 8) >> 7 & 0x7f) < (*(unsigned int *)(uVar15 + 8) >> 7 & 0x7f)) {
          uVar17 = 0;
          if ((uVar11 & 7) != 0) {
            uVar26 = 0;
            lVar52 = uVar58 - 0xe0;
            uVar6 = uVar54;
            do {
              if ((uVar19 >> (uVar26 & 0x3f) & 3) == 1) {
                *(float *)lVar52 = (float)dVar61;
              }
              else {
                *(float *)lVar52 = (float)dVar59;
                uVar17 = uVar17 & ~(3 << (uVar26 & 0x3f)) | 1 << (uVar26 & 0x3f);
              }
              lVar52 = lVar52 + 4;
              uVar26 = uVar26 + 2;
              uVar6 = uVar6 - 1;
            } while (uVar6 != 0);
          }
          uVar19 = uVar17;
          iVar9 = *(int *)(iVar14 + 0x4d4);
          uVar17 = fn_82B86888(iVar9,uVar54,uVar58 - 0xe0,*(unsigned int *)(iVar14 + 0x78));
          puVar21 = (unsigned int *)(puVar10[3] + 4);
          for (puVar20 = (unsigned int *)*puVar21; puVar20 != puVar10; puVar20 = (unsigned int *)puVar20[2]) {
            puVar21 = puVar20 + 2;
          }
          uVar26 = puVar10[2];
          uVar29 = *(unsigned int *)(iVar14 + 0x4dc);
          param_2 = (unsigned __int64)uVar29;
          *(unsigned int *)(iVar14 + 0x88) = uVar15;
          *puVar21 = uVar26;
          puVar10[2] = *(unsigned int *)(uVar17 + 4);
          *(unsigned int **)(uVar17 + 4) = puVar10;
          lVar33 = uVar54 - lVar33;
          puVar10[3] = uVar17;
          *puVar10 = *puVar10 & 0xffffe002 | 0x1c80;
          uVar24 = *(unsigned int *)(uVar29 + 0x30);
          *(unsigned int *)(uVar29 + 0x30) = *(unsigned int *)(uVar29 + 0x34);
          *(unsigned int *)(uVar29 + 0x34) = uVar24;
          fn_82AEFCD8(uVar17);
          *(unsigned int *)(uVar17 + 8) = *(unsigned int *)(uVar17 + 8) | 0x1000000;
          fn_82AFA378(iVar9,param_2);
          puVar20 = puVar22;
          puVar22 = puVar16;
          uVar15 = uVar39;
        }
        else {
          param_2 = (unsigned __int64)*(unsigned int *)(iVar14 + 0x4dc);
          iVar9 = *(int *)(iVar14 + 0x4d4);
          puVar20 = puVar16;
        }
        puVar16 = puVar20;
        uVar6 = 0;
        iVar23 = (int)param_2;
        uVar39 = uVar19;
        if ((uVar11 & 7) != 0) {
          uVar17 = 0;
          do {
            if ((uVar19 >> (uVar17 & 0x3f) & 3) != 0) break;
            uVar6 = uVar6 + 1;
            uVar17 = uVar17 + 2;
          } while ((uVar6 & 0xffffffff) < uVar54);
          if ((uVar6 & 0xffffffff) < uVar54) {
            lVar52 = (uVar6 & 0x7fffffff) << 1;
            do {
              if ((uVar19 >> ((unsigned int)lVar52 & 0x3f) & 3) != 1) break;
              uVar6 = uVar6 + 1;
              lVar52 = lVar52 + 2;
            } while ((uVar6 & 0xffffffff) < uVar54);
            if ((uVar6 & 0xffffffff) < uVar54) {
              uVar44 = uVar54 - lVar33;
              *(float *)(iVar14 + 0x200) = (float)dVar61;
              *(float *)(iVar14 + 0x204) = (float)dVar61;
              *(float *)(iVar14 + 0x208) = (float)dVar61;
              *(float *)(iVar14 + 0x20c) = (float)dVar61;
              uVar29 = 0;
              uVar26 = 0;
              iVar12 = 0;
              uVar39 = 0;
              iVar13 = 0;
              uVar17 = 0;
              uVar18 = 0;
              lVar52 = (uVar44 & 0x7fffffff) << 1;
              lVar33 = (uVar44 & 0x3fffffff) * 4 + lVar45 + 0x1fc;
              uVar6 = uVar54;
              do {
                if ((uVar19 >> (uVar17 & 0x3f) & 3) == 0) {
                  uVar27 = iVar12 << (uVar17 & 0x3f);
                  uVar29 = uVar29 & ~(3 << (uVar18 & 0x3f)) | iVar13 << (uVar18 & 0x3f);
                  iVar12 = iVar12 + 1;
                  uVar18 = uVar18 + 2;
                }
                else {
                  uVar30 = (unsigned int)lVar52;
                  lVar33 = lVar33 + 4;
                  *(float *)lVar33 = (float)dVar59;
                  uVar28 = ~(3 << (uVar30 & 0x3f));
                  uVar27 = (int)uVar44 << (uVar17 & 0x3f);
                  uVar29 = uVar29 & uVar28 | iVar13 << (uVar30 & 0x3f);
                  uVar39 = uVar39 & uVar28 | 1 << (uVar30 & 0x3f);
                  uVar44 = uVar44 + 1;
                  lVar52 = lVar52 + 2;
                }
                uVar26 = uVar26 & ~(3 << (uVar17 & 0x3f)) | uVar27;
                iVar13 = iVar13 + 1;
                uVar17 = uVar17 + 2;
                uVar6 = uVar6 - 1;
              } while (uVar6 != 0);
              uVar18 = fn_82B86888(iVar9,uVar54,uVar58 - 0x2c0,*(unsigned int *)(iVar14 + 0x78))
              ;
              puVar20 = (unsigned int *)(puVar10[3] + 4);
              for (puVar53 = (unsigned int *)*puVar20; puVar53 != puVar10; puVar53 = (unsigned int *)puVar53[2]) {
                puVar20 = puVar53 + 2;
              }
              *puVar20 = puVar10[2];
              puVar10[2] = *(unsigned int *)(uVar18 + 4);
              *(unsigned int **)(uVar18 + 4) = puVar10;
              puVar10[3] = uVar18;
              *puVar10 = *puVar10 & 0xffffe002 | 0x1c80;
              fn_82AEFB18(puVar22,uVar29);
              fn_82AEFB18(puVar16,uVar29);
              for (puVar53 = *(unsigned int **)(iVar23 + 4); puVar53 != (unsigned int *)0x0;
                  puVar53 = (unsigned int *)puVar53[2]) {
                if ((puVar53[4] != 0) && ((*puVar53 & 0xe000000) != 0)) {
                  fn_82ACA598(puVar53,uVar26);
                }
              }
              fn_82AEFCD8(uVar18);
              *(unsigned int *)(iVar14 + 0x70) = uVar18 + 8;
              *(unsigned int *)(uVar18 + 8) = *(unsigned int *)(uVar18 + 8) | 0x1000000;
              fn_82AFA378(iVar9,param_2);
              puVar53 = *(unsigned int **)(iVar14 + 0x70);
            }
          }
        }
        uVar6 = 0;
        uVar17 = *puVar22 >> 5 & 0xff;
        uVar19 = *puVar16 >> 5 & 0xff;
        if ((uVar11 & 7) != 0) {
          uVar26 = 0;
          do {
            if ((uVar39 >> (uVar26 & 0x3f) & 3) != 0) break;
            uVar6 = uVar6 + 1;
            uVar26 = uVar26 + 2;
          } while ((uVar6 & 0xffffffff) < uVar54);
        }
        uVar44 = 0;
        uVar26 = uVar19;
        if (uVar6 != 0) {
          uVar29 = 0;
          uVar46 = uVar6;
          do {
            uVar27 = uVar29 & 0x3f;
            uVar28 = uVar29 & 0x3f;
            uVar29 = uVar29 + 2;
            uVar26 = uVar26 & ~(3 << uVar27) |
                     (uVar19 >> ((unsigned int)((uVar6 & 0xffffffff) << 1) & 0x3e) & 3) << uVar28;
            uVar46 = uVar46 - 1;
            uVar44 = uVar6;
          } while (uVar46 != 0);
        }
        uVar29 = uVar17;
        if ((uVar44 & 0xffffffff) < uVar54) {
          lVar33 = uVar54 - uVar44;
          lVar52 = (uVar44 & 0x7fffffff) << 1;
          do {
            uVar27 = (unsigned int)lVar52;
            lVar52 = lVar52 + 2;
            uVar29 = uVar29 & ~(3 << (uVar27 & 0x3f)) |
                     (uVar17 >> ((unsigned int)((uVar6 - 1 & 0xffffffff) << 1) & 0x3e) & 3) <<
                     (uVar27 & 0x3f);
            lVar33 = lVar33 + -1;
          } while (lVar33 != 0);
          if (uVar29 == uVar17) goto LAB_82b0531c;
LAB_82b05324:
          *puVar22 = (uVar29 & 0xff) << 5 | *puVar22 & 0xffffe01f;
          *puVar16 = (uVar26 & 0xff) << 5 | *puVar16 & 0xffffe01f;
          fn_82AFA378(iVar9,param_2);
        }
        else {
LAB_82b0531c:
          if (uVar26 != uVar19) goto LAB_82b05324;
        }
        puVar20 = puVar16;
        if (((uVar6 & 0xffffffff) == 0) || (puVar20 = puVar22, (uVar6 & 0xffffffff) == uVar54)) {
          uVar6 = fn_82AF77E0(iVar9,0,param_2,puVar20,puVar20);
          if ((*(unsigned int *)(iVar23 + 8) & 1) != 0) {
            *(unsigned int *)((int)uVar6 + 8) = *(unsigned int *)((int)uVar6 + 8) | 1;
          }
          fn_82AFE520(iVar9,param_2,uVar6,0xe4,*puVar20 >> 3 & 1,1);
          goto LAB_82b042a8;
        }
        if ((*(unsigned int *)(iVar23 + 8) & 1) == 0) {
          lVar33 = param_2 + 4;
          while( true ) {
            puVar20 = (unsigned int *)*(unsigned int *)lVar33;
            uVar44 = ZEXT48(puVar20);
            if (uVar44 == 0) break;
            uVar19 = puVar20[4];
            if ((((uVar19 != 0) && ((*puVar20 & 0xe000000) != 0)) &&
                (*(int *)(uVar19 + 0x1c) == *(int *)(iVar23 + 0x1c))) &&
               ((uVar19 = *(unsigned int *)(uVar19 + 8) >> 7 & 0x7f, uVar19 != 0x6e && (uVar19 != 0x6f)))) {
              uVar19 = fn_82ABDBA0(uVar44);
              if (uVar19 < (unsigned int)(1 << ((unsigned int)uVar6 & 0x3f))) {
                cVar25 = fn_82AF5EC0(iVar9,uVar44,puVar22,uVar58 - 0x448,uVar58 - 0x3a0);
                if ((cVar25 != '\0') && ((*(unsigned int *)(iVar14 + 0x78) & 0x18) == 0)) {
                  *puVar20 = *puVar20 & 0xffffffe0 | *(unsigned int *)(iVar14 + 0x78) & 0x1f;
                  fn_82ACA598(uVar44,*puVar22 >> 5 & 0xff);
                  uVar19 = puVar22[3];
                  puVar41 = (unsigned int *)(puVar20[3] + 4);
                  for (puVar21 = (unsigned int *)*puVar41; puVar21 != puVar20; puVar21 = (unsigned int *)puVar21[2])
                  {
                    puVar41 = puVar21 + 2;
                  }
LAB_82b054b4:
                  *puVar41 = puVar20[2];
                  puVar20[2] = *(unsigned int *)(uVar19 + 4);
                  *(unsigned int **)(uVar19 + 4) = puVar20;
                  puVar20[3] = uVar19;
                }
              }
              else if (((uVar19 == (-1 << ((unsigned int)uVar6 & 0x3f) & uVar19)) &&
                       (cVar25 = fn_82AF5EC0(iVar9,uVar44,puVar16,uVar58 - 0x408,
                                                   uVar58 - 0x3a0), cVar25 != '\0')) &&
                      ((*(unsigned int *)(iVar14 + 0xb8) & 0x18) == 0)) {
                *puVar20 = *puVar20 & 0xffffffe0 | *(unsigned int *)(iVar14 + 0xb8) & 0x1f;
                fn_82ACA598(uVar44,*puVar16 >> 5 & 0xff);
                uVar19 = puVar16[3];
                puVar41 = (unsigned int *)(puVar20[3] + 4);
                for (puVar21 = (unsigned int *)*puVar41; puVar21 != puVar20; puVar21 = (unsigned int *)puVar21[2]) {
                  puVar41 = puVar21 + 2;
                }
                goto LAB_82b054b4;
              }
            }
            if ((unsigned int *)*(unsigned int *)lVar33 == puVar20) {
              lVar33 = uVar44 + 8;
            }
          }
        }
        if ((*(unsigned int *)(iVar23 + 8) & 1) == 0) {
          uVar19 = 0;
          uVar17 = 0;
          if ((uVar11 & 7) != 0) {
            uVar27 = 0;
            uVar29 = 0;
            uVar44 = uVar54;
            do {
              if ((uVar39 >> (uVar29 & 0x3f) & 3) == 1) {
                uVar17 = uVar17 + 1;
                uVar19 = (uVar26 >> (uVar29 & 0x3f) & 3) << (uVar27 & 0x3f) |
                         uVar19 & ~(3 << (uVar27 & 0x3f));
                uVar27 = uVar27 + 2;
              }
              uVar29 = uVar29 + 2;
              uVar44 = uVar44 - 1;
            } while (uVar44 != 0);
          }
          puVar53 = (unsigned int *)fn_82ACA920(iVar9,puVar22,puVar22[3]);
          *puVar53 = (unsigned int)((uVar6 & 0xffffffff) << 0x19) & 0xe000000 | *puVar53 & 0xf1ffffff;
          puVar20 = (unsigned int *)fn_82ACA920(iVar9,puVar16,puVar16[3]);
          *puVar20 = ((uVar17 & 7) << 0x14 | uVar19 & 0xff) << 5 | *puVar20 & 0xf1ffe01f;
          iVar12 = fn_82AF9758(iVar9,param_2,puVar53,param_2,puVar20,param_2,uVar58 - 0x340,1)
          ;
          if (iVar12 == 0) {
            uVar51 = fn_82AFC3B8(iVar9,param_2,puVar53,param_2,puVar20,
                                       *(unsigned int *)(iVar23 + 0x1c),param_2,uVar58 - 0x340);
            puVar16 = (unsigned int *)(puVar53[3] + 4);
            for (puVar10 = *(unsigned int **)(puVar53[3] + 4); puVar10 != puVar53;
                puVar10 = (unsigned int *)puVar10[2]) {
              puVar16 = puVar10 + 2;
            }
            *puVar16 = puVar10[2];
            fn_82ABE5F8(iVar9,puVar53,0x14,0x1a);
            puVar16 = (unsigned int *)(puVar20[3] + 4);
            for (puVar10 = *(unsigned int **)(puVar20[3] + 4); puVar10 != puVar20;
                puVar10 = (unsigned int *)puVar10[2]) {
              puVar16 = puVar10 + 2;
            }
            *puVar16 = puVar10[2];
            fn_82ABE5F8(iVar9,puVar20,0x14,0x1a);
            fn_82AFEEB0(iVar9,param_2,uVar51,1);
            goto LAB_82b042a4;
          }
          if ((((*puVar22 & 0x1e) == 0) && ((*puVar16 & 0x1e) == 0)) &&
             (iVar12 = fn_82AD0098(param_2), iVar12 == 0)) {
            uVar44 = fn_82AD0098(uVar15);
            uVar6 = fn_82AD0098(*(unsigned int *)(iVar14 + 0x88));
            if ((uVar44 & 0xffffffff) == 0) {
              if ((uVar6 & 0xffffffff) != 0) {
LAB_82b056cc:
                cVar25 = fn_82B8BCB0(iVar9,uVar6,param_2,1);
                if (cVar25 != '\0') {
                  fn_82AF50F8(uVar6,uVar58 - 0x3d0,uVar58 - 0x2e0,uVar58 - 0x3f0);
                  uVar44 = 0;
                  if ((uVar11 & 7) != 0) {
                    uVar11 = 0;
                    lVar33 = 0;
                    do {
                      puVar53 = puVar22;
                      if ((uVar39 >> (uVar11 & 0x3f) & 3) != 0) {
                        puVar53 = puVar16;
                      }
                      fn_82B82D28(puVar53,uVar44,lVar33 + (uVar58 - 0x3b0),
                                        lVar33 + (uVar58 - 0x370),lVar33 + (uVar58 - 0x340),
                                        *(unsigned int *)(iVar23 + 0x1c),0,1);
                      uVar44 = uVar44 + 1;
                      uVar11 = uVar11 + 2;
                      lVar33 = lVar33 + 4;
                    } while ((uVar44 & 0xffffffff) < uVar54);
                  }
                  uVar39 = *puVar10;
                  iVar23 = (int)uVar6;
                  uVar11 = *(unsigned int *)(iVar23 + 8);
                  *(int *)(iVar14 + 0x54) = iVar14 + 0x180;
                  *(int *)(iVar14 + 0x5c) = iVar14 + 0x84;
                  *(unsigned int *)(iVar14 + 0x98) = 0;
                  *(int *)(iVar14 + 100) = iVar14 + 0x98;
                  *(unsigned int *)(iVar14 + 0x84) = 0;
                  cVar25 = fn_82AF5160(iVar9,uVar11 >> 0x13 & 7,uVar58 - 0x3d0,uVar58 - 0x2e0,
                                             uVar58 - 0x3f0,uVar39 >> 0x19 & 7,uVar58 - 0x3b0,
                                             uVar58 - 0x370);
                  if ((cVar25 != '\0') && (*(int *)(iVar14 + 0x98) == 0)) {
                    fn_82B8D488(iVar9,uVar6,param_2,0);
                    lVar45 = param_2 + 4;
                    while( true ) {
                      uVar18 = *(unsigned int *)lVar45;
                      uVar58 = (unsigned __int64)uVar18;
                      if (uVar58 == 0) break;
                      if (*(int *)(uVar18 + 0x10) != 0) {
                        lVar33 = (unsigned __int64)*(unsigned int *)(uVar18 + 0xc) + 4;
                        for (uVar39 = *(unsigned int *)lVar33; uVar39 != uVar58;
                            uVar39 = *(unsigned int *)(uVar39 + 8)) {
                          lVar33 = (unsigned __int64)uVar39 + 8;
                        }
                        uVar24 = *(unsigned int *)(iVar14 + 0x84);
                        *(unsigned int *)lVar33 = *(unsigned int *)(uVar18 + 8);
                        *(unsigned int *)(uVar18 + 8) = *(unsigned int *)(iVar23 + 4);
                        *(unsigned int *)(iVar23 + 4) = uVar18;
                        *(int *)(uVar18 + 0xc) = iVar23;
                        fn_82ACA598(uVar58,uVar24);
                      }
                      if (*(unsigned int *)lVar45 == uVar58) {
                        lVar45 = uVar58 + 8;
                      }
                    }
                    fn_82B8AC10(iVar9,param_2,*(unsigned int *)(iVar9 + 0x28c),1);
                    goto LAB_82b042a8;
                  }
                }
              }
            }
            else {
              uVar46 = uVar6 & 0xffffffff;
              uVar6 = uVar44;
              if (uVar46 == 0) goto LAB_82b056cc;
            }
          }
          puVar53 = *(unsigned int **)(iVar14 + 0x70);
        }
      }
      else {
        param_2 = (unsigned __int64)*(unsigned int *)(iVar14 + 0x4dc);
        iVar9 = *(int *)(iVar14 + 0x4d4);
      }
      uVar39 = *puVar53 >> 7 & 0x7f;
      iVar23 = (int)param_2;
      if (((uVar39 != 6) && (uVar39 != 7)) || ((*puVar10 & 0x1f) != 0)) {
LAB_82b059c4:
        bVar55 = false;
        dVar60 = lbl_82005758;
LAB_82b059d0:
        puVar53 = puVar22;
        if ((((((*(unsigned int *)(uVar15 + 8) & 0x3f80) == 0x680) &&
              ((**(unsigned int **)(iVar14 + 0x70) & 0x3f80) == 16000)) && ((*puVar53 & 0x1f) == 0)) &&
            (((*puVar16 & 0x18) == 0 &&
             (puVar22 = *(unsigned int **)(uVar15 + 0x2c), (*(unsigned int *)(puVar22[3] + 8) & 0x3f80) == 16000))))
           && ((uVar6 = (unsigned __int64)(*(unsigned int *)(uVar15 + 8) >> 0xe) & 7,
               uVar6 == ((unsigned __int64)(*puVar22 >> 0x19) & 7) &&
               ((uVar54 = fn_82ABDBA0(puVar53),
                uVar6 == (((0x8da691691448U >> (uVar54 & 0x7f)) >> (uVar54 & 0x7f)) >>
                          (uVar54 & 0x7f) & 7) &&
                (cVar25 = fn_82B8D2B8(iVar9,uVar15,param_2,1,1), cVar25 != '\0')))))) {
          fn_82AF88B0(puVar10,uVar58 - 0x340);
          if ((bVar55) && (uVar18 = 0, (*puVar10 & 0xe000000) != 0)) {
            uVar39 = *puVar10;
            lVar33 = uVar58 - 0x340;
            do {
              pdVar42 = (double *)lVar33;
              if (*pdVar42 == dVar62) {
                *pdVar42 = dVar60;
              }
              else {
                *pdVar42 = dVar62;
              }
              uVar18 = uVar18 + 1;
              lVar33 = lVar33 + 8;
            } while (uVar18 < (uVar39 >> 0x19 & 7));
          }
          uVar6 = 0;
          uVar18 = 0;
          if ((*puVar10 & 0xe000000) != 0) {
            lVar33 = uVar58 - 0x340;
            do {
              if (*(double *)lVar33 != dVar62) {
                uVar6 = uVar6 + 1;
              }
              uVar18 = uVar18 + 1;
              lVar33 = lVar33 + 8;
            } while (uVar18 < (*puVar10 >> 0x19 & 7));
          }
          uVar18 = *puVar22;
          uVar56 = (unsigned __int64)(uVar18 >> 0x19) & 7;
          fn_82AF88B0(puVar22,uVar58 - 0x370);
          uVar54 = 0;
          uVar46 = 0;
          uVar44 = 0;
          if ((uVar18 >> 0x19 & 7) != 0) {
            lVar33 = uVar58 - 0x370;
            do {
              if (*(double *)lVar33 != dVar62) break;
              uVar44 = uVar44 + 1;
              uVar54 = uVar54 + 1;
              lVar33 = lVar33 + 8;
            } while ((uVar44 & 0xffffffff) < uVar56);
          }
          if ((uVar54 & 0xffffffff) < uVar56) {
            lVar33 = (uVar54 & 0x1fffffff) * 8 + (uVar58 - 0x370);
            uVar44 = uVar54;
            do {
              if (*(double *)lVar33 != dVar60) break;
              uVar44 = uVar44 + 1;
              uVar46 = uVar46 + 1;
              lVar33 = lVar33 + 8;
            } while ((uVar44 & 0xffffffff) < uVar56);
          }
          if ((((uVar54 & 0xffffffff) == 0) || ((uVar46 & 0xffffffff) == 0)) ||
             ((uVar46 & 0xffffffff) != (uVar56 - uVar54 & 0xffffffff))) goto LAB_82b05d64;
          uVar48 = uVar46 + uVar54;
          uVar44 = uVar54;
          uVar56 = 0;
          if (bVar55) {
            uVar48 = 0;
            uVar44 = uVar54 + uVar6;
            uVar56 = uVar6;
          }
          puVar20 = (unsigned int *)fn_82ACA920(iVar9,puVar16,puVar16[3]);
          lVar33 = (uVar48 & 0x7fffffff) << 1;
          *puVar20 = (unsigned int)(((unsigned __int64)((*puVar20 >> 5 & 0xff) >> ((unsigned int)lVar33 & 0x3f)) & 0xff |
                            (uVar6 & 7) << 0x14) << 5) | *puVar20 & 0xf1ffe01f;
          puVar21 = (unsigned int *)fn_82ACA920(iVar9,*(int *)(uVar15 + 0x30),
                                              *(unsigned int *)(*(int *)(uVar15 + 0x30) + 0xc));
          *puVar21 = (unsigned int)((uVar54 & 0xffffffff) << 0x19) & 0xe000000 | *puVar21 & 0xf1ffffff;
          puVar22 = (unsigned int *)fn_82ACA920(iVar9,*(int *)(uVar15 + 0x34),
                                              *(unsigned int *)(*(int *)(uVar15 + 0x34) + 0xc));
          *puVar22 = (unsigned int)(((unsigned __int64)
                             ((*puVar22 >> 5 & 0xff) >> ((unsigned int)((uVar54 & 0xffffffff) << 1) & 0x3e))
                             & 0xff | (uVar46 & 7) << 0x14) << 5) | *puVar22 & 0xf1ffe01f;
          iVar12 = fn_82AF9758(iVar9,param_2,puVar20,uVar15,puVar21,uVar15,uVar58 - 0x418,1);
          bVar4 = iVar12 == 0;
          iVar12 = fn_82AF9758(iVar9,param_2,puVar20,uVar15,puVar22,uVar15,uVar58 - 0x3f0,1);
          if ((!bVar4) ||
             ((uVar36 = uVar46, uVar49 = uVar56, puVar41 = puVar21, iVar12 == 0 &&
              ((*(unsigned int *)(iVar14 + 0xd0) & 0x7f0) < (*(unsigned int *)(iVar14 + 0xa8) & 0x7f0))))) {
            *(unsigned int *)(iVar14 + 0xa8) = *(unsigned int *)(iVar14 + 0xd0);
            *(unsigned int *)(iVar14 + 0xac) = *(unsigned int *)(iVar14 + 0xd4);
            *(unsigned int *)(iVar14 + 0xb0) = *(unsigned int *)(iVar14 + 0xd8);
            uVar49 = uVar54 + uVar56;
            uVar44 = uVar56;
            uVar36 = uVar54;
            uVar54 = uVar46;
            bVar4 = iVar12 == 0;
            puVar41 = puVar22;
            puVar22 = puVar21;
          }
          if (!bVar4) goto LAB_82b05d64;
          fn_82B8D3D0(iVar9,uVar15,param_2,1,1);
          puVar10 = (unsigned int *)fn_82AFC3B8(iVar9,param_2,puVar20,uVar15,puVar41,
                                              *(unsigned int *)(iVar23 + 0x1c),uVar15,uVar58 - 0x418);
          uVar18 = 0;
          uVar46 = 0;
          if ((uVar48 & 0xffffffff) < (uVar48 + uVar6 & 0xffffffff)) {
            lVar52 = uVar58 - 0x2b4;
            do {
              iVar12 = (int)uVar46;
              lVar52 = lVar52 + 4;
              *(float *)lVar52 = (float)dVar61;
              uVar46 = uVar46 + 1;
              uVar18 = uVar18 & ~(3 << ((unsigned int)lVar33 & 0x3f)) | iVar12 << ((unsigned int)lVar33 & 0x3f);
              lVar33 = lVar33 + 2;
            } while ((uVar46 + uVar48 & 0xffffffff) < (uVar48 + uVar6 & 0xffffffff));
          }
          if ((uVar49 & 0xffffffff) < (uVar49 + uVar54 & 0xffffffff)) {
            lVar38 = (uVar49 & 0x7fffffff) << 1;
            lVar52 = uVar49 - uVar46;
            lVar33 = (uVar46 & 0x3fffffff) * 4 + lVar45 + 0x20c;
            do {
              iVar12 = (int)uVar46;
              lVar33 = lVar33 + 4;
              *(float *)lVar33 = (float)dVar61;
              uVar46 = uVar46 + 1;
              uVar18 = uVar18 & ~(3 << ((unsigned int)lVar38 & 0x3f)) | iVar12 << ((unsigned int)lVar38 & 0x3f);
              lVar38 = lVar38 + 2;
            } while ((uVar46 + lVar52 & 0xffffffff) < (uVar49 + uVar54 & 0xffffffff));
          }
          if ((uVar44 & 0xffffffff) < (uVar44 + uVar36 & 0xffffffff)) {
            lVar52 = (uVar44 & 0x7fffffff) << 1;
            lVar33 = uVar44 - uVar46;
            lVar45 = (uVar46 & 0x3fffffff) * 4 + lVar45 + 0x20c;
            do {
              iVar12 = (int)uVar46;
              lVar45 = lVar45 + 4;
              *(float *)lVar45 = (float)dVar59;
              uVar46 = uVar46 + 1;
              uVar18 = uVar18 & ~(3 << ((unsigned int)lVar52 & 0x3f)) | iVar12 << ((unsigned int)lVar52 & 0x3f);
              lVar52 = lVar52 + 2;
            } while ((uVar46 + lVar33 & 0xffffffff) < (uVar44 + uVar36 & 0xffffffff));
          }
          iVar14 = fn_82B86888(iVar9,uVar46,uVar58 - 0x2b0,*(unsigned int *)(iVar14 + 0x78));
          puVar16 = (unsigned int *)fn_82AD1870(iVar9,iVar14,uVar46,0xe4,0);
          uVar39 = *(unsigned int *)(puVar10[3] + 8) >> 7 & 0x7f;
          if ((uVar39 == 0x7d) || (bVar55 = false, uVar39 == 0x7c)) {
            bVar55 = true;
          }
          if (bVar55) {
            uVar39 = *puVar10;
LAB_82b05f58:
            if ((uVar39 >> 1 & 1) != 0) {
              *puVar16 = *puVar16 & 0xffffffe0 | 2;
            }
          }
          else {
            uVar39 = *(unsigned int *)(puVar22[3] + 8) >> 7 & 0x7f;
            if ((uVar39 == 0x7d) || (bVar55 = false, uVar39 == 0x7c)) {
              bVar55 = true;
            }
            if (bVar55) {
              uVar39 = *puVar22;
              goto LAB_82b05f58;
            }
          }
          uVar39 = *puVar10;
          uVar54 = uVar54 + uVar6;
          uVar11 = (unsigned int)((uVar46 & 7) << 0x19);
          *puVar10 = uVar39 & 0xf1ffffff | uVar11;
          if ((uVar54 & 0xffffffff) < (uVar46 & 0xffffffff)) {
            lVar45 = uVar46 - uVar54;
            lVar33 = (uVar54 & 0x7fffffff) << 1;
            do {
              uVar19 = (unsigned int)lVar33;
              lVar33 = lVar33 + 2;
              *puVar10 = *puVar10 & 0xffffe01f |
                         (~(3 << (uVar19 & 0x3f)) << 5 & *puVar10 |
                         (((uVar39 >> 5 & 0xff) >> (((uVar39 >> 0x19 & 7) - 1) * 2 & 0x3e) & 3) <<
                         (uVar19 & 0x3f)) << 5) & 0x1fe0;
              lVar45 = lVar45 + -1;
            } while (lVar45 != 0);
          }
          *puVar22 = *puVar22 & 0xf1ffffff | uVar11;
          fn_82AEFB18(puVar22,0xe4 << ((unsigned int)((uVar54 & 0xffffffff) << 1) & 0x3e) & 0xff);
          uVar6 = fn_82AF7B20(iVar9,0,uVar15,puVar16,puVar10,puVar22);
          if ((*(unsigned int *)(iVar23 + 8) & 1) != 0) {
            *(unsigned int *)((int)uVar6 + 8) = *(unsigned int *)((int)uVar6 + 8) | 1;
          }
          fn_82AEFCD8(iVar14);
          *(unsigned int *)(iVar14 + 8) = *(unsigned int *)(iVar14 + 8) | 0x1000000;
          goto LAB_82b06948;
        }
LAB_82b05d64:
        if (!bVar55) goto code_r0x82b05d6c;
        goto LAB_82b042a4;
      }
      uVar24 = *(unsigned int *)(uVar18 + 0x30);
      uVar1 = *(unsigned int *)(uVar18 + 0x2c);
      cVar25 = fn_82B81938(uVar24,puVar22);
      if ((cVar25 == '\0') || (cVar25 = fn_82B81938(uVar1,puVar16), cVar25 == '\0')) {
        cVar25 = fn_82B81938(uVar1,puVar22);
        if ((cVar25 == '\0') || (cVar25 = fn_82B81938(uVar24,puVar16), cVar25 == '\0'))
        goto LAB_82b059c4;
        uVar6 = fn_82AF78B0(iVar9,0,param_2,uVar1,uVar24);
      }
      else {
        uVar6 = fn_82AF77E0(iVar9,0,param_2,uVar1,uVar24);
      }
      if ((*(unsigned int *)(iVar23 + 8) & 1) != 0) {
        *(unsigned int *)((int)uVar6 + 8) = *(unsigned int *)((int)uVar6 + 8) | 1;
      }
LAB_82b06944:
      uVar18 = 0xe4;
LAB_82b06948:
      fn_82AFE520(iVar9,param_2,uVar6,uVar18,1,1);
      goto LAB_82b042a8;
    }
    uVar54 = 0;
    if (uVar39 != 0x11) {
      if (uVar39 != 0x12) {
        if (uVar39 != 0x6e) goto LAB_82b042a4;
        uVar6 = fn_82AFB320();
        if ((uVar6 & 0xffffffff) != 0) goto LAB_82b042a8;
        fn_82AF50F8(param_2,uVar58 - 0x370,uVar58 - 0x3f0,uVar58 - 0x3b0);
        uVar6 = 0;
        uVar46 = 0;
        iVar32 = 0;
        uVar15 = 0;
        uVar11 = 0;
        uVar39 = 0;
        iVar13 = 0;
        iVar12 = 0;
        iVar9 = 0;
        uVar18 = *(unsigned int *)(iVar23 + 8) >> 0x13;
        uVar44 = (unsigned __int64)uVar18 & 7;
        if ((uVar18 & 7) != 0) {
          iVar23 = 0;
          lVar45 = (param_2 & 0xffffffff) + 0x2c;
          do {
            bVar55 = true;
            if ((uVar54 & 0xffffffff) != 0) {
              iVar40 = 0;
              uVar56 = uVar54;
              do {
                if (*(int *)(iVar40 + iVar14 + 0x150) == *(int *)(iVar23 + iVar14 + 0x150)) {
                  bVar55 = (bool)(*(int *)(iVar23 + iVar14 + 0x110) !=
                                  *(int *)(iVar40 + iVar14 + 0x110) & bVar55);
                }
                iVar40 = iVar40 + 4;
                uVar56 = uVar56 - 1;
              } while (uVar56 != 0);
            }
            uVar18 = (unsigned int)uVar54;
            if (bVar55) {
              uVar15 = 1 << (uVar18 & 0x3f) | uVar15;
              uVar19 = *(unsigned int *)(*(int *)(iVar23 + iVar14 + 0x150) + 8) >> 7 & 0x7f;
              if ((uVar19 != 0x7d) && (uVar19 == 0x7c)) {
                iVar32 = iVar32 + 1;
              }
            }
            iVar40 = *(int *)(iVar23 + iVar14 + 0x150);
            uVar19 = *(unsigned int *)(iVar40 + 8) >> 7 & 0x7f;
            if (uVar19 == 0x7d) {
              uVar6 = uVar6 + 1;
              uVar11 = 1 << (uVar18 & 0x3f) | uVar11;
            }
            else if (uVar19 == 0x7c) {
              uVar46 = uVar46 + 1;
              uVar39 = 1 << (uVar18 & 0x3f) | uVar39;
            }
            else if (iVar40 == *(int *)(*(int *)(iVar23 + (int)lVar45) + 0xc)) {
              cVar25 = fn_82AF5618();
              if (cVar25 != '\0') {
                if (uVar19 == 2) {
                  iVar12 = iVar12 + 1;
                }
                else if (uVar19 == 1) {
                  iVar9 = iVar9 + 1;
                }
              }
            }
            else {
              iVar13 = iVar13 + 1;
            }
            uVar54 = uVar54 + 1;
            iVar23 = iVar23 + 4;
          } while ((uVar54 & 0xffffffff) < uVar44);
          dVar62 = (double)lbl_821AAD20;
          if ((((iVar32 == 1) && ((uVar6 & 0xffffffff) != 0)) &&
              ((uVar46 + uVar6 & 0xffffffff) == uVar44)) &&
             (iVar23 = (int)((0x1fU - LZCOUNT(uVar39 & ~(uVar39 - 1)) & 0x3fffffff) << 2),
             (*(unsigned int *)(iVar23 + iVar14 + 0x110) & 1) == 0)) {
            uVar54 = 0;
            uVar18 = 0;
            for (; uVar39 != 0; uVar39 = uVar39 - (uVar39 & ~(uVar39 - 1))) {
              uVar19 = (unsigned int)((0x1fU - LZCOUNT(uVar39 & ~(uVar39 - 1)) & 0xffffffff) << 1);
              uVar18 = uVar18 & ~(3 << (uVar19 & 0x3e)) | (int)uVar54 << (uVar19 & 0x3e);
              uVar54 = uVar54 + 1;
            }
            if ((uVar54 & 0xffffffff) < 4) {
              lVar33 = 4 - uVar54;
              do {
                lVar33 = lVar33 + -1;
              } while (lVar33 != 0);
            }
            puVar10 = (unsigned int *)fn_82AD1870(*(unsigned int *)(iVar14 + 0x4d4),
                                                *(unsigned int *)((int)auStack_370 + iVar23),uVar44);
            uVar48 = 0;
            uVar39 = 2;
            lVar33 = uVar58 - 0x2d0;
            uVar56 = uVar54;
            for (; uVar11 != 0; uVar11 = uVar11 - (uVar11 & ~(uVar11 - 1))) {
              uVar36 = 0x1f - LZCOUNT(uVar11 & ~(uVar11 - 1));
              uVar19 = (unsigned int)((uVar36 & 0xffffffff) << 1);
              iVar32 = (int)((uVar36 & 0x3fffffff) << 2);
              uVar18 = uVar18 & ~(3 << (uVar19 & 0x3e)) | (int)uVar56 << (uVar19 & 0x3e);
              dVar59 = (double)fn_82B80EE0(*(unsigned int *)(iVar32 + iVar14 + 0x150),
                                            *(unsigned int *)((int)auStack_3f0 + iVar32),
                                            *(unsigned int *)((int)auStack_3b0 + iVar32));
              *(float *)lVar33 = (float)dVar59;
              if (dVar59 < dVar62) {
                uVar39 = 1;
              }
              uVar48 = uVar48 + 1;
              uVar56 = uVar56 + 1;
              lVar33 = lVar33 + 4;
            }
            uVar11 = *puVar10;
            uVar11 = fn_82AF4BA8(*(unsigned int *)(iVar14 + 0x4d4),
                                       *(unsigned int *)((int)auStack_370 + iVar23),uVar11 >> 0x19 & 7
                                       ,uVar11 >> 5 & 0xff,uVar11 & 0x1f,uVar58 - 0x2d0);
            fVar5 = lbl_82002AE0;
            if ((uVar11 | uVar39) != 5) {
              uVar56 = 4;
              uVar36 = 4;
              uVar37 = 0;
              uVar49 = uVar48;
              if ((uVar48 & 0xffffffff) == 0) {
LAB_82b036d0:
                if ((uVar48 & 0xffffffff) < 4) {
                  uVar49 = uVar48 + 1;
                  *(float *)((int)((uVar48 & 0xffffffff) << 2) + iVar14 + 0x1f0) = (float)dVar62;
                  uVar56 = uVar48;
                }
              }
              else {
                lVar33 = uVar58 - 0x2d0;
                uVar47 = uVar56;
                uVar57 = uVar48;
                do {
                  uVar56 = uVar37;
                  if (((double)*(float *)lVar33 != dVar62) &&
                     (uVar56 = uVar47, (double)*(float *)lVar33 == (double)lbl_82002AE0)) {
                    uVar36 = uVar37;
                  }
                  uVar37 = uVar37 + 1;
                  lVar33 = lVar33 + 4;
                  uVar57 = uVar57 - 1;
                  uVar47 = uVar56;
                } while (uVar57 != 0);
                if ((int)uVar56 == 4) goto LAB_82b036d0;
              }
              uVar48 = uVar49;
              if (((int)uVar36 == 4) && ((uVar49 & 0xffffffff) < 4)) {
                uVar48 = uVar49 + 1;
                *(float *)((int)((uVar49 & 0xffffffff) << 2) + iVar14 + 0x1f0) = fVar5;
                uVar36 = uVar49;
              }
              iVar23 = (int)uVar56;
              if ((iVar23 != 4) && ((int)uVar36 != 4)) {
                uVar39 = (unsigned int)(unsigned char)(&lbl_820D7D43)[(int)uVar54];
                if ((uVar54 & 0xffffffff) != 0) {
                  uVar15 = 0;
                  uVar6 = uVar54;
                  do {
                    uVar19 = uVar15 & 0x3f;
                    uVar17 = uVar15 & 0x3f;
                    uVar15 = uVar15 + 2;
                    uVar39 = uVar39 & ~(3 << uVar17) | iVar23 << uVar19;
                    uVar6 = uVar6 - 1;
                  } while (uVar6 != 0);
                }
                uVar51 = 0;
                if ((uVar11 & 4) != 0) {
                  uVar51 = 2;
                }
                uVar24 = *(unsigned int *)(iVar14 + 0x4d4);
                iVar9 = fn_82B86888(uVar24,uVar48,uVar58 - 0x2d0,
                                          *(unsigned int *)(iVar14 + 0x78));
                uVar7 = fn_82AD1870(uVar24,iVar9,uVar44,uVar39,uVar51);
                uVar39 = 0;
                uVar58 = 0;
                if ((uVar54 & 0xffffffff) == 0) {
LAB_82b037f0:
                  lVar45 = 4 - uVar58;
                  lVar33 = (uVar58 & 0x7fffffff) << 1;
                  do {
                    uVar15 = (unsigned int)lVar33;
                    lVar33 = lVar33 + 2;
                    uVar39 = uVar39 & ~(3 << (uVar15 & 0x3f)) | iVar23 << (uVar15 & 0x3f);
                    lVar45 = lVar45 + -1;
                  } while (lVar45 != 0);
                }
                else {
                  uVar15 = 0;
                  uVar58 = uVar54;
                  do {
                    uVar11 = uVar15 & 0x3f;
                    uVar19 = uVar15 & 0x3f;
                    uVar15 = uVar15 + 2;
                    uVar39 = uVar39 & ~(3 << uVar19) | (int)uVar36 << uVar11;
                    uVar58 = uVar58 - 1;
                  } while (uVar58 != 0);
                  uVar58 = uVar54;
                  if ((uVar54 & 0xffffffff) < 4) goto LAB_82b037f0;
                }
                uVar51 = fn_82AD1870(uVar24,iVar9,uVar44,uVar39,uVar51);
                uVar1 = *(unsigned int *)(iVar14 + 0x4dc);
                uVar6 = fn_82AF06E8(uVar24,0,uVar1,puVar10,uVar51,uVar7);
                fn_82AEFCD8(iVar9);
                *(unsigned int *)(iVar9 + 8) = *(unsigned int *)(iVar9 + 8) | 0x1000000;
                fn_82AFE520(uVar24,uVar1,uVar6,uVar18,1,1);
                goto LAB_82b042a8;
              }
            }
          }
          if (uVar15 == 1) {
            if (((uVar46 & 0xffffffff) == 0) && ((uVar6 & 0xffffffff) == 0)) {
              uVar6 = (unsigned __int64)*(unsigned int *)(iVar14 + 0x4dc);
              if (*(int *)(*(int *)(iVar14 + 0x150) + 0x1c) !=
                  *(int *)(*(unsigned int *)(iVar14 + 0x4dc) + 0x1c)) goto LAB_82b03920;
            }
            else {
              uVar6 = (unsigned __int64)*(unsigned int *)(iVar14 + 0x4dc);
            }
            lVar45 = uVar58 - 0x3f4;
            uVar18 = 0;
            uVar39 = 0;
            uVar58 = uVar44;
            do {
              lVar45 = lVar45 + 4;
              uVar15 = uVar39 & 0x3f;
              uVar11 = uVar18 & ~(3 << (uVar39 & 0x3f));
              uVar39 = uVar39 + 2;
              uVar18 = uVar11 | *(int *)lVar45 << uVar15;
              uVar58 = uVar58 - 1;
            } while (uVar58 != 0);
            uVar24 = *(unsigned int *)(iVar14 + 0x4d4);
            uVar51 = fn_82AD1870(uVar24,*(int *)(iVar14 + 0x150),uVar44,uVar18,
                                       *(unsigned int *)(iVar14 + 0x110),uVar11);
            fn_82AFEEB0(uVar24,uVar6,uVar51,0);
            uVar6 = (unsigned __int64)*(unsigned int *)(iVar14 + 0x150);
            goto LAB_82b042a8;
          }
          uVar6 = (unsigned __int64)*(unsigned int *)(iVar14 + 0x4dc);
LAB_82b03920:
          if (iVar13 != 0) {
            if (iVar12 != 0) {
              uVar54 = 0;
              lVar33 = lVar45;
              do {
                if (((*(unsigned int *)*(int *)lVar33 & 0x1f) == 0) &&
                   (uVar18 = ((unsigned int *)*(int *)lVar33)[3], (*(unsigned int *)(uVar18 + 8) & 0x3f80) == 0x100)
                   ) {
                  uVar46 = 0;
                  lVar52 = lVar45;
                  do {
                    uVar39 = *(unsigned int *)*(int *)lVar52;
                    if (((uVar39 & 0x1f) == 0) &&
                       (uVar15 = ((unsigned int *)*(int *)lVar52)[3],
                       (*(unsigned int *)(uVar15 + 8) & 0x3f80) == 0x180)) {
                      uVar11 = *(unsigned int *)(iVar14 + 0x4dc);
                      uVar6 = (unsigned __int64)uVar11;
                      for (iVar23 = *(int *)(uVar15 + 4); iVar23 != 0; iVar23 = *(int *)(iVar23 + 8)
                          ) {
                        if ((*(unsigned int *)(iVar23 + 0x10) != 0) && (*(unsigned int *)(iVar23 + 0x10) != uVar6))
                        {
                          bVar55 = true;
                          goto LAB_82b039c0;
                        }
                      }
                      bVar55 = false;
LAB_82b039c0:
                      if (!bVar55) {
                        iVar23 = *(int *)(uVar15 + 0x2c);
                        cVar25 = fn_82ABDBE8(iVar23,*(unsigned int *)(uVar15 + 0x30));
                        if (cVar25 != '\0') {
                          uVar24 = *(unsigned int *)(iVar14 + 0x4d4);
                          iVar12 = fn_82B471E8(uVar24,iVar23,uVar39 >> 5 & 3);
                          cVar25 = fn_82AF8FA0(uVar24,uVar18,iVar12,uVar58 - 0x340,1,1);
                          bVar55 = (*(unsigned int *)(uVar11 + 8) & 0x3f80) == 0x3980;
                          if (cVar25 != '\0') {
                            if (!bVar55) goto LAB_82b03b3c;
                            uVar6 = fn_82AD0098(uVar18);
                            uVar46 = 0;
                            uVar39 = *(unsigned int *)((int)uVar6 + 8) >> 0x13;
                            uVar54 = (unsigned __int64)uVar39 & 7;
                            if ((uVar39 & 7) == 0) goto LAB_82b03b30;
                            lVar45 = uVar6 + 0x2c;
                            lVar33 = lVar45;
                            goto LAB_82b03ae8;
                          }
                          if (bVar55) goto LAB_82b042a4;
                        }
                      }
                    }
                    uVar46 = uVar46 + 1;
                    lVar52 = lVar52 + 4;
                  } while ((uVar46 & 0xffffffff) < uVar44);
                }
                uVar54 = uVar54 + 1;
                lVar33 = lVar33 + 4;
              } while ((uVar54 & 0xffffffff) < uVar44);
              uVar6 = (unsigned __int64)*(unsigned int *)(iVar14 + 0x4dc);
            }
            if ((iVar9 != 0) && (2 < *(unsigned int *)(*(int *)(iVar14 + 0x4d4) + 0x298))) {
              bVar55 = false;
LAB_82b03a6c:
              lVar33 = uVar6 + 0x2c;
              lVar45 = lVar33;
              for (uVar54 = 0; (uVar54 & 0xffffffff) < uVar44; uVar54 = uVar54 + 1) {
                iVar9 = *(int *)(*(int *)lVar45 + 0xc);
                if ((*(unsigned int *)(iVar9 + 8) & 0x3f80) == 0x80) {
                  for (iVar23 = *(int *)(iVar9 + 4); iVar23 != 0; iVar23 = *(int *)(iVar23 + 8)) {
                    if ((*(unsigned int *)(iVar23 + 0x10) != 0) && (*(unsigned int *)(iVar23 + 0x10) != uVar6)) {
                      bVar4 = true;
                      goto LAB_82b03c60;
                    }
                  }
                  bVar4 = false;
LAB_82b03c60:
                  if (((!bVar4) && (((unsigned __int64)(*(unsigned int *)(iVar9 + 8) >> 0xe) & 7) < uVar44)) &&
                     (uVar46 = 0, lVar52 = lVar33, uVar44 != 0)) {
                    do {
                      puVar10 = (unsigned int *)*(int *)lVar52;
                      if ((*puVar10 & 0x1f) == 0) {
                        uVar18 = puVar10[3];
                        if (((*(unsigned int *)(uVar18 + 8) & 0x3f80) == 0x180) &&
                           (((*(unsigned int *)(uVar18 + 8) ^ *(unsigned int *)(iVar9 + 8)) & 1) == 0)) {
                          for (iVar23 = *(int *)(uVar18 + 4); iVar23 != 0;
                              iVar23 = *(int *)(iVar23 + 8)) {
                            if ((*(unsigned int *)(iVar23 + 0x10) != 0) &&
                               (*(unsigned int *)(iVar23 + 0x10) != uVar6)) {
                              bVar4 = true;
                              goto LAB_82b03cec;
                            }
                          }
                          bVar4 = false;
LAB_82b03cec:
                          if (!bVar4) {
                            puVar16 = *(unsigned int **)(uVar18 + 0x2c);
                            cVar25 = fn_82ABDBE8(puVar16,*(unsigned int *)(uVar18 + 0x30));
                            if ((cVar25 != '\0') && ((*puVar16 & 0x1e) == 0)) {
                              uVar39 = 0;
                              piVar50 = (int *)(iVar9 + 0x2c);
                              piVar34 = (int *)(iVar9 + 0x30);
                              do {
                                if (((((unsigned int *)*piVar50)[3] == puVar16[3]) &&
                                    (((*(unsigned int *)*piVar50 ^ *puVar16) & 0x1f) == 0)) &&
                                   (iVar23 = *(int *)(*piVar34 + 0xc),
                                   (*(unsigned int *)(iVar23 + 8) & 0x3f80) == 0x100)) {
                                  iVar12 = *(int *)(iVar14 + 0x4d4);
                                  iVar13 = fn_82B8A3A0(dVar62,dVar62,dVar62,dVar62,iVar12,1);
                                  uVar51 = fn_82AD18C0(iVar12,iVar13,0);
                                  cVar25 = fn_82AF8FA0(iVar12,iVar23,uVar51,uVar58 - 0x340,1,1
                                                            );
                                  if (cVar25 != '\0') {
                                    uVar39 = *(unsigned int *)(iVar14 + 0x4dc);
                                    uVar6 = (unsigned __int64)uVar39;
                                    if ((*(unsigned int *)(uVar39 + 8) & 0x3f80) == 0x3980) {
                                      iVar9 = fn_82AD0098(iVar9);
                                      *(int *)(iVar14 + 0x4dc) = iVar9;
                                      if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                                        fn_82AA66A8(iVar12,0x12c0);
                                      }
                                      uVar44 = (unsigned __int64)(*(unsigned int *)(iVar9 + 8) >> 0x13) & 7;
                                      if ((*(unsigned char *)(iVar13 + 8) & 1) == 0) {
                                        fn_82B8AC10(iVar12,iVar13,0,1);
                                      }
                                      uVar6 = (unsigned __int64)*(unsigned int *)(iVar14 + 0x4dc);
                                      bVar55 = true;
                                      goto LAB_82b03a6c;
                                    }
                                    uVar51 = fn_82AFB698(iVar12,iVar23,uVar51,uVar6,
                                                               uVar58 - 0x340);
                                    uVar11 = fn_82B843F0(iVar12,iVar9);
                                    *(unsigned int *)(uVar11 + 8) =
                                         *(unsigned int *)(uVar11 + 8) & 0xbbfe7fe3 | 0x4002;
                                    fn_82AC9EE0(uVar11,0,uVar51);
                                    uVar51 = fn_82B471E8(iVar12,puVar16,*puVar10 >> 5 & 3);
                                    fn_82AC9EE0(uVar11,1,uVar51);
                                    uVar51 = fn_82B168F8(uVar18,*puVar10 >> 5 & 3);
                                    fn_82B16998(uVar11,0,uVar51);
                                    uVar15 = uVar11 & 0xfffffffe;
                                    puVar10 = (unsigned int *)((uVar39 & 0xfffffffe) + 0x24);
                                    *(unsigned int *)(uVar15 + 0x24) = *puVar10;
                                    *(unsigned int *)(*puVar10 & 0xfffffffe) = uVar15;
                                    *(unsigned int *)(uVar15 + 0x28) = uVar39 & 0xfffffffe;
                                    *puVar10 = uVar15 + 0x28;
                                    uVar51 = fn_82AD18C0(iVar12,uVar11,0);
                                    fn_82AD35A8(uVar6,uVar46,uVar51,iVar12);
                                    fn_82AD1B28(uVar18);
                                    fn_82AEFCD8(iVar13);
                                    *(unsigned int *)(iVar13 + 8) = *(unsigned int *)(iVar13 + 8) | 0x1000000;
                                    fn_82AD1B28(uVar11);
                                    uVar39 = *(unsigned int *)(uVar11 + 8);
                                    *(unsigned int *)(uVar11 + 8) = uVar39 | 0x1000000;
                                    if ((uVar39 >> 0x17 & 1) != 0) {
                                      *(unsigned int *)(uVar11 + 0x10) =
                                           *(unsigned int *)(uVar11 + 0x10) & 0xfff8ffff;
                                      puVar10 = *(unsigned int **)(iVar12 + 0x294);
                                      if ((puVar10[1] & 1) == 0) {
                                        uVar39 = *puVar10 & 0xfffffffe;
                                        iVar14 = uVar39 - 4;
                                        if ((iVar14 == 0) ||
                                           (*(unsigned int *)(uVar39 + 8) < *(int *)(uVar39 + 4) + 1U))
                                        goto LAB_82b03fe4;
                                      }
                                      else {
LAB_82b03fe4:
                                        iVar14 = fn_82AD6090(puVar10,1);
                                      }
                                      iVar23 = *(int *)(iVar14 + 8);
                                      *(int *)(iVar14 + 8) = iVar23 + 1;
                                      *(unsigned int *)((iVar23 + 4) * 4 + iVar14) = uVar11;
                                    }
                                    fn_82AFA378(iVar12,uVar11);
                                    fn_82AFA378(iVar12,uVar6);
                                    fn_82AFA378(iVar12,iVar9);
                                    fn_82AFA378(iVar12,uVar18);
                                    goto LAB_82b042a8;
                                  }
                                  if ((*(unsigned char *)(iVar13 + 8) & 1) == 0) {
                                    fn_82B8AC10(iVar12,iVar13,0,1);
                                  }
                                }
                                uVar39 = uVar39 + 1;
                                piVar50 = piVar50 + 1;
                                piVar34 = piVar34 + -1;
                              } while (uVar39 < 2);
                              uVar6 = (unsigned __int64)*(unsigned int *)(iVar14 + 0x4dc);
                            }
                          }
                        }
                      }
                      uVar46 = uVar46 + 1;
                      lVar52 = lVar52 + 4;
                    } while ((uVar46 & 0xffffffff) < uVar44);
                  }
                }
                lVar45 = lVar45 + 4;
              }
              if (bVar55) goto LAB_82b042a8;
            }
          }
        }
        uVar18 = *(unsigned int *)(*(int *)(iVar14 + 0x4dc) + 8);
        if ((uVar18 >> 0x17 & 1) == 0) {
          puVar10 = *(unsigned int **)(iVar14 + 0x4dc);
          uVar39 = 0;
          puVar22 = puVar10 + 1;
          for (puVar16 = (unsigned int *)puVar10[1]; puVar16 != (unsigned int *)0x0; puVar16 = (unsigned int *)puVar16[2]) {
            if ((puVar16[4] != 0) && ((*puVar16 & 0xe000000) != 0)) {
              uVar15 = fn_82ABDBA0(puVar16);
              uVar11 = 0;
              uVar19 = 0;
              lVar45 = 4;
              do {
                if ((1 << (uVar11 & 0x3f) & uVar15) != 0) {
                  uVar17 = uVar19 >> 3 & 0x1ffffffc;
                  *(unsigned int *)((int)auStack_450 + uVar17) =
                       uVar15 << (uVar19 & 0x1f) | *(unsigned int *)((int)auStack_450 + uVar17);
                }
                uVar11 = uVar11 + 1;
                uVar19 = uVar19 + 4;
                lVar45 = lVar45 + -1;
              } while (lVar45 != 0);
            }
          }
          puVar53 = puVar10 + 0xb;
          uVar15 = uVar18 >> 0x13;
          uVar58 = (unsigned __int64)uVar15 & 7;
          puVar16 = puVar53;
          for (uVar11 = 0; uVar11 < uVar58; uVar11 = uVar11 + 1) {
            uVar19 = 0;
            iVar9 = *(int *)(*puVar16 + 0xc);
            for (uVar6 = 0; (uVar6 & 0xffffffff) < uVar58; uVar6 = uVar6 + 1) {
              if (*(int *)(*(int *)(uVar19 + (int)puVar53) + 0xc) == iVar9) {
                uVar17 = uVar19 >> 3 & 0x1ffffffc;
                *(unsigned int *)((int)auStack_450 + uVar17) =
                     (1 << (uVar11 & 0x3f)) << (uVar19 & 0x1f) |
                     *(unsigned int *)((int)auStack_450 + uVar17);
              }
              uVar19 = uVar19 + 4;
            }
            puVar16 = puVar16 + 1;
          }
          do {
            bVar55 = false;
            if ((uVar15 & 7) != 0) {
              uVar11 = 0;
              uVar6 = uVar58;
              do {
                uVar17 = uVar11 & 0x1f;
                uVar26 = uVar11 >> 3 & 0x1ffffffc;
                uVar19 = *(unsigned int *)((int)auStack_450 + uVar26);
                uVar27 = (2 << (uVar11 + 3 & 0x1f)) - 1U & -1 << uVar17;
                uVar29 = 0;
                uVar28 = 0;
                lVar45 = 4;
                do {
                  if (((1 << (uVar29 & 0x3f) & (uVar27 & uVar19) >> uVar17) != 0) &&
                     (uVar30 = (uVar27 & *(unsigned int *)((int)auStack_450 + uVar26)) >> uVar17,
                     uVar31 = ((2 << (uVar28 + 3 & 0x1f)) - 1U &
                               *(unsigned int *)((uVar28 >> 3 & 0x1ffffffc) + iVar14 + 0x70) &
                              -1 << (uVar28 & 0x1f)) >> (uVar28 & 0x1f) | uVar30, uVar31 != uVar30))
                  {
                    bVar55 = true;
                    *(unsigned int *)((int)auStack_450 + uVar26) =
                         uVar31 << uVar17 | *(unsigned int *)((int)auStack_450 + uVar26);
                  }
                  uVar29 = uVar29 + 1;
                  uVar28 = uVar28 + 4;
                  lVar45 = lVar45 + -1;
                } while (lVar45 != 0);
                uVar6 = uVar6 - 1;
                uVar11 = uVar11 + 4;
              } while (uVar6 != 0);
            }
          } while (bVar55);
          uVar6 = 0;
          if ((uVar15 & 7) != 0) {
            uVar15 = 0;
            do {
              uVar11 = ((2 << (uVar15 + 3 & 0x1f)) - 1U &
                        *(unsigned int *)((uVar15 >> 3 & 0x1ffffffc) + iVar14 + 0x70) &
                       -1 << (uVar15 & 0x1f)) >> (uVar15 & 0x1f);
              uVar54 = (unsigned __int64)uVar11;
              if (uVar54 == 0) {
                    /* WARNING: Subroutine does not return */
                fn_82AA66A8(*(unsigned int *)(iVar14 + 0x4d4),0x12c0);
              }
              uVar44 = ((unsigned __int64)(uVar18 >> 1) & 0xf) - uVar54;
              if (uVar44 != 0) {
                iVar9 = *(int *)(iVar14 + 0x4d4);
                uVar58 = (unsigned __int64)uVar11;
                uVar6 = fn_82AF76C8(iVar9,0,puVar10,
                                          ((0x8da691691448U >> (uVar58 & 0x7f)) >> (uVar58 & 0x7f))
                                          >> (uVar58 & 0x7f) & 7);
                puVar16 = (unsigned int *)fn_82AF76C8(iVar9,0,puVar10,
                                                    ((0x8da691691448U >> (uVar44 & 0x7f)) >>
                                                    (uVar44 & 0x7f)) >> (uVar44 & 0x7f) & 7);
                lVar45 = 0;
                lVar33 = 0;
                uVar18 = 0;
                uVar19 = 0;
                for (uVar15 = 0; uVar15 < (puVar10[2] >> 0x13 & 7); uVar15 = uVar15 + 1) {
                  if ((1 << (uVar15 & 0x3f) & uVar11) == 0) {
                    fn_82AC9EE0(puVar16,lVar33,*puVar53);
                    iVar14 = (int)lVar33;
                    lVar33 = lVar33 + 1;
                    uVar39 = uVar39 & ~(3 << (uVar19 & 0x3f)) | iVar14 << (uVar19 & 0x3f);
                  }
                  else {
                    fn_82AC9EE0(uVar6,lVar45,*puVar53);
                    iVar14 = (int)lVar45;
                    lVar45 = lVar45 + 1;
                    uVar18 = uVar18 & ~(3 << (uVar19 & 0x3f)) | iVar14 << (uVar19 & 0x3f);
                  }
                  puVar53 = puVar53 + 1;
                  uVar19 = uVar19 + 2;
                }
                while( true ) {
                  puVar53 = (unsigned int *)*puVar22;
                  uVar15 = (unsigned int)uVar6;
                  puVar20 = puVar10;
                  if (puVar53 == (unsigned int *)0x0) break;
                  uVar11 = puVar53[4];
                  if (uVar11 != 0) {
                    if ((*puVar53 & 0xe000000) == 0) {
                      uVar51 = fn_82ACA920(iVar9,puVar53,uVar6);
                      fn_82AD1978(uVar11,uVar51);
                      puVar21 = (unsigned int *)(puVar53[3] + 4);
                      for (puVar20 = (unsigned int *)*puVar21; puVar20 != puVar53;
                          puVar20 = (unsigned int *)puVar20[2]) {
                        puVar21 = puVar20 + 2;
                      }
                      *puVar21 = puVar53[2];
                      puVar53[2] = puVar16[1];
                      puVar16[1] = (unsigned int)puVar53;
                      puVar53[3] = (unsigned int)puVar16;
                    }
                    else {
                      uVar58 = fn_82ABDBA0(puVar53);
                      puVar21 = (unsigned int *)(puVar53[3] + 4);
                      puVar20 = (unsigned int *)*puVar21;
                      bVar55 = puVar20 != puVar53;
                      if ((uVar58 & uVar54) == 0) {
                        while (bVar55) {
                          puVar21 = puVar20 + 2;
                          puVar20 = (unsigned int *)puVar20[2];
                          bVar55 = puVar20 != puVar53;
                        }
                        *puVar21 = puVar53[2];
                        puVar53[2] = puVar16[1];
                        puVar16[1] = (unsigned int)puVar53;
                        puVar53[3] = (unsigned int)puVar16;
                        uVar15 = uVar39;
                      }
                      else {
                        while (bVar55) {
                          puVar21 = puVar20 + 2;
                          puVar20 = (unsigned int *)puVar20[2];
                          bVar55 = puVar20 != puVar53;
                        }
                        *puVar21 = puVar53[2];
                        puVar53[2] = *(unsigned int *)(uVar15 + 4);
                        *(unsigned int **)(uVar15 + 4) = puVar53;
                        puVar53[3] = uVar15;
                        uVar15 = uVar18;
                      }
                      fn_82ACA598(puVar53,uVar15);
                    }
                    fn_82AFA378(iVar9,puVar53[4]);
                  }
                  if ((unsigned int *)*puVar22 == puVar53) {
                    puVar22 = puVar53 + 2;
                  }
                }
                while (puVar22 = (unsigned int *)*puVar20, puVar22 != (unsigned int *)0x0) {
                  if ((*puVar22 & 0xe000000) == 0) {
                    fn_82AD1978(uVar6,puVar22);
                    puVar53 = (unsigned int *)puVar22[4];
                    for (puVar21 = (unsigned int *)*puVar53; puVar21 != puVar22;
                        puVar21 = (unsigned int *)puVar21[1]) {
                      puVar53 = puVar21 + 1;
                    }
                    *puVar53 = puVar22[1];
                    puVar22[1] = *puVar16;
                    *puVar16 = (unsigned int)puVar22;
                    puVar22[4] = (unsigned int)puVar16;
                  }
                  if ((unsigned int *)*puVar20 == puVar22) {
                    puVar20 = puVar22 + 1;
                  }
                }
                fn_82B0FC78(iVar9,uVar6);
                *(unsigned int *)(uVar15 + 8) = *(unsigned int *)(uVar15 + 8) | 0x1000000;
                fn_82B0FC78(iVar9,puVar16);
                puVar16[2] = puVar16[2] | 0x1000000;
                fn_82AFA378(iVar9,uVar6);
                fn_82AFA378(iVar9,puVar16);
                fn_82B8AC10(iVar9,puVar10,*(unsigned int *)(iVar9 + 0x28c),1);
                goto LAB_82b042a8;
              }
              uVar6 = uVar6 + 1;
              uVar15 = uVar15 + 4;
            } while ((uVar6 & 0xffffffff) < uVar58);
          }
        }
        goto LAB_82b042a4;
      }
      puVar10 = *(unsigned int **)(iVar23 + 0x34);
      uVar24 = *(unsigned int *)(iVar23 + 0x2c);
      uVar1 = *(unsigned int *)(iVar23 + 0x30);
      uVar39 = puVar10[3];
      uVar54 = (unsigned __int64)uVar39;
      uVar15 = *(unsigned int *)(uVar39 + 8);
      uVar11 = uVar15 >> 7 & 0x7f;
      if ((uVar11 == 2) && ((*puVar10 & 0x1f) == 0)) {
        for (iVar12 = *(int *)(uVar39 + 4); iVar12 != 0; iVar12 = *(int *)(iVar12 + 8)) {
          if ((*(unsigned int *)(iVar12 + 0x10) != 0) &&
             ((unsigned __int64)*(unsigned int *)(iVar12 + 0x10) != (param_2 & 0xffffffff))) goto LAB_82b04a3c;
        }
        uVar11 = uVar15 >> 0x1a & 1;
        *(unsigned int *)(uVar39 + 8) = uVar15 | 0x4000000;
        uVar15 = uVar18 >> 0x1a & 1;
        lVar45 = 0;
        *(unsigned int *)(iVar23 + 8) = *(unsigned int *)(iVar23 + 8) | 0x4000000;
        for (uVar18 = *(unsigned int *)(*(int *)(iVar9 + 0x28c) + 4); ((uVar18 & 1) == 0 && (uVar18 != 0));
            uVar18 = *(unsigned int *)((uVar18 & 0xfffffffe) + 4)) {
          lVar45 = (unsigned __int64)*(unsigned int *)(uVar18 + 8) + lVar45;
        }
        uVar18 = *puVar10 >> 5 & 3;
        fn_82B82D28(*(unsigned int *)(uVar39 + 0x2c),uVar18,uVar58 - 0x398,uVar58 - 0x2f8,
                          uVar58 - 0x308,*(unsigned int *)(iVar23 + 0x1c),0,1);
        fn_82B82D28(*(unsigned int *)(uVar39 + 0x30),uVar18,uVar58 - 900,uVar58 - 0x2ec,
                          uVar58 - 800,*(unsigned int *)(iVar23 + 0x1c),0,1);
        iVar12 = fn_82AD1918(iVar9,*(unsigned int *)(iVar14 + 0x128),
                                   *(unsigned int *)(iVar14 + 0x1c8),*(unsigned int *)(iVar14 + 0x1b8));
        iVar13 = fn_82AD1918(iVar9,*(unsigned int *)(iVar14 + 0x13c),
                                   *(unsigned int *)(iVar14 + 0x1d4),*(unsigned int *)(iVar14 + 0x1a0));
        *(unsigned int *)(iVar14 + 0x98) = 0;
        *(int *)(iVar14 + 0x6c) = iVar14 + 0xf0;
        *(int *)(iVar14 + 0x54) = iVar14 + 0x98;
        *(int *)(iVar14 + 0x5c) = iVar14 + 0x84;
        *(unsigned int *)(iVar14 + 0x84) = 0;
        *(int *)(iVar14 + 100) = iVar14 + 0xd0;
        cVar25 = fn_82AF9FF8(iVar9,param_2,uVar24,uVar1,uVar54,iVar12,iVar13,param_2);
        if ((cVar25 != '\0') &&
           (((*(unsigned int *)(iVar14 + 0xd0) & 0x7f0) == 0 || ((*(unsigned int *)(iVar14 + 0xf0) & 0x7f0) == 0))))
        {
          puVar10 = (unsigned int *)fn_82AFC3B8(iVar9,param_2,uVar24,uVar54,
                                              *(unsigned int *)(iVar14 + 0x98),
                                              *(unsigned int *)(iVar23 + 0x1c),param_2,uVar58 - 0x3f0)
          ;
          uVar6 = 0;
          uVar18 = *(unsigned int *)(puVar10[3] + 8) >> 7 & 0x7f;
          if ((uVar18 == 0) || (bVar55 = true, 0x66 < uVar18)) {
            bVar55 = false;
          }
          if (bVar55) {
            uVar6 = fn_82AD19D8(param_2,puVar10[3],iVar9);
          }
          uVar2 = *(unsigned int *)(iVar14 + 0x84);
          cVar25 = fn_82AF9DC8(iVar9,param_2,uVar1,uVar54,uVar2,param_2,uVar58 - 0x3d0);
          if ((cVar25 != '\0') &&
             ((uVar18 = *(unsigned int *)(iVar14 + 0xd0), (uVar18 & 0x7f0) == 0 ||
              ((*(unsigned int *)(iVar14 + 0xf0) & 0x7f0) == 0)))) {
            iVar9 = *(int *)(iVar14 + 0x4dc);
            uVar24 = *(unsigned int *)(iVar14 + 0x4d4);
            puVar16 = (unsigned int *)fn_82AFC3B8(uVar24,iVar9,uVar1,uVar54,uVar2,
                                                *(unsigned int *)(iVar9 + 0x1c),iVar9,uVar58 - 0x3d0);
            if ((uVar6 & 0xffffffff) != 0) {
              fn_82AD20C0(iVar9,uVar6,uVar24);
            }
            uVar6 = fn_82AF7EE8(uVar24,0,iVar9,puVar10,puVar16);
            uVar58 = uVar54;
            while( true ) {
              puVar22 = (unsigned int *)*(unsigned int *)uVar58;
              uVar44 = ZEXT48(puVar22);
              puVar53 = (unsigned int *)uVar6;
              if (uVar44 == 0) break;
              if ((*puVar22 & 0xe000000) == 0) {
                uVar46 = ZEXT48((unsigned int *)puVar22[4]);
                for (uVar19 = *(unsigned int *)puVar22[4]; uVar19 != uVar44; uVar19 = *(unsigned int *)(uVar19 + 4))
                {
                  uVar46 = (unsigned __int64)uVar19 + 4;
                }
                *(unsigned int *)uVar46 = puVar22[1];
                puVar22[1] = *puVar53;
                *puVar53 = (unsigned int)puVar22;
                puVar22[4] = (unsigned int)puVar53;
              }
              if ((unsigned int *)*(unsigned int *)uVar58 == puVar22) {
                uVar58 = uVar44 + 4;
              }
            }
            if ((uVar18 >> 0xf & 7) != 0) {
              fn_82AF6CC8(uVar24,uVar6);
            }
            if ((*(unsigned int *)(iVar9 + 8) & 1) != 0) {
              puVar53[2] = puVar53[2] | 1;
            }
            if (uVar11 == 0) {
              *(unsigned int *)(uVar39 + 8) = *(unsigned int *)(uVar39 + 8) & 0xfbffffff;
            }
            if (uVar15 == 0) {
              *(unsigned int *)(iVar9 + 8) = *(unsigned int *)(iVar9 + 8) & 0xfbffffff;
            }
            fn_82AFE520(uVar24,iVar9,uVar6,0,(*puVar16 | *puVar10) >> 3 & 1,1);
LAB_82b08948:
            fn_82AFA378(uVar24,uVar54);
            goto LAB_82b042a8;
          }
          iVar9 = *(int *)(iVar14 + 0x4d4);
          param_2 = (unsigned __int64)*(unsigned int *)(iVar14 + 0x4dc);
          if ((uVar6 & 0xffffffff) != 0) {
            fn_82AD20C0(param_2,uVar6,iVar9);
          }
        }
        piVar34 = (int *)(*(int *)(iVar14 + 0x128) + 4);
        for (iVar23 = *piVar34; iVar23 != iVar12; iVar23 = *(int *)(iVar23 + 8)) {
          piVar34 = (int *)(iVar23 + 8);
        }
        *piVar34 = *(int *)(iVar23 + 8);
        fn_82ABE5F8(iVar9,iVar12,0x14,0x1a);
        piVar34 = (int *)(*(int *)(iVar14 + 0x13c) + 4);
        for (iVar23 = *piVar34; iVar23 != iVar13; iVar23 = *(int *)(iVar23 + 8)) {
          piVar34 = (int *)(iVar23 + 8);
        }
        *piVar34 = *(int *)(iVar23 + 8);
        fn_82ABE5F8(iVar9,iVar13,0x14,0x1a);
        fn_82AFD740(iVar9,lVar45,1,0);
        if (uVar11 == 0) {
          *(unsigned int *)(uVar39 + 8) = *(unsigned int *)(uVar39 + 8) & 0xfbffffff;
        }
        if (uVar15 == 0) {
          *(unsigned int *)((int)param_2 + 8) = *(unsigned int *)((int)param_2 + 8) & 0xfbffffff;
        }
      }
      else if ((uVar11 == 0x12) && ((*puVar10 & 0x1f) == 0)) {
        for (iVar12 = *(int *)(uVar39 + 4); iVar12 != 0; iVar12 = *(int *)(iVar12 + 8)) {
          if ((*(unsigned int *)(iVar12 + 0x10) != 0) &&
             ((unsigned __int64)*(unsigned int *)(iVar12 + 0x10) != (param_2 & 0xffffffff))) {
            bVar55 = true;
            goto LAB_82b04b7c;
          }
        }
        bVar55 = false;
LAB_82b04b7c:
        if (!bVar55) {
          uVar24 = *(unsigned int *)(iVar23 + 0x2c);
          uVar1 = *(unsigned int *)(iVar23 + 0x30);
          *(int *)(iVar14 + 100) = iVar14 + 0xf0;
          *(int *)(iVar14 + 0x5c) = iVar14 + 0x78;
          *(int *)(iVar14 + 0x54) = iVar14 + 0xb8;
          uVar2 = *(unsigned int *)(uVar39 + 0x2c);
          uVar3 = *(unsigned int *)(uVar39 + 0x30);
          *(int *)(iVar14 + 0x6c) = iVar14 + 0xd0;
          cVar25 = fn_82AF9FF8(iVar9,param_2,uVar24,uVar1,uVar54,uVar2,uVar3,param_2);
          if ((cVar25 != '\0') &&
             ((*(unsigned int *)(iVar14 + 0xd0) >> 4 & 0x7f) + (*(unsigned int *)(iVar14 + 0xf0) >> 4 & 0x7f) <=
              *(unsigned int *)(iVar9 + 0x298))) {
            *(int *)(iVar14 + 0x6c) = iVar14 + 0xd0;
            *(int *)(iVar14 + 100) = iVar14 + 0xf0;
            *(int *)(iVar14 + 0x5c) = iVar14 + 0x78;
            *(int *)(iVar14 + 0x54) = iVar14 + 0xb8;
            cVar25 = fn_82B004A8(iVar9,param_2,uVar24,uVar1,uVar54,*(unsigned int *)(iVar14 + 0xb8),
                                   *(unsigned int *)(iVar14 + 0x78),param_2);
            if (cVar25 != '\0') {
              puVar10 = (unsigned int *)fn_82AF7E20(iVar9,0,param_2,*(unsigned int *)(iVar14 + 0xb8),
                                                  *(unsigned int *)(iVar14 + 0x78));
              if (*(int *)(iVar14 + 0xf8) != 0) {
                uVar51 = fn_82AC9F80(iVar9,*(int *)(iVar14 + 0xf8),0);
                fn_82AD1978(puVar10,uVar51);
              }
              uVar58 = param_2;
              if (*(int *)(iVar14 + 0xd8) != 0) {
                uVar51 = fn_82AC9F80(iVar9,*(int *)(iVar14 + 0xd8),0);
                fn_82AD1978(puVar10,uVar51);
              }
              while( true ) {
                puVar16 = (unsigned int *)*(unsigned int *)uVar58;
                uVar44 = ZEXT48(puVar16);
                uVar6 = uVar54;
                if (uVar44 == 0) break;
                uVar18 = *puVar16;
                if (((uVar18 & 0xe000000) == 0) &&
                   (((uVar18 >> 0x1e & 1) == 0 || ((uVar18 & 0x1ffe000) != 0)))) {
                  uVar6 = ZEXT48((unsigned int *)puVar16[4]);
                  for (uVar18 = *(unsigned int *)puVar16[4]; uVar18 != uVar44;
                      uVar18 = *(unsigned int *)(uVar18 + 4)) {
                    uVar6 = (unsigned __int64)uVar18 + 4;
                  }
                  *(unsigned int *)uVar6 = puVar16[1];
                  puVar16[1] = *puVar10;
                  *puVar10 = (unsigned int)puVar16;
                  puVar16[4] = (unsigned int)puVar10;
                }
                if ((unsigned int *)*(unsigned int *)uVar58 == puVar16) {
                  uVar58 = uVar44 + 4;
                }
              }
              while( true ) {
                puVar16 = (unsigned int *)*(unsigned int *)uVar6;
                uVar58 = ZEXT48(puVar16);
                if (uVar58 == 0) break;
                uVar18 = *puVar16;
                if (((uVar18 & 0xe000000) == 0) &&
                   (((uVar18 >> 0x1e & 1) == 0 || ((uVar18 & 0x1ffe000) != 0)))) {
                  uVar44 = ZEXT48((unsigned int *)puVar16[4]);
                  for (uVar18 = *(unsigned int *)puVar16[4]; uVar18 != uVar58;
                      uVar18 = *(unsigned int *)(uVar18 + 4)) {
                    uVar44 = (unsigned __int64)uVar18 + 4;
                  }
                  *(unsigned int *)uVar44 = puVar16[1];
                  puVar16[1] = *puVar10;
                  *puVar10 = (unsigned int)puVar16;
                  puVar16[4] = (unsigned int)puVar10;
                }
                if ((unsigned int *)*(unsigned int *)uVar6 == puVar16) {
                  uVar6 = uVar58 + 4;
                }
              }
              if ((*(unsigned int *)(iVar14 + 0xf0) >> 0xf & 7) != 0) {
                fn_82AF6CC8(iVar9,puVar10);
              }
              uVar24 = *(unsigned int *)(uVar39 + 0x34);
              uVar51 = fn_82AD17B0(iVar9,puVar10);
              uVar6 = fn_82AF7710(iVar9,1,puVar10,uVar51,uVar24);
              if ((*(unsigned int *)(iVar23 + 8) & 1) != 0) {
                *(unsigned int *)((int)uVar6 + 8) = *(unsigned int *)((int)uVar6 + 8) | 1;
              }
              fn_82AD1B28(puVar10);
              puVar10[2] = puVar10[2] | 0x1000000;
              fn_82AFE520(iVar9,param_2,uVar6,0,1,1);
              fn_82AFA378(iVar9,puVar10);
              fn_82AFA378(iVar9,param_2);
              uVar24 = *(unsigned int *)(iVar14 + 0x4d4);
              goto LAB_82b08948;
            }
          }
        }
      }
    }
LAB_82b04a3c:
    uVar24 = *(unsigned int *)(iVar14 + 0x4d4);
    lVar45 = param_2 + 4;
    while( true ) {
      uVar18 = *(unsigned int *)lVar45;
      if ((unsigned __int64)uVar18 == 0) break;
      iVar9 = *(int *)(uVar18 + 0x10);
      if (iVar9 != 0) {
        uVar39 = *(unsigned int *)(iVar9 + 8) >> 7 & 0x7f;
        if ((uVar39 == 1) || (uVar39 == 0x12)) {
          fn_82AFA378(uVar24);
        }
        else if (uVar39 == 0x6e) {
          uVar39 = *(unsigned int *)(iVar9 + 8) >> 0x13 & 7;
          uVar15 = 0;
          if (uVar39 != 0) {
            puVar10 = (unsigned int *)(iVar9 + 0x2c);
            uVar15 = 0;
            do {
              if (*puVar10 == uVar18) break;
              uVar15 = uVar15 + 1;
              puVar10 = puVar10 + 1;
            } while (uVar15 < uVar39);
          }
          puVar10 = (unsigned int *)(iVar9 + 4);
          while (puVar16 = (unsigned int *)*puVar10, puVar16 != (unsigned int *)0x0) {
            uVar39 = puVar16[4];
            if ((uVar39 != 0) && ((*(unsigned int *)(uVar39 + 8) & 0x3f80) == 0x80)) {
              uVar11 = *puVar16;
              uVar19 = 0;
              if ((uVar11 & 0xe000000) != 0) {
                uVar17 = 0;
                do {
                  if (((uVar11 >> 5 & 0xff) >> (uVar17 & 0x3f) & 3) == uVar15) {
                    fn_82AFA378(uVar24,uVar39);
                  }
                  uVar11 = *puVar16;
                  uVar19 = uVar19 + 1;
                  uVar17 = uVar17 + 2;
                } while (uVar19 < (uVar11 >> 0x19 & 7));
              }
            }
            if ((unsigned int *)*puVar10 == puVar16) {
              puVar10 = puVar16 + 2;
            }
          }
        }
      }
      if (*(unsigned int *)lVar45 == uVar18) {
        lVar45 = (unsigned __int64)uVar18 + 8;
      }
    }
  }
LAB_82b042a4:
  uVar6 = 0;
LAB_82b042a8:
  fn_82F6A594(uVar6);
  return;
LAB_82b07c14:
  if (uVar6 != 0) {
    iVar9 = *(int *)(iVar14 + 0x4dc);
    do {
      uVar18 = *(unsigned int *)(iVar23 + 4);
      iVar23 = 0;
      *(unsigned int *)(iVar14 + 0xe8) = 0;
      uVar18 = -(unsigned int)((uVar18 & 1) == 0) & uVar18;
      *(unsigned int *)(iVar14 + 0xe4) = uVar18;
      while( true ) {
        if ((uVar18 == 0) || (bVar55 = false, iVar23 == *(int *)(uVar18 + 8))) {
          bVar55 = true;
        }
        if (bVar55) break;
        piVar34 = (int *)((iVar23 + 2) * 8 + uVar18);
        if ((uVar6 & 0xffffffff) == (unsigned __int64)(unsigned int)piVar34[1]) {
          iVar12 = *piVar34;
          if ((*(unsigned int *)(iVar12 + 0x10) & 0x80000000) == 0) {
            uVar24 = *(unsigned int *)(iVar14 + 0x4d4);
            *(unsigned int *)(iVar12 + 0x10) = *(unsigned int *)(iVar12 + 0x10) | 0x80000000;
            iVar13 = fn_82B09658(uVar24,*(unsigned int *)(iVar9 + 0x1c),iVar12,4);
            if (iVar12 != iVar13) break;
          }
        }
        fn_82ABE870(uVar58 - 0x3e0);
        iVar23 = *(int *)(iVar14 + 0xe8);
        uVar18 = *(unsigned int *)(iVar14 + 0xe4);
      }
      if ((uVar18 == 0) || (bVar55 = false, iVar23 == *(int *)(uVar18 + 8))) {
        bVar55 = true;
      }
      if ((!bVar55) || (uVar6 = uVar6 - 1, uVar6 == 0)) break;
      iVar23 = *(int *)(iVar14 + 0xe0);
    } while( true );
  }
  while (((*puVar10 & 1) == 0 && (*puVar10 != 0))) {
    puVar22 = (unsigned int *)(*puVar16 & 0xfffffffe);
    puVar53 = puVar22 + -1;
    uVar18 = puVar22[1] - 1;
    uVar51 = *(unsigned __int64 *)(puVar53 + (puVar22[1] + 1) * 2);
    puVar22[1] = uVar18;
    *(unsigned __int64 *)(iVar14 + 0x98) = uVar51;
    if (uVar18 == 0) {
      *(unsigned int *)(*puVar22 & 0xfffffffe) = *puVar53;
      *(unsigned int *)(*puVar53 & 0xfffffffe) = *puVar22;
      fn_82AA6648(puVar16,puVar53,((unsigned __int64)puVar22[2] + 2 & 0x1fffffff) << 3);
    }
    *(unsigned int *)(*(int *)(iVar14 + 0x98) + 0x10) =
         *(unsigned int *)(*(int *)(iVar14 + 0x98) + 0x10) & 0x7fffffff;
  }
  uVar24 = *(unsigned int *)(iVar14 + 0x4d4);
  fn_82AC6808(uVar24,puVar16,8,0);
  if ((uVar6 & 0xffffffff) != 0) {
    uVar54 = (unsigned __int64)*(unsigned int *)(iVar14 + 0x4dc);
    uVar6 = uVar54;
    goto LAB_82b08948;
  }
  puVar10 = *(unsigned int **)(iVar14 + 0x74);
LAB_82b07dac:
  if (((((puVar10 == *(unsigned int **)(iVar14 + 0x7c)) && (*(int *)(iVar14 + 0xc4) == 0)) &&
       (*(int *)(iVar14 + 0xa0) == 0)) && ((puVar10[2] & 0x3f80) == 0x100)) &&
     (((*(unsigned int *)puVar10[0xb] & 0x18) == 0 || ((*(unsigned int *)puVar10[0xc] & 0x18) == 0)))) {
    iVar23 = *(int *)(iVar14 + 0x4dc);
    iVar9 = *(int *)(iVar14 + 0x4d4);
    if ((*(unsigned int *)(iVar23 + 8) & 0x1c000) == 0x4000) {
      cVar25 = fn_82AFE0E8(iVar9,puVar10,iVar23,10,1);
      puVar10 = *(unsigned int **)(iVar14 + 0x74);
      if (cVar25 != '\0') {
        puVar22 = (unsigned int *)fn_82ACA920(iVar9,puVar10[0xb],*(unsigned int *)(puVar10[0xb] + 0xc));
        uVar58 = ((unsigned __int64)*(unsigned int *)(iVar14 + 0xc0) & 0x3fffffff) << 2 | 0xe0 |
                 (unsigned __int64)*(unsigned int *)(iVar14 + 200);
        uVar18 = *puVar22 >> 5 & 0xff;
        *puVar22 = ((((uVar18 >> ((unsigned int)uVar58 >> 5 & 6) & 3) << 2 | 0x20000 |
                     uVar18 >> ((unsigned int)uVar58 >> 3 & 6) & 3) << 2 |
                    uVar18 >> ((unsigned int)(uVar58 >> 1) & 6) & 3) << 2 |
                   uVar18 >> ((unsigned int)(uVar58 << 1) & 6) & 3) << 5 | *puVar22 & 0xf5ffe01f;
        iVar12 = *(int *)(*(int *)(iVar14 + 0x74) + 0x30);
        puVar16 = (unsigned int *)fn_82ACA920(iVar9,iVar12,*(unsigned int *)(iVar12 + 0xc));
        uVar18 = *puVar16;
        uVar58 = ((unsigned __int64)*(unsigned int *)(iVar14 + 0xc0) & 0x3fffffff) << 2 | 0xe0 |
                 (unsigned __int64)*(unsigned int *)(iVar14 + 200);
        uVar39 = uVar18 >> 5 & 0xff;
        *puVar16 = ((((uVar39 >> ((unsigned int)uVar58 >> 5 & 6) & 3) << 2 | 0x20000 |
                     uVar39 >> ((unsigned int)uVar58 >> 3 & 6) & 3) << 2 |
                    uVar39 >> ((unsigned int)(uVar58 >> 1) & 6) & 3) << 2 |
                   uVar39 >> ((unsigned int)(uVar58 << 1) & 6) & 3) << 5 | uVar18 & 0xf5ffe01f;
        puVar10 = puVar22;
        if ((uVar18 & 0x18) != 0) {
          puVar10 = puVar16;
          puVar16 = puVar22;
        }
        iVar12 = fn_82B8A3A0(dVar59,dVar59,dVar59,dVar59,iVar9,1);
        uVar51 = fn_82AD18C0(iVar9,iVar12,0);
        uVar58 = fn_82AF7FB0(iVar9,0,iVar23,puVar10,puVar16,uVar51);
        if (((*puVar10 | *puVar16) & 8) != 0) {
          uVar51 = fn_82AD12C8(*(unsigned int *)(iVar14 + 0x74));
          uVar51 = fn_82AC9F80(iVar9,uVar51,0);
          fn_82AD1978(uVar58,uVar51);
        }
        fn_82AEFCD8(iVar12);
        *(unsigned int *)(iVar12 + 8) = *(unsigned int *)(iVar12 + 8) | 0x1000000;
        fn_82AF6E60(iVar9,uVar58);
        if ((*(unsigned int *)(iVar23 + 8) & 1) != 0) {
          *(unsigned int *)((int)uVar58 + 8) = *(unsigned int *)((int)uVar58 + 8) | 1;
        }
        uVar54 = (unsigned __int64)*(unsigned int *)(iVar14 + 0x70);
        uVar6 = uVar58;
LAB_82b0802c:
        fn_82AFE7E0(iVar9,iVar23,uVar54,uVar58);
        goto LAB_82b042a8;
      }
    }
  }
  else {
    iVar9 = *(int *)(iVar14 + 0x4d4);
    iVar23 = *(int *)(iVar14 + 0x4dc);
  }
  lVar45 = 0;
  uVar39 = *(unsigned int *)(iVar23 + 8) >> 0x1a & 1;
  uVar18 = *(unsigned int *)(*(int *)(iVar14 + 0x7c) + 8);
  uVar15 = puVar10[2] >> 0x1a & 1;
  *(unsigned int *)(iVar23 + 8) = *(unsigned int *)(iVar23 + 8) | 0x4000000;
  uVar11 = uVar18 >> 0x1a & 1;
  puVar10[2] = puVar10[2] | 0x4000000;
  *(unsigned int *)(*(int *)(iVar14 + 0x7c) + 8) = *(unsigned int *)(*(int *)(iVar14 + 0x7c) + 8) | 0x4000000;
  for (uVar18 = *(unsigned int *)(*(int *)(iVar9 + 0x28c) + 4); ((uVar18 & 1) == 0 && (uVar18 != 0));
      uVar18 = *(unsigned int *)((uVar18 & 0xfffffffe) + 4)) {
    lVar45 = (unsigned __int64)*(unsigned int *)(uVar18 + 8) + lVar45;
  }
  *(unsigned int *)(iVar14 + 0x220) = 0;
  *(unsigned int *)(iVar14 + 0x300) = 0;
  uVar24 = *(unsigned int *)(iVar14 + 0xc4);
  *(unsigned int *)(iVar14 + 0x308) = 0;
  *(unsigned int *)(iVar14 + 0x228) = 0;
  *(unsigned int *)(iVar14 + 0x23c) = 0;
  *(unsigned int *)(iVar14 + 0x2c0) = 0;
  *(unsigned int *)(iVar14 + 0x2e4) = 0;
  *(unsigned int *)(iVar14 + 0x31c) = 0;
  *(unsigned int *)(iVar14 + 0x3a0) = 0;
  *(unsigned int *)(iVar14 + 0x3c4) = 0;
  *(unsigned __int64 *)(iVar14 + 0x2f0) = 0;
  *(unsigned __int64 *)(iVar14 + 0x3d0) = 0;
  iVar12 = *(int *)(iVar14 + 0x74);
  if (((CONCAT44(uVar24,uVar24) & 0xfffffffffffffffb) == 0) &&
     ((*(unsigned int *)(iVar12 + 8) & 0x3f80) == 0x80)) {
    *(int *)(iVar14 + 0x54) = iVar23;
    *(int *)(iVar14 + 0x5c) = iVar14 + 0x220;
    fn_82AF6F10(iVar9,iVar23,iVar12,*(unsigned int *)(iVar14 + 200),uVar24,
                      *(unsigned int *)(iVar14 + 0x7c),*(unsigned int *)(iVar14 + 0xc0),
                      *(unsigned int *)(iVar14 + 0xa0));
    uVar24 = *(unsigned int *)(iVar14 + 0xc4);
    iVar12 = *(int *)(iVar14 + 0x74);
  }
  uVar1 = *(unsigned int *)(iVar14 + 0xa0);
  if (((CONCAT44(uVar1,uVar1) & 0xfffffffffffffffb) == 0) &&
     ((*(unsigned int *)(*(int *)(iVar14 + 0x7c) + 8) & 0x3f80) == 0x80)) {
    *(int *)(iVar14 + 0x54) = iVar23;
    *(int *)(iVar14 + 0x5c) = iVar14 + 0x300;
    fn_82AF6F10(iVar9,iVar23,*(int *)(iVar14 + 0x7c),*(unsigned int *)(iVar14 + 0xc0),uVar1,
                      iVar12,*(unsigned int *)(iVar14 + 200),uVar24);
  }
  cVar25 = fn_82AFE190(iVar9,iVar23,uVar58 - 0x2a0,uVar58 - 0x1c0);
  if (cVar25 == '\0') {
    cVar25 = fn_82AFE190(iVar9,iVar23,uVar58 - 0x1c0,uVar58 - 0x2a0);
    if (cVar25 == '\0') {
      if (*(int *)(iVar14 + 0x3d0) != 0) {
        fn_82B8C970(iVar9,*(unsigned int *)(iVar14 + 0x300),*(unsigned int *)(iVar14 + 0x3d4));
      }
      if (*(int *)(iVar14 + 0x2f0) != 0) {
        fn_82B8C970(iVar9,*(unsigned int *)(iVar14 + 0x220),*(unsigned int *)(iVar14 + 0x2f4));
      }
      fn_82AFD740(iVar9,lVar45,1,0);
      if (uVar39 == 0) {
        *(unsigned int *)(iVar23 + 8) = *(unsigned int *)(iVar23 + 8) & 0xfbffffff;
      }
      if (uVar15 == 0) {
        *(unsigned int *)(*(int *)(iVar14 + 0x74) + 8) = *(unsigned int *)(*(int *)(iVar14 + 0x74) + 8) & 0xfbffffff
        ;
      }
      if (uVar11 == 0) {
        *(unsigned int *)(*(int *)(iVar14 + 0x7c) + 8) = *(unsigned int *)(*(int *)(iVar14 + 0x7c) + 8) & 0xfbffffff
        ;
      }
LAB_82b0826c:
      uVar18 = *(unsigned int *)(iVar14 + 0x8c);
      uVar39 = *(unsigned int *)(iVar14 + 0x4dc);
      iVar9 = *(int *)(iVar14 + 0x4d4);
      uVar18 = uVar18 - (uVar18 & ~(uVar18 - 1));
      goto LAB_82b06d7c;
    }
    if (uVar39 == 0) {
      *(unsigned int *)(iVar23 + 8) = *(unsigned int *)(iVar23 + 8) & 0xfbffffff;
    }
    if (uVar15 == 0) {
      *(unsigned int *)(*(int *)(iVar14 + 0x74) + 8) = *(unsigned int *)(*(int *)(iVar14 + 0x74) + 8) & 0xfbffffff;
    }
    if (uVar11 == 0) {
      *(unsigned int *)(*(int *)(iVar14 + 0x7c) + 8) = *(unsigned int *)(*(int *)(iVar14 + 0x7c) + 8) & 0xfbffffff;
    }
    lVar45 = uVar58 - 0x1c0;
  }
  else {
    if (uVar39 == 0) {
      *(unsigned int *)(iVar23 + 8) = *(unsigned int *)(iVar23 + 8) & 0xfbffffff;
    }
    if (uVar15 == 0) {
      *(unsigned int *)(*(int *)(iVar14 + 0x74) + 8) = *(unsigned int *)(*(int *)(iVar14 + 0x74) + 8) & 0xfbffffff;
    }
    if (uVar11 == 0) {
      *(unsigned int *)(*(int *)(iVar14 + 0x7c) + 8) = *(unsigned int *)(*(int *)(iVar14 + 0x7c) + 8) & 0xfbffffff;
    }
    lVar45 = uVar58 - 0x2a0;
  }
  uVar6 = fn_82B02370(iVar9,lVar45,*(unsigned int *)(iVar14 + 0x70));
  goto LAB_82b042a8;
code_r0x82b05d6c:
  uVar18 = *(unsigned int *)(iVar14 + 0x88);
  bVar55 = true;
  *(unsigned int *)(iVar14 + 0x88) = uVar15;
  puVar22 = puVar16;
  puVar16 = puVar53;
  uVar15 = uVar18;
  goto LAB_82b059d0;
  while( true ) {
    uVar46 = uVar46 + 1;
    lVar33 = lVar33 + 4;
    if (uVar54 <= (uVar46 & 0xffffffff)) break;
LAB_82b03ae8:
    if ((((*(unsigned int *)*(int *)lVar33 & 0x1f) == 0) &&
        (uVar15 = ((unsigned int *)*(int *)lVar33)[3], (*(unsigned int *)(uVar15 + 8) & 0x3f80) == 0x180)) &&
       (iVar23 == *(int *)(uVar15 + 0x2c))) break;
  }
  if (uVar54 <= (uVar46 & 0xffffffff)) {
LAB_82b03b30:
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(uVar24,0x12c0);
  }
LAB_82b03b3c:
  iVar9 = fn_82AFB698(uVar24,uVar18,iVar12,uVar6,uVar58 - 0x340);
  fn_82AD35A8(uVar6,uVar46,iVar9,uVar24);
  for (uVar39 = 0; uVar39 < (*(unsigned int *)((int)uVar6 + 8) >> 0x13 & 7); uVar39 = uVar39 + 1) {
    iVar14 = *(int *)lVar45;
    if (*(unsigned int *)(iVar14 + 0xc) == uVar18) {
      piVar34 = (int *)(*(unsigned int *)(iVar14 + 0xc) + 4);
      iVar13 = *(int *)(iVar9 + 0xc);
      for (iVar32 = *piVar34; iVar32 != iVar14; iVar32 = *(int *)(iVar32 + 8)) {
        piVar34 = (int *)(iVar32 + 8);
      }
      *piVar34 = *(int *)(iVar14 + 8);
      *(unsigned int *)(iVar14 + 8) = *(unsigned int *)(iVar13 + 4);
      *(int *)(iVar13 + 4) = iVar14;
      *(int *)(iVar14 + 0xc) = iVar13;
    }
    lVar45 = lVar45 + 4;
  }
  if (*(int *)(iVar12 + 0x10) == 0) {
    puVar43 = (unsigned int *)(*(int *)(iVar23 + 0xc) + 4);
    for (iVar9 = *(int *)(*(int *)(iVar23 + 0xc) + 4); iVar9 != iVar12; iVar9 = *(int *)(iVar9 + 8))
    {
      puVar43 = (unsigned int *)(iVar9 + 8);
    }
    *puVar43 = *(unsigned int *)(iVar9 + 8);
    fn_82ABE5F8(uVar24,iVar12,0x14,0x1a);
  }
  fn_82AD1B28(uVar15);
  fn_82AFA378(uVar24,uVar6);
  fn_82AFA378(uVar24,uVar15);
  fn_82AFA378(uVar24,uVar18);
  goto LAB_82b042a8;
}

