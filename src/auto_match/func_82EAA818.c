typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_1c0;
extern unsigned int *auStack_270;
extern unsigned int *auStack_340;
extern unsigned int *auStack_410;
extern int fn_82E9AB00();
extern int fn_82E9AC18();
extern int fn_82E9B140();
extern int fn_82EA44A8();
extern int fn_82EFE140();
extern unsigned int iStack00000034;
extern unsigned int iStack0000003c;
extern unsigned int iStack_450;
extern unsigned int iStack_48c;
extern unsigned int lbl_831898B8;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack00000044;
extern unsigned int uStack0000004c;
extern unsigned int uStack_434;
extern unsigned int uStack_438;
extern unsigned int uStack_43c;
extern unsigned int uStack_444;
extern unsigned int uStack_460;
extern unsigned int uStack_46c;
extern unsigned int uStack_474;
extern unsigned int uStack_47c;
extern unsigned int uStack_480;
extern unsigned int uStack_484;
extern unsigned int uStack_488;
extern unsigned int uStack_490;
extern unsigned int uStack_494;
extern unsigned int *uStack_4a0;


/* WARNING: Removing unreachable block (ram,0x82eab104) */
/* WARNING: Removing unreachable block (ram,0x82eac0c4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82EAA818(int param_1,unsigned int param_2,unsigned int param_3,int param_4,int param_5,int param_6,
                  unsigned __int64 param_7,unsigned __int64 param_8)

{
  int (**pcVar1)();
  int (**pcVar2)();
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int *puVar6;
  unsigned char *puVar7;
  unsigned char *puVar8;
  int iVar10;
  __int64 lVar9;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  __int64 lVar18;
  unsigned int uVar19;
  unsigned int uVar22;
  unsigned __int64 uVar20;
  unsigned __int64 uVar21;
  unsigned __int64 uVar23;
  unsigned __int64 uVar24;
  unsigned __int64 uVar25;
  unsigned __int64 uVar26;
  int *piVar28;
  __int64 lVar27;
  int iVar29;
  unsigned int uVar30;
  unsigned int uVar32;
  __int64 lVar31;
  __int64 lVar33;
  unsigned __int64 uVar34;
  __int64 lVar35;
  __int64 lVar36;
  __int64 lVar37;
  __int64 lVar38;
  unsigned int uVar39;
  int iVar40;
  unsigned __int64 uVar41;
  unsigned int uVar42;
  unsigned int uVar43;
  unsigned __int64 uVar44;
  unsigned int uVar45;
  bool bVar46;
  bool bVar47;
  bool bVar48;
  bool bVar49;
  unsigned int uStack0000001c;
  unsigned int uStack00000024;
  int iStack00000034;
  int iStack0000003c;
  unsigned int uStack00000044;
  unsigned int uStack0000004c;
  unsigned int in_stack_00000054;
  unsigned int in_stack_0000005c;
  unsigned int in_stack_00000064;
  unsigned int in_stack_0000006c;
  unsigned int in_stack_00000074;
  unsigned int in_stack_0000007c;
  int in_stack_00000084;
  unsigned int in_stack_0000008c;
  int in_stack_00000094;
  int in_stack_0000009c;
  int in_stack_000000a4;
  unsigned int in_stack_000000ac;
  int *in_stack_000000b4;
  int *in_stack_000000bc;
  int *in_stack_000000c4;
  unsigned int uStack_4a0;
  unsigned char *puStack_49c;
  unsigned char *puStack_498;
  unsigned int uStack_494;
  unsigned int uStack_490;
  int iStack_48c;
  unsigned int uStack_488;
  unsigned int uStack_484;
  unsigned int uStack_480;
  unsigned int uStack_47c;
  unsigned int uStack_474;
  unsigned int uStack_46c;
  unsigned int *puStack_464;
  unsigned int uStack_460;
  unsigned char *puStack_45c;
  int iStack_450;
  unsigned int uStack_444;
  unsigned int uStack_43c;
  unsigned int uStack_438;
  unsigned int uStack_434;
  unsigned char auStack_410 [208];
  unsigned char auStack_340 [208];
  unsigned char auStack_270 [176];
  unsigned char auStack_1c0 [368];
  unsigned int uVar5;
  
  iVar13 = (*(int *)(param_1 + 0x2d4) * param_6 + param_5) * 0x114 + *(int *)(param_1 + 0x1e54);
  if ((*(unsigned int *)(param_1 + 0x6db8) & 1) == 0) {
    uVar22 = in_stack_000000ac;
    if ((*(unsigned int *)(param_1 + 0x6db8) & 4) == 0) {
      uVar22 = 0;
    }
  }
  else {
    uVar22 = 1;
  }
  uStack0000001c = param_2;
  uStack00000024 = param_3;
  iStack00000034 = param_5;
  iStack0000003c = param_6;
  uStack00000044 = (unsigned int)param_7;
  uStack0000004c = (unsigned int)param_8;
  iVar10 = fn_82EFE140(param_1,in_stack_000000a4,uVar22);
  pcVar1 = *(int (***)())(in_stack_000000a4 + 8);
  iVar29 = 0;
  pcVar2 = *(int (***)())(in_stack_000000a4 + 0xc);
  iVar11 = ((int)(unsigned int)param_7 >> 2) + 2 >> 2;
  iVar12 = ((int)(unsigned int)param_8 >> 2) + 2 >> 2;
  uVar4 = (int)in_stack_00000054 >> 2;
  uVar5 = (int)in_stack_0000005c >> 2;
  if (in_stack_00000084 != 0) {
    iVar15 = (int)(uVar4 + 2) >> 2;
    iVar16 = (int)(uVar5 + 2) >> 2;
    if (0 < in_stack_00000094) {
      piVar28 = (int *)(param_4 + 0x100);
      do {
        if ((iVar15 == piVar28[-0x20]) && (iVar16 == *piVar28)) break;
        iVar29 = iVar29 + 1;
        piVar28 = piVar28 + 1;
      } while (iVar29 < in_stack_00000094);
    }
    if (iVar29 == in_stack_00000094) {
      in_stack_00000094 = in_stack_00000094 + 1;
      *(int *)((iVar29 + 0x20) * 4 + param_4) = iVar15;
      *(int *)((iVar29 + 0x40) * 4 + param_4) = iVar16;
    }
  }
  iVar29 = 0;
  if (0 < in_stack_00000094) {
    piVar28 = (int *)(param_4 + 0x100);
    do {
      if ((iVar11 == piVar28[-0x20]) && (iVar12 == *piVar28)) break;
      iVar29 = iVar29 + 1;
      piVar28 = piVar28 + 1;
    } while (iVar29 < in_stack_00000094);
  }
  if (iVar29 == in_stack_00000094) {
    in_stack_00000094 = in_stack_00000094 + 1;
    *(int *)((iVar29 + 0x20) * 4 + param_4) = iVar11;
    *(int *)((iVar29 + 0x40) * 4 + param_4) = iVar12;
  }
  lVar36 = 0xfffffff;
  puStack_498 = auStack_410;
  puStack_45c = auStack_270;
  iStack_48c = 0xfffffff;
  puStack_49c = auStack_340;
  uStack_460 = 0;
  if (0 < in_stack_00000094) {
    puStack_464 = (unsigned int *)(param_4 + 0x80);
    uVar34 = (unsigned __int64)uStack_444;
    lVar31 = lVar36;
    uVar30 = uStack_444;
    do {
      puVar8 = puStack_45c;
      puVar7 = puStack_498;
      uVar22 = uStack0000001c;
      bVar46 = true;
      uVar23 = (unsigned __int64)uStack_460;
      uStack_490 = -in_stack_0000008c;
      uVar39 = puStack_464[0x20];
      uVar43 = *puStack_464;
      uVar45 = uVar39 * 4;
      lVar18 = ((unsigned __int64)uVar43 & 0x3fffffff) * 4;
      uVar19 = (unsigned int)lVar18;
      uStack_494 = in_stack_0000008c;
      lVar33 = (__int64)*(int *)(param_1 + 0x564) * (__int64)(int)uVar45 + lVar18 +
               (unsigned __int64)uStack00000024;
      uVar32 = in_stack_0000008c;
      uStack_4a0 = uStack_490;
      if ((1 < (int)in_stack_0000008c) && (puVar6 = puStack_464, uStack_460 != 0)) {
        do {
          if (!bVar46) break;
          uVar42 = puVar6[-1];
          if (uVar42 == uVar43) {
            if (puVar6[0x1f] == uVar39 - 1) {
              uStack_490 = uStack_490 + 1;
              bVar46 = false;
            }
            if (puVar6[0x1f] == uVar39 + 1) {
              uStack_494 = uStack_494 - 1;
LAB_82eaab04:
              bVar46 = false;
            }
          }
          else if (puVar6[0x1f] == uVar39) {
            if (uVar42 == uVar43 - 1) {
              uStack_4a0 = uStack_4a0 + 1;
              bVar46 = false;
            }
            if (uVar42 == uVar43 + 1) {
              uVar32 = uVar32 - 1;
              goto LAB_82eaab04;
            }
          }
          uVar23 = uVar23 - 1;
          puVar6 = puVar6 + -1;
        } while (uVar23 != 0);
      }
      if ((int)(uStack_4a0 + uVar19) < (int)in_stack_00000064) {
        uStack_4a0 = in_stack_00000064 - uVar19;
      }
      if ((int)in_stack_0000006c < (int)(uVar32 + uVar19)) {
        uVar32 = in_stack_0000006c - uVar19;
      }
      if ((int)(uStack_490 + uVar45) < (int)in_stack_00000074) {
        uStack_490 = in_stack_00000074 + uVar39 * -4;
      }
      if ((int)in_stack_0000007c < (int)(uStack_494 + uVar45)) {
        uStack_494 = in_stack_0000007c + uVar39 * -4;
      }
      if (in_stack_00000084 == 0) {
        if ((int)uStack_490 <= (int)uStack_494) {
          iVar11 = 0;
          uVar43 = (uStack_490 + uVar45) * 4 - uStack0000004c;
          uVar39 = uStack_490;
          do {
            uVar23 = (unsigned __int64)uStack_4a0;
            iVar12 = 0;
            if ((int)uStack_4a0 <= (int)uVar32) {
              iVar29 = (uVar43 ^ (int)uVar43 >> 0x1f) - ((int)uVar43 >> 0x1f);
              uVar42 = (uStack_4a0 + uVar19) * 4 - uStack00000044;
              do {
                lVar18 = (*pcVar1)(uVar22,0x10,
                                   (__int64)*(int *)(param_1 + 0x564) * (__int64)(int)uVar39 +
                                   uVar23 + lVar33,*(int *)(param_1 + 0x564),lVar36);
                iVar15 = (uVar42 ^ (int)uVar42 >> 0x1f) - ((int)uVar42 >> 0x1f);
                if ((iVar15 < 0x9f) && (iVar29 < 0x9f)) {
                  lVar37 = (unsigned __int64)
                           *(unsigned int *)(*(int *)(&lbl_831898B8 + iVar29 * 4) * 4 + in_stack_0000009c) +
                           (unsigned __int64)
                           *(unsigned int *)(*(int *)(&lbl_831898B8 + iVar15 * 4) * 4 + in_stack_0000009c);
                }
                else {
                  lVar37 = ((unsigned __int64)*(unsigned int *)(in_stack_0000009c + 0x14) & 0x7fffffff) << 1;
                }
                iVar15 = (int)(lVar37 + lVar18);
                if (iVar15 < (int)lVar31) {
                  lVar36 = lVar31 + 1;
                  uVar34 = uVar23;
                  lVar31 = lVar37 + lVar18;
                  uVar30 = uVar39;
                }
                iVar16 = iVar11 + iVar12;
                uVar23 = uVar23 + 1;
                uVar42 = uVar42 + 4;
                iVar12 = iVar12 + 1;
                *(int *)(puStack_498 + iVar16 * 4) = iVar15;
              } while ((int)uVar23 <= (int)uVar32);
            }
            uVar39 = uVar39 + 1;
            uVar43 = uVar43 + 4;
            iVar11 = iVar11 + 7;
          } while ((int)uVar39 <= (int)uStack_494);
        }
      }
      else if ((int)uStack_490 <= (int)uStack_494) {
        iVar11 = 0;
        lVar37 = ((unsigned __int64)uStack_490 + (unsigned __int64)uVar45 & 0x3fffffff) * 4;
        uVar23 = lVar37 - (unsigned __int64)in_stack_0000005c;
        uVar39 = uStack_490;
        do {
          uVar44 = (unsigned __int64)uStack_4a0;
          iVar12 = 0;
          if ((int)uStack_4a0 <= (int)uVar32) {
            uVar26 = (unsigned __int64)((int)uVar23 >> 0x1f);
            uVar20 = (unsigned __int64)uStack00000044;
            uVar26 = (uVar23 ^ uVar26) - uVar26;
            uVar41 = ((unsigned __int64)uStack_4a0 + lVar18 & 0x3fffffff) * 4 -
                     (unsigned __int64)in_stack_00000054;
            do {
              lVar9 = (*pcVar1)(uStack0000001c,0x10,
                                (__int64)*(int *)(param_1 + 0x564) * (__int64)(int)uVar39 + uVar44
                                + lVar33,*(int *)(param_1 + 0x564),lVar36);
              uVar25 = (in_stack_00000054 - uVar20) + uVar41;
              uVar24 = (unsigned __int64)((int)uVar25 >> 0x1f);
              uVar21 = (unsigned __int64)((int)(lVar37 - (unsigned __int64)uStack0000004c) >> 0x1f);
              uVar24 = (uVar25 ^ uVar24) - uVar24;
              uVar21 = (lVar37 - (unsigned __int64)uStack0000004c ^ uVar21) - uVar21;
              if (((int)uVar24 < 0x9f) && ((int)uVar21 < 0x9f)) {
                lVar27 = (unsigned __int64)
                         *(unsigned int *)(*(int *)(&lbl_831898B8 + (int)((uVar21 & 0xffffffff) << 2)) * 4 +
                                  in_stack_0000009c) +
                         (unsigned __int64)
                         *(unsigned int *)(*(int *)(&lbl_831898B8 + (int)((uVar24 & 0xffffffff) << 2)) * 4 +
                                  in_stack_0000009c);
              }
              else {
                lVar27 = ((unsigned __int64)*(unsigned int *)(in_stack_0000009c + 0x14) & 0x7fffffff) << 1;
              }
              iVar29 = (int)(lVar27 + lVar9);
              if (iVar29 < (int)lVar31) {
                lVar36 = lVar31 + 1;
                iStack_450 = 0;
                uVar34 = uVar44;
                lVar31 = lVar27 + lVar9;
                uVar30 = uVar39;
              }
              uVar21 = (unsigned __int64)((int)uVar41 >> 0x1f);
              iVar15 = (iVar11 + iVar12) * 4;
              uVar21 = (uVar41 ^ uVar21) - uVar21;
              *(int *)(puStack_498 + iVar15) = iVar29;
              if (((int)uVar21 < 0x9f) && ((int)uVar26 < 0x9f)) {
                lVar27 = (unsigned __int64)
                         *(unsigned int *)(*(int *)(&lbl_831898B8 + (int)((uVar26 & 0xffffffff) << 2)) * 4 +
                                  in_stack_0000009c) +
                         (unsigned __int64)
                         *(unsigned int *)(*(int *)(&lbl_831898B8 + (int)((uVar21 & 0xffffffff) << 2)) * 4 +
                                  in_stack_0000009c);
              }
              else {
                lVar27 = ((unsigned __int64)*(unsigned int *)(in_stack_0000009c + 0x14) & 0x7fffffff) << 1;
              }
              iVar29 = (int)(lVar27 + lVar9);
              if (iVar29 < (int)lVar31) {
                lVar36 = lVar31 + 1;
                iStack_450 = 1;
                uVar34 = uVar44;
                lVar31 = lVar27 + lVar9;
                uVar30 = uVar39;
              }
              uVar44 = uVar44 + 1;
              uVar41 = uVar41 + 4;
              iVar12 = iVar12 + 1;
              *(int *)(puStack_45c + iVar15) = iVar29;
            } while ((int)uVar44 <= (int)uVar32);
          }
          uVar39 = uVar39 + 1;
          lVar37 = lVar37 + 4;
          uVar23 = uVar23 + 4;
          iVar11 = iVar11 + 7;
        } while ((int)uVar39 <= (int)uStack_494);
      }
      iVar11 = (int)lVar31;
      if (iVar11 < iStack_48c) {
        uStack_474 = (unsigned int)uVar34;
        uStack_438 = uStack_4a0;
        uStack_434 = uStack_490;
        uStack_43c = uStack_494;
        iStack_48c = iVar11;
        uStack_480 = uVar19;
        uStack_47c = uVar30;
        uStack_46c = uVar45;
        uStack_444 = uVar32;
        if ((in_stack_00000084 == 0) || (iStack_450 == 0)) {
          puStack_498 = puStack_49c;
          puStack_49c = puVar7;
        }
        else {
          puStack_45c = puStack_49c;
          puStack_49c = puVar8;
        }
      }
      uStack_460 = uStack_460 + 1;
      puStack_464 = puStack_464 + 1;
    } while ((int)uStack_460 < in_stack_00000094);
    param_8 = (unsigned __int64)uStack0000004c;
    param_7 = (unsigned __int64)uStack00000044;
  }
  uVar44 = (unsigned __int64)uStack_474 + (unsigned __int64)uStack_480;
  uVar20 = (unsigned __int64)uStack_47c + (unsigned __int64)uStack_46c;
  lVar31 = (uVar44 & 0x3fffffff) * 4;
  lVar36 = (uVar20 & 0x3fffffff) * 4;
  uVar34 = param_8;
  uVar23 = param_7;
  if (in_stack_00000084 != 0) {
    uVar23 = (unsigned __int64)*(unsigned int *)(param_1 + 0xa30);
    uVar34 = (unsigned __int64)*(unsigned int *)(param_1 + 0xa2c);
    uVar30 = *(unsigned int *)(param_1 + 0xa38);
    uVar39 = *(unsigned int *)(param_1 + 0xa34);
    iVar11 = fn_82E9B140(param_1,((uVar34 - param_7) + lVar31 & (unsigned __int64)uVar39) - uVar34,
                           ((uVar23 - param_8) + lVar36 & (unsigned __int64)uVar30) - uVar23,1,0);
    iVar12 = fn_82E9B140(param_1,((uVar34 - in_stack_00000054) + lVar31 & (unsigned __int64)uVar39) -
                                   uVar34,
                           ((uVar23 - in_stack_0000005c) + lVar36 & (unsigned __int64)uVar30) - uVar23,1,0)
    ;
    uVar34 = (unsigned __int64)in_stack_0000005c;
    uVar23 = (unsigned __int64)in_stack_00000054;
    if (iVar11 < iVar12) {
      uVar34 = param_8;
      uVar23 = param_7;
    }
  }
  if ((*(unsigned int *)(param_1 + 0x6db8) & 2) == 0) {
    if ((*(unsigned int *)(param_1 + 0x6db8) & 8) == 0) {
      in_stack_000000ac = 0;
    }
  }
  else {
    in_stack_000000ac = 1;
  }
  iVar11 = fn_82EFE140(param_1,in_stack_000000a4,in_stack_000000ac);
  uVar22 = uStack0000001c;
  iVar12 = (int)uVar34;
  iVar29 = (int)uVar23;
  uVar30 = iVar12 >> 2;
  uVar39 = iVar29 >> 2;
  if (iStack_48c == 0xfffffff) {
    uStack_47c = 0;
    uStack_474 = 0;
    (**(int (***)())(param_1 + 0x9b8))
              ((__int64)*(int *)(param_1 + 0x564) * (__int64)(int)uVar30 + (__int64)(int)uVar39 +
               (unsigned __int64)uStack00000024,*(int *)(param_1 + 0x564),auStack_1c0,0x10,uVar23 & 3,
               uVar34 & 3,1,*(unsigned int *)(param_1 + 0x618));
    iVar13 = (*pcVar2)(uStack0000001c,0x10,auStack_1c0,0x10,0x10);
    iStack_48c = *(int *)(lbl_831898B8 * 4 + in_stack_0000009c) +
                 *(int *)(lbl_831898B8 * 4 + in_stack_0000009c) + iVar13;
    uStack_488 = (unsigned int)(uVar23 & 3);
    uStack_484 = (unsigned int)(uVar34 & 3);
    uStack_480 = uVar39;
    uStack_46c = uVar30;
  }
  else {
    uVar26 = (unsigned __int64)*(unsigned int *)(param_1 + 0x564);
    bVar46 = in_stack_00000074 != uVar20;
    bVar47 = in_stack_0000007c != uVar20;
    bVar48 = in_stack_00000064 == uVar44;
    bVar49 = in_stack_0000006c != uVar44;
    uVar44 = (unsigned __int64)uStack_47c - (unsigned __int64)uStack_434;
    lVar18 = (unsigned __int64)uStack_444 - (unsigned __int64)uStack_438;
    lVar33 = (unsigned __int64)uStack_474 - (unsigned __int64)uStack_438;
    lVar37 = (__int64)(int)uVar20 * (__int64)(int)*(unsigned int *)(param_1 + 0x564) +
             (unsigned __int64)uStack_474 + (unsigned __int64)uStack_480 + (unsigned __int64)uStack00000024;
    iVar17 = (int)uVar44;
    iVar15 = (int)lVar18;
    iVar16 = (int)lVar33;
    if ((iVar17 == 0) && (bVar46)) {
      uVar24 = lVar31 - uVar23;
      lVar27 = lVar36 - uVar34;
      uVar21 = uVar24 - 4;
      uVar41 = (unsigned __int64)((int)uVar21 >> 0x1f);
      uVar20 = (unsigned __int64)((int)(lVar27 - 4U) >> 0x1f);
      lVar9 = (lVar33 - uVar26) + lVar37;
      uVar41 = (uVar21 ^ uVar41) - uVar41;
      uVar20 = (lVar27 - 4U ^ uVar20) - uVar20;
      iVar17 = (int)uVar20;
      if (((int)uVar41 < 0x9f) && (iVar17 < 0x9f)) {
        iVar40 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar20 & 0xffffffff) << 2)) * 4 +
                         in_stack_0000009c) +
                 *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar41 & 0xffffffff) << 2)) * 4 +
                         in_stack_0000009c);
      }
      else {
        iVar40 = *(int *)(in_stack_0000009c + 0x14) << 1;
      }
      iVar14 = (*pcVar2)(uStack0000001c,0x10,lVar9 + -1,uVar26,0x10);
      uVar26 = (unsigned __int64)((int)uVar24 >> 0x1f);
      uVar26 = (uVar24 ^ uVar26) - uVar26;
      *(int *)(puStack_49c + (int)((lVar33 - 8U & 0xffffffff) << 2)) = iVar14 + iVar40;
      if (((int)uVar26 < 0x9f) && (iVar17 < 0x9f)) {
        iVar40 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar20 & 0xffffffff) << 2)) * 4 +
                         in_stack_0000009c) +
                 *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar26 & 0xffffffff) << 2)) * 4 +
                         in_stack_0000009c);
      }
      else {
        iVar40 = *(int *)(in_stack_0000009c + 0x14) << 1;
      }
      iVar14 = (*pcVar2)(uStack0000001c,0x10,lVar9,*(unsigned int *)(param_1 + 0x564),0x10);
      uVar22 = uStack0000001c;
      uVar24 = uVar24 + 4;
      uVar26 = (unsigned __int64)((int)uVar24 >> 0x1f);
      uVar26 = (uVar24 ^ uVar26) - uVar26;
      *(int *)(puStack_49c + (int)((lVar33 - 7U & 0xffffffff) << 2)) = iVar14 + iVar40;
      if (((int)uVar26 < 0x9f) && (iVar17 < 0x9f)) {
        iVar17 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar20 & 0xffffffff) << 2)) * 4 +
                         in_stack_0000009c) +
                 *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar26 & 0xffffffff) << 2)) * 4 +
                         in_stack_0000009c);
      }
      else {
        iVar17 = *(int *)(in_stack_0000009c + 0x14) << 1;
      }
      iVar40 = (*pcVar2)(uStack0000001c,0x10,lVar9 + 1,*(unsigned int *)(param_1 + 0x564),0x10);
      uVar3 = uStack0000001c;
      *(int *)(puStack_49c + (int)((lVar33 - 6U & 0xffffffff) << 2)) = iVar40 + iVar17;
      if ((iVar16 != 0) || (bVar48)) {
        if ((iVar16 == iVar15) && (bVar49)) {
          iVar15 = (*pcVar2)(uStack0000001c,0x10,lVar37 + 1,*(unsigned int *)(param_1 + 0x564),0x10);
          iVar16 = fn_82E9AB00(param_1,uVar24,lVar27,in_stack_0000009c);
          uVar43 = *(unsigned int *)(param_1 + 0x564);
          *(int *)(puStack_49c + (int)((lVar18 + 1U & 0xffffffff) << 2)) = iVar15 + iVar16;
          iVar15 = (*pcVar2)(uVar3,0x10,(unsigned __int64)uVar43 + lVar37 + 1,(unsigned __int64)uVar43,0x10);
          iVar16 = fn_82E9AB00(param_1,uVar24,lVar27 + 4,in_stack_0000009c);
          *(int *)(puStack_49c + (int)((lVar18 + 8U & 0xffffffff) << 2)) = iVar15 + iVar16;
        }
      }
      else {
        iVar15 = (*pcVar2)(uVar22,0x10,lVar37 + -1,*(unsigned int *)(param_1 + 0x564),0x10);
        iVar16 = fn_82E9AB00(param_1,uVar21,lVar27,in_stack_0000009c);
        uVar43 = *(unsigned int *)(param_1 + 0x564);
        *(int *)(puStack_49c + -4) = iVar15 + iVar16;
        iVar15 = (*pcVar2)(uVar22,0x10,(unsigned __int64)uVar43 + lVar37 + -1,(unsigned __int64)uVar43,0x10);
        iVar16 = fn_82E9AB00(param_1,uVar21,lVar27 + 4,in_stack_0000009c);
        *(int *)(puStack_49c + 0x18) = iVar15 + iVar16;
      }
    }
    else if ((iVar17 == uStack_43c - uStack_434) && (bVar47)) {
      uVar24 = lVar31 - uVar23;
      lVar27 = lVar36 - uVar34;
      uVar21 = uVar24 - 4;
      uVar41 = (unsigned __int64)((int)uVar21 >> 0x1f);
      uVar20 = (unsigned __int64)((int)(lVar27 + 4U) >> 0x1f);
      lVar9 = lVar33 + uVar26 + lVar37;
      uVar41 = (uVar21 ^ uVar41) - uVar41;
      uVar20 = (lVar27 + 4U ^ uVar20) - uVar20;
      iVar17 = (int)uVar20;
      if (((int)uVar41 < 0x9f) && (iVar17 < 0x9f)) {
        iVar40 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar20 & 0xffffffff) << 2)) * 4 +
                         in_stack_0000009c) +
                 *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar41 & 0xffffffff) << 2)) * 4 +
                         in_stack_0000009c);
      }
      else {
        iVar40 = *(int *)(in_stack_0000009c + 0x14) << 1;
      }
      lVar35 = (uVar44 & 0x1fffffff) * 8 - uVar44;
      lVar38 = lVar35 + lVar33;
      iVar14 = (*pcVar2)(uStack0000001c,0x10,lVar9 + -1,uVar26,0x10);
      uVar26 = (unsigned __int64)((int)uVar24 >> 0x1f);
      uVar26 = (uVar24 ^ uVar26) - uVar26;
      *(int *)(puStack_49c + (int)((lVar38 + 6U & 0xffffffff) << 2)) = iVar14 + iVar40;
      if (((int)uVar26 < 0x9f) && (iVar17 < 0x9f)) {
        iVar40 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar20 & 0xffffffff) << 2)) * 4 +
                         in_stack_0000009c) +
                 *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar26 & 0xffffffff) << 2)) * 4 +
                         in_stack_0000009c);
      }
      else {
        iVar40 = *(int *)(in_stack_0000009c + 0x14) << 1;
      }
      iVar14 = (*pcVar2)(uStack0000001c,0x10,lVar9,*(unsigned int *)(param_1 + 0x564),0x10);
      uVar22 = uStack0000001c;
      uVar24 = uVar24 + 4;
      uVar26 = (unsigned __int64)((int)uVar24 >> 0x1f);
      uVar26 = (uVar24 ^ uVar26) - uVar26;
      *(int *)(puStack_49c + (int)((lVar38 + 7U & 0xffffffff) << 2)) = iVar14 + iVar40;
      if (((int)uVar26 < 0x9f) && (iVar17 < 0x9f)) {
        iVar17 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar20 & 0xffffffff) << 2)) * 4 +
                         in_stack_0000009c) +
                 *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar26 & 0xffffffff) << 2)) * 4 +
                         in_stack_0000009c);
      }
      else {
        iVar17 = *(int *)(in_stack_0000009c + 0x14) << 1;
      }
      iVar40 = (*pcVar2)(uStack0000001c,0x10,lVar9 + 1,*(unsigned int *)(param_1 + 0x564),0x10);
      *(int *)(puStack_49c + (int)((lVar38 + 8U & 0xffffffff) << 2)) = iVar40 + iVar17;
      if ((iVar16 != 0) || (bVar48)) {
        if ((iVar16 == iVar15) && (bVar49)) {
          lVar35 = lVar35 + lVar18;
          iVar15 = (*pcVar2)(uVar22,0x10,lVar37 + 1,*(unsigned int *)(param_1 + 0x564),0x10);
          iVar16 = fn_82E9AB00(param_1,uVar24,lVar27,in_stack_0000009c);
          uVar43 = *(unsigned int *)(param_1 + 0x564);
          *(int *)(puStack_49c + (int)((lVar35 + 1U & 0xffffffff) << 2)) = iVar15 + iVar16;
          iVar15 = (*pcVar2)(uVar22,0x10,(lVar37 - (unsigned __int64)uVar43) + 1,(unsigned __int64)uVar43,0x10);
          iVar16 = fn_82E9AB00(param_1,uVar24,lVar27 + -4,in_stack_0000009c);
          *(int *)(puStack_49c + (int)((lVar35 - 6U & 0xffffffff) << 2)) = iVar15 + iVar16;
        }
      }
      else {
        iVar15 = (int)(((uVar44 & 0x1fffffff) * 8 - uVar44 & 0xffffffff) << 2);
        iVar16 = (*pcVar2)(uVar22,0x10,lVar37 + -1,*(unsigned int *)(param_1 + 0x564),0x10);
        iVar17 = fn_82E9AB00(param_1,uVar21,lVar27,in_stack_0000009c);
        uVar43 = *(unsigned int *)(param_1 + 0x564);
        *(int *)(puStack_49c + iVar15 + -4) = iVar16 + iVar17;
        iVar16 = (*pcVar2)(uVar22,0x10,(lVar37 - (unsigned __int64)uVar43) + -1,(unsigned __int64)uVar43,0x10);
        iVar17 = fn_82E9AB00(param_1,uVar21,lVar27 + -4,in_stack_0000009c);
        *(int *)(puStack_49c + iVar15 + -0x20) = iVar16 + iVar17;
      }
    }
    else if ((iVar16 != 0) || (bVar48)) {
      if ((iVar16 == iVar15) && (bVar49)) {
        lVar9 = lVar36 - uVar34;
        lVar27 = (lVar31 - uVar23) + 4;
        lVar18 = ((uVar44 & 0x1fffffff) * 8 - uVar44) + lVar18;
        iVar15 = (*pcVar2)(uStack0000001c,0x10,(lVar37 - (unsigned __int64)*(unsigned int *)(param_1 + 0x564)) + 1,
                           (unsigned __int64)*(unsigned int *)(param_1 + 0x564),0x10);
        iVar16 = fn_82E9AB00(param_1,lVar27,lVar9 + -4,in_stack_0000009c);
        uVar3 = *(unsigned int *)(param_1 + 0x564);
        *(int *)(puStack_49c + (int)((lVar18 - 6U & 0xffffffff) << 2)) = iVar15 + iVar16;
        iVar15 = (*pcVar2)(uVar22,0x10,lVar37 + 1,uVar3,0x10);
        iVar16 = fn_82E9AB00(param_1,lVar27,lVar9,in_stack_0000009c);
        uVar43 = *(unsigned int *)(param_1 + 0x564);
        *(int *)(puStack_49c + (int)((lVar18 + 1U & 0xffffffff) << 2)) = iVar15 + iVar16;
        iVar15 = (*pcVar2)(uVar22,0x10,(unsigned __int64)uVar43 + lVar37 + 1,(unsigned __int64)uVar43,0x10);
        iVar16 = fn_82E9AB00(param_1,lVar27,lVar9 + 4,in_stack_0000009c);
        *(int *)(puStack_49c + (int)((lVar18 + 8U & 0xffffffff) << 2)) = iVar15 + iVar16;
      }
    }
    else {
      lVar18 = lVar36 - uVar34;
      lVar9 = (lVar31 - uVar23) + -4;
      iVar15 = (*pcVar2)(uStack0000001c,0x10,(lVar37 - (unsigned __int64)*(unsigned int *)(param_1 + 0x564)) + -1,
                         (unsigned __int64)*(unsigned int *)(param_1 + 0x564),0x10);
      iVar16 = fn_82E9AB00(param_1,lVar9,lVar18 + -4,in_stack_0000009c);
      uVar3 = *(unsigned int *)(param_1 + 0x564);
      *(int *)(puStack_49c + iVar17 * 0x1c + -0x20) = iVar15 + iVar16;
      iVar15 = (*pcVar2)(uVar22,0x10,lVar37 + -1,uVar3,0x10);
      iVar16 = fn_82E9AB00(param_1,lVar9,lVar18,in_stack_0000009c);
      uVar43 = *(unsigned int *)(param_1 + 0x564);
      *(int *)(puStack_49c + iVar17 * 0x1c + -4) = iVar15 + iVar16;
      iVar15 = (*pcVar2)(uVar22,0x10,(unsigned __int64)uVar43 + lVar37 + -1,(unsigned __int64)uVar43,0x10);
      iVar16 = fn_82E9AB00(param_1,lVar9,lVar18 + 4,in_stack_0000009c);
      *(int *)(puStack_49c + iVar17 * 0x1c + 0x18) = iVar15 + iVar16;
    }
    uVar22 = uStack0000001c;
    lVar9 = ((*(unsigned int *)(param_1 + 0xa2c) - uVar23) + lVar31 & (unsigned __int64)*(unsigned int *)(param_1 + 0xa34))
            - (unsigned __int64)*(unsigned int *)(param_1 + 0xa2c);
    lVar18 = ((*(unsigned int *)(param_1 + 0xa30) - uVar34) + lVar36 & (unsigned __int64)*(unsigned int *)(param_1 + 0xa38)
             ) - (unsigned __int64)*(unsigned int *)(param_1 + 0xa30);
    if (*(int *)(param_1 + 0x6d84) == 0) {
      if ((iVar11 != iVar10) && (in_stack_00000084 == 0)) {
        pcVar2 = *(int (***)())(in_stack_000000a4 + 0xc);
        iStack_48c = (*pcVar2)(uStack0000001c,0x10,lVar37,*(unsigned int *)(param_1 + 0x564),0x10);
        iVar13 = fn_82E9AB00(param_1,lVar9,lVar18,in_stack_0000009c);
        iStack_48c = iStack_48c + iVar13;
      }
      (**(int (***)())(param_1 + 0x6f28))(param_1,uVar22,lVar37,lVar33,uVar44,iStack_48c,bVar46,bVar47);
      uVar45 = (unsigned int)(uVar23 & 3);
      uVar43 = (unsigned int)(uVar34 & 3);
      if (((uVar45 != 0) || (uVar43 != 0)) &&
         (((int)lVar31 + uStack_488 != iVar29 || ((int)lVar36 + uStack_484 != iVar12)))) {
        uVar44 = (unsigned __int64)in_stack_00000064;
        if (((int)in_stack_00000064 <= (int)uVar39) &&
           (uVar44 = (__int64)(int)uVar39, (int)in_stack_0000006c < (int)uVar39)) {
          uVar44 = (unsigned __int64)in_stack_0000006c;
        }
        uVar32 = in_stack_00000074;
        if (((int)in_stack_00000074 <= (int)uVar30) &&
           (uVar32 = uVar30, (int)in_stack_0000007c < (int)uVar30)) {
          uVar32 = in_stack_0000007c;
        }
        (**(int (***)())(param_1 + 0x9b8))
                  ((__int64)(int)uVar32 * (__int64)*(int *)(param_1 + 0x564) + uVar44 +
                   (unsigned __int64)uStack00000024,*(int *)(param_1 + 0x564),auStack_1c0,0x10,uVar23 & 3,
                   uVar34 & 3,1,*(unsigned int *)(param_1 + 0x618));
        iVar13 = (*pcVar2)(uVar22,0x10,auStack_1c0,0x10,0x10);
        iVar13 = *(int *)(lbl_831898B8 * 4 + in_stack_0000009c) +
                 *(int *)(lbl_831898B8 * 4 + in_stack_0000009c) + iVar13;
        if (iVar13 < iStack_48c) {
          uStack_47c = 0;
          uStack_474 = 0;
          iStack_48c = iVar13;
          uStack_488 = uVar45;
          uStack_484 = uVar43;
          uStack_480 = uVar39;
          uStack_46c = uVar30;
        }
      }
      uVar34 = (unsigned __int64)in_stack_00000064;
      if (in_stack_00000084 != 0) {
        uVar30 = in_stack_00000054 & 3;
        uVar39 = in_stack_0000005c & 3;
        if (((uVar30 != 0) || (uVar39 != 0)) &&
           (((uStack_474 + uStack_480) * 4 + uStack_488 != in_stack_00000054 ||
            ((uStack_47c + uStack_46c) * 4 + uStack_484 != in_stack_0000005c)))) {
          if (((int)in_stack_00000064 <= (int)uVar4) &&
             (uVar34 = (__int64)(int)uVar4, (int)in_stack_0000006c < (int)uVar4)) {
            uVar34 = (unsigned __int64)in_stack_0000006c;
          }
          if (((int)in_stack_00000074 <= (int)uVar5) &&
             (in_stack_00000074 = uVar5, (int)in_stack_0000007c < (int)uVar5)) {
            in_stack_00000074 = in_stack_0000007c;
          }
          (**(int (***)())(param_1 + 0x9b8))
                    ((__int64)(int)in_stack_00000074 * (__int64)*(int *)(param_1 + 0x564) + uVar34
                     + (unsigned __int64)uStack00000024,*(int *)(param_1 + 0x564),auStack_1c0,0x10,uVar30,
                     uVar39,1,*(unsigned int *)(param_1 + 0x618));
          iVar13 = (*pcVar2)(uVar22,0x10,auStack_1c0,0x10,0x10);
          iVar11 = fn_82E9AB00(param_1,0,0,in_stack_0000009c);
          if (iVar11 + iVar13 < iStack_48c) {
            uStack_47c = 0;
            uStack_474 = 0;
            iStack_48c = iVar11 + iVar13;
            uStack_488 = uVar30;
            uStack_484 = uVar39;
            uStack_480 = uVar4;
            uStack_46c = uVar5;
          }
        }
      }
    }
    else {
      (**(int (***)())(param_1 + 0x9c0))
                (lVar37,*(unsigned int *)(param_1 + 0x564),auStack_1c0,0x10,lVar31,lVar36,1,
                 *(unsigned int *)(param_1 + 0x618));
      uVar22 = uStack0000001c;
      fn_82E9AC18(param_1,uStack0000001c,0x10,auStack_1c0,0x10,0x10,0x10,iVar13);
      iVar11 = fn_82E9B140(param_1,lVar9,lVar18,puStack_498,0);
      uStack_4a0 = iVar11 + uStack_4a0;
      if (in_stack_00000084 != 0) {
        uStack_4a0 = uStack_4a0 + 1;
      }
      lVar18 = (__int64)*(int *)(iVar13 + 0x6c) * (__int64)(int)uStack_4a0 + (unsigned __int64)uStack_494
      ;
      iStack_48c = (int)lVar18;
      fn_82EA44A8(param_1,uVar22,lVar37,lVar33,uVar44,lVar18,bVar46,bVar47);
      if (((int)lVar31 + uStack_488 != iVar29) || ((int)lVar36 + uStack_484 != iVar12)) {
        uVar44 = (unsigned __int64)(int)uVar39;
        uVar43 = in_stack_00000064;
        if (((int)uVar39 < (int)in_stack_00000064) ||
           (uVar43 = in_stack_0000006c, (int)in_stack_0000006c < (int)uVar39)) {
          uVar44 = (unsigned __int64)uVar43;
        }
        uVar43 = in_stack_00000074;
        if (((int)uVar30 < (int)in_stack_00000074) ||
           (uVar45 = uVar30, uVar43 = in_stack_0000007c, (int)in_stack_0000007c < (int)uVar30)) {
          uVar45 = uVar43;
        }
        (**(int (***)())(param_1 + 0x9b8))
                  ((__int64)(int)uVar45 * (__int64)*(int *)(param_1 + 0x564) + uVar44 +
                   (unsigned __int64)uStack00000024,*(int *)(param_1 + 0x564),auStack_1c0,0x10,uVar23 & 3,
                   uVar34 & 3,1,*(unsigned int *)(param_1 + 0x618));
        fn_82E9AC18(param_1,uStack0000001c,0x10,auStack_1c0,0x10,0x10,0x10,iVar13);
        iVar11 = fn_82E9B140(param_1,0,0,puStack_498,0);
        uStack_4a0 = iVar11 + uStack_4a0;
        if (in_stack_00000084 != 0) {
          uStack_4a0 = uStack_4a0 + 1;
        }
        iVar11 = *(int *)(iVar13 + 0x6c) * uStack_4a0 + uStack_494;
        if (iVar11 < iStack_48c) {
          uStack_488 = (unsigned int)(uVar23 & 3);
          uStack_484 = (unsigned int)(uVar34 & 3);
          uStack_47c = 0;
          uStack_474 = 0;
          iStack_48c = iVar11;
          uStack_480 = uVar39;
          uStack_46c = uVar30;
        }
      }
      if ((in_stack_00000084 != 0) &&
         (((uStack_474 + uStack_480) * 4 + uStack_488 != in_stack_00000054 ||
          ((uStack_47c + uStack_46c) * 4 + uStack_484 != in_stack_0000005c)))) {
        uVar34 = (unsigned __int64)(int)uVar4;
        if (((int)uVar4 < (int)in_stack_00000064) ||
           (in_stack_00000064 = in_stack_0000006c, (int)in_stack_0000006c < (int)uVar4)) {
          uVar34 = (unsigned __int64)in_stack_00000064;
        }
        if (((int)uVar5 < (int)in_stack_00000074) ||
           (uVar30 = uVar5, in_stack_00000074 = in_stack_0000007c,
           (int)in_stack_0000007c < (int)uVar5)) {
          uVar30 = in_stack_00000074;
        }
        (**(int (***)())(param_1 + 0x9b8))
                  ((__int64)(int)uVar30 * (__int64)*(int *)(param_1 + 0x564) + uVar34 +
                   (unsigned __int64)uStack00000024,*(int *)(param_1 + 0x564),auStack_1c0,0x10,
                   in_stack_00000054 & 3,in_stack_0000005c & 3,1,*(unsigned int *)(param_1 + 0x618));
        fn_82E9AC18(param_1,uStack0000001c,0x10,auStack_1c0,0x10,0x10,0x10,iVar13);
        iVar11 = fn_82E9B140(param_1,0,0,puStack_498,0);
        iVar13 = *(int *)(iVar13 + 0x6c) * (iVar11 + uStack_4a0 + 1) + uStack_494;
        if (iVar13 < iStack_48c) {
          uStack_47c = 0;
          uStack_474 = 0;
          iStack_48c = iVar13;
          uStack_488 = in_stack_00000054 & 3;
          uStack_484 = in_stack_0000005c & 3;
          uStack_480 = uVar4;
          uStack_46c = uVar5;
        }
      }
    }
  }
  *in_stack_000000b4 = (uStack_474 + uStack_480) * 4 + uStack_488;
  *in_stack_000000bc = (uStack_47c + uStack_46c) * 4 + uStack_484;
  *in_stack_000000c4 = iStack_48c;
  return;
}

