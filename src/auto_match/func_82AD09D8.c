typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_118;
extern unsigned int *auStack_120;
extern unsigned int *auStack_130;
extern unsigned int *auStack_98;
extern unsigned int *auStack_c8;
extern unsigned int *auStack_d0;
extern int fn_82AA66A8();
extern int fn_82ABE190();
extern int fn_82AC8750();
extern int fn_82AC8910();
extern int fn_82AC8E50();
extern int fn_82AC8ED0();
extern int fn_82AC8F30();
extern int fn_82ACB0F8();
extern int fn_82ACFEF0();
extern int fn_82AD01A0();
extern int fn_82AD0248();
extern int fn_82AE5A50();
extern int fn_82AE5AC8();
extern int fn_82B81D80();
extern unsigned int iStack_dc;
extern unsigned int lbl_820D7B2B;
extern unsigned int uStack_128;
extern unsigned int uStack_d8;


unsigned __int64 fn_82AD09D8(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  int *piVar4;
  unsigned __int64 *puVar5;
  unsigned int uVar6;
  bool bVar7;
  unsigned int uVar8;
  unsigned int uVar11;
  char cVar12;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  unsigned __int64 uVar13;
  unsigned __int64 *puVar14;
  unsigned int uVar15;
  unsigned __int64 *puVar16;
  unsigned int *puVar17;
  bool bVar20;
  unsigned int uVar18;
  unsigned __int64 *puVar19;
  unsigned __int64 uVar21;
  int *piVar22;
  unsigned int *puVar23;
  unsigned int uVar24;
  int iVar25;
  unsigned int uVar26;
  unsigned __int64 uVar27;
  int *piVar28;
  int *piVar29;
  int *piVar30;
  __int64 lVar31;
  unsigned int auStack_130 [2];
  unsigned __int64 uStack_128;
  unsigned int auStack_120 [2];
  unsigned __int64 auStack_118 [4];
  int aiStack_f8 [7];
  int iStack_dc;
  unsigned __int64 uStack_d8;
  unsigned char auStack_d0 [8];
  unsigned __int64 auStack_c8 [5];
  int aiStack_a0 [2];
  unsigned __int64 auStack_98 [19];
  
  uVar1 = *(unsigned int *)(param_1 + 0x74);
  uVar2 = *(unsigned int *)(param_1 + 4);
  uVar27 = 0;
  uVar6 = uVar1 + 0x40 >> 6;
  do {
    if (((uVar2 & 1) != 0) || (uVar2 == 0)) {
      return uVar27;
    }
    for (uVar11 = *(unsigned int *)(uVar2 + 0x1c); ((uVar11 & 1) == 0 && (uVar11 != 0));
        uVar11 = *(unsigned int *)((uVar11 & 0xfffffffe) + 0x28)) {
      *(unsigned int *)(uVar11 + 0x14) = *(unsigned int *)(uVar11 + 0x14) & 0xbfffffff;
    }
    fn_82AC8E50(auStack_120,param_1);
    if (*(int *)(uVar2 + 0x58) != 0) {
      uVar11 = fn_82AC8910(*(int *)(uVar2 + 0x58),0,uVar6);
      while (uVar11 <= uVar1) {
        iVar25 = *(int *)(uVar11 * 4 + *(int *)(param_1 + 0x2c4));
        for (puVar3 = *(unsigned int **)(iVar25 + 4); puVar3 != (unsigned int *)0x0; puVar3 = (unsigned int *)puVar3[2]) {
          if ((puVar3[4] != 0) && ((*puVar3 & 0xe000000) != 0)) {
            fn_82AC8ED0(auStack_120,
                            ((unsigned __int64)(*puVar3 >> 0xc) & 0x1fe0 |
                            (unsigned __int64)*(unsigned int *)(iVar25 + 8) & 0x1e) >> 1);
            break;
          }
        }
        if (uVar11 == uVar1) {
          uVar11 = 0xffffffff;
        }
        else {
          uVar11 = fn_82AC8910(*(unsigned int *)(uVar2 + 0x58),uVar11 + 1,uVar6);
        }
      }
    }
    iVar25 = iStack_dc;
    if ((*(int *)(uVar2 + 0x60) != 0) && (iVar25 = *(int *)(uVar2 + 0x60), iStack_dc != 0)) {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(auStack_120[0],0x12c0);
    }
    iStack_dc = iVar25;
    uVar21 = (unsigned __int64)*(unsigned int *)(param_1 + 0x318);
    auStack_98[0] = 0;
    auStack_98[1] = 0;
    auStack_98[2] = 0;
    auStack_98[3] = 0;
    if (uVar21 == 0) {
      uVar21 = 0x20;
    }
    aiStack_a0[0] = param_1;
    if (uVar21 < 0x40) {
      fn_82AE5AC8(aiStack_a0,uVar21,0x40 - uVar21);
    }
    if ((*(unsigned int *)(uVar2 + 0x1c) & 1) == 0) {
      uVar11 = *(unsigned int *)(uVar2 + 0x18);
LAB_82ad11b4:
      uVar11 = uVar11 & 0xfffffffe;
      piVar28 = (int *)(uVar11 - 0x28);
      if (piVar28 != (int *)0x0) {
        uVar26 = *(unsigned int *)(uVar11 - 0x20);
        uVar21 = 0;
        if ((uVar26 >> 5 & 1) == 0) {
          if ((uVar26 & 0x3f80) != 0x3c00) {
            for (puVar3 = *(unsigned int **)(uVar11 - 0x24); puVar3 != (unsigned int *)0x0;
                puVar3 = (unsigned int *)puVar3[2]) {
              if ((puVar3[4] != 0) && ((*puVar3 & 0xe000000) != 0)) {
                uVar10 = (unsigned __int64)(*puVar3 >> 0xc) & 0x1fe0;
                uVar21 = (uVar10 | (unsigned __int64)uVar26 & 0x1e) >> 1;
                fn_82AC8F30(auStack_120,uVar21);
                if ((*(unsigned int *)(uVar11 - 0x14) & 0x40000000) != 0) {
                  uVar13 = ((unsigned __int64)uVar26 & 0x1e) >> 1;
                  piVar22 = piVar28;
                  goto LAB_82ad0c78;
                }
                break;
              }
            }
          }
        }
        else {
          for (puVar3 = *(unsigned int **)(uVar11 - 0x24);
              (puVar3 != (unsigned int *)0x0 && ((puVar3[4] == 0 || ((*puVar3 & 0xe000000) == 0))));
              puVar3 = (unsigned int *)puVar3[2]) {
          }
          *(unsigned int *)(uVar11 - 0x20) = *puVar3 >> 0xc & 0x1e | uVar26 & 0xffffffe1;
        }
        goto LAB_82ad0ca4;
      }
    }
LAB_82ad10e0:
    uVar2 = *(unsigned int *)((uVar2 & 0xfffffffe) + 4);
  } while( true );
LAB_82ad0c78:
  if ((piVar22[9] & 1U) == 0) {
    uVar26 = piVar22[9] & 0xfffffffe;
    piVar22 = (int *)(uVar26 - 0x28);
    if (piVar22 == (int *)0x0) goto LAB_82ad0c90;
    if ((*(unsigned int *)(uVar26 - 0x14) & 0x40000000) != 0) {
      for (puVar3 = *(unsigned int **)(uVar26 - 0x24);
          (puVar3 != (unsigned int *)0x0 && ((*puVar3 & 0xe000000) == 0)); puVar3 = (unsigned int *)puVar3[2]) {
      }
      if (((unsigned __int64)(*puVar3 >> 0xc) & 0x1fe0) >> 5 == uVar10 >> 5) {
        uVar13 = uVar13 & ~(((unsigned __int64)*(unsigned int *)(uVar26 - 0x20) & 0x1e) >> 1);
      }
    }
    goto LAB_82ad0c78;
  }
LAB_82ad0c90:
  if (uVar13 != 0) {
    fn_82AC8F30(aiStack_a0,uVar10 >> 1 | uVar13);
  }
LAB_82ad0ca4:
  if ((*(unsigned int *)(uVar11 - 0x20) >> 6 & 1) == 0) {
    uVar26 = *(unsigned int *)(uVar11 - 0x20) >> 7 & 0x7f;
    if ((uVar26 < 0x20) || (bVar20 = true, 0x52 < uVar26)) {
      bVar20 = false;
    }
    if (!bVar20) goto LAB_82ad0cf8;
  }
  piVar22 = aiStack_f8;
  lVar31 = 9;
  do {
    if (piVar28 == (int *)*piVar22) {
      *piVar22 = 0;
    }
    piVar22 = piVar22 + 1;
    lVar31 = lVar31 + -1;
  } while (lVar31 != 0);
LAB_82ad0cf8:
  for (puVar3 = (unsigned int *)*piVar28; puVar3 != (unsigned int *)0x0; puVar3 = (unsigned int *)puVar3[1]) {
    if (((*puVar3 & 0xe000000) != 0) && ((*(unsigned int *)(puVar3[3] + 8) >> 0x17 & 1) != 0)) {
      fn_82AC8ED0(auStack_120,*puVar3 >> 0xd & 0xfff);
    }
  }
  for (puVar3 = (unsigned int *)*piVar28; puVar3 != (unsigned int *)0x0; puVar3 = (unsigned int *)puVar3[1]) {
    uVar26 = *puVar3;
    uVar8 = uVar26 >> 0x1e & 1;
    if ((uVar8 != 0) || (bVar20 = false, (uVar26 & 0xe000000) != 0)) {
      bVar20 = true;
    }
    if (bVar20) {
      piVar22 = (int *)puVar3[3];
      if ((uVar8 == 0) || (bVar20 = true, (uVar26 & 0xe000000) != 0)) {
        bVar20 = false;
      }
      if (bVar20) {
        uVar26 = uVar26 >> 0xb & 0x3ffc;
        piVar30 = *(int **)((int)aiStack_f8 + uVar26);
        if (piVar30 == (int *)0x0) {
          *(int **)((int)aiStack_f8 + uVar26) = piVar22;
        }
        else if (piVar30 != piVar22) {
                    /* WARNING: Subroutine does not return */
          fn_82AA66A8(auStack_120[0],0x12c0);
        }
      }
      else if ((~(uVar26 >> 0x1e) & 1) == 0) {
        if (((piVar22[2] & 0x3f80U) != 0x3c00) && (cVar12 = fn_82ABE190(puVar3), cVar12 != '\0')) {
          uVar9 = fn_82AC8750(puVar3);
          fn_82AC8ED0(auStack_120,uVar9);
        }
      }
      else {
        puVar14 = &uStack_d8;
        puVar16 = &uStack_128;
        lVar31 = 5;
        do {
          puVar16 = puVar16 + 1;
          puVar14 = puVar14 + 1;
          *puVar14 = *puVar16;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        piVar30 = piVar28;
        piVar29 = piVar22;
        if ((piVar22[2] & 0x3f80U) == 0x3700) {
          for (puVar23 = (unsigned int *)*piVar22; puVar23 != (unsigned int *)0x0; puVar23 = (unsigned int *)puVar23[1]) {
            if ((*puVar23 & 0xe000000) != 0) {
              piVar4 = (int *)puVar23[3];
              if ((piVar4[2] & 0x3f80U) == 0x3800) {
                piVar29 = (int *)(-(unsigned int)((*(unsigned int *)(uVar2 + 0x14) & 1) == 0) &
                                 *(unsigned int *)(uVar2 + 0x14));
                break;
              }
              if ((piVar4 != piVar29) && (cVar12 = fn_82ACB0F8(piVar4,piVar29), cVar12 != '\0')) {
                piVar29 = piVar4;
              }
            }
          }
        }
        while( true ) {
          if (((piVar30[9] & 1U) != 0) ||
             (piVar30 = (int *)((piVar30[9] & 0xfffffffeU) - 0x28), piVar30 == (int *)0x0)) {
            if ((*(unsigned int *)(uVar2 + 0x14) & 1) == 0) {
              piVar30 = (int *)((*(unsigned int *)(uVar2 + 0x10) & 0xfffffffe) - 0x28);
            }
            else {
              piVar30 = (int *)0x0;
            }
          }
          if (piVar30 == piVar29) break;
          if (((unsigned int)piVar30[2] >> 0x17 & 1) != 0) {
            puVar23 = (unsigned int *)piVar30[1];
            for (puVar17 = puVar23; puVar17 != (unsigned int *)0x0; puVar17 = (unsigned int *)puVar17[2]) {
              if ((*puVar17 & 0xe000000) != 0) {
                bVar20 = true;
                if ((*puVar17 >> 0x1e & 1) != 0) goto LAB_82ad0f28;
                break;
              }
            }
            bVar20 = false;
LAB_82ad0f28:
            if (bVar20) {
              for (; (puVar23 != (unsigned int *)0x0 && ((*puVar23 & 0xe000000) == 0));
                  puVar23 = (unsigned int *)puVar23[2]) {
              }
              fn_82AC8ED0(auStack_d0,
                              ((unsigned __int64)(*puVar23 >> 0xc) & 0x1fe0 |
                              (unsigned __int64)(unsigned int)piVar30[2] & 0x1e) >> 1);
            }
          }
          for (puVar23 = (unsigned int *)*piVar30; puVar23 != (unsigned int *)0x0; puVar23 = (unsigned int *)puVar23[1]) {
            if (((*puVar23 & 0xe000000) != 0) && ((*(unsigned int *)(puVar23[3] + 8) >> 0x17 & 1) != 0)) {
              fn_82AC8ED0(auStack_d0,*puVar23 >> 0xd & 0xfff);
            }
          }
        }
        bVar20 = false;
        if ((*(unsigned int *)(uVar11 - 0x20) & 0x3f80) != 0x3700) {
          uVar26 = piVar22[2];
          if ((uVar26 & 0x3f80) == 0x3700) {
LAB_82ad1014:
            bVar7 = false;
          }
          else {
            uVar15 = 0;
            uVar24 = 0;
            uVar8 = *puVar3 >> 0x19 & 7;
            if (uVar8 != 0) {
              uVar18 = 0;
              do {
                uVar24 = uVar24 + 1;
                uVar15 = 1 << ((*puVar3 >> 5 & 0xff) >> (uVar18 & 0x3f) & 3) | uVar15;
                uVar18 = uVar18 + 2;
              } while (uVar24 < uVar8);
            }
            bVar7 = true;
            if (uVar15 == (uVar26 >> 1 & 0xf)) goto LAB_82ad1014;
          }
          if (bVar7) {
            piVar22[5] = piVar22[5] | 0x40000000;
            uVar10 = fn_82AD0248(param_1,auStack_d0,piVar28,piVar22,auStack_130);
            bVar20 = true;
          }
          else {
            iVar25 = 0;
            lVar31 = 4;
            do {
              puVar19 = (unsigned __int64 *)((int)auStack_c8 + iVar25);
              puVar5 = (unsigned __int64 *)((int)auStack_98 + iVar25);
              iVar25 = iVar25 + 8;
              *puVar19 = *puVar5 | *puVar19;
              lVar31 = lVar31 + -1;
            } while (lVar31 != 0);
            uVar10 = fn_82AD01A0(auStack_d0,uVar26 >> 0xe & 7,0);
            auStack_130[0] = (unsigned int)(unsigned char)(&lbl_820D7B2B)[(unsigned int)uVar10 & 0xf];
          }
          if ((int)uVar10 != -1) {
            uVar26 = *(unsigned int *)(param_1 + 0x31c);
            if ((uVar26 == 0) && (uVar26 = *(unsigned int *)(param_1 + 0x318), uVar26 == 0)) {
              uVar26 = 0x20;
            }
            if ((uVar10 & 0xffffffff) >> 4 < (unsigned __int64)uVar26) goto LAB_82ad1164;
          }
          uVar27 = 1;
          *(unsigned int *)(uVar2 + 0x44) = *(unsigned int *)(uVar2 + 0x44) | 0x20000000;
          goto LAB_82ad10e0;
        }
        uVar10 = uVar21 >> 2 & 0x3c;
        uVar10 = fn_82ACFEF0(param_1,uVar21,
                               ((2L << ((uVar21 >> 2 & 0x3ffffffc) + 3 & 0x3f)) - 1U &
                                *(unsigned __int64 *)((int)auStack_118 + ((unsigned int)uVar21 >> 5 & 0x7fffff8)) &
                               -1L << uVar10) >> uVar10 & 0xffffffff,piVar28,piVar22,auStack_130);
LAB_82ad1164:
        fn_82B81D80(piVar22,uVar10,auStack_130[0]);
        if (bVar20) {
          fn_82AC8ED0(aiStack_a0,uVar10);
          uVar10 = fn_82AC8750(puVar3);
        }
        fn_82AE5A50(auStack_120,uVar10);
      }
    }
  }
  uVar11 = *(unsigned int *)(uVar11 - 4);
  if ((uVar11 & 1) != 0) goto LAB_82ad10e0;
  goto LAB_82ad11b4;
}

