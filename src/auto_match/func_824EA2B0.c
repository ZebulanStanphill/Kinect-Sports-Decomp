typedef struct { unsigned __int64 lo, hi; } V16;
extern unsigned int *auStack_140;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_e0;
extern unsigned int fStack_100;
extern unsigned int fStack_104;
extern unsigned int fStack_108;
extern unsigned int fStack_10c;
extern unsigned int fStack_114;
extern unsigned int fStack_118;
extern unsigned int fStack_11c;
extern unsigned int fStack_120;
extern unsigned int fStack_124;
extern unsigned int fStack_128;
extern unsigned int fStack_12c;
extern unsigned int fStack_130;
extern unsigned int fStack_e8;
extern unsigned int fStack_ec;
extern unsigned int fStack_f0;
extern unsigned int fStack_f4;
extern int fn_826310E0();
extern int fn_82631578();
extern int fn_82631920();
extern int fn_82637B30();
extern int fn_82637C50();
extern int fn_82637CE0();
extern int fn_8263CBB0();
extern int fn_82640058();
extern int fn_82837D98();
extern int fn_82F6A540();
extern int fn_82F6A58C();
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_8320A898;
extern unsigned int lbl_8329618C;
extern unsigned int lbl_83296890;
extern unsigned int lbl_832968D0;
extern unsigned int lbl_83296BE0;
extern unsigned int lbl_83296C20;
extern unsigned int lbl_83296C80;
extern unsigned int uStack_110;
extern unsigned int uStack_e4;
extern unsigned int uStack_f8;
extern unsigned int uStack_fc;
extern V16 vectorMergeHighWord();
extern V16 vectorMergeLowWord();
extern void *memcpy(void *, const void *, unsigned int);


void fn_824EA2B0(unsigned __int64 param_1,double param_2,double param_3,double param_4,double param_5)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int *puVar7;
  float fVar8;
  unsigned __int64 *puVar9;
  int in_r0;
  unsigned __int64 *puVar10;
  int in_r8;
  unsigned __int64 in_r9;
  int in_r10;
  int iVar11;
  unsigned __int64 *puVar12;
  unsigned int uVar13;
  unsigned int uVar14;
  double dVar15;
  double dVar16;
  unsigned char in_vs32 [16];
  unsigned char auVar17 [16];
  unsigned char auVar18 [16];
  unsigned char in_vs39 [16];
  unsigned char auVar19 [16];
  unsigned char auVar20 [16];
  unsigned char in_vs42 [16];
  unsigned char in_vs43 [16];
  unsigned char auVar21 [16];
  unsigned char in_vs44 [16];
  unsigned char in_vs45 [16];
  unsigned char auVar22 [16];
  unsigned int uVar23;
  unsigned int uVar24;
  unsigned int uVar25;
  unsigned int uVar26;
  unsigned int in_register_00010040;
  unsigned int in_register_00010044;
  unsigned int in_register_00010048;
  unsigned int in_vr4;
  unsigned int in_register_00010080;
  unsigned int in_register_00010084;
  unsigned int in_register_00010088;
  unsigned int in_vr8;
  unsigned int in_register_00010090;
  unsigned int in_register_00010094;
  unsigned int in_register_00010098;
  unsigned int in_vr9;
  unsigned int uVar27;
  unsigned int uVar28;
  unsigned int uVar29;
  unsigned int uVar30;
  unsigned int uVar31;
  unsigned int uVar32;
  unsigned int uVar33;
  unsigned int uVar34;
  unsigned int auStack_140 [4];
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  unsigned int uStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  unsigned int uStack_fc;
  unsigned int uStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  unsigned int uStack_e4;
  unsigned char auStack_e0 [16];
  unsigned char auStack_d0 [16];
  unsigned char auStack_c0 [16];
  unsigned char auStack_b0 [176];
  
  dVar15 = (double)fn_82F6A540();
  puVar9 = lbl_8320A898;
  uVar13 = 0;
  if (lbl_8329618C == 0) {
    iVar11 = 0;
  }
  else {
    iVar11 = *(int *)(lbl_8329618C + 4);
  }
  if ((iVar11 != 0) && (iVar11 = *(int *)(iVar11 + 0xd54), iVar11 != 0)) {
    *(unsigned int *)(lbl_8320A898 + 0x5db) = 0;
    puVar9[2] = puVar9[2] | 0x80000;
    fn_82631920(lbl_8320A898,*(unsigned int *)(iVar11 + 0x50));
    fn_82631578(lbl_8320A898,*(unsigned int *)(iVar11 + 0x60));
    puVar9 = lbl_8320A898;
    puVar10 = &lbl_83296890;
    puVar12 = (unsigned __int64 *)(&lbl_83296BE0 + in_r10 * 0x2c);
    if ((&lbl_83296C80)[in_r10 * 0x2c] == 0) {
      puVar12 = &lbl_832968D0;
    }
    else {
      puVar10 = &lbl_83296C20 + in_r10 * 0x16;
    }
    puVar7 = (unsigned int *)(in_r0 + (int)puVar10 & 0xfffffff0);
    uVar23 = *puVar7;
    uVar24 = puVar7[1];
    uVar25 = puVar7[2];
    uVar26 = puVar7[3];
    uVar31 = *(unsigned int *)(puVar10 + 6);
    uVar32 = *(unsigned int *)((int)puVar10 + 0x34);
    uVar33 = *(unsigned int *)(puVar10 + 7);
    uVar34 = *(unsigned int *)((int)puVar10 + 0x3c);{ V16 _vt0 = vectorMergeHighWord(in_vs32,in_vs44); memcpy(auVar20, &_vt0, 16); }{ V16 _vt1 = vectorMergeLowWord(in_vs32,in_vs44); memcpy(auVar17, &_vt1, 16); }{ V16 _vt2 = vectorMergeHighWord(in_vs42,in_vs43); memcpy(auVar19, &_vt2, 16); }{ V16 _vt3 = vectorMergeLowWord(in_vs42,in_vs43); memcpy(auVar21, &_vt3, 16); }
    uVar27 = *(unsigned int *)(puVar12 + 2);
    uVar28 = *(unsigned int *)((int)puVar12 + 0x14);
    uVar29 = *(unsigned int *)(puVar12 + 3);
    uVar30 = *(unsigned int *)((int)puVar12 + 0x1c);{ V16 _vt4 = vectorMergeHighWord(in_vs45,in_vs44); memcpy(auVar18, &_vt4, 16); }{ V16 _vt5 = vectorMergeLowWord(in_vs45,in_vs44); memcpy(auVar22, &_vt5, 16); }
    vectorMergeHighWord(auVar20,auVar19);
    vectorMergeLowWord(auVar20,auVar19);
    vectorMergeHighWord(auVar17,auVar21);
    vectorMergeLowWord(auVar17,auVar21);{ V16 _vt6 = vectorMergeLowWord(in_vs42,in_vs39); memcpy(auVar19, &_vt6, 16); }{ V16 _vt7 = vectorMergeHighWord(in_vs42,in_vs39); memcpy(auVar17, &_vt7, 16); }
    puVar7 = (unsigned int *)((unsigned int)(auStack_e0 + in_r0) & 0xfffffff0);
    *puVar7 = in_register_00010040;
    puVar7[1] = in_register_00010044;
    puVar7[2] = in_register_00010048;
    puVar7[3] = in_vr4;
    puVar7 = (unsigned int *)((unsigned int)(auStack_d0 + in_r0) & 0xfffffff0);
    *puVar7 = in_register_00010090;
    puVar7[1] = in_register_00010094;
    puVar7[2] = in_register_00010098;
    puVar7[3] = in_vr9;
    vectorMergeHighWord(auVar22,auVar19);
    puVar7 = (unsigned int *)((unsigned int)(auStack_c0 + in_r0) & 0xfffffff0);
    *puVar7 = in_register_00010080;
    puVar7[1] = in_register_00010084;
    puVar7[2] = in_register_00010088;
    puVar7[3] = in_vr8;
    vectorMergeHighWord(auVar18,auVar17);
    puVar7 = (unsigned int *)((unsigned int)(auStack_b0 + in_r0) & 0xfffffff0);
    *puVar7 = uVar23;
    puVar7[1] = uVar24;
    puVar7[2] = uVar25;
    puVar7[3] = uVar26;
    vectorMergeLowWord(auVar18,auVar17);
    vectorMergeLowWord(auVar22,auVar19);
    puVar7 = (unsigned int *)((int)&uStack_110 + in_r0 & 0xfffffff0);
    *puVar7 = in_register_00010090;
    puVar7[1] = in_register_00010094;
    puVar7[2] = in_register_00010098;
    puVar7[3] = in_vr9;
    puVar7 = (unsigned int *)((int)&fStack_130 + in_r0 & 0xfffffff0);
    *puVar7 = uVar31;
    puVar7[1] = uVar32;
    puVar7[2] = uVar33;
    puVar7[3] = uVar34;
    puVar7 = (unsigned int *)((int)&fStack_120 + in_r0 & 0xfffffff0);
    *puVar7 = uVar27;
    puVar7[1] = uVar28;
    puVar7[2] = uVar29;
    puVar7[3] = uVar30;
    puVar7 = (unsigned int *)((int)&fStack_100 + in_r0 & 0xfffffff0);
    *puVar7 = uVar23;
    puVar7[1] = uVar24;
    puVar7[2] = uVar25;
    puVar7[3] = uVar26;
    fn_826310E0(puVar9,0xc0,auStack_e0,4,0x8000);
    fn_826310E0(lbl_8320A898,0xc4,&fStack_130,4,0x4000);
    puVar9 = lbl_8320A898;
    *(float *)(lbl_8320A898 + 0x280) = (float)param_4;
    fVar8 = ltcg_pool_0_0f;
    dVar16 = (double)ltcg_pool_0_0f;
    *(float *)((int)puVar9 + 0x1404) = (float)param_5;
    *(float *)(puVar9 + 0x281) = fVar8;
    *(float *)((int)puVar9 + 0x140c) = fVar8;
    *puVar9 = *puVar9 | 0x2000;
    fn_82837D98(*(unsigned int *)(in_r8 + 0x14),0,auStack_140);
    fn_8263CBB0(lbl_8320A898,0,auStack_140[0],0x80000000);
    puVar9 = lbl_8320A898;
    uVar1 = *(unsigned int *)((int)lbl_8320A898 + 0x2934);
    uVar2 = *(unsigned int *)((int)lbl_8320A898 + 0x293c);
    uVar3 = *(unsigned int *)((int)lbl_8320A898 + 0x2f04);
    uVar4 = *(unsigned int *)(lbl_8320A898 + 0x529);
    uVar5 = *(unsigned int *)((int)lbl_8320A898 + 0x2f14);
    uVar6 = *(unsigned int *)((int)lbl_8320A898 + 0x2efc);
    *(unsigned int *)(lbl_8320A898 + 0x529) = uVar4 & 0xfffffff8;
    uVar14 = 0;
    puVar9[2] = puVar9[2] | 0x40;
    puVar9 = lbl_8320A898;
    *(unsigned int *)((int)lbl_8320A898 + 0x2f04) = 7;
    *(unsigned int *)((int)puVar9 + 0x28dc) =
         *(unsigned int *)((int)puVar9 + 0x28dc) & 0xfffffff0 | -(unsigned int)(*(int *)(puVar9 + 0x629) != 0) & 7;
    puVar9[2] = puVar9[2] | 0x2000000000;
    puVar9 = lbl_8320A898;
    *(unsigned int *)((int)lbl_8320A898 + 0x2f14) = 1;
    *(unsigned int *)((int)puVar9 + 0x2934) =
         (-(unsigned int)(*(int *)(puVar9 + 0x62b) != 0) & 1) << 1 |
         *(unsigned int *)((int)puVar9 + 0x2934) & 0xfffffffd;
    puVar9[2] = puVar9[2] | 0x20800;
    puVar9 = lbl_8320A898;
    *(unsigned int *)((int)lbl_8320A898 + 0x2934) = *(unsigned int *)((int)lbl_8320A898 + 0x2934) & 0xfffffffb;
    puVar9[2] = puVar9[2] | 0x800;
    puVar9 = lbl_8320A898;
    *(unsigned int *)((int)lbl_8320A898 + 0x293c) = *(unsigned int *)((int)lbl_8320A898 + 0x293c) & 0xfffffff7;
    puVar9[2] = puVar9[2] | 0x40200;
    if ((in_r9 & 0xff) == 0) {
      fn_82637B30(lbl_8320A898,0);
    }
    else {
      uVar14 = *(unsigned int *)(lbl_8320A898 + 0x5df) & 0x1f;
      uVar13 = *(unsigned int *)(lbl_8320A898 + 0x5df) >> 8 & 0x1f;
      fn_82637B30(lbl_8320A898,1);
      fn_82637C50(lbl_8320A898,6);
      fn_82637CE0(lbl_8320A898,7);
    }
    fStack_130 = (float)dVar15;
    fStack_12c = (float)param_2;
    fStack_128 = (float)param_3;
    fStack_124 = (float)dVar16;
    fStack_120 = (float)dVar16;
    fStack_11c = (float)dVar15;
    fStack_118 = (float)param_2;
    fStack_114 = (float)param_3;
    uStack_110 = lbl_821CA460;
    fStack_10c = (float)dVar16;
    fStack_108 = (float)dVar15;
    fStack_104 = (float)param_2;
    fStack_100 = (float)param_3;
    uStack_fc = lbl_821CA460;
    uStack_f8 = lbl_821CA460;
    fStack_f4 = (float)dVar15;
    fStack_f0 = (float)param_2;
    fStack_ec = (float)param_3;
    fStack_e8 = (float)dVar16;
    uStack_e4 = lbl_821CA460;
    fn_82640058(lbl_8320A898,0xd,4,&fStack_130,0x14);
    puVar9 = lbl_8320A898;
    *(unsigned int *)(lbl_8320A898 + 0x529) = uVar4 & 7 | *(unsigned int *)(lbl_8320A898 + 0x529) & 0xfffffff8;
    puVar9[2] = puVar9[2] | 0x40;
    puVar9 = lbl_8320A898;
    *(unsigned int *)((int)lbl_8320A898 + 0x2f04) = uVar3;
    *(unsigned int *)((int)puVar9 + 0x28dc) =
         *(unsigned int *)((int)puVar9 + 0x28dc) & 0xfffffff0 |
         -(unsigned int)(*(int *)(puVar9 + 0x629) != 0) & uVar3 & 0xf;
    puVar9[2] = puVar9[2] | 0x2000000000;
    puVar9 = lbl_8320A898;
    *(unsigned int *)((int)lbl_8320A898 + 0x2f14) = uVar5;
    *(unsigned int *)((int)puVar9 + 0x2934) =
         (-(unsigned int)(*(int *)(puVar9 + 0x62b) != 0) & uVar5 & 1) << 1 |
         *(unsigned int *)((int)puVar9 + 0x2934) & 0xfffffffd;
    puVar9[2] = puVar9[2] | 0x20800;
    puVar9 = lbl_8320A898;
    *(unsigned int *)((int)lbl_8320A898 + 0x2934) =
         (uVar1 >> 2 & 1) << 2 | *(unsigned int *)((int)lbl_8320A898 + 0x2934) & 0xfffffffb;
    puVar9[2] = puVar9[2] | 0x800;
    puVar9 = lbl_8320A898;
    *(unsigned int *)((int)lbl_8320A898 + 0x293c) =
         (uVar2 >> 3 & 1) << 3 | *(unsigned int *)((int)lbl_8320A898 + 0x293c) & 0xfffffff7;
    puVar9[2] = puVar9[2] | 0x40200;
    fn_82637B30(lbl_8320A898,uVar6 >> 0x1f);
    if ((in_r9 & 0xff) != 0) {
      fn_82637C50(lbl_8320A898,uVar14);
      fn_82637CE0(lbl_8320A898,uVar13);
    }
  }
  fn_82F6A58C(1);
  return;
}

