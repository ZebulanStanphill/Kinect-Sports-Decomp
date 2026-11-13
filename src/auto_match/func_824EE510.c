typedef struct { unsigned __int64 lo, hi; } V16;
extern unsigned int *auStack_150;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_e0;
extern unsigned int *auStack_f0;
extern unsigned int fStack_100;
extern unsigned int fStack_104;
extern unsigned int fStack_110;
extern unsigned int fStack_114;
extern unsigned int fStack_118;
extern unsigned int fStack_124;
extern unsigned int fStack_128;
extern unsigned int fStack_12c;
extern unsigned int fStack_138;
extern unsigned int fStack_13c;
extern unsigned int fStack_140;
extern unsigned int fStack_fc;
extern int fn_826310E0();
extern int fn_82631578();
extern int fn_82631920();
extern int fn_82637B30();
extern int fn_82637C50();
extern int fn_82637CE0();
extern int fn_82638698();
extern int fn_8263CBB0();
extern int fn_82640058();
extern int fn_82837D98();
extern int fn_82F6A53C();
extern int fn_82F6A588();
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_8320A898;
extern unsigned int lbl_8329618C;
extern unsigned int lbl_83296890;
extern unsigned int lbl_832968D0;
extern unsigned int lbl_83296BE0;
extern unsigned int lbl_83296C20;
extern unsigned int lbl_83296C80;
extern unsigned int uStack_108;
extern unsigned int uStack_10c;
extern unsigned int uStack_11c;
extern unsigned int uStack_120;
extern unsigned int uStack_130;
extern unsigned int uStack_134;
extern unsigned int uStack_f4;
extern unsigned int uStack_f8;
extern V16 vectorMergeHighWord();
extern V16 vectorMergeLowWord();
extern void *memcpy(void *, const void *, unsigned int);


void fn_824EE510(unsigned __int64 param_1,double param_2,double param_3,double param_4,double param_5,
                  double param_6,double param_7,double param_8)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int *puVar7;
  unsigned __int64 *puVar8;
  int in_r0;
  unsigned __int64 *puVar9;
  int iVar10;
  unsigned __int64 *puVar11;
  unsigned int uVar12;
  unsigned int uVar13;
  double dVar14;
  unsigned char in_vs32 [16];
  unsigned char auVar15 [16];
  unsigned char auVar16 [16];
  unsigned char in_vs39 [16];
  unsigned char auVar17 [16];
  unsigned char auVar18 [16];
  unsigned char in_vs42 [16];
  unsigned char in_vs43 [16];
  unsigned char auVar19 [16];
  unsigned char in_vs44 [16];
  unsigned char in_vs45 [16];
  unsigned char auVar20 [16];
  unsigned int uVar21;
  unsigned int uVar22;
  unsigned int uVar23;
  unsigned int uVar24;
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
  unsigned int uVar25;
  unsigned int uVar26;
  unsigned int uVar27;
  unsigned int uVar28;
  unsigned int uVar29;
  unsigned int uVar30;
  unsigned int uVar31;
  unsigned int uVar32;
  int in_stack_00000054;
  char in_stack_0000005f;
  int in_stack_00000064;
  unsigned int auStack_150 [4];
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  unsigned int uStack_134;
  unsigned int uStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  unsigned int uStack_120;
  unsigned int uStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  unsigned int uStack_10c;
  unsigned int uStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  unsigned int uStack_f8;
  unsigned int uStack_f4;
  unsigned char auStack_f0 [16];
  unsigned char auStack_e0 [16];
  unsigned char auStack_d0 [16];
  unsigned char auStack_c0 [192];
  
  dVar14 = (double)fn_82F6A53C();
  puVar8 = lbl_8320A898;
  uVar12 = 0;
  if (lbl_8329618C == 0) {
    iVar10 = 0;
  }
  else {
    iVar10 = *(int *)(lbl_8329618C + 4);
  }
  if ((iVar10 != 0) && (iVar10 = *(int *)(iVar10 + 0xd54), iVar10 != 0)) {
    *(unsigned int *)(lbl_8320A898 + 0x5db) = 0;
    puVar8[2] = puVar8[2] | 0x80000;
    fn_82631920(lbl_8320A898,*(unsigned int *)(iVar10 + 0x54));
    fn_82631578(lbl_8320A898,*(unsigned int *)(iVar10 + 0x60));
    puVar8 = lbl_8320A898;
    puVar9 = &lbl_83296890;
    puVar11 = (unsigned __int64 *)(&lbl_83296BE0 + in_stack_00000064 * 0x2c);
    if ((&lbl_83296C80)[in_stack_00000064 * 0x2c] == 0) {
      puVar11 = &lbl_832968D0;
    }
    else {
      puVar9 = &lbl_83296C20 + in_stack_00000064 * 0x16;
    }
    puVar7 = (unsigned int *)(in_r0 + (int)puVar9 & 0xfffffff0);
    uVar21 = *puVar7;
    uVar22 = puVar7[1];
    uVar23 = puVar7[2];
    uVar24 = puVar7[3];
    uVar29 = *(unsigned int *)(puVar9 + 6);
    uVar30 = *(unsigned int *)((int)puVar9 + 0x34);
    uVar31 = *(unsigned int *)(puVar9 + 7);
    uVar32 = *(unsigned int *)((int)puVar9 + 0x3c);{ V16 _vt0 = vectorMergeHighWord(in_vs32,in_vs44); memcpy(auVar18, &_vt0, 16); }{ V16 _vt1 = vectorMergeLowWord(in_vs32,in_vs44); memcpy(auVar15, &_vt1, 16); }{ V16 _vt2 = vectorMergeHighWord(in_vs42,in_vs43); memcpy(auVar17, &_vt2, 16); }{ V16 _vt3 = vectorMergeLowWord(in_vs42,in_vs43); memcpy(auVar19, &_vt3, 16); }
    uVar25 = *(unsigned int *)(puVar11 + 2);
    uVar26 = *(unsigned int *)((int)puVar11 + 0x14);
    uVar27 = *(unsigned int *)(puVar11 + 3);
    uVar28 = *(unsigned int *)((int)puVar11 + 0x1c);{ V16 _vt4 = vectorMergeHighWord(in_vs45,in_vs44); memcpy(auVar16, &_vt4, 16); }{ V16 _vt5 = vectorMergeLowWord(in_vs45,in_vs44); memcpy(auVar20, &_vt5, 16); }
    vectorMergeHighWord(auVar18,auVar17);
    vectorMergeLowWord(auVar18,auVar17);
    vectorMergeHighWord(auVar15,auVar19);
    vectorMergeLowWord(auVar15,auVar19);{ V16 _vt6 = vectorMergeLowWord(in_vs42,in_vs39); memcpy(auVar17, &_vt6, 16); }{ V16 _vt7 = vectorMergeHighWord(in_vs42,in_vs39); memcpy(auVar15, &_vt7, 16); }
    puVar7 = (unsigned int *)((unsigned int)(auStack_f0 + in_r0) & 0xfffffff0);
    *puVar7 = in_register_00010040;
    puVar7[1] = in_register_00010044;
    puVar7[2] = in_register_00010048;
    puVar7[3] = in_vr4;
    puVar7 = (unsigned int *)((unsigned int)(auStack_e0 + in_r0) & 0xfffffff0);
    *puVar7 = in_register_00010090;
    puVar7[1] = in_register_00010094;
    puVar7[2] = in_register_00010098;
    puVar7[3] = in_vr9;
    vectorMergeHighWord(auVar20,auVar17);
    puVar7 = (unsigned int *)((unsigned int)(auStack_d0 + in_r0) & 0xfffffff0);
    *puVar7 = in_register_00010080;
    puVar7[1] = in_register_00010084;
    puVar7[2] = in_register_00010088;
    puVar7[3] = in_vr8;
    vectorMergeHighWord(auVar16,auVar15);
    puVar7 = (unsigned int *)((unsigned int)(auStack_c0 + in_r0) & 0xfffffff0);
    *puVar7 = uVar21;
    puVar7[1] = uVar22;
    puVar7[2] = uVar23;
    puVar7[3] = uVar24;
    vectorMergeLowWord(auVar16,auVar15);
    vectorMergeLowWord(auVar20,auVar17);
    puVar7 = (unsigned int *)((int)&uStack_120 + in_r0 & 0xfffffff0);
    *puVar7 = in_register_00010090;
    puVar7[1] = in_register_00010094;
    puVar7[2] = in_register_00010098;
    puVar7[3] = in_vr9;
    puVar7 = (unsigned int *)((int)&fStack_140 + in_r0 & 0xfffffff0);
    *puVar7 = uVar29;
    puVar7[1] = uVar30;
    puVar7[2] = uVar31;
    puVar7[3] = uVar32;
    puVar7 = (unsigned int *)((int)&uStack_130 + in_r0 & 0xfffffff0);
    *puVar7 = uVar25;
    puVar7[1] = uVar26;
    puVar7[2] = uVar27;
    puVar7[3] = uVar28;
    puVar7 = (unsigned int *)((int)&fStack_110 + in_r0 & 0xfffffff0);
    *puVar7 = uVar21;
    puVar7[1] = uVar22;
    puVar7[2] = uVar23;
    puVar7[3] = uVar24;
    fn_826310E0(puVar8,0xc0,auStack_f0,4,0x8000);
    fn_826310E0(lbl_8320A898,0xc4,&fStack_140,4,0x4000);
    puVar8 = lbl_8320A898;
    *(float *)(lbl_8320A898 + 0x280) = (float)param_4;
    *(float *)((int)puVar8 + 0x1404) = (float)param_5;
    *(float *)(puVar8 + 0x281) = (float)param_6;
    *(float *)((int)puVar8 + 0x140c) = (float)param_7;
    *puVar8 = *puVar8 | 0x2000;
    fn_82837D98(*(unsigned int *)(in_stack_00000054 + 0x14),0,auStack_150);
    fn_8263CBB0(lbl_8320A898,0,auStack_150[0],0x80000000);
    puVar8 = lbl_8320A898;
    uVar1 = *(unsigned int *)((int)lbl_8320A898 + 0x293c);
    uVar2 = *(unsigned int *)((int)lbl_8320A898 + 0x2934);
    uVar3 = *(unsigned int *)((int)lbl_8320A898 + 0x2f04);
    uVar4 = *(unsigned int *)(lbl_8320A898 + 0x529);
    uVar5 = *(unsigned int *)((int)lbl_8320A898 + 0x2f14);
    uVar6 = *(unsigned int *)((int)lbl_8320A898 + 0x2efc);
    *(unsigned int *)(lbl_8320A898 + 0x529) = uVar4 & 0xfffffff8;
    puVar8[2] = puVar8[2] | 0x40;
    puVar8 = lbl_8320A898;
    uVar13 = 0;
    *(unsigned int *)((int)lbl_8320A898 + 0x2f04) = 7;
    *(unsigned int *)((int)puVar8 + 0x28dc) =
         *(unsigned int *)((int)puVar8 + 0x28dc) & 0xfffffff0 | -(unsigned int)(*(int *)(puVar8 + 0x629) != 0) & 7;
    puVar8[2] = puVar8[2] | 0x2000000000;
    puVar8 = lbl_8320A898;
    *(unsigned int *)((int)lbl_8320A898 + 0x2f14) = 1;
    *(unsigned int *)((int)puVar8 + 0x2934) =
         (-(unsigned int)(*(int *)(puVar8 + 0x62b) != 0) & 1) << 1 |
         *(unsigned int *)((int)puVar8 + 0x2934) & 0xfffffffd;
    puVar8[2] = puVar8[2] | 0x20800;
    puVar8 = lbl_8320A898;
    *(unsigned int *)((int)lbl_8320A898 + 0x2934) = *(unsigned int *)((int)lbl_8320A898 + 0x2934) & 0xfffffffb;
    puVar8[2] = puVar8[2] | 0x800;
    puVar8 = lbl_8320A898;
    *(unsigned int *)((int)lbl_8320A898 + 0x293c) = *(unsigned int *)((int)lbl_8320A898 + 0x293c) & 0xfffffff7;
    puVar8[2] = puVar8[2] | 0x40200;
    fn_82638698(lbl_8320A898,(float)param_8);
    if (in_stack_0000005f == '\0') {
      fn_82637B30(lbl_8320A898,0);
    }
    else {
      uVar13 = *(unsigned int *)(lbl_8320A898 + 0x5df) & 0x1f;
      uVar12 = *(unsigned int *)(lbl_8320A898 + 0x5df) >> 8 & 0x1f;
      fn_82637B30(lbl_8320A898,1);
      fn_82637C50(lbl_8320A898,6);
      fn_82637CE0(lbl_8320A898,7);
    }
    fStack_140 = (float)dVar14;
    fStack_13c = (float)param_2;
    fStack_138 = (float)param_3;
    fStack_12c = (float)dVar14;
    fStack_128 = (float)param_2;
    fStack_124 = (float)param_3;
    uStack_134 = ltcg_pool_0_0f;
    uStack_130 = ltcg_pool_0_0f;
    uStack_120 = lbl_821CA460;
    uStack_11c = ltcg_pool_0_0f;
    fStack_118 = (float)dVar14;
    fStack_114 = (float)param_2;
    fStack_110 = (float)param_3;
    uStack_10c = lbl_821CA460;
    uStack_108 = lbl_821CA460;
    fStack_104 = (float)dVar14;
    fStack_100 = (float)param_2;
    fStack_fc = (float)param_3;
    uStack_f8 = ltcg_pool_0_0f;
    uStack_f4 = lbl_821CA460;
    fn_82640058(lbl_8320A898,0xd,4,&fStack_140,0x14);
    puVar8 = lbl_8320A898;
    *(unsigned int *)(lbl_8320A898 + 0x529) = *(unsigned int *)(lbl_8320A898 + 0x529) & 0xfffffff8 | uVar4 & 7;
    puVar8[2] = puVar8[2] | 0x40;
    puVar8 = lbl_8320A898;
    *(unsigned int *)((int)lbl_8320A898 + 0x2f04) = uVar3;
    *(unsigned int *)((int)puVar8 + 0x28dc) =
         *(unsigned int *)((int)puVar8 + 0x28dc) & 0xfffffff0 |
         -(unsigned int)(*(int *)(puVar8 + 0x629) != 0) & uVar3 & 0xf;
    puVar8[2] = puVar8[2] | 0x2000000000;
    puVar8 = lbl_8320A898;
    *(unsigned int *)((int)lbl_8320A898 + 0x2f14) = uVar5;
    *(unsigned int *)((int)puVar8 + 0x2934) =
         (-(unsigned int)(*(int *)(puVar8 + 0x62b) != 0) & uVar5 & 1) << 1 |
         *(unsigned int *)((int)puVar8 + 0x2934) & 0xfffffffd;
    puVar8[2] = puVar8[2] | 0x20800;
    puVar8 = lbl_8320A898;
    *(unsigned int *)((int)lbl_8320A898 + 0x2934) =
         (uVar2 >> 2 & 1) << 2 | *(unsigned int *)((int)lbl_8320A898 + 0x2934) & 0xfffffffb;
    puVar8[2] = puVar8[2] | 0x800;
    puVar8 = lbl_8320A898;
    *(unsigned int *)((int)lbl_8320A898 + 0x293c) =
         (uVar1 >> 3 & 1) << 3 | *(unsigned int *)((int)lbl_8320A898 + 0x293c) & 0xfffffff7;
    puVar8[2] = puVar8[2] | 0x40200;
    fn_82637B30(lbl_8320A898,uVar6 >> 0x1f);
    fn_82638698(lbl_8320A898,0);
    if (in_stack_0000005f != '\0') {
      fn_82637C50(lbl_8320A898,uVar13);
      fn_82637CE0(lbl_8320A898,uVar12);
    }
  }
  fn_82F6A588(1);
  return;
}

