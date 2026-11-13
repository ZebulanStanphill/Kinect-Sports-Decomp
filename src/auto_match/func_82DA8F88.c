#define true 1
extern unsigned int *auStack_100;
extern unsigned int *auStack_110;
extern unsigned int *auStack_f0;
extern unsigned int fStack_16c;
extern unsigned int fStack_174;
extern unsigned int fStack_178;
extern unsigned int fStack_18c;
extern int fn_82CE5410();
extern int fn_82CE8B30();
extern int fn_82CE9108();
extern int fn_82DAA348();
extern int fn_82DB58C0();
extern int fn_82DC3748();
extern unsigned int iStack_1bc;
extern unsigned int iStack_ac;
extern unsigned int iStack_b0;
extern unsigned int iStack_cc;
extern unsigned int lbl_8323C860;
extern unsigned int uStack0000001c;
extern unsigned int uStack_11c;
extern unsigned int uStack_120;
extern unsigned int uStack_124;
extern unsigned int uStack_128;
extern unsigned int uStack_12c;
extern unsigned int uStack_130;
extern unsigned int uStack_14c;
extern unsigned int uStack_150;
extern unsigned int uStack_170;
extern unsigned int uStack_17c;
extern unsigned int uStack_180;
extern unsigned int uStack_184;
extern unsigned int uStack_188;
extern unsigned int uStack_190;
extern unsigned int uStack_1b0;
extern unsigned int uStack_1b4;
extern unsigned int uStack_1b8;
extern unsigned int uStack_1c0;
extern unsigned int uStack_1ca;
extern unsigned int uStack_1cc;
extern unsigned int uStack_1ce;
extern unsigned int uStack_1cf;
extern unsigned int uStack_1d0;
extern unsigned int uStack_a8;
extern unsigned int uStack_c0;
extern unsigned int uStack_c3;
extern unsigned int uStack_c4;
extern unsigned int uStack_c8;
extern unsigned int uStack_d0;
extern unsigned int uStack_d8;


void fn_82DA8F88(int param_1,unsigned __int64 param_2,int param_3,int *param_4,unsigned __int64 param_5,
                  int param_6,unsigned __int64 param_7)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  unsigned int *puVar7;
  unsigned int *puVar8;
  unsigned __int64 in_r0;
  int *piVar9;
  unsigned int uVar10;
  int iVar11;
  int *piVar12;
  unsigned int uVar13;
  int *piVar14;
  unsigned __int64 uVar15;
  unsigned __int64 uVar16;
  unsigned short *puVar17;
  unsigned short *puVar18;
  unsigned int uVar19;
  unsigned int uVar20;
  unsigned int uStack0000001c;
  unsigned char uStack_1d0;
  unsigned char uStack_1cf;
  unsigned char uStack_1ce;
  unsigned short uStack_1cc;
  unsigned short uStack_1ca;
  unsigned short uStack_1c0;
  int iStack_1bc;
  unsigned int uStack_1b8;
  unsigned int uStack_1b4;
  unsigned int uStack_1b0;
  int aiStack_1a0 [4];
  unsigned int uStack_190;
  float fStack_18c;
  unsigned int uStack_188;
  unsigned int uStack_184;
  unsigned int uStack_180;
  unsigned int uStack_17c;
  float fStack_178;
  float fStack_174;
  unsigned int uStack_170;
  float fStack_16c;
  unsigned int uStack_150;
  unsigned int uStack_14c;
  unsigned int uStack_130;
  unsigned char uStack_12c;
  unsigned int uStack_128;
  unsigned int uStack_124;
  unsigned int uStack_120;
  unsigned int uStack_11c;
  unsigned char auStack_110 [16];
  unsigned char auStack_100 [16];
  unsigned char auStack_f0 [24];
  unsigned __int64 uStack_d8;
  unsigned int uStack_d0;
  int iStack_cc;
  unsigned int uStack_c8;
  unsigned char uStack_c4;
  unsigned char uStack_c3;
  unsigned int uStack_c0;
  int iStack_b0;
  int iStack_ac;
  unsigned int uStack_a8;
  unsigned int *puStack_a4;
  
  uStack0000001c = (unsigned int)param_2;
  iVar11 = (int)param_5;
  if ((*(int *)(param_1 + 200) == 0) || (param_3 <= *(int *)(*(int *)(param_1 + 0xc) + 0xec))) {
    if (0 < iVar11) {
      param_4 = param_4 + -6;
      do {
        puVar8 = (unsigned int *)(param_4 + 8);
        piVar12 = param_4 + 7;
        param_4 = param_4 + 6;
        fn_82DB58C0(param_1,((unsigned __int64)*puVar8 & 0x3fffffff) * 4 + param_2,*piVar12,param_6,
                          *param_4,param_7);
        param_5 = param_5 - 1;
      } while (param_5 != 0);
    }
  }
  else {
    uVar1 = *(unsigned int *)(*(int *)(param_1 + 0xc) + 0xe8);
    uVar16 = (unsigned __int64)uVar1;
    piVar12 = (int *)0x0;
    piVar9 = (int *)fn_82CE5410();
    iVar2 = *piVar9;
    *piVar9 = ((int)((param_5 + (param_5 & 0x3fffffff) * 4 & 0xffffffff) << 4) + 0x7fU & 0xffffff80)
              + iVar2;
    if (0 < iVar11) {
      puVar18 = (unsigned short *)(iVar2 + 4);
      uVar15 = param_5;
      piVar9 = param_4;
      piVar14 = piVar12;
      while( true ) {
        piVar12 = piVar9;
        if (*piVar9 != *(int *)(*(int *)(param_1 + 0xc) + 0x20)) {
          iVar3 = piVar9[2];
          iVar4 = piVar9[1];
          if (puVar18 == (unsigned short *)0x4) {
            puVar17 = (unsigned short *)0x0;
          }
          else {
            *(unsigned char *)(puVar18 + -2) = 0xf;
            puVar17 = puVar18 + -2;
            *(unsigned char *)((int)puVar18 + -3) = 0;
            *(unsigned char *)(puVar18 + -1) = 1;
            puVar18[6] = 0xffff;
            *puVar18 = 0x50;
            puVar18[1] = 0xffff;
            *(unsigned int *)(puVar18 + 8) = 0;
            *(unsigned int *)(puVar18 + 10) = 0;
            *(unsigned int *)(puVar18 + 0x16) = *(unsigned int *)(param_6 + 0x50);
            *(unsigned int *)(puVar18 + 0x18) = *(unsigned int *)(param_6 + 0x54);
            *(unsigned int *)(puVar18 + 0x1a) = *(unsigned int *)(param_6 + 0x58);
            *(unsigned int *)(puVar18 + 0x1c) = *(unsigned int *)(param_6 + 0x5c);
            puVar18[6] = 0;
            puVar18[0x10] = 0;
            *(int *)(puVar18 + 0x14) = iVar3 * 4 + (int)param_2;
            puVar18[0x12] = (short)iVar4;
            puVar18[0x13] = (short)uVar1;
            *(unsigned int *)(puVar18 + 0xe) = 0;
            *(unsigned char *)((int)puVar18 + -3) = 1;
            *(char *)(puVar18 + 0x1e) = (char)param_7;
          }
          *(unsigned int *)(puVar17 + 0xe) = *(unsigned int *)(*(int *)(param_1 + 0xc) + 0x74);
          piVar12 = piVar14;
          if (0 < iVar4) {
            uVar13 = iVar4 - 1;
            trapWord(6,uVar16,0);
            trapWord(5,uVar16 & ~((((unsigned __int64)uVar13 & 0x7fffffff) << 1 |
                                  (unsigned __int64)(uVar13 >> 0x1f)) - 1),0xffff);
            uVar10 = fn_82DAA348((__int64)((int)uVar13 / (int)uVar1) + 1,uVar16);
            *(unsigned char *)(puVar17 + 1) = 2;
            *(unsigned int *)(puVar17 + 0x10) = uVar10;
            puVar17[8] = *(unsigned short *)(*piVar9 + 0x20);
            fn_82CE8B30(*(unsigned int *)(param_1 + 200),puVar17,1);
            piVar9[4] = (int)puVar17;
          }
        }
        uVar15 = uVar15 - 1;
        piVar9 = piVar9 + 6;
        puVar18 = puVar18 + 0x28;
        if (uVar15 == 0) break;
        param_2 = (unsigned __int64)uStack0000001c;
        piVar14 = piVar12;
      }
    }
    fn_82CE9108(*(unsigned int *)(param_1 + 200));
    if (0 < iVar11) {
      param_4 = param_4 + 4;
      do {
        iVar11 = *param_4;
        if (iVar11 != 0) {
          uStack_1cc = 0x30;
          uStack_1cf = 0;
          uStack_1ce = 2;
          uStack_1ca = 0xffff;
          aiStack_1a0[0] = *(int *)(param_1 + 0xc);
          uStack_1d0 = 0xe;
          iStack_1bc = param_4[-4];
          iStack_ac = aiStack_1a0[0] + 0x1d0;
          uStack_1b8 = *(unsigned int *)(iVar11 + 0x18);
          uStack_1b4 = *(unsigned int *)(iVar11 + 0x1c);
          uStack_1c0 = *(unsigned short *)(iVar11 + 0x10);
          uStack_1b0 = *(unsigned int *)(iVar11 + 0x20);
          iStack_cc = 0;
          puVar5 = *(unsigned int **)(aiStack_1a0[0] + 0x78);
          uStack_130 = *puVar5;
          uStack_12c = *(unsigned char *)(puVar5 + 1);
          uStack_128 = puVar5[2];
          uStack_124 = puVar5[3];
          uStack_120 = puVar5[4];
          uStack_11c = puVar5[5];
          iVar11 = (int)in_r0;
          puVar6 = (unsigned int *)((int)puVar5 + iVar11 + 0x20 & 0xfffffff0);
          uVar10 = puVar6[1];
          uVar19 = puVar6[2];
          uVar20 = puVar6[3];
          puVar7 = (unsigned int *)((unsigned int)(auStack_110 + iVar11) & 0xfffffff0);
          *puVar7 = *puVar6;
          puVar7[1] = uVar10;
          puVar7[2] = uVar19;
          puVar7[3] = uVar20;
          puVar6 = (unsigned int *)((unsigned int)(puVar5 + 0xc) & 0xfffffff0);
          uVar10 = puVar6[1];
          uVar19 = puVar6[2];
          uVar20 = puVar6[3];
          puVar7 = (unsigned int *)((unsigned int)(auStack_100 + iVar11) & 0xfffffff0);
          *puVar7 = *puVar6;
          puVar7[1] = uVar10;
          puVar7[2] = uVar19;
          puVar7[3] = uVar20;
          puVar6 = (unsigned int *)((unsigned int)(puVar5 + 0x10) & 0xfffffff0);
          uVar10 = puVar6[1];
          uVar19 = puVar6[2];
          uVar20 = puVar6[3];
          puVar7 = (unsigned int *)((unsigned int)(auStack_f0 + iVar11) & 0xfffffff0);
          *puVar7 = *puVar6;
          puVar7[1] = uVar10;
          puVar7[2] = uVar19;
          puVar7[3] = uVar20;
          uStack_d8 = *(unsigned __int64 *)(puVar5 + 0x16);
          uStack_d0 = puVar5[0x18];
          uStack_c8 = puVar5[0x1a];
          uStack_c4 = *(unsigned char *)(puVar5 + 0x1b);
          uStack_c3 = *(unsigned char *)((int)puVar5 + 0x6d);
          uStack_c0 = puVar5[0x1c];
          uStack_190 = *(unsigned int *)(aiStack_1a0[0] + 0x2ec);
          fStack_18c = *(float *)(aiStack_1a0[0] + 0x2ec) * *(float *)(aiStack_1a0[0] + 0x2fc);
          uStack_188 = *(unsigned int *)(aiStack_1a0[0] + 0x2f0);
          uStack_17c = *(unsigned int *)(aiStack_1a0[0] + 0x300);
          fStack_178 = *(float *)(aiStack_1a0[0] + 0x2fc) * *(float *)(aiStack_1a0[0] + 0x300);
          uStack_150 = *(unsigned int *)(aiStack_1a0[0] + 0x1e4);
          uStack_14c = *(unsigned int *)(aiStack_1a0[0] + 0x1e8);
          fStack_174 = *(float *)(aiStack_1a0[0] + 0x234) * *(float *)(aiStack_1a0[0] + 0x2f0);
          uStack_170 = *(unsigned int *)(aiStack_1a0[0] + 0x1e8);
          fStack_16c = *(float *)(aiStack_1a0[0] + 0x23c) * *(float *)(aiStack_1a0[0] + 0x2f0);
          uStack_184 = *(unsigned int *)(aiStack_1a0[0] + 0x1d8);
          uStack_180 = *(unsigned int *)(aiStack_1a0[0] + 0x1dc);
          uStack_a8 = *(unsigned int *)(*(int *)(aiStack_1a0[0] + 0x78) + 8);
          puStack_a4 = &lbl_8323C860;
          iStack_b0 = param_1;
          fn_82DC3748(aiStack_1a0,0,&uStack_1d0);
          if (iStack_cc != 0) {
            iVar11 = fn_82CE5410();
            (**(int (***)())(**(int **)(iVar11 + 0x10) + 8))(*(int **)(iVar11 + 0x10),iStack_cc,0x200);
          }
        }
        param_5 = param_5 - 1;
        param_4 = param_4 + 6;
      } while (param_5 != 0);
    }
    if (piVar12 != (int *)0x0) {
      fn_82DB58C0(param_1,((unsigned __int64)(unsigned int)piVar12[2] & 0x3fffffff) * 4 +
                                (unsigned __int64)uStack0000001c,piVar12[1],param_6,*piVar12,0);
    }
    piVar12 = (int *)fn_82CE5410();
    *piVar12 = iVar2;
  }
  return;
}

