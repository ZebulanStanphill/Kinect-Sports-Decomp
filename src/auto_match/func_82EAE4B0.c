typedef unsigned char bool;
#define true 1
#define false 0
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_1c0;
extern unsigned int *auStack_270;
extern unsigned int *auStack_340;
extern unsigned int *auStack_410;
extern unsigned int *auStack_4e0;
extern unsigned int *auStack_5b0;
extern unsigned int *auStack_680;
extern int fn_82E9AB00();
extern int fn_82E9AC18();
extern int fn_82E9B140();
extern int fn_82EA44A8();
extern int fn_82EFE140();
extern unsigned int iStack00000034;
extern unsigned int *iStack0000003c;
extern unsigned int iStack_6c8;
extern unsigned int iStack_6f0;
extern unsigned int iStack_71c;
extern unsigned int *iStack_75c;
extern unsigned int lbl_82EAFD08;
extern unsigned int lbl_831898B8;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack00000044;
extern unsigned int uStack0000004c;
extern unsigned int *uStack_6d0;
extern unsigned int uStack_6d8;
extern unsigned int uStack_6e8;
extern unsigned int uStack_6f4;
extern unsigned int uStack_6fc;
extern unsigned int uStack_704;
extern unsigned int uStack_708;
extern unsigned int uStack_710;
extern unsigned int uStack_718;
extern unsigned int uStack_724;
extern unsigned int uStack_728;
extern unsigned int uStack_72c;


/* WARNING: Removing unreachable block (ram,0x82eb1348) */
/* WARNING: Removing unreachable block (ram,0x82eaf0d0) */
/* WARNING: Removing unreachable block (ram,0x82eb00e0) */
/* WARNING: Removing unreachable block (ram,0x82eb03a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82EAE4B0(int param_1,unsigned int param_2,unsigned int param_3,int param_4,int param_5,int param_6,
                  unsigned __int64 param_7,unsigned int param_8)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned char *puVar4;
  unsigned char *puVar5;
  unsigned char *puVar6;
  unsigned int uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  unsigned int uVar11;
  int iVar12;
  int iVar13;
  unsigned __int64 uVar14;
  unsigned int uVar16;
  unsigned __int64 uVar15;
  unsigned __int64 uVar17;
  unsigned int uVar19;
  __int64 lVar18;
  unsigned __int64 uVar20;
  int *piVar21;
  int *piVar22;
  unsigned int uVar23;
  unsigned __int64 uVar24;
  unsigned int *puVar25;
  unsigned int *puVar26;
  __int64 lVar27;
  __int64 lVar28;
  unsigned int *puVar29;
  unsigned __int64 uVar30;
  __int64 lVar31;
  int *piVar32;
  unsigned char *puVar33;
  __int64 lVar34;
  int *piVar37;
  __int64 lVar35;
  __int64 lVar36;
  unsigned __int64 uVar38;
  int iVar39;
  int iVar40;
  unsigned int *puVar41;
  unsigned int *puVar44;
  __int64 lVar42;
  __int64 lVar43;
  bool bVar45;
  bool bVar46;
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
  unsigned int in_stack_00000084;
  unsigned int in_stack_0000008c;
  unsigned int in_stack_00000094;
  unsigned int in_stack_0000009c;
  int in_stack_000000a4;
  int in_stack_000000ac;
  unsigned int *in_stack_000000b4;
  int in_stack_000000bc;
  int in_stack_000000c4;
  int in_stack_000000cc;
  unsigned int in_stack_000000d4;
  int *in_stack_000000dc;
  int *in_stack_000000e4;
  unsigned int *in_stack_000000ec;
  int *in_stack_000000f4;
  int *in_stack_000000fc;
  unsigned int *in_stack_00000104;
  int (**pcStack_760)();
  int iStack_75c;
  unsigned int *puStack_758;
  unsigned int *puStack_754;
  unsigned char *puStack_750;
  unsigned char *puStack_74c;
  unsigned char *puStack_748;
  unsigned int *puStack_744;
  unsigned int *puStack_740;
  unsigned char *puStack_73c;
  int *piStack_734;
  unsigned int *puStack_730;
  unsigned int uStack_72c;
  unsigned int uStack_728;
  unsigned int uStack_724;
  int *piStack_720;
  int iStack_71c;
  unsigned int uStack_718;
  int *piStack_714;
  unsigned int uStack_710;
  unsigned int *puStack_70c;
  unsigned int uStack_708;
  unsigned int uStack_704;
  unsigned int *puStack_700;
  unsigned int uStack_6fc;
  unsigned int *puStack_6f8;
  unsigned int uStack_6f4;
  int iStack_6f0;
  unsigned int *puStack_6ec;
  unsigned int uStack_6e8;
  unsigned char *puStack_6e4;
  unsigned char *puStack_6e0;
  unsigned int *puStack_6dc;
  unsigned int uStack_6d8;
  unsigned int *puStack_6d4;
  unsigned int uStack_6d0;
  unsigned int *puStack_6cc;
  int iStack_6c8;
  unsigned char *puStack_6c4;
  unsigned int *puStack_6c0;
  unsigned int *puStack_6bc;
  unsigned int *puStack_6b8;
  unsigned int *puStack_6b4;
  unsigned int *puStack_6b0;
  int (**pcStack_6ac)();
  unsigned char auStack_680 [208];
  unsigned char auStack_5b0 [208];
  unsigned char auStack_4e0 [208];
  unsigned char auStack_410 [208];
  unsigned char auStack_340 [208];
  unsigned char auStack_270 [176];
  unsigned char auStack_1c0 [368];
  
  puStack_6e4 = auStack_1c0;
  iStack_71c = 0;
  if ((*(unsigned int *)(param_1 + 0x6db8) & 1) == 0) {
    uVar16 = in_stack_000000d4;
    if ((*(unsigned int *)(param_1 + 0x6db8) & 4) == 0) {
      uVar16 = 0;
    }
  }
  else {
    uVar16 = 1;
  }
  uStack0000001c = param_2;
  uStack00000024 = param_3;
  iStack00000034 = param_5;
  iStack0000003c = param_6;
  uStack00000044 = (unsigned int)param_7;
  uStack0000004c = param_8;
  uVar7 = fn_82EFE140(param_1,in_stack_000000cc,uVar16);
  pcStack_760 = *(int (***)())(in_stack_000000cc + 0xc);
  iVar9 = 0;
  pcStack_6ac = *(int (***)())(in_stack_000000cc + 8);
  iStack_6c8 = (*(int *)(param_1 + 0x2d4) * param_6 + param_5) * 0x114 + *(int *)(param_1 + 0x1e54);
  if (in_stack_000000a4 != 0) {
    iVar10 = ((int)in_stack_00000054 >> 2) + 2 >> 2;
    iVar8 = ((int)in_stack_0000005c >> 2) + 2 >> 2;
    if (0 < in_stack_000000bc) {
      piVar22 = (int *)(param_4 + 0x100);
      do {
        if ((iVar10 == piVar22[-0x20]) && (iVar8 == *piVar22)) break;
        iVar9 = iVar9 + 1;
        piVar22 = piVar22 + 1;
      } while (iVar9 < in_stack_000000bc);
    }
    if (iVar9 == in_stack_000000bc) {
      in_stack_000000bc = in_stack_000000bc + 1;
      *(int *)((iVar9 + 0x20) * 4 + param_4) = iVar10;
      *(int *)((iVar9 + 0x40) * 4 + param_4) = iVar8;
    }
  }
  iVar8 = 0;
  iVar9 = ((int)(unsigned int)param_7 >> 2) + 2 >> 2;
  iVar10 = ((int)param_8 >> 2) + 2 >> 2;
  if (0 < in_stack_000000bc) {
    piVar22 = (int *)(param_4 + 0x100);
    do {
      if ((iVar9 == piVar22[-0x20]) && (iVar10 == *piVar22)) break;
      iVar8 = iVar8 + 1;
      piVar22 = piVar22 + 1;
    } while (iVar8 < in_stack_000000bc);
  }
  if (iVar8 == in_stack_000000bc) {
    in_stack_000000bc = in_stack_000000bc + 1;
    *(int *)((iVar8 + 0x20) * 4 + param_4) = iVar9;
    *(int *)((iVar8 + 0x40) * 4 + param_4) = iVar10;
  }
  iVar9 = 0;
  if (in_stack_000000ac != 0) {
    iVar10 = ((int)in_stack_00000074 >> 2) + 2 >> 2;
    iVar8 = ((int)in_stack_0000007c >> 2) + 2 >> 2;
    if (0 < in_stack_000000bc) {
      piVar22 = (int *)(param_4 + 0x100);
      do {
        if ((iVar10 == piVar22[-0x20]) && (iVar8 == *piVar22)) break;
        iVar9 = iVar9 + 1;
        piVar22 = piVar22 + 1;
      } while (iVar9 < in_stack_000000bc);
    }
    if (iVar9 == in_stack_000000bc) {
      in_stack_000000bc = in_stack_000000bc + 1;
      *(int *)((iVar9 + 0x20) * 4 + param_4) = iVar10;
      *(int *)((iVar9 + 0x40) * 4 + param_4) = iVar8;
    }
  }
  iVar8 = 0;
  iVar9 = ((int)in_stack_00000064 >> 2) + 2 >> 2;
  iVar10 = ((int)in_stack_0000006c >> 2) + 2 >> 2;
  if (0 < in_stack_000000bc) {
    piVar22 = (int *)(param_4 + 0x100);
    do {
      if ((iVar9 == piVar22[-0x20]) && (iVar10 == *piVar22)) break;
      iVar8 = iVar8 + 1;
      piVar22 = piVar22 + 1;
    } while (iVar8 < in_stack_000000bc);
  }
  if (iVar8 == in_stack_000000bc) {
    in_stack_000000bc = in_stack_000000bc + 1;
    *(int *)((iVar8 + 0x20) * 4 + param_4) = iVar9;
    *(int *)((iVar8 + 0x40) * 4 + param_4) = iVar10;
  }
  uStack_710 = 0;
  piVar22 = (int *)0xfffffff;
  puStack_748 = auStack_680;
  puStack_6c4 = auStack_270;
  piStack_734 = (int *)0xfffffff;
  puStack_74c = auStack_410;
  piStack_714 = (int *)0xfffffff;
  puStack_750 = auStack_5b0;
  puStack_6e0 = auStack_4e0;
  puStack_73c = auStack_340;
  if (0 < in_stack_000000bc) {
    piStack_720 = (int *)(param_4 + 0x80);
    puVar29 = puStack_6dc;
    puVar25 = puStack_6dc;
    puVar26 = puStack_6dc;
    piVar37 = piVar22;
    piVar32 = piVar22;
    do {
      puVar4 = puStack_748;
      puVar33 = puStack_750;
      bVar45 = true;
      puStack_740 = (unsigned int *)-(int)in_stack_000000b4;
      iVar9 = piStack_720[0x20];
      iVar10 = *piStack_720;
      uStack_6d0 = iVar9 * 4;
      puStack_744 = in_stack_000000b4;
      uStack_6d8 = iVar10 * 4;
      puStack_754 = in_stack_000000b4;
      uStack_6e8 = *(int *)(param_1 + 0x564) * uStack_6d0 + uStack_6d8 + uStack00000024;
      puStack_730 = puStack_740;
      piVar21 = piStack_720;
      uVar19 = uStack_710;
      if (1 < (int)in_stack_000000b4) {
        while ((uVar19 != 0 && (bVar45))) {
          iVar8 = piVar21[-1];
          if (iVar8 == iVar10) {
            if (piVar21[0x1f] == iVar9 + -1) {
              puStack_730 = (unsigned int *)((int)puStack_730 + 1);
              bVar45 = false;
            }
            if (piVar21[0x1f] == iVar9 + 1) {
              puStack_754 = (unsigned int *)((int)puStack_754 + -1);
LAB_82eae8e0:
              bVar45 = false;
            }
          }
          else if (piVar21[0x1f] == iVar9) {
            if (iVar8 == iVar10 + -1) {
              puStack_740 = (unsigned int *)((int)puStack_740 + 1);
              bVar45 = false;
            }
            if (iVar8 == iVar10 + 1) {
              puStack_744 = (unsigned int *)((int)puStack_744 + -1);
              goto LAB_82eae8e0;
            }
          }
          piVar21 = piVar21 + -1;
          uVar19 = uVar19 - 1;
        }
      }
      if ((int)(puStack_740 + iVar10) < (int)in_stack_00000084) {
        puStack_740 = (unsigned int *)(in_stack_00000084 + iVar10 * -4);
      }
      if ((int)in_stack_0000008c < (int)(puStack_744 + iVar10)) {
        puStack_744 = (unsigned int *)(in_stack_0000008c + iVar10 * -4);
      }
      if ((int)(puStack_730 + iVar9) < (int)in_stack_00000094) {
        puStack_730 = (unsigned int *)(in_stack_00000094 + iVar9 * -4);
      }
      if ((int)in_stack_0000009c < (int)(puStack_754 + iVar9)) {
        puStack_754 = (unsigned int *)(in_stack_0000009c + iVar9 * -4);
      }
      if ((int)puStack_730 <= (int)puStack_754) {
        iVar9 = 0;
        lVar34 = (ZEXT48(puStack_730) + (unsigned __int64)uStack_6d0 & 0x3fffffff) << 2;
        puVar41 = puStack_730;
        do {
          iVar10 = 0;
          if ((int)puStack_740 <= (int)puStack_744) {
            uVar20 = (unsigned __int64)in_stack_00000054;
            uVar24 = (unsigned __int64)uStack00000044;
            uVar38 = (ZEXT48(puStack_740) + (unsigned __int64)uStack_6d8 & 0x3fffffff) * 4 - uVar20;
            puVar44 = puStack_740;
            do {
              iVar8 = (*pcStack_6ac)(uStack0000001c,0x10,
                                     (int)puVar44 +
                                     uStack_6e8 + *(int *)(param_1 + 0x564) * (int)puVar41,
                                     *(int *)(param_1 + 0x564),piVar37);
              uVar17 = (uVar20 - uVar24) + uVar38;
              uVar15 = (unsigned __int64)((int)uVar17 >> 0x1f);
              uVar14 = (unsigned __int64)((int)(lVar34 - (unsigned __int64)uStack0000004c) >> 0x1f);
              uVar15 = (uVar17 ^ uVar15) - uVar15;
              uVar14 = (lVar34 - (unsigned __int64)uStack0000004c ^ uVar14) - uVar14;
              if (((int)uVar15 < 0x9f) && ((int)uVar14 < 0x9f)) {
                iVar40 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar14 & 0xffffffff) << 2)) * 4 +
                                 in_stack_000000c4) +
                         *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar15 & 0xffffffff) << 2)) * 4 +
                                 in_stack_000000c4);
              }
              else {
                iVar40 = *(int *)(in_stack_000000c4 + 0x14) << 1;
              }
              piVar21 = (int *)(iVar40 + iVar8);
              if ((int)piVar21 < (int)piVar32) {
                piVar37 = piVar22;
                if ((int)piVar22 <= (int)piVar32) {
                  piVar37 = piVar32;
                }
                piVar37 = (int *)((int)piVar37 + 1);
                iStack_71c = 0;
                puStack_6ec = puVar41;
                puVar25 = puVar44;
                piVar32 = piVar21;
              }
              iVar40 = (iVar9 + iVar10) * 4;
              *(int **)(puStack_748 + iVar40) = piVar21;
              if (in_stack_000000a4 != 0) {
                uVar15 = (unsigned __int64)((int)uVar38 >> 0x1f);
                uVar14 = (unsigned __int64)((int)(lVar34 - (unsigned __int64)in_stack_0000005c) >> 0x1f);
                uVar15 = (uVar38 ^ uVar15) - uVar15;
                uVar14 = (lVar34 - (unsigned __int64)in_stack_0000005c ^ uVar14) - uVar14;
                if (((int)uVar15 < 0x9f) && ((int)uVar14 < 0x9f)) {
                  iVar13 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar14 & 0xffffffff) << 2)) * 4
                                   + in_stack_000000c4) +
                           *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar15 & 0xffffffff) << 2)) * 4
                                   + in_stack_000000c4);
                }
                else {
                  iVar13 = *(int *)(in_stack_000000c4 + 0x14) << 1;
                }
                piVar21 = (int *)(iVar13 + iVar8);
                if ((int)piVar21 < (int)piVar32) {
                  piVar37 = piVar22;
                  if ((int)piVar22 <= (int)piVar32) {
                    piVar37 = piVar32;
                  }
                  piVar37 = (int *)((int)piVar37 + 1);
                  iStack_71c = 1;
                  puStack_6ec = puVar41;
                  puVar25 = puVar44;
                  piVar32 = piVar21;
                }
                *(int **)(puStack_6c4 + iVar40) = piVar21;
              }
              uVar17 = (uVar20 - in_stack_00000064) + uVar38;
              uVar15 = (unsigned __int64)((int)uVar17 >> 0x1f);
              uVar14 = (unsigned __int64)((int)(lVar34 - (unsigned __int64)in_stack_0000006c) >> 0x1f);
              uVar15 = (uVar17 ^ uVar15) - uVar15;
              uVar14 = (lVar34 - (unsigned __int64)in_stack_0000006c ^ uVar14) - uVar14;
              if (((int)uVar15 < 0x9f) && ((int)uVar14 < 0x9f)) {
                iVar13 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar14 & 0xffffffff) << 2)) * 4 +
                                 in_stack_000000c4) +
                         *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar15 & 0xffffffff) << 2)) * 4 +
                                 in_stack_000000c4);
              }
              else {
                iVar13 = *(int *)(in_stack_000000c4 + 0x14) << 1;
              }
              piVar21 = (int *)(iVar13 + iVar8);
              if ((int)piVar21 < (int)piVar22) {
                if ((int)piVar22 <= (int)piVar32) {
                  piVar22 = piVar32;
                }
                piVar37 = (int *)((int)piVar22 + 1);
                iStack_6f0 = 0;
                puVar29 = puVar41;
                puVar26 = puVar44;
                piVar22 = piVar21;
              }
              *(int **)(puStack_750 + iVar40) = piVar21;
              if (in_stack_000000ac != 0) {
                uVar17 = (uVar20 - in_stack_00000074) + uVar38;
                uVar15 = (unsigned __int64)((int)uVar17 >> 0x1f);
                uVar14 = (unsigned __int64)((int)(lVar34 - (unsigned __int64)in_stack_0000007c) >> 0x1f);
                uVar15 = (uVar17 ^ uVar15) - uVar15;
                uVar14 = (lVar34 - (unsigned __int64)in_stack_0000007c ^ uVar14) - uVar14;
                if (((int)uVar15 < 0x9f) && ((int)uVar14 < 0x9f)) {
                  iVar13 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar14 & 0xffffffff) << 2)) * 4
                                   + in_stack_000000c4) +
                           *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar15 & 0xffffffff) << 2)) * 4
                                   + in_stack_000000c4);
                }
                else {
                  iVar13 = *(int *)(in_stack_000000c4 + 0x14) << 1;
                }
                piVar21 = (int *)(iVar13 + iVar8);
                if ((int)piVar21 < (int)piVar22) {
                  if ((int)piVar22 <= (int)piVar32) {
                    piVar22 = piVar32;
                  }
                  piVar37 = (int *)((int)piVar22 + 1);
                  iStack_6f0 = 1;
                  puVar29 = puVar41;
                  puVar26 = puVar44;
                  piVar22 = piVar21;
                }
                *(int **)(puStack_6e0 + iVar40) = piVar21;
              }
              puVar44 = (unsigned int *)((int)puVar44 + 1);
              uVar38 = uVar38 + 4;
              iVar10 = iVar10 + 1;
            } while ((int)puVar44 <= (int)puStack_744);
          }
          puVar41 = (unsigned int *)((int)puVar41 + 1);
          lVar34 = lVar34 + 4;
          iVar9 = iVar9 + 7;
        } while ((int)puVar41 <= (int)puStack_754);
      }
      puVar6 = puStack_6c4;
      puVar5 = puStack_6e0;
      if ((int)piVar32 < (int)piStack_734) {
        uStack_6f4 = uStack_6d0;
        uStack_708 = uStack_6d8;
        puStack_758 = puStack_6ec;
        puStack_6cc = puStack_740;
        puStack_6b8 = puStack_730;
        puStack_6d4 = puStack_744;
        puStack_6bc = puStack_754;
        piStack_734 = piVar32;
        puStack_6f8 = puVar25;
        if ((in_stack_000000a4 == 0) || (iStack_71c == 0)) {
          puStack_748 = puStack_74c;
          puStack_74c = puVar4;
        }
        else {
          puStack_6c4 = puStack_74c;
          puStack_74c = puVar6;
        }
      }
      if ((int)piVar22 < (int)piStack_714) {
        uStack_6fc = uStack_6d0;
        uStack_704 = uStack_6d8;
        puStack_6dc = puStack_740;
        puStack_6b0 = puStack_730;
        puStack_6b4 = puStack_744;
        puStack_6c0 = puStack_754;
        piStack_714 = piVar22;
        puStack_70c = puVar29;
        puStack_700 = puVar26;
        if ((in_stack_000000ac == 0) || (iStack_6f0 == 0)) {
          puStack_750 = puStack_73c;
          puStack_73c = puVar33;
        }
        else {
          puStack_6e0 = puStack_73c;
          puStack_73c = puVar5;
        }
      }
      uStack_710 = uStack_710 + 1;
      piStack_720 = piStack_720 + 1;
    } while ((int)uStack_710 < in_stack_000000bc);
    param_7 = (unsigned __int64)uStack00000044;
  }
  uVar24 = (unsigned __int64)in_stack_0000005c;
  uVar20 = ZEXT48(puStack_758);
  uVar38 = (unsigned __int64)uStack_708;
  if (in_stack_000000a4 == 0) {
LAB_82eaeed4:
    uVar24 = (unsigned __int64)uStack0000004c;
  }
  else {
    uStack_6e8 = *(unsigned int *)(param_1 + 0xa2c);
    uVar14 = (unsigned __int64)*(unsigned int *)(param_1 + 0xa30);
    lVar34 = (ZEXT48(puStack_6f8) + uVar38 & 0x3fffffff) * 4;
    uVar19 = *(unsigned int *)(param_1 + 0xa34);
    uVar23 = *(unsigned int *)(param_1 + 0xa38);
    lVar42 = (uVar20 + uStack_6f4 & 0x3fffffff) * 4;
    iVar9 = fn_82E9B140(param_1,((uStack_6e8 - param_7) + lVar34 & (unsigned __int64)uVar19) -
                                  (unsigned __int64)uStack_6e8,
                          ((uVar14 - uStack0000004c) + lVar42 & (unsigned __int64)uVar23) - uVar14,1,0);
    param_7 = (unsigned __int64)in_stack_00000054;
    iVar10 = fn_82E9B140(param_1,((uStack_6e8 - param_7) + lVar34 & (unsigned __int64)uVar19) -
                                   (unsigned __int64)uStack_6e8,
                           ((uVar14 - uVar24) + lVar42 & (unsigned __int64)uVar23) - uVar14,1,0);
    if (iVar9 < iVar10) {
      param_7 = (unsigned __int64)uStack00000044;
      iStack_71c = 0;
      goto LAB_82eaeed4;
    }
    iStack_71c = 1;
  }
  if (in_stack_000000ac == 0) {
LAB_82eaef9c:
    puStack_740 = (unsigned int *)in_stack_0000006c;
    puStack_744 = (unsigned int *)in_stack_00000064;
  }
  else {
    iVar9 = *(int *)(param_1 + 0xa30);
    uStack_6e8 = *(unsigned int *)(param_1 + 0xa2c);
    iVar8 = ((int)puStack_700 + uStack_704) * 4;
    uVar19 = *(unsigned int *)(param_1 + 0xa38);
    uVar23 = *(unsigned int *)(param_1 + 0xa34);
    iVar40 = ((int)puStack_70c + uStack_6fc) * 4;
    iVar10 = fn_82E9B140(param_1,((uStack_6e8 - in_stack_00000064) + iVar8 & uVar23) - uStack_6e8,
                           ((iVar9 - in_stack_0000006c) + iVar40 & uVar19) - iVar9,1,0);
    iVar9 = fn_82E9B140(param_1,((uStack_6e8 - in_stack_00000074) + iVar8 & uVar23) - uStack_6e8,
                          ((iVar9 - in_stack_0000007c) + iVar40 & uVar19) - iVar9,1,0);
    if (iVar10 < iVar9) {
      iStack_71c = 0;
      goto LAB_82eaef9c;
    }
    puStack_744 = (unsigned int *)in_stack_00000074;
    puStack_740 = (unsigned int *)in_stack_0000007c;
    iStack_71c = 1;
  }
  if ((*(unsigned int *)(param_1 + 0x6db8) & 2) == 0) {
    if ((*(unsigned int *)(param_1 + 0x6db8) & 8) == 0) {
      in_stack_000000d4 = 0;
    }
  }
  else {
    in_stack_000000d4 = 1;
  }
  uVar11 = fn_82EFE140(param_1,in_stack_000000cc,in_stack_000000d4);
  puVar33 = puStack_6e4;
  uVar16 = uStack0000001c;
  iVar9 = (int)uVar24;
  iVar10 = (int)param_7;
  uVar19 = iVar9 >> 2;
  uVar23 = iVar10 >> 2;
  if (piStack_734 == (int *)0xfffffff) {
    uStack_718 = (unsigned int)(param_7 & 3);
    uStack_72c = (unsigned int)(uVar24 & 3);
    puStack_758 = (unsigned int *)0x0;
    puStack_6f8 = (unsigned int *)0x0;
    uStack_708 = uVar23;
    uStack_6f4 = uVar19;
    (**(int (***)())(param_1 + 0x9b8))
              (uVar19 * *(int *)(param_1 + 0x564) + uVar23 + uStack00000024,
               *(int *)(param_1 + 0x564),puStack_6e4,0x10,param_7 & 3,uVar24 & 3,1,
               *(unsigned int *)(param_1 + 0x618));
    iVar9 = (*pcStack_760)(uStack0000001c,0x10,puVar33,0x10,0x10);
    piVar22 = (int *)(*(int *)(lbl_831898B8 * 4 + in_stack_000000c4) +
                      *(int *)(lbl_831898B8 * 4 + in_stack_000000c4) + iVar9);
    uVar30 = (unsigned __int64)uStack_708;
    uVar17 = (unsigned __int64)uStack_6f4;
    uVar24 = ZEXT48(puStack_6f8);
    puVar33 = puStack_6e4;
    uVar16 = uStack0000001c;
LAB_82eb0290:
    uVar20 = 0;
    uVar38 = uVar17;
    uVar14 = uVar30;
    piStack_734 = piVar22;
  }
  else {
    uVar30 = uVar20 + uStack_6f4;
    uVar14 = ZEXT48(puStack_6f8);
    uVar15 = (unsigned __int64)*(unsigned int *)(param_1 + 0x564);
    uVar17 = uVar14 + uVar38;
    puStack_6ec = (unsigned int *)(unsigned int)(in_stack_0000009c != uVar30);
    puStack_6e0 = (unsigned char *)(unsigned int)(in_stack_00000094 != uVar30);
    uVar2 = (unsigned int)(in_stack_00000084 != uVar17);
    bVar45 = in_stack_0000008c != uVar17;
    lVar34 = (uVar30 & 0x3fffffff) * 4;
    uVar20 = uVar20 - ZEXT48(puStack_6b8);
    iStack_6f0 = (int)puStack_6bc - (int)puStack_6b8;
    lVar27 = (uVar17 & 0x3fffffff) * 4;
    lVar42 = ZEXT48(puStack_6d4) - ZEXT48(puStack_6cc);
    lVar28 = uVar14 - ZEXT48(puStack_6cc);
    lVar43 = (__int64)(int)uVar30 * (__int64)(int)*(unsigned int *)(param_1 + 0x564) + uVar14 + uVar38 +
             (unsigned __int64)uStack00000024;
    iVar13 = (int)uVar20;
    iVar8 = (int)lVar42;
    iVar40 = (int)lVar28;
    uStack_710 = uVar2;
    if ((iVar13 == 0) && (puStack_6e0 != (unsigned char *)0x0)) {
      uVar30 = lVar27 - param_7;
      lVar35 = lVar34 - uVar24;
      uVar17 = uVar30 - 4;
      uVar14 = (unsigned __int64)((int)uVar17 >> 0x1f);
      uVar38 = (unsigned __int64)((int)(lVar35 - 4U) >> 0x1f);
      lVar18 = (lVar28 - uVar15) + lVar43;
      uVar14 = (uVar17 ^ uVar14) - uVar14;
      uVar38 = (lVar35 - 4U ^ uVar38) - uVar38;
      iVar13 = (int)uVar38;
      if (((int)uVar14 < 0x9f) && (iVar13 < 0x9f)) {
        iVar39 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar38 & 0xffffffff) << 2)) * 4 +
                         in_stack_000000c4) +
                 *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar14 & 0xffffffff) << 2)) * 4 +
                         in_stack_000000c4);
      }
      else {
        iVar39 = *(int *)(in_stack_000000c4 + 0x14) << 1;
      }
      iVar12 = (*pcStack_760)(uStack0000001c,0x10,lVar18 + -1,uVar15,0x10);
      uVar14 = (unsigned __int64)((int)uVar30 >> 0x1f);
      uVar14 = (uVar30 ^ uVar14) - uVar14;
      *(int *)(puStack_74c + (int)((lVar28 - 8U & 0xffffffff) << 2)) = iVar12 + iVar39;
      if (((int)uVar14 < 0x9f) && (iVar13 < 0x9f)) {
        iVar39 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar38 & 0xffffffff) << 2)) * 4 +
                         in_stack_000000c4) +
                 *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar14 & 0xffffffff) << 2)) * 4 +
                         in_stack_000000c4);
      }
      else {
        iVar39 = *(int *)(in_stack_000000c4 + 0x14) << 1;
      }
      iVar12 = (*pcStack_760)(uStack0000001c,0x10,lVar18,*(unsigned int *)(param_1 + 0x564),0x10);
      uVar16 = uStack0000001c;
      uVar30 = uVar30 + 4;
      uVar14 = (unsigned __int64)((int)uVar30 >> 0x1f);
      uVar14 = (uVar30 ^ uVar14) - uVar14;
      *(int *)(puStack_74c + (int)((lVar28 - 7U & 0xffffffff) << 2)) = iVar12 + iVar39;
      if (((int)uVar14 < 0x9f) && (iVar13 < 0x9f)) {
        iVar13 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar38 & 0xffffffff) << 2)) * 4 +
                         in_stack_000000c4) +
                 *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar14 & 0xffffffff) << 2)) * 4 +
                         in_stack_000000c4);
      }
      else {
        iVar13 = *(int *)(in_stack_000000c4 + 0x14) << 1;
      }
      iVar39 = (*pcStack_760)(uStack0000001c,0x10,lVar18 + 1,*(unsigned int *)(param_1 + 0x564),0x10);
      uVar1 = uStack0000001c;
      *(int *)(puStack_74c + (int)((lVar28 - 6U & 0xffffffff) << 2)) = iVar39 + iVar13;
      if ((iVar40 == 0) && (uVar2 != 0)) {
        iVar8 = (*pcStack_760)(uVar16,0x10,lVar43 + -1,*(unsigned int *)(param_1 + 0x564),0x10);
        iVar40 = fn_82E9AB00(param_1,uVar17,lVar35,in_stack_000000c4);
        uVar2 = *(unsigned int *)(param_1 + 0x564);
        *(int *)(puStack_74c + -4) = iVar8 + iVar40;
        iVar8 = (*pcStack_760)(uVar16,0x10,lVar43 + (unsigned __int64)uVar2 + -1,(unsigned __int64)uVar2,0x10);
        iVar40 = fn_82E9AB00(param_1,uVar17,lVar35 + 4,in_stack_000000c4);
        *(int *)(puStack_74c + 0x18) = iVar8 + iVar40;
      }
      else if ((iVar40 == iVar8) && (bVar45)) {
        iVar8 = (*pcStack_760)(uStack0000001c,0x10,lVar43 + 1,*(unsigned int *)(param_1 + 0x564),0x10)
        ;
        iVar40 = fn_82E9AB00(param_1,uVar30,lVar35,in_stack_000000c4);
        uVar2 = *(unsigned int *)(param_1 + 0x564);
        *(int *)(puStack_74c + (int)((lVar42 + 1U & 0xffffffff) << 2)) = iVar8 + iVar40;
        iVar8 = (*pcStack_760)(uVar1,0x10,(unsigned __int64)uVar2 + lVar43 + 1,(unsigned __int64)uVar2,0x10);
        iVar40 = fn_82E9AB00(param_1,uVar30,lVar35 + 4,in_stack_000000c4);
        *(int *)(puStack_74c + (int)((lVar42 + 8U & 0xffffffff) << 2)) = iVar8 + iVar40;
      }
    }
    else if ((iVar13 == iStack_6f0) && (puStack_6ec != (unsigned int *)0x0)) {
      uVar30 = lVar27 - param_7;
      lVar35 = lVar34 - uVar24;
      uVar17 = uVar30 - 4;
      uVar14 = (unsigned __int64)((int)uVar17 >> 0x1f);
      uVar38 = (unsigned __int64)((int)(lVar35 + 4U) >> 0x1f);
      lVar18 = uVar15 + lVar28 + lVar43;
      uVar14 = (uVar17 ^ uVar14) - uVar14;
      uVar38 = (lVar35 + 4U ^ uVar38) - uVar38;
      iVar13 = (int)uVar38;
      if (((int)uVar14 < 0x9f) && (iVar13 < 0x9f)) {
        iVar39 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar38 & 0xffffffff) << 2)) * 4 +
                         in_stack_000000c4) +
                 *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar14 & 0xffffffff) << 2)) * 4 +
                         in_stack_000000c4);
      }
      else {
        iVar39 = *(int *)(in_stack_000000c4 + 0x14) << 1;
      }
      lVar31 = (uVar20 & 0x1fffffff) * 8 - uVar20;
      lVar36 = lVar28 + lVar31;
      iVar12 = (*pcStack_760)(uStack0000001c,0x10,lVar18 + -1,uVar15,0x10);
      uVar14 = (unsigned __int64)((int)uVar30 >> 0x1f);
      uVar14 = (uVar30 ^ uVar14) - uVar14;
      *(int *)(puStack_74c + (int)((lVar36 + 6U & 0xffffffff) << 2)) = iVar12 + iVar39;
      if (((int)uVar14 < 0x9f) && (iVar13 < 0x9f)) {
        iVar39 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar38 & 0xffffffff) << 2)) * 4 +
                         in_stack_000000c4) +
                 *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar14 & 0xffffffff) << 2)) * 4 +
                         in_stack_000000c4);
      }
      else {
        iVar39 = *(int *)(in_stack_000000c4 + 0x14) << 1;
      }
      iVar12 = (*pcStack_760)(uStack0000001c,0x10,lVar18,*(unsigned int *)(param_1 + 0x564),0x10);
      uVar16 = uStack0000001c;
      uVar30 = uVar30 + 4;
      uVar14 = (unsigned __int64)((int)uVar30 >> 0x1f);
      uVar14 = (uVar30 ^ uVar14) - uVar14;
      *(int *)(puStack_74c + (int)((lVar36 + 7U & 0xffffffff) << 2)) = iVar12 + iVar39;
      if (((int)uVar14 < 0x9f) && (iVar13 < 0x9f)) {
        iVar13 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar38 & 0xffffffff) << 2)) * 4 +
                         in_stack_000000c4) +
                 *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar14 & 0xffffffff) << 2)) * 4 +
                         in_stack_000000c4);
      }
      else {
        iVar13 = *(int *)(in_stack_000000c4 + 0x14) << 1;
      }
      iVar39 = (*pcStack_760)(uStack0000001c,0x10,lVar18 + 1,*(unsigned int *)(param_1 + 0x564),0x10);
      *(int *)(puStack_74c + (int)((lVar36 + 8U & 0xffffffff) << 2)) = iVar39 + iVar13;
      if ((iVar40 == 0) && (uStack_710 != 0)) {
        iVar8 = (int)(((uVar20 & 0x1fffffff) * 8 - uVar20 & 0xffffffff) << 2);
        iVar40 = (*pcStack_760)(uVar16,0x10,lVar43 + -1,*(unsigned int *)(param_1 + 0x564),0x10);
        iVar13 = fn_82E9AB00(param_1,uVar17,lVar35,in_stack_000000c4);
        uVar2 = *(unsigned int *)(param_1 + 0x564);
        *(int *)(puStack_74c + iVar8 + -4) = iVar40 + iVar13;
        iVar40 = (*pcStack_760)(uVar16,0x10,(lVar43 - (unsigned __int64)uVar2) + -1,(unsigned __int64)uVar2,0x10);
        iVar13 = fn_82E9AB00(param_1,uVar17,lVar35 + -4,in_stack_000000c4);
        *(int *)(puStack_74c + iVar8 + -0x20) = iVar40 + iVar13;
      }
      else if ((iVar40 == iVar8) && (bVar45)) {
        lVar42 = lVar42 + lVar31;
        iVar8 = (*pcStack_760)(uVar16,0x10,lVar43 + 1,*(unsigned int *)(param_1 + 0x564),0x10);
        iVar40 = fn_82E9AB00(param_1,uVar30,lVar35,in_stack_000000c4);
        uVar2 = *(unsigned int *)(param_1 + 0x564);
        *(int *)(puStack_74c + (int)((lVar42 + 1U & 0xffffffff) << 2)) = iVar8 + iVar40;
        iVar8 = (*pcStack_760)(uVar16,0x10,(lVar43 - (unsigned __int64)uVar2) + 1,(unsigned __int64)uVar2,0x10);
        iVar40 = fn_82E9AB00(param_1,uVar30,lVar35 + -4,in_stack_000000c4);
        *(int *)(puStack_74c + (int)((lVar42 - 6U & 0xffffffff) << 2)) = iVar8 + iVar40;
      }
    }
    else if ((iVar40 == 0) && (uVar2 != 0)) {
      lVar42 = lVar34 - uVar24;
      lVar18 = (lVar27 - param_7) + -4;
      iVar8 = (*pcStack_760)(uStack0000001c,0x10,
                             (lVar43 - (unsigned __int64)*(unsigned int *)(param_1 + 0x564)) + -1,
                             (unsigned __int64)*(unsigned int *)(param_1 + 0x564),0x10);
      iVar40 = fn_82E9AB00(param_1,lVar18,lVar42 + -4,in_stack_000000c4);
      uVar1 = *(unsigned int *)(param_1 + 0x564);
      *(int *)(puStack_74c + iVar13 * 0x1c + -0x20) = iVar8 + iVar40;
      iVar8 = (*pcStack_760)(uVar16,0x10,lVar43 + -1,uVar1,0x10);
      iVar40 = fn_82E9AB00(param_1,lVar18,lVar42,in_stack_000000c4);
      uVar2 = *(unsigned int *)(param_1 + 0x564);
      *(int *)(puStack_74c + iVar13 * 0x1c + -4) = iVar8 + iVar40;
      iVar8 = (*pcStack_760)(uVar16,0x10,(unsigned __int64)uVar2 + lVar43 + -1,(unsigned __int64)uVar2,0x10);
      iVar40 = fn_82E9AB00(param_1,lVar18,lVar42 + 4,in_stack_000000c4);
      *(int *)(puStack_74c + iVar13 * 0x1c + 0x18) = iVar8 + iVar40;
    }
    else if ((iVar40 == iVar8) && (bVar45)) {
      lVar18 = lVar34 - uVar24;
      lVar35 = (lVar27 - param_7) + 4;
      lVar42 = ((uVar20 & 0x1fffffff) * 8 - uVar20) + lVar42;
      iVar8 = (*pcStack_760)(uStack0000001c,0x10,
                             (lVar43 - (unsigned __int64)*(unsigned int *)(param_1 + 0x564)) + 1,
                             (unsigned __int64)*(unsigned int *)(param_1 + 0x564),0x10);
      iVar40 = fn_82E9AB00(param_1,lVar35,lVar18 + -4,in_stack_000000c4);
      uVar1 = *(unsigned int *)(param_1 + 0x564);
      *(int *)(puStack_74c + (int)((lVar42 - 6U & 0xffffffff) << 2)) = iVar8 + iVar40;
      iVar8 = (*pcStack_760)(uVar16,0x10,lVar43 + 1,uVar1,0x10);
      iVar40 = fn_82E9AB00(param_1,lVar35,lVar18,in_stack_000000c4);
      uVar2 = *(unsigned int *)(param_1 + 0x564);
      *(int *)(puStack_74c + (int)((lVar42 + 1U & 0xffffffff) << 2)) = iVar8 + iVar40;
      iVar8 = (*pcStack_760)(uVar16,0x10,(unsigned __int64)uVar2 + lVar43 + 1,(unsigned __int64)uVar2,0x10);
      iVar40 = fn_82E9AB00(param_1,lVar35,lVar18 + 4,in_stack_000000c4);
      *(int *)(puStack_74c + (int)((lVar42 + 8U & 0xffffffff) << 2)) = iVar8 + iVar40;
    }
    puVar33 = puStack_6e4;
    lVar18 = ((lVar27 - param_7) + (unsigned __int64)*(unsigned int *)(param_1 + 0xa2c) &
             (unsigned __int64)*(unsigned int *)(param_1 + 0xa34)) - (unsigned __int64)*(unsigned int *)(param_1 + 0xa2c);
    lVar42 = ((lVar34 - uVar24) + (unsigned __int64)*(unsigned int *)(param_1 + 0xa30) &
             (unsigned __int64)*(unsigned int *)(param_1 + 0xa38)) - (unsigned __int64)*(unsigned int *)(param_1 + 0xa30);
    if (*(int *)(param_1 + 0x6d84) == 0) {
      if (((uVar11 ^ uVar7) != 0) && (in_stack_000000a4 == 0)) {
        pcStack_760 = *(int (***)())(in_stack_000000cc + 0xc);
        iVar8 = fn_82E9AB00(param_1,lVar18,lVar42,in_stack_000000c4);
        iVar40 = (*pcStack_760)(uStack0000001c,0x10,lVar43,*(unsigned int *)(param_1 + 0x564),0x10);
        piStack_734 = (int *)(iVar8 + iVar40);
      }
      puVar33 = puStack_6e4;
      uVar16 = uStack0000001c;
      (**(int (***)())(param_1 + 0x6f28))
                (param_1,uStack0000001c,lVar43,lVar28,uVar20,piStack_734,puStack_6e0,puStack_6ec);
      uVar11 = (unsigned int)(param_7 & 3);
      uVar7 = (unsigned int)(uVar24 & 3);
      if (((uVar11 == 0) && (uVar7 == 0)) ||
         (((int)lVar27 + uStack_718 == iVar10 && ((int)lVar34 + uStack_72c == iVar9)))) {
LAB_82eb0124:
        uVar14 = (unsigned __int64)uStack_708;
        uVar38 = (unsigned __int64)uStack_6f4;
        uVar24 = ZEXT48(puStack_6f8);
        uVar20 = ZEXT48(puStack_758);
      }
      else {
        uVar14 = (unsigned __int64)(int)uVar23;
        uVar20 = (unsigned __int64)in_stack_00000084;
        uVar38 = (unsigned __int64)(int)uVar19;
        if (((int)in_stack_00000084 <= (int)uVar23) &&
           (uVar20 = uVar14, (int)in_stack_0000008c < (int)uVar23)) {
          uVar20 = (unsigned __int64)in_stack_0000008c;
        }
        uVar23 = in_stack_00000094;
        if (((int)in_stack_00000094 <= (int)uVar19) &&
           (uVar23 = uVar19, (int)in_stack_0000009c < (int)uVar19)) {
          uVar23 = in_stack_0000009c;
        }
        (**(int (***)())(param_1 + 0x9b8))
                  ((__int64)*(int *)(param_1 + 0x564) * (__int64)(int)uVar23 + uVar20 +
                   (unsigned __int64)uStack00000024,*(int *)(param_1 + 0x564),puVar33,0x10,param_7 & 3,
                   uVar24 & 3,1,*(unsigned int *)(param_1 + 0x618));
        iVar9 = (*pcStack_760)(uVar16,0x10,puVar33,0x10,0x10);
        piVar22 = (int *)(*(int *)(lbl_831898B8 * 4 + in_stack_000000c4) +
                          *(int *)(lbl_831898B8 * 4 + in_stack_000000c4) + iVar9);
        if ((int)piStack_734 <= (int)piVar22) goto LAB_82eb0124;
        uVar20 = 0;
        uVar24 = 0;
        piStack_734 = piVar22;
        uStack_72c = uVar7;
        uStack_718 = uVar11;
      }
      uVar15 = (unsigned __int64)in_stack_00000084;
      if (in_stack_000000a4 != 0) {
        uVar19 = uStack00000044;
        uVar7 = uStack0000004c;
        if (iStack_71c == 0) {
          uVar19 = in_stack_00000054;
          uVar7 = in_stack_0000005c;
        }
        uVar23 = uVar19 & 3;
        uVar11 = uVar7 & 3;
        if (((uVar23 != 0) || (uVar11 != 0)) &&
           (((int)((uVar24 + uVar14 & 0xffffffff) << 2) + uStack_718 != uVar19 ||
            ((int)((uVar20 + uVar38 & 0xffffffff) << 2) + uStack_72c != uVar7)))) {
          iVar9 = (int)uVar19 >> 2;
          uVar30 = (unsigned __int64)iVar9;
          uVar7 = (int)uVar7 >> 2;
          uVar17 = (unsigned __int64)(int)uVar7;
          if (((int)in_stack_00000084 <= iVar9) && (uVar15 = uVar30, (int)in_stack_0000008c < iVar9)
             ) {
            uVar15 = (unsigned __int64)in_stack_0000008c;
          }
          uVar19 = in_stack_00000094;
          if (((int)in_stack_00000094 <= (int)uVar7) &&
             (uVar19 = uVar7, (int)in_stack_0000009c < (int)uVar7)) {
            uVar19 = in_stack_0000009c;
          }
          (**(int (***)())(param_1 + 0x9b8))
                    ((__int64)*(int *)(param_1 + 0x564) * (__int64)(int)uVar19 + uVar15 +
                     (unsigned __int64)uStack00000024,*(int *)(param_1 + 0x564),puVar33,0x10,uVar23,uVar11,
                     1,*(unsigned int *)(param_1 + 0x618));
          iVar9 = (*pcStack_760)(uVar16,0x10,puVar33,0x10,0x10);
          iVar10 = fn_82E9AB00(param_1,0,0,in_stack_000000c4);
          piVar22 = (int *)(iVar10 + iVar9);
          if ((int)piVar22 < (int)piStack_734) {
            uVar24 = 0;
            uStack_72c = uVar11;
            uStack_718 = uVar23;
            goto LAB_82eb0290;
          }
        }
      }
    }
    else {
      (**(int (***)())(param_1 + 0x9c0))
                (lVar43,*(unsigned int *)(param_1 + 0x564),puStack_6e4,0x10,lVar27,lVar34,
                 *(unsigned int *)(param_1 + 0x904),*(unsigned int *)(param_1 + 0x618));
      iVar8 = iStack_6c8;
      uVar16 = uStack0000001c;
      fn_82E9AC18(param_1,uStack0000001c,0x10,puVar33,0x10,0x10,0x10,iStack_6c8);
      iStack_75c = fn_82E9B140(param_1,lVar18,lVar42,puStack_750,0);
      iStack_75c = iStack_75c + (uVar11 ^ uVar7);
      if (in_stack_000000a4 != 0) {
        iStack_75c = iStack_75c + 1;
      }
      puStack_6d4 = &uStack_718;
      puStack_6cc = &uStack_72c;
      piStack_720 = (int *)(puStack_748 + *(int *)(iVar8 + 0x6c) * iStack_75c);
      fn_82EA44A8(param_1,uVar16,lVar43,lVar28,uVar20,piStack_720,puStack_6e0,puStack_6ec);
      if (((int)lVar27 + uStack_718 == iVar10) && ((int)lVar34 + uStack_72c == iVar9)) {
lbl_82EAFD08:
        uVar20 = ZEXT48(puStack_758);
        uVar24 = ZEXT48(puStack_6f8);
        uVar38 = (unsigned __int64)uStack_6f4;
        uVar14 = (unsigned __int64)uStack_708;
        piStack_734 = piStack_720;
      }
      else {
        uVar14 = (unsigned __int64)(int)uVar23;
        uVar20 = (unsigned __int64)in_stack_00000084;
        uVar38 = (unsigned __int64)(int)uVar19;
        if (((int)in_stack_00000084 <= (int)uVar23) &&
           (uVar20 = uVar14, (int)in_stack_0000008c < (int)uVar23)) {
          uVar20 = (unsigned __int64)in_stack_0000008c;
        }
        uVar7 = in_stack_00000094;
        if (((int)in_stack_00000094 <= (int)uVar19) &&
           (uVar7 = uVar19, (int)in_stack_0000009c < (int)uVar19)) {
          uVar7 = in_stack_0000009c;
        }
        (**(int (***)())(param_1 + 0x9b8))
                  ((__int64)*(int *)(param_1 + 0x564) * (__int64)(int)uVar7 + uVar20 +
                   (unsigned __int64)uStack00000024,*(int *)(param_1 + 0x564),puVar33,0x10,param_7 & 3,
                   uVar24 & 3,1,*(unsigned int *)(param_1 + 0x618));
        fn_82E9AC18(param_1,uVar16,0x10,puVar33,0x10,0x10,0x10,iVar8);
        iVar9 = fn_82E9B140(param_1,0,0,puStack_750,0);
        iStack_75c = iVar9 + iStack_75c;
        if (in_stack_000000a4 != 0) {
          iStack_75c = iStack_75c + 1;
        }
        if ((int)piStack_720 <= (int)(puStack_748 + *(int *)(iVar8 + 0x6c) * iStack_75c))
        goto lbl_82EAFD08;
        uStack_718 = (unsigned int)(param_7 & 3);
        uStack_72c = (unsigned int)(uVar24 & 3);
        uVar20 = 0;
        uVar24 = 0;
        piStack_734 = (int *)(puStack_748 + *(int *)(iVar8 + 0x6c) * iStack_75c);
      }
      uVar15 = (unsigned __int64)in_stack_00000084;
      uVar16 = uStack0000001c;
      if (in_stack_000000a4 != 0) {
        uVar7 = uStack00000044;
        uVar19 = uStack0000004c;
        if (iStack_71c == 0) {
          uVar7 = in_stack_00000054;
          uVar19 = in_stack_0000005c;
        }
        if (((int)((uVar24 + uVar14 & 0xffffffff) << 2) + uStack_718 != uVar7) ||
           ((int)((uVar20 + uVar38 & 0xffffffff) << 2) + uStack_72c != uVar19)) {
          iVar9 = (int)uVar7 >> 2;
          uVar23 = (int)uVar19 >> 2;
          if (((int)in_stack_00000084 <= iVar9) &&
             (uVar15 = (__int64)iVar9, (int)in_stack_0000008c < iVar9)) {
            uVar15 = (unsigned __int64)in_stack_0000008c;
          }
          uVar11 = in_stack_00000094;
          if (((int)in_stack_00000094 <= (int)uVar23) &&
             (uVar11 = uVar23, (int)in_stack_0000009c < (int)uVar23)) {
            uVar11 = in_stack_0000009c;
          }
          (**(int (***)())(param_1 + 0x9b8))
                    ((__int64)*(int *)(param_1 + 0x564) * (__int64)(int)uVar11 + uVar15 +
                     (unsigned __int64)uStack00000024,*(int *)(param_1 + 0x564),puVar33,0x10,uVar7 & 3,
                     uVar19 & 3,1,*(unsigned int *)(param_1 + 0x618));
          fn_82E9AC18(param_1,uStack0000001c,0x10,puVar33,0x10,0x10,0x10,iVar8);
          iVar10 = fn_82E9B140(param_1,0,0,puStack_750,0);
          uVar16 = uStack0000001c;
          if ((int)(puStack_748 + *(int *)(iVar8 + 0x6c) * (iVar10 + iStack_75c + 1)) <
              (int)piStack_734) {
            uVar20 = 0;
            uVar24 = 0;
            uVar38 = (__int64)(int)uVar23;
            uVar14 = (__int64)iVar9;
            piStack_734 = (int *)(puStack_748 + *(int *)(iVar8 + 0x6c) * (iVar10 + iStack_75c + 1));
            uStack_72c = uVar19 & 3;
            uStack_718 = uVar7 & 3;
          }
        }
      }
    }
  }
  uVar1 = uStack0000001c;
  *in_stack_000000dc = (int)((uVar24 + uVar14 & 0xffffffff) << 2) + uStack_718;
  *in_stack_000000e4 = (int)((uVar20 + uVar38 & 0xffffffff) << 2) + uStack_72c;
  *in_stack_000000ec = piStack_734;
  uVar19 = (int)puStack_740 >> 2;
  uVar7 = (int)puStack_744 >> 2;
  if (piStack_714 == (int *)0xfffffff) {
    uStack_724 = (unsigned int)puStack_744 & 3;
    uStack_728 = (unsigned int)puStack_740 & 3;
    puStack_70c = (unsigned int *)0x0;
    puStack_700 = (unsigned int *)0x0;
    uStack_704 = uVar7;
    uStack_6fc = uVar19;
    (**(int (***)())(param_1 + 0x9b8))
              (*(int *)(param_1 + 0x564) * uVar19 + uVar7 + uStack00000024,*(int *)(param_1 + 0x564)
               ,puVar33,0x10,uStack_724,uStack_728,1,*(unsigned int *)(param_1 + 0x618));
    iVar9 = (*pcStack_760)(uVar16,0x10,puVar33,0x10,0x10);
    uVar20 = ZEXT48(puStack_700);
    uVar24 = (unsigned __int64)uStack_704;
    uVar19 = uStack_6fc;
    puVar29 = puStack_70c;
    piVar22 = (int *)(*(int *)(lbl_831898B8 * 4 + in_stack_000000c4) +
                      *(int *)(lbl_831898B8 * 4 + in_stack_000000c4) + iVar9);
    goto LAB_82eb1508;
  }
  uVar14 = ZEXT48(puStack_70c) + (unsigned __int64)uStack_6fc;
  uVar20 = ZEXT48(puStack_700);
  uVar24 = (unsigned __int64)*(unsigned int *)(param_1 + 0x564);
  uVar38 = uVar20 + uStack_704;
  uStack_710 = (unsigned int)(in_stack_00000094 != uVar14);
  puStack_6ec = (unsigned int *)(unsigned int)(in_stack_0000009c != uVar14);
  bVar45 = in_stack_00000084 == uVar38;
  bVar46 = in_stack_0000008c != uVar38;
  lVar27 = (uVar38 & 0x3fffffff) * 4;
  lVar34 = (uVar14 & 0x3fffffff) * 4;
  uVar38 = ZEXT48(puStack_70c) - ZEXT48(puStack_6b0);
  iStack_6f0 = (int)puStack_6c0 - (int)puStack_6b0;
  lVar42 = ZEXT48(puStack_6b4) - ZEXT48(puStack_6dc);
  lVar28 = uVar20 - ZEXT48(puStack_6dc);
  lVar43 = (__int64)(int)uVar14 * (__int64)(int)*(unsigned int *)(param_1 + 0x564) + uVar20 +
           (unsigned __int64)uStack_704 + (unsigned __int64)uStack00000024;
  iVar8 = (int)uVar38;
  iVar9 = (int)lVar42;
  iVar10 = (int)lVar28;
  if ((iVar8 == 0) && (uStack_710 != 0)) {
    uVar17 = lVar27 - ZEXT48(puStack_744);
    lVar35 = lVar34 - ZEXT48(puStack_740);
    uVar15 = uVar17 - 4;
    uVar14 = (unsigned __int64)((int)uVar15 >> 0x1f);
    uVar20 = (unsigned __int64)((int)(lVar35 - 4U) >> 0x1f);
    lVar18 = (lVar28 - uVar24) + lVar43;
    uVar14 = (uVar15 ^ uVar14) - uVar14;
    uVar20 = (lVar35 - 4U ^ uVar20) - uVar20;
    iVar8 = (int)uVar20;
    if (((int)uVar14 < 0x9f) && (iVar8 < 0x9f)) {
      iVar40 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar20 & 0xffffffff) << 2)) * 4 +
                       in_stack_000000c4) +
               *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar14 & 0xffffffff) << 2)) * 4 +
                       in_stack_000000c4);
    }
    else {
      iVar40 = *(int *)(in_stack_000000c4 + 0x14) << 1;
    }
    iVar13 = (*pcStack_760)(uStack0000001c,0x10,lVar18 + -1,uVar24,0x10);
    uVar24 = (unsigned __int64)((int)uVar17 >> 0x1f);
    uVar24 = (uVar17 ^ uVar24) - uVar24;
    *(int *)(puStack_73c + (int)((lVar28 - 8U & 0xffffffff) << 2)) = iVar13 + iVar40;
    if (((int)uVar24 < 0x9f) && (iVar8 < 0x9f)) {
      iVar40 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar20 & 0xffffffff) << 2)) * 4 +
                       in_stack_000000c4) +
               *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar24 & 0xffffffff) << 2)) * 4 +
                       in_stack_000000c4);
    }
    else {
      iVar40 = *(int *)(in_stack_000000c4 + 0x14) << 1;
    }
    iVar13 = (*pcStack_760)(uVar1,0x10,lVar18,*(unsigned int *)(param_1 + 0x564),0x10);
    uVar17 = uVar17 + 4;
    uVar24 = (unsigned __int64)((int)uVar17 >> 0x1f);
    uVar24 = (uVar17 ^ uVar24) - uVar24;
    *(int *)(puStack_73c + (int)((lVar28 - 7U & 0xffffffff) << 2)) = iVar13 + iVar40;
    if (((int)uVar24 < 0x9f) && (iVar8 < 0x9f)) {
      iVar8 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar20 & 0xffffffff) << 2)) * 4 +
                      in_stack_000000c4) +
              *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar24 & 0xffffffff) << 2)) * 4 +
                      in_stack_000000c4);
    }
    else {
      iVar8 = *(int *)(in_stack_000000c4 + 0x14) << 1;
    }
    iVar40 = (*pcStack_760)(uVar1,0x10,lVar18 + 1,*(unsigned int *)(param_1 + 0x564),0x10);
    uVar16 = uStack0000001c;
    *(int *)(puStack_73c + (int)((lVar28 - 6U & 0xffffffff) << 2)) = iVar40 + iVar8;
    if ((iVar10 != 0) || (bVar45)) {
      if ((iVar10 == iVar9) && (bVar46)) {
        iVar9 = (*pcStack_760)(uStack0000001c,0x10,lVar43 + 1,*(unsigned int *)(param_1 + 0x564),0x10)
        ;
        iVar10 = fn_82E9AB00(param_1,uVar17,lVar35,in_stack_000000c4);
        uVar23 = *(unsigned int *)(param_1 + 0x564);
        *(int *)(puStack_73c + (int)((lVar42 + 1U & 0xffffffff) << 2)) = iVar9 + iVar10;
        iVar9 = (*pcStack_760)(uVar16,0x10,(unsigned __int64)uVar23 + lVar43 + 1,(unsigned __int64)uVar23,0x10);
        iVar10 = fn_82E9AB00(param_1,uVar17,lVar35 + 4,in_stack_000000c4);
        *(int *)(puStack_73c + (int)((lVar42 + 8U & 0xffffffff) << 2)) = iVar9 + iVar10;
      }
    }
    else {
      iVar9 = (*pcStack_760)(uVar1,0x10,lVar43 + -1,*(unsigned int *)(param_1 + 0x564),0x10);
      iVar10 = fn_82E9AB00(param_1,uVar15,lVar35,in_stack_000000c4);
      uVar23 = *(unsigned int *)(param_1 + 0x564);
      *(int *)(puStack_73c + -4) = iVar9 + iVar10;
      iVar9 = (*pcStack_760)(uVar1,0x10,(unsigned __int64)uVar23 + lVar43 + -1,(unsigned __int64)uVar23,0x10);
      iVar10 = fn_82E9AB00(param_1,uVar15,lVar35 + 4,in_stack_000000c4);
      *(int *)(puStack_73c + 0x18) = iVar9 + iVar10;
    }
  }
  else if ((iVar8 == iStack_6f0) && (puStack_6ec != (unsigned int *)0x0)) {
    uVar17 = lVar27 - ZEXT48(puStack_744);
    lVar35 = lVar34 - ZEXT48(puStack_740);
    uVar15 = uVar17 - 4;
    uVar14 = (unsigned __int64)((int)uVar15 >> 0x1f);
    uVar20 = (unsigned __int64)((int)(lVar35 + 4U) >> 0x1f);
    lVar18 = uVar24 + lVar28 + lVar43;
    uVar14 = (uVar15 ^ uVar14) - uVar14;
    uVar20 = (lVar35 + 4U ^ uVar20) - uVar20;
    iVar8 = (int)uVar20;
    if (((int)uVar14 < 0x9f) && (iVar8 < 0x9f)) {
      iVar40 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar20 & 0xffffffff) << 2)) * 4 +
                       in_stack_000000c4) +
               *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar14 & 0xffffffff) << 2)) * 4 +
                       in_stack_000000c4);
    }
    else {
      iVar40 = *(int *)(in_stack_000000c4 + 0x14) << 1;
    }
    lVar31 = (uVar38 & 0x1fffffff) * 8 - uVar38;
    lVar36 = lVar28 + lVar31;
    iVar13 = (*pcStack_760)(uStack0000001c,0x10,lVar18 + -1,uVar24,0x10);
    uVar24 = (unsigned __int64)((int)uVar17 >> 0x1f);
    uVar24 = (uVar17 ^ uVar24) - uVar24;
    *(int *)(puStack_73c + (int)((lVar36 + 6U & 0xffffffff) << 2)) = iVar13 + iVar40;
    if (((int)uVar24 < 0x9f) && (iVar8 < 0x9f)) {
      iVar40 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar20 & 0xffffffff) << 2)) * 4 +
                       in_stack_000000c4) +
               *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar24 & 0xffffffff) << 2)) * 4 +
                       in_stack_000000c4);
    }
    else {
      iVar40 = *(int *)(in_stack_000000c4 + 0x14) << 1;
    }
    iVar13 = (*pcStack_760)(uStack0000001c,0x10,lVar18,*(unsigned int *)(param_1 + 0x564),0x10);
    uVar16 = uStack0000001c;
    uVar17 = uVar17 + 4;
    uVar24 = (unsigned __int64)((int)uVar17 >> 0x1f);
    uVar24 = (uVar17 ^ uVar24) - uVar24;
    *(int *)(puStack_73c + (int)((lVar36 + 7U & 0xffffffff) << 2)) = iVar13 + iVar40;
    if (((int)uVar24 < 0x9f) && (iVar8 < 0x9f)) {
      iVar8 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar20 & 0xffffffff) << 2)) * 4 +
                      in_stack_000000c4) +
              *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar24 & 0xffffffff) << 2)) * 4 +
                      in_stack_000000c4);
    }
    else {
      iVar8 = *(int *)(in_stack_000000c4 + 0x14) << 1;
    }
    iVar40 = (*pcStack_760)(uStack0000001c,0x10,lVar18 + 1,*(unsigned int *)(param_1 + 0x564),0x10);
    *(int *)(puStack_73c + (int)((lVar36 + 8U & 0xffffffff) << 2)) = iVar40 + iVar8;
    if ((iVar10 != 0) || (bVar45)) {
      if ((iVar10 == iVar9) && (bVar46)) {
        lVar42 = lVar42 + lVar31;
        iVar9 = (*pcStack_760)(uVar16,0x10,lVar43 + 1,*(unsigned int *)(param_1 + 0x564),0x10);
        iVar10 = fn_82E9AB00(param_1,uVar17,lVar35,in_stack_000000c4);
        uVar23 = *(unsigned int *)(param_1 + 0x564);
        *(int *)(puStack_73c + (int)((lVar42 + 1U & 0xffffffff) << 2)) = iVar9 + iVar10;
        iVar9 = (*pcStack_760)(uVar16,0x10,(lVar43 - (unsigned __int64)uVar23) + 1,(unsigned __int64)uVar23,0x10);
        iVar10 = fn_82E9AB00(param_1,uVar17,lVar35 + -4,in_stack_000000c4);
        *(int *)(puStack_73c + (int)((lVar42 - 6U & 0xffffffff) << 2)) = iVar9 + iVar10;
      }
    }
    else {
      iVar9 = (int)(((uVar38 & 0x1fffffff) * 8 - uVar38 & 0xffffffff) << 2);
      iVar10 = (*pcStack_760)(uVar16,0x10,lVar43 + -1,*(unsigned int *)(param_1 + 0x564),0x10);
      iVar8 = fn_82E9AB00(param_1,uVar15,lVar35,in_stack_000000c4);
      uVar23 = *(unsigned int *)(param_1 + 0x564);
      *(int *)(puStack_73c + iVar9 + -4) = iVar10 + iVar8;
      iVar10 = (*pcStack_760)(uVar16,0x10,(lVar43 - (unsigned __int64)uVar23) + -1,(unsigned __int64)uVar23,0x10);
      iVar8 = fn_82E9AB00(param_1,uVar15,lVar35 + -4,in_stack_000000c4);
      *(int *)(puStack_73c + iVar9 + -0x20) = iVar10 + iVar8;
    }
  }
  else if ((iVar10 != 0) || (bVar45)) {
    if ((iVar10 == iVar9) && (bVar46)) {
      lVar18 = lVar34 - ZEXT48(puStack_740);
      lVar35 = (lVar27 - ZEXT48(puStack_744)) + 4;
      lVar42 = ((uVar38 & 0x1fffffff) * 8 - uVar38) + lVar42;
      iVar9 = (*pcStack_760)(uStack0000001c,0x10,
                             (lVar43 - (unsigned __int64)*(unsigned int *)(param_1 + 0x564)) + 1,
                             (unsigned __int64)*(unsigned int *)(param_1 + 0x564),0x10);
      iVar10 = fn_82E9AB00(param_1,lVar35,lVar18 + -4,in_stack_000000c4);
      uVar16 = *(unsigned int *)(param_1 + 0x564);
      *(int *)(puStack_73c + (int)((lVar42 - 6U & 0xffffffff) << 2)) = iVar9 + iVar10;
      iVar9 = (*pcStack_760)(uVar1,0x10,lVar43 + 1,uVar16,0x10);
      iVar10 = fn_82E9AB00(param_1,lVar35,lVar18,in_stack_000000c4);
      uVar23 = *(unsigned int *)(param_1 + 0x564);
      *(int *)(puStack_73c + (int)((lVar42 + 1U & 0xffffffff) << 2)) = iVar9 + iVar10;
      iVar9 = (*pcStack_760)(uVar1,0x10,(unsigned __int64)uVar23 + lVar43 + 1,(unsigned __int64)uVar23,0x10);
      iVar10 = fn_82E9AB00(param_1,lVar35,lVar18 + 4,in_stack_000000c4);
      *(int *)(puStack_73c + (int)((lVar42 + 8U & 0xffffffff) << 2)) = iVar9 + iVar10;
    }
  }
  else {
    lVar42 = lVar34 - ZEXT48(puStack_740);
    lVar18 = (lVar27 - ZEXT48(puStack_744)) + -4;
    iVar9 = (*pcStack_760)(uVar16,0x10,(lVar43 - (unsigned __int64)*(unsigned int *)(param_1 + 0x564)) + -1,
                           (unsigned __int64)*(unsigned int *)(param_1 + 0x564),0x10);
    iVar10 = fn_82E9AB00(param_1,lVar18,lVar42 + -4,in_stack_000000c4);
    uVar1 = *(unsigned int *)(param_1 + 0x564);
    *(int *)(puStack_73c + iVar8 * 0x1c + -0x20) = iVar9 + iVar10;
    iVar9 = (*pcStack_760)(uVar16,0x10,lVar43 + -1,uVar1,0x10);
    iVar10 = fn_82E9AB00(param_1,lVar18,lVar42,in_stack_000000c4);
    uVar23 = *(unsigned int *)(param_1 + 0x564);
    *(int *)(puStack_73c + iVar8 * 0x1c + -4) = iVar9 + iVar10;
    iVar9 = (*pcStack_760)(uVar16,0x10,(unsigned __int64)uVar23 + lVar43 + -1,(unsigned __int64)uVar23,0x10);
    iVar10 = fn_82E9AB00(param_1,lVar18,lVar42 + 4,in_stack_000000c4);
    *(int *)(puStack_73c + iVar8 * 0x1c + 0x18) = iVar9 + iVar10;
  }
  puVar33 = puStack_6e4;
  uVar16 = uStack0000001c;
  uVar23 = *(unsigned int *)(param_1 + 0xa2c);
  uVar11 = *(unsigned int *)(param_1 + 0xa30);
  uVar2 = *(unsigned int *)(param_1 + 0xa34);
  uVar3 = *(unsigned int *)(param_1 + 0xa38);
  if (*(int *)(param_1 + 0x6d84) == 0) {
    (**(int (***)())(param_1 + 0x6f28))
              (param_1,uStack0000001c,lVar43,lVar28,uVar38,piStack_714,uStack_710,puStack_6ec);
    uVar23 = (unsigned int)puStack_744 & 3;
    uVar11 = (unsigned int)puStack_740 & 3;
    if (((uVar23 == 0) && (uVar11 == 0)) ||
       (((unsigned int *)((int)lVar27 + uStack_724) == puStack_744 &&
        ((unsigned int *)((int)lVar34 + uStack_728) == puStack_740)))) {
LAB_82eb1390:
      uVar24 = (unsigned __int64)uStack_704;
      uVar20 = ZEXT48(puStack_700);
      puVar29 = puStack_70c;
      uVar19 = uStack_6fc;
    }
    else {
      uVar24 = (unsigned __int64)(int)uVar7;
      uVar20 = (unsigned __int64)in_stack_00000084;
      if (((int)in_stack_00000084 <= (int)uVar7) &&
         (uVar20 = uVar24, (int)in_stack_0000008c < (int)uVar7)) {
        uVar20 = (unsigned __int64)in_stack_0000008c;
      }
      uVar7 = in_stack_00000094;
      if (((int)in_stack_00000094 <= (int)uVar19) &&
         (uVar7 = uVar19, (int)in_stack_0000009c < (int)uVar19)) {
        uVar7 = in_stack_0000009c;
      }
      (**(int (***)())(param_1 + 0x9b8))
                ((__int64)*(int *)(param_1 + 0x564) * (__int64)(int)uVar7 + uVar20 +
                 (unsigned __int64)uStack00000024,*(int *)(param_1 + 0x564),puVar33,0x10,uVar23,uVar11,1,
                 *(unsigned int *)(param_1 + 0x618));
      iVar9 = (*pcStack_760)(uVar16,0x10,puVar33,0x10,0x10);
      piVar22 = (int *)(*(int *)(lbl_831898B8 * 4 + in_stack_000000c4) +
                        *(int *)(lbl_831898B8 * 4 + in_stack_000000c4) + iVar9);
      if ((int)piStack_714 <= (int)piVar22) goto LAB_82eb1390;
      uVar20 = 0;
      puVar29 = (unsigned int *)0x0;
      uStack_728 = uVar11;
      uStack_724 = uVar23;
      piStack_714 = piVar22;
    }
    uVar38 = (unsigned __int64)in_stack_00000084;
    piVar22 = piStack_714;
    if (in_stack_000000ac != 0) {
      if (iStack_71c == 0) {
        in_stack_00000064 = in_stack_00000074;
        in_stack_0000006c = in_stack_0000007c;
      }
      uVar7 = in_stack_00000064 & 3;
      uVar23 = in_stack_0000006c & 3;
      if (((uVar7 != 0) || (uVar23 != 0)) &&
         (((int)((uVar20 + uVar24 & 0xffffffff) << 2) + uStack_724 != in_stack_00000064 ||
          (((int)puVar29 + uVar19) * 4 + uStack_728 != in_stack_0000006c)))) {
        iVar9 = (int)in_stack_00000064 >> 2;
        in_stack_0000006c = (int)in_stack_0000006c >> 2;
        if (((int)in_stack_00000084 <= iVar9) &&
           (uVar38 = (__int64)iVar9, (int)in_stack_0000008c < iVar9)) {
          uVar38 = (unsigned __int64)in_stack_0000008c;
        }
        if (((int)in_stack_00000094 <= (int)in_stack_0000006c) &&
           (in_stack_00000094 = in_stack_0000006c, (int)in_stack_0000009c < (int)in_stack_0000006c))
        {
          in_stack_00000094 = in_stack_0000009c;
        }
        (**(int (***)())(param_1 + 0x9b8))
                  ((__int64)*(int *)(param_1 + 0x564) * (__int64)(int)in_stack_00000094 + uVar38 +
                   (unsigned __int64)uStack00000024,*(int *)(param_1 + 0x564),puVar33,0x10,uVar7,uVar23,1,
                   *(unsigned int *)(param_1 + 0x618));
        iVar10 = (*pcStack_760)(uVar16,0x10,puVar33,0x10,0x10);
        iVar8 = fn_82E9AB00(param_1,0,0,in_stack_000000c4);
        piVar22 = piStack_714;
        if (iVar8 + iVar10 < (int)piStack_714) {
          puVar29 = (unsigned int *)0x0;
          uVar20 = 0;
          uVar24 = (__int64)iVar9;
          uVar19 = in_stack_0000006c;
          piVar22 = (int *)(iVar8 + iVar10);
          uStack_728 = uVar23;
          uStack_724 = uVar7;
        }
      }
    }
    goto LAB_82eb1508;
  }
  iVar10 = (*(int *)(param_1 + 0x2d4) * iStack0000003c + iStack00000034) * 0x114 +
           *(int *)(param_1 + 0x1e54);
  (**(int (***)())(param_1 + 0x9c0))
            (lVar43,*(unsigned int *)(param_1 + 0x564),puStack_6e4,0x10,lVar27,lVar34,
             *(unsigned int *)(param_1 + 0x904),*(unsigned int *)(param_1 + 0x618));
  uVar16 = uStack0000001c;
  fn_82E9AC18(param_1,uStack0000001c,0x10,puVar33,0x10,0x10,0x10,iVar10);
  iVar9 = fn_82E9B140(param_1,((lVar27 - ZEXT48(puStack_744)) + (unsigned __int64)uVar23 &
                                (unsigned __int64)uVar2) - (unsigned __int64)uVar23,
                        ((lVar34 - ZEXT48(puStack_740)) + (unsigned __int64)uVar11 & (unsigned __int64)uVar3) -
                        (unsigned __int64)uVar11,puStack_750,0);
  puStack_758 = (unsigned int *)(iVar9 + (int)puStack_758);
  if (in_stack_000000ac != 0) {
    puStack_758 = (unsigned int *)((int)puStack_758 + 1);
  }
  piStack_720 = (int *)(puStack_748 + (int)puStack_758 * *(int *)(iVar10 + 0x6c));
  fn_82EA44A8(param_1,uVar16,lVar43,lVar28,uVar38,piStack_720,uStack_710,puStack_6ec);
  if (((unsigned int *)((int)lVar27 + uStack_724) == puStack_744) &&
     ((unsigned int *)((int)lVar34 + uStack_728) == puStack_740)) {
LAB_82eb0fe0:
    uVar20 = ZEXT48(puStack_700);
    uVar24 = (unsigned __int64)uStack_704;
    puVar29 = puStack_70c;
    uVar19 = uStack_6fc;
    piVar22 = piStack_720;
  }
  else {
    uVar24 = (unsigned __int64)(int)uVar7;
    uVar20 = (unsigned __int64)in_stack_00000084;
    if (((int)in_stack_00000084 <= (int)uVar7) &&
       (uVar20 = uVar24, (int)in_stack_0000008c < (int)uVar7)) {
      uVar20 = (unsigned __int64)in_stack_0000008c;
    }
    uVar7 = in_stack_00000094;
    if (((int)in_stack_00000094 <= (int)uVar19) &&
       (uVar7 = uVar19, (int)in_stack_0000009c < (int)uVar19)) {
      uVar7 = in_stack_0000009c;
    }
    (**(int (***)())(param_1 + 0x9b8))
              ((__int64)*(int *)(param_1 + 0x564) * (__int64)(int)uVar7 + uVar20 +
               (unsigned __int64)uStack00000024,*(int *)(param_1 + 0x564),puVar33,0x10,
               (unsigned int)puStack_744 & 3,(unsigned int)puStack_740 & 3,1,*(unsigned int *)(param_1 + 0x618));
    fn_82E9AC18(param_1,uVar16,0x10,puVar33,0x10,0x10,0x10,iVar10);
    iVar9 = fn_82E9B140(param_1,0,0,puStack_750,0);
    puStack_758 = (unsigned int *)(iVar9 + (int)puStack_758);
    if (in_stack_000000ac != 0) {
      puStack_758 = (unsigned int *)((int)puStack_758 + 1);
    }
    if ((int)piStack_720 <= (int)(puStack_748 + (int)puStack_758 * *(int *)(iVar10 + 0x6c)))
    goto LAB_82eb0fe0;
    uVar20 = 0;
    puVar29 = (unsigned int *)0x0;
    piVar22 = (int *)(puStack_748 + (int)puStack_758 * *(int *)(iVar10 + 0x6c));
    uStack_728 = (unsigned int)puStack_740 & 3;
    uStack_724 = (unsigned int)puStack_744 & 3;
  }
  uVar38 = (unsigned __int64)in_stack_00000084;
  if (in_stack_000000ac != 0) {
    if (iStack_71c == 0) {
      in_stack_00000064 = in_stack_00000074;
      in_stack_0000006c = in_stack_0000007c;
    }
    if (((int)((uVar20 + uVar24 & 0xffffffff) << 2) + uStack_724 != in_stack_00000064) ||
       (((int)puVar29 + uVar19) * 4 + uStack_728 != in_stack_0000006c)) {
      iVar9 = (int)in_stack_00000064 >> 2;
      uVar7 = (int)in_stack_0000006c >> 2;
      if (((int)in_stack_00000084 <= iVar9) &&
         (uVar38 = (__int64)iVar9, (int)in_stack_0000008c < iVar9)) {
        uVar38 = (unsigned __int64)in_stack_0000008c;
      }
      if (((int)in_stack_00000094 <= (int)uVar7) &&
         (in_stack_00000094 = uVar7, (int)in_stack_0000009c < (int)uVar7)) {
        in_stack_00000094 = in_stack_0000009c;
      }
      (**(int (***)())(param_1 + 0x9b8))
                ((__int64)*(int *)(param_1 + 0x564) * (__int64)(int)in_stack_00000094 + uVar38 +
                 (unsigned __int64)uStack00000024,*(int *)(param_1 + 0x564),puVar33,0x10,
                 in_stack_00000064 & 3,in_stack_0000006c & 3,1,*(unsigned int *)(param_1 + 0x618));
      fn_82E9AC18(param_1,uVar16,0x10,puVar33,0x10,0x10,0x10,iVar10);
      iVar8 = fn_82E9B140(param_1,0,0,puStack_750,0);
      if ((int)(puStack_748 + (iVar8 + (int)puStack_758 + 1) * *(int *)(iVar10 + 0x6c)) <
          (int)piVar22) {
        puVar29 = (unsigned int *)0x0;
        uVar20 = 0;
        uVar24 = (__int64)iVar9;
        uVar19 = uVar7;
        piVar22 = (int *)(puStack_748 + (iVar8 + (int)puStack_758 + 1) * *(int *)(iVar10 + 0x6c));
        uStack_728 = in_stack_0000006c & 3;
        uStack_724 = in_stack_00000064 & 3;
      }
    }
  }
LAB_82eb1508:
  *in_stack_000000f4 = (int)((uVar20 + uVar24 & 0xffffffff) << 2) + uStack_724;
  *in_stack_000000fc = ((int)puVar29 + uVar19) * 4 + uStack_728;
  *in_stack_00000104 = piVar22;
  return;
}

