typedef struct { unsigned __int64 lo, hi; } V16;
extern unsigned int *auStack_100;
extern unsigned int *auStack_110;
extern unsigned int *auStack_120;
extern unsigned int *auStack_130;
extern unsigned int fStack_a8;
extern unsigned int fStack_ac;
extern unsigned int fStack_b0;
extern unsigned int fStack_b4;
extern unsigned int fStack_c0;
extern unsigned int fStack_c4;
extern unsigned int fStack_c8;
extern unsigned int fStack_cc;
extern unsigned int fStack_d4;
extern unsigned int fStack_d8;
extern unsigned int fStack_dc;
extern unsigned int fStack_e0;
extern unsigned int fStack_e4;
extern unsigned int fStack_e8;
extern unsigned int fStack_ec;
extern unsigned int fStack_f0;
extern int fn_826310E0();
extern int fn_82631578();
extern int fn_82631920();
extern int fn_82637B30();
extern int fn_82637C50();
extern int fn_82637CE0();
extern int fn_8263CBB0();
extern int fn_82640058();
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
extern unsigned int uStack_a4;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;
extern unsigned int uStack_d0;
extern V16 vectorMergeHighWord();
extern V16 vectorMergeLowWord();
extern void *memcpy(void *, const void *, unsigned int);


void fn_824E9DD8(unsigned __int64 param_1,double param_2,double param_3,double param_4,double param_5)

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
  unsigned __int64 in_r8;
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
  unsigned char auStack_130 [16];
  unsigned char auStack_120 [16];
  unsigned char auStack_110 [16];
  unsigned char auStack_100 [16];
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  unsigned int uStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  unsigned int uStack_bc;
  unsigned int uStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  unsigned int uStack_a4;
  
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
    puVar7 = (unsigned int *)((unsigned int)(auStack_130 + in_r0) & 0xfffffff0);
    *puVar7 = in_register_00010040;
    puVar7[1] = in_register_00010044;
    puVar7[2] = in_register_00010048;
    puVar7[3] = in_vr4;
    puVar7 = (unsigned int *)((unsigned int)(auStack_120 + in_r0) & 0xfffffff0);
    *puVar7 = in_register_00010090;
    puVar7[1] = in_register_00010094;
    puVar7[2] = in_register_00010098;
    puVar7[3] = in_vr9;
    vectorMergeHighWord(auVar22,auVar19);
    puVar7 = (unsigned int *)((unsigned int)(auStack_110 + in_r0) & 0xfffffff0);
    *puVar7 = in_register_00010080;
    puVar7[1] = in_register_00010084;
    puVar7[2] = in_register_00010088;
    puVar7[3] = in_vr8;
    vectorMergeHighWord(auVar18,auVar17);
    puVar7 = (unsigned int *)((unsigned int)(auStack_100 + in_r0) & 0xfffffff0);
    *puVar7 = uVar23;
    puVar7[1] = uVar24;
    puVar7[2] = uVar25;
    puVar7[3] = uVar26;
    vectorMergeLowWord(auVar18,auVar17);
    vectorMergeLowWord(auVar22,auVar19);
    puVar7 = (unsigned int *)((int)&uStack_d0 + in_r0 & 0xfffffff0);
    *puVar7 = in_register_00010090;
    puVar7[1] = in_register_00010094;
    puVar7[2] = in_register_00010098;
    puVar7[3] = in_vr9;
    puVar7 = (unsigned int *)((int)&fStack_f0 + in_r0 & 0xfffffff0);
    *puVar7 = uVar31;
    puVar7[1] = uVar32;
    puVar7[2] = uVar33;
    puVar7[3] = uVar34;
    puVar7 = (unsigned int *)((int)&fStack_e0 + in_r0 & 0xfffffff0);
    *puVar7 = uVar27;
    puVar7[1] = uVar28;
    puVar7[2] = uVar29;
    puVar7[3] = uVar30;
    puVar7 = (unsigned int *)((int)&fStack_c0 + in_r0 & 0xfffffff0);
    *puVar7 = uVar23;
    puVar7[1] = uVar24;
    puVar7[2] = uVar25;
    puVar7[3] = uVar26;
    fn_826310E0(puVar9,0xc0,auStack_130,4,0x8000);
    fn_826310E0(lbl_8320A898,0xc4,&fStack_f0,4,0x4000);
    puVar9 = lbl_8320A898;
    *(float *)(lbl_8320A898 + 0x280) = (float)param_4;
    fVar8 = ltcg_pool_0_0f;
    dVar16 = (double)ltcg_pool_0_0f;
    *(float *)((int)puVar9 + 0x1404) = (float)param_5;
    *(float *)(puVar9 + 0x281) = fVar8;
    *(float *)((int)puVar9 + 0x140c) = fVar8;
    *puVar9 = *puVar9 | 0x2000;
    fn_8263CBB0(lbl_8320A898,0,in_r8,0x80000000);
    puVar9 = lbl_8320A898;
    uVar1 = *(unsigned int *)(lbl_8320A898 + 0x529);
    uVar2 = *(unsigned int *)((int)lbl_8320A898 + 0x2934);
    uVar3 = *(unsigned int *)((int)lbl_8320A898 + 0x293c);
    uVar4 = *(unsigned int *)((int)lbl_8320A898 + 0x2efc);
    uVar5 = *(unsigned int *)((int)lbl_8320A898 + 0x2f04);
    uVar6 = *(unsigned int *)((int)lbl_8320A898 + 0x2f14);
    uVar14 = 0;
    *(unsigned int *)(lbl_8320A898 + 0x529) = uVar1 & 0xfffffff8;
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
    fStack_f0 = (float)dVar15;
    fStack_ec = (float)param_2;
    fStack_e8 = (float)param_3;
    fStack_e4 = (float)dVar16;
    fStack_e0 = (float)dVar16;
    fStack_dc = (float)dVar15;
    fStack_d8 = (float)param_2;
    fStack_d4 = (float)param_3;
    uStack_d0 = lbl_821CA460;
    fStack_cc = (float)dVar16;
    fStack_c8 = (float)dVar15;
    fStack_c4 = (float)param_2;
    fStack_c0 = (float)param_3;
    uStack_bc = lbl_821CA460;
    uStack_b8 = lbl_821CA460;
    fStack_b4 = (float)dVar15;
    fStack_b0 = (float)param_2;
    fStack_ac = (float)param_3;
    fStack_a8 = (float)dVar16;
    uStack_a4 = lbl_821CA460;
    fn_82640058(lbl_8320A898,0xd,4,&fStack_f0,0x14);
    puVar9 = lbl_8320A898;
    *(unsigned int *)(lbl_8320A898 + 0x529) = *(unsigned int *)(lbl_8320A898 + 0x529) & 0xfffffff8 | uVar1 & 7;
    puVar9[2] = puVar9[2] | 0x40;
    puVar9 = lbl_8320A898;
    *(unsigned int *)((int)lbl_8320A898 + 0x2f04) = uVar5;
    *(unsigned int *)((int)puVar9 + 0x28dc) =
         *(unsigned int *)((int)puVar9 + 0x28dc) & 0xfffffff0 |
         -(unsigned int)(*(int *)(puVar9 + 0x629) != 0) & uVar5 & 0xf;
    puVar9[2] = puVar9[2] | 0x2000000000;
    puVar9 = lbl_8320A898;
    *(unsigned int *)((int)lbl_8320A898 + 0x2f14) = uVar6;
    *(unsigned int *)((int)puVar9 + 0x2934) =
         (-(unsigned int)(*(int *)(puVar9 + 0x62b) != 0) & uVar6 & 1) << 1 |
         *(unsigned int *)((int)puVar9 + 0x2934) & 0xfffffffd;
    puVar9[2] = puVar9[2] | 0x20800;
    puVar9 = lbl_8320A898;
    *(unsigned int *)((int)lbl_8320A898 + 0x2934) =
         (uVar2 >> 2 & 1) << 2 | *(unsigned int *)((int)lbl_8320A898 + 0x2934) & 0xfffffffb;
    puVar9[2] = puVar9[2] | 0x800;
    puVar9 = lbl_8320A898;
    *(unsigned int *)((int)lbl_8320A898 + 0x293c) =
         (uVar3 >> 3 & 1) << 3 | *(unsigned int *)((int)lbl_8320A898 + 0x293c) & 0xfffffff7;
    puVar9[2] = puVar9[2] | 0x40200;
    fn_82637B30(lbl_8320A898,uVar4 >> 0x1f);
    if ((in_r9 & 0xff) != 0) {
      fn_82637C50(lbl_8320A898,uVar14);
      fn_82637CE0(lbl_8320A898,uVar13);
    }
  }
  fn_82F6A58C(1);
  return;
}

