typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_110;
extern unsigned int *auStack_120;
extern unsigned int *auStack_130;
extern unsigned int *auStack_140;
extern unsigned int *auStack_14c;
extern int fn_82953940();
extern int fn_829632A0();
extern int fn_829632F0();
extern int fn_82963998();
extern int fn_829639F0();
extern int fn_82963A30();
extern int fn_829644B8();
extern int fn_82964628();
extern int fn_82964868();
extern int fn_82975B00();
extern int fn_82994480();
extern int fn_82994508();
extern int fn_82994768();
extern int fn_82BA02A8();
extern int memcpy();
extern unsigned int iStack_150;
extern unsigned int lbl_82005710;
extern unsigned int uStack_100;
extern unsigned int uStack_104;
extern unsigned int uStack_108;
extern unsigned int uStack_10c;
extern unsigned int uStack_114;
extern unsigned int uStack_118;
extern unsigned int uStack_11c;
extern unsigned int uStack_138;
extern unsigned int uStack_f4;
extern unsigned int uStack_f8;
extern unsigned int uStack_fc;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

__int64 fn_82994908(int *param_1)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  unsigned __int64 uVar7;
  int iVar8;
  int iVar9;
  unsigned int uVar10;
  int iVar11;
  int iVar12;
  unsigned int *puVar13;
  unsigned __int64 uVar14;
  __int64 lVar15;
  int *piVar16;
  bool bVar18;
  int *piVar17;
  int iVar19;
  unsigned int uVar20;
  unsigned int uVar21;
  unsigned __int64 uVar22;
  unsigned int uVar23;
  __int64 lVar24;
  unsigned int *puVar25;
  __int64 lVar26;
  unsigned __int64 uVar27;
  unsigned __int64 uVar28;
  unsigned __int64 uVar29;
  int iStack_150;
  unsigned int auStack_14c [3];
  unsigned int auStack_140 [2];
  unsigned __int64 uStack_138;
  unsigned int auStack_130 [4];
  unsigned char auStack_120 [4];
  unsigned int uStack_11c;
  unsigned int uStack_118;
  unsigned int uStack_114;
  unsigned char auStack_110 [4];
  unsigned int uStack_10c;
  unsigned int uStack_108;
  unsigned int uStack_104;
  struct { unsigned int first; unsigned int second; } stack_pair_100;

  unsigned int uStack_f8;
  unsigned int uStack_f4;
  int aiStack_f0 [16];
  int aiStack_b0 [12];
  
  puVar1 = (unsigned int *)param_1[0x41];
  iVar11 = 0;
  iStack_150 = 0;
  uVar10 = 0;
  auStack_14c[0] = 0;
  uVar20 = *puVar1 & 0xfff00000;
  if ((*puVar1 & 0xfff00000) == 0) {
    return 0;
  }
  uVar2 = *(unsigned int *)param_1[0x41];
  uVar3 = (unsigned __int64)uVar2 & 0xfffff;
  uVar22 = ((unsigned int *)param_1[0x41])[1] / uVar3;
  trapWord(6,uVar3,0);
  if ((((uVar2 & 0xfff00000) == 0x50000000) || (uVar20 == 0x50200000)) ||
     (bVar18 = false, uVar20 == 0x70800000)) {
    bVar18 = true;
  }
  bVar4 = false;
  bVar5 = false;
  if (((uVar20 == 0x60500000) || (uVar20 == 0x60a00000)) ||
     ((uVar20 == 0x60f00000 || (uVar20 == 0x11000000)))) {
    lVar26 = fn_82964868(param_1);
    if (lVar26 < 0) {
      return lVar26;
    }
    *(unsigned int *)param_1[0x41] = 0;
    goto LAB_829957b0;
  }
  if (bVar18) {
    if ((uVar20 == 0x50200000) || (uVar20 == 0x70800000)) {
      lVar26 = fn_82964868(param_1);
      if (lVar26 < 0) {
        return lVar26;
      }
      *(unsigned int *)param_1[0x41] = 0;
      return lVar26;
    }
    iVar8 = param_1[5];
    if (*(int *)(*(int *)(*(int *)puVar1[4] * 4 + iVar8) + 4) == param_1[0x21]) {
      fn_82975B00(param_1,puVar1[0xf],0x12d1,0xffffffff8204fd58);
      return -0x7fffbffb;
    }
    uVar28 = 0;
    if (uVar22 == 0) {
LAB_82995494:
      lVar26 = fn_82964868(param_1);
      if (lVar26 < 0) {
        return lVar26;
      }
    }
    else {
      lVar26 = 0;
      piVar17 = aiStack_f0;
LAB_829953ec:
      *piVar17 = -1;
      lVar15 = 0;
      piVar17[1] = -1;
      piVar17[2] = -1;
      piVar17[3] = -1;
      if ((uVar2 & 0xfffff) != 0) {
        uVar20 = puVar1[2];
        uVar29 = uVar3;
        do {
          uVar7 = lVar26 + lVar15;
          uVar27 = (uVar28 & 0x3fffffff) * 4 + lVar15;
          lVar15 = lVar15 + 1;
          *(unsigned int *)((int)aiStack_f0 + (int)((uVar27 & 0xffffffff) << 2)) =
               *(unsigned int *)
                (*(int *)(*(int *)((int)((uVar7 & 0xffffffff) << 2) + uVar20) * 4 + iVar8) + 0x10);
          uVar29 = uVar29 - 1;
        } while (uVar29 != 0);
      }
      uVar20 = 0;
      do {
        uVar21 = 0;
        piVar16 = piVar17;
        while ((*piVar16 == -1 || (*piVar16 == *(int *)((uVar20 + uVar21) * 4 + -0x7cea42d8)))) {
          uVar21 = uVar21 + 1;
          piVar16 = piVar16 + 1;
          if (3 < uVar21) {
            uVar28 = uVar28 + 1;
            lVar26 = lVar26 + uVar3;
            piVar17 = piVar17 + 4;
            if (uVar22 <= (uVar28 & 0xffffffff)) goto LAB_82995494;
            goto LAB_829953ec;
          }
        }
        uVar20 = uVar20 + 4;
      } while (uVar20 < 0x20);
      if ((param_1[0x1b] & 0x20000000U) == 0) goto LAB_82995494;
      lVar26 = fn_82994508(param_1,auStack_14c,uVar3,uVar22);
      uVar10 = auStack_14c[0];
      if (lVar26 < 0) goto LAB_829957c8;
      if (auStack_14c[0] != 0) {
        lVar26 = fn_829644B8(param_1,auStack_14c[0]);
        if (lVar26 < 0) goto LAB_829957c8;
        uVar10 = 0;
      }
      iVar8 = fn_82963998(0x74);
      if (iVar8 == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = fn_829632A0();
      }
      if (iVar8 == 0) {
LAB_82995534:
        lVar26 = -0x7ff8fff2;
        goto LAB_829957c8;
      }
      uVar22 = 0;
      uVar20 = 0;
      if (param_1[2] != 0) {
        iVar9 = 0;
        do {
          uVar21 = *(unsigned int *)(*(int *)(*(int *)(*(int *)(iVar9 + param_1[5]) + 4) * 4 + param_1[4]) +
                            4);
          if ((((uVar21 & 1) != 0) && ((uVar21 & 2) != 0)) &&
             (uVar28 = (unsigned __int64)*(unsigned int *)(*(int *)(iVar9 + param_1[5]) + 0xc) + 1,
             (uVar22 & 0xffffffff) < (uVar28 & 0xffffffff))) {
            uVar22 = uVar28;
          }
          uVar20 = uVar20 + 1;
          iVar9 = iVar9 + 4;
        } while (uVar20 < (unsigned int)param_1[2]);
      }
      lVar26 = fn_82963A30(iVar8,0x20500001,2,1,0);
      if ((lVar26 < 0) || (lVar26 = fn_829632F0(iVar8,param_1[0x41]), lVar26 < 0))
      goto LAB_829957c8;
      uVar14 = lbl_82005710;
      iVar9 = fn_82964628(lbl_82005710,param_1,param_1[0x22],uVar22,0);
      lVar15 = uVar22 + 1;
      if (iVar9 == -1) goto LAB_82995534;
      lVar24 = ((unsigned __int64)uVar2 & 0xfffff) << 2;
      **(int **)(iVar8 + 0x10) = iVar9;
      **(unsigned int **)(iVar8 + 8) = **(unsigned int **)(param_1[0x41] + 8);
      *(unsigned int *)(*(int *)(iVar8 + 8) + 4) =
           *(unsigned int *)(*(int *)(param_1[0x41] + 8) + (int)lVar24);
      lVar26 = fn_829644B8(param_1,iVar8);
      if (lVar26 < 0) goto LAB_829957c8;
      uVar22 = 1;
      if (1 < uVar3) {
        iVar8 = 4;
        do {
          lVar24 = lVar24 + 4;
          iVar12 = fn_82963998(0x74);
          if (iVar12 == 0) {
            iVar12 = 0;
          }
          else {
            iVar12 = fn_829632A0();
          }
          if (iVar12 == 0) goto LAB_82995534;
          lVar26 = fn_82963A30(iVar12,0x70300001,3,1,0);
          if ((lVar26 < 0) || (lVar26 = fn_829632F0(iVar12,param_1[0x41]), lVar26 < 0))
          goto LAB_829957c8;
          **(unsigned int **)(iVar12 + 8) = *(unsigned int *)(*(int *)(param_1[0x41] + 8) + iVar8);
          *(unsigned int *)(*(int *)(iVar12 + 8) + 4) =
               *(unsigned int *)(*(int *)(param_1[0x41] + 8) + (int)lVar24);
          *(int *)(*(int *)(iVar12 + 8) + 8) = iVar9;
          if ((uVar22 & 0xffffffff) == (uVar3 - 1 & 0xffffffff)) {
            **(unsigned int **)(iVar12 + 0x10) = **(unsigned int **)(param_1[0x41] + 0x10);
          }
          else {
            iVar9 = fn_82964628(uVar14,param_1,param_1[0x22],lVar15,0);
            lVar15 = lVar15 + 1;
            if (iVar9 == -1) goto LAB_82995534;
            **(int **)(iVar12 + 0x10) = iVar9;
          }
          lVar26 = fn_829644B8(param_1,iVar12);
          if (lVar26 < 0) goto LAB_829957c8;
          uVar22 = uVar22 + 1;
          iVar8 = iVar8 + 4;
        } while ((uVar22 & 0xffffffff) < uVar3);
      }
    }
    goto LAB_829954a4;
  }
  uVar28 = 0;
  if (uVar22 != 0) {
    lVar26 = 0;
    piVar17 = aiStack_f0;
    do {
      *piVar17 = -1;
      lVar15 = 0;
      piVar17[1] = -1;
      piVar17[2] = -1;
      piVar17[3] = -1;
      if ((uVar2 & 0xfffff) != 0) {
        iVar8 = param_1[0x41];
        iVar9 = param_1[5];
        iVar19 = 0;
        iVar12 = *(int *)(iVar8 + 0x10);
        uVar29 = uVar3;
        do {
          uVar7 = lVar26 + lVar15;
          piVar16 = (int *)(iVar12 + iVar19);
          lVar15 = lVar15 + 1;
          iVar19 = iVar19 + 4;
          *(unsigned int *)
           ((int)aiStack_f0 +
           (int)(((unsigned __int64)*(unsigned int *)(*(int *)(*piVar16 * 4 + iVar9) + 0x10) +
                  (uVar28 & 0x3fffffff) * 4 & 0xffffffff) << 2)) =
               *(unsigned int *)
                (*(int *)(*(int *)((int)((uVar7 & 0xffffffff) << 2) + *(int *)(iVar8 + 8)) * 4 +
                         iVar9) + 0x10);
          uVar29 = uVar29 - 1;
        } while (uVar29 != 0);
      }
      uVar28 = uVar28 + 1;
      piVar17 = piVar17 + 4;
      lVar26 = lVar26 + uVar3;
    } while ((uVar28 & 0xffffffff) < uVar22);
  }
  iVar8 = param_1[5];
  if ((*(unsigned int *)(*(int *)(*(int *)(*(int *)(*(int *)puVar1[4] * 4 + iVar8) + 4) * 4 + param_1[4]) +
                4) & 0x20) == 0) {
    uVar28 = 0;
    if (uVar22 != 0) {
      piVar17 = aiStack_f0;
LAB_82994c70:
      uVar20 = 0;
      do {
        uVar21 = 0;
        piVar16 = piVar17;
        while ((*piVar16 == -1 || (*piVar16 == *(int *)((uVar20 + uVar21) * 4 + -0x7cea42d8)))) {
          uVar21 = uVar21 + 1;
          piVar16 = piVar16 + 1;
          if (3 < uVar21) {
            uVar28 = uVar28 + 1;
            piVar17 = piVar17 + 4;
            if ((uVar28 & 0xffffffff) < uVar22) goto LAB_82994c70;
            goto LAB_82994cd0;
          }
        }
        uVar20 = uVar20 + 4;
      } while (uVar20 < 0x20);
      bVar5 = true;
    }
  }
  else {
    iVar9 = *(int *)(**(int **)(param_1[0x41] + 8) * 4 + iVar8);
    iVar8 = (**(int (***)())(*param_1 + 0x70))
                      (param_1,*(unsigned int *)
                                (*(int *)(**(int **)(param_1[0x41] + 0x10) * 4 + iVar8) + 0x6c));
    if (iVar8 != 0xffff) {
      if (iVar8 == 0xb) {
        uVar20 = 0;
        do {
          if ((*(int *)((int)aiStack_f0 + uVar20) != -1) &&
             (*(int *)((int)aiStack_f0 + uVar20) != *(int *)(uVar20 + 0x8315bd68))) {
            bVar4 = false;
            goto LAB_82994b9c;
          }
          uVar20 = uVar20 + 4;
        } while (uVar20 < 0x10);
        bVar4 = true;
LAB_82994b9c:
        bVar4 = !bVar4;
        if (!bVar4) goto LAB_82994ba8;
LAB_82994bb4:
        lVar26 = fn_82994768(param_1,&iStack_150,uVar3);
        iVar11 = iStack_150;
        if (lVar26 < 0) goto LAB_829957b0;
      }
      else {
        if (iVar8 == 0xd) {
          bVar4 = false;
          uVar20 = 0;
          do {
            uVar21 = 0;
            piVar17 = aiStack_f0;
            while ((*piVar17 == -1 || (*piVar17 == *(int *)((uVar20 + uVar21) * 4 + -0x7cea42d8))))
            {
              uVar21 = uVar21 + 1;
              piVar17 = piVar17 + 1;
              if (3 < uVar21) {
                bVar4 = true;
                goto LAB_82994b9c;
              }
            }
            uVar20 = uVar20 + 4;
          } while (uVar20 < 0x10);
          goto LAB_82994b9c;
        }
LAB_82994ba8:
        if ((*(unsigned int *)(iVar9 + 0x3c) & 0x1f0000) != 0) goto LAB_82994bb4;
      }
      uStack_138 = 0;
      iVar9 = fn_82994480(aiStack_f0,auStack_140);
      if ((iVar9 != 0) || ((bVar5 = bVar4, iVar8 == 0xd && (aiStack_f0[0] == 0)))) {
        lVar26 = fn_82953940(param_1,auStack_140,uVar22,uVar3);
        if (-1 < lVar26) {
          *(unsigned int *)param_1[0x41] = 0;
          if (iVar11 == 0) {
            return lVar26;
          }
          lVar26 = fn_829644B8(param_1,iVar11);
          if (-1 < lVar26) {
            return lVar26;
          }
        }
        goto LAB_829957b0;
      }
    }
  }
LAB_82994cd0:
  puVar1 = (unsigned int *)param_1[0x41];
  if (((*puVar1 & 0xfff00000) == 0x10d00000) || ((*puVar1 & 0xfff00000) == 0x10e00000)) {
    bVar18 = false;
    uVar20 = 0;
    if (puVar1[1] == 0) goto LAB_82994eac;
    iVar8 = 0;
    do {
      if ((*(unsigned int *)(*(int *)(*(int *)(puVar1[2] + iVar8) * 4 + param_1[5]) + 0x3c) & 0x1f0000) != 0
         ) {
        bVar18 = true;
      }
      uVar20 = uVar20 + 1;
      iVar8 = iVar8 + 4;
    } while (uVar20 < puVar1[1]);
    if (!bVar18) goto LAB_82994eac;
    uVar28 = 0;
    uVar20 = 0;
    if (param_1[2] != 0) {
      iVar8 = 0;
      do {
        iVar9 = *(int *)(param_1[5] + iVar8);
        if ((param_1[0x22] == *(int *)(iVar9 + 4)) &&
           (uVar29 = (unsigned __int64)*(unsigned int *)(iVar9 + 0xc), (uVar28 & 0xffffffff) <= uVar29)) {
          uVar28 = uVar29 + 1;
        }
        uVar20 = uVar20 + 1;
        iVar8 = iVar8 + 4;
      } while (uVar20 < (unsigned int)param_1[2]);
    }
    uVar29 = 0;
    piVar17 = aiStack_b0;
    uVar14 = lbl_82005710;
    do {
      iVar8 = fn_82964628(uVar14,param_1,param_1[0x22],uVar28,uVar29);
      *piVar17 = iVar8;
      if (iVar8 == -1) goto LAB_82994e00;
      uVar29 = uVar29 + 1;
      piVar17 = piVar17 + 1;
    } while ((uVar29 & 0xffffffff) < 4);
    iVar8 = fn_82963998(0x74);
    if (iVar8 == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = fn_829632A0();
    }
    if (uVar10 == 0) {
LAB_82994e00:
      lVar26 = -0x7ff8fff2;
    }
    else {
      uVar20 = *(unsigned int *)(param_1[0x41] + 4);
      lVar26 = fn_82963A30(uVar10,uVar20 & 0xfffff | 0x10000000,uVar20,
                                 *(unsigned int *)(param_1[0x41] + 0xc),0);
      if ((-1 < lVar26) && (lVar26 = fn_829632F0(uVar10,param_1[0x41]), -1 < lVar26)) {
        memcpy(*(unsigned int *)(uVar10 + 0x10),aiStack_b0,*(int *)(param_1[0x41] + 0xc) << 2);
        memcpy(*(unsigned int *)(uVar10 + 8),*(unsigned int *)(param_1[0x41] + 8),
                     *(int *)(param_1[0x41] + 4) << 2);
        memcpy(*(unsigned int *)(param_1[0x41] + 8),aiStack_b0,*(int *)(param_1[0x41] + 4) << 2)
        ;
        lVar26 = fn_829644B8(param_1,uVar10);
        if (-1 < lVar26) goto LAB_82994eac;
      }
    }
  }
  else {
LAB_82994eac:
    uVar10 = 0;
    if ((bVar5) && ((param_1[0x1b] & 0x20000000U) != 0)) {
      bVar18 = false;
      bVar4 = false;
      if (uVar3 == 4) {
        bVar5 = true;
        uVar20 = 0;
        puVar13 = auStack_130;
        do {
          if (!bVar5) break;
          bVar5 = false;
          uStack_138 = 0;
          auStack_130[1] = 0xffffffff;
          auStack_130[2] = 0xffffffff;
          auStack_130[3] = 0xffffffff;
          puVar13[-4] = 0xffffffff;
          *puVar13 = 0;
          if (uVar22 == 0) {
LAB_82994ff8:
            lVar26 = fn_82953940(param_1,auStack_140,uVar22,4);
            if ((lVar26 < 0) ||
               (lVar26 = fn_82953940(param_1,auStack_130,uVar22,4), lVar26 < 0))
            goto LAB_829957b0;
            goto LAB_82995338;
          }
          piVar17 = aiStack_f0;
          uVar28 = uVar22;
          do {
            iVar8 = fn_82994480(piVar17,auStack_140);
            if (iVar8 == 0) {
              bVar5 = true;
            }
            uVar28 = uVar28 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar28 != 0);
          if (!bVar5) goto LAB_82994ff8;
          uVar20 = uVar20 + 1;
          puVar13 = puVar13 + 1;
        } while (uVar20 < 4);
        bVar5 = true;
        uVar20 = 0;
        puVar13 = auStack_130;
        do {
          if (!bVar5) break;
          uVar21 = 0;
          puVar25 = auStack_130;
          do {
            if (uVar21 != uVar20) {
              bVar5 = false;
              bVar6 = false;
              uStack_138 = 0;
              auStack_130[1] = 0xffffffff;
              auStack_130[2] = 0xffffffff;
              auStack_130[3] = 0xffffffff;
              puVar13[-4] = 0xffffffff;
              puVar25[-4] = 0xffffffff;
              *puVar13 = 0;
              *puVar25 = 0;
              if (uVar22 != 0) {
                piVar17 = aiStack_f0;
                uVar28 = uVar22;
                do {
                  iVar11 = fn_82994480(piVar17,auStack_140);
                  iVar8 = fn_82994480(piVar17,auStack_130);
                  if (iVar11 == 0) {
                    bVar6 = true;
LAB_8299503c:
                    bVar5 = true;
                  }
                  else if (iVar8 == 0) goto LAB_8299503c;
                  uVar28 = uVar28 - 1;
                  piVar17 = piVar17 + 4;
                } while (uVar28 != 0);
                iVar11 = iStack_150;
                if (bVar5) {
                  if (!bVar6) {
                    bVar4 = true;
                    uStack_11c = 0;
                    uStack_118 = (((unsigned __int64)(uStack_138) >> 0) & 0xFFFFFFFF);
                    uStack_114 = (((unsigned __int64)(uStack_138) >> 32) & 0xFFFFFFFF);
                    uStack_10c = 0xffffffff;
                    uStack_108 = 0xffffffff;
                    uStack_104 = 0xffffffff;
                    stack_pair_100.second = 0xffffffff;
                    uStack_f8 = 0xffffffff;
                    uStack_f4 = 0xffffffff;
                    puVar13[8] = 0;
                    puVar25[0xc] = 0;
                  }
                  goto LAB_829950bc;
                }
              }
              bVar18 = true;
              break;
            }
LAB_829950bc:
            uVar21 = uVar21 + 1;
            puVar25 = puVar25 + 1;
          } while (uVar21 < 4);
          uVar20 = uVar20 + 1;
          puVar13 = puVar13 + 1;
        } while (uVar20 < 4);
        if (bVar18) {
          lVar26 = fn_82953940(param_1,auStack_140,uVar22,4);
          if (-1 < lVar26) {
            uVar14 = 4;
LAB_829952a8:
            puVar13 = auStack_130;
LAB_829952ac:
            lVar26 = fn_82953940(param_1,puVar13,uVar22,uVar14);
            if (-1 < lVar26) {
              if (!bVar18) goto LAB_829952c8;
              goto LAB_82995338;
            }
          }
        }
        else {
          if (!bVar4) goto LAB_829952c8;
          bVar18 = true;
          lVar26 = fn_82953940(param_1,auStack_120,uVar22,4);
          if ((-1 < lVar26) &&
             (lVar26 = fn_82953940(param_1,auStack_110,uVar22,4), -1 < lVar26)) {
            uVar14 = 4;
            puVar13 = &stack_pair_100.first;
            goto LAB_829952ac;
          }
        }
      }
      else {
        if (uVar3 == 3) {
          uVar21 = 0;
          uVar20 = 0xffffffff;
          piVar17 = aiStack_f0;
          lVar26 = 4;
          do {
            if (*piVar17 == -1) {
              uVar20 = uVar21;
            }
            uVar21 = uVar21 + 1;
            piVar17 = piVar17 + 1;
            lVar26 = lVar26 + -1;
          } while (lVar26 != 0);
          uVar21 = 0;
          puVar13 = auStack_130;
          do {
            if (bVar18) goto LAB_82995288;
            uVar23 = 0;
            puVar25 = auStack_130;
            do {
              if (bVar18) break;
              if (((uVar23 != uVar21) && (uVar23 != uVar20)) && (uVar21 != uVar20)) {
                bVar4 = false;
                uVar28 = 0;
                uStack_138 = 0xffffffffffffffff;
                auStack_130[1] = 0;
                auStack_130[2] = 0;
                auStack_130[3] = 0;
                puVar13[-4] = 0;
                puVar25[-4] = 0;
                *puVar13 = 0xffffffff;
                *puVar25 = 0xffffffff;
                auStack_130[uVar20] = 0xffffffff;
                if (uVar22 != 0) {
                  piVar17 = aiStack_f0;
                  do {
                    if (bVar4) goto LAB_82995260;
                    iVar8 = fn_82994480(piVar17,auStack_140);
                    if (iVar8 == 0) {
                      bVar4 = true;
                    }
                    uVar28 = uVar28 + 1;
                    piVar17 = piVar17 + 4;
                  } while ((uVar28 & 0xffffffff) < uVar22);
                  if (bVar4) goto LAB_82995260;
                }
                bVar18 = true;
              }
LAB_82995260:
              uVar23 = uVar23 + 1;
              puVar25 = puVar25 + 1;
            } while (uVar23 < 4);
            uVar21 = uVar21 + 1;
            puVar13 = puVar13 + 1;
          } while (uVar21 < 4);
          if (bVar18) {
LAB_82995288:
            lVar26 = fn_82953940(param_1,auStack_140,uVar22,3);
            if (-1 < lVar26) {
              uVar14 = 3;
              goto LAB_829952a8;
            }
            goto LAB_829957b0;
          }
        }
LAB_829952c8:
        uVar28 = 0;
        if ((uVar2 & 0xfffff) != 0) {
          iVar8 = 0;
          do {
            uStack_138 = 0xffffffffffffffff;
            auStack_140
            [*(int *)(*(int *)(*(int *)(*(int *)(param_1[0x41] + 0x10) + iVar8) * 4 + param_1[5]) +
                     0x10)] = 0;
            lVar26 = fn_82953940(param_1,auStack_140,uVar22,uVar3);
            if (lVar26 < 0) goto LAB_829957b0;
            uVar28 = uVar28 + 1;
            iVar8 = iVar8 + 4;
          } while ((uVar28 & 0xffffffff) < uVar3);
        }
LAB_82995338:
        if (iVar11 != 0) {
          lVar26 = fn_829644B8(param_1,iVar11);
          if (lVar26 < 0) goto LAB_829957b0;
          iVar11 = 0;
        }
LAB_829954a4:
        lVar26 = 0;
        *(unsigned int *)param_1[0x41] = 0;
      }
    }
    else {
      lVar26 = fn_82964868(param_1,param_1[0x41]);
      if (-1 < lVar26) goto LAB_829954a4;
    }
  }
LAB_829957b0:
  if (iVar11 != 0) {
    fn_82BA02A8(iVar11);
    fn_829639F0(iVar11);
  }
LAB_829957c8:
  if (uVar10 != 0) {
    fn_82BA02A8(uVar10);
    fn_829639F0(uVar10);
  }
  return lVar26;
}

