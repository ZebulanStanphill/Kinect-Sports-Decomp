typedef struct { unsigned __int64 lo, hi; } V16;
extern unsigned int *auStack_f0;
extern unsigned int fStack_b0;
extern unsigned int fStack_b4;
extern unsigned int fStack_b8;
extern unsigned int fStack_c4;
extern unsigned int fStack_c8;
extern unsigned int fStack_cc;
extern unsigned int fStack_d8;
extern unsigned int fStack_dc;
extern unsigned int fStack_e0;
extern int fn_826310E0();
extern int fn_82631578();
extern int fn_82631920();
extern int fn_82637B30();
extern int fn_82637C50();
extern int fn_82637CE0();
extern int fn_8263CBB0();
extern int fn_82640058();
extern int fn_82837D98();
extern int fn_82F6A544();
extern int fn_82F6A590();
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_8320A898;
extern unsigned int lbl_8329618C;
extern unsigned int lbl_832968D0;
extern unsigned int lbl_83296BE0;
extern unsigned int lbl_83296C80;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;
extern unsigned int uStack_d0;
extern unsigned int uStack_d4;
extern V16 vectorMergeHighWord();
extern V16 vectorMergeLowWord();
extern void *memcpy(void *, const void *, unsigned int);


void fn_824E9998(unsigned __int64 param_1,double param_2,double param_3,double param_4,double param_5)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int *puVar7;
  int iVar8;
  int in_r0;
  int in_r8;
  unsigned __int64 in_r9;
  int in_r10;
  int iVar9;
  unsigned __int64 *puVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  double dVar13;
  unsigned char in_vs32 [16];
  unsigned char auVar14 [16];
  unsigned char auVar15 [16];
  unsigned char in_vs43 [16];
  unsigned char in_vs44 [16];
  unsigned char auVar16 [16];
  unsigned char in_vs45 [16];
  unsigned char auVar17 [16];
  unsigned int uVar18;
  unsigned int uVar19;
  unsigned int uVar20;
  unsigned int uVar21;
  unsigned int in_register_000100a0;
  unsigned int in_register_000100a4;
  unsigned int in_register_000100a8;
  unsigned int in_vr10;
  unsigned int uVar22;
  unsigned int uVar23;
  unsigned int uVar24;
  unsigned int uVar25;
  unsigned int uVar26;
  unsigned int uVar27;
  unsigned int uVar28;
  unsigned int auStack_f0 [4];
  struct { float first; float second; } stack_pair_e0;

  float fStack_d8;
  unsigned int uStack_d4;
  unsigned int uStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  unsigned int uStack_c0;
  unsigned int uStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  unsigned int uStack_ac;
  unsigned int uStack_a8;
  
  dVar13 = (double)fn_82F6A544();
  iVar8 = lbl_8320A898;
  uVar11 = 0;
  if (lbl_8329618C == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)(lbl_8329618C + 4);
  }
  if ((iVar9 != 0) && (iVar9 = *(int *)(iVar9 + 0xd54), iVar9 != 0)) {
    *(unsigned int *)(lbl_8320A898 + 0x2ed8) = 0;
    *(unsigned __int64 *)(iVar8 + 0x10) = *(unsigned __int64 *)(iVar8 + 0x10) | 0x80000;
    fn_82631920(lbl_8320A898,*(unsigned int *)(iVar9 + 0x4c));
    fn_82631578(lbl_8320A898,*(unsigned int *)(iVar9 + 0x60));
    iVar8 = lbl_8320A898;
    if ((&lbl_83296C80)[in_r10 * 0x2c] == 0) {
      puVar10 = &lbl_832968D0;
    }
    else {
      puVar10 = (unsigned __int64 *)(&lbl_83296BE0 + in_r10 * 0x2c);
    }
    puVar7 = (unsigned int *)(in_r0 + (int)puVar10 & 0xfffffff0);
    uVar18 = *puVar7;
    uVar19 = puVar7[1];
    uVar20 = puVar7[2];
    uVar21 = puVar7[3];
    uVar25 = *(unsigned int *)(puVar10 + 4);
    uVar26 = *(unsigned int *)((int)puVar10 + 0x24);
    uVar27 = *(unsigned int *)(puVar10 + 5);
    uVar28 = *(unsigned int *)((int)puVar10 + 0x2c);
    uVar22 = *(unsigned int *)((int)puVar10 + 0x14);
    uVar23 = *(unsigned int *)(puVar10 + 3);
    uVar24 = *(unsigned int *)((int)puVar10 + 0x1c);{ V16 _vt0 = vectorMergeHighWord(in_vs32,in_vs45); memcpy(auVar15, &_vt0, 16); }{ V16 _vt1 = vectorMergeLowWord(in_vs32,in_vs45); memcpy(auVar14, &_vt1, 16); }{ V16 _vt2 = vectorMergeHighWord(in_vs43,in_vs44); memcpy(auVar17, &_vt2, 16); }{ V16 _vt3 = vectorMergeLowWord(in_vs43,in_vs44); memcpy(auVar16, &_vt3, 16); }
    vectorMergeHighWord(auVar15,auVar17);
    vectorMergeLowWord(auVar15,auVar17);
    vectorMergeHighWord(auVar14,auVar16);
    vectorMergeLowWord(auVar14,auVar16);
    puVar7 = (unsigned int *)((int)&stack_pair_e0.first + in_r0 & 0xfffffff0);
    *puVar7 = *(unsigned int *)(puVar10 + 2);
    puVar7[1] = uVar22;
    puVar7[2] = uVar23;
    puVar7[3] = uVar24;
    puVar7 = (unsigned int *)((int)&uStack_d0 + in_r0 & 0xfffffff0);
    *puVar7 = uVar25;
    puVar7[1] = uVar26;
    puVar7[2] = uVar27;
    puVar7[3] = uVar28;
    puVar7 = (unsigned int *)((int)&uStack_c0 + in_r0 & 0xfffffff0);
    *puVar7 = in_register_000100a0;
    puVar7[1] = in_register_000100a4;
    puVar7[2] = in_register_000100a8;
    puVar7[3] = in_vr10;
    puVar7 = (unsigned int *)((int)&fStack_b0 + in_r0 & 0xfffffff0);
    *puVar7 = uVar18;
    puVar7[1] = uVar19;
    puVar7[2] = uVar20;
    puVar7[3] = uVar21;
    fn_826310E0(iVar8,0xc0,&stack_pair_e0.first,4,0x8000);
    fn_82837D98(*(unsigned int *)(in_r8 + 0x14),0,auStack_f0);
    fn_8263CBB0(lbl_8320A898,0,auStack_f0[0],0x80000000);
    iVar8 = lbl_8320A898;
    uVar1 = *(unsigned int *)(lbl_8320A898 + 0x2934);
    uVar2 = *(unsigned int *)(lbl_8320A898 + 0x293c);
    uVar12 = 0;
    uVar3 = *(unsigned int *)(lbl_8320A898 + 0x2948);
    uVar4 = *(unsigned int *)(lbl_8320A898 + 0x2f04);
    uVar5 = *(unsigned int *)(lbl_8320A898 + 0x2f14);
    uVar6 = *(unsigned int *)(lbl_8320A898 + 0x2efc);
    *(unsigned int *)(lbl_8320A898 + 0x2948) = uVar3 & 0xfffffff8;
    *(unsigned __int64 *)(iVar8 + 0x10) = *(unsigned __int64 *)(iVar8 + 0x10) | 0x40;
    iVar8 = lbl_8320A898;
    *(unsigned int *)(lbl_8320A898 + 0x2f04) = 7;
    *(unsigned int *)(iVar8 + 0x28dc) =
         -(unsigned int)(*(int *)(iVar8 + 0x3148) != 0) & 7 | *(unsigned int *)(iVar8 + 0x28dc) & 0xfffffff0;
    *(unsigned __int64 *)(iVar8 + 0x10) = *(unsigned __int64 *)(iVar8 + 0x10) | 0x2000000000;
    iVar8 = lbl_8320A898;
    *(unsigned int *)(lbl_8320A898 + 0x2f14) = 1;
    *(unsigned int *)(iVar8 + 0x2934) =
         (-(unsigned int)(*(int *)(iVar8 + 0x3158) != 0) & 1) << 1 | *(unsigned int *)(iVar8 + 0x2934) & 0xfffffffd;
    *(unsigned __int64 *)(iVar8 + 0x10) = *(unsigned __int64 *)(iVar8 + 0x10) | 0x20800;
    iVar8 = lbl_8320A898;
    *(unsigned int *)(lbl_8320A898 + 0x2934) = *(unsigned int *)(lbl_8320A898 + 0x2934) & 0xfffffffb;
    *(unsigned __int64 *)(iVar8 + 0x10) = *(unsigned __int64 *)(iVar8 + 0x10) | 0x800;
    iVar8 = lbl_8320A898;
    *(unsigned int *)(lbl_8320A898 + 0x293c) = *(unsigned int *)(lbl_8320A898 + 0x293c) & 0xfffffff7;
    *(unsigned __int64 *)(iVar8 + 0x10) = *(unsigned __int64 *)(iVar8 + 0x10) | 0x40200;
    if ((in_r9 & 0xff) == 0) {
      fn_82637B30(lbl_8320A898,0);
    }
    else {
      uVar12 = *(unsigned int *)(lbl_8320A898 + 0x2ef8) & 0x1f;
      uVar11 = *(unsigned int *)(lbl_8320A898 + 0x2ef8) >> 8 & 0x1f;
      fn_82637B30(lbl_8320A898,1);
      fn_82637C50(lbl_8320A898,6);
      fn_82637CE0(lbl_8320A898,7);
    }
    fStack_cc = (float)(dVar13 + param_4);
    fStack_b4 = (float)(param_2 + param_5);
    stack_pair_e0.first = (float)dVar13;
    stack_pair_e0.second = (float)param_2;
    fStack_d8 = (float)param_3;
    uStack_d4 = ltcg_pool_0_0f;
    uStack_d0 = ltcg_pool_0_0f;
    fStack_c8 = (float)param_2;
    fStack_c4 = (float)param_3;
    uStack_c0 = lbl_821CA460;
    uStack_bc = ltcg_pool_0_0f;
    fStack_b8 = (float)dVar13;
    fStack_b0 = (float)param_3;
    uStack_ac = ltcg_pool_0_0f;
    uStack_a8 = lbl_821CA460;
    fn_82640058(lbl_8320A898,8,3,&stack_pair_e0.first,0x14);
    iVar8 = lbl_8320A898;
    *(unsigned int *)(lbl_8320A898 + 0x2948) = uVar3 & 7 | *(unsigned int *)(lbl_8320A898 + 0x2948) & 0xfffffff8;
    *(unsigned __int64 *)(iVar8 + 0x10) = *(unsigned __int64 *)(iVar8 + 0x10) | 0x40;
    iVar8 = lbl_8320A898;
    *(unsigned int *)(lbl_8320A898 + 0x2f04) = uVar4;
    *(unsigned int *)(iVar8 + 0x28dc) =
         *(unsigned int *)(iVar8 + 0x28dc) & 0xfffffff0 |
         -(unsigned int)(*(int *)(iVar8 + 0x3148) != 0) & uVar4 & 0xf;
    *(unsigned __int64 *)(iVar8 + 0x10) = *(unsigned __int64 *)(iVar8 + 0x10) | 0x2000000000;
    iVar8 = lbl_8320A898;
    *(unsigned int *)(lbl_8320A898 + 0x2f14) = uVar5;
    *(unsigned int *)(iVar8 + 0x2934) =
         (-(unsigned int)(*(int *)(iVar8 + 0x3158) != 0) & uVar5 & 1) << 1 |
         *(unsigned int *)(iVar8 + 0x2934) & 0xfffffffd;
    *(unsigned __int64 *)(iVar8 + 0x10) = *(unsigned __int64 *)(iVar8 + 0x10) | 0x20800;
    iVar8 = lbl_8320A898;
    *(unsigned int *)(lbl_8320A898 + 0x2934) =
         (uVar1 >> 2 & 1) << 2 | *(unsigned int *)(lbl_8320A898 + 0x2934) & 0xfffffffb;
    *(unsigned __int64 *)(iVar8 + 0x10) = *(unsigned __int64 *)(iVar8 + 0x10) | 0x800;
    iVar8 = lbl_8320A898;
    *(unsigned int *)(lbl_8320A898 + 0x293c) =
         (uVar2 >> 3 & 1) << 3 | *(unsigned int *)(lbl_8320A898 + 0x293c) & 0xfffffff7;
    *(unsigned __int64 *)(iVar8 + 0x10) = *(unsigned __int64 *)(iVar8 + 0x10) | 0x40200;
    fn_82637B30(lbl_8320A898,uVar6 >> 0x1f);
    if ((in_r9 & 0xff) != 0) {
      fn_82637C50(lbl_8320A898,uVar12);
      fn_82637CE0(lbl_8320A898,uVar11);
    }
  }
  fn_82F6A590(1);
  return;
}

