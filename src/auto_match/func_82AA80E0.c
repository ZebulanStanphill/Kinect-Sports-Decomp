typedef unsigned char bool;
#define true 1
#define false 0
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_11c;
extern unsigned int *auStack_120;
extern unsigned int *auStack_1a8;
extern unsigned int *auStack_1d0;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_e8;
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_829206B8();
extern int fn_82A28568();
extern int fn_82A28E60();
extern int fn_82A2A360();
extern int fn_82A94F88();
extern int fn_82A976B8();
extern int fn_82AA8040();
extern int fn_82B63658();
extern int fn_82B63DA8();
extern int fn_82B63EC8();
extern int fn_82B67470();
extern int memcpy();
extern int memset();
extern unsigned int iStack_108;
extern unsigned int iStack_110;
extern unsigned int iStack_15c;
extern unsigned int iStack_160;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821A7F10;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_831604FC;
extern unsigned int lbl_83223534;
extern unsigned int stack0x00000000;
extern unsigned int uStack00000014;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack0000002c;
extern unsigned int uStack00000034;
extern unsigned int uStack_100;
extern unsigned int uStack_104;
extern unsigned int uStack_10c;
extern unsigned int uStack_124;
extern unsigned int uStack_128;
extern unsigned int uStack_12c;
extern unsigned int uStack_130;
extern unsigned int uStack_140;
extern unsigned int uStack_144;
extern unsigned int uStack_148;
extern unsigned int uStack_14c;
extern unsigned int uStack_150;
extern unsigned int uStack_154;
extern unsigned int uStack_158;
extern unsigned int uStack_164;
extern unsigned int uStack_168;
extern unsigned int uStack_16c;
extern unsigned int uStack_170;
extern unsigned int uStack_174;
extern unsigned int uStack_178;
extern unsigned int uStack_17c;
extern unsigned int uStack_180;
extern unsigned int uStack_184;
extern unsigned int uStack_188;
extern unsigned int uStack_18c;
extern unsigned int uStack_190;
extern unsigned int uStack_1ac;
extern unsigned int uStack_1b0;
extern unsigned int uStack_c0;
extern unsigned int uStack_c4;
extern unsigned int uStack_c8;
extern unsigned int uStack_ec;
extern unsigned int uStack_f0;
extern unsigned int uStack_f4;
extern unsigned int uStack_f8;
extern unsigned int uStack_fc;


unsigned __int64
fn_82AA80E0(double param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,unsigned __int64 param_5
             ,unsigned __int64 param_6,unsigned int *param_7,__int64 param_8,__int64 param_9)

{
  unsigned char bVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned int uVar4;
  bool bVar5;
  unsigned char bVar6;
  unsigned __int64 uVar7;
  int iVar9;
  unsigned __int64 uVar8;
  unsigned char *puVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  unsigned int uVar13;
  unsigned __int64 uVar14;
  bool bVar15;
  unsigned __int64 uVar16;
  __int64 lVar17;
  unsigned int uVar18;
  __int64 lVar19;
  __int64 lVar20;
  __int64 lVar21;
  unsigned __int64 uVar22;
  int iVar23;
  int iVar24;
  int iVar26;
  __int64 lVar25;
  unsigned __int64 uVar27;
  int *piVar28;
  unsigned __int64 uVar29;
  unsigned char *puVar30;
  double dVar31;
  unsigned int uStack00000014;
  unsigned int uStack0000001c;
  unsigned int uStack00000024;
  unsigned int uStack0000002c;
  unsigned int uStack00000034;
  unsigned int in_stack_00000054;
  unsigned int *in_stack_0000005c;
  unsigned int in_stack_00000064;
  unsigned int auStack_1d0 [4];
  int aiStack_1c0 [4];
  struct { unsigned int first; unsigned int second; } stack_pair_1b0;

  unsigned char auStack_1a8 [24];
  unsigned int uStack_190;
  unsigned int uStack_18c;
  unsigned int uStack_188;
  unsigned int uStack_184;
  unsigned int uStack_180;
  unsigned int uStack_17c;
  unsigned int uStack_178;
  unsigned int uStack_174;
  unsigned int uStack_170;
  unsigned int uStack_16c;
  unsigned int uStack_168;
  unsigned int uStack_164;
  int iStack_160;
  int iStack_15c;
  unsigned int uStack_158;
  unsigned int uStack_154;
  unsigned int uStack_150;
  unsigned int uStack_14c;
  unsigned int uStack_148;
  unsigned int uStack_144;
  unsigned int uStack_140;
  struct { unsigned int first; unsigned int second; } stack_pair_130;

  unsigned int uStack_128;
  unsigned int uStack_124;
  unsigned char auStack_120 [4];
  unsigned char auStack_11c [12];
  int iStack_110;
  unsigned int uStack_10c;
  int iStack_108;
  unsigned int uStack_104;
  unsigned int uStack_100;
  unsigned int uStack_fc;
  unsigned int uStack_f8;
  unsigned int uStack_f4;
  unsigned int uStack_f0;
  unsigned int uStack_ec;
  unsigned char auStack_e8 [32];
  unsigned int uStack_c8;
  unsigned int uStack_c4;
  unsigned int uStack_c0;
  unsigned char auStack_b0 [176];

  uVar18 = (unsigned int)param_3;
  uVar12 = (unsigned int)param_4;
  uVar13 = (unsigned int)param_5;
  uStack00000014 = (unsigned int)param_2;
  uStack0000001c = uVar18;
  uStack00000024 = uVar12;
  uStack0000002c = uVar13;
  uStack00000034 = (unsigned int)param_6;
  fn_829206B8(&stack0x00000000 + -0x1a8);
  uVar11 = 4;
  iVar9 = 0;
  auStack_1d0[0] = 4;
  if (in_stack_0000005c == (unsigned int *)0x0) {
    in_stack_0000005c = &stack_pair_130.first;
    stack_pair_130.first = 0;
    stack_pair_130.second = 0;
    uStack_128 = uVar12;
    uStack_124 = uVar13;
  }
  uVar29 = (unsigned __int64)in_stack_0000005c[2] - (unsigned __int64)*in_stack_0000005c;
  uVar27 = (unsigned __int64)in_stack_0000005c[3] - (unsigned __int64)in_stack_0000005c[1];
  if (param_7 == (unsigned int *)0x0) {
    stack_pair_1b0.first = 0;
    param_7 = &stack_pair_1b0.first;
    stack_pair_1b0.second = 0;
  }
  if ((in_stack_00000064 & 0x10) == 0) {
    uVar11 = 0x80004;
    auStack_1d0[0] = 0x80004;
  }
  uVar3 = param_6 & 0x3f;
  uVar4 = in_stack_00000054 & 0x3f;
  if ((in_stack_00000054 & 0x600) == 0x600) {
    uVar11 = uVar11 | 0x200000;
    auStack_1d0[0] = uVar11;
  }
  if (((unsigned int)param_6 & 0x600) == 0x600) {
    uVar11 = uVar11 | 0x400000;
    auStack_1d0[0] = uVar11;
  }
  if ((uVar3 == 0x31) || (uVar3 == 0x3c)) {
    uVar11 = *param_7;
    uVar12 = param_7[1];
    iVar9 = (int)uVar12 >> 2;
    bVar1 = (&lbl_821A7F10)[(int)uVar3];
    lVar17 = (unsigned __int64)uVar11 +
             ((__int64)((int)uVar11 >> 2) + (unsigned __int64)((int)uVar11 < 0 && (uVar11 & 3) != 0) &
             0x3fffffff) * -4;
    uVar22 = (__int64)(int)(unsigned int)((unsigned char)(&lbl_821A7F10)[uVar4] >> 3) *
             (__int64)(int)*in_stack_0000005c +
             (__int64)(int)in_stack_0000005c[1] * (__int64)(int)param_9 + param_8;
    lVar19 = (__int64)(int)(iVar9 + (unsigned int)((int)uVar12 < 0 && (uVar12 & 3) != 0)) *
             (__int64)(int)uVar18 +
             (__int64)(int)(((int)uVar11 >> 2) + (unsigned int)((int)uVar11 < 0 && (uVar11 & 3) != 0)) *
             (__int64)(int)((unsigned int)bVar1 << 1) + param_2;
    if ((lVar17 != 0) ||
       ((((unsigned __int64)uVar12 !=
          ((__int64)iVar9 + (unsigned __int64)((int)uVar12 < 0 && (uVar12 & 3) != 0) & 0x3fffffff) << 2 ||
         ((uVar29 & 3) != 0)) || (bVar5 = false, (uVar27 & 3) != 0)))) {
      bVar5 = true;
    }
    lVar20 = 0;
    lVar21 = 0;
    if ((in_stack_00000054 == 0x2d22aaa5) && (uVar16 = 0, lVar25 = param_9, !bVar5)) {
LAB_82aa88ac:
      trapWord(6,(unsigned __int64)bVar1 << 1,0);
      uVar14 = (unsigned __int64)uStack0000001c / ((unsigned __int64)bVar1 << 1);
      if (uVar3 == 0x31) {
        fn_82B63658(uVar29,uVar27,uVar22,lVar25,lVar19,uVar14,lVar20,lVar21);
      }
      else if (uVar3 == 0x3c) {
        fn_82B63DA8(uVar29,uVar27,uVar22,lVar25,lVar19,uVar14,lVar20,lVar21);
      }
      if ((uVar16 & 0xffffffff) != 0) {
        fn_8265C990(uVar16,0x24870000);
      }
      uVar11 = (int)uStack00000034 >> 6 & 3;
      if (uVar11 != 1) {
        if (((int)uStack00000034 >> 6 & 3U) == 0) {
          uVar11 = uStack00000034 & 0xffffff3f | 0x40;
        }
        else if (uVar11 == 2) {
          uVar11 = uStack00000034 | 0xc0;
        }
        else {
          uVar11 = uStack00000034 & 0xffffff3f | 0x80;
        }
        fn_82AA8040(lVar19,uStack0000001c,lVar19,uStack0000001c,uVar29,uVar27,uVar11);
      }
      fn_82B63EC8(&stack0x00000000 + -0x1a8);
      return 0;
    }
    uVar16 = lVar17 + uVar29 + 3;
    uVar29 = uVar16 & 0xfffffffc;
    uVar27 = (unsigned __int64)uVar12 +
             ((__int64)iVar9 + (unsigned __int64)((int)uVar12 < 0 && (uVar12 & 3) != 0) & 0x3fffffff) * -4
             + uVar27 + 3 & 0xfffffffc;
    uVar22 = fn_8265C940(((__int64)(int)uVar27 * (__int64)(int)uVar29 & 0x1fffffffU) << 3,
                               0x24870000);
    if (uVar22 != 0) {
      dVar31 = (double)lbl_821AAD20;
      lVar25 = (uVar16 & 0x1ffffffc) << 3;
      if (bVar5) {
        uVar11 = *param_7;
        uVar18 = param_7[1];
        uVar11 = (((int)uVar11 >> 2) + (unsigned int)((int)uVar11 < 0 && (uVar11 & 3) != 0)) * 4 +
                 (int)uVar29;
        uVar18 = (((int)uVar18 >> 2) + (unsigned int)((int)uVar18 < 0 && (uVar18 & 3) != 0)) * 4 +
                 (int)uVar27;
        fn_82A976B8(dVar31,uVar22,lVar25,uVar29,uVar27,0x2d22aaa5,0,uStack00000014,
                          uStack0000001c);
        if ((int)uStack00000024 < (int)uVar11) {
          lVar20 = (unsigned __int64)uVar11 - (unsigned __int64)uStack00000024;
        }
        if ((int)uStack0000002c < (int)uVar18) {
          lVar21 = (unsigned __int64)uVar18 - (unsigned __int64)uStack0000002c;
        }
      }
      fn_82A976B8(dVar31,uVar22,lVar25,uVar29,uVar27,0x2d22aaa5,&stack0x00000000 + -0x1d0,
                        param_8,param_9);
      uVar16 = uVar22;
      goto LAB_82aa88ac;
    }
    goto LAB_82aa877c;
  }
  fn_82A94F88(uVar3,&stack0x00000000 + -0x11c,&stack0x00000000 + -0x120);
  uStack_168 = *param_7;
  uStack_164 = param_7[1];
  iStack_160 = uStack_168 + (int)uVar29;
  iStack_15c = uStack_164 + (int)uVar27;
  uStack_184 = 0;
  uStack_180 = 0;
  uStack_17c = 0;
  uStack_170 = 0;
  uStack_16c = 1;
  uStack_158 = 0;
  uStack_154 = 1;
  uStack_150 = 1;
  uStack_14c = 0;
  uStack_148 = 0;
  uStack_144 = 0;
  uStack_140 = 0;
  if ((uVar3 == 0x12) || (uVar3 == 0x33)) {
    uStack_18c = 0x1a200052;
  }
  else if ((uVar3 == 0x13) || (uVar3 == 0x34)) {
    uStack_18c = 0x1a200053;
  }
  else if ((uVar3 == 0x14) || (uVar3 == 0x35)) {
    uStack_18c = 0x1a200054;
  }
  else if (uVar3 == 0x3a) {
    uStack_18c = 0x1a20007a;
  }
  else if (uVar3 == 0x3b) {
    uStack_18c = 0x1a20007b;
  }
  else if (uVar3 == 0xb) {
    if ((in_stack_00000064 & 4) == 0) {
      uStack_18c = 0x18280000;
    }
    else {
      uStack_18c = 0x1a200000;
    }
    uStack_18c = uStack_18c | 0x4b;
  }
  else if (uVar3 == 0xc) {
    if ((in_stack_00000064 & 4) == 0) {
      uStack_18c = 0x18280000;
    }
    else {
      uStack_18c = 0x1a200000;
    }
    uStack_18c = uStack_18c | 0x4c;
  }
  uStack_100 = *in_stack_0000005c;
  uStack_fc = in_stack_0000005c[1];
  uStack_f8 = in_stack_0000005c[2];
  uStack_f4 = in_stack_0000005c[3];
  iStack_110 = (int)param_8;
  uStack_104 = 0;
  uStack_f0 = 0;
  uStack_ec = 1;
  uStack_190 = (unsigned int)param_2;
  uStack_188 = uVar18;
  uStack_178 = uVar12;
  uStack_174 = uVar13;
  iStack_108 = (int)param_9;
  memcpy(&stack0x00000000 + -0xe8,&stack0x00000000 + -0x100,0x18);
  uStack_c8 = 0;
  uStack_c4 = 0;
  uStack_c0 = 0;
  if (uVar4 == 6) {
    uStack_10c = 0x18280086;
  }
  else {
    uStack_10c = 0x1a22aaa6;
  }
  uVar18 = in_stack_00000054 >> 6 & 3;
  bVar15 = false;
  bVar5 = false;
  uVar29 = CONCAT44(in_stack_00000054,in_stack_00000054) & 0xffffffffffffff3f;
  if (uVar18 != 2) {
    if (uVar18 == 0) {
      lVar17 = 2;
    }
    else {
      lVar17 = 3;
      if (uVar18 != 1) {
        lVar17 = 1;
      }
    }
    bVar15 = true;
    uVar29 = uVar29 << 0x20 | (unsigned __int64)in_stack_00000054 & 0xffffff3f | lVar17 << 6;
  }
  uVar18 = in_stack_00000054 >> 0x12 & 0xfff;
  if (uVar4 == 6) {
    if (uVar18 != 0x60a) {
      stack_pair_1b0.first = 0xffffffff;
LAB_82aa844c:
      bVar5 = true;
    }
  }
  else if (uVar18 != 0x688) {
    stack_pair_1b0.first = lbl_82002AE0;
    goto LAB_82aa844c;
  }
  if ((bVar15) || (bVar5)) {
    bVar1 = (unsigned char)(&lbl_821A7F10)[uVar4] >> 3;
    bVar6 = (unsigned char)(&lbl_821A7F10)[uVar4] >> 5;
    iVar24 = bVar1 * uVar12;
    uVar7 = fn_82A2A360();
    iVar9 = fn_82A28568(uVar7,0,(__int64)iVar24 * (__int64)(int)uVar13);
    if (iVar9 == 0) {
LAB_82aa877c:
      fn_82B63EC8(&stack0x00000000 + -0x1a8);
      return 0xffffffff8007000e;
    }
    fn_82AA8040(iVar9,iVar24,param_8,param_9,param_4,param_5,uVar29);
    if ((bVar5) && (uStack0000002c != 0)) {
      uVar29 = (unsigned __int64)uStack0000002c;
      iVar23 = iVar9;
      do {
        uVar27 = param_4;
        iVar26 = iVar23;
        uVar22 = param_4 & 0xffffffff;
        while (uVar22 != 0) {
          puVar30 = &stack0x00000000 + -0xb0;
          piVar28 = (int *)(&stack0x00000000 + -0x1c0);
          lVar17 = 4;
          do {
            iVar2 = *piVar28;
            if (iVar2 == 4) {
                    /* WARNING: Subroutine does not return */
              memset(puVar30,0);
            }
            if (iVar2 == 5) {
              puVar10 = &stack0x00000000 + -0x1b0;
            }
            else {
              puVar10 = (unsigned char *)((3 - iVar2) * (unsigned int)bVar6 + iVar26);
            }
            memcpy(puVar30,puVar10,(unsigned int)bVar6);
            lVar17 = lVar17 + -1;
            piVar28 = piVar28 + 1;
            puVar30 = puVar30 + bVar6;
          } while (lVar17 != 0);
          memcpy(iVar26,&stack0x00000000 + -0xb0,(unsigned int)bVar1);
          iVar26 = iVar26 + (unsigned int)bVar1;
          uVar27 = uVar27 - 1;
          uVar22 = uVar27;
        }
        uVar29 = uVar29 - 1;
        iVar23 = iVar23 + iVar24;
      } while (uVar29 != 0);
    }
    param_6 = (unsigned __int64)uStack00000034;
    param_5 = (unsigned __int64)uStack0000002c;
    param_2 = (unsigned __int64)uStack00000014;
    param_3 = (unsigned __int64)uStack0000001c;
    uVar11 = auStack_1d0[0];
    iStack_110 = iVar9;
    iStack_108 = iVar24;
  }
  lbl_83223534 = in_stack_00000064 & 1;
  lbl_831604FC = (float)param_1;
  uVar7 = fn_82B67470(&stack0x00000000 + -0x1a8,&stack0x00000000 + -400,
                            &stack0x00000000 + -0x110,uVar11);
  if (iVar9 != 0) {
    uVar8 = fn_82A2A360();
    fn_82A28E60(uVar8,0,iVar9);
  }
  uVar29 = (param_6 & 0xffffffff) >> 6 & 3;
  if ((((((((uVar3 == 0x12) || (uVar3 == 0x33)) || (uVar3 == 0x13)) ||
         ((uVar3 == 0x34 || (uVar3 == 0x3a)))) ||
        ((uVar3 == 0x14 || ((uVar3 == 0x35 || (uVar3 == 0x3b)))))) || (uVar3 == 0xb)) ||
      (uVar3 == 0xc)) && (uVar29 != 1)) {
    if (uVar29 == 0) {
      lVar17 = 1;
    }
    else {
      lVar17 = (unsigned __int64)((int)uVar29 == 2) + 2;
    }
    fn_82AA8040(param_2,param_3,param_2,param_3,param_4,param_5,
                  lVar17 << 6 | param_6 << 0x20 | param_6 & 0xffffff3f);
  }
  fn_82B63EC8(&stack0x00000000 + -0x1a8);
  return uVar7;
}
