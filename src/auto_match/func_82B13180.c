typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_b0;
extern unsigned int *auStack_b8;
extern unsigned int *auStack_bc;
extern unsigned int fStack_b4;
extern int fn_82AA66A8();
extern int fn_82ABDD90();
extern int fn_82ABE2E0();
extern int fn_82ACAFD8();
extern int fn_82AD1270();
extern int fn_82AD17B0();
extern int fn_82AD1978();
extern int fn_82AEFCD8();
extern int fn_82AD20C0();
extern int fn_82AD35E8();
extern int fn_82AE93B0();
extern int fn_82AEFA80();
extern int fn_82AEFBB8();
extern int fn_82AEFCD8();
extern int fn_82AF04D0();
extern int fn_82B0FD38();
extern int fn_82B10048();
extern int fn_82B10788();
extern int fn_82B10EA8();
extern int fn_82B111F8();
extern int fn_82B11330();
extern int fn_82B80EE0();
extern int fn_82B841E8();
extern int fn_82B86888();
extern int fn_82B89810();
extern int fn_82B8A3A0();
extern int fn_82AEFA80();
extern int fn_82AA66A8();
extern int fn_82B8E778();
extern unsigned int iStack0000001c;
extern unsigned int lbl_820D7B2B;
extern unsigned int lbl_820D7D2F;
extern unsigned int lbl_821AAD20;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_82B13180(int param_1,int param_2)

{
  bool bVar1;
  unsigned int uVar2;
  char cVar11;
  int iVar3;
  int iVar4;
  unsigned int *puVar5;
  int *piVar6;
  unsigned int *puVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned char bVar12;
  unsigned int uVar13;
  unsigned int *puVar14;
  unsigned int uVar16;
  __int64 lVar15;
  unsigned int *puVar18;
  unsigned int uVar19;
  unsigned __int64 uVar17;
  unsigned int *puVar20;
  bool bVar22;
  unsigned int uVar21;
  unsigned __int64 uVar23;
  unsigned __int64 uVar24;
  unsigned int *puVar26;
  unsigned int uVar27;
  unsigned int uVar28;
  unsigned int uVar29;
  __int64 lVar25;
  unsigned int uVar30;
  unsigned int *puVar31;
  unsigned int *puVar32;
  unsigned char bVar33;
  int iVar34;
  int *piVar35;
  float *pfVar36;
  int *piVar37;
  unsigned int uVar38;
  double dVar39;
  double dVar40;
  int iStack0000001c;
  int aiStack_c4;
  unsigned char auStack_bc [4];
  unsigned char auStack_b8 [4];
  float fStack_b4;
  unsigned char auStack_b0 [176];

  dVar40 = (double)lbl_821AAD20;
  iStack0000001c = param_2;
LAB_82b131c4:
  if ((*(unsigned int *)(param_2 + 0x14) & 1) == 0) {
    iVar4 = param_2 + 0x10;
  }
  else if ((*(unsigned int *)(param_2 + 0x1c) & 1) == 0) {
    iVar4 = param_2 + 0x18;
  }
  else {
    iVar4 = param_2 + 0x20;
  }
  uVar8 = *(unsigned int *)(iVar4 + 4);
LAB_82b131f4:
  puVar32 = (unsigned int *)(-(unsigned int)((uVar8 & 1) == 0) & uVar8);
  iVar34 = iVar4;
LAB_82b13208:
  if (puVar32 == (unsigned int *)0x0) {
    return;
  }
  uVar30 = 0;
  uVar8 = 0xffffffff;
  puVar32[4] = puVar32[4] & 0xfee7ffff;
  fn_82AF04D0(puVar32,param_1);
  if (((iVar34 != param_2 + 0x20) || ((puVar32[2] & 0x3f80) == 0x3a00)) &&
     (cVar11 = fn_82ABE2E0(puVar32), cVar11 != '\0')) goto LAB_82b14f34;
  uVar13 = puVar32[2] >> 7 & 0x7f;
  if ((uVar13 != 0x74) || ((*(unsigned int *)(param_1 + 0x34) & 0x40000) == 0)) {
    if ((uVar13 == 0x68) &&
       ((puVar32[1] == 0 &&
        (fn_82B8E778(puVar32[0xb],&aiStack_c4,auStack_b8,auStack_bc,0), iVar4 = aiStack_c4,
        (*(unsigned int *)(aiStack_c4 + 8) & 0x3f80) == 0x3e00)))) {
      uVar13 = *(unsigned int *)(aiStack_c4 + 8);
      iVar3 = fn_82ABDD90(param_1,uVar13 >> 7 & 0x7f,uVar13 >> 0x13 & 7,uVar13 >> 0xe & 7);
      if ((*(unsigned int *)((*(unsigned int *)(iVar3 + iVar4 + -8) & 0x7fff) * 0x28 + *(int *)(param_1 + 0xc) + 4)
          & 0x70) == 0x30) {
        puVar32[2] = puVar32[2] & 0xfdffffff;
        goto LAB_82b14f34;
      }
    }
    uVar13 = puVar32[2];
    uVar21 = uVar13 >> 7 & 0x7f;
    if (uVar21 != 0x70) {
      bVar22 = false;
      puVar7 = puVar32;
      while (puVar31 = (unsigned int *)*puVar7, puVar31 != (unsigned int *)0x0) {
        if ((*puVar31 & 0xe000000) != 0) {
          uVar13 = *(unsigned int *)(puVar31[3] + 8) >> 7 & 0x7f;
          if ((uVar13 == 0x7d) || (bVar1 = false, uVar13 == 0x7c)) {
            bVar1 = true;
          }
          if ((!bVar1) && (*(int *)(puVar31[3] + 0x1c) != param_2)) {
            iVar4 = fn_82B10EA8(param_1,puVar31,1);
            bVar22 = (bool)((*(unsigned int *)(iVar4 + 8) & 0x3f80) == 0x3700 | bVar22);
          }
        }
        if ((unsigned int *)*puVar7 == puVar31) {
          puVar7 = puVar31 + 1;
        }
      }
      uVar13 = puVar32[2];
      uVar21 = uVar13 >> 7 & 0x7f;
      if ((uVar21 == 0x7d) || (bVar1 = false, uVar21 == 0x7c)) {
        bVar1 = true;
      }
      if (!bVar1) {
        puVar7 = puVar32 + 1;
        while (puVar31 = (unsigned int *)*puVar7, puVar31 != (unsigned int *)0x0) {
          uVar29 = puVar31[4];
          if ((((uVar29 != 0) && ((*puVar31 & 0xe000000) != 0)) &&
              (*(int *)(uVar29 + 0x1c) != param_2)) && ((*(unsigned int *)(uVar29 + 8) & 0x3f80) != 0x3800))
          {
            fn_82B10EA8(param_1,puVar31,1);
            uVar13 = puVar32[2];
            uVar21 = uVar13 >> 7 & 0x7f;
            if (uVar21 == 0x6e) {
              bVar22 = true;
            }
          }
          if ((unsigned int *)*puVar7 == puVar31) {
            puVar7 = puVar31 + 2;
          }
        }
      }
      if (bVar22) goto LAB_82b131c4;
    }
    puVar14 = puVar32 + 1;
    puVar7 = (unsigned int *)puVar32[1];
    for (puVar31 = puVar7; puVar31 != (unsigned int *)0x0; puVar31 = (unsigned int *)puVar31[2]) {
      if ((puVar31[4] != 0) && ((*puVar31 & 0xe000000) != 0)) {
        uVar29 = *puVar31 & 0x1f;
        uVar30 = uVar29 | uVar30;
        uVar8 = uVar29 & uVar8;
      }
    }
    if ((uVar30 & 0x10) != 0) {
      if ((uVar21 == 0x7d) || (bVar22 = false, uVar21 == 0x7c)) {
        bVar22 = true;
      }
      if (!bVar22) {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0xdac,0xffffffff820d7da4);
      }
    }
    if ((uVar30 & 1) != 0) {
      bVar22 = false;
      if ((uVar30 & 1) == (uVar8 & 1)) {
        cVar11 = fn_82AEFA80(puVar32);
        if (cVar11 == '\0') {
          if ((uVar21 != 0x70) && (uVar21 != 0x6e)) goto LAB_82b1358c;
          for (puVar31 = (unsigned int *)*puVar32; puVar31 != (unsigned int *)0x0; puVar31 = (unsigned int *)puVar31[1]) {
            uVar8 = *puVar31;
            if ((uVar8 & 0xe000000) != 0) {
              uVar30 = puVar31[3];
              cVar11 = fn_82AEFA80(uVar30);
              if (cVar11 == '\0') goto LAB_82b1358c;
              if ((uVar8 & 2) == 0) {
                uVar23 = (~((unsigned __int64)uVar8 & 0x1f) & 0xffffffff) >> 2 & 1;
              }
              else {
                uVar23 = 0;
              }
              if ((uVar23 == 0) ||
                 (((*(unsigned int *)(uVar30 + 8) >> 0x18 & 1) != 0 && ((*(unsigned int *)(uVar30 + 8) & 1) == 0))))
              goto LAB_82b1358c;
              for (puVar5 = *(unsigned int **)(uVar30 + 4); puVar5 != (unsigned int *)0x0;
                  puVar5 = (unsigned int *)puVar5[2]) {
                if (((puVar5[4] != 0) && ((*puVar5 & 0xe000000) != 0)) && ((*puVar5 & 1) == 0))
                goto LAB_82b1358c;
              }
            }
          }
        }
      }
      else {
LAB_82b1358c:
        bVar22 = true;
      }
      if (bVar22) {
        puVar32[2] = uVar13 & 0xfffffffe;
        bVar22 = (uVar13 & 0x3f80) == 0x3b00;
        if (!bVar22) {
          uVar8 = 0;
          for (puVar31 = puVar7; puVar31 != (unsigned int *)0x0; puVar31 = (unsigned int *)puVar31[2]) {
            piVar6 = (int *)puVar31[4];
            if (((piVar6 != (int *)0x0) && ((*puVar31 & 0xe000000) != 0)) && ((*puVar31 & 1) != 0))
            {
              if ((piVar6[2] & 0x3f80U) == 0x3800) {
                if ((*piVar6 == 0) || (bVar1 = true, *(int *)(*piVar6 + 4) == 0)) {
                  bVar1 = false;
                }
                if (bVar1) {
                  bVar22 = true;
                }
              }
              uVar30 = *(unsigned int *)(piVar6[7] + 0x44) & 0xfffffff;
              if (uVar8 < uVar30) {
                uVar8 = uVar30;
              }
            }
          }
          if ((*(unsigned int *)(param_2 + 0x44) & 0xfffffff) <= uVar8) {
            bVar22 = true;
          }
        }
        if (bVar22) {
          uVar8 = 0;
          for (; puVar7 != (unsigned int *)0x0; puVar7 = (unsigned int *)puVar7[2]) {
            if (puVar7[4] != 0) {
              uVar30 = *puVar7;
              uVar13 = uVar30 >> 0x19 & 7;
              if ((uVar13 != 0) && ((uVar30 & 1) != 0)) {
                uVar21 = 0;
                uVar29 = 0;
                if (uVar13 != 0) {
                  uVar19 = 0;
                  do {
                    uVar29 = uVar29 + 1;
                    uVar10 = uVar19 & 0x3f;
                    uVar19 = uVar19 + 2;
                    uVar21 = 1 << ((uVar30 >> 5 & 0xff) >> uVar10 & 3) | uVar21;
                  } while (uVar29 < uVar13);
                }
                uVar8 = uVar8 | uVar21;
              }
            }
          }
          bVar33 = (&lbl_820D7B2B)[uVar8];
          puVar7 = (unsigned int *)fn_82AD17B0(param_1,puVar32);
          *puVar7 = (unsigned int)((((0x8da691691448U >> (uVar8 & 0x7f)) >> (uVar8 & 0x7f)) >>
                            (uVar8 & 0x7f) & 0xffffffff) << 0x19) & 0xe000000 | *puVar7 & 0xf1ffffff
          ;
          fn_82AD1270(puVar7,0);
          uVar30 = (unsigned int)bVar33 << 5 | *puVar7 & 0xffffe01f;
          *puVar7 = uVar30;
          if ((puVar32[2] & 0x3f80) == 0x3b00) {
            *puVar7 = uVar30 | 8;
          }
          uVar13 = fn_82AD35E8(param_1,param_2,0,puVar7,puVar7);
          uVar30 = uVar13 & 0xfffffffe;
          if (iVar34 == param_2 + 0x10) {
            puVar7 = (unsigned int *)(param_2 + 0x1c);
            *(unsigned int *)(uVar30 + 0x28) = *puVar7;
            *(unsigned int *)((*puVar7 & 0xfffffffe) + 0x24) = uVar30 + 0x28;
            *(unsigned int *)(uVar30 + 0x24) = (unsigned int)puVar7 | 1;
            *puVar7 = uVar30;
          }
          else {
            uVar21 = (unsigned int)puVar32 & 0xfffffffe;
            *(unsigned int *)(uVar30 + 0x28) = *(unsigned int *)(uVar21 + 0x28);
            *(unsigned int *)((*(unsigned int *)(uVar21 + 0x28) & 0xfffffffe) + 0x24) = uVar30 + 0x28;
            *(unsigned int *)(uVar30 + 0x24) = uVar21 + 0x28;
            *(unsigned int *)(uVar21 + 0x28) = uVar30;
          }
          *(unsigned int *)(uVar13 + 8) = *(unsigned int *)(uVar13 + 8) | 1;
          puVar7 = puVar14;
          while (puVar31 = (unsigned int *)*puVar7, puVar31 != (unsigned int *)0x0) {
            if (((puVar31[4] != 0) && ((*puVar31 & 0xe000000) != 0)) && ((*puVar31 & 1) != 0)) {
              puVar26 = (unsigned int *)(puVar31[3] + 4);
              for (puVar5 = (unsigned int *)*puVar26; puVar5 != puVar31; puVar5 = (unsigned int *)puVar5[2]) {
                puVar26 = puVar5 + 2;
              }
              *puVar26 = puVar31[2];
              puVar31[2] = *(unsigned int *)(uVar13 + 4);
              *(unsigned int **)(uVar13 + 4) = puVar31;
              puVar31[3] = uVar13;
              bVar33 = (&lbl_820D7D2F)[uVar8];
              uVar30 = *puVar31 >> 5;
              uVar21 = uVar30 & 0xff;
              *puVar31 = ((((bVar33 >> (uVar21 >> 5 & 6) & 3) << 2 | bVar33 >> (uVar21 >> 3 & 6) & 3
                           ) << 2 | bVar33 >> (uVar21 >> 1 & 6) & 3) << 2 |
                         bVar33 >> ((uVar30 & 3) << 1) & 3) << 5 | *puVar31 & 0xffffe007;
            }
            if ((unsigned int *)*puVar7 == puVar31) {
              puVar7 = puVar31 + 2;
            }
          }
        }
        else {
          piVar6 = (int *)0x0;
          puVar7 = puVar14;
          while (puVar31 = (unsigned int *)*puVar7, puVar31 != (unsigned int *)0x0) {
            if (puVar31[4] != 0) {
              uVar8 = *puVar31;
              uVar30 = uVar8 >> 0x19 & 7;
              if ((uVar30 != 0) && ((uVar8 & 1) != 0)) {
                uVar21 = 0;
                uVar13 = 0;
                if (uVar30 != 0) {
                  uVar30 = 0;
                  do {
                    uVar13 = uVar13 + 1;
                    uVar21 = 1 << ((uVar8 >> 5 & 0xff) >> (uVar30 & 0x3f) & 3) | uVar21;
                    uVar30 = uVar30 + 2;
                  } while (uVar13 < (uVar8 >> 0x19 & 7));
                }
                bVar33 = (&lbl_820D7B2B)[uVar21];
                puVar5 = (unsigned int *)fn_82AD17B0(param_1,puVar32);
                *puVar5 = (unsigned int)((((0x8da691691448U >> (uVar21 & 0x7f)) >> (uVar21 & 0x7f)) >>
                                  (uVar21 & 0x7f) & 0xffffffff) << 0x19) & 0xe000000 |
                          *puVar5 & 0xf1ffffff;
                fn_82AD1270(puVar5,0);
                *puVar5 = (unsigned int)bVar33 << 5 | *puVar5 & 0xffffe01f;
                uVar8 = puVar31[4];
                iVar4 = *(int *)(uVar8 + 0x1c);
                piVar35 = piVar6;
                if ((iVar4 != param_2) || (piVar6 == (int *)0x0)) {
                  piVar6 = (int *)fn_82AD35E8(param_1,iVar4,0,puVar5,puVar5);
                  if (iVar4 == param_2) {
                    uVar30 = (unsigned int)puVar32 & 0xfffffffe;
                    uVar13 = (unsigned int)piVar6 & 0xfffffffe;
                    *(unsigned int *)(uVar13 + 0x28) = *(unsigned int *)(uVar30 + 0x28);
                    *(unsigned int *)((*(unsigned int *)(uVar30 + 0x28) & 0xfffffffe) + 0x24) = uVar13 + 0x28;
                    *(unsigned int *)(uVar13 + 0x24) = uVar30 + 0x28;
                    *(unsigned int *)(uVar30 + 0x28) = uVar13;
                    piVar35 = piVar6;
                  }
                  else {
                    uVar30 = (unsigned int)piVar6 & 0xfffffffe;
                    *(unsigned int *)(uVar30 + 0x28) = *(unsigned int *)(iVar4 + 0x1c);
                    *(unsigned int *)((*(unsigned int *)(iVar4 + 0x1c) & 0xfffffffe) + 0x24) = uVar30 + 0x28;
                    *(unsigned int *)(uVar30 + 0x24) = iVar4 + 0x1cU | 1;
                    *(unsigned int *)(iVar4 + 0x1c) = uVar30;
                    uVar30 = puVar32[2] >> 7 & 0x7f;
                    if ((uVar30 == 0x7d) || (bVar22 = false, uVar30 == 0x7c)) {
                      bVar22 = true;
                    }
                    piVar37 = piVar6;
                    if (!bVar22) {
                      while (iVar4 = *piVar37, iVar4 != 0) {
                        fn_82B10EA8(param_1,iVar4,1);
                        if (*piVar37 == iVar4) {
                          piVar37 = (int *)(iVar4 + 4);
                        }
                      }
                    }
                  }
                  piVar6[2] = piVar6[2] | 1;
                }
                if ((*(unsigned int *)(uVar8 + 8) & 0x3f80) == 0x3800) {
                  puVar5 = (unsigned int *)(uVar8 + 4);
                  while (puVar26 = (unsigned int *)*puVar5, puVar26 != (unsigned int *)0x0) {
                    if (puVar26[4] != 0) {
                      puVar18 = (unsigned int *)(puVar26[3] + 4);
                      for (puVar20 = (unsigned int *)*puVar18; puVar20 != puVar26;
                          puVar20 = (unsigned int *)puVar20[2]) {
                        puVar18 = puVar20 + 2;
                      }
                      *puVar18 = puVar26[2];
                      puVar26[2] = piVar6[1];
                      piVar6[1] = (int)puVar26;
                      uVar30 = *puVar26;
                      puVar26[3] = (unsigned int)piVar6;
                      uVar13 = uVar30 & 0x1f;
                      *puVar26 = uVar30 & 0xffffe01f;
                      if ((uVar30 & 2) != 0) {
                        uVar13 = uVar13 - 2;
                      }
                      *puVar26 = uVar30 & 0xffffe000 | uVar13 & 0x1f | 1;
                    }
                    if ((unsigned int *)*puVar5 == puVar26) {
                      puVar5 = puVar26 + 2;
                    }
                  }
                }
                else {
                  puVar26 = (unsigned int *)(puVar31[3] + 4);
                  for (puVar5 = (unsigned int *)*puVar26; puVar5 != puVar31; puVar5 = (unsigned int *)puVar5[2]) {
                    puVar26 = puVar5 + 2;
                  }
                  *puVar26 = puVar31[2];
                  puVar31[2] = piVar6[1];
                  piVar6[1] = (int)puVar31;
                  puVar31[3] = (unsigned int)piVar6;
                  uVar30 = *puVar31;
                  bVar33 = (&lbl_820D7D2F)[uVar21];
                  *puVar31 = ((((bVar33 >> (uVar30 >> 10 & 6) & 3) << 2 |
                               bVar33 >> (uVar30 >> 8 & 6) & 3) << 2 |
                              bVar33 >> (uVar30 >> 6 & 6) & 3) << 2 |
                             bVar33 >> (uVar30 >> 4 & 6) & 3) << 5 | uVar30 & 0xffffe01f;
                }
                piVar6 = piVar35;
                if ((*(unsigned int *)(uVar8 + 8) & 0x3f80) == 0x3800) {
                  fn_82AEFA80(param_1,uVar8,0,1);
                }
              }
            }
            if ((unsigned int *)*puVar7 == puVar31) {
              puVar7 = puVar31 + 2;
            }
          }
        }
      }
      else {
        cVar11 = fn_82AEFA80(puVar32);
        if (cVar11 == '\0') {
          for (puVar7 = (unsigned int *)*puVar32; puVar7 != (unsigned int *)0x0; puVar7 = (unsigned int *)puVar7[1]) {
            if ((*puVar7 & 0xe000000) != 0) {
              *puVar7 = *puVar7 | 1;
              uVar8 = *(unsigned int *)(puVar7[3] + 8);
              if ((uVar8 >> 0x18 & 1) != 0) {
                *(unsigned int *)(puVar7[3] + 8) = uVar8 | 1;
              }
            }
          }
          for (puVar7 = (unsigned int *)*puVar14; puVar7 != (unsigned int *)0x0; puVar7 = (unsigned int *)puVar7[2]) {
            if ((puVar7[4] != 0) && ((*puVar7 & 0xe000000) != 0)) {
              *puVar7 = *puVar7 & 0xfffffffe;
            }
          }
        }
        else {
          puVar32[2] = uVar13 | 1;
        }
      }
    }
    uVar8 = puVar32[2] >> 7 & 0x7f;
    puVar7 = puVar32;
    if (((uVar8 == 0x70) || (uVar8 == 0x75)) || (uVar8 == 0x68)) {
      while (puVar31 = (unsigned int *)*puVar7, puVar31 != (unsigned int *)0x0) {
        uVar8 = *puVar31;
        uVar23 = (unsigned __int64)uVar8;
        if ((uVar8 & 0xe000000) != 0) {
          uVar30 = puVar31[3];
          cVar11 = fn_82AEFBB8(puVar32,uVar8 & 0x1e);
          if (cVar11 != '\0') {
            if ((puVar32[2] & 0x3f80) != 0x3800) goto LAB_82b14110;
            uVar8 = *(unsigned int *)(uVar30 + 8);
            while( true ) {
              uVar13 = *puVar31;
              uVar23 = (unsigned __int64)uVar13;
              if ((uVar8 & 0x3f80) != 0x3700) break;
              puVar5 = *(unsigned int **)(((uVar13 >> 5 & 3) + 0xb) * 4 + uVar30);
              uVar21 = puVar5[3];
              if ((*(int *)(uVar21 + 0x1c) != *(int *)(uVar30 + 0x1c)) ||
                 (uVar8 = *puVar5, (uVar8 & 0x18) != 0)) goto LAB_82b13ee8;
              uVar24 = (unsigned __int64)uVar13 & 0x1f;
              uVar17 = (unsigned __int64)uVar8 & 0x1f;
              if ((((uVar8 & 0x18) == 0) || ((uVar13 & 0x18) == 0)) &&
                 (((uVar8 & 2) == 0 || ((uVar13 & 1) == 0)))) {
                if (((uVar8 & 4) == 0) || (bVar22 = false, (uVar13 & 1) == 0)) {
                  bVar22 = true;
                }
              }
              else {
                bVar22 = false;
              }
              if (!bVar22) goto LAB_82b13ee8;
              if (((uVar8 & 4) != 0) && ((uVar13 & 2) != 0)) {
                uVar17 = uVar17 - 4;
              }
              if ((uVar17 & uVar24 & 4) != 0) {
                uVar17 = uVar17 - 4;
                uVar24 = uVar24 - 4;
              }
              if (((uVar17 & 1) != 0) && ((uVar24 & 2) != 0)) {
                uVar24 = uVar24 - 2;
              }
              uVar17 = uVar17 | uVar24;
              uVar23 = (unsigned __int64)(uVar8 >> 5) & 3;
              if ((*puVar32 == 0) || (bVar22 = true, *(int *)(*puVar32 + 4) == 0)) {
                bVar22 = false;
              }
              if ((!bVar22) &&
                 (uVar8 = fn_82B10048(param_1,param_2,uVar21,uVar23,uVar17,1), uVar8 != 0))
              goto LAB_82b14f48;
              puVar26 = (unsigned int *)(puVar31[3] + 4);
              for (puVar5 = (unsigned int *)*puVar26; puVar5 != puVar31; puVar5 = (unsigned int *)puVar5[2]) {
                puVar26 = puVar5 + 2;
              }
              *puVar26 = puVar31[2];
              puVar31[2] = *(unsigned int *)(uVar21 + 4);
              *(unsigned int **)(uVar21 + 4) = puVar31;
              puVar31[3] = uVar21;
              *puVar31 = (unsigned int)((uVar23 & 0x1b) << 5) | 0x1c80 | *puVar31 & 0xfffffc80 |
                         (unsigned int)uVar17 & 0x1f;
              cVar11 = fn_82ABE2E0(uVar30);
              if (cVar11 != '\0') {
                fn_82AA66A8(param_1,uVar30);
              }
              uVar8 = *(unsigned int *)(uVar21 + 8);
              uVar30 = uVar21;
            }
            if ((uVar13 & 0x1e) == 0) {
              uVar8 = *(unsigned int *)(uVar30 + 8) >> 7 & 0x7f;
              if ((uVar8 == 0x7d) || (bVar22 = false, uVar8 == 0x7c)) {
                bVar22 = true;
              }
              if (!bVar22) goto LAB_82b14110;
            }
          }
LAB_82b13ee8:
          iVar4 = *(int *)(uVar30 + 0x1c);
          if ((puVar32[2] & 0x3f80) == 0x3800) {
            if ((*puVar32 == 0) || (bVar22 = true, *(int *)(*puVar32 + 4) == 0)) {
              bVar22 = false;
            }
            iVar3 = iVar4;
            if ((!bVar22) && ((uVar23 & 0x18) == 0)) goto LAB_82b13f30;
          }
          else {
LAB_82b13f30:
            iVar3 = param_2;
          }
          uVar8 = fn_82B841E8(param_1,iVar3,0,3,2,uVar23 >> 0x19 & 7);
          if ((iVar3 == iVar4) && (cVar11 = fn_82ACAFD8(uVar30), cVar11 != '\0')) {
            uVar13 = uVar30 & 0xfffffffe;
            uVar21 = uVar8 & 0xfffffffe;
            *(unsigned int *)(uVar21 + 0x28) = *(unsigned int *)(uVar13 + 0x28);
            *(unsigned int *)((*(unsigned int *)(uVar13 + 0x28) & 0xfffffffe) + 0x24) = uVar21 + 0x28;
            *(unsigned int *)(uVar21 + 0x24) = uVar13 + 0x28;
            *(unsigned int *)(uVar13 + 0x28) = uVar21;
          }
          else {
            uVar13 = uVar8 & 0xfffffffe;
            *(unsigned int *)(uVar13 + 0x28) = *(unsigned int *)(iVar3 + 0x1c);
            *(unsigned int *)((*(unsigned int *)(iVar3 + 0x1c) & 0xfffffffe) + 0x24) = uVar13 + 0x28;
            *(unsigned int *)(uVar13 + 0x24) = iVar3 + 0x1cU | 1;
            *(unsigned int *)(iVar3 + 0x1c) = uVar13;
          }
          uVar9 = fn_82AD1978(uVar8,puVar31);
          *(unsigned int *)(uVar8 + 0x2c) = uVar9;
          uVar9 = fn_82AD1978(uVar8,puVar31);
          *(unsigned int *)(uVar8 + 0x30) = uVar9;
          puVar26 = (unsigned int *)(puVar31[3] + 4);
          for (puVar5 = (unsigned int *)*puVar26; puVar5 != puVar31; puVar5 = (unsigned int *)puVar5[2]) {
            puVar26 = puVar5 + 2;
          }
          *puVar26 = puVar31[2];
          puVar31[2] = *(unsigned int *)(uVar8 + 4);
          *(unsigned int **)(uVar8 + 4) = puVar31;
          puVar31[3] = uVar8;
          *puVar31 = *puVar31 & 0xffffe000 | 0x1c80;
          if (iVar4 == param_2) {
LAB_82b140e0:
            if (iVar3 == param_2) goto LAB_82b131c4;
          }
          else if (iVar3 == param_2) {
            puVar5 = puVar14;
            if ((puVar32[2] & 0x3f80) == 0x3800) {
              while (uVar13 = *puVar5, uVar13 != 0) {
                if (*(int *)(uVar13 + 0x10) != 0) {
                  puVar26 = (unsigned int *)(*(int *)(uVar13 + 0xc) + 4);
                  for (uVar21 = *puVar26; uVar21 != uVar13; uVar21 = *(unsigned int *)(uVar21 + 8)) {
                    puVar26 = (unsigned int *)(uVar21 + 8);
                  }
                  *puVar26 = *(unsigned int *)(uVar13 + 8);
                  *(unsigned int *)(uVar13 + 8) = *(unsigned int *)(uVar8 + 4);
                  *(unsigned int *)(uVar8 + 4) = uVar13;
                  *(unsigned int *)(uVar13 + 0xc) = uVar8;
                }
                if (*puVar5 == uVar13) {
                  puVar5 = (unsigned int *)(uVar13 + 8);
                }
              }
              fn_82AEFA80(param_1,puVar32,0,1);
            }
            goto LAB_82b140e0;
          }
          if ((*(unsigned char *)(uVar30 + 8) & 1) != 0) {
            fn_82AEFCD8(uVar8);
            fn_82AE93B0(uVar8);
            *(unsigned int *)(uVar8 + 8) = *(unsigned int *)(uVar8 + 8) | 0x1000000;
          }
        }
LAB_82b14110:
        if ((unsigned int *)*puVar7 == puVar31) {
          puVar7 = puVar31 + 1;
        }
      }
    }
    uVar8 = puVar32[2];
    if ((uVar8 & 0x3f80) == 0x3700) {
      puVar7 = puVar32 + 0xb;
      for (uVar30 = 0; uVar8 = puVar32[2], uVar30 < (uVar8 >> 0x13 & 7); uVar30 = uVar30 + 1) {
        puVar31 = (unsigned int *)*puVar7;
        while( true ) {
          piVar6 = (int *)puVar31[3];
          if ((piVar6[2] & 0x3f80U) != 0x3700) goto LAB_82b14360;
          puVar5 = (unsigned int *)piVar6[(*puVar31 >> 5 & 3) + 0xb];
          uVar8 = *puVar5;
          if ((uVar8 & 0x18) != 0) break;
          uVar13 = *puVar31;
          if ((((uVar8 & 0x18) == 0) || ((uVar13 & 0x18) == 0)) &&
             (((uVar8 & 2) == 0 || ((uVar13 & 1) == 0)))) {
            if (((uVar8 & 4) == 0) || (bVar22 = false, (uVar13 & 1) == 0)) {
              bVar22 = true;
            }
          }
          else {
            bVar22 = false;
          }
          if (!bVar22) break;
          uVar8 = puVar5[3];
          puVar20 = (unsigned int *)(puVar31[3] + 4);
          for (puVar26 = (unsigned int *)*puVar20; puVar26 != puVar31; puVar26 = (unsigned int *)puVar26[2]) {
            puVar20 = puVar26 + 2;
          }
          *puVar20 = puVar31[2];
          puVar31[2] = *(unsigned int *)(uVar8 + 4);
          *(unsigned int **)(uVar8 + 4) = puVar31;
          puVar31[3] = uVar8;
          uVar8 = *puVar31;
          *puVar31 = uVar8 & 0xffffe01f | *puVar5 & 0x1fe0;
          uVar13 = uVar8 & 0x1f;
          uVar21 = *puVar5 & 0x1f;
          if (((*puVar5 & 4) != 0) && ((uVar8 & 2) != 0)) {
            uVar21 = uVar21 - 4;
          }
          if ((uVar21 & uVar13 & 4) != 0) {
            uVar21 = uVar21 - 4;
            uVar13 = uVar13 - 4;
          }
          if (((uVar21 & 1) != 0) && ((uVar13 & 2) != 0)) {
            uVar13 = uVar13 - 2;
          }
          *puVar31 = *puVar31 & 0xffffffe0 | (uVar21 | uVar13) & 0x1f;
        }
        uVar8 = fn_82AD35E8(param_1,param_2,0,puVar5);
        for (puVar5 = (unsigned int *)*piVar6; puVar5 != (unsigned int *)0x0; puVar5 = (unsigned int *)puVar5[1]) {
          if ((*puVar5 & 0xe000000) == 0) {
            fn_82AD1978(uVar8,puVar5);
          }
        }
        uVar21 = (unsigned int)piVar6 & 0xfffffffe;
        uVar13 = uVar8 & 0xfffffffe;
        *(unsigned int *)(uVar13 + 0x28) = *(unsigned int *)(uVar21 + 0x28);
        *(unsigned int *)((*(unsigned int *)(uVar21 + 0x28) & 0xfffffffe) + 0x24) = uVar13 + 0x28;
        *(unsigned int *)(uVar13 + 0x24) = uVar21 + 0x28;
        *(unsigned int *)(uVar21 + 0x28) = uVar13;
        puVar26 = (unsigned int *)(puVar31[3] + 4);
        for (puVar5 = (unsigned int *)*puVar26; puVar5 != puVar31; puVar5 = (unsigned int *)puVar5[2]) {
          puVar26 = puVar5 + 2;
        }
        *puVar26 = puVar31[2];
        puVar31[2] = *(unsigned int *)(uVar8 + 4);
        *(unsigned int **)(uVar8 + 4) = puVar31;
        puVar31[3] = uVar8;
        *puVar31 = *puVar31 & 0xffffe01f | 0x1c80;
        fn_82AEFCD8(uVar8);
        fn_82AE93B0(uVar8);
        *(unsigned int *)(uVar8 + 8) = *(unsigned int *)(uVar8 + 8) | 0x1000000;
LAB_82b14360:
        puVar7 = puVar7 + 1;
      }
    }
    uVar30 = uVar8 >> 7 & 0x7f;
    if ((uVar30 == 0) || (bVar22 = true, 0x66 < uVar30)) {
      bVar22 = false;
    }
    if (((bVar22) || (uVar30 == 0x69)) || (uVar30 == 0x68)) {
      uVar13 = 0;
      uVar19 = 0;
      uVar29 = 0;
      uVar21 = 0;
      bVar33 = 0;
      uVar30 = 0;
      uVar23 = 0;
      if ((uVar8 & 0x380000) != 0) {
        puVar7 = puVar32 + 0xb;
        do {
          puVar31 = (unsigned int *)*puVar7;
          uVar8 = *puVar31;
          uVar10 = uVar8 >> 0x19 & 7;
          if (uVar10 != 0) {
            uVar38 = puVar31[3];
            cVar11 = fn_82AEFBB8(puVar32,uVar8 & 0x1f);
            if (cVar11 == '\0') {
              uVar8 = *(unsigned int *)(uVar38 + 8) >> 7 & 0x7f;
              if ((uVar8 == 0x7d) || (bVar22 = false, uVar8 == 0x7c)) {
                bVar22 = true;
              }
              if (bVar22) goto LAB_82b14524;
              cVar11 = fn_82ACAFD8(uVar38);
              if (cVar11 == '\0') {
                uVar8 = iStack0000001c + 0x18U & 0xfffffffe | 2;
              }
              else {
                uVar8 = uVar38 & 0xfffffffc | 1;
              }
              cVar11 = fn_82B89810(param_1,iStack0000001c,uVar8,puVar31);
              if (cVar11 == '\0') {
                uVar8 = puVar31[3];
                fn_82AEFCD8(uVar8);
                fn_82AE93B0(uVar8);
                *(unsigned int *)(uVar8 + 8) = *(unsigned int *)(uVar8 + 8) | 0x1000000;
              }
            }
            else {
              uVar28 = *(unsigned int *)(uVar38 + 8) >> 7 & 0x7f;
              if ((uVar28 == 0x7d) || (bVar22 = false, uVar28 == 0x7c)) {
                bVar22 = true;
              }
              if (bVar22) {
                uVar2 = puVar32[2] >> 7 & 0x7f;
                if ((uVar2 < 0x60) || (bVar22 = true, 0x66 < uVar2)) {
                  bVar22 = false;
                }
                if (bVar22) {
                  if (uVar28 == 0x7c) {
                    uVar16 = *(unsigned int *)(uVar38 + 8);
                    iVar4 = fn_82ABDD90(param_1,uVar16 >> 7 & 0x7f,uVar16 >> 0x13 & 7,
                                         uVar16 >> 0xe & 7);
                    if ((*(unsigned int *)((*(unsigned int *)(iVar4 + (uVar38 - 8)) & 0x7fff) * 0x28 +
                                   *(int *)(param_1 + 0xc) + 4) & 0x70) == 0x30) goto LAB_82b1451c;
                  }
                }
                else {
LAB_82b1451c:
                  uVar16 = uVar38;
                  if (uVar2 != 0x68) goto LAB_82b14588;
                }
LAB_82b14524:
                bVar12 = fn_82B111F8(param_1,puVar32,uVar23,puVar31);
                bVar33 = bVar12 | bVar33;
              }
              else {
                if (uVar28 == 0x76) {
                  uVar16 = *(unsigned int *)(*(int *)(uVar38 + 0x2c) + 0xc);
                  uVar2 = *(unsigned int *)(uVar16 + 8) >> 7 & 0x7f;
                  if ((uVar2 == 0x7d) || (bVar22 = false, uVar2 == 0x7c)) {
                    bVar22 = true;
                  }
                  if (!bVar22) {
                    /* WARNING: Subroutine does not return */
                    fn_82AA66A8(param_1,0x12c0);
                  }
LAB_82b14588:
                  if (uVar16 != 0) {
                    uVar2 = 1 << ((unsigned int)uVar23 & 0x3f);
                    uVar13 = uVar13 | uVar2;
                    if ((uVar8 >> 1 & 1) != 0) {
                      uVar19 = uVar19 | uVar2;
                    }
                    if ((*(unsigned int *)(uVar16 + 8) & 0x3f80) == 0x3e00) {
                      uVar29 = uVar29 | uVar2;
                    }
                    else if ((uVar16 == uVar38) && (uVar16 = 0, uVar10 != 0)) {
                      uVar27 = 0;
                      do {
                        if ((double)*(float *)((((uVar8 >> 5 & 0xff) >> (uVar27 & 0x3f) & 3) + 0xb)
                                               * 4 + uVar38) < dVar40) {
                          uVar21 = uVar21 | uVar2;
                          break;
                        }
                        uVar16 = uVar16 + 1;
                        uVar27 = uVar27 + 2;
                      } while (uVar16 < uVar10);
                    }
                  }
                }
                if (((uVar8 & 0x10) != 0) || (uVar28 == 0x76)) {
                  uVar30 = 1 << ((unsigned int)uVar23 & 0x3f) | uVar30;
                }
              }
            }
          }
          uVar23 = uVar23 + 1;
          puVar7 = puVar7 + 1;
        } while ((uVar23 & 0xffffffff) < ((unsigned __int64)(puVar32[2] >> 0x13) & 7));
      }
      uVar8 = 0;
      if ((uVar19 != 0) && (uVar19 != uVar13)) {
        uVar10 = uVar29 & uVar19;
        if ((uVar10 != uVar29) || ((uVar21 & ~uVar19) != 0)) {
          uVar19 = uVar19 - uVar10;
          uVar8 = uVar10;
        }
        uVar21 = ~(uVar29 | uVar19);
        if ((uVar29 & uVar19) == 0) {
          uVar21 = uVar19 & ~uVar29;
        }
        uVar21 = uVar21 & uVar13;
        while (uVar21 != 0) {
          uVar38 = 0;
          uVar10 = uVar21 & ~(uVar21 - 1);
          uVar21 = uVar21 - uVar10;
          puVar7 = *(unsigned int **)((int)((0x2aU - LZCOUNT(uVar10) & 0xffffffff) << 2) + (int)puVar32);
          uVar10 = puVar7[3];
          if ((*puVar7 & 0xe000000) != 0) {
            uVar28 = 0;
            pfVar36 = &fStack_b4;
            do {
              dVar39 = (double)fn_82B80EE0(uVar10,(*puVar7 >> 5 & 0xff) >> (uVar28 & 0x3f) & 3,2);
              pfVar36 = pfVar36 + 1;
              *pfVar36 = (float)dVar39;
              uVar38 = uVar38 + 1;
              uVar28 = uVar28 + 2;
            } while (uVar38 < (*puVar7 >> 0x19 & 7));
          }
          uVar10 = fn_82B86888(param_1,*puVar7 >> 0x19 & 7,auStack_b0,0);
          puVar5 = (unsigned int *)(puVar7[3] + 4);
          for (puVar31 = (unsigned int *)*puVar5; puVar31 != puVar7; puVar31 = (unsigned int *)puVar31[2]) {
            puVar5 = puVar31 + 2;
          }
          *puVar5 = puVar7[2];
          puVar7[2] = *(unsigned int *)(uVar10 + 4);
          *(unsigned int **)(uVar10 + 4) = puVar7;
          uVar38 = *puVar7;
          uVar28 = uVar38 & 0xffffe01f;
          puVar7[3] = uVar10;
          *puVar7 = uVar28 | 0x1c80;
          if ((uVar29 & uVar19) == 0) {
            uVar28 = uVar38 & 0xffffe01d | 0x1c80;
          }
          else {
            uVar28 = uVar28 | 0x1c82;
          }
          *puVar7 = uVar28;
          fn_82AEFCD8(uVar10);
          *(unsigned int *)(uVar10 + 8) = *(unsigned int *)(uVar10 + 8) | 0x1000000;
        }
      }
      uVar30 = uVar30 & ~uVar8;
      if ((uVar30 == 0) || (uVar30 != (uVar30 & ~(uVar30 - 1)))) {
        bVar22 = false;
      }
      else {
        bVar22 = true;
      }
      if (!bVar22) {
        bVar22 = false;
        puVar7 = puVar32 + 0xb;
        iVar4 = 0;
        for (uVar21 = 0; uVar21 < (puVar32[2] >> 0x13 & 7); uVar21 = uVar21 + 1) {
          uVar29 = *(unsigned int *)*puVar7;
          iVar3 = iVar4;
          if (((uVar29 & 0xe000000) != 0) && ((uVar29 & 0x18) != 0)) {
            if ((uVar29 & 0x10) == 0) {
              if ((bVar22) ||
                 (((uVar29 = ((unsigned int *)*puVar7)[3], (*(unsigned int *)(uVar29 + 8) & 0x3f80) == 0x3b00 &&
                   (iVar3 = *(int *)(*(int *)(uVar29 + 0x30) + 0xc), iVar4 != 0)) &&
                  (bVar1 = iVar3 != iVar4, iVar3 = iVar4, bVar1)))) goto LAB_82b14870;
            }
            else if (iVar4 == 0) {
              bVar22 = true;
            }
            else {
LAB_82b14870:
              uVar8 = 1 << (uVar21 & 0x3f) | uVar8;
              iVar3 = iVar4;
            }
          }
          puVar7 = puVar7 + 1;
          iVar4 = iVar3;
        }
      }
      uVar30 = uVar30 & ~uVar8;
      if (((uVar30 != 0) && ((uVar13 & ~uVar8) == 7)) && ((uVar30 & 6) != 6)) {
        uVar8 = uVar8 | 4;
      }
      for (; uVar8 != 0; uVar8 = uVar8 - uVar30) {
        uVar30 = uVar8 & ~(uVar8 - 1);
        lVar25 = -LZCOUNT(uVar30);
        bVar12 = fn_82B111F8(param_1,puVar32,lVar25 + 0x1f,
                               *(unsigned int *)
                                ((int)((lVar25 + 0x2aU & 0xffffffff) << 2) + (int)puVar32));
        bVar33 = bVar12 | bVar33;
      }
      param_2 = iStack0000001c;
      if (bVar33 != 0) goto LAB_82b131c4;
    }
    uVar8 = puVar32[2] >> 7 & 0x7f;
    if (((uVar8 == 0x30) || (uVar8 == 0x36)) || (uVar8 == 0x48)) {
      fn_82AD1270(puVar32[0xb],2);
    }
    uVar8 = puVar32[2];
    uVar30 = uVar8 >> 7 & 0x7f;
    if (uVar30 < 0x6f) {
      if (uVar30 == 0x6e) {
        cVar11 = fn_82B11330(param_1,param_2,puVar32);
        if (cVar11 != '\0') goto LAB_82b131c4;
      }
      else {
        if ((0x18 < uVar30) && (uVar30 < 0x1d)) {
          uVar8 = *(unsigned int *)puVar32[0xb];
          uVar23 = (unsigned __int64)(uVar8 >> 0x19) & 7;
          if (uVar23 < 4) {
            puVar7 = (unsigned int *)puVar32[0xc];
            lVar15 = 4 - uVar23;
            uVar24 = (unsigned __int64)(uVar8 >> 5) & 0xff;
            uVar30 = (unsigned int)((uVar23 - 1 & 0xffffffff) << 1);
            lVar25 = uVar23 << 1;
            uVar21 = (unsigned int)uVar24;
            uVar23 = (unsigned __int64)(*puVar7 >> 5) & 0xff;
            uVar13 = (unsigned int)uVar23;
            do {
              uVar29 = (unsigned int)lVar25;
              uVar17 = ~(unsigned __int64)(unsigned int)(3 << (uVar29 & 0x3f));
              uVar24 = (unsigned __int64)((uVar21 >> (uVar30 & 0x3e) & 3) << (uVar29 & 0x3f)) |
                       uVar17 & uVar24;
              uVar23 = (unsigned __int64)((uVar13 >> (uVar30 & 0x3e) & 3) << (uVar29 & 0x3f)) |
                       uVar17 & uVar23;
              lVar25 = lVar25 + 2;
              lVar15 = lVar15 + -1;
            } while (lVar15 != 0);
            *(unsigned int *)puVar32[0xb] = (unsigned int)(uVar24 << 5) & 0x1fe0 | 0x8000000 | uVar8 & 0xf9ffe01f;
            *puVar7 = (unsigned int)(uVar23 << 5) & 0x1fe0 | 0x8000000 | *puVar7 & 0xf9ffe01f;
          }
        }
LAB_82b14950:
        fn_82AEFCD8(puVar32);
      }
    }
    else if ((uVar30 == 0x71) || (uVar30 == 0x7c)) {
      uVar23 = (unsigned __int64)(unsigned int)(1 << (uVar8 >> 0xe & 7)) - 1;
      uVar23 = (((0x8da691691448U >> (uVar23 & 0x7f)) >> (uVar23 & 0x7f)) >> (uVar23 & 0x7f) & 7) <<
               0xe | (uVar23 & 0xf) << 1 | (unsigned __int64)uVar8 & 0xfffffffffffe3fe1;
      puVar32[2] = (unsigned int)uVar23;
      puVar32[4] = (unsigned int)(uVar23 << 2) & 0x70000 | puVar32[4] & 0xfff8ffff;
    }
    else {
      if (uVar30 != 0x7d) goto LAB_82b14950;
      fn_82AEFCD8(puVar32);
    }
    if ((puVar32[2] & 0x3f80) != 0x3800) {
      fn_82AE93B0(puVar32);
    }
    uVar8 = puVar32[2];
    uVar30 = (uVar8 & 0x3f80) >> 7;
    puVar32[2] = uVar8;
    if (uVar30 < 0x6a) {
      if (uVar30 != 0x69) {
        if ((uVar30 == 0x13) || (uVar30 == 0x1d)) goto LAB_82b14af4;
        if (uVar30 != 0x5e) {
          if (uVar30 == 100) {
            *(unsigned int *)(param_1 + 0x2c) = *(unsigned int *)(param_1 + 0x2c) | 8;
          }
          else if (uVar30 == 0x68) goto LAB_82b14af4;
          goto LAB_82b14b14;
        }
      }
      *(unsigned int *)(param_2 + 0x30) = *(unsigned int *)(param_2 + 0x30) | 0x2000000;
    }
    else if (0x6b < uVar30) {
      if (uVar30 < 0x6e) goto LAB_82b14af4;
      if (uVar30 == 0x6e) {
        if ((uVar8 & 0x800000) == 0) {
          for (uVar8 = *puVar32; uVar8 != 0; uVar8 = *(unsigned int *)(uVar8 + 4)) {
            if ((*(unsigned int *)(*(int *)(uVar8 + 0xc) + 8) >> 0x17 & 1) != 0) {
              fn_82B0FD38(param_1,puVar32);
              break;
            }
          }
        }
        if ((puVar32[2] >> 0x17 & 1) != 0) {
          for (uVar8 = *puVar32; uVar8 != 0; uVar8 = *(unsigned int *)(uVar8 + 4)) {
            if ((*(unsigned int *)(*(int *)(uVar8 + 0xc) + 8) >> 0x17 & 1) == 0) {
              fn_82B0FD38(param_1);
            }
          }
        }
      }
      else if (uVar30 == 0x71) {
        *(short *)((int)puVar32 + 0x12) = (short)*(unsigned int *)(param_1 + 0x74) + 1;
        *(unsigned int *)(param_1 + 0x74) = (*(unsigned short *)(puVar32 + 4) & 7) + *(int *)(param_1 + 0x74);
      }
      else if (uVar30 == 0x74) {
LAB_82b14af4:
        puVar32[4] = puVar32[4] | 0x100000;
        if ((uVar8 & 0x800000) == 0) {
          fn_82B0FD38(param_1,puVar32);
        }
      }
      else if (uVar30 == 0x78) {
        for (puVar14 = (unsigned int *)*puVar14; puVar14 != (unsigned int *)0x0; puVar14 = (unsigned int *)puVar14[2]) {
          if ((*puVar14 & 0xe000000) != 0) {
            bVar22 = true;
            if ((*puVar14 >> 0x1e & 1) != 0) goto LAB_82b14bc4;
            break;
          }
        }
        bVar22 = false;
LAB_82b14bc4:
        if (!bVar22) goto LAB_82b14af4;
      }
    }
LAB_82b14b14:
    uVar8 = puVar32[2] >> 7 & 0x7f;
    if (((uVar8 < 0x19) || (0x1c < uVar8)) && ((uVar8 < 0x43 || (0x47 < uVar8)))) {
      bVar22 = false;
    }
    else {
      bVar22 = true;
    }
    if (bVar22) {
      *(unsigned int *)(param_1 + 0x28) = *(unsigned int *)(param_1 + 0x28) | 0x1000000;
    }
    if ((*(unsigned int *)(param_1 + 0x28) & 4) != 0) {
      uVar8 = puVar32[2];
      uVar30 = uVar8 >> 7 & 0x7f;
      if (((((uVar30 == 0x56) || (uVar30 == 0x57)) || (uVar30 == 0x59)) ||
          ((uVar30 == 0x5a || (uVar30 == 0x54)))) || (bVar22 = false, uVar30 == 0x55)) {
        bVar22 = true;
      }
      if (bVar22) {
        iVar4 = fn_82ABDD90(param_1,uVar30,uVar8 >> 0x13 & 7,uVar8 >> 0xe & 7);
        if ((*(unsigned int *)((int)puVar32 + iVar4 + -8) & 3) != 0) {
          fn_82AD20C0(puVar32,*(unsigned int *)((int)puVar32 + iVar4 + -0xc) & 0xfffffffc,param_1);
          *(unsigned int *)((int)puVar32 + iVar4 + -8) =
               *(unsigned int *)((int)puVar32 + iVar4 + -8) & 0xfffffe00 | 0xc0;
        }
        uVar8 = *(unsigned int *)((int)puVar32 + iVar4 + -8);
        if ((((uVar8 & 3) == 0) && ((uVar8 >> 2 & 0xf) == 3)) &&
           ((*(unsigned int *)(param_2 + 0x30) >> 0x1a & 1) != 0)) {
          for (uVar8 = *(unsigned int *)(param_1 + 4); ((uVar8 & 1) == 0 && (uVar8 != 0));
              uVar8 = *(unsigned int *)((uVar8 & 0xfffffffe) + 4)) {
            uVar23 = (unsigned __int64)*(unsigned int *)(param_2 + 0x30) & 0x7ffff;
            if ((*(unsigned int *)(((**(unsigned int **)(uVar8 + 0x28) & 0x7ffff) + 0x1f >> 3 & 0x1ffffffc) +
                           ((int)(uVar23 >> 5) + 1) * 4 + (int)*(unsigned int **)(uVar8 + 0x28)) &
                1 << ((unsigned int)uVar23 & 0x1f)) != 0) {
              *(unsigned int *)(uVar8 + 0x30) = *(unsigned int *)(uVar8 + 0x30) | 0x2000000;
            }
          }
        }
      }
    }
    puVar32 = *(unsigned int **)(((unsigned int)puVar32 & 0xfffffffe) + 0x28);
    if (((unsigned int)puVar32 & 1) == 0) goto LAB_82b14dcc;
    puVar32 = (unsigned int *)0x0;
    goto LAB_82b14dd8;
  }
  iVar4 = fn_82B8A3A0(dVar40,dVar40,dVar40,dVar40,param_1,1);
  uVar30 = fn_82B10788(param_1,param_2,0,iVar4,iVar4);
  uVar8 = uVar30 & 0xfffffffe;
  puVar31 = (unsigned int *)(param_2 + 0x1c);
  puVar7 = puVar32 + 1;
  *(unsigned int *)(uVar8 + 0x28) = *puVar31;
  *(unsigned int *)((*puVar31 & 0xfffffffe) + 0x24) = uVar8 + 0x28;
  *(unsigned int *)(uVar8 + 0x24) = (unsigned int)puVar31 | 1;
  *puVar31 = uVar8;
  while (uVar8 = *puVar7, uVar8 != 0) {
    if (*(int *)(uVar8 + 0x10) != 0) {
      puVar31 = (unsigned int *)(*(int *)(uVar8 + 0xc) + 4);
      for (uVar13 = *puVar31; uVar13 != uVar8; uVar13 = *(unsigned int *)(uVar13 + 8)) {
        puVar31 = (unsigned int *)(uVar13 + 8);
      }
      *puVar31 = *(unsigned int *)(uVar8 + 8);
      *(unsigned int *)(uVar8 + 8) = *(unsigned int *)(uVar30 + 4);
      *(unsigned int *)(uVar30 + 4) = uVar8;
      *(unsigned int *)(uVar8 + 0xc) = uVar30;
    }
    if (*puVar7 == uVar8) {
      puVar7 = (unsigned int *)(uVar8 + 8);
    }
  }
  fn_82AEFCD8(iVar4);
  *(unsigned int *)(iVar4 + 8) = *(unsigned int *)(iVar4 + 8) | 0x1000000;
  fn_82AEFA80(param_1,puVar32,0,1);
  goto LAB_82b131c4;
LAB_82b14f48:
  while (puVar7 = (unsigned int *)*puVar14, puVar7 != (unsigned int *)0x0) {
    if (puVar7[4] != 0) {
      puVar5 = (unsigned int *)(puVar7[3] + 4);
      for (puVar31 = (unsigned int *)*puVar5; puVar31 != puVar7; puVar31 = (unsigned int *)puVar31[2]) {
        puVar5 = puVar31 + 2;
      }
      *puVar5 = puVar7[2];
      puVar7[2] = *(unsigned int *)(uVar8 + 4);
      *(unsigned int **)(uVar8 + 4) = puVar7;
      puVar7[3] = uVar8;
      *puVar7 = (unsigned int)uVar17 & 0x1f | *puVar7 & 0xffffe000 | 0x1c80;
    }
    if ((unsigned int *)*puVar14 == puVar7) {
      puVar14 = puVar7 + 2;
    }
  }
LAB_82b14f34:
  fn_82AA66A8(param_1,puVar32);
  goto LAB_82b131c4;
LAB_82b14dcc:
  if (puVar32 == (unsigned int *)0x0) {
LAB_82b14dd8:
    iVar4 = param_2 + 0x20;
    if (iVar34 != iVar4) {
      if ((iVar34 == param_2 + 0x18) || ((*(unsigned int *)(param_2 + 0x1c) & 1) != 0)) goto LAB_82b14e18;
      puVar32 = (unsigned int *)(-(unsigned int)((*(unsigned int *)(param_2 + 0x1c) & 1) == 0) & *(unsigned int *)(param_2 + 0x1c));
      iVar34 = param_2 + 0x18;
    }
  }
  goto LAB_82b13208;
LAB_82b14e18:
  uVar8 = *(unsigned int *)(param_2 + 0x24);
  goto LAB_82b131f4;
}
