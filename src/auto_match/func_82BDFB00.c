extern unsigned int *auStack_68;
extern int fn_82BDECB8();
extern int fn_82BDF030();
extern int fn_82BDF890();
extern int fn_82BE0220();
extern int fn_82BE02D0();
extern int fn_82BE09B8();
extern int memset();
extern unsigned int iStack_6c;
extern unsigned int iStack_70;
extern unsigned int iStack_80;
extern unsigned int iStack_90;
extern unsigned int lbl_831739B0;
extern unsigned int lbl_831739B4;
extern unsigned int lbl_831739B8;
extern unsigned int lbl_831739BC;
extern unsigned int lbl_8329EC80;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;


unsigned __int64
fn_82BDFB00(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned short *param_4,int param_5)

{
  short sVar1;
  unsigned short uVar2;
  unsigned short uVar3;
  unsigned short uVar4;
  unsigned short uVar5;
  unsigned short uVar6;
  unsigned short uVar7;
  unsigned short uVar8;
  unsigned short uVar9;
  unsigned short uVar10;
  unsigned short uVar11;
  unsigned short uVar12;
  unsigned short uVar13;
  unsigned short uVar14;
  unsigned short uVar15;
  unsigned short uVar16;
  unsigned short uVar17;
  unsigned short uVar18;
  unsigned short uVar19;
  unsigned short uVar20;
  unsigned short uVar21;
  unsigned short uVar22;
  unsigned __int64 uVar23;
  int iVar25;
  __int64 lVar24;
  unsigned __int64 uVar26;
  unsigned short uVar27;
  unsigned __int64 uVar28;
  int *piVar29;
  unsigned __int64 uVar30;
  unsigned int uVar31;
  unsigned int uVar32;
  unsigned int *puVar33;
  unsigned __int64 uVar34;
  int iVar35;
  int iVar36;
  struct { int first; unsigned int second; } stack_pair_90;

  unsigned int uStack_88;
  unsigned int uStack_84;
  int iStack_80;
  unsigned int uStack_7c;
  unsigned int uStack_78;
  unsigned int uStack_74;
  int iStack_70;
  int iStack_6c;
  unsigned char auStack_68 [104];
  
  iVar25 = (int)param_2;
  if (iVar25 == 3) {
    param_3 = 1;
  }
  uVar23 = fn_82BE0220(param_2,&iStack_6c,&uStack_88,&uStack_78,&iStack_70,&uStack_84,
                             &uStack_7c,&uStack_74);
  if ((int)uVar23 == 0) {
    uVar30 = (unsigned __int64)uStack_88;
    *(unsigned short **)(param_1 + 0x148) = param_4;
    *(unsigned int *)(param_1 + 0x144) = 0;
    if (0 < (int)uStack_88) {
      uVar32 = 0;
      do {
        if (*(int *)(param_1 + 0x144) == 0) {
          sVar1 = **(short **)(param_1 + 0x148);
          *(short **)(param_1 + 0x148) = *(short **)(param_1 + 0x148) + 1;
          *(unsigned int *)(param_1 + 0x144) = 0x10;
          *(int *)(param_1 + 0x140) = (int)sVar1;
        }
        uVar31 = *(int *)(param_1 + 0x144) - 1;
        *(unsigned int *)(param_1 + 0x144) = uVar31;
        uVar31 = *(int *)(param_1 + 0x140) >> (uVar31 & 0x3f) & 1;
        *(unsigned int *)(param_1 + 0x13c) = uVar31;
        uVar32 = uVar32 << 1 | uVar31;
        uVar30 = uVar30 - 1;
      } while (uVar30 != 0);
      uVar23 = fn_82BDF890(param_2,uVar32,&stack_pair_90.second);
      if ((int)uVar23 != 0) {
        return uVar23;
      }
      if ((iVar25 == 1) || (iVar25 == 2)) {
        uVar30 = param_3 & 0xffffffff;
        param_3 = (unsigned __int64)stack_pair_90.second;
        if (uVar30 != stack_pair_90.second) {
          return 7;
        }
      }
      else {
        param_3 = (unsigned __int64)stack_pair_90.second;
      }
    }
    uVar23 = fn_82BE02D0(param_2,param_3,&stack_pair_90.first,auStack_68,&iStack_80);
    iVar35 = stack_pair_90.first;
    iVar25 = lbl_8329EC80;
    if ((int)uVar23 == 0) {
      *(unsigned int *)(param_1 + 0x138) = (iStack_80 - uStack_88) - uStack_84;
      iVar25 = iVar25 * stack_pair_90.first;
      fn_82BDECB8(param_1,stack_pair_90.first,param_1 + 0x100,param_1,uStack_7c);
      uVar34 = 0;
      uVar30 = (unsigned __int64)uStack_78;
      if (0 < (int)uStack_78) {
        do {
          if (*(int *)(param_1 + 0x144) == 0) {
            sVar1 = **(short **)(param_1 + 0x148);
            *(short **)(param_1 + 0x148) = *(short **)(param_1 + 0x148) + 1;
            *(unsigned int *)(param_1 + 0x144) = 0x10;
            *(int *)(param_1 + 0x140) = (int)sVar1;
          }
          uVar32 = *(int *)(param_1 + 0x144) - 1;
          *(unsigned int *)(param_1 + 0x144) = uVar32;
          uVar28 = (unsigned __int64)(unsigned int)(*(int *)(param_1 + 0x140) >> (uVar32 & 0x3f)) & 1;
          *(int *)(param_1 + 0x13c) = (int)uVar28;
          uVar34 = (uVar34 & 0x7fffffff) * 2 + uVar28;
          uVar30 = uVar30 - 1;
        } while (uVar30 != 0);
      }
      iVar36 = param_1 + 0x40;
      lVar24 = (unsigned __int64)*(unsigned int *)(param_1 + 0x138) - (unsigned __int64)uStack_78;
      *(int *)(param_1 + 0x138) = (int)lVar24;
      fn_82BE09B8(iVar35,lVar24,param_1,iVar36,param_1 + 0x80);
      iVar35 = (int)uVar34;
      if (0 < iVar35) {
        piVar29 = (int *)(param_1 + 0x7c);
        do {
          piVar29 = piVar29 + 1;
          *(int *)(*piVar29 * 4 + iVar36) = *(int *)(*piVar29 * 4 + iVar36) + 1;
          uVar34 = uVar34 - 1;
        } while (uVar34 != 0);
      }
      fn_82BDF030(param_1,stack_pair_90.first,param_1 + 0x100,iVar36,param_5,uStack_74);
      uVar32 = 0;
      if (*(int *)(param_1 + 0x138) < 1) {
        if ((iVar35 < iStack_70 + -1) && (*(int *)(param_1 + 0x138) < 0)) {
          uVar32 = 2;
        }
      }
      else {
        iVar35 = 0;
        do {
          if (*(int *)(param_1 + 0x144) == 0) {
            sVar1 = **(short **)(param_1 + 0x148);
            *(short **)(param_1 + 0x148) = *(short **)(param_1 + 0x148) + 1;
            *(unsigned int *)(param_1 + 0x144) = 0x10;
            *(int *)(param_1 + 0x140) = (int)sVar1;
          }
          uVar31 = *(int *)(param_1 + 0x144) - 1;
          *(unsigned int *)(param_1 + 0x144) = uVar31;
          uVar31 = *(int *)(param_1 + 0x140) >> (uVar31 & 0x3f) & 1;
          *(unsigned int *)(param_1 + 0x13c) = uVar31;
          if (uVar31 == 0) {
            uVar32 = 1;
          }
          iVar35 = iVar35 + 1;
        } while (iVar35 < *(int *)(param_1 + 0x138));
      }
      if (0 < stack_pair_90.first) {
        piVar29 = (int *)(param_1 + 8);
        lVar24 = (unsigned __int64)(stack_pair_90.first - 1) / 7 + 1;
        do {
          if ((0x21 < piVar29[-2]) || (piVar29[-2] < -0x1f)) {
            uVar32 = uVar32 | 4;
          }
          if ((0x21 < piVar29[-1]) || (piVar29[-1] < -0x1f)) {
            uVar32 = uVar32 | 4;
          }
          if ((0x21 < *piVar29) || (*piVar29 < -0x1f)) {
            uVar32 = uVar32 | 4;
          }
          if ((0x21 < piVar29[1]) || (piVar29[1] < -0x1f)) {
            uVar32 = uVar32 | 4;
          }
          if ((0x21 < piVar29[2]) || (piVar29[2] < -0x1f)) {
            uVar32 = uVar32 | 4;
          }
          if ((0x21 < piVar29[3]) || (piVar29[3] < -0x1f)) {
            uVar32 = uVar32 | 4;
          }
          if ((0x21 < piVar29[4]) || (piVar29[4] < -0x1f)) {
            uVar32 = uVar32 | 4;
          }
          piVar29 = piVar29 + 7;
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
      }
      if (0 < (int)uStack_84) {
        iStack_80 = iStack_80 >> 4;
        uVar27 = (short)(1 << (uStack_84 & 0x3f)) - 1;
        *(unsigned short **)(param_1 + 0x148) = param_4 + iStack_80 + -1;
        uVar2 = param_4[iStack_80 + -1];
        *(unsigned short **)(param_1 + 0x148) = param_4;
        if (iStack_80 == 0x14) {
          uVar3 = *param_4;
          *(unsigned short **)(param_1 + 0x148) = param_4 + 1;
          uVar4 = param_4[1];
          *(unsigned short **)(param_1 + 0x148) = param_4 + 2;
          uVar5 = param_4[2];
          *(unsigned short **)(param_1 + 0x148) = param_4 + 3;
          uVar6 = param_4[3];
          *(unsigned short **)(param_1 + 0x148) = param_4 + 4;
          uVar7 = param_4[4];
          *(unsigned short **)(param_1 + 0x148) = param_4 + 5;
          uVar8 = param_4[5];
          *(unsigned short **)(param_1 + 0x148) = param_4 + 6;
          uVar9 = param_4[6];
          *(unsigned short **)(param_1 + 0x148) = param_4 + 7;
          uVar10 = param_4[7];
          *(unsigned short **)(param_1 + 0x148) = param_4 + 8;
          uVar11 = param_4[8];
          *(unsigned short **)(param_1 + 0x148) = param_4 + 9;
          uVar12 = param_4[9];
          *(unsigned short **)(param_1 + 0x148) = param_4 + 10;
          uVar13 = param_4[10];
          *(unsigned short **)(param_1 + 0x148) = param_4 + 0xb;
          uVar14 = param_4[0xb];
          *(unsigned short **)(param_1 + 0x148) = param_4 + 0xc;
          uVar15 = param_4[0xc];
          *(unsigned short **)(param_1 + 0x148) = param_4 + 0xd;
          uVar16 = param_4[0xd];
          *(unsigned short **)(param_1 + 0x148) = param_4 + 0xe;
          uVar17 = param_4[0xe];
          *(unsigned short **)(param_1 + 0x148) = param_4 + 0xf;
          uVar18 = param_4[0xf];
          *(unsigned short **)(param_1 + 0x148) = param_4 + 0x10;
          uVar19 = param_4[0x10];
          *(unsigned short **)(param_1 + 0x148) = param_4 + 0x11;
          uVar20 = param_4[0x11];
          *(unsigned short **)(param_1 + 0x148) = param_4 + 0x12;
          uVar21 = param_4[0x12];
          *(unsigned short **)(param_1 + 0x148) = param_4 + 0x13;
          uVar22 = param_4[0x13];
          *(unsigned short **)(param_1 + 0x148) = param_4 + 0x14;
          uVar30 = ((unsigned __int64)uVar22 & ~(__int64)(short)uVar27) << 4 ^
                   (unsigned __int64)uVar21 << 3 ^
                   (unsigned __int64)uVar20 << 2 ^
                   (unsigned __int64)uVar19 << 1 ^
                   (unsigned __int64)uVar17 << 0xe ^ (unsigned __int64)uVar18 ^
                   (unsigned __int64)uVar16 << 0xd ^
                   (unsigned __int64)uVar15 << 0xc ^
                   (unsigned __int64)uVar14 << 0xb ^
                   (unsigned __int64)uVar13 << 10 ^
                   (unsigned __int64)uVar12 << 9 ^
                   (unsigned __int64)uVar11 << 8 ^
                   (unsigned __int64)uVar10 << 7 ^
                   (unsigned __int64)uVar9 << 6 ^
                   (unsigned __int64)uVar8 << 5 ^
                   (unsigned __int64)uVar7 << 4 ^
                   (unsigned __int64)uVar6 << 3 ^
                   (unsigned __int64)uVar5 << 2 ^ (unsigned __int64)uVar4 << 1 ^ (unsigned __int64)uVar3;
        }
        else {
          lVar24 = (__int64)iStack_80 + -1;
          uVar30 = 0;
          uVar34 = 0;
          if (0 < lVar24) {
            do {
              uVar3 = **(unsigned short **)(param_1 + 0x148);
              *(unsigned short **)(param_1 + 0x148) = *(unsigned short **)(param_1 + 0x148) + 1;
              uVar30 = (unsigned int)uVar3 << ((unsigned int)uVar34 & 0x3f) ^ uVar30;
              uVar34 = -(unsigned __int64)(uVar34 != 0xe) & uVar34 + 1;
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
          }
          uVar3 = **(unsigned short **)(param_1 + 0x148);
          *(unsigned short **)(param_1 + 0x148) = *(unsigned short **)(param_1 + 0x148) + 1;
          uVar30 = ((unsigned int)uVar3 & ~(int)(short)uVar27) << ((unsigned int)uVar34 & 0x3f) ^ uVar30;
        }
        uVar30 = (__int64)((int)uVar30 >> 0xf) ^ uVar30 & 0x7fff;
        uVar26 = (__int64)((int)(lbl_831739B0 & uVar30) >> 8) ^ lbl_831739B0 & uVar30;
        uVar26 = (__int64)((int)uVar26 >> 4) ^ uVar26;
        uVar26 = (__int64)((int)uVar26 >> 2) ^ uVar26;
        uVar34 = (__int64)((int)(lbl_831739B4 & uVar30) >> 8) ^ lbl_831739B4 & uVar30;
        uVar34 = (__int64)((int)uVar34 >> 4) ^ uVar34;
        uVar34 = (__int64)((int)uVar34 >> 2) ^ uVar34;
        uVar28 = (__int64)((int)(lbl_831739B8 & uVar30) >> 8) ^ lbl_831739B8 & uVar30;
        uVar28 = (__int64)((int)uVar28 >> 4) ^ uVar28;
        uVar28 = (__int64)((int)uVar28 >> 2) ^ uVar28;
        uVar30 = (__int64)((int)(lbl_831739BC & uVar30) >> 8) ^ lbl_831739BC & uVar30;
        uVar30 = (__int64)((int)uVar30 >> 4) ^ uVar30;
        uVar30 = (__int64)((int)uVar30 >> 2) ^ uVar30;
        if ((((__int64)((int)uVar30 >> 1) ^ uVar30) & 1) +
            ((((__int64)((int)uVar28 >> 1) ^ uVar28) & 1) +
            ((((__int64)((int)uVar34 >> 1) ^ uVar34) & 1) +
            (((__int64)((int)uVar26 >> 1) ^ uVar26) & 1) * 2) * 2) * 2 !=
            (__int64)(short)(uVar2 & uVar27)) {
          uVar32 = uVar32 | 8;
        }
      }
      if ((uVar32 != 0) && (0 < iVar25)) {
        puVar33 = (unsigned int *)(param_5 + -4);
        for (iVar35 = iVar25; iVar35 != 0; iVar35 = iVar35 + -1) {
          puVar33 = puVar33 + 1;
          *puVar33 = 0;
        }
      }
                    /* WARNING: Subroutine does not return */
      memset(iVar25 * 4 + param_5,0,iStack_6c - iVar25 & 0x3fffffff);
    }
  }
  return uVar23;
}

