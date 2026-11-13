typedef unsigned char bool;
#define true 1
#define false 0
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_1c0;
extern unsigned int *auStack_470;
extern int fn_82E9AC18();
extern int fn_82E9B0D0();
extern int fn_82E9B140();
extern int fn_82EA4B28();
extern int fn_82EFE140();
extern int fn_82F261D8();
extern int fn_82F26F98();
extern unsigned int iStack00000014;
extern unsigned int iStack_454;
extern unsigned int iStack_4bc;
extern unsigned int lbl_8215F864;
extern unsigned int lbl_831898B8;
extern unsigned int lbl_831AFCA0;
extern unsigned int stack0x00000000;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack0000002c;
extern unsigned int uStack00000034;
extern unsigned int uStack0000003c;
extern unsigned int uStack00000044;
extern unsigned int uStack0000004c;
extern unsigned int uStack_434;
extern unsigned int uStack_438;
extern unsigned int uStack_440;
extern unsigned int uStack_448;
extern unsigned int uStack_44c;
extern unsigned int uStack_450;
extern unsigned int uStack_478;
extern unsigned int uStack_47c;
extern unsigned int uStack_488;
extern unsigned int uStack_48c;
extern unsigned int uStack_4a0;
extern unsigned int uStack_4a8;
extern unsigned int uStack_4b4;
extern unsigned int uStack_4b8;
extern unsigned int uStack_4c0;
extern unsigned int uStack_4c8;
extern unsigned int uStack_4d8;
extern unsigned int uStack_4dc;
extern unsigned int uStack_4e0;


/* WARNING: Removing unreachable block (ram,0x82ebba90) */
/* WARNING: Removing unreachable block (ram,0x82ebaa68) */
/* WARNING: Removing unreachable block (ram,0x82ebbd28) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82EB9498(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,unsigned int param_5
                  ,unsigned int param_6,unsigned int param_7,unsigned int param_8)

{
  unsigned short uVar1;
  unsigned short uVar2;
  int (**pcVar3)();
  int (**pcVar4)();
  unsigned int uVar5;
  int iVar7;
  bool bVar8;
  int *piVar9;
  unsigned __int64 uVar10;
  int iVar13;
  unsigned __int64 uVar11;
  unsigned short uVar18;
  __int64 lVar12;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  unsigned int uVar19;
  unsigned short uVar20;
  unsigned int uVar21;
  __int64 lVar22;
  int iVar24;
  int iVar25;
  unsigned int uVar26;
  unsigned __int64 uVar23;
  unsigned int uVar28;
  unsigned __int64 uVar27;
  __int64 lVar29;
  int *piVar31;
  unsigned __int64 uVar30;
  __int64 lVar32;
  unsigned __int64 uVar33;
  unsigned __int64 uVar34;
  unsigned int uVar35;
  unsigned int uVar36;
  unsigned short *puVar37;
  unsigned int uVar38;
  __int64 lVar39;
  unsigned int uVar40;
  int iVar41;
  __int64 lVar42;
  unsigned int uVar43;
  __int64 lVar44;
  unsigned __int64 uVar45;
  unsigned __int64 uVar46;
  int *piVar47;
  unsigned int *puVar48;
  unsigned __int64 uVar49;
  int *piVar50;
  __int64 lVar51;
  __int64 lVar52;
  int iStack00000014;
  unsigned int uStack0000001c;
  unsigned int uStack00000024;
  unsigned int uStack0000002c;
  unsigned int uStack00000034;
  unsigned int uStack0000003c;
  unsigned int uStack00000044;
  unsigned int uStack0000004c;
  int in_stack_00000054;
  int in_stack_0000005c;
  unsigned int in_stack_00000064;
  unsigned int in_stack_0000006c;
  int *in_stack_00000074;
  unsigned int in_stack_0000007c;
  int in_stack_00000084;
  int in_stack_0000008c;
  unsigned int in_stack_00000094;
  int in_stack_0000009c;
  int in_stack_000000a4;
  unsigned int in_stack_000000ac;
  int in_stack_000000b4;
  int in_stack_000000bc;
  unsigned int *in_stack_000000c4;
  unsigned int in_stack_000000cc;
  int *in_stack_000000d4;
  int *in_stack_000000dc;
  unsigned int *in_stack_000000e4;
  int in_stack_000000ec;
  unsigned int uStack_4e0;
  unsigned int uStack_4dc;
  unsigned int uStack_4d8;
  unsigned int uStack_4c8;
  int *piStack_4c4;
  unsigned int uStack_4c0;
  int iStack_4bc;
  unsigned int uStack_4b8;
  unsigned int uStack_4b4;
  unsigned int uStack_4a8;
  unsigned int uStack_4a0;
  int *piStack_498;
  int *piStack_490;
  unsigned int uStack_48c;
  unsigned int uStack_488;
  unsigned int uStack_47c;
  unsigned int uStack_478;
  unsigned int auStack_470 [7];
  int iStack_454;
  unsigned int uStack_450;
  unsigned int uStack_44c;
  unsigned int uStack_448;
  unsigned __int64 uStack_440;
  unsigned int uStack_438;
  unsigned int uStack_434;
  int aiStack_410 [52];
  int aiStack_340 [52];
  int aiStack_270 [44];
  unsigned char auStack_1c0 [448];
  unsigned int uVar6;
  
  uVar10 = ZEXT48(&stack0x00000000);
  if ((*(unsigned int *)(param_1 + 0x6db8) & 1) == 0) {
    uVar21 = in_stack_000000cc;
    if ((*(unsigned int *)(param_1 + 0x6db8) & 4) == 0) {
      uVar21 = 0;
    }
  }
  else {
    uVar21 = 1;
  }
  iStack00000014 = param_1;
  uStack0000001c = param_2;
  uStack00000024 = param_3;
  uStack0000002c = param_4;
  uStack00000034 = param_5;
  uStack0000003c = param_6;
  uStack00000044 = param_7;
  uStack0000004c = param_8;
  iVar13 = fn_82EFE140(param_1,in_stack_000000c4,uVar21);
  pcVar3 = (int (**)())in_stack_000000c4[1];
  pcVar4 = (int (**)())in_stack_000000c4[2];
  lVar52 = 8;
  iVar17 = (*(int *)(param_1 + 0x2d4) * in_stack_0000005c + in_stack_00000054) * 0x114 +
           *(int *)(param_1 + 0x1e54);
  lVar44 = 0xfffffff;
  lVar32 = uVar10 - 0x474;
  do {
    lVar32 = lVar32 + 4;
    *(unsigned int *)lVar32 = 0xfffffff;
    lVar52 = lVar52 + -1;
  } while (lVar52 != 0);
  iVar15 = 0;
  iVar25 = ((int)in_stack_00000064 >> 2) + 2 >> 2;
  iVar24 = ((int)in_stack_0000006c >> 2) + 2 >> 2;
  uVar5 = (int)in_stack_00000074 >> 2;
  uVar6 = (int)in_stack_0000007c >> 2;
  if (in_stack_000000a4 != 0) {
    iVar16 = (int)(uVar5 + 2) >> 2;
    iVar14 = (int)(uVar6 + 2) >> 2;
    if (0 < in_stack_000000b4) {
      piVar50 = (int *)(param_8 + 0x100);
      do {
        if ((iVar16 == piVar50[-0x20]) && (iVar14 == *piVar50)) break;
        iVar15 = iVar15 + 1;
        piVar50 = piVar50 + 1;
      } while (iVar15 < in_stack_000000b4);
    }
    if (iVar15 == in_stack_000000b4) {
      in_stack_000000b4 = in_stack_000000b4 + 1;
      *(int *)((iVar15 + 0x20) * 4 + param_8) = iVar16;
      *(int *)((iVar15 + 0x40) * 4 + param_8) = iVar14;
    }
  }
  iVar15 = 0;
  if (0 < in_stack_000000b4) {
    piVar50 = (int *)(param_8 + 0x100);
    do {
      if ((iVar25 == piVar50[-0x20]) && (iVar24 == *piVar50)) break;
      iVar15 = iVar15 + 1;
      piVar50 = piVar50 + 1;
    } while (iVar15 < in_stack_000000b4);
  }
  if (iVar15 == in_stack_000000b4) {
    in_stack_000000b4 = in_stack_000000b4 + 1;
    *(int *)((iVar15 + 0x20) * 4 + param_8) = iVar25;
    *(int *)((iVar15 + 0x40) * 4 + param_8) = iVar24;
  }
  piStack_4c4 = aiStack_410;
  uStack_4a0 = 0xfffffff;
  piStack_498 = aiStack_270;
  uStack_4c8 = 0;
  piStack_490 = aiStack_340;
  if (0 < in_stack_000000b4) {
    do {
      piVar9 = piStack_498;
      piVar50 = piStack_4c4;
      uVar21 = uStack0000001c;
      uVar11 = (unsigned __int64)uStack_4c8;
      bVar8 = true;
      uVar33 = (unsigned __int64)in_stack_000000ac;
      iVar15 = (int)((uVar11 + 0x20 & 0xffffffff) << 2);
      uVar45 = -uVar33;
      uStack_4dc = in_stack_000000ac;
      uStack_4d8 = (unsigned int)uVar45;
      iVar25 = (int)((uVar11 + 0x40 & 0x3fffffff) << 2);
      uVar35 = *(unsigned int *)(iVar15 + uStack0000004c);
      uVar46 = (unsigned __int64)*(unsigned int *)(iVar25 + uStack0000004c) & 0x3fffffff;
      lVar39 = uVar46 * 4;
      lVar42 = ((unsigned __int64)uVar35 & 0x3fffffff) * 4;
      uStack_4c0 = in_stack_000000ac;
      uVar40 = (unsigned int)lVar39;
      uVar43 = (unsigned int)lVar42;
      iVar24 = ((int)uVar40 >> 1) * *(int *)(param_1 + 0x568) + ((int)uVar43 >> 1);
      uVar28 = uVar40 * *(int *)(param_1 + 0x564) + uVar43 + uStack00000034;
      uVar19 = iVar24 + uStack0000003c;
      uVar36 = iVar24 + uStack00000044;
      lVar52 = ((unsigned __int64)uVar35 & 0x1fffffff) * 8;
      lVar32 = ((unsigned __int64)*(unsigned int *)(iVar25 + uStack0000004c) & 0x1fffffff) * 8;
      uStack_478 = uStack_4d8;
      if ((1 < (int)in_stack_000000ac) && (uStack_4c8 != 0)) {
        lVar29 = (uVar11 + 0x1f & 0x3fffffff) * 4 + (unsigned __int64)uStack0000004c;
        uVar49 = uVar33;
        uVar30 = uVar45;
        do {
          uStack_4c0 = (unsigned int)uVar49;
          uStack_4dc = (unsigned int)uVar33;
          uStack_4d8 = (unsigned int)uVar30;
          if (!bVar8) break;
          piVar31 = (int *)lVar29;
          iVar24 = *piVar31;
          iVar16 = *(int *)(iVar15 + uStack0000004c);
          if (iVar24 == iVar16) {
            if (piVar31[0x20] == *(int *)(iVar25 + uStack0000004c) + -1) {
              uVar45 = uVar45 + 1;
              bVar8 = false;
            }
            if (piVar31[0x20] == *(int *)(iVar25 + uStack0000004c) + 1) {
              uVar49 = uVar49 - 1;
LAB_82eb9804:
              bVar8 = false;
            }
          }
          else if (piVar31[0x20] == *(int *)(iVar25 + uStack0000004c)) {
            if (iVar24 == iVar16 + -1) {
              uVar30 = uVar30 + 1;
              bVar8 = false;
            }
            if (iVar24 == iVar16 + 1) {
              uVar33 = uVar33 - 1;
              goto LAB_82eb9804;
            }
          }
          uStack_4c0 = (unsigned int)uVar49;
          uStack_4dc = (unsigned int)uVar33;
          uStack_4d8 = (unsigned int)uVar30;
          lVar29 = lVar29 + -4;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
        uStack_478 = (unsigned int)uVar45;
      }
      if ((int)(uStack_4d8 + uVar43) < in_stack_00000084) {
        uStack_4d8 = in_stack_00000084 - uVar43;
      }
      if (in_stack_0000008c < (int)(uStack_4dc + uVar43)) {
        uStack_4dc = in_stack_0000008c - uVar43;
      }
      if ((int)((int)uVar45 + uVar40) < (int)in_stack_00000094) {
        uVar45 = (unsigned __int64)in_stack_00000094 + uVar46 * -4;
        uStack_478 = (unsigned int)uVar45;
      }
      if (in_stack_0000009c < (int)(uStack_4c0 + uVar40)) {
        uStack_4c0 = in_stack_0000009c + (int)uVar46 * -4;
      }
      iVar25 = (int)uVar45;
      if (*(int *)(param_1 + 0x6d94) == 0) {
        if (in_stack_000000a4 == 0) {
          if (iVar25 <= (int)uStack_4c0) {
            uVar46 = ZEXT48(auStack_1c0);
            lVar32 = ((unsigned __int64)uStack_478 & 0x7fffffff) * 2 + lVar32;
            piVar31 = piStack_4c4;
            do {
              uVar11 = (unsigned __int64)uStack_4d8;
              if ((int)uStack_4d8 <= (int)uStack_4dc) {
                puVar48 = (unsigned int *)(piVar31 + -1);
                lVar29 = ((unsigned __int64)uStack_4d8 & 0x7fffffff) * 2 + lVar52;
                do {
                  uVar35 = (unsigned int)uVar45;
                  lVar51 = 0;
                  iVar15 = 7;
                  lVar12 = (*pcVar4)(uStack0000001c,0x10,
                                     (__int64)*(int *)(param_1 + 0x564) * (__int64)(int)uVar35 +
                                     uVar11 + (unsigned __int64)uVar28,*(int *)(param_1 + 0x564),lVar44);
                  iVar24 = (int)lVar44;
                  iVar25 = (int)lVar12;
                  if (((uVar45 & 1) == 0) && ((uVar11 & 1) == 0)) {
                    iVar16 = (int)(unsigned int)uVar11 >> 1;
                    if (((*(unsigned int *)(param_1 + 0x6dc4) & 1) != 0) && (iVar25 < iVar24)) {
                      lVar51 = (*pcVar3)(uStack00000024,8,
                                         (__int64)((int)uVar35 >> 1) *
                                         (__int64)*(int *)(param_1 + 0x568) + (__int64)iVar16 +
                                         (unsigned __int64)uVar19,*(int *)(param_1 + 0x568),lVar44 - lVar12
                                        );
                    }
                    if (((*(unsigned int *)(param_1 + 0x6dc4) & 2) != 0) && (iVar25 + (int)lVar51 < iVar24))
                    {
                      iVar24 = *(int *)(param_1 + 0x568);
                      lVar12 = (lVar44 - lVar12) - lVar51;
                      uVar33 = (__int64)((int)uVar35 >> 1) * (__int64)iVar24 + (__int64)iVar16 +
                               (unsigned __int64)uVar36;
LAB_82eba518:
                      lVar12 = (*pcVar3)(uStack0000002c,8,uVar33,iVar24,lVar12);
                      lVar51 = lVar12 + lVar51;
                    }
                  }
                  else {
                    if (((*(unsigned int *)(param_1 + 0x6dc4) & 1) != 0) && (iVar25 < iVar24)) {
                      fn_82F26F98(param_1,uStack0000003c,*(unsigned int *)(param_1 + 0x568),
                                        uVar46,8,lVar29,lVar32,0);
                      lVar51 = (*pcVar3)(uStack00000024,8,uVar46,8,lVar44 - lVar12);
                    }
                    if (((*(unsigned int *)(param_1 + 0x6dc4) & 2) != 0) && (iVar25 + (int)lVar51 < iVar24))
                    {
                      fn_82F26F98(param_1,uStack00000044,*(unsigned int *)(param_1 + 0x568),
                                        uVar46,8,lVar29,lVar32,0);
                      iVar24 = 8;
                      lVar12 = (lVar44 - lVar12) - lVar51;
                      uVar33 = uVar46;
                      goto LAB_82eba518;
                    }
                  }
                  uVar30 = (uVar11 + lVar42 & 0x3fffffff) * 4 - (unsigned __int64)in_stack_00000064;
                  uVar49 = (uVar45 + lVar39 & 0x3fffffff) * 4 - (unsigned __int64)in_stack_0000006c;
                  uVar33 = (unsigned __int64)((int)uVar30 >> 0x1f);
                  uVar34 = (unsigned __int64)((int)uVar49 >> 0x1f);
                  uVar33 = (uVar30 ^ uVar33) - uVar33;
                  uVar34 = (uVar49 ^ uVar34) - uVar34;
                  if (((int)uVar33 < 0x9f) && ((int)uVar34 < 0x9f)) {
                    iVar24 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar34 & 0xffffffff) << 2)) *
                                      4 + in_stack_000000bc) +
                             *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar33 & 0xffffffff) << 2)) *
                                      4 + in_stack_000000bc);
                  }
                  else {
                    iVar24 = *(int *)(in_stack_000000bc + 0x14) << 1;
                  }
                  uVar26 = iVar25 + iVar24 + (int)lVar51;
                  if ((int)uVar26 < iStack_454) {
                    lVar12 = uVar10 - 0x458;
                    do {
                      if (*(int *)lVar12 <= (int)uVar26) break;
                      iVar15 = iVar15 + -1;
                      lVar12 = lVar12 + -4;
                    } while (iVar15 != 0);
                    if (iVar15 < 7) {
                      iVar25 = 7 - iVar15;
                      puVar37 = (unsigned short *)(in_stack_000000ec + 0x18);
                      do {
                        uVar18 = *puVar37;
                        uVar20 = puVar37[1];
                        *(unsigned int *)((int)auStack_470 + (4 - in_stack_000000ec) + (int)puVar37) =
                             *(unsigned int *)(((int)auStack_470 - in_stack_000000ec) + (int)puVar37);
                        puVar37[2] = uVar18;
                        puVar37[3] = uVar20;
                        puVar37 = puVar37 + -2;
                        iVar25 = iVar25 + -1;
                      } while (iVar25 != 0);
                    }
                    *(short *)(iVar15 * 4 + in_stack_000000ec) = (short)(uVar11 + lVar42);
                    auStack_470[iVar15] = uVar26;
                    *(short *)(iVar15 * 4 + in_stack_000000ec + 2) = (short)(uVar45 + lVar39);
                    if (iVar15 == 0) {
                      lVar44 = (unsigned __int64)auStack_470[0] + 1;
                      iStack_4bc = (int)lVar51;
                      uStack_4b8 = uVar35;
                      uStack_4b4 = (unsigned int)uVar11;
                    }
                  }
                  uVar11 = uVar11 + 1;
                  puVar48 = puVar48 + 1;
                  *puVar48 = uVar26;
                  lVar29 = lVar29 + 2;
                } while ((int)uVar11 <= (int)uStack_4dc);
              }
              uVar45 = uVar45 + 1;
              lVar32 = lVar32 + 2;
              piVar31 = piVar31 + 7;
            } while ((int)uVar45 <= (int)uStack_4c0);
          }
        }
        else if (iVar25 <= (int)uStack_4c0) {
          lVar32 = ((unsigned __int64)uStack_478 & 0x7fffffff) * 2 + lVar32;
          piVar31 = piStack_498;
          do {
            uVar46 = (unsigned __int64)uStack_4d8;
            if ((int)uStack_4d8 <= (int)uStack_4dc) {
              lVar29 = ((unsigned __int64)uStack_4d8 & 0x7fffffff) * 2 + lVar52;
              piVar47 = piVar31;
              do {
                uVar35 = (unsigned int)uVar45;
                uVar11 = 7;
                lVar51 = 0;
                lVar12 = (*pcVar4)(uStack0000001c,0x10,
                                   (__int64)*(int *)(param_1 + 0x564) * (__int64)(int)uVar35 +
                                   uVar46 + (unsigned __int64)uVar28,*(int *)(param_1 + 0x564),lVar44);
                iVar24 = (int)lVar44;
                uVar26 = (unsigned int)uVar46;
                iVar25 = (int)lVar12;
                if (((uVar45 & 1) == 0) && ((uVar46 & 1) == 0)) {
                  if (((*(unsigned int *)(param_1 + 0x6dc4) & 1) != 0) && (iVar25 < iVar24)) {
                    lVar51 = (*pcVar3)(uStack00000024,8,
                                       (__int64)((int)uVar35 >> 1) *
                                       (__int64)*(int *)(param_1 + 0x568) +
                                       (__int64)((int)uVar26 >> 1) + (unsigned __int64)uVar19,
                                       *(int *)(param_1 + 0x568),lVar44 - lVar12);
                  }
                  if (((*(unsigned int *)(param_1 + 0x6dc4) & 2) != 0) && (iVar25 + (int)lVar51 < iVar24)) {
                    iVar24 = *(int *)(param_1 + 0x568);
                    uVar33 = (__int64)((int)uVar35 >> 1) * (__int64)iVar24 +
                             (__int64)((int)uVar26 >> 1) + (unsigned __int64)uVar36;
                    lVar12 = (lVar44 - lVar12) - lVar51;
LAB_82eba078:
                    lVar12 = (*pcVar3)(uStack0000002c,8,uVar33,iVar24,lVar12);
                    lVar51 = lVar12 + lVar51;
                  }
                }
                else {
                  if (((*(unsigned int *)(param_1 + 0x6dc4) & 1) != 0) && (iVar25 < iVar24)) {
                    fn_82F26F98(param_1,uStack0000003c,*(unsigned int *)(param_1 + 0x568),
                                      auStack_1c0,8,lVar29,lVar32,0);
                    lVar51 = (*pcVar3)(uStack00000024,8,auStack_1c0,8,lVar44 - lVar12);
                  }
                  uVar33 = ZEXT48(auStack_1c0);
                  if (((*(unsigned int *)(param_1 + 0x6dc4) & 2) != 0) && (iVar25 + (int)lVar51 < iVar24)) {
                    fn_82F26F98(param_1,uStack00000044,*(unsigned int *)(param_1 + 0x568),uVar33
                                      ,8,lVar29,lVar32,0);
                    iVar24 = 8;
                    lVar12 = (lVar44 - lVar12) - lVar51;
                    goto LAB_82eba078;
                  }
                }
                lVar22 = (uVar46 + lVar42 & 0x3fffffff) * 4;
                lVar12 = (uVar45 + lVar39 & 0x3fffffff) * 4;
                uVar49 = lVar12 - (unsigned __int64)in_stack_0000006c;
                uVar33 = (unsigned __int64)((int)(lVar22 - (unsigned __int64)in_stack_00000064) >> 0x1f);
                uVar30 = (unsigned __int64)((int)uVar49 >> 0x1f);
                uVar33 = (lVar22 - (unsigned __int64)in_stack_00000064 ^ uVar33) - uVar33;
                uVar30 = (uVar49 ^ uVar30) - uVar30;
                if (((int)uVar33 < 0x9f) && ((int)uVar30 < 0x9f)) {
                  iVar24 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar30 & 0xffffffff) << 2)) * 4
                                   + in_stack_000000bc) +
                           *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar33 & 0xffffffff) << 2)) * 4
                                   + in_stack_000000bc);
                }
                else {
                  iVar24 = *(int *)(in_stack_000000bc + 0x14) << 1;
                }
                iVar15 = (int)lVar51;
                iVar24 = iVar24 + iVar25 + iVar15;
                uVar20 = (unsigned short)(uVar46 + lVar42);
                uVar18 = (unsigned short)(uVar45 + lVar39);
                if (iVar24 < iStack_454) {
                  lVar51 = uVar10 - 0x458;
                  do {
                    if (*(int *)lVar51 <= iVar24) break;
                    uVar11 = uVar11 - 1;
                    lVar51 = lVar51 + -4;
                  } while (uVar11 != 0);
                  if ((int)uVar11 < 7) {
                    lVar51 = 7 - uVar11;
                    puVar37 = (unsigned short *)(in_stack_000000ec + 0x18);
                    do {
                      uVar1 = *puVar37;
                      uVar2 = puVar37[1];
                      *(unsigned int *)((int)puVar37 + (int)auStack_470 + (4 - in_stack_000000ec)) =
                           *(unsigned int *)((int)puVar37 + ((int)auStack_470 - in_stack_000000ec));
                      puVar37[2] = uVar1;
                      puVar37[3] = uVar2;
                      puVar37 = puVar37 + -2;
                      lVar51 = lVar51 + -1;
                    } while (lVar51 != 0);
                  }
                  iVar16 = (int)((uVar11 & 0xffffffff) << 2);
                  *(unsigned short *)(iVar16 + in_stack_000000ec) = uVar20;
                  *(int *)((int)auStack_470 + iVar16) = iVar24;
                  *(unsigned short *)(iVar16 + in_stack_000000ec + 2) = uVar18;
                  uStack_440 = lVar22;
                  if ((int)uVar11 == 0) {
                    lVar44 = (unsigned __int64)auStack_470[0] + 1;
                    uStack_4e0 = 0;
                    iStack_4bc = iVar15;
                    uStack_4b8 = uVar35;
                    uStack_4b4 = uVar26;
                  }
                }
                *(int *)((int)piVar47 + ((int)piStack_4c4 - (int)piStack_498)) = iVar24;
                uVar30 = lVar12 - (unsigned __int64)in_stack_0000007c;
                uVar49 = (unsigned __int64)((int)(lVar22 - ZEXT48(in_stack_00000074)) >> 0x1f);
                uVar33 = (unsigned __int64)((int)uVar30 >> 0x1f);
                uVar49 = (lVar22 - ZEXT48(in_stack_00000074) ^ uVar49) - uVar49;
                uVar33 = (uVar30 ^ uVar33) - uVar33;
                if (((int)uVar49 < 0x9f) && ((int)uVar33 < 0x9f)) {
                  iVar24 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar33 & 0xffffffff) << 2)) * 4
                                   + in_stack_000000bc) +
                           *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar49 & 0xffffffff) << 2)) * 4
                                   + in_stack_000000bc);
                }
                else {
                  iVar24 = *(int *)(in_stack_000000bc + 0x14) << 1;
                }
                lVar12 = (uVar11 & 0x3fffffff) * 4;
                lVar51 = lVar12 + (uVar10 - 0x470);
                iVar25 = iVar24 + iVar25 + iVar15;
                if (iVar25 < *(int *)((int)lVar12 + (int)(uVar10 - 0x470))) {
                  if ((int)uVar11 != 0) {
                    do {
                      lVar51 = lVar51 + -4;
                      if (*(int *)lVar51 <= iVar25) break;
                      uVar11 = uVar11 - 1;
                    } while (uVar11 != 0);
                  }
                  if ((int)uVar11 < 7) {
                    lVar12 = 7 - uVar11;
                    puVar37 = (unsigned short *)(in_stack_000000ec + 0x18);
                    do {
                      uVar1 = *puVar37;
                      uVar2 = puVar37[1];
                      *(unsigned int *)((int)puVar37 + (int)auStack_470 + (4 - in_stack_000000ec)) =
                           *(unsigned int *)((int)puVar37 + ((int)auStack_470 - in_stack_000000ec));
                      puVar37[2] = uVar1;
                      puVar37[3] = uVar2;
                      puVar37 = puVar37 + -2;
                      lVar12 = lVar12 + -1;
                    } while (lVar12 != 0);
                  }
                  iVar24 = (int)((uVar11 & 0xffffffff) << 2);
                  *(unsigned short *)(iVar24 + in_stack_000000ec) = uVar20;
                  *(int *)((int)auStack_470 + iVar24) = iVar25;
                  *(unsigned short *)(iVar24 + in_stack_000000ec + 2) = uVar18;
                  if ((int)uVar11 == 0) {
                    lVar44 = (unsigned __int64)auStack_470[0] + 1;
                    uStack_4e0 = 1;
                    iStack_4bc = iVar15;
                    uStack_4b8 = uVar35;
                    uStack_4b4 = uVar26;
                  }
                }
                uVar46 = uVar46 + 1;
                *piVar47 = iVar25;
                lVar29 = lVar29 + 2;
                piVar47 = piVar47 + 1;
              } while ((int)uVar46 <= (int)uStack_4dc);
            }
            uVar45 = uVar45 + 1;
            lVar32 = lVar32 + 2;
            piVar31 = piVar31 + 7;
          } while ((int)uVar45 <= (int)uStack_4c0);
        }
      }
      else {
        piVar31 = piStack_498;
        if (in_stack_000000a4 == 0) {
          if (iVar25 <= (int)uStack_4c0) {
            piVar31 = piStack_4c4;
            do {
              uVar46 = (unsigned __int64)uStack_4d8;
              if ((int)uStack_4d8 <= (int)uStack_4dc) {
                puVar48 = (unsigned int *)(piVar31 + -1);
                do {
                  uVar35 = (unsigned int)uVar45;
                  iVar15 = 7;
                  lVar52 = 0;
                  lVar32 = (*pcVar4)(uVar21,0x10,
                                     (__int64)*(int *)(param_1 + 0x564) * (__int64)(int)uVar35 +
                                     uVar46 + (unsigned __int64)uVar28,*(int *)(param_1 + 0x564),lVar44);
                  iVar25 = (int)(unsigned int)uVar46 >> 1;
                  iVar24 = (int)lVar32;
                  if (((*(unsigned int *)(param_1 + 0x6dc4) & 1) != 0) && (iVar24 < (int)lVar44)) {
                    lVar52 = (*pcVar3)(uStack00000024,8,
                                       (__int64)((int)uVar35 >> 1) *
                                       (__int64)*(int *)(param_1 + 0x568) + (__int64)iVar25 +
                                       (unsigned __int64)uVar19,*(int *)(param_1 + 0x568),lVar44 - lVar32);
                  }
                  if (((*(unsigned int *)(param_1 + 0x6dc4) & 2) != 0) &&
                     (iVar24 + (int)lVar52 < (int)lVar44)) {
                    lVar32 = (*pcVar3)(uStack0000002c,8,
                                       (__int64)((int)uVar35 >> 1) *
                                       (__int64)*(int *)(param_1 + 0x568) + (__int64)iVar25 +
                                       (unsigned __int64)uVar36,*(int *)(param_1 + 0x568),
                                       (lVar44 - lVar32) - lVar52);
                    lVar52 = lVar32 + lVar52;
                  }
                  uVar49 = (uVar46 + lVar42 & 0x3fffffff) * 4 - (unsigned __int64)in_stack_00000064;
                  uVar33 = (uVar45 + lVar39 & 0x3fffffff) * 4 - (unsigned __int64)in_stack_0000006c;
                  uVar11 = (unsigned __int64)((int)uVar49 >> 0x1f);
                  uVar30 = (unsigned __int64)((int)uVar33 >> 0x1f);
                  uVar11 = (uVar49 ^ uVar11) - uVar11;
                  uVar30 = (uVar33 ^ uVar30) - uVar30;
                  if (((int)uVar11 < 0x9f) && ((int)uVar30 < 0x9f)) {
                    iVar25 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar30 & 0xffffffff) << 2)) *
                                      4 + in_stack_000000bc) +
                             *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar11 & 0xffffffff) << 2)) *
                                      4 + in_stack_000000bc);
                  }
                  else {
                    iVar25 = *(int *)(in_stack_000000bc + 0x14) << 1;
                  }
                  uVar26 = iVar25 + iVar24 + (int)lVar52;
                  if ((int)uVar26 < iStack_454) {
                    lVar32 = uVar10 - 0x458;
                    do {
                      if (*(int *)lVar32 <= (int)uVar26) break;
                      iVar15 = iVar15 + -1;
                      lVar32 = lVar32 + -4;
                    } while (iVar15 != 0);
                    if (iVar15 < 7) {
                      iVar25 = 7 - iVar15;
                      puVar37 = (unsigned short *)(in_stack_000000ec + 0x18);
                      do {
                        uVar18 = *puVar37;
                        uVar20 = puVar37[1];
                        *(unsigned int *)((int)puVar37 + (int)auStack_470 + (4 - in_stack_000000ec)) =
                             *(unsigned int *)((int)puVar37 + ((int)auStack_470 - in_stack_000000ec));
                        puVar37[2] = uVar18;
                        puVar37[3] = uVar20;
                        puVar37 = puVar37 + -2;
                        iVar25 = iVar25 + -1;
                      } while (iVar25 != 0);
                    }
                    *(short *)(iVar15 * 4 + in_stack_000000ec) = (short)(uVar46 + lVar42);
                    auStack_470[iVar15] = uVar26;
                    *(short *)(iVar15 * 4 + in_stack_000000ec + 2) = (short)(uVar45 + lVar39);
                    if (iVar15 == 0) {
                      lVar44 = (unsigned __int64)auStack_470[0] + 1;
                      iStack_4bc = (int)lVar52;
                      uStack_4b8 = uVar35;
                      uStack_4b4 = (unsigned int)uVar46;
                    }
                  }
                  uVar46 = uVar46 + 1;
                  puVar48 = puVar48 + 1;
                  *puVar48 = uVar26;
                } while ((int)uVar46 <= (int)uStack_4dc);
              }
              uVar45 = uVar45 + 1;
              piVar31 = piVar31 + 7;
            } while ((int)uVar45 <= (int)uStack_4c0);
          }
        }
        else {
          while (iVar25 <= (int)uStack_4c0) {
            uVar46 = (unsigned __int64)uStack_4d8;
            if ((int)uStack_4d8 <= (int)uStack_4dc) {
              piVar47 = piVar31;
              do {
                uVar35 = (unsigned int)uVar45;
                uVar11 = 7;
                lVar52 = 0;
                lVar32 = (*pcVar4)(uStack0000001c,0x10,
                                   (__int64)*(int *)(param_1 + 0x564) * (__int64)(int)uVar35 +
                                   uVar46 + (unsigned __int64)uVar28,*(int *)(param_1 + 0x564),lVar44);
                uVar26 = (unsigned int)uVar46;
                iVar25 = (int)lVar32;
                if (((*(unsigned int *)(param_1 + 0x6dc4) & 1) != 0) && (iVar25 < (int)lVar44)) {
                  lVar52 = (*pcVar3)(uStack00000024,8,
                                     (__int64)((int)uVar35 >> 1) *
                                     (__int64)*(int *)(param_1 + 0x568) +
                                     (__int64)((int)uVar26 >> 1) + (unsigned __int64)uVar19,
                                     *(int *)(param_1 + 0x568),lVar44 - lVar32);
                }
                if (((*(unsigned int *)(param_1 + 0x6dc4) & 2) != 0) && (iVar25 + (int)lVar52 < (int)lVar44)
                   ) {
                  lVar32 = (*pcVar3)(uStack0000002c,8,
                                     (__int64)((int)uVar35 >> 1) *
                                     (__int64)*(int *)(param_1 + 0x568) +
                                     (__int64)((int)uVar26 >> 1) + (unsigned __int64)uVar36,
                                     *(int *)(param_1 + 0x568),(lVar44 - lVar32) - lVar52);
                  lVar52 = lVar32 + lVar52;
                }
                lVar29 = (uVar46 + lVar42 & 0x3fffffff) * 4;
                lVar32 = (uVar45 + lVar39 & 0x3fffffff) * 4;
                uVar30 = lVar29 - (unsigned __int64)in_stack_00000064;
                uVar49 = lVar32 - (unsigned __int64)in_stack_0000006c;
                uVar33 = (unsigned __int64)((int)uVar30 >> 0x1f);
                uVar34 = (unsigned __int64)((int)uVar49 >> 0x1f);
                uVar33 = (uVar30 ^ uVar33) - uVar33;
                uVar34 = (uVar49 ^ uVar34) - uVar34;
                if (((int)uVar33 < 0x9f) && ((int)uVar34 < 0x9f)) {
                  iVar24 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar34 & 0xffffffff) << 2)) * 4
                                   + in_stack_000000bc) +
                           *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar33 & 0xffffffff) << 2)) * 4
                                   + in_stack_000000bc);
                }
                else {
                  iVar24 = *(int *)(in_stack_000000bc + 0x14) << 1;
                }
                iVar15 = (int)lVar52;
                iVar24 = iVar24 + iVar25 + iVar15;
                uVar20 = (unsigned short)(uVar46 + lVar42);
                uVar18 = (unsigned short)(uVar45 + lVar39);
                if (iVar24 < iStack_454) {
                  lVar52 = uVar10 - 0x458;
                  do {
                    if (*(int *)lVar52 <= iVar24) break;
                    uVar11 = uVar11 - 1;
                    lVar52 = lVar52 + -4;
                  } while (uVar11 != 0);
                  if ((int)uVar11 < 7) {
                    lVar52 = 7 - uVar11;
                    puVar37 = (unsigned short *)(in_stack_000000ec + 0x18);
                    do {
                      uVar1 = *puVar37;
                      uVar2 = puVar37[1];
                      *(unsigned int *)((int)auStack_470 + (4 - in_stack_000000ec) + (int)puVar37) =
                           *(unsigned int *)(((int)auStack_470 - in_stack_000000ec) + (int)puVar37);
                      puVar37[2] = uVar1;
                      puVar37[3] = uVar2;
                      puVar37 = puVar37 + -2;
                      lVar52 = lVar52 + -1;
                    } while (lVar52 != 0);
                  }
                  iVar16 = (int)((uVar11 & 0xffffffff) << 2);
                  *(unsigned short *)(iVar16 + in_stack_000000ec) = uVar20;
                  *(int *)((int)auStack_470 + iVar16) = iVar24;
                  *(unsigned short *)(iVar16 + in_stack_000000ec + 2) = uVar18;
                  if ((int)uVar11 == 0) {
                    lVar44 = (unsigned __int64)auStack_470[0] + 1;
                    uStack_4e0 = 0;
                    iStack_4bc = iVar15;
                    uStack_4b8 = uVar35;
                    uStack_4b4 = uVar26;
                  }
                }
                uVar34 = lVar29 - ZEXT48(in_stack_00000074);
                *(int *)(((int)piStack_4c4 - (int)piStack_498) + (int)piVar47) = iVar24;
                uVar30 = lVar32 - (unsigned __int64)in_stack_0000007c;
                uVar49 = (unsigned __int64)((int)uVar34 >> 0x1f);
                uVar33 = (unsigned __int64)((int)uVar30 >> 0x1f);
                uVar49 = (uVar34 ^ uVar49) - uVar49;
                uVar33 = (uVar30 ^ uVar33) - uVar33;
                if (((int)uVar49 < 0x9f) && ((int)uVar33 < 0x9f)) {
                  iVar24 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar33 & 0xffffffff) << 2)) * 4
                                   + in_stack_000000bc) +
                           *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar49 & 0xffffffff) << 2)) * 4
                                   + in_stack_000000bc);
                }
                else {
                  iVar24 = *(int *)(in_stack_000000bc + 0x14) << 1;
                }
                lVar32 = (uVar11 & 0x3fffffff) * 4;
                lVar52 = lVar32 + (uVar10 - 0x470);
                iVar25 = iVar24 + iVar25 + iVar15;
                if (iVar25 < *(int *)((int)lVar32 + (int)(uVar10 - 0x470))) {
                  if ((int)uVar11 != 0) {
                    do {
                      lVar52 = lVar52 + -4;
                      if (*(int *)lVar52 <= iVar25) break;
                      uVar11 = uVar11 - 1;
                    } while (uVar11 != 0);
                  }
                  if ((int)uVar11 < 7) {
                    lVar32 = 7 - uVar11;
                    puVar37 = (unsigned short *)(in_stack_000000ec + 0x18);
                    do {
                      uVar1 = *puVar37;
                      uVar2 = puVar37[1];
                      *(unsigned int *)((int)puVar37 + (int)auStack_470 + (4 - in_stack_000000ec)) =
                           *(unsigned int *)((int)puVar37 + ((int)auStack_470 - in_stack_000000ec));
                      puVar37[2] = uVar1;
                      puVar37[3] = uVar2;
                      puVar37 = puVar37 + -2;
                      lVar32 = lVar32 + -1;
                    } while (lVar32 != 0);
                  }
                  iVar24 = (int)((uVar11 & 0xffffffff) << 2);
                  *(unsigned short *)(iVar24 + in_stack_000000ec) = uVar20;
                  *(int *)((int)auStack_470 + iVar24) = iVar25;
                  *(unsigned short *)(iVar24 + in_stack_000000ec + 2) = uVar18;
                  if ((int)uVar11 == 0) {
                    lVar44 = (unsigned __int64)auStack_470[0] + 1;
                    uStack_4e0 = 1;
                    iStack_4bc = iVar15;
                    uStack_4b8 = uVar35;
                    uStack_4b4 = uVar26;
                  }
                }
                uVar46 = uVar46 + 1;
                *piVar47 = iVar25;
                piVar47 = piVar47 + 1;
              } while ((int)uVar46 <= (int)uStack_4dc);
            }
            uVar45 = uVar45 + 1;
            piVar31 = piVar31 + 7;
            iVar25 = (int)uVar45;
          }
        }
      }
      if ((int)auStack_470[0] < (int)uStack_4a0) {
        uStack_4a8 = uStack_4b4;
        uStack_4a0 = auStack_470[0];
        uStack_48c = uStack_4b8;
        uStack_450 = iStack_4bc;
        uStack_44c = uStack_4d8;
        uStack_448 = uStack_478;
        uStack_438 = uStack_4dc;
        uStack_434 = uStack_4c0;
        uStack_488 = uVar40;
        uStack_47c = uVar43;
        if ((in_stack_000000a4 == 0) || (uStack_4e0 == 0)) {
          piStack_4c4 = piStack_490;
          piStack_490 = piVar50;
        }
        else {
          piStack_498 = piStack_490;
          piStack_490 = piVar9;
        }
      }
      uStack_4c8 = uStack_4c8 + 1;
    } while ((int)uStack_4c8 < in_stack_000000b4);
  }
  uVar46 = (unsigned __int64)in_stack_0000007c;
  uVar45 = ZEXT48(in_stack_00000074);
  uVar11 = (unsigned __int64)uStack_4a8 + (unsigned __int64)uStack_47c;
  lVar32 = (uVar11 & 0x3fffffff) * 4;
  lVar44 = ((unsigned __int64)uStack_48c + (unsigned __int64)uStack_488 & 0x3fffffff) * 4;
  iVar25 = (int)lVar32;
  iVar24 = (int)lVar44;
  if (in_stack_000000a4 != 0) {
    uVar49 = (unsigned __int64)*(unsigned int *)(param_1 + 0xa34);
    uVar33 = (unsigned __int64)*(unsigned int *)(param_1 + 0xa38);
    lVar39 = (((unsigned __int64)*(unsigned int *)(param_1 + 0xa2c) - (unsigned __int64)in_stack_00000064) + lVar32 &
             uVar49) - (unsigned __int64)*(unsigned int *)(param_1 + 0xa2c);
    lVar42 = (((unsigned __int64)*(unsigned int *)(param_1 + 0xa30) - (unsigned __int64)in_stack_0000006c) + lVar44 &
             uVar33) - (unsigned __int64)*(unsigned int *)(param_1 + 0xa30);
    iVar15 = (int)lVar39;
    lVar52 = lVar32;
    if ((((iVar15 < 0x9f) && (-0x9f < iVar15)) && ((int)lVar42 < 0x9f)) && (-0x9f < (int)lVar42)) {
      fn_82E9B0D0(lVar39,uVar10 - 0x4e0);
      fn_82E9B0D0(lVar42,uVar10 - 0x4a4);
      lVar39 = (ZEXT48(pcVar3) + (ZEXT48(pcVar3) & 0x7fffffff) * 2 & 0x7fffffff) * 2 +
               (unsigned __int64)uStack_4e0 + -1;
    }
    else {
      lVar39 = 0x22;
    }
    uVar30 = lVar39 + 0x25;
    iVar15 = (int)uVar30;
    if ((iVar15 == 0x22) || (iVar15 == 0x47)) {
      iVar16 = *(int *)(param_1 + 0x5154);
      uVar35 = *(unsigned int *)(param_1 + 0xa24);
      iVar15 = *(int *)((int)((uVar30 & 0xffffffff) << 3) + iVar16 + 4) + *(int *)(param_1 + 0xa28);
    }
    else {
      iVar16 = *(int *)(param_1 + 0x5154);
      uVar35 = (unsigned int)(unsigned char)(&lbl_831AFCA0)[iVar15];
      iVar15 = *(int *)((int)((uVar30 & 0xffffffff) << 3) + iVar16 + 4);
    }
    lVar52 = ((*(unsigned int *)(param_1 + 0xa2c) - uVar45) + lVar52 & uVar49) -
             (unsigned __int64)*(unsigned int *)(param_1 + 0xa2c);
    lVar39 = ((*(unsigned int *)(param_1 + 0xa30) - uVar46) + lVar44 & uVar33) -
             (unsigned __int64)*(unsigned int *)(param_1 + 0xa30);
    iVar14 = (int)lVar52;
    if (((iVar14 < 0x9f) && (-0x9f < iVar14)) && (((int)lVar39 < 0x9f && (-0x9f < (int)lVar39)))) {
      fn_82E9B0D0(lVar52,uVar10 - 0x4e0);
      fn_82E9B0D0(lVar39,uVar10 - 0x4a4);
      lVar52 = (ZEXT48(pcVar3) + (ZEXT48(pcVar3) & 0x7fffffff) * 2 & 0x7fffffff) * 2 +
               (unsigned __int64)uStack_4e0 + -1;
    }
    else {
      lVar52 = 0x22;
    }
    uVar33 = lVar52 + 0x25;
    iVar14 = (int)uVar33;
    if ((iVar14 == 0x22) || (iVar14 == 0x47)) {
      uVar19 = *(unsigned int *)(param_1 + 0xa24);
      iVar16 = *(int *)((int)((uVar33 & 0xffffffff) << 3) + iVar16 + 4) + *(int *)(param_1 + 0xa28);
    }
    else {
      uVar19 = (unsigned int)(unsigned char)(&lbl_831AFCA0)[iVar14];
      iVar16 = *(int *)((int)((uVar33 & 0xffffffff) << 3) + iVar16 + 4);
    }
    if ((int)(iVar16 + uVar19) <= (int)(iVar15 + uVar35)) goto LAB_82eba958;
  }
  uVar46 = (unsigned __int64)in_stack_0000006c;
  uVar45 = (unsigned __int64)in_stack_00000064;
LAB_82eba958:
  if ((*(unsigned int *)(param_1 + 0x6db8) & 2) == 0) {
    if ((*(unsigned int *)(param_1 + 0x6db8) & 8) == 0) {
      in_stack_000000cc = 0;
    }
  }
  else {
    in_stack_000000cc = 1;
  }
  iVar14 = fn_82EFE140(param_1,in_stack_000000c4,in_stack_000000cc);
  uVar21 = uStack0000001c;
  iVar16 = iStack00000014;
  pcVar3 = (int (**)())in_stack_000000c4[3];
  pcVar4 = (int (**)())*in_stack_000000c4;
  iVar15 = *(int *)(param_1 + 0x564);
  uVar28 = (unsigned int)uVar46;
  uVar35 = (int)uVar28 >> 2;
  uVar36 = (unsigned int)uVar45;
  uVar19 = (int)uVar36 >> 2;
  if (uStack_4a0 == 0xfffffff) {
    uVar33 = (unsigned __int64)(int)uVar19;
    uStack_4a8 = 0;
    uStack_48c = 0;
    (**(int (***)())(param_1 + 0x9b8))
              ((__int64)iVar15 * (__int64)(int)uVar35 + uVar33 + (unsigned __int64)uStack00000034,iVar15,
               auStack_1c0,0x10,uVar45 & 3,uVar46 & 3,*(unsigned int *)(param_1 + 0x904),
               *(unsigned int *)(param_1 + 0x618));
    iVar13 = (*pcVar3)(uStack0000001c,0x10,auStack_1c0,0x10,0x10);
    uStack_488 = uVar35;
    uStack_4a0 = iVar13 + *(int *)(lbl_831898B8 * 4 + in_stack_000000bc) +
                          *(int *)(lbl_831898B8 * 4 + in_stack_000000bc);
    piStack_4c4 = (int *)(uVar45 & 3);
    uStack_4c0 = (unsigned int)(uVar46 & 3);
  }
  else {
    iVar41 = (int)((unsigned __int64)uStack_48c + (unsigned __int64)uStack_488);
    uVar34 = (unsigned __int64)uStack0000003c;
    uVar49 = (unsigned __int64)uStack00000034;
    uVar30 = (unsigned __int64)uStack00000044;
    lVar52 = (__int64)(iVar41 >> 1) * (__int64)*(int *)(param_1 + 0x568) +
             (__int64)((int)uVar11 >> 1);
    uVar33 = ((*(unsigned int *)(param_1 + 0xa2c) - uVar45) + lVar32 & (unsigned __int64)*(unsigned int *)(param_1 + 0xa34)
             ) - (unsigned __int64)*(unsigned int *)(param_1 + 0xa2c);
    uVar11 = ((*(unsigned int *)(param_1 + 0xa30) - uVar46) + lVar44 & (unsigned __int64)*(unsigned int *)(param_1 + 0xa38)
             ) - (unsigned __int64)*(unsigned int *)(param_1 + 0xa30);
    lVar39 = (__int64)iVar41 * (__int64)iVar15 + (unsigned __int64)uStack_4a8 + (unsigned __int64)uStack_47c +
             uVar49;
    iVar7 = iVar24 >> 1;
    iVar41 = iVar25 >> 1;
    if (*(int *)(param_1 + 0x6d84) == 0) {
      iVar25 = iVar25 >> 2;
      uStack_488 = iVar24 >> 2;
      iVar17 = iStack00000014;
      uVar38 = uStack00000024;
      if (iVar14 != iVar13) {
        uVar27 = (unsigned __int64)((int)uVar33 >> 0x1f);
        uVar23 = (unsigned __int64)((int)uVar11 >> 0x1f);
        uVar27 = (uVar33 ^ uVar27) - uVar27;
        uVar23 = (uVar11 ^ uVar23) - uVar23;
        if (((int)uVar27 < 0x9f) && ((int)uVar23 < 0x9f)) {
          iVar13 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar23 & 0xffffffff) << 2)) * 4 +
                           in_stack_000000bc) +
                   *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar27 & 0xffffffff) << 2)) * 4 +
                           in_stack_000000bc);
        }
        else {
          iVar13 = *(int *)(in_stack_000000bc + 0x14) << 1;
        }
        iVar24 = (*pcVar3)(uStack0000001c,0x10,
                           (__int64)(int)uStack_488 * (__int64)iVar15 + (__int64)iVar25 + uVar49,
                           iVar15,0x10);
        iVar17 = iStack00000014;
        fn_82F26F98(iStack00000014,uVar34,*(unsigned int *)(iStack00000014 + 0x568),auStack_1c0,
                          8,iVar41,iVar7,0);
        uVar38 = uStack00000024;
        iVar15 = (*pcVar4)(uStack00000024,8,auStack_1c0,8);
        fn_82F26F98(iVar17,uVar30,*(unsigned int *)(iVar17 + 0x568),auStack_1c0,8,iVar41,iVar7,0
                         );
        iVar16 = (*pcVar4)(uStack0000002c,8,auStack_1c0,8);
        uStack_4a0 = iVar16 + iVar15 + iVar24 + iVar13;
      }
      uStack_450 = uStack_44c;
      uStack_440 = uVar49;
      (**(int (***)())(iVar17 + 0x6f34))
                (iVar17,uVar21,uVar38,uStack0000002c,uVar49,uVar34,uVar30,(unsigned __int64)uStack_47c);
      uVar11 = uStack_440;
      uStack_48c = 0;
      uStack_4c0 = 0;
      piStack_4c4 = (int *)0x0;
      uVar33 = (unsigned __int64)iVar25;
      piVar50 = (int *)(uVar45 & 3);
      uVar40 = (unsigned int)(uVar46 & 3);
      if (((piVar50 != (int *)0x0) || (uVar40 != 0)) &&
         ((iVar25 * 4 != uVar36 || (uStack_488 * 4 != uVar28)))) {
        fn_82F261D8(iVar17,uVar10 - 0x4c8,uVar10 - 0x4b0,in_stack_00000054,in_stack_0000005c);
        (**(int (***)())(iVar17 + 0x9b8))
                  ((__int64)(int)uVar35 * (__int64)*(int *)(iVar17 + 0x564) +
                   (__int64)(int)uVar19 + uVar11,*(int *)(iVar17 + 0x564),auStack_1c0,0x10,
                   uVar45 & 3,uVar46 & 3,*(unsigned int *)(iVar17 + 0x904),
                   *(unsigned int *)(iVar17 + 0x618));
        iVar13 = (*pcVar3)(uVar21,0x10,auStack_1c0,0x10,0x10);
        if (uVar36 == 0x4000) {
          lVar44 = 0x4000;
          lVar32 = 0x4000;
        }
        else {
          uVar36 = (int)(*(int *)(&lbl_8215F864 + (uVar36 & 3) * 4) + uVar36) >> 1;
          lVar32 = (__int64)(int)uVar36;
          uVar28 = (int)(*(int *)(&lbl_8215F864 + (uVar28 & 3) * 4) + uVar28) >> 1;
          lVar44 = (__int64)(int)uVar28;
          if (*(int *)(iVar17 + 0x314) != 0) {
            if ((uVar36 & 1) != 0) {
              if ((int)uVar36 < 1) {
                lVar32 = lVar32 + 1;
              }
              else {
                lVar32 = lVar32 + -1;
              }
            }
            if ((uVar28 & 1) != 0) {
              if ((int)uVar28 < 1) {
                lVar44 = lVar44 + 1;
              }
              else {
                lVar44 = lVar44 + -1;
              }
            }
          }
        }
        if ((*(unsigned int *)(iVar17 + 0x6dc4) & 1) != 0) {
          fn_82F26F98(iVar17,uStack0000003c,*(unsigned int *)(iVar17 + 0x568),auStack_1c0,8,
                            lVar32,lVar44,0);
          iVar25 = (*pcVar4)(uVar38,8,auStack_1c0,8);
          iVar13 = iVar25 + iVar13;
        }
        if ((*(unsigned int *)(iVar17 + 0x6dc4) & 2) != 0) {
          fn_82F26F98(iVar17,uStack00000044,*(unsigned int *)(iVar17 + 0x568),auStack_1c0,8,
                            lVar32,lVar44,0);
          iVar25 = (*pcVar4)(uStack0000002c,8,auStack_1c0,8);
          iVar13 = iVar25 + iVar13;
        }
        uVar28 = iVar13 + *(int *)(lbl_831898B8 * 4 + in_stack_000000bc) +
                          *(int *)(lbl_831898B8 * 4 + in_stack_000000bc);
        if ((int)uVar28 < (int)uStack_4a0) {
          uVar33 = (unsigned __int64)uVar19;
          uStack_488 = uVar35;
          piStack_4c4 = piVar50;
          uStack_4c0 = uVar40;
          uStack_4a0 = uVar28;
        }
      }
      uStack_4a8 = 0;
      if (in_stack_000000a4 != 0) {
        piVar50 = (int *)((unsigned int)in_stack_00000074 & 3);
        uVar35 = in_stack_0000007c & 3;
        if (((piVar50 != (int *)0x0) || (uVar35 != 0)) &&
           (((int *)((int)((uVar33 & 0xffffffff) << 2) + (int)piStack_4c4) != in_stack_00000074 ||
            (uStack_488 * 4 + uStack_4c0 != in_stack_0000007c)))) {
          fn_82F261D8(iVar17,uVar10 - 0x4c8,uVar10 - 0x4e0,in_stack_00000054,in_stack_0000005c);
          (**(int (***)())(iVar17 + 0x9b8))
                    ((__int64)(int)uVar6 * (__int64)*(int *)(iVar17 + 0x564) +
                     (__int64)(int)uVar5 + uVar11,*(int *)(iVar17 + 0x564),auStack_1c0,0x10,piVar50
                     ,uVar35,*(unsigned int *)(iVar17 + 0x904),*(unsigned int *)(iVar17 + 0x618));
          iVar13 = (*pcVar3)(uVar21,0x10,auStack_1c0,0x10,0x10);
          if (in_stack_00000074 == (int *)0x4000) {
            lVar44 = 0x4000;
            lVar32 = 0x4000;
          }
          else {
            uVar19 = *(int *)(&lbl_8215F864 + ((unsigned int)in_stack_00000074 & 3) * 4) +
                     (int)in_stack_00000074 >> 1;
            lVar32 = (__int64)(int)uVar19;
            uVar28 = (int)(*(int *)(&lbl_8215F864 + (in_stack_0000007c & 3) * 4) + in_stack_0000007c
                          ) >> 1;
            lVar44 = (__int64)(int)uVar28;
            if (*(int *)(iVar17 + 0x314) != 0) {
              if ((uVar19 & 1) != 0) {
                if ((int)uVar19 < 1) {
                  lVar32 = lVar32 + 1;
                }
                else {
                  lVar32 = lVar32 + -1;
                }
              }
              if ((uVar28 & 1) != 0) {
                if ((int)uVar28 < 1) {
                  lVar44 = lVar44 + 1;
                }
                else {
                  lVar44 = lVar44 + -1;
                }
              }
            }
          }
          if ((*(unsigned int *)(iVar17 + 0x6dc4) & 1) != 0) {
            fn_82F26F98(iVar17,uStack0000003c,*(unsigned int *)(iVar17 + 0x568),auStack_1c0,8,
                              lVar32,lVar44,0);
            iVar25 = (*pcVar4)(uVar38,8,auStack_1c0,8);
            iVar13 = iVar25 + iVar13;
          }
          if ((*(unsigned int *)(iVar17 + 0x6dc4) & 2) != 0) {
            fn_82F26F98(iVar17,uStack00000044,*(unsigned int *)(iVar17 + 0x568),auStack_1c0,8,
                              lVar32,lVar44,0);
            iVar17 = (*pcVar4)(uStack0000002c,8,auStack_1c0,8);
            iVar13 = iVar17 + iVar13;
          }
          uVar19 = *(int *)(lbl_831898B8 * 4 + in_stack_000000bc) +
                   *(int *)(lbl_831898B8 * 4 + in_stack_000000bc) + iVar13;
          if ((int)uVar19 < (int)uStack_4a0) {
            uVar33 = (unsigned __int64)uVar5;
            uStack_4a8 = 0;
            uStack_488 = uVar6;
            uStack_4a0 = uVar19;
            piStack_4c4 = piVar50;
            uStack_4c0 = uVar35;
          }
        }
      }
    }
    else {
      (**(int (***)())(iStack00000014 + 0x9c0))
                (lVar39,iVar15,auStack_1c0,0x10,iVar25,iVar24,
                 *(unsigned int *)(iStack00000014 + 0x904),*(unsigned int *)(iStack00000014 + 0x618));
      fn_82E9AC18(iVar16,uStack0000001c,0x10,auStack_1c0,0x10,0x10,0x10,iVar17);
      if ((*(unsigned int *)(iVar16 + 0x6dc4) & 1) != 0) {
        fn_82F26F98(iVar16,uStack0000003c,*(unsigned int *)(iVar16 + 0x568),auStack_1c0,8,iVar41
                          ,iVar7,0);
        fn_82E9AC18(iVar16,uStack00000024,8,auStack_1c0,8,8,8,iVar17);
        uStack_4d8 = uStack_4b4 + uStack_4d8;
        iStack_4bc = uStack_4b8 + iStack_4bc;
        uStack_4dc = uStack_4dc | 0x831898b8;
      }
      if ((*(unsigned int *)(iStack00000014 + 0x6dc4) & 2) != 0) {
        fn_82F26F98(iStack00000014,uStack00000044,*(unsigned int *)(iStack00000014 + 0x568),
                          auStack_1c0,8,iVar41,iVar7,0);
        fn_82E9AC18(iStack00000014,uStack0000002c,8,auStack_1c0,8,8,8,iVar17);
        iStack_4bc = uStack_4b8 + iStack_4bc;
        uStack_4d8 = uStack_4b4 + uStack_4d8;
        uStack_4dc = uStack_4dc | 0x831898b8;
      }
      uStack_440 = uVar45;
      iVar13 = fn_82E9B140(iStack00000014,
                             ((*(unsigned int *)(iStack00000014 + 0xa2c) - uVar45) + lVar32 &
                             (unsigned __int64)*(unsigned int *)(iStack00000014 + 0xa34)) -
                             (unsigned __int64)*(unsigned int *)(iStack00000014 + 0xa2c),
                             ((*(unsigned int *)(iStack00000014 + 0xa30) - uVar46) + lVar44 &
                             (unsigned __int64)*(unsigned int *)(iStack00000014 + 0xa38)) -
                             (unsigned __int64)*(unsigned int *)(iStack00000014 + 0xa30),uStack_4dc,0);
      uVar45 = uStack_440;
      iStack_4bc = iVar13 + iStack_4bc;
      if (in_stack_000000a4 != 0) {
        iStack_4bc = iStack_4bc + 1;
      }
      uStack_4a0 = iStack_4bc * *(int *)(iVar17 + 0x6c) + uStack_4d8;
      fn_82EA4B28(iStack00000014,uStack0000001c,uStack00000024,uStack0000002c,lVar39,
                    lVar52 + uVar34,lVar52 + uVar30,(unsigned __int64)uStack_4a8 - (unsigned __int64)uStack_44c);
      iVar13 = iStack00000014;
      uVar19 = (unsigned int)uVar45;
      if ((iVar25 + (int)piStack_4c4 != uVar19) || (iVar24 + uStack_4c0 != uVar28)) {
        uVar45 = uVar45 & 3;
        fn_82F261D8(iStack00000014,uVar10 - 0x4c8,uVar10 - 0x4e0,in_stack_00000054,
                        in_stack_0000005c);
        (**(int (***)())(iVar13 + 0x9b8))
                  ((__int64)(int)uVar35 * (__int64)*(int *)(iVar13 + 0x564) +
                   (__int64)((int)uVar19 >> 2) + (unsigned __int64)uStack00000034,*(int *)(iVar13 + 0x564)
                   ,auStack_1c0,0x10,uVar45,uVar46 & 3,*(unsigned int *)(iVar13 + 0x904),
                   *(unsigned int *)(iVar13 + 0x618));
        fn_82E9AC18(iVar13,uStack0000001c,0x10,auStack_1c0,0x10,0x10,0x10,iVar17);
        if (uVar19 == 0x4000) {
          lVar44 = 0x4000;
          lVar32 = 0x4000;
        }
        else {
          uVar36 = (int)(uVar19 + *(int *)(&lbl_8215F864 + (uVar19 & 3) * 4)) >> 1;
          lVar32 = (__int64)(int)uVar36;
          uVar28 = (int)(*(int *)(&lbl_8215F864 + (uVar28 & 3) * 4) + uVar28) >> 1;
          lVar44 = (__int64)(int)uVar28;
          if (*(int *)(iVar13 + 0x314) != 0) {
            if ((uVar36 & 1) != 0) {
              if ((int)uVar36 < 1) {
                lVar32 = lVar32 + 1;
              }
              else {
                lVar32 = lVar32 + -1;
              }
            }
            if ((uVar28 & 1) != 0) {
              if ((int)uVar28 < 1) {
                lVar44 = lVar44 + 1;
              }
              else {
                lVar44 = lVar44 + -1;
              }
            }
          }
        }
        if ((*(unsigned int *)(iVar13 + 0x6dc4) & 1) != 0) {
          fn_82F26F98(iVar13,uStack0000003c,*(unsigned int *)(iVar13 + 0x568),auStack_1c0,8,
                            lVar32,lVar44,0);
          fn_82E9AC18(iVar13,uStack00000024,8,auStack_1c0,8,8,8,iVar17);
          uStack_4d8 = uStack_4b4 + uStack_4d8;
          iStack_4bc = uStack_4b8 + iStack_4bc;
          uStack_4dc = uStack_4dc | 0x831898b8;
        }
        if ((*(unsigned int *)(iVar13 + 0x6dc4) & 2) != 0) {
          fn_82F26F98(iVar13,uStack00000044,*(unsigned int *)(iVar13 + 0x568),auStack_1c0,8,
                            lVar32,lVar44,0);
          fn_82E9AC18(iVar13,uStack0000002c,8,auStack_1c0,8,8,8,iVar17);
          uStack_4d8 = uStack_4b4 + uStack_4d8;
          uStack_4dc = uStack_4dc | 0x831898b8;
          iStack_4bc = uStack_4b8 + iStack_4bc;
        }
        iVar13 = fn_82E9B140(iVar13,0,0,uStack_4dc,0);
        iStack_4bc = iVar13 + iStack_4bc;
        if (in_stack_000000a4 != 0) {
          iStack_4bc = iStack_4bc + 1;
        }
        uVar28 = iStack_4bc * *(int *)(iVar17 + 0x6c) + uStack_4d8;
        if ((int)uVar28 < (int)uStack_4a0) {
          piStack_4c4 = (int *)uVar45;
          uStack_4c0 = (unsigned int)(uVar46 & 3);
          uStack_48c = 0;
          uStack_4a8 = 0;
          uStack_4a0 = uVar28;
          uStack_488 = uVar35;
          uStack_47c = (int)uVar19 >> 2;
        }
      }
      iVar13 = iStack00000014;
      if ((in_stack_000000a4 != 0) &&
         ((piStack_4c4 + uStack_4a8 + uStack_47c != in_stack_00000074 ||
          ((uStack_48c + uStack_488) * 4 + uStack_4c0 != in_stack_0000007c)))) {
        fn_82F261D8(iStack00000014,uVar10 - 0x4c8,uVar10 - 0x4e0,in_stack_00000054,
                        in_stack_0000005c);
        (**(int (***)())(iVar13 + 0x9b8))
                  ((__int64)(int)uVar6 * (__int64)*(int *)(iVar13 + 0x564) + (__int64)(int)uVar5
                   + (unsigned __int64)uStack00000034,*(int *)(iVar13 + 0x564),auStack_1c0,0x10,
                   (int *)((unsigned int)in_stack_00000074 & 3),in_stack_0000007c & 3,
                   *(unsigned int *)(iVar13 + 0x904),*(unsigned int *)(iVar13 + 0x618));
        fn_82E9AC18(iVar13,uStack0000001c,0x10,auStack_1c0,0x10,0x10,0x10,iVar17);
        if (in_stack_00000074 == (int *)0x4000) {
          lVar44 = 0x4000;
          lVar32 = 0x4000;
        }
        else {
          uVar35 = *(int *)(&lbl_8215F864 + ((unsigned int)in_stack_00000074 & 3) * 4) +
                   (int)in_stack_00000074 >> 1;
          lVar32 = (__int64)(int)uVar35;
          uVar19 = (int)(*(int *)(&lbl_8215F864 + (in_stack_0000007c & 3) * 4) + in_stack_0000007c)
                   >> 1;
          lVar44 = (__int64)(int)uVar19;
          if (*(int *)(iVar13 + 0x314) != 0) {
            if ((uVar35 & 1) != 0) {
              if ((int)uVar35 < 1) {
                lVar32 = lVar32 + 1;
              }
              else {
                lVar32 = lVar32 + -1;
              }
            }
            if ((uVar19 & 1) != 0) {
              if ((int)uVar19 < 1) {
                lVar44 = lVar44 + 1;
              }
              else {
                lVar44 = lVar44 + -1;
              }
            }
          }
        }
        if ((*(unsigned int *)(iVar13 + 0x6dc4) & 1) != 0) {
          fn_82F26F98(iVar13,uStack0000003c,*(unsigned int *)(iVar13 + 0x568),auStack_1c0,8,
                            lVar32,lVar44,0);
          fn_82E9AC18(iVar13,uStack00000024,8,auStack_1c0,8,8,8,iVar17);
          iStack_4bc = uStack_4b8 + iStack_4bc;
          uStack_4d8 = uStack_4b4 + uStack_4d8;
          uStack_4dc = uStack_4dc | 0x831898b8;
        }
        if ((*(unsigned int *)(iVar13 + 0x6dc4) & 2) != 0) {
          fn_82F26F98(iVar13,uStack00000044,*(unsigned int *)(iVar13 + 0x568),auStack_1c0,8,
                            lVar32,lVar44,0);
          fn_82E9AC18(iVar13,uStack0000002c,8,auStack_1c0,8,8,8,iVar17);
          iStack_4bc = uStack_4b8 + iStack_4bc;
          uStack_4d8 = uStack_4b4 + uStack_4d8;
          uStack_4dc = uStack_4dc | 0x831898b8;
        }
        iVar13 = fn_82E9B140(iVar13,0,0,uStack_4dc,0);
        uVar35 = (iVar13 + iStack_4bc + 1) * *(int *)(iVar17 + 0x6c) + uStack_4d8;
        if ((int)uVar35 < (int)uStack_4a0) {
          uStack_48c = 0;
          uStack_4a8 = 0;
          uStack_4a0 = uVar35;
          piStack_4c4 = (int *)((unsigned int)in_stack_00000074 & 3);
          uStack_4c0 = in_stack_0000007c & 3;
          uStack_488 = uVar6;
          uStack_47c = uVar5;
        }
      }
      uVar33 = (unsigned __int64)uStack_47c;
    }
  }
  *in_stack_000000d4 = (int)((uStack_4a8 + uVar33 & 0xffffffff) << 2) + (int)piStack_4c4;
  *in_stack_000000dc = (uStack_48c + uStack_488) * 4 + uStack_4c0;
  *in_stack_000000e4 = uStack_4a0;
  return;
}

