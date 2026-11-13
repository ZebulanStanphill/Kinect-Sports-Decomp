typedef unsigned char bool;
#define true 1
#define false 0
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_1c0;
extern int fn_82E9AC18();
extern int fn_82E9B140();
extern int fn_82E9E9B0();
extern int fn_82E9FBB0();
extern int fn_82EFE140();
extern int fn_82F261D8();
extern int fn_82F26F98();
extern unsigned int iStack00000014;
extern unsigned int iStack00000034;
extern unsigned int iStack_454;
extern unsigned int iStack_4b0;
extern unsigned int lbl_8215F864;
extern unsigned int lbl_831898B8;
extern unsigned int stack0x00000000;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack0000002c;
extern unsigned int uStack0000003c;
extern unsigned int uStack00000044;
extern unsigned int uStack0000004c;
extern unsigned int uStack_440;
extern unsigned int uStack_444;
extern unsigned int uStack_448;
extern unsigned int uStack_4b8;
extern unsigned int uStack_4bc;
extern unsigned int uStack_4c4;
extern unsigned int uStack_4e0;
extern unsigned int *uStack_4e8;
extern unsigned int uStack_4f4;
extern unsigned int uStack_4f8;


/* WARNING: Removing unreachable block (ram,0x82ec3b78) */
/* WARNING: Removing unreachable block (ram,0x82ec3e5c) */
/* WARNING: Removing unreachable block (ram,0x82ec2bcc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82EC1628(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,int param_5,
                  unsigned int param_6,unsigned int param_7,unsigned int param_8)

{
  unsigned short uVar1;
  unsigned short uVar2;
  int (**pcVar3)();
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  short sVar7;
  short sVar8;
  bool bVar9;
  int iVar10;
  int *piVar11;
  unsigned __int64 uVar12;
  int iVar14;
  unsigned __int64 uVar13;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  unsigned int uVar22;
  int iVar23;
  unsigned int uVar24;
  unsigned __int64 uVar25;
  unsigned __int64 uVar26;
  int (**pcVar27)();
  unsigned int uVar28;
  int *piVar29;
  __int64 lVar30;
  int *piVar33;
  unsigned __int64 uVar31;
  unsigned __int64 uVar32;
  unsigned int uVar35;
  unsigned __int64 uVar34;
  unsigned short *puVar36;
  int (**pcVar37)();
  int (**pcVar38)();
  int (**pcVar39)();
  int iVar40;
  __int64 lVar41;
  unsigned __int64 uVar42;
  int *piVar43;
  short sVar44;
  unsigned int uVar45;
  __int64 lVar46;
  int (**pcVar47)();
  unsigned __int64 uVar48;
  __int64 lVar49;
  int iStack00000014;
  unsigned int uStack0000001c;
  unsigned int uStack00000024;
  unsigned int uStack0000002c;
  int iStack00000034;
  unsigned int uStack0000003c;
  unsigned int uStack00000044;
  unsigned int uStack0000004c;
  int in_stack_00000054;
  int in_stack_0000005c;
  int (**in_stack_00000064)();
  unsigned int in_stack_0000006c;
  int (**in_stack_00000074)();
  unsigned int in_stack_0000007c;
  int in_stack_00000084;
  int in_stack_0000008c;
  int in_stack_00000094;
  int in_stack_0000009c;
  int in_stack_000000a4;
  unsigned int in_stack_000000ac;
  int in_stack_000000b4;
  int in_stack_000000bc;
  int in_stack_000000c4;
  unsigned int *in_stack_000000cc;
  unsigned int in_stack_000000d4;
  unsigned int *in_stack_000000dc;
  int *in_stack_000000e4;
  unsigned int *in_stack_000000ec;
  int in_stack_000000f4;
  unsigned char *puStack_500;
  int (**pcStack_4fc)();
  unsigned int uStack_4f8;
  unsigned int uStack_4f4;
  int (**pcStack_4ec)();
  unsigned int uStack_4e8;
  int (**pcStack_4e4)();
  unsigned int uStack_4e0;
  int *piStack_4dc;
  int *piStack_4d4;
  int (**pcStack_4c8)();
  unsigned int uStack_4c4;
  int (**pcStack_4c0)();
  unsigned int uStack_4bc;
  unsigned int uStack_4b8;
  int *piStack_4b4;
  int iStack_4b0;
  int (**pcStack_4a8)();
  int (**pcStack_4a4)();
  int *piStack_4a0;
  int (**apcStack_470[7])();
  int iStack_454;
  int (**pcStack_450)();
  int (**pcStack_44c)();
  unsigned int uStack_448;
  unsigned int uStack_444;
  unsigned __int64 uStack_440;
  int aiStack_410 [52];
  int aiStack_340 [52];
  int aiStack_270 [44];
  unsigned char auStack_1c0 [448];
  
  uVar12 = ZEXT48(&stack0x00000000);
  if ((*(unsigned int *)(param_1 + 0x6db8) & 1) == 0) {
    uVar22 = in_stack_000000d4;
    if ((*(unsigned int *)(param_1 + 0x6db8) & 4) == 0) {
      uVar22 = 0;
    }
  }
  else {
    uVar22 = 1;
  }
  iStack00000014 = param_1;
  uStack0000001c = param_2;
  uStack00000024 = param_3;
  uStack0000002c = param_4;
  iStack00000034 = param_5;
  uStack0000003c = param_6;
  uStack00000044 = param_7;
  uStack0000004c = param_8;
  iVar14 = fn_82EFE140(param_1,in_stack_000000cc,uVar22);
  pcVar3 = (int (**)())in_stack_000000cc[1];
  lVar49 = 8;
  pcVar38 = (int (**)())in_stack_000000cc[2];
  iVar21 = (*(int *)(param_1 + 0x2d4) * in_stack_0000005c + in_stack_00000054) * 0x114 +
           *(int *)(param_1 + 0x1e54);
  pcVar39 = (int (**)())0xfffffff;
  lVar30 = uVar12 - 0x474;
  do {
    lVar30 = lVar30 + 4;
    *(unsigned int *)lVar30 = 0xfffffff;
    lVar49 = lVar49 + -1;
  } while (lVar49 != 0);
  iVar17 = 0;
  iVar15 = ((int)in_stack_00000064 >> 2) + 2 >> 2;
  iVar16 = ((int)in_stack_0000006c >> 2) + 2 >> 2;
  if (in_stack_000000a4 != 0) {
    iVar23 = ((int)in_stack_00000074 >> 2) + 2 >> 2;
    iVar19 = ((int)in_stack_0000007c >> 2) + 2 >> 2;
    if (0 < in_stack_000000b4) {
      piVar33 = (int *)(param_8 + 0x100);
      do {
        if ((iVar23 == piVar33[-0x20]) && (iVar19 == *piVar33)) break;
        iVar17 = iVar17 + 1;
        piVar33 = piVar33 + 1;
      } while (iVar17 < in_stack_000000b4);
    }
    if (iVar17 == in_stack_000000b4) {
      in_stack_000000b4 = in_stack_000000b4 + 1;
      *(int *)((iVar17 + 0x20) * 4 + param_8) = iVar23;
      *(int *)((iVar17 + 0x40) * 4 + param_8) = iVar19;
    }
  }
  iVar17 = 0;
  if (0 < in_stack_000000b4) {
    piVar33 = (int *)(param_8 + 0x100);
    do {
      if ((iVar15 == piVar33[-0x20]) && (iVar16 == *piVar33)) break;
      iVar17 = iVar17 + 1;
      piVar33 = piVar33 + 1;
    } while (iVar17 < in_stack_000000b4);
  }
  if (iVar17 == in_stack_000000b4) {
    in_stack_000000b4 = in_stack_000000b4 + 1;
    *(int *)((iVar17 + 0x20) * 4 + param_8) = iVar15;
    *(int *)((iVar17 + 0x40) * 4 + param_8) = iVar16;
  }
  uVar4 = (int)in_stack_00000064 >> 1;
  pcStack_4ec = (int (**)())0xfffffff;
  uVar5 = (int)in_stack_00000074 >> 1;
  uVar6 = (int)in_stack_0000006c >> 1;
  piStack_4d4 = aiStack_270;
  piStack_4a0 = aiStack_410;
  piStack_4b4 = aiStack_340;
  uStack_440 = ((((unsigned __int64)(uStack_440)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)((int)in_stack_0000007c >> 1)) & ((unsigned __int64)0xFFFFFFFF)) << 0));
  uStack_4e0 = 0;
  puStack_500 = &lbl_831898B8;
  if (0 < in_stack_000000b4) {
    do {
      piVar11 = piStack_4a0;
      piVar33 = piStack_4d4;
      uVar13 = (unsigned __int64)uStack_4e0;
      bVar9 = true;
      iVar17 = (int)((uVar13 + 0x20 & 0xffffffff) << 2);
      pcStack_4fc = (int (**)())-in_stack_000000ac;
      iVar16 = (int)((uVar13 + 0x40 & 0x3fffffff) << 2);
      uVar24 = *(unsigned int *)(iVar16 + uStack0000004c);
      iVar15 = *(int *)(iVar17 + uStack0000004c);
      uStack_4e8 = uVar24 * 4;
      uStack_4f8 = in_stack_000000ac;
      uStack_4b8 = in_stack_000000ac;
      uStack_4f4 = iVar15 * 4;
      iVar19 = uVar24 * 2 * *(int *)(param_1 + 0x568) + iVar15 * 2;
      uVar28 = iVar19 + uStack0000003c;
      iVar23 = *(int *)(param_1 + 0x564) * uStack_4e8 + uStack_4f4 + iStack00000034;
      uVar35 = iVar19 + uStack00000044;
      lVar30 = ((unsigned __int64)uVar24 & 0x1fffffff) * 8;
      pcStack_4e4 = pcStack_4fc;
      if ((1 < (int)in_stack_000000ac) && (uStack_4e0 != 0)) {
        lVar49 = (uVar13 + 0x1f & 0x3fffffff) * 4 + (unsigned __int64)uStack0000004c;
        do {
          if (!bVar9) break;
          piVar29 = (int *)lVar49;
          iVar19 = *piVar29;
          iVar18 = *(int *)(iVar17 + uStack0000004c);
          if (iVar19 == iVar18) {
            if (piVar29[0x20] == *(int *)(iVar16 + uStack0000004c) + -1) {
              pcStack_4e4 = pcStack_4e4 + 1;
              bVar9 = false;
            }
            if (piVar29[0x20] == *(int *)(iVar16 + uStack0000004c) + 1) {
              uStack_4b8 = uStack_4b8 - 1;
LAB_82ec19b0:
              bVar9 = false;
            }
          }
          else if (piVar29[0x20] == *(int *)(iVar16 + uStack0000004c)) {
            if (iVar19 == iVar18 + -1) {
              pcStack_4fc = pcStack_4fc + 1;
              bVar9 = false;
            }
            if (iVar19 == iVar18 + 1) {
              uStack_4f8 = uStack_4f8 - 1;
              goto LAB_82ec19b0;
            }
          }
          lVar49 = lVar49 + -4;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
      if ((int)(pcStack_4fc + uStack_4f4) < in_stack_00000084) {
        pcStack_4fc = (int (**)())(in_stack_00000084 + iVar15 * -4);
      }
      if (in_stack_0000008c < (int)(uStack_4f8 + uStack_4f4)) {
        uStack_4f8 = in_stack_0000008c + iVar15 * -4;
      }
      if ((int)(pcStack_4e4 + uStack_4e8) < in_stack_00000094) {
        pcStack_4e4 = (int (**)())(in_stack_00000094 + (uVar24 & 0x3fffffff) * -4);
      }
      if (in_stack_0000009c < (int)(uStack_4b8 + uStack_4e8)) {
        uStack_4b8 = in_stack_0000009c + (uVar24 & 0x3fffffff) * -4;
      }
      sVar8 = (short)uStack_4e8;
      sVar7 = (short)uStack_4f4;
      if (*(int *)(param_1 + 0x6d94) == 0) {
        if (in_stack_000000a4 == 0) {
          if ((int)pcStack_4e4 <= (int)uStack_4b8) {
            lVar30 = (ZEXT48(pcStack_4e4) & 0x7fffffff) * 2 + lVar30;
            uVar24 = (int)(pcStack_4e4 + uStack_4e8) * 2 - uVar6;
            piVar29 = piStack_4d4;
            pcVar47 = pcStack_4e4;
            do {
              if ((int)pcStack_4fc <= (int)uStack_4f8) {
                piVar43 = piVar29 + -1;
                iVar16 = (uVar24 ^ (int)uVar24 >> 0x1f) - ((int)uVar24 >> 0x1f);
                iVar17 = (int)pcStack_4fc * 2 + iVar15 * 8;
                uVar45 = (int)(pcStack_4fc + uStack_4f4) * 2 - uVar4;
                pcVar37 = pcStack_4fc;
                do {
                  iVar40 = 7;
                  iVar18 = 0;
                  iVar19 = (*pcVar38)(uStack0000001c,0x10,
                                      pcVar37 + iVar23 + *(int *)(param_1 + 0x564) * (int)pcVar47,
                                      *(int *)(param_1 + 0x564),pcVar39);
                  if ((((unsigned int)pcVar47 & 1) == 0) && (((unsigned int)pcVar37 & 1) == 0)) {
                    if (((*(unsigned int *)(param_1 + 0x6dc4) & 1) != 0) && (iVar19 < (int)pcVar39)) {
                      iVar18 = (*pcVar3)(uStack00000024,8,
                                         (__int64)((int)pcVar47 >> 1) *
                                         (__int64)*(int *)(param_1 + 0x568) +
                                         (__int64)((int)pcVar37 >> 1) + (unsigned __int64)uVar28,
                                         *(int *)(param_1 + 0x568),(int)pcVar39 - iVar19);
                    }
                    if (((*(unsigned int *)(param_1 + 0x6dc4) & 2) != 0) && (iVar19 + iVar18 < (int)pcVar39)
                       ) {
                      iVar20 = *(int *)(param_1 + 0x568);
                      uVar13 = (__int64)((int)pcVar47 >> 1) * (__int64)iVar20 +
                               (__int64)((int)pcVar37 >> 1) + (unsigned __int64)uVar35;
                      iVar10 = -iVar18 - iVar19;
LAB_82ec27a4:
                      iVar20 = (*pcVar3)(uStack0000002c,8,uVar13,iVar20,pcVar39 + iVar10);
                      iVar18 = iVar20 + iVar18;
                    }
                  }
                  else {
                    if (((*(unsigned int *)(param_1 + 0x6dc4) & 1) != 0) && (iVar19 < (int)pcVar39)) {
                      fn_82F26F98(param_1,uStack0000003c,*(unsigned int *)(param_1 + 0x568),
                                        auStack_1c0,8,iVar17,lVar30,0);
                      iVar18 = (*pcVar3)(uStack00000024,8,auStack_1c0,8,(int)pcVar39 - iVar19);
                    }
                    if (((*(unsigned int *)(param_1 + 0x6dc4) & 2) != 0) && (iVar19 + iVar18 < (int)pcVar39)
                       ) {
                      fn_82F26F98(param_1,uStack00000044,*(unsigned int *)(param_1 + 0x568),
                                        auStack_1c0,8,iVar17,lVar30,0);
                      uVar13 = ZEXT48(auStack_1c0);
                      iVar20 = 8;
                      iVar10 = -iVar18 - iVar19;
                      goto LAB_82ec27a4;
                    }
                  }
                  iVar20 = (uVar45 ^ (int)uVar45 >> 0x1f) - ((int)uVar45 >> 0x1f);
                  if ((iVar20 < 0x9f) && (iVar16 < 0x9f)) {
                    iVar20 = *(int *)(*(int *)(&lbl_831898B8 + iVar16 * 4) * 4 + in_stack_000000c4)
                             + *(int *)(*(int *)(&lbl_831898B8 + iVar20 * 4) * 4 + in_stack_000000c4
                                       );
                  }
                  else {
                    iVar20 = *(int *)(in_stack_000000c4 + 0x14) << 1;
                  }
                  pcVar27 = (int (**)())(iVar19 + iVar18 + iVar20);
                  if ((int)pcVar27 < iStack_454) {
                    lVar49 = uVar12 - 0x458;
                    do {
                      if (*(int *)lVar49 <= (int)pcVar27) break;
                      iVar40 = iVar40 + -1;
                      lVar49 = lVar49 + -4;
                    } while (iVar40 != 0);
                    if (iVar40 < 7) {
                      iVar19 = 7 - iVar40;
                      puVar36 = (unsigned short *)(in_stack_000000f4 + 0x18);
                      do {
                        uVar1 = *puVar36;
                        uVar2 = puVar36[1];
                        *(unsigned int *)((int)apcStack_470 + (4 - in_stack_000000f4) + (int)puVar36)
                             = *(unsigned int *)
                                (((int)apcStack_470 - in_stack_000000f4) + (int)puVar36);
                        puVar36[2] = uVar1;
                        puVar36[3] = uVar2;
                        puVar36 = puVar36 + -2;
                        iVar19 = iVar19 + -1;
                      } while (iVar19 != 0);
                    }
                    *(short *)(iVar40 * 4 + in_stack_000000f4) = (short)pcVar37 + sVar7;
                    apcStack_470[iVar40] = pcVar27;
                    *(short *)(iVar40 * 4 + in_stack_000000f4 + 2) = (short)pcVar47 + sVar8;
                    if (iVar40 == 0) {
                      pcVar39 = apcStack_470[0] + 1;
                      pcStack_4a8 = pcVar37;
                      pcStack_4a4 = pcVar47;
                    }
                  }
                  pcVar37 = pcVar37 + 1;
                  piVar43 = piVar43 + 1;
                  *piVar43 = (int)pcVar27;
                  iVar17 = iVar17 + 2;
                  uVar45 = uVar45 + 2;
                } while ((int)pcVar37 <= (int)uStack_4f8);
              }
              pcVar47 = pcVar47 + 1;
              uVar24 = uVar24 + 2;
              lVar30 = lVar30 + 2;
              piVar29 = piVar29 + 7;
            } while ((int)pcVar47 <= (int)uStack_4b8);
          }
        }
        else if ((int)pcStack_4e4 <= (int)uStack_4b8) {
          lVar30 = (ZEXT48(pcStack_4e4) & 0x7fffffff) * 2 + lVar30;
          piStack_4dc = piStack_4a0;
          uVar24 = (((unsigned __int64)(uStack_440) >> 0) & 0xFFFFFFFF) - uVar6;
          uVar13 = (ZEXT48(pcStack_4e4) + (unsigned __int64)uStack_4e8 & 0x7fffffff) * 2 -
                   (unsigned __int64)(((unsigned __int64)(uStack_440) >> 0) & 0xFFFFFFFF);
          pcVar47 = pcStack_4e4;
          do {
            if ((int)pcStack_4fc <= (int)uStack_4f8) {
              uVar25 = uVar13 + uVar24;
              uVar42 = (unsigned __int64)((int)uVar25 >> 0x1f);
              uVar26 = (unsigned __int64)((int)uVar13 >> 0x1f);
              lVar49 = (ZEXT48(pcStack_4fc) & 0x7fffffff) * 2 + (unsigned __int64)(unsigned int)(iVar15 * 8);
              uVar42 = (uVar25 ^ uVar42) - uVar42;
              uVar26 = (uVar13 ^ uVar26) - uVar26;
              sVar44 = (short)pcVar47 + sVar8;
              uVar25 = (ZEXT48(pcStack_4fc) + (unsigned __int64)uStack_4f4 & 0x7fffffff) * 2 -
                       (unsigned __int64)uVar5;
              piVar29 = piStack_4dc;
              pcVar37 = pcStack_4fc;
              do {
                uVar31 = 7;
                iVar17 = 0;
                iVar16 = (*pcVar38)(uStack0000001c,0x10,
                                    pcVar37 + iVar23 + *(int *)(param_1 + 0x564) * (int)pcVar47,
                                    *(int *)(param_1 + 0x564),pcVar39);
                if ((((unsigned int)pcVar47 & 1) == 0) && (((unsigned int)pcVar37 & 1) == 0)) {
                  if (((*(unsigned int *)(param_1 + 0x6dc4) & 1) != 0) && (iVar16 < (int)pcVar39)) {
                    iVar17 = (*pcVar3)(uStack00000024,8,
                                       (__int64)((int)pcVar47 >> 1) *
                                       (__int64)*(int *)(param_1 + 0x568) +
                                       (__int64)((int)pcVar37 >> 1) + (unsigned __int64)uVar28,
                                       *(int *)(param_1 + 0x568),(int)pcVar39 - iVar16);
                  }
                  if (((*(unsigned int *)(param_1 + 0x6dc4) & 2) != 0) && (iVar16 + iVar17 < (int)pcVar39))
                  {
                    iVar19 = *(int *)(param_1 + 0x568);
                    uVar48 = (__int64)((int)pcVar47 >> 1) * (__int64)iVar19 +
                             (__int64)((int)pcVar37 >> 1) + (unsigned __int64)uVar35;
                    iVar18 = -iVar17 - iVar16;
LAB_82ec22f8:
                    iVar19 = (*pcVar3)(uStack0000002c,8,uVar48,iVar19,pcVar39 + iVar18);
                    iVar17 = iVar19 + iVar17;
                  }
                }
                else {
                  if (((*(unsigned int *)(param_1 + 0x6dc4) & 1) != 0) && (iVar16 < (int)pcVar39)) {
                    fn_82F26F98(param_1,uStack0000003c,*(unsigned int *)(param_1 + 0x568),
                                      auStack_1c0,8,lVar49,lVar30,0);
                    iVar17 = (*pcVar3)(uStack00000024,8,auStack_1c0,8,(int)pcVar39 - iVar16);
                  }
                  if (((*(unsigned int *)(param_1 + 0x6dc4) & 2) != 0) && (iVar16 + iVar17 < (int)pcVar39))
                  {
                    fn_82F26F98(param_1,uStack00000044,*(unsigned int *)(param_1 + 0x568),
                                      auStack_1c0,8,lVar49,lVar30,0);
                    uVar48 = ZEXT48(auStack_1c0);
                    iVar19 = 8;
                    iVar18 = -iVar17 - iVar16;
                    goto LAB_82ec22f8;
                  }
                }
                uVar32 = uVar25 + ((unsigned __int64)uVar5 - (unsigned __int64)uVar4);
                uVar48 = (unsigned __int64)((int)uVar32 >> 0x1f);
                uVar48 = (uVar32 ^ uVar48) - uVar48;
                if (((int)uVar48 < 0x9f) && ((int)uVar42 < 0x9f)) {
                  iVar19 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar42 & 0xffffffff) << 2)) * 4
                                   + in_stack_000000c4) +
                           *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar48 & 0xffffffff) << 2)) * 4
                                   + in_stack_000000c4);
                }
                else {
                  iVar19 = *(int *)(in_stack_000000c4 + 0x14) << 1;
                }
                iVar19 = iVar16 + iVar17 + iVar19;
                if (iVar19 < iStack_454) {
                  lVar41 = uVar12 - 0x458;
                  do {
                    if (*(int *)lVar41 <= iVar19) break;
                    uVar31 = uVar31 - 1;
                    lVar41 = lVar41 + -4;
                  } while (uVar31 != 0);
                  if ((int)uVar31 < 7) {
                    lVar41 = 7 - uVar31;
                    puVar36 = (unsigned short *)(in_stack_000000f4 + 0x18);
                    do {
                      uVar1 = *puVar36;
                      uVar2 = puVar36[1];
                      *(unsigned int *)((int)apcStack_470 + (4 - in_stack_000000f4) + (int)puVar36) =
                           *(unsigned int *)(((int)apcStack_470 - in_stack_000000f4) + (int)puVar36);
                      puVar36[2] = uVar1;
                      puVar36[3] = uVar2;
                      puVar36 = puVar36 + -2;
                      lVar41 = lVar41 + -1;
                    } while (lVar41 != 0);
                  }
                  iVar18 = (int)((uVar31 & 0xffffffff) << 2);
                  *(short *)(iVar18 + in_stack_000000f4) = (short)pcVar37 + sVar7;
                  *(int *)((int)apcStack_470 + iVar18) = iVar19;
                  *(short *)(iVar18 + in_stack_000000f4 + 2) = sVar44;
                  if ((int)uVar31 == 0) {
                    pcVar39 = apcStack_470[0] + 1;
                    iStack_4b0 = 0;
                    pcStack_4a8 = pcVar37;
                    pcStack_4a4 = pcVar47;
                  }
                }
                uVar48 = (unsigned __int64)((int)uVar25 >> 0x1f);
                *(int *)((int)piVar29 + ((int)piStack_4d4 - (int)piStack_4a0)) = iVar19;
                uVar48 = (uVar25 ^ uVar48) - uVar48;
                if (((int)uVar48 < 0x9f) && ((int)uVar26 < 0x9f)) {
                  iVar19 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar26 & 0xffffffff) << 2)) * 4
                                   + in_stack_000000c4) +
                           *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar48 & 0xffffffff) << 2)) * 4
                                   + in_stack_000000c4);
                }
                else {
                  iVar19 = *(int *)(in_stack_000000c4 + 0x14) << 1;
                }
                lVar41 = (uVar31 & 0x3fffffff) * 4;
                iVar19 = iVar16 + iVar17 + iVar19;
                lVar46 = lVar41 + (uVar12 - 0x470);
                if (iVar19 < *(int *)((int)lVar41 + (int)(uVar12 - 0x470))) {
                  if ((int)uVar31 != 0) {
                    do {
                      lVar46 = lVar46 + -4;
                      if (*(int *)lVar46 <= iVar19) break;
                      uVar31 = uVar31 - 1;
                    } while (uVar31 != 0);
                  }
                  if ((int)uVar31 < 7) {
                    lVar41 = 7 - uVar31;
                    puVar36 = (unsigned short *)(in_stack_000000f4 + 0x18);
                    do {
                      uVar1 = *puVar36;
                      uVar2 = puVar36[1];
                      *(unsigned int *)((int)apcStack_470 + (4 - in_stack_000000f4) + (int)puVar36) =
                           *(unsigned int *)(((int)apcStack_470 - in_stack_000000f4) + (int)puVar36);
                      puVar36[2] = uVar1;
                      puVar36[3] = uVar2;
                      puVar36 = puVar36 + -2;
                      lVar41 = lVar41 + -1;
                    } while (lVar41 != 0);
                  }
                  iVar16 = (int)((uVar31 & 0xffffffff) << 2);
                  *(short *)(iVar16 + in_stack_000000f4) = (short)pcVar37 + sVar7;
                  *(int *)((int)apcStack_470 + iVar16) = iVar19;
                  *(short *)(iVar16 + in_stack_000000f4 + 2) = sVar44;
                  if ((int)uVar31 == 0) {
                    pcVar39 = apcStack_470[0] + 1;
                    iStack_4b0 = 1;
                    pcStack_4a8 = pcVar37;
                    pcStack_4a4 = pcVar47;
                  }
                }
                pcVar37 = pcVar37 + 1;
                *piVar29 = iVar19;
                lVar49 = lVar49 + 2;
                uVar25 = uVar25 + 2;
                piVar29 = piVar29 + 1;
              } while ((int)pcVar37 <= (int)uStack_4f8);
            }
            pcVar47 = pcVar47 + 1;
            uVar13 = uVar13 + 2;
            piStack_4dc = piStack_4dc + 7;
            lVar30 = lVar30 + 2;
          } while ((int)pcVar47 <= (int)uStack_4b8);
        }
      }
      else if (in_stack_000000a4 == 0) {
        if ((int)pcStack_4e4 <= (int)uStack_4b8) {
          uVar24 = (int)(pcStack_4e4 + uStack_4e8) * 2 - uVar6;
          piVar29 = piStack_4d4;
          pcVar47 = pcStack_4e4;
          do {
            uVar22 = uStack0000001c;
            if ((int)pcStack_4fc <= (int)uStack_4f8) {
              piVar43 = piVar29 + -1;
              iVar15 = (uVar24 ^ (int)uVar24 >> 0x1f) - ((int)uVar24 >> 0x1f);
              uVar45 = (int)(pcStack_4fc + uStack_4f4) * 2 - uVar4;
              pcVar37 = pcStack_4fc;
              do {
                iVar19 = 7;
                iVar17 = 0;
                iVar16 = (*pcVar38)(uVar22,0x10,
                                    pcVar37 + iVar23 + *(int *)(param_1 + 0x564) * (int)pcVar47,
                                    *(int *)(param_1 + 0x564),pcVar39);
                if (((*(unsigned int *)(param_1 + 0x6dc4) & 1) != 0) && (iVar16 < (int)pcVar39)) {
                  iVar17 = (*pcVar3)(uStack00000024,8,
                                     (__int64)((int)pcVar47 >> 1) *
                                     (__int64)*(int *)(param_1 + 0x568) +
                                     (__int64)((int)pcVar37 >> 1) + (unsigned __int64)uVar28,
                                     *(int *)(param_1 + 0x568),(int)pcVar39 - iVar16);
                }
                if (((*(unsigned int *)(param_1 + 0x6dc4) & 2) != 0) && (iVar16 + iVar17 < (int)pcVar39)) {
                  iVar18 = (*pcVar3)(uStack0000002c,8,
                                     (__int64)((int)pcVar47 >> 1) *
                                     (__int64)*(int *)(param_1 + 0x568) +
                                     (__int64)((int)pcVar37 >> 1) + (unsigned __int64)uVar35,
                                     *(int *)(param_1 + 0x568),pcVar39 + (-iVar17 - iVar16));
                  iVar17 = iVar18 + iVar17;
                }
                iVar18 = (uVar45 ^ (int)uVar45 >> 0x1f) - ((int)uVar45 >> 0x1f);
                if ((iVar18 < 0x9f) && (iVar15 < 0x9f)) {
                  iVar18 = *(int *)(*(int *)(&lbl_831898B8 + iVar15 * 4) * 4 + in_stack_000000c4) +
                           *(int *)(*(int *)(&lbl_831898B8 + iVar18 * 4) * 4 + in_stack_000000c4);
                }
                else {
                  iVar18 = *(int *)(in_stack_000000c4 + 0x14) << 1;
                }
                pcVar27 = (int (**)())(iVar16 + iVar17 + iVar18);
                if ((int)pcVar27 < iStack_454) {
                  lVar30 = uVar12 - 0x458;
                  do {
                    if (*(int *)lVar30 <= (int)pcVar27) break;
                    iVar19 = iVar19 + -1;
                    lVar30 = lVar30 + -4;
                  } while (iVar19 != 0);
                  if (iVar19 < 7) {
                    iVar16 = 7 - iVar19;
                    puVar36 = (unsigned short *)(in_stack_000000f4 + 0x18);
                    do {
                      uVar1 = *puVar36;
                      uVar2 = puVar36[1];
                      *(unsigned int *)((int)apcStack_470 + (4 - in_stack_000000f4) + (int)puVar36) =
                           *(unsigned int *)(((int)apcStack_470 - in_stack_000000f4) + (int)puVar36);
                      puVar36[2] = uVar1;
                      puVar36[3] = uVar2;
                      puVar36 = puVar36 + -2;
                      iVar16 = iVar16 + -1;
                    } while (iVar16 != 0);
                  }
                  *(short *)(iVar19 * 4 + in_stack_000000f4) = (short)pcVar37 + sVar7;
                  apcStack_470[iVar19] = pcVar27;
                  *(short *)(iVar19 * 4 + in_stack_000000f4 + 2) = (short)pcVar47 + sVar8;
                  if (iVar19 == 0) {
                    pcVar39 = apcStack_470[0] + 1;
                    pcStack_4a8 = pcVar37;
                    pcStack_4a4 = pcVar47;
                  }
                }
                pcVar37 = pcVar37 + 1;
                piVar43 = piVar43 + 1;
                *piVar43 = (int)pcVar27;
                uVar45 = uVar45 + 2;
              } while ((int)pcVar37 <= (int)uStack_4f8);
            }
            pcVar47 = pcVar47 + 1;
            uVar24 = uVar24 + 2;
            piVar29 = piVar29 + 7;
          } while ((int)pcVar47 <= (int)uStack_4b8);
        }
      }
      else if ((int)pcStack_4e4 <= (int)uStack_4b8) {
        uVar13 = (unsigned __int64)(((unsigned __int64)(uStack_440) >> 0) & 0xFFFFFFFF);
        uVar42 = (ZEXT48(pcStack_4e4) + (unsigned __int64)uStack_4e8 & 0x7fffffff) * 2 - uVar13;
        piVar29 = piStack_4a0;
        pcVar47 = pcStack_4e4;
        do {
          if ((int)pcStack_4fc <= (int)uStack_4f8) {
            uVar31 = (uVar13 - uVar6) + uVar42;
            uVar26 = (unsigned __int64)((int)uVar31 >> 0x1f);
            uVar25 = (unsigned __int64)((int)uVar42 >> 0x1f);
            uVar26 = (uVar31 ^ uVar26) - uVar26;
            uVar25 = (uVar42 ^ uVar25) - uVar25;
            sVar44 = (short)pcVar47 + sVar8;
            uVar31 = (ZEXT48(pcStack_4fc) + (unsigned __int64)uStack_4f4 & 0x7fffffff) * 2 -
                     (unsigned __int64)uVar5;
            piVar43 = piVar29;
            pcVar37 = pcStack_4fc;
            do {
              uVar48 = 7;
              iVar16 = 0;
              iVar15 = (*pcVar38)(uStack0000001c,0x10,
                                  pcVar37 + iVar23 + *(int *)(param_1 + 0x564) * (int)pcVar47,
                                  *(int *)(param_1 + 0x564),pcVar39);
              if (((*(unsigned int *)(param_1 + 0x6dc4) & 1) != 0) && (iVar15 < (int)pcVar39)) {
                iVar16 = (*pcVar3)(uStack00000024,8,
                                   (__int64)((int)pcVar47 >> 1) *
                                   (__int64)*(int *)(param_1 + 0x568) +
                                   (__int64)((int)pcVar37 >> 1) + (unsigned __int64)uVar28,
                                   *(int *)(param_1 + 0x568),(int)pcVar39 - iVar15);
              }
              if (((*(unsigned int *)(param_1 + 0x6dc4) & 2) != 0) && (iVar15 + iVar16 < (int)pcVar39)) {
                iVar17 = (*pcVar3)(uStack0000002c,8,
                                   (__int64)((int)pcVar47 >> 1) *
                                   (__int64)*(int *)(param_1 + 0x568) +
                                   (__int64)((int)pcVar37 >> 1) + (unsigned __int64)uVar35,
                                   *(int *)(param_1 + 0x568),pcVar39 + (-iVar16 - iVar15));
                iVar16 = iVar17 + iVar16;
              }
              uVar34 = ((unsigned __int64)uVar5 - (unsigned __int64)uVar4) + uVar31;
              uVar32 = (unsigned __int64)((int)uVar34 >> 0x1f);
              uVar32 = (uVar34 ^ uVar32) - uVar32;
              if (((int)uVar32 < 0x9f) && ((int)uVar26 < 0x9f)) {
                iVar17 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar26 & 0xffffffff) << 2)) * 4 +
                                 in_stack_000000c4) +
                         *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar32 & 0xffffffff) << 2)) * 4 +
                                 in_stack_000000c4);
              }
              else {
                iVar17 = *(int *)(in_stack_000000c4 + 0x14) << 1;
              }
              iVar17 = iVar15 + iVar16 + iVar17;
              if (iVar17 < iStack_454) {
                lVar30 = uVar12 - 0x458;
                do {
                  if (*(int *)lVar30 <= iVar17) break;
                  uVar48 = uVar48 - 1;
                  lVar30 = lVar30 + -4;
                } while (uVar48 != 0);
                if ((int)uVar48 < 7) {
                  lVar30 = 7 - uVar48;
                  puVar36 = (unsigned short *)(in_stack_000000f4 + 0x18);
                  do {
                    uVar1 = *puVar36;
                    uVar2 = puVar36[1];
                    *(unsigned int *)((int)apcStack_470 + (4 - in_stack_000000f4) + (int)puVar36) =
                         *(unsigned int *)(((int)apcStack_470 - in_stack_000000f4) + (int)puVar36);
                    puVar36[2] = uVar1;
                    puVar36[3] = uVar2;
                    puVar36 = puVar36 + -2;
                    lVar30 = lVar30 + -1;
                  } while (lVar30 != 0);
                }
                iVar19 = (int)((uVar48 & 0xffffffff) << 2);
                *(short *)(iVar19 + in_stack_000000f4) = (short)pcVar37 + sVar7;
                *(int *)((int)apcStack_470 + iVar19) = iVar17;
                *(short *)(iVar19 + in_stack_000000f4 + 2) = sVar44;
                if ((int)uVar48 == 0) {
                  pcVar39 = apcStack_470[0] + 1;
                  iStack_4b0 = 0;
                  pcStack_4a8 = pcVar37;
                  pcStack_4a4 = pcVar47;
                }
              }
              uVar32 = (unsigned __int64)((int)uVar31 >> 0x1f);
              *(int *)(((int)piStack_4d4 - (int)piStack_4a0) + (int)piVar43) = iVar17;
              uVar32 = (uVar31 ^ uVar32) - uVar32;
              if (((int)uVar32 < 0x9f) && ((int)uVar25 < 0x9f)) {
                iVar17 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar25 & 0xffffffff) << 2)) * 4 +
                                 in_stack_000000c4) +
                         *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar32 & 0xffffffff) << 2)) * 4 +
                                 in_stack_000000c4);
              }
              else {
                iVar17 = *(int *)(in_stack_000000c4 + 0x14) << 1;
              }
              lVar30 = (uVar48 & 0x3fffffff) * 4;
              iVar17 = iVar15 + iVar16 + iVar17;
              lVar49 = lVar30 + (uVar12 - 0x470);
              if (iVar17 < *(int *)((int)lVar30 + (int)(uVar12 - 0x470))) {
                if ((int)uVar48 != 0) {
                  do {
                    lVar49 = lVar49 + -4;
                    if (*(int *)lVar49 <= iVar17) break;
                    uVar48 = uVar48 - 1;
                  } while (uVar48 != 0);
                }
                if ((int)uVar48 < 7) {
                  lVar30 = 7 - uVar48;
                  puVar36 = (unsigned short *)(in_stack_000000f4 + 0x18);
                  do {
                    uVar1 = *puVar36;
                    uVar2 = puVar36[1];
                    *(unsigned int *)((int)apcStack_470 + (4 - in_stack_000000f4) + (int)puVar36) =
                         *(unsigned int *)(((int)apcStack_470 - in_stack_000000f4) + (int)puVar36);
                    puVar36[2] = uVar1;
                    puVar36[3] = uVar2;
                    puVar36 = puVar36 + -2;
                    lVar30 = lVar30 + -1;
                  } while (lVar30 != 0);
                }
                iVar15 = (int)((uVar48 & 0xffffffff) << 2);
                *(short *)(iVar15 + in_stack_000000f4) = (short)pcVar37 + sVar7;
                *(int *)((int)apcStack_470 + iVar15) = iVar17;
                *(short *)(iVar15 + in_stack_000000f4 + 2) = sVar44;
                if ((int)uVar48 == 0) {
                  pcVar39 = apcStack_470[0] + 1;
                  iStack_4b0 = 1;
                  pcStack_4a8 = pcVar37;
                  pcStack_4a4 = pcVar47;
                }
              }
              pcVar37 = pcVar37 + 1;
              *piVar43 = iVar17;
              uVar31 = uVar31 + 2;
              piVar43 = piVar43 + 1;
            } while ((int)pcVar37 <= (int)uStack_4f8);
          }
          pcVar47 = pcVar47 + 1;
          uVar42 = uVar42 + 2;
          piVar29 = piVar29 + 7;
        } while ((int)pcVar47 <= (int)uStack_4b8);
      }
      if ((int)apcStack_470[0] < (int)pcStack_4ec) {
        pcStack_4ec = apcStack_470[0];
        pcStack_4c0 = pcStack_4a8;
        pcStack_4c8 = pcStack_4a4;
        pcStack_450 = pcStack_4fc;
        pcStack_44c = pcStack_4e4;
        uStack_448 = uStack_4f8;
        uStack_444 = uStack_4b8;
        uStack_4c4 = uStack_4f4;
        uStack_4bc = uStack_4e8;
        if ((in_stack_000000a4 == 0) || (iStack_4b0 == 0)) {
          piStack_4d4 = piStack_4b4;
          piStack_4b4 = piVar33;
        }
        else {
          piStack_4a0 = piStack_4b4;
          piStack_4b4 = piVar11;
        }
      }
      uStack_4e0 = uStack_4e0 + 1;
    } while ((int)uStack_4e0 < in_stack_000000b4);
  }
  iVar15 = (int)(pcStack_4c0 + uStack_4c4) * 4;
  lVar30 = (ZEXT48(pcStack_4c8) + (unsigned __int64)uStack_4bc & 0x3fffffff) * 4;
  uVar4 = in_stack_0000006c;
  pcVar38 = in_stack_00000064;
  if (in_stack_000000a4 != 0) {
    uVar13 = (unsigned __int64)*(unsigned int *)(param_1 + 0xa30);
    iVar16 = *(int *)(param_1 + 0xa2c);
    uVar5 = *(unsigned int *)(param_1 + 0xa38);
    uVar6 = *(unsigned int *)(param_1 + 0xa34);
    iVar17 = fn_82E9B140(param_1,((iVar16 - (int)in_stack_00000074) + iVar15 & uVar6) - iVar16,
                           ((uVar13 - in_stack_0000007c) + lVar30 & (unsigned __int64)uVar5) - uVar13,1,1);
    iVar16 = fn_82E9B140(param_1,((iVar16 - (int)in_stack_00000064) + iVar15 & uVar6) - iVar16,
                           ((uVar13 - in_stack_0000006c) + lVar30 & (unsigned __int64)uVar5) - uVar13,1,1);
    if (iVar16 < iVar17) {
      iStack_4b0 = 0;
    }
    else {
      iStack_4b0 = 1;
      uVar4 = in_stack_0000007c;
      pcVar38 = in_stack_00000074;
    }
  }
  if ((*(unsigned int *)(param_1 + 0x6db8) & 2) == 0) {
    if ((*(unsigned int *)(param_1 + 0x6db8) & 8) == 0) {
      in_stack_000000d4 = 0;
    }
  }
  else {
    in_stack_000000d4 = 1;
  }
  iVar23 = fn_82EFE140(param_1,in_stack_000000cc,in_stack_000000d4);
  iVar17 = iStack00000014;
  pcVar39 = (int (**)())*in_stack_000000cc;
  pcVar47 = (int (**)())in_stack_000000cc[3];
  uVar13 = ZEXT48(pcVar47);
  iVar16 = *(int *)(param_1 + 0x564);
  uVar5 = (int)pcVar38 >> 2;
  uVar6 = (int)uVar4 >> 2;
  if (pcStack_4ec == (int (**)())0xfffffff) {
    pcStack_4c8 = (int (**)())0x0;
    pcStack_4c0 = (int (**)())0x0;
    if (in_stack_000000bc == 1) {
      (**(int (***)())(param_1 + 0x9b8))();
    }
    else {
      (**(int (***)())(param_1 + 0x9c0))
                (iVar16 * uVar6 + uVar5 + iStack00000034,iVar16,auStack_1c0,0x10,
                 (int (**)())((unsigned int)pcVar38 & 3),uVar4 & 3,*(unsigned int *)(param_1 + 0x904),
                 *(unsigned int *)(param_1 + 0x618));
    }
    iVar14 = (*pcVar47)(uStack0000001c,0x10,auStack_1c0,0x10,0x10);
    pcVar37 = (int (**)())(iVar14 + *(int *)(lbl_831898B8 * 4 + in_stack_000000c4) +
                                *(int *)(lbl_831898B8 * 4 + in_stack_000000c4));
    uStack_4c4 = uVar5;
    uStack_4bc = uVar6;
    pcStack_4e4 = (int (**)())((unsigned int)pcVar38 & 3);
    uStack_4e8 = uVar4 & 3;
  }
  else {
    iVar19 = (int)(ZEXT48(pcStack_4c8) + (unsigned __int64)uStack_4bc);
    lVar49 = (__int64)(iVar19 >> 1) * (__int64)*(int *)(param_1 + 0x568) +
             (__int64)((int)(pcStack_4c0 + uStack_4c4) >> 1);
    lVar41 = lVar49 + (unsigned __int64)uStack0000003c;
    lVar49 = lVar49 + (unsigned __int64)uStack00000044;
    iVar20 = ((*(int *)(param_1 + 0xa2c) - (int)pcVar38) + iVar15 & *(unsigned int *)(param_1 + 0xa34)) -
             *(int *)(param_1 + 0xa2c);
    pcVar27 = pcStack_4c0 + iStack00000034 + uStack_4c4 + iVar19 * iVar16;
    lVar46 = (((unsigned __int64)*(unsigned int *)(param_1 + 0xa30) - (unsigned __int64)uVar4) + lVar30 &
             (unsigned __int64)*(unsigned int *)(param_1 + 0xa38)) - (unsigned __int64)*(unsigned int *)(param_1 + 0xa30);
    iVar40 = (int)lVar30;
    iVar19 = iVar40 >> 1;
    iVar18 = iVar15 >> 1;
    uStack_440 = uVar13;
    if (*(int *)(param_1 + 0x6d84) == 0) {
      if (iVar23 != iVar14) {
        uVar24 = (int)lVar46 >> 0x1f;
        iVar21 = (iVar20 >> 1 ^ iVar20 >> 0x1f) - (iVar20 >> 0x1f);
        pcVar27 = (int (**)())((iVar40 >> 2) * iVar16 + (iVar15 >> 2) + iStack00000034);
        iVar14 = ((int)lVar46 >> 1 ^ uVar24) - uVar24;
        if ((iVar21 < 0x9f) && (iVar14 < 0x9f)) {
          iVar14 = *(int *)(*(int *)(&lbl_831898B8 + iVar21 * 4) * 4 + in_stack_000000c4) +
                   *(int *)(*(int *)(&lbl_831898B8 + iVar14 * 4) * 4 + in_stack_000000c4);
        }
        else {
          iVar14 = *(int *)(in_stack_000000c4 + 0x14) << 1;
        }
        iVar21 = (*pcVar47)(uStack0000001c,0x10,pcVar27,iVar16,0x10);
        fn_82F26F98(iStack00000014,uStack0000003c,*(unsigned int *)(iStack00000014 + 0x568),
                          auStack_1c0,8,iVar18,iVar19,0);
        iVar16 = (*pcVar39)(uStack00000024,8,auStack_1c0,8);
        fn_82F26F98(iStack00000014,uStack00000044,*(unsigned int *)(iStack00000014 + 0x568),
                          auStack_1c0,8,iVar18,iVar19,0);
        iVar17 = (*pcVar39)(uStack0000002c,8,auStack_1c0,8);
        pcStack_4ec = (int (**)())(iVar17 + iVar16 + iVar21 + iVar14);
      }
      iVar14 = iStack00000014;
      fn_82E9E9B0(iStack00000014,uStack0000001c,uStack00000024,uStack0000002c,pcVar27,lVar41,
                    lVar49,(int)pcStack_4c0 - (int)pcStack_450);
      pcVar3 = (int (**)())((unsigned int)pcVar38 & 3);
      uVar24 = uVar4 & 3;
      if (((pcVar3 != (int (**)())0x0) || (uVar24 != 0)) &&
         ((pcStack_4e4 + iVar15 != pcVar38 || (iVar40 + uStack_4e8 != uVar4)))) {
        fn_82F261D8(iVar14,uVar12 - 0x4e0,uVar12 - 0x4dc,in_stack_00000054,in_stack_0000005c);
        if (in_stack_000000bc == 1) {
          (**(int (***)())(iVar14 + 0x9b8))();
        }
        else {
          (**(int (***)())(iVar14 + 0x9c0))
                    (uVar6 * *(int *)(iVar14 + 0x564) + uVar5 + iStack00000034,
                     *(int *)(iVar14 + 0x564),auStack_1c0,0x10,pcVar3,uVar24,
                     *(unsigned int *)(iVar14 + 0x904),*(unsigned int *)(iVar14 + 0x618));
        }
        iVar21 = (*pcVar47)(uStack0000001c,0x10,auStack_1c0,0x10,0x10);
        if (pcVar38 == (int (**)())0x4000) {
          lVar49 = 0x4000;
          lVar30 = 0x4000;
        }
        else {
          uVar28 = (int)(pcVar38 + *(int *)(&lbl_8215F864 + ((unsigned int)pcVar38 & 3) * 4)) >> 1;
          lVar30 = (__int64)(int)uVar28;
          uVar4 = (int)(*(int *)(&lbl_8215F864 + (uVar4 & 3) * 4) + uVar4) >> 1;
          lVar49 = (__int64)(int)uVar4;
          if (*(int *)(iVar14 + 0x314) != 0) {
            if ((uVar28 & 1) != 0) {
              if ((int)uVar28 < 1) {
                lVar30 = lVar30 + 1;
              }
              else {
                lVar30 = lVar30 + -1;
              }
            }
            if ((uVar4 & 1) != 0) {
              if ((int)uVar4 < 1) {
                lVar49 = lVar49 + 1;
              }
              else {
                lVar49 = lVar49 + -1;
              }
            }
          }
        }
        if ((*(unsigned int *)(iVar14 + 0x6dc4) & 1) != 0) {
          fn_82F26F98(iVar14,uStack0000003c,*(unsigned int *)(iVar14 + 0x568),auStack_1c0,8,
                            lVar30,lVar49,0);
          iVar15 = (*pcVar39)(uStack00000024,8,auStack_1c0,8);
          iVar21 = iVar15 + iVar21;
        }
        if ((*(unsigned int *)(iVar14 + 0x6dc4) & 2) != 0) {
          fn_82F26F98(iVar14,uStack00000044,*(unsigned int *)(iVar14 + 0x568),auStack_1c0,8,
                            lVar30,lVar49,0);
          iVar15 = (*pcVar39)(uStack0000002c,8,auStack_1c0,8);
          iVar21 = iVar15 + iVar21;
        }
        pcVar38 = (int (**)())(*(int *)(lbl_831898B8 * 4 + in_stack_000000c4) +
                           *(int *)(lbl_831898B8 * 4 + in_stack_000000c4) + iVar21);
        if ((int)pcVar38 < (int)pcStack_4ec) {
          pcStack_4c8 = (int (**)())0x0;
          pcStack_4c0 = (int (**)())0x0;
          pcStack_4ec = pcVar38;
          uStack_4c4 = uVar5;
          uStack_4bc = uVar6;
          pcStack_4e4 = pcVar3;
          uStack_4e8 = uVar24;
        }
      }
      pcVar37 = pcStack_4ec;
      if (in_stack_000000a4 != 0) {
        if (iStack_4b0 == 0) {
          in_stack_00000064 = in_stack_00000074;
          in_stack_0000006c = in_stack_0000007c;
        }
        pcVar3 = (int (**)())((unsigned int)in_stack_00000064 & 3);
        uVar4 = in_stack_0000006c & 3;
        if (((pcVar3 != (int (**)())0x0) || (uVar4 != 0)) &&
           ((pcStack_4e4 + (int)(pcStack_4c0 + uStack_4c4) * 4 != in_stack_00000064 ||
            ((int)(pcStack_4c8 + uStack_4bc) * 4 + uStack_4e8 != in_stack_0000006c)))) {
          fn_82F261D8(iVar14,uVar12 - 0x4e0,uVar12 - 0x4dc,in_stack_00000054,in_stack_0000005c);
          if (in_stack_000000bc == 1) {
            (**(int (***)())(iVar14 + 0x9b8))();
          }
          else {
            (**(int (***)())(iVar14 + 0x9c0))
                      (((int)in_stack_0000006c >> 2) * *(int *)(iVar14 + 0x564) +
                       ((int)in_stack_00000064 >> 2) + iStack00000034,*(int *)(iVar14 + 0x564),
                       auStack_1c0,0x10,pcVar3,uVar4,*(unsigned int *)(iVar14 + 0x904),
                       *(unsigned int *)(iVar14 + 0x618));
          }
          iVar21 = (*pcVar47)(uStack0000001c,0x10,auStack_1c0,0x10,0x10);
          if (in_stack_00000064 == (int (**)())0x4000) {
            lVar49 = 0x4000;
            lVar30 = 0x4000;
          }
          else {
            uVar5 = (int)(in_stack_00000064 +
                         *(int *)(&lbl_8215F864 + ((unsigned int)in_stack_00000064 & 3) * 4)) >> 1;
            lVar30 = (__int64)(int)uVar5;
            uVar6 = (int)(*(int *)(&lbl_8215F864 + (in_stack_0000006c & 3) * 4) + in_stack_0000006c)
                    >> 1;
            lVar49 = (__int64)(int)uVar6;
            if (*(int *)(iVar14 + 0x314) != 0) {
              if ((uVar5 & 1) != 0) {
                if ((int)uVar5 < 1) {
                  lVar30 = lVar30 + 1;
                }
                else {
                  lVar30 = lVar30 + -1;
                }
              }
              if ((uVar6 & 1) != 0) {
                if ((int)uVar6 < 1) {
                  lVar49 = lVar49 + 1;
                }
                else {
                  lVar49 = lVar49 + -1;
                }
              }
            }
          }
          if ((*(unsigned int *)(iVar14 + 0x6dc4) & 1) != 0) {
            fn_82F26F98(iVar14,uStack0000003c,*(unsigned int *)(iVar14 + 0x568),auStack_1c0,8,
                              lVar30,lVar49,0);
            iVar15 = (*pcVar39)(uStack00000024,8,auStack_1c0,8);
            iVar21 = iVar15 + iVar21;
          }
          if ((*(unsigned int *)(iVar14 + 0x6dc4) & 2) != 0) {
            fn_82F26F98(iVar14,uStack00000044,*(unsigned int *)(iVar14 + 0x568),auStack_1c0,8,
                              lVar30,lVar49,0);
            iVar14 = (*pcVar39)(uStack0000002c,8,auStack_1c0,8);
            iVar21 = iVar14 + iVar21;
          }
          pcVar38 = (int (**)())(*(int *)(lbl_831898B8 * 4 + in_stack_000000c4) +
                             *(int *)(lbl_831898B8 * 4 + in_stack_000000c4) + iVar21);
          if ((int)pcVar38 < (int)pcStack_4ec) {
            pcStack_4c8 = (int (**)())0x0;
            pcStack_4c0 = (int (**)())0x0;
            pcVar37 = pcVar38;
            uStack_4c4 = (int)in_stack_00000064 >> 2;
            uStack_4bc = (int)in_stack_0000006c >> 2;
            pcStack_4e4 = pcVar3;
            uStack_4e8 = uVar4;
          }
        }
      }
    }
    else {
      (**(int (***)())(iStack00000014 + 0x9b8))
                (pcVar27,iVar16,auStack_1c0,0x10,iVar20,lVar46,
                 *(unsigned int *)(iStack00000014 + 0x904),*(unsigned int *)(iStack00000014 + 0x618));
      fn_82E9AC18(iVar17,uStack0000001c,0x10,auStack_1c0,0x10,0x10,0x10,iVar21);
      if ((*(unsigned int *)(iVar17 + 0x6dc4) & 1) != 0) {
        fn_82F26F98(iVar17,uStack0000003c,*(unsigned int *)(iVar17 + 0x568),auStack_1c0,8,iVar18
                          ,iVar19,0);
        fn_82E9AC18(iVar17,uStack00000024,8,auStack_1c0,8,8,8,iVar21);
        pcStack_4fc = pcVar3 + (int)pcStack_4fc;
        uStack_4f8 = (unsigned int)pcStack_4ec | uStack_4f8;
        puStack_500 = &lbl_831898B8 + uStack_4f4;
      }
      if ((*(unsigned int *)(iStack00000014 + 0x6dc4) & 2) != 0) {
        fn_82F26F98(iStack00000014,uStack00000044,*(unsigned int *)(iStack00000014 + 0x568),
                          auStack_1c0,8,iVar18,iVar19,0);
        fn_82E9AC18(iStack00000014,uStack0000002c,8,auStack_1c0,8,8,8,iVar21);
        puStack_500 = puStack_500 + uStack_4f4;
        pcStack_4fc = pcVar3 + (int)pcStack_4fc;
        uStack_4f8 = (unsigned int)pcStack_4ec | uStack_4f8;
      }
      iVar16 = fn_82E9B140(iStack00000014,iVar20,lVar46,uStack_4f8,1);
      iVar14 = iStack00000014;
      puStack_500 = puStack_500 + iVar16;
      if (in_stack_000000a4 != 0) {
        puStack_500 = puStack_500 + 1;
      }
      pcVar37 = pcStack_4fc + (int)puStack_500 * *(int *)(iVar21 + 0x6c);
      uVar13 = ZEXT48(pcStack_4c0);
      fn_82E9FBB0(iStack00000014,uStack0000001c,uStack00000024,uStack0000002c,pcVar27,lVar41,
                    lVar49,uVar13 - ZEXT48(pcStack_450));
      if ((pcStack_4e4 + iVar15 != pcVar38) || (iVar40 + uStack_4e8 != uVar4)) {
        fn_82F261D8(iVar14,uVar12 - 0x4e0,uVar12 - 0x4dc,in_stack_00000054,in_stack_0000005c);
        if (in_stack_000000bc == 1) {
          (**(int (***)())(iVar14 + 0x9b8))();
        }
        else {
          (**(int (***)())(iVar14 + 0x9c0))
                    (uVar6 * *(int *)(iVar14 + 0x564) + uVar5 + iStack00000034,
                     *(int *)(iVar14 + 0x564),auStack_1c0,0x10,(int (**)())((unsigned int)pcVar38 & 3),uVar4 & 3
                     ,*(unsigned int *)(iVar14 + 0x904),*(unsigned int *)(iVar14 + 0x618));
        }
        fn_82E9AC18(iVar14,uStack0000001c,0x10,auStack_1c0,0x10,0x10,0x10,iVar21);
        if (pcVar38 == (int (**)())0x4000) {
          lVar49 = 0x4000;
          lVar30 = 0x4000;
        }
        else {
          uVar24 = (int)(pcVar38 + *(int *)(&lbl_8215F864 + ((unsigned int)pcVar38 & 3) * 4)) >> 1;
          lVar30 = (__int64)(int)uVar24;
          uVar28 = (int)(*(int *)(&lbl_8215F864 + (uVar4 & 3) * 4) + uVar4) >> 1;
          lVar49 = (__int64)(int)uVar28;
          if (*(int *)(iVar14 + 0x314) != 0) {
            if ((uVar24 & 1) != 0) {
              if ((int)uVar24 < 1) {
                lVar30 = lVar30 + 1;
              }
              else {
                lVar30 = lVar30 + -1;
              }
            }
            if ((uVar28 & 1) != 0) {
              if ((int)uVar28 < 1) {
                lVar49 = lVar49 + 1;
              }
              else {
                lVar49 = lVar49 + -1;
              }
            }
          }
        }
        if ((*(unsigned int *)(iVar14 + 0x6dc4) & 1) != 0) {
          fn_82F26F98(iVar14,uStack0000003c,*(unsigned int *)(iVar14 + 0x568),auStack_1c0,8,
                            lVar30,lVar49,0);
          fn_82E9AC18(iVar14,uStack00000024,8,auStack_1c0,8,8,8,iVar21);
          pcStack_4fc = pcVar3 + (int)pcStack_4fc;
          uStack_4f8 = (unsigned int)pcStack_4ec | uStack_4f8;
          puStack_500 = puStack_500 + uStack_4f4;
        }
        if ((*(unsigned int *)(iVar14 + 0x6dc4) & 2) != 0) {
          fn_82F26F98(iVar14,uStack00000044,*(unsigned int *)(iVar14 + 0x568),auStack_1c0,8,
                            lVar30,lVar49,0);
          fn_82E9AC18(iVar14,uStack0000002c,8,auStack_1c0,8,8,8,iVar21);
          pcStack_4fc = pcVar3 + (int)pcStack_4fc;
          uStack_4f8 = (unsigned int)pcStack_4ec | uStack_4f8;
          puStack_500 = puStack_500 + uStack_4f4;
        }
        iVar15 = fn_82E9B140(iVar14,0,0,uStack_4f8,1);
        puStack_500 = puStack_500 + iVar15;
        if (in_stack_000000a4 != 0) {
          puStack_500 = puStack_500 + 1;
        }
        if ((int)(pcStack_4fc + (int)puStack_500 * *(int *)(iVar21 + 0x6c)) < (int)pcVar37) {
          uVar13 = 0;
          pcStack_4c8 = (int (**)())0x0;
          pcStack_4c0 = (int (**)())0x0;
          pcVar37 = pcStack_4fc + (int)puStack_500 * *(int *)(iVar21 + 0x6c);
          uStack_4e8 = uVar4 & 3;
          pcStack_4e4 = (int (**)())((unsigned int)pcVar38 & 3);
          uStack_4c4 = uVar5;
          uStack_4bc = uVar6;
        }
      }
      if (in_stack_000000a4 != 0) {
        if (iStack_4b0 == 0) {
          in_stack_00000064 = in_stack_00000074;
          in_stack_0000006c = in_stack_0000007c;
        }
        if ((pcStack_4e4 + (int)((uVar13 + uStack_4c4 & 0xffffffff) << 2) != in_stack_00000064) ||
           ((int)(pcStack_4c8 + uStack_4bc) * 4 + uStack_4e8 != in_stack_0000006c)) {
          fn_82F261D8(iVar14,uVar12 - 0x4e0,uVar12 - 0x4dc,in_stack_00000054,in_stack_0000005c);
          if (in_stack_000000bc == 1) {
            (**(int (***)())(iVar14 + 0x9b8))();
          }
          else {
            (**(int (***)())(iVar14 + 0x9c0))
                      (((int)in_stack_0000006c >> 2) * *(int *)(iVar14 + 0x564) +
                       ((int)in_stack_00000064 >> 2) + iStack00000034,*(int *)(iVar14 + 0x564),
                       auStack_1c0,0x10,(int (**)())((unsigned int)in_stack_00000064 & 3),in_stack_0000006c & 3,
                       *(unsigned int *)(iVar14 + 0x904),*(unsigned int *)(iVar14 + 0x618));
          }
          fn_82E9AC18(iVar14,uStack0000001c,0x10,auStack_1c0,0x10,0x10,0x10,iVar21);
          if (in_stack_00000064 == (int (**)())0x4000) {
            lVar49 = 0x4000;
            lVar30 = 0x4000;
          }
          else {
            uVar4 = (int)(in_stack_00000064 +
                         *(int *)(&lbl_8215F864 + ((unsigned int)in_stack_00000064 & 3) * 4)) >> 1;
            lVar30 = (__int64)(int)uVar4;
            uVar5 = (int)(*(int *)(&lbl_8215F864 + (in_stack_0000006c & 3) * 4) + in_stack_0000006c)
                    >> 1;
            lVar49 = (__int64)(int)uVar5;
            if (*(int *)(iVar14 + 0x314) != 0) {
              if ((uVar4 & 1) != 0) {
                if ((int)uVar4 < 1) {
                  lVar30 = lVar30 + 1;
                }
                else {
                  lVar30 = lVar30 + -1;
                }
              }
              if ((uVar5 & 1) != 0) {
                if ((int)uVar5 < 1) {
                  lVar49 = lVar49 + 1;
                }
                else {
                  lVar49 = lVar49 + -1;
                }
              }
            }
          }
          if ((*(unsigned int *)(iVar14 + 0x6dc4) & 1) != 0) {
            fn_82F26F98(iVar14,uStack0000003c,*(unsigned int *)(iVar14 + 0x568),auStack_1c0,8,
                              lVar30,lVar49,0);
            fn_82E9AC18(iVar14,uStack00000024,8,auStack_1c0,8,8,8,iVar21);
            puStack_500 = puStack_500 + uStack_4f4;
            pcStack_4fc = pcVar3 + (int)pcStack_4fc;
            uStack_4f8 = (unsigned int)pcStack_4ec | uStack_4f8;
          }
          if ((*(unsigned int *)(iVar14 + 0x6dc4) & 2) != 0) {
            fn_82F26F98(iVar14,uStack00000044,*(unsigned int *)(iVar14 + 0x568),auStack_1c0,8,
                              lVar30,lVar49,0);
            fn_82E9AC18(iVar14,uStack0000002c,8,auStack_1c0,8,8,8,iVar21);
            puStack_500 = puStack_500 + uStack_4f4;
            pcStack_4fc = pcVar3 + (int)pcStack_4fc;
            uStack_4f8 = (unsigned int)pcStack_4ec | uStack_4f8;
          }
          iVar14 = fn_82E9B140(iVar14,0,0,uStack_4f8,1);
          if ((int)(pcStack_4fc + (int)(puStack_500 + iVar14 + 1) * *(int *)(iVar21 + 0x6c)) <
              (int)pcVar37) {
            pcStack_4c8 = (int (**)())0x0;
            pcStack_4c0 = (int (**)())0x0;
            pcVar37 = pcStack_4fc + (int)(puStack_500 + iVar14 + 1) * *(int *)(iVar21 + 0x6c);
            uStack_4c4 = (int)in_stack_00000064 >> 2;
            uStack_4bc = (int)in_stack_0000006c >> 2;
            pcStack_4e4 = (int (**)())((unsigned int)in_stack_00000064 & 3);
            uStack_4e8 = in_stack_0000006c & 3;
          }
        }
      }
    }
  }
  *in_stack_000000dc = pcStack_4e4 + (int)(pcStack_4c0 + uStack_4c4) * 4;
  *in_stack_000000e4 = (int)(pcStack_4c8 + uStack_4bc) * 4 + uStack_4e8;
  *in_stack_000000ec = pcVar37;
  return;
}

