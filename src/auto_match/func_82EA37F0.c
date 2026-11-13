#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_82F26F98();
extern unsigned int iStack_10c;
extern unsigned int iStack_110;
extern unsigned int lbl_831898B8;
extern unsigned int stack0x00000000;
extern unsigned int uStack00000034;
extern unsigned int uStack_114;
extern unsigned int uStack_118;
extern unsigned int uStack_120;


void fn_82EA37F0(int param_1, unsigned __int64 param_2, unsigned __int64 param_3, unsigned __int64 param_4, unsigned int param_5, unsigned __int64 param_6, unsigned __int64 param_7, unsigned __int64 unused_arg_8, unsigned __int64 unused_arg_9, int in_stack_0000005c, int in_stack_00000064, int in_stack_0000006c, int in_stack_00000074, int in_stack_0000007c, unsigned __int64 unused_arg_15, unsigned int in_stack_0000008c, unsigned __int64 unused_arg_17, unsigned __int64 unused_arg_18, unsigned int in_stack_000000a4, unsigned int in_stack_000000ac, unsigned int in_stack_000000b4, unsigned int in_stack_000000bc, int in_stack_000000c4, int in_stack_000000cc)

{
  int (**pcVar1)();
  int (**pcVar2)();
  unsigned int uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  unsigned __int64 uVar11;
  int iVar12;
  unsigned int uVar13;
  __int64 lVar14;
  unsigned __int64 uVar15;
  __int64 lVar16;
  __int64 lVar17;
  unsigned __int64 uVar18;
  __int64 lVar19;
  int *piVar20;
  __int64 lVar21;
  unsigned int uStack00000034;












  unsigned int *in_stack_000000d4;
  unsigned int *in_stack_000000dc;
  unsigned int *in_stack_000000e4;
  int *in_stack_000000ec;
  unsigned int uStack_120;
  unsigned int uStack_118;
  unsigned int uStack_114;
  int iStack_110;
  int iStack_10c;
  int aiStack_100 [12];
  int aiStack_d0 [52];
  
  lVar14 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  pcVar1 = (int (**)())in_stack_000000d4[3];
  pcVar2 = (int (**)())*in_stack_000000d4;
  if (in_stack_00000064 == 0) {
    uVar10 = 0;
    uVar8 = 0;
  }
  else {
    uVar10 = 0xfffffffffffffffd;
    uVar8 = 0xfffffffffffffffe;
  }
  if (in_stack_00000074 == 0) {
    uStack_114 = 0;
    uVar11 = 0;
  }
  else {
    uVar11 = 0xfffffffffffffffe;
    uStack_114 = 0xfffffffd;
  }
  if (in_stack_0000006c == 0) {
    iStack_10c = 0;
    lVar16 = 0;
  }
  else {
    iStack_10c = 3;
    lVar16 = 2;
  }
  if (in_stack_0000007c == 0) {
    iStack_110 = 0;
  }
  else {
    iStack_110 = 3;
    lVar14 = 2;
  }
  uVar15 = (unsigned __int64)in_stack_000000bc;
  uVar18 = (unsigned __int64)in_stack_000000b4;
  aiStack_d0[0] = in_stack_000000c4;
  iVar12 = (int)uVar11;
  iVar6 = (int)lVar14;
  uStack00000034 = param_5;
  if ((int)uVar8 < 0) {
    lVar19 = uVar8 + uVar15;
    lVar17 = uVar8 + (uVar8 & 0x3fffffff) * 4;
    do {
      uVar8 = uVar11;
      if (iVar12 < 0) {
        do {
          iVar4 = 0;
          if ((*(unsigned int *)(param_1 + 0x6dc4) & 1) != 0) {
            fn_82F26F98(param_1,param_6,*(unsigned int *)(param_1 + 0x568),in_stack_0000008c,8,
                              uVar8 + uVar18,lVar19,0);
            iVar4 = (*pcVar2)(param_3,8,in_stack_0000008c,8);
          }
          if ((*(unsigned int *)(param_1 + 0x6dc4) & 2) != 0) {
            fn_82F26F98(param_1,param_7,*(unsigned int *)(param_1 + 0x568),in_stack_0000008c,8,
                              uVar8 + uVar18,lVar19,0);
            iVar5 = (*pcVar2)(param_4,8,in_stack_0000008c,8);
            iVar4 = iVar5 + iVar4;
          }
          uVar9 = lVar17 + uVar8;
          uVar8 = uVar8 + 1;
          *(int *)((int)aiStack_d0 + (int)((uVar9 & 0xffffffff) << 2)) = iVar4;
        } while ((__int64)uVar8 < 0);
      }
      lVar21 = 0;
      do {
        iVar4 = 0;
        if ((*(unsigned int *)(param_1 + 0x6dc4) & 1) != 0) {
          fn_82F26F98(param_1,param_6,*(unsigned int *)(param_1 + 0x568),in_stack_0000008c,8,
                            lVar21 + uVar18,lVar19,0);
          iVar4 = (*pcVar2)(param_3,8,in_stack_0000008c,8);
        }
        if ((*(unsigned int *)(param_1 + 0x6dc4) & 2) != 0) {
          fn_82F26F98(param_1,param_7,*(unsigned int *)(param_1 + 0x568),in_stack_0000008c,8,
                            lVar21 + uVar18,lVar19,0);
          iVar5 = (*pcVar2)(param_4,8,in_stack_0000008c,8);
          iVar4 = iVar5 + iVar4;
        }
        uVar8 = lVar17 + lVar21;
        lVar21 = lVar21 + 1;
        *(int *)((int)aiStack_d0 + (int)((uVar8 & 0xffffffff) << 2)) = iVar4;
      } while ((int)lVar21 <= iVar6);
      lVar17 = lVar17 + 5;
      lVar19 = lVar19 + 1;
    } while (lVar17 < 0);
  }
  if (iVar12 < 0) {
    lVar21 = uVar11 + uVar18;
    lVar17 = (uVar11 & 0x3fffffff) * 4 + (ZEXT48(&stack0x00000000) - 0xd4);
    lVar19 = -uVar11;
    do {
      iVar4 = 0;
      if ((*(unsigned int *)(param_1 + 0x6dc4) & 1) != 0) {
        fn_82F26F98(param_1,param_6,*(unsigned int *)(param_1 + 0x568),in_stack_0000008c,8,
                          lVar21,uVar15,0);
        iVar4 = (*pcVar2)(param_3,8,in_stack_0000008c,8);
      }
      if ((*(unsigned int *)(param_1 + 0x6dc4) & 2) != 0) {
        fn_82F26F98(param_1,param_7,*(unsigned int *)(param_1 + 0x568),in_stack_0000008c,8,
                          lVar21,uVar15,0);
        iVar5 = (*pcVar2)(param_4,8,in_stack_0000008c,8);
        iVar4 = iVar5 + iVar4;
      }
      lVar19 = lVar19 + -1;
      lVar17 = lVar17 + 4;
      *(int *)lVar17 = iVar4;
      lVar21 = lVar21 + 1;
    } while (lVar19 != 0);
  }
  if (iVar6 != 0) {
    lVar17 = ZEXT48(&stack0x00000000) - 0xd0;
    uVar8 = uVar18;
    do {
      uVar8 = uVar8 + 1;
      iVar4 = 0;
      if ((*(unsigned int *)(param_1 + 0x6dc4) & 1) != 0) {
        fn_82F26F98(param_1,param_6,*(unsigned int *)(param_1 + 0x568),in_stack_0000008c,8,uVar8
                          ,uVar15,0);
        iVar4 = (*pcVar2)(param_3,8,in_stack_0000008c,8);
      }
      if ((*(unsigned int *)(param_1 + 0x6dc4) & 2) != 0) {
        fn_82F26F98(param_1,param_7,*(unsigned int *)(param_1 + 0x568),in_stack_0000008c,8,uVar8
                          ,uVar15,0);
        iVar5 = (*pcVar2)(param_4,8,in_stack_0000008c,8);
        iVar4 = iVar5 + iVar4;
      }
      lVar14 = lVar14 + -1;
      lVar17 = lVar17 + 4;
      *(int *)lVar17 = iVar4;
    } while (lVar14 != 0);
  }
  if ((int)lVar16 != 0) {
    lVar14 = 5;
    do {
      uVar15 = uVar15 + 1;
      uVar8 = uVar11;
      if (iVar12 < 0) {
        do {
          iVar4 = 0;
          if ((*(unsigned int *)(param_1 + 0x6dc4) & 1) != 0) {
            fn_82F26F98(param_1,param_6,*(unsigned int *)(param_1 + 0x568),in_stack_0000008c,8,
                              uVar8 + uVar18,uVar15,0);
            iVar4 = (*pcVar2)(param_3,8,in_stack_0000008c,8);
          }
          if ((*(unsigned int *)(param_1 + 0x6dc4) & 2) != 0) {
            fn_82F26F98(param_1,param_7,*(unsigned int *)(param_1 + 0x568),in_stack_0000008c,8,
                              uVar8 + uVar18,uVar15,0);
            iVar5 = (*pcVar2)(param_4,8,in_stack_0000008c,8);
            iVar4 = iVar5 + iVar4;
          }
          uVar9 = lVar14 + uVar8;
          uVar8 = uVar8 + 1;
          *(int *)((int)aiStack_d0 + (int)((uVar9 & 0xffffffff) << 2)) = iVar4;
        } while ((__int64)uVar8 < 0);
      }
      lVar17 = 0;
      do {
        iVar4 = 0;
        if ((*(unsigned int *)(param_1 + 0x6dc4) & 1) != 0) {
          fn_82F26F98(param_1,param_6,*(unsigned int *)(param_1 + 0x568),in_stack_0000008c,8,
                            lVar17 + uVar18,uVar15,0);
          iVar4 = (*pcVar2)(param_3,8,in_stack_0000008c,8);
        }
        if ((*(unsigned int *)(param_1 + 0x6dc4) & 2) != 0) {
          fn_82F26F98(param_1,param_7,*(unsigned int *)(param_1 + 0x568),in_stack_0000008c,8,
                            lVar17 + uVar18,uVar15,0);
          iVar5 = (*pcVar2)(param_4,8,in_stack_0000008c,8);
          iVar4 = iVar5 + iVar4;
        }
        uVar8 = lVar14 + lVar17;
        lVar17 = lVar17 + 1;
        *(int *)((int)aiStack_d0 + (int)((uVar8 & 0xffffffff) << 2)) = iVar4;
      } while ((int)lVar17 <= iVar6);
      lVar16 = lVar16 + -1;
      lVar14 = lVar14 + 5;
    } while (lVar16 != 0);
  }
  uVar8 = (unsigned __int64)in_stack_000000ac;
  uVar11 = (unsigned __int64)in_stack_000000a4;
  if ((int)uVar10 < 0) {
    lVar14 = (uVar10 & 0x1fffffff) * 8 - uVar10;
    do {
      uVar3 = *(unsigned int *)(param_1 + 0x564);
      uVar15 = (unsigned __int64)uStack00000034;
      uVar18 = (unsigned __int64)uStack_114;
      if ((int)uStack_114 < 0) {
        uVar9 = (unsigned __int64)((int)(uVar10 + uVar8) >> 0x1f);
        uVar9 = (uVar10 + uVar8 ^ uVar9) - uVar9;
        do {
          iVar12 = *(int *)((int)((lVar14 + uVar18 & 0xffffffff) << 2) + -0x7ce76038);
          (**(int (***)())(param_1 + 0x9b8))
                    ((uVar15 - uVar3) + -1,*(unsigned int *)(param_1 + 0x564),in_stack_0000008c,0x10,
                     uVar18,uVar10,*(unsigned int *)(param_1 + 0x904),*(unsigned int *)(param_1 + 0x618)
                    );
          iVar6 = (*pcVar1)(param_2,0x10,in_stack_0000008c,0x10,0x10);
          uVar7 = (unsigned __int64)((int)(uVar18 + uVar11) >> 0x1f);
          uVar7 = (uVar18 + uVar11 ^ uVar7) - uVar7;
          if (((int)uVar7 < 0x9f) && ((int)uVar9 < 0x9f)) {
            iVar4 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar9 & 0xffffffff) << 2)) * 4 +
                            in_stack_000000cc) +
                    *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar7 & 0xffffffff) << 2)) * 4 +
                            in_stack_000000cc);
          }
          else {
            iVar4 = *(int *)(in_stack_000000cc + 0x14) << 1;
          }
          iVar4 = iVar4 + iVar6 + aiStack_100[iVar12];
          if (iVar4 < in_stack_0000005c) {
            uStack_118 = (unsigned int)uVar18;
            uStack_120 = (int)uVar10;
            in_stack_0000005c = iVar4;
          }
          uVar18 = uVar18 + 1;
        } while ((__int64)uVar18 < 0);
      }
      uVar3 = *(unsigned int *)(param_1 + 0x564);
      lVar16 = 0;
      uVar15 = (unsigned __int64)uStack00000034;
      if (-1 < iStack_110) {
        uVar18 = (unsigned __int64)((int)(uVar10 + uVar8) >> 0x1f);
        uVar18 = (uVar10 + uVar8 ^ uVar18) - uVar18;
        do {
          iVar12 = *(int *)((int)((lVar14 + lVar16 & 0xffffffffU) << 2) + -0x7ce76038);
          (**(int (***)())(param_1 + 0x9b8))
                    (uVar15 - uVar3,*(unsigned int *)(param_1 + 0x564),in_stack_0000008c,0x10,lVar16,
                     uVar10,*(unsigned int *)(param_1 + 0x904),*(unsigned int *)(param_1 + 0x618));
          iVar6 = (*pcVar1)(param_2,0x10,in_stack_0000008c,0x10,0x10);
          uVar9 = (unsigned __int64)((int)(lVar16 + uVar11) >> 0x1f);
          uVar9 = (lVar16 + uVar11 ^ uVar9) - uVar9;
          if (((int)uVar9 < 0x9f) && ((int)uVar18 < 0x9f)) {
            iVar4 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar18 & 0xffffffff) << 2)) * 4 +
                            in_stack_000000cc) +
                    *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar9 & 0xffffffff) << 2)) * 4 +
                            in_stack_000000cc);
          }
          else {
            iVar4 = *(int *)(in_stack_000000cc + 0x14) << 1;
          }
          iVar4 = iVar4 + iVar6 + aiStack_100[iVar12];
          if (iVar4 < in_stack_0000005c) {
            uStack_118 = (unsigned int)lVar16;
            uStack_120 = (int)uVar10;
            in_stack_0000005c = iVar4;
          }
          lVar16 = lVar16 + 1;
        } while ((int)lVar16 <= iStack_110);
      }
      lVar14 = lVar14 + 7;
      uVar10 = uVar10 + 1;
    } while (lVar14 < 0);
  }
  uVar15 = (unsigned __int64)uStack_114;
  uVar10 = (unsigned __int64)uStack00000034;
  iVar12 = (int)in_stack_000000ac >> 0x1f;
  if ((int)uStack_114 < 0) {
    uVar18 = (uVar8 ^ (__int64)iVar12) - (__int64)iVar12;
    piVar20 = (int *)(uStack_114 * 4 + -0x7ce76038);
    do {
      iVar6 = *piVar20;
      (**(int (***)())(param_1 + 0x9b8))
                (uVar10 - 1,*(unsigned int *)(param_1 + 0x564),in_stack_0000008c,0x10,uVar15,0,
                 *(unsigned int *)(param_1 + 0x904),*(unsigned int *)(param_1 + 0x618));
      iVar4 = (*pcVar1)(param_2,0x10,in_stack_0000008c,0x10,0x10);
      uVar9 = (unsigned __int64)((int)(uVar15 + uVar11) >> 0x1f);
      uVar9 = (uVar15 + uVar11 ^ uVar9) - uVar9;
      if (((int)uVar9 < 0x9f) && ((int)uVar18 < 0x9f)) {
        iVar5 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar18 & 0xffffffff) << 2)) * 4 +
                        in_stack_000000cc) +
                *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar9 & 0xffffffff) << 2)) * 4 +
                        in_stack_000000cc);
      }
      else {
        iVar5 = *(int *)(in_stack_000000cc + 0x14) << 1;
      }
      iVar5 = iVar5 + iVar4 + aiStack_100[iVar6];
      if (iVar5 < in_stack_0000005c) {
        uStack_118 = (unsigned int)uVar15;
        uStack_120 = 0;
        in_stack_0000005c = iVar5;
      }
      piVar20 = piVar20 + 1;
      uVar15 = uVar15 + 1;
    } while ((int)piVar20 < -0x7ce76038);
  }
  uVar3 = uStack00000034;
  uVar18 = 1;
  uVar15 = (unsigned __int64)uStack_118;
  if (iStack_110 != 0) {
    piVar20 = (int *)0x83189fcc;
    uVar9 = (uVar8 ^ (__int64)iVar12) - (__int64)iVar12;
    do {
      iVar12 = *piVar20;
      (**(int (***)())(param_1 + 0x9b8))
                (uVar3,*(unsigned int *)(param_1 + 0x564),in_stack_0000008c,0x10,uVar18,0,
                 *(unsigned int *)(param_1 + 0x904),*(unsigned int *)(param_1 + 0x618));
      iVar6 = (*pcVar1)(param_2,0x10,in_stack_0000008c,0x10,0x10);
      uVar7 = (unsigned __int64)((int)(uVar18 + uVar11) >> 0x1f);
      uVar7 = (uVar18 + uVar11 ^ uVar7) - uVar7;
      if (((int)uVar7 < 0x9f) && ((int)uVar9 < 0x9f)) {
        iVar4 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar9 & 0xffffffff) << 2)) * 4 +
                        in_stack_000000cc) +
                *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar7 & 0xffffffff) << 2)) * 4 +
                        in_stack_000000cc);
      }
      else {
        iVar4 = *(int *)(in_stack_000000cc + 0x14) << 1;
      }
      iVar4 = iVar4 + iVar6 + aiStack_100[iVar12];
      if (iVar4 < in_stack_0000005c) {
        uStack_120 = 0;
        uVar15 = uVar18;
        in_stack_0000005c = iVar4;
      }
      uVar18 = uVar18 + 1;
      piVar20 = piVar20 + 1;
    } while ((int)uVar18 <= iStack_110);
  }
  uVar13 = (unsigned int)uVar15;
  lVar14 = 1;
  if (iStack_10c != 0) {
    lVar16 = 7;
    do {
      uVar18 = (unsigned __int64)uStack_114;
      if ((int)uStack_114 < 0) {
        uVar9 = (unsigned __int64)((int)(lVar14 + uVar8) >> 0x1f);
        uVar9 = (lVar14 + uVar8 ^ uVar9) - uVar9;
        do {
          iVar12 = *(int *)((int)((lVar16 + uVar18 & 0xffffffff) << 2) + -0x7ce76038);
          (**(int (***)())(param_1 + 0x9b8))
                    (uVar10 - 1,*(unsigned int *)(param_1 + 0x564),in_stack_0000008c,0x10,uVar18,
                     lVar14,*(unsigned int *)(param_1 + 0x904),*(unsigned int *)(param_1 + 0x618));
          iVar6 = (*pcVar1)(param_2,0x10,in_stack_0000008c,0x10,0x10);
          uVar7 = (unsigned __int64)((int)(uVar18 + uVar11) >> 0x1f);
          uVar7 = (uVar18 + uVar11 ^ uVar7) - uVar7;
          if (((int)uVar7 < 0x9f) && ((int)uVar9 < 0x9f)) {
            iVar4 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar9 & 0xffffffff) << 2)) * 4 +
                            in_stack_000000cc) +
                    *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar7 & 0xffffffff) << 2)) * 4 +
                            in_stack_000000cc);
          }
          else {
            iVar4 = *(int *)(in_stack_000000cc + 0x14) << 1;
          }
          iVar4 = iVar4 + iVar6 + aiStack_100[iVar12];
          if (iVar4 < in_stack_0000005c) {
            uVar15 = uVar18;
            uStack_120 = (int)lVar14;
            in_stack_0000005c = iVar4;
          }
          uVar18 = uVar18 + 1;
        } while ((__int64)uVar18 < 0);
      }
      uVar18 = 0;
      if (-1 < iStack_110) {
        uVar9 = (unsigned __int64)((int)(lVar14 + uVar8) >> 0x1f);
        uVar9 = (lVar14 + uVar8 ^ uVar9) - uVar9;
        do {
          iVar12 = *(int *)((int)((lVar16 + uVar18 & 0xffffffff) << 2) + -0x7ce76038);
          (**(int (***)())(param_1 + 0x9b8))
                    (uVar3,*(unsigned int *)(param_1 + 0x564),in_stack_0000008c,0x10,uVar18,lVar14,
                     *(unsigned int *)(param_1 + 0x904),*(unsigned int *)(param_1 + 0x618));
          iVar6 = (*pcVar1)(param_2,0x10,in_stack_0000008c,0x10,0x10);
          uVar7 = (unsigned __int64)((int)(uVar18 + uVar11) >> 0x1f);
          uVar7 = (uVar18 + uVar11 ^ uVar7) - uVar7;
          if (((int)uVar7 < 0x9f) && ((int)uVar9 < 0x9f)) {
            iVar4 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar9 & 0xffffffff) << 2)) * 4 +
                            in_stack_000000cc) +
                    *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar7 & 0xffffffff) << 2)) * 4 +
                            in_stack_000000cc);
          }
          else {
            iVar4 = *(int *)(in_stack_000000cc + 0x14) << 1;
          }
          iVar4 = iVar4 + iVar6 + aiStack_100[iVar12];
          if (iVar4 < in_stack_0000005c) {
            uVar15 = uVar18;
            uStack_120 = (int)lVar14;
            in_stack_0000005c = iVar4;
          }
          uVar18 = uVar18 + 1;
        } while ((int)uVar18 <= iStack_110);
      }
      uVar13 = (unsigned int)uVar15;
      lVar14 = lVar14 + 1;
      lVar16 = lVar16 + 7;
    } while ((int)lVar14 <= iStack_10c);
  }
  *in_stack_000000dc = uVar13;
  *in_stack_000000e4 = uStack_120;
  *in_stack_000000ec = in_stack_0000005c;
  return;
}

