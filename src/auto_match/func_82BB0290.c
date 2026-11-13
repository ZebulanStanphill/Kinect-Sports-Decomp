typedef unsigned char bool;
#define true 1
#define false 0
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_82B7BD28();
extern int fn_82B7BEB0();
extern int fn_82B7C5A8();
extern int fn_82BA02A8();
extern int fn_82BA03B8();
extern int fn_82BAF310();
extern int fn_82BAF378();
extern int fn_82BAF4A8();
extern int fn_82BB01C8();
extern int fn_82BBFEF0();
extern int fn_82BC0088();
extern unsigned int stack0x00000000;
extern unsigned int uStack_138;
extern unsigned int uStack_13c;
extern unsigned int uStack_140;


void fn_82BB0290(int *param_1,int param_2)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  unsigned int *puVar5;
  char cVar27;
  unsigned int *puVar6;
  unsigned int *puVar7;
  int iVar8;
  unsigned int uVar9;
  unsigned int *puVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  int iVar13;
  unsigned int *puVar14;
  unsigned int *puVar15;
  unsigned int *puVar16;
  int iVar17;
  int *piVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  unsigned int uVar22;
  int iVar23;
  int iVar24;
  int *piVar25;
  int *piVar26;
  unsigned __int64 uVar28;
  bool bVar29;
  unsigned int *puVar30;
  int *piVar31;
  unsigned __int64 uVar32;
  unsigned __int64 uVar33;
  unsigned int *puVar34;
  __int64 lVar35;
  unsigned int *puVar36;
  unsigned __int64 uVar37;
  __int64 lVar38;
  unsigned __int64 uVar39;
  __int64 lVar40;
  int iVar42;
  unsigned int uVar43;
  __int64 lVar41;
  unsigned __int64 *puVar44;
  unsigned __int64 uVar45;
  unsigned int *puVar46;
  unsigned __int64 uVar47;
  unsigned int uStack_140;
  unsigned int uStack_13c;
  unsigned int uStack_138;
  int aiStack_124 [2];
  unsigned int *puStack_11c;
  unsigned int *puStack_118;
  unsigned int *puStack_114;
  
  uVar4 = ZEXT48(&stack0x00000000);
  uVar12 = *(unsigned int *)(*param_1 + 0x5b0);
  puVar5 = (unsigned int *)fn_82B7BD28(uVar12,0x14);
  puVar46 = puVar5 + 1;
  *puVar5 = uVar12;
  if (puVar46 == (unsigned int *)0x0) {
    puVar46 = (unsigned int *)0x0;
  }
  else {
    fn_82BA03B8(puVar46,*(unsigned int *)(*param_1 + 0x5b0));
  }
  fn_82BA02A8(*param_1,0xffffffff820dfbe8);
  for (iVar8 = *(int *)(param_2 + 0x88); *(int *)(iVar8 + 8) != 0; iVar8 = *(int *)(iVar8 + 8)) {
    for (piVar18 = *(int **)(iVar8 + 0x1c); piVar18[2] != 0; piVar18 = (int *)piVar18[2]) {
      if (((((piVar18[0x39] & 1U) != 0) &&
           (cVar27 = (**(int (***)())(*piVar18 + 0x40))(piVar18), cVar27 != '\0')) &&
          ((piVar18[0x39] & 1U) != 0)) && (piVar18[0x14] == 0xb)) {
        puVar5 = (unsigned int *)fn_82BC0088(puVar46,puVar46[1]);
        *puVar5 = piVar18;
      }
    }
  }
  if (puVar46[1] != 0) {
    fn_82BBFEF0(puVar46,0xffffffff82baf900);
    if ((*(unsigned int *)(*param_1 + 0x858) >> 0xd & 1) == 0) {
      uVar39 = 0;
      if (puVar46[1] != 0) {
        iVar8 = 0;
        if (puVar46[1] == 0) {
          piVar18 = (int *)fn_82BC0088(puVar46,0);
          goto LAB_82bb1934;
        }
        do {
          piVar18 = (int *)(puVar46[2] + iVar8);
LAB_82bb1934:
          fn_82BA02A8(*param_1,0xffffffff820dfbb0,*(unsigned int *)(*piVar18 + 0xe0),uVar39);
          iVar42 = 0x3a0;
          iVar13 = 0x380;
          do {
            if ((uVar39 & 0xffffffff) < (unsigned __int64)(unsigned int)puVar46[1]) {
              piVar18 = (int *)(puVar46[2] + iVar8);
            }
            else {
              piVar18 = (int *)fn_82BC0088(puVar46,uVar39);
            }
            uVar45 = *(unsigned __int64 *)(*piVar18 + iVar13);
            if ((uVar39 & 0xffffffff) < (unsigned __int64)(unsigned int)puVar46[1]) {
              piVar18 = (int *)(puVar46[2] + iVar8);
            }
            else {
              piVar18 = (int *)fn_82BC0088(puVar46,uVar39);
            }
            if (*(int *)(*piVar18 + iVar42) == 0) break;
            fn_82BAF378(uVar45,uVar4 - 0x110);
            fn_82BA02A8(*param_1,0xffffffff820dfbbc,uVar4 - 0x110);
            iVar13 = iVar13 + 8;
            iVar42 = iVar42 + 4;
          } while (iVar13 < 0x3a0);
          fn_82BA02A8(*param_1,0xffffffff821cc86c);
          if ((uVar39 & 0xffffffff) < (unsigned __int64)(unsigned int)puVar46[1]) {
            piVar18 = (int *)(puVar46[2] + iVar8);
          }
          else {
            piVar18 = (int *)fn_82BC0088(puVar46,uVar39);
          }
          iVar42 = *piVar18;
          uVar12 = fn_82BAF4A8(param_1);
          *(unsigned int *)(iVar42 + 0x38) = uVar12;
          lVar35 = 0;
          *(unsigned int *)(iVar42 + 0x50) = 0xb;
          puVar44 = (unsigned __int64 *)(iVar42 + 0x380);
          piVar18 = (int *)(iVar42 + 0x3a0);
          do {
            if (*piVar18 == 0) break;
            fn_82B7C5A8(*param_1,*(unsigned int *)(iVar42 + 0x38),lVar35,*puVar44);
            lVar35 = lVar35 + 1;
            piVar18 = piVar18 + 1;
            puVar44 = puVar44 + 1;
          } while ((int)lVar35 < 4);
          uVar39 = uVar39 + 1;
          iVar8 = iVar8 + 4;
        } while ((uVar39 & 0xffffffff) < (unsigned __int64)(unsigned int)puVar46[1]);
      }
    }
    else {
      uVar12 = *(unsigned int *)(*param_1 + 0x5b0);
      puVar5 = (unsigned int *)fn_82B7BD28(uVar12,0x14);
      puVar34 = puVar5 + 1;
      *puVar5 = uVar12;
      if (puVar34 == (unsigned int *)0x0) {
        puVar34 = (unsigned int *)0x0;
      }
      else {
        fn_82BA03B8(puVar34,*(unsigned int *)(*param_1 + 0x5b0));
      }
      uVar9 = 0;
      if (puVar46[1] != 0) {
        iVar8 = 0;
        if (puVar46[1] == 0) {
          piVar18 = (int *)fn_82BC0088(puVar46,0);
          goto LAB_82bb0414;
        }
        do {
          piVar18 = (int *)(puVar46[2] + iVar8);
LAB_82bb0414:
          iVar42 = 0;
          piVar25 = (int *)(*piVar18 + 0x380);
          piVar18 = (int *)(*piVar18 + 0x3a0);
          do {
            if (*piVar18 == 0) break;
            uVar11 = 0;
            if (puVar34[1] != 0) {
              iVar13 = 0;
              if (puVar34[1] == 0) {
                piVar26 = (int *)fn_82BC0088(puVar34,0);
                goto LAB_82bb0464;
              }
              do {
                piVar26 = (int *)(puVar34[2] + iVar13);
LAB_82bb0464:
                if ((*piVar25 != *(int *)*piVar26) ||
                   (bVar29 = true, piVar25[1] != ((int *)*piVar26)[1])) {
                  bVar29 = false;
                }
                if (bVar29) goto LAB_82bb04bc;
                uVar11 = uVar11 + 1;
                iVar13 = iVar13 + 4;
              } while (uVar11 < (unsigned int)puVar34[1]);
            }
            puVar5 = (unsigned int *)fn_82BC0088(puVar34,puVar34[1]);
            *puVar5 = piVar25;
LAB_82bb04bc:
            iVar42 = iVar42 + 1;
            piVar18 = piVar18 + 1;
            piVar25 = piVar25 + 2;
          } while (iVar42 < 4);
          uVar9 = uVar9 + 1;
          iVar8 = iVar8 + 4;
        } while (uVar9 < (unsigned int)puVar46[1]);
      }
      fn_82BBFEF0(puVar34,0xffffffff82baf2e8);
      puVar5 = (unsigned int *)fn_82B7BD28(*(unsigned int *)(*param_1 + 0x5b0),puVar34[1] << 2);
      puVar6 = (unsigned int *)fn_82B7BD28(*(unsigned int *)(*param_1 + 0x5b0),puVar34[1] << 2);
      puVar7 = (unsigned int *)fn_82B7BD28(*(unsigned int *)(*param_1 + 0x5b0),puVar34[1] << 2);
      iVar8 = fn_82B7BD28(*(unsigned int *)(*param_1 + 0x5b0),puVar34[1] << 2);
      aiStack_124[0] = iVar8;
      uVar9 = fn_82B7BD28(*(unsigned int *)(*param_1 + 0x5b0),puVar46[1] << 2);
      puVar10 = (unsigned int *)fn_82B7BD28(*(unsigned int *)(*param_1 + 0x5b0),puVar46[1] << 2);
      uVar11 = fn_82B7BD28(*(unsigned int *)(*param_1 + 0x5b0),puVar46[1] << 2);
      uVar43 = 0;
      uVar39 = ((unsigned __int64)(unsigned int)puVar46[1] + 0x1f & 0xffffffff) >> 5;
      iVar42 = (int)uVar39;
      if (puVar34[1] != 0) {
        lVar35 = uVar39 << 2;
        puVar14 = puVar6;
        do {
          uVar12 = fn_82B7BD28(*(unsigned int *)(*param_1 + 0x5b0),lVar35);
          *(unsigned int *)((int)puVar5 + ((int)puVar14 - (int)puVar6)) = uVar12;
          uVar12 = fn_82B7BD28(*(unsigned int *)(*param_1 + 0x5b0),lVar35);
          *puVar14 = uVar12;
          uVar12 = fn_82B7BD28(*(unsigned int *)(*param_1 + 0x5b0),lVar35);
          *(unsigned int *)((int)puVar7 + ((int)puVar14 - (int)puVar6)) = uVar12;
          uVar12 = fn_82B7BD28(*(unsigned int *)(*param_1 + 0x5b0),lVar35);
          *(unsigned int *)((iVar8 - (int)puVar6) + (int)puVar14) = uVar12;
          if (iVar42 != 0) {
            iVar13 = 0;
            uVar47 = uVar39;
            do {
              *(unsigned int *)(puVar5[uVar43] + iVar13) = 0;
              *(unsigned int *)(puVar6[uVar43] + iVar13) = 0;
              *(unsigned int *)(puVar7[uVar43] + iVar13) = 0;
              *(unsigned int *)(iVar13 + *(int *)((iVar8 - (int)puVar6) + (int)puVar14)) = 0;
              iVar13 = iVar13 + 4;
              uVar47 = uVar47 - 1;
            } while (uVar47 != 0);
          }
          uVar43 = uVar43 + 1;
          puVar14 = puVar14 + 1;
        } while (uVar43 < (unsigned int)puVar34[1]);
      }
      uVar43 = 0;
      if (puVar46[1] != 0) {
        puVar36 = puVar10;
        do {
          *(unsigned int *)((uVar9 - (int)puVar10) + (int)puVar36) = 0;
          *puVar36 = uVar43;
          uVar43 = uVar43 + 1;
          *(unsigned int *)((uVar11 - (int)puVar10) + (int)puVar36) = 4;
          puVar36 = puVar36 + 1;
        } while (uVar43 < (unsigned int)puVar46[1]);
      }
      lVar35 = uVar39 << 2;
      iVar13 = fn_82B7BD28(*(unsigned int *)(*param_1 + 0x5b0),lVar35);
      puVar14 = (unsigned int *)fn_82B7BD28(*(unsigned int *)(*param_1 + 0x5b0),lVar35);
      puVar15 = (unsigned int *)fn_82B7BD28(*(unsigned int *)(*param_1 + 0x5b0),lVar35);
      puVar16 = (unsigned int *)fn_82B7BD28(*(unsigned int *)(*param_1 + 0x5b0),lVar35);
      uVar47 = 0;
      aiStack_124[1] = iVar8;
      puStack_11c = puVar7;
      puStack_118 = puVar6;
      puStack_114 = puVar5;
      if (puVar46[1] != 0) {
        iVar8 = 0;
        puVar36 = puVar10;
        if (puVar46[1] == 0) {
          piVar18 = (int *)fn_82BC0088(puVar46,0);
          goto LAB_82bb0774;
        }
        do {
          piVar18 = (int *)(puVar46[2] + iVar8);
LAB_82bb0774:
          iVar24 = 0;
          iVar17 = 0x3a0;
          do {
            if (*(int *)(*piVar18 + iVar17) == 0) break;
            iVar17 = iVar17 + 4;
            iVar24 = iVar24 + 1;
          } while (iVar17 < 0x3b0);
          if (iVar24 != 4) break;
          *(unsigned int *)((uVar9 - (int)puVar10) + (int)puVar36) = 4;
          *puVar36 = (unsigned int)uVar47;
          *(unsigned int *)((uVar11 - (int)puVar10) + (int)puVar36) = 0;
          uVar43 = (unsigned int)((uVar47 & 0xffffffff) >> 3) & 0x1ffffffc;
          iVar24 = 0x380;
          do {
            if ((uVar47 & 0xffffffff) < (unsigned __int64)(unsigned int)puVar46[1]) {
              piVar18 = (int *)(puVar46[2] + iVar8);
            }
            else {
              piVar18 = (int *)fn_82BC0088(puVar46,uVar47);
            }
            iVar17 = fn_82BB01C8(puVar34,*(unsigned __int64 *)(*piVar18 + iVar24));
            iVar24 = iVar24 + 8;
            *(unsigned int *)(uVar43 + puVar5[iVar17]) =
                 1 << ((unsigned int)uVar47 & 0x1f) | *(unsigned int *)(uVar43 + puVar5[iVar17]);
          } while (iVar24 < 0x3a0);
          uVar47 = uVar47 + 1;
          iVar8 = iVar8 + 4;
          puVar36 = puVar36 + 1;
        } while ((uVar47 & 0xffffffff) < (unsigned __int64)(unsigned int)puVar46[1]);
      }
      uVar28 = (unsigned __int64)(unsigned int)puVar46[1];
      uVar33 = 0xffffffffffffffff;
      uVar32 = 0xffffffffffffffff;
      uVar37 = uVar47;
      if ((uVar47 & 0xffffffff) < uVar28) {
        do {
          iVar24 = 0;
          iVar8 = 0x3a0;
          do {
            if (*(int *)(*(int *)((int)((uVar37 & 0xffffffff) << 2) + puVar46[2]) + iVar8) == 0)
            break;
            iVar8 = iVar8 + 4;
            iVar24 = iVar24 + 1;
          } while (iVar8 < 0x3b0);
          if ((unsigned __int64)(unsigned int)puVar46[1] <= (uVar37 & 0xffffffff)) {
            fn_82BC0088(puVar46,uVar37);
          }
          uVar43 = (unsigned int)uVar37;
          iVar8 = uVar43 * 4;
          *(int *)(iVar8 + uVar11) = 4 - iVar24;
          if (iVar42 != 0) {
            uVar28 = uVar39;
            puVar30 = puVar14;
            do {
              *(unsigned int *)((iVar13 - (int)puVar14) + (int)puVar30) = 0xffffffff;
              *puVar30 = 0xffffffff;
              *(unsigned int *)(((int)puVar15 - (int)puVar14) + (int)puVar30) = 0xffffffff;
              *(unsigned int *)(((int)puVar16 - (int)puVar14) + (int)puVar30) = 0xffffffff;
              puVar30 = puVar30 + 1;
              uVar28 = uVar28 - 1;
            } while (uVar28 != 0);
          }
          *(int *)(iVar8 + uVar9) = iVar24;
          if ((((int)uVar33 == -1) && (iVar24 == 2)) ||
             (((int)uVar32 == -1 && ((iVar24 == 1 && (uVar32 = uVar37, (int)uVar33 == -1)))))) {
            uVar33 = uVar37;
          }
          iVar17 = 0;
          if (0 < iVar24) {
            iVar23 = 0x380;
            do {
              if ((uVar37 & 0xffffffff) < (unsigned __int64)(unsigned int)puVar46[1]) {
                piVar18 = (int *)(puVar46[2] + iVar8);
              }
              else {
                piVar18 = (int *)fn_82BC0088(puVar46,uVar37);
              }
              iVar19 = fn_82BB01C8(puVar34,*(unsigned __int64 *)(iVar23 + *piVar18));
              iVar19 = puVar5[iVar19];
              if ((uVar37 & 0xffffffff) < (unsigned __int64)(unsigned int)puVar46[1]) {
                piVar18 = (int *)(puVar46[2] + iVar8);
              }
              else {
                piVar18 = (int *)fn_82BC0088(puVar46,uVar37);
              }
              iVar20 = fn_82BB01C8(puVar34,*(unsigned __int64 *)(iVar23 + *piVar18));
              iVar20 = puVar6[iVar20];
              if ((uVar37 & 0xffffffff) < (unsigned __int64)(unsigned int)puVar46[1]) {
                piVar18 = (int *)(puVar46[2] + iVar8);
              }
              else {
                piVar18 = (int *)fn_82BC0088(puVar46,uVar37);
              }
              iVar21 = fn_82BB01C8(puVar34,*(unsigned __int64 *)(iVar23 + *piVar18));
              uStack_138 = 0;
              uStack_13c = 0;
              uStack_140 = 0;
              puVar36 = (unsigned int *)puVar7[iVar21];
              if (iVar42 == 0) goto LAB_82bb0b08;
              iVar21 = -(int)puVar36;
              iVar20 = iVar20 - (int)puVar36;
              iVar19 = iVar19 - (int)puVar36;
              uVar28 = uVar39;
              do {
                uVar2 = *(unsigned int *)(iVar20 + (int)puVar36);
                uVar3 = *(unsigned int *)(iVar19 + (int)puVar36) &
                        *(unsigned int *)(iVar21 + (int)puVar16 + (int)puVar36);
                uVar22 = *puVar36;
                *(unsigned int *)(iVar21 + (int)puVar16 + (int)puVar36) = uVar3;
                if (uVar3 != 0) {
                  uStack_140 = 1;
                }
                if ((iVar24 < 3) &&
                   (uVar2 = *(unsigned int *)(iVar21 + (int)puVar15 + (int)puVar36) & uVar2,
                   *(unsigned int *)(iVar21 + (int)puVar15 + (int)puVar36) = uVar2, uVar2 != 0)) {
                  uStack_13c = 1;
                }
                if ((iVar24 < 2) &&
                   (uVar22 = *(unsigned int *)(iVar21 + (int)puVar14 + (int)puVar36) & uVar22,
                   *(unsigned int *)(iVar21 + (int)puVar14 + (int)puVar36) = uVar22, uVar22 != 0)) {
                  uStack_138 = 1;
                }
                puVar36 = puVar36 + 1;
                uVar28 = uVar28 - 1;
              } while (uVar28 != 0);
              if (((uStack_140 == 0) && (uStack_13c == 0)) && (uStack_138 == 0)) goto LAB_82bb0b08;
              iVar17 = iVar17 + 1;
              iVar23 = iVar23 + 8;
            } while (iVar17 < iVar24);
          }
          puVar30 = puVar16;
          if (((uStack_140 == 0) && (puVar30 = puVar15, uStack_13c == 0)) &&
             (puVar30 = puVar14, uStack_138 == 0)) {
LAB_82bb0b08:
            if (iVar24 == 3) {
              if ((uVar37 & 0xffffffff) < (unsigned __int64)(unsigned int)puVar46[1]) {
                piVar18 = (int *)(puVar46[2] + iVar8);
              }
              else {
                piVar18 = (int *)fn_82BC0088(puVar46,uVar37);
              }
              iVar23 = fn_82BB01C8(puVar34,*(unsigned __int64 *)(*piVar18 + 0x380));
              iVar23 = puVar6[iVar23];
              if ((uVar37 & 0xffffffff) < (unsigned __int64)(unsigned int)puVar46[1]) {
                piVar18 = (int *)(puVar46[2] + iVar8);
              }
              else {
                piVar18 = (int *)fn_82BC0088(puVar46,uVar37);
              }
              iVar19 = fn_82BB01C8(puVar34,*(unsigned __int64 *)(*piVar18 + 0x388));
              puVar36 = (unsigned int *)puVar6[iVar19];
              if ((uVar37 & 0xffffffff) < (unsigned __int64)(unsigned int)puVar46[1]) {
                piVar18 = (int *)(puVar46[2] + iVar8);
              }
              else {
                piVar18 = (int *)fn_82BC0088(puVar46,uVar37);
              }
              iVar19 = fn_82BB01C8(puVar34,*(unsigned __int64 *)(*piVar18 + 0x390));
              uStack_140 = 0;
              uStack_13c = 0;
              lVar35 = 0;
              uVar28 = 0;
              uStack_138 = 0;
              if (iVar42 != 0) {
                iVar23 = iVar23 - (int)puVar36;
                iVar19 = puVar6[iVar19] - (int)puVar36;
                do {
                  uVar22 = *(unsigned int *)(iVar23 + (int)puVar36);
                  uVar2 = *(unsigned int *)(iVar19 + (int)puVar36);
                  uStack_140 = *puVar36 & uVar22;
                  uStack_13c = uVar2 & uVar22;
                  uStack_138 = uVar2 & *puVar36;
                  if (uStack_140 != 0) {
                    lVar35 = 0;
                    break;
                  }
                  if (uStack_13c != 0) {
                    lVar35 = 1;
                    break;
                  }
                  if (uStack_138 != 0) {
                    lVar35 = 2;
                    break;
                  }
                  uVar28 = uVar28 + 1;
                  puVar36 = puVar36 + 1;
                } while ((int)uVar28 < iVar42);
              }
              if ((int)uVar28 != iVar42) {
                lVar38 = fn_82BAF310(lVar35 * 4 + (uVar4 - 0x140),1);
                uVar28 = lVar38 + (uVar28 & 0x7ffffff) * 0x20;
                if ((uVar37 & 0xffffffff) < (unsigned __int64)(unsigned int)puVar46[1]) {
                  piVar18 = (int *)(puVar46[2] + iVar8);
                }
                else {
                  piVar18 = (int *)fn_82BC0088(puVar46,uVar37);
                }
                uVar22 = (unsigned int)uVar28;
                if ((uVar28 & 0xffffffff) < (unsigned __int64)(unsigned int)puVar46[1]) {
                  piVar25 = (int *)(uVar22 * 4 + puVar46[2]);
                }
                else {
                  piVar25 = (int *)fn_82BC0088(puVar46,uVar28);
                }
                iVar24 = *piVar25;
                puVar30 = (unsigned int *)((int)((0x72U - lVar35 & 0xffffffff) << 3) + *piVar18);
                *(unsigned int *)(iVar24 + 0x398) = *puVar30;
                *(unsigned int *)(iVar24 + 0x39c) = puVar30[1];
                if ((uVar28 & 0xffffffff) < (unsigned __int64)(unsigned int)puVar46[1]) {
                  piVar18 = (int *)(uVar22 * 4 + puVar46[2]);
                }
                else {
                  piVar18 = (int *)fn_82BC0088(puVar46,uVar28);
                }
                iVar24 = (int)((uVar28 & 0xffffffff) << 2);
                *(unsigned int *)(*piVar18 + 0x3ac) = 1;
                uVar2 = 1 << (uVar22 + (((int)uVar22 >> 5) +
                                       (unsigned int)((int)uVar22 < 0 && (uVar28 & 0x1f) != 0)) * -0x20 &
                             0x3f);
                iVar19 = 0;
                iVar23 = (((int)uVar22 >> 5) + (unsigned int)((int)uVar22 < 0 && (uVar28 & 0x1f) != 0)) * 4;
                *(int *)(iVar24 + uVar11) = *(int *)(iVar24 + uVar11) + -1;
                puVar10[uVar43] = uVar22;
                do {
                  if ((uVar37 & 0xffffffff) < (unsigned __int64)(unsigned int)puVar46[1]) {
                    piVar18 = (int *)(puVar46[2] + iVar8);
                  }
                  else {
                    piVar18 = (int *)fn_82BC0088(puVar46,uVar37);
                  }
                  iVar20 = fn_82BB01C8(puVar34,*(unsigned __int64 *)(*piVar18 + (iVar17 + 0x70) * 8));
                  iVar24 = puVar5[iVar20];
                  if (iVar19 != 3) {
                    *(unsigned int *)(iVar23 + puVar6[iVar20]) = *(unsigned int *)(iVar23 + puVar6[iVar20]) & ~uVar2
                    ;
                  }
                  iVar19 = iVar19 + 1;
                  *(unsigned int *)(iVar23 + iVar24) = uVar2 | *(unsigned int *)(iVar23 + iVar24);
                } while (iVar19 < 4);
                goto LAB_82bb12ac;
              }
            }
            else if (iVar24 == 2) {
              if ((uVar37 & 0xffffffff) < (unsigned __int64)(unsigned int)puVar46[1]) {
                piVar18 = (int *)(puVar46[2] + iVar8);
              }
              else {
                piVar18 = (int *)fn_82BC0088(puVar46,uVar37);
              }
              iVar17 = fn_82BB01C8(puVar34,*(unsigned __int64 *)(*piVar18 + 0x380));
              iVar17 = puVar6[iVar17];
              if ((uVar37 & 0xffffffff) < (unsigned __int64)(unsigned int)puVar46[1]) {
                piVar18 = (int *)(puVar46[2] + iVar8);
              }
              else {
                piVar18 = (int *)fn_82BC0088(puVar46,uVar37);
              }
              iVar23 = fn_82BB01C8(puVar34,*(unsigned __int64 *)(*piVar18 + 0x388));
              puVar36 = (unsigned int *)puVar6[iVar23];
              if ((uVar37 & 0xffffffff) < (unsigned __int64)(unsigned int)puVar46[1]) {
                piVar18 = (int *)(puVar46[2] + iVar8);
              }
              else {
                piVar18 = (int *)fn_82BC0088(puVar46,uVar37);
              }
              iVar23 = fn_82BB01C8(puVar34,*(unsigned __int64 *)(*piVar18 + 0x380));
              iVar23 = puVar7[iVar23];
              if ((uVar37 & 0xffffffff) < (unsigned __int64)(unsigned int)puVar46[1]) {
                piVar18 = (int *)(puVar46[2] + iVar8);
              }
              else {
                piVar18 = (int *)fn_82BC0088(puVar46,uVar37);
              }
              iVar19 = fn_82BB01C8(puVar34,*(unsigned __int64 *)(*piVar18 + 0x388));
              lVar35 = 0;
              uVar28 = 0;
              uStack_140 = 0;
              uStack_13c = 0;
              uStack_138 = 0;
              if (iVar42 != 0) {
                iVar17 = iVar17 - (int)puVar36;
                iVar23 = iVar23 - (int)puVar36;
                iVar19 = puVar7[iVar19] - (int)puVar36;
                do {
                  uStack_140 = *(unsigned int *)(iVar17 + (int)puVar36);
                  uStack_13c = *puVar36;
                  uStack_138 = *(unsigned int *)(iVar23 + (int)puVar36);
                  if (uStack_140 != 0) {
                    lVar35 = 0;
                    break;
                  }
                  if (uStack_13c != 0) {
                    lVar35 = 1;
                    break;
                  }
                  if (uStack_138 != 0) {
                    lVar35 = 2;
                    break;
                  }
                  if (*(int *)(iVar19 + (int)puVar36) != 0) {
                    lVar35 = 3;
                    break;
                  }
                  uVar28 = uVar28 + 1;
                  puVar36 = puVar36 + 1;
                } while ((int)uVar28 < iVar42);
              }
              if ((int)uVar28 != iVar42) {
                lVar38 = fn_82BAF310(lVar35 * 4 + (uVar4 - 0x140),1);
                uVar28 = lVar38 + (uVar28 & 0x7ffffff) * 0x20;
                uVar22 = (unsigned int)uVar28;
                if ((unsigned int)lVar35 < 2) {
                  if ((uVar37 & 0xffffffff) < (unsigned __int64)(unsigned int)puVar46[1]) {
                    piVar18 = (int *)(puVar46[2] + iVar8);
                  }
                  else {
                    piVar18 = (int *)fn_82BC0088(puVar46,uVar37);
                  }
                  if ((uVar28 & 0xffffffff) < (unsigned __int64)(unsigned int)puVar46[1]) {
                    piVar25 = (int *)(uVar22 * 4 + puVar46[2]);
                  }
                  else {
                    piVar25 = (int *)fn_82BC0088(puVar46,uVar28);
                  }
                  iVar24 = *piVar25;
                  puVar30 = (unsigned int *)((int)((0x71U - lVar35 & 0xffffffff) << 3) + *piVar18);
                  *(unsigned int *)(iVar24 + 0x398) = *puVar30;
                  *(unsigned int *)(iVar24 + 0x39c) = puVar30[1];
                  if ((uVar28 & 0xffffffff) < (unsigned __int64)(unsigned int)puVar46[1]) {
                    piVar18 = (int *)(uVar22 * 4 + puVar46[2]);
                  }
                  else {
                    piVar18 = (int *)fn_82BC0088(puVar46,uVar28);
                  }
                  *(unsigned int *)(*piVar18 + 0x3ac) = 1;
                }
                else {
                  if ((uVar37 & 0xffffffff) < (unsigned __int64)(unsigned int)puVar46[1]) {
                    piVar18 = (int *)(puVar46[2] + iVar8);
                  }
                  else {
                    piVar18 = (int *)fn_82BC0088(puVar46,uVar37);
                  }
                  if ((uVar28 & 0xffffffff) < (unsigned __int64)(unsigned int)puVar46[1]) {
                    piVar25 = (int *)(uVar22 * 4 + puVar46[2]);
                  }
                  else {
                    piVar25 = (int *)fn_82BC0088(puVar46,uVar28);
                  }
                  iVar24 = *piVar25;
                  puVar30 = (unsigned int *)((int)((0x73U - lVar35 & 0xffffffff) << 3) + *piVar18);
                  *(unsigned int *)(iVar24 + 0x390) = *puVar30;
                  *(unsigned int *)(iVar24 + 0x394) = puVar30[1];
                  if ((uVar28 & 0xffffffff) < (unsigned __int64)(unsigned int)puVar46[1]) {
                    piVar18 = (int *)(uVar22 * 4 + puVar46[2]);
                  }
                  else {
                    piVar18 = (int *)fn_82BC0088(puVar46,uVar28);
                  }
                  *(unsigned int *)(*piVar18 + 0x3a8) = 1;
                }
                iVar24 = (int)((uVar28 & 0xffffffff) << 2);
                iVar23 = 0x380;
                iVar17 = 0x3a0;
                *(int *)(iVar24 + uVar11) = *(int *)(iVar24 + uVar11) + -1;
                puVar10[uVar43] = uVar22;
                do {
                  if ((uVar37 & 0xffffffff) < (unsigned __int64)(unsigned int)puVar46[1]) {
                    piVar18 = (int *)(puVar46[2] + iVar8);
                  }
                  else {
                    piVar18 = (int *)fn_82BC0088(puVar46,uVar37);
                  }
                  if (*(int *)(*piVar18 + iVar17) == 0) break;
                  if ((uVar37 & 0xffffffff) < (unsigned __int64)(unsigned int)puVar46[1]) {
                    piVar18 = (int *)(puVar46[2] + iVar8);
                  }
                  else {
                    piVar18 = (int *)fn_82BC0088(puVar46,uVar37);
                  }
                  iVar24 = fn_82BB01C8(puVar34,*(unsigned __int64 *)(*piVar18 + iVar23));
                  puVar30 = puVar5;
                  puVar1 = puVar6;
                  if (1 < (unsigned int)lVar35) {
                    puVar30 = puVar6;
                    puVar1 = puVar7;
                  }
                  iVar20 = (((int)uVar22 >> 5) + (unsigned int)((int)uVar22 < 0 && (uVar28 & 0x1f) != 0)) *
                           4;
                  iVar19 = puVar30[iVar24];
                  iVar17 = iVar17 + 4;
                  uVar43 = 1 << (uVar22 + (((int)uVar22 >> 5) +
                                          (unsigned int)((int)uVar22 < 0 && (uVar28 & 0x1f) != 0)) * -0x20 &
                                0x3f);
                  iVar23 = iVar23 + 8;
                  *(unsigned int *)(puVar1[iVar24] + iVar20) = *(unsigned int *)(puVar1[iVar24] + iVar20) & ~uVar43;
                  *(unsigned int *)(iVar19 + iVar20) = *(unsigned int *)(iVar19 + iVar20) | uVar43;
                } while (iVar17 < 0x3b0);
                goto LAB_82bb12ac;
              }
            }
            puVar10[uVar43] = uVar43;
            if (0 < iVar24) {
              uVar22 = (unsigned int)((uVar37 & 0xffffffff) >> 3) & 0x1ffffffc;
              iVar17 = aiStack_124[iVar24];
              iVar23 = 0x380;
              do {
                if ((uVar37 & 0xffffffff) < (unsigned __int64)(unsigned int)puVar46[1]) {
                  piVar18 = (int *)(puVar46[2] + iVar8);
                }
                else {
                  piVar18 = (int *)fn_82BC0088(puVar46,uVar37);
                }
                iVar19 = fn_82BB01C8(puVar34,*(unsigned __int64 *)(*piVar18 + iVar23));
                iVar24 = iVar24 + -1;
                iVar23 = iVar23 + 8;
                iVar19 = *(int *)(iVar19 * 4 + iVar17);
                *(unsigned int *)(uVar22 + iVar19) = 1 << (uVar43 & 0x1f) | *(unsigned int *)(uVar22 + iVar19);
              } while (iVar24 != 0);
            }
          }
          else {
            uVar22 = fn_82BAF310(puVar30,uVar39);
            puVar10[uVar43] = uVar22;
          }
LAB_82bb12ac:
          uVar28 = (unsigned __int64)(unsigned int)puVar46[1];
          uVar37 = uVar37 + 1;
        } while ((uVar37 & 0xffffffff) < uVar28);
      }
      if ((uVar47 & 0xffffffff) < uVar28) {
        lVar35 = (uVar47 & 0x3fffffff) * 4 + (unsigned __int64)uVar11;
        uVar39 = uVar47;
        do {
          puVar36 = (unsigned int *)lVar35;
          uVar43 = *puVar36;
          if ((0 < (int)uVar43) &&
             ((unsigned __int64)*(unsigned int *)(((int)puVar10 - uVar11) + (int)puVar36) == (uVar39 & 0xffffffff))
             ) {
            uVar37 = uVar32;
            if ((uVar43 != 1) && (uVar37 = uVar33, uVar43 != 2)) {
              uVar37 = uVar47;
            }
            if ((uVar37 & 0xffffffff) < uVar28) {
              iVar8 = (int)uVar39 * 4;
              lVar38 = (uVar37 & 0x3fffffff) * 4 + (unsigned __int64)uVar9;
              do {
                if ((((uVar39 & 0xffffffff) < (uVar37 & 0xffffffff)) &&
                    (piVar18 = (int *)lVar38,
                    (unsigned __int64)*(unsigned int *)(((int)puVar10 - uVar9) + (int)piVar18) ==
                    (uVar37 & 0xffffffff))) && (*piVar18 <= (int)*puVar36)) {
                  *(int *)(((int)puVar10 - uVar9) + (int)piVar18) = (int)uVar39;
                  lVar41 = -(unsigned __int64)*puVar36;
                  if ((int)lVar41 + 4 < 4) {
                    iVar42 = (int)uVar37 * 4;
                    lVar40 = (lVar41 + 0xecU & 0x3fffffff) << 2;
                    iVar24 = 0x3a0;
                    lVar41 = (lVar41 + 0x74U & 0x1fffffff) << 3;
                    iVar17 = 0x380;
                    do {
                      if ((uVar39 & 0xffffffff) < (unsigned __int64)(unsigned int)puVar46[1]) {
                        piVar25 = (int *)(puVar46[2] + iVar8);
                      }
                      else {
                        piVar25 = (int *)fn_82BC0088(puVar46,uVar39);
                      }
                      if (*(int *)((int)lVar40 + *piVar25) == 0) {
                        if ((uVar37 & 0xffffffff) < (unsigned __int64)(unsigned int)puVar46[1]) {
                          piVar25 = (int *)(puVar46[2] + iVar42);
                        }
                        else {
                          piVar25 = (int *)fn_82BC0088(puVar46,uVar37);
                        }
                        if ((uVar39 & 0xffffffff) < (unsigned __int64)(unsigned int)puVar46[1]) {
                          piVar26 = (int *)(puVar46[2] + iVar8);
                        }
                        else {
                          piVar26 = (int *)fn_82BC0088(puVar46,uVar39);
                        }
                        iVar23 = *piVar25;
                        puVar30 = (unsigned int *)((int)lVar41 + *piVar26);
                        *puVar30 = *(unsigned int *)(iVar17 + iVar23);
                        puVar30[1] = ((unsigned int *)(iVar17 + iVar23))[1];
                        if ((uVar37 & 0xffffffff) < (unsigned __int64)(unsigned int)puVar46[1]) {
                          piVar25 = (int *)(puVar46[2] + iVar42);
                        }
                        else {
                          piVar25 = (int *)fn_82BC0088(puVar46,uVar37);
                        }
                        if ((uVar39 & 0xffffffff) < (unsigned __int64)(unsigned int)puVar46[1]) {
                          piVar26 = (int *)(puVar46[2] + iVar8);
                        }
                        else {
                          piVar26 = (int *)fn_82BC0088(puVar46,uVar39);
                        }
                        iVar17 = iVar17 + 8;
                        puVar30 = (unsigned int *)(*piVar25 + iVar24);
                        iVar24 = iVar24 + 4;
                        *(unsigned int *)(*piVar26 + (int)lVar40) = *puVar30;
                      }
                      lVar41 = lVar41 + 8;
                      lVar40 = lVar40 + 4;
                    } while ((int)lVar41 < 0x3a0);
                  }
                  *puVar36 = *puVar36 - *piVar18;
                }
                uVar28 = (unsigned __int64)(unsigned int)puVar46[1];
                uVar37 = uVar37 + 1;
                lVar38 = lVar38 + 4;
              } while ((uVar37 & 0xffffffff) < uVar28);
            }
          }
          uVar39 = uVar39 + 1;
          lVar35 = lVar35 + 4;
        } while ((uVar39 & 0xffffffff) < uVar28);
      }
      uVar39 = 0;
      if (uVar28 != 0) {
        iVar8 = 0;
        if (uVar28 == 0) {
          piVar18 = (int *)fn_82BC0088(puVar46,0);
          goto LAB_82bb152c;
        }
        do {
          piVar18 = (int *)(puVar46[2] + iVar8);
LAB_82bb152c:
          fn_82BA02A8(*param_1,0xffffffff820dfbb0,*(unsigned int *)(*piVar18 + 0xe0),uVar39);
          iVar42 = 0x3a0;
          iVar24 = 0x380;
          do {
            if ((uVar39 & 0xffffffff) < (unsigned __int64)(unsigned int)puVar46[1]) {
              piVar18 = (int *)(puVar46[2] + iVar8);
            }
            else {
              piVar18 = (int *)fn_82BC0088(puVar46,uVar39);
            }
            uVar45 = *(unsigned __int64 *)(iVar24 + *piVar18);
            if ((uVar39 & 0xffffffff) < (unsigned __int64)(unsigned int)puVar46[1]) {
              piVar18 = (int *)(puVar46[2] + iVar8);
            }
            else {
              piVar18 = (int *)fn_82BC0088(puVar46,uVar39);
            }
            if (*(int *)(iVar42 + *piVar18) == 0) break;
            fn_82BAF378(uVar45,uVar4 - 0x110);
            fn_82BA02A8(*param_1,0xffffffff820dfbbc,uVar4 - 0x110);
            iVar24 = iVar24 + 8;
            iVar42 = iVar42 + 4;
          } while (iVar24 < 0x3a0);
          if ((unsigned __int64)*(unsigned int *)(iVar8 + (int)puVar10) == (uVar39 & 0xffffffff)) {
            fn_82BA02A8(*param_1,0xffffffff821cc86c);
            if ((uVar39 & 0xffffffff) < (unsigned __int64)(unsigned int)puVar46[1]) {
              piVar18 = (int *)(puVar46[2] + iVar8);
            }
            else {
              piVar18 = (int *)fn_82BC0088(puVar46,uVar39);
            }
            iVar42 = *piVar18;
            uVar12 = fn_82BAF4A8(param_1);
            *(unsigned int *)(iVar42 + 0x38) = uVar12;
            lVar35 = 0;
            *(unsigned int *)(iVar42 + 0x50) = 0xb;
            puVar44 = (unsigned __int64 *)(iVar42 + 0x380);
            piVar18 = (int *)(iVar42 + 0x3a0);
            do {
              if (*piVar18 == 0) break;
              fn_82B7C5A8(*param_1,*(unsigned int *)(iVar42 + 0x38),lVar35,*puVar44);
              lVar35 = lVar35 + 1;
              piVar18 = piVar18 + 1;
              puVar44 = puVar44 + 1;
            } while ((int)lVar35 < 4);
          }
          else {
            fn_82BA02A8(*param_1,0xffffffff820dfbc4);
            if (*(unsigned int *)(iVar8 + (int)puVar10) < (unsigned int)puVar46[1]) {
              piVar18 = (int *)(*(unsigned int *)(iVar8 + (int)puVar10) * 4 + puVar46[2]);
            }
            else {
              piVar18 = (int *)fn_82BC0088(puVar46);
            }
            iVar42 = *piVar18;
            if ((uVar39 & 0xffffffff) < (unsigned __int64)(unsigned int)puVar46[1]) {
              piVar18 = (int *)(puVar46[2] + iVar8);
            }
            else {
              piVar18 = (int *)fn_82BC0088(puVar46,uVar39);
            }
            iVar24 = *piVar18;
            iVar17 = 0;
            piVar18 = (int *)(iVar24 + 0x380);
            piVar25 = (int *)(iVar24 + 0x3a0);
            do {
              if (*piVar25 == 0) break;
              iVar23 = 0;
              *piVar25 = 0;
              piVar31 = (int *)(iVar42 + 0x380);
              piVar26 = (int *)(iVar42 + 0x3a0);
              do {
                if (*piVar26 == 0) break;
                if ((*piVar31 != *piVar18) || (bVar29 = true, piVar31[1] != piVar18[1])) {
                  bVar29 = false;
                }
                if (bVar29) {
                  *(char *)(iVar24 + iVar17 + 0x3b0) = (char)iVar23;
                  break;
                }
                iVar23 = iVar23 + 1;
                piVar26 = piVar26 + 1;
                piVar31 = piVar31 + 2;
              } while (iVar23 < 4);
              uVar12 = *(unsigned int *)(iVar42 + 0x38);
              *(unsigned int *)(iVar24 + 0x50) = 0xb;
              *(unsigned int *)(iVar24 + 0x38) = uVar12;
              fn_82BA02A8(*param_1,0xffffffff820dfbe4,*(unsigned char *)(iVar24 + iVar17 + 0x3b0));
              iVar17 = iVar17 + 1;
              piVar25 = piVar25 + 1;
              piVar18 = piVar18 + 2;
            } while (iVar17 < 4);
            fn_82BA02A8(*param_1,0xffffffff821cc86c);
          }
          uVar39 = uVar39 + 1;
          iVar8 = iVar8 + 4;
        } while ((uVar39 & 0xffffffff) < (unsigned __int64)(unsigned int)puVar46[1]);
      }
      fn_82B7BEB0(*(unsigned int *)(*param_1 + 0x5b0),puVar16);
      fn_82B7BEB0(*(unsigned int *)(*param_1 + 0x5b0),puVar15);
      fn_82B7BEB0(*(unsigned int *)(*param_1 + 0x5b0),puVar14);
      fn_82B7BEB0(*(unsigned int *)(*param_1 + 0x5b0),iVar13);
      uVar43 = 0;
      if (puVar34[1] != 0) {
        iVar8 = aiStack_124[0] - (int)puVar7;
        puVar46 = puVar7;
        do {
          fn_82B7BEB0(*(unsigned int *)(*param_1 + 0x5b0),*(unsigned int *)(iVar8 + (int)puVar46))
          ;
          fn_82B7BEB0(*(unsigned int *)(*param_1 + 0x5b0),*puVar46);
          fn_82B7BEB0(*(unsigned int *)(*param_1 + 0x5b0),
                            *(unsigned int *)(((int)puVar6 - (int)puVar7) + (int)puVar46));
          fn_82B7BEB0(*(unsigned int *)(*param_1 + 0x5b0),
                            *(unsigned int *)(((int)puVar5 - (int)puVar7) + (int)puVar46));
          uVar43 = uVar43 + 1;
          puVar46 = puVar46 + 1;
        } while (uVar43 < (unsigned int)puVar34[1]);
      }
      fn_82B7BEB0(*(unsigned int *)(*param_1 + 0x5b0),uVar11);
      fn_82B7BEB0(*(unsigned int *)(*param_1 + 0x5b0),puVar10);
      fn_82B7BEB0(*(unsigned int *)(*param_1 + 0x5b0),uVar9);
      fn_82B7BEB0(*(unsigned int *)(*param_1 + 0x5b0),aiStack_124[0]);
      fn_82B7BEB0(*(unsigned int *)(*param_1 + 0x5b0),puVar7);
      fn_82B7BEB0(*(unsigned int *)(*param_1 + 0x5b0),puVar6);
      fn_82B7BEB0(*(unsigned int *)(*param_1 + 0x5b0),puVar5);
    }
  }
  return;
}

