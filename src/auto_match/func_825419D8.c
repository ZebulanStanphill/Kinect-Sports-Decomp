typedef struct { unsigned __int64 lo, hi; } V16;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int *auStack_b0;
extern int fn_825444B8();
extern int fn_826310E0();
extern int fn_826311B8();
extern int fn_826312F0();
extern int fn_82639380();
extern int fn_82639528();
extern int fn_82639990();
extern int fn_82639A10();
extern int fn_8263CBB0();
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_831C1E08;
extern unsigned int lbl_831C1E0C;
extern unsigned int lbl_831C1E14;
extern unsigned int lbl_831C1E18;
extern unsigned int lbl_8326F970;
extern unsigned int lbl_8326F988;
extern unsigned int uStack_94;
extern unsigned int uStack_98;
extern V16 vectorMergeHighWord();
extern V16 vectorMergeLowWord();
extern void *memcpy(void *, const void *, unsigned int);


void fn_825419D8(unsigned __int64 param_1,int *param_2,int param_3)

{
  int iVar1;
  unsigned __int64 *puVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned int *puVar5;
  int iVar6;
  unsigned int *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  unsigned __int64 in_r0;
  unsigned __int64 uVar11;
  int *piVar12;
  unsigned __int64 uVar13;
  unsigned char in_vs32 [16];
  unsigned char auVar14 [16];
  unsigned char auVar15 [16];
  unsigned char in_vs43 [16];
  unsigned char in_vs44 [16];
  unsigned char in_vs45 [16];
  unsigned char auVar16 [16];
  unsigned int uVar17;
  unsigned int uVar18;
  unsigned int uVar19;
  unsigned int uVar20;
  unsigned int in_register_000100a0;
  unsigned int in_register_000100a4;
  unsigned int in_register_000100a8;
  unsigned int in_vr10;
  unsigned int uVar21;
  unsigned int uVar22;
  unsigned int uVar23;
  unsigned int uVar24;
  unsigned int uVar25;
  unsigned int uVar26;
  unsigned int uVar27;
  unsigned int auStack_b0 [6];
  unsigned int uStack_98;
  unsigned int uStack_94;
  unsigned char auStack_90 [16];
  unsigned char auStack_80 [16];
  unsigned char auStack_70 [16];
  unsigned char auStack_60 [96];
  
  if (((param_3 != 1) && (param_3 != 0x20)) && (param_3 != 0x80)) {
    iVar1 = *param_2;
    *(int *)(iVar1 + 0x1ac0) = param_2[0x2a80];
    *(int *)(iVar1 + 0x1ac4) = param_2[0x2a81];
    *(int *)(iVar1 + 0x1ac8) = param_2[0x2a82];
    *(int *)(iVar1 + 0x1acc) = param_2[0x2a83];
    *(unsigned __int64 *)(iVar1 + 8) = *(unsigned __int64 *)(iVar1 + 8) | 0x4000000000000;
    puVar2 = (unsigned __int64 *)*param_2;
    *(int *)(puVar2 + 0x122) = param_2[0x2a80];
    *(int *)((int)puVar2 + 0x914) = param_2[0x2a81];
    *(int *)(puVar2 + 0x123) = param_2[0x2a82];
    *(int *)((int)puVar2 + 0x91c) = param_2[0x2a83];
    *puVar2 = *puVar2 | 0x200000000000000;
    fn_826310E0(*param_2,0x80,param_2 + 0x2a50,4,0x80000000);
    fn_826311B8(*param_2,0x35,param_2 + 0x2a50,4,0x6000000000000);
    fn_826311B8(*param_2,0x18,param_2 + 0x2a70,4,0x200000000000000);
    iVar1 = *param_2;
    uVar13 = 0x3c;
    piVar12 = param_2 + 0x2a88;
    *(int *)(iVar1 + 0x1a60) = param_2[0x2a18];
    *(int *)(iVar1 + 0x1a64) = param_2[0x2a19];
    *(int *)(iVar1 + 0x1a68) = param_2[0x2a1a];
    *(int *)(iVar1 + 0x1a6c) = param_2[0x2a1b];
    *(unsigned __int64 *)(iVar1 + 8) = *(unsigned __int64 *)(iVar1 + 8) | 0x10000000000000;
    do {
      iVar6 = (int)in_r0;
      puVar5 = (unsigned int *)(iVar6 + (int)piVar12 & 0xfffffff0);
      uVar17 = *puVar5;
      uVar18 = puVar5[1];
      uVar19 = puVar5[2];
      uVar20 = puVar5[3];
      iVar1 = *param_2;
      puVar5 = (unsigned int *)((unsigned int)(piVar12 + 8) & 0xfffffff0);
      uVar24 = *puVar5;
      uVar25 = puVar5[1];
      uVar26 = puVar5[2];
      uVar27 = puVar5[3];
      puVar5 = (unsigned int *)((unsigned int)(piVar12 + 4) & 0xfffffff0);
      uVar21 = puVar5[1];
      uVar22 = puVar5[2];
      uVar23 = puVar5[3];{ V16 _vt0 = vectorMergeHighWord(in_vs32,in_vs45); memcpy(auVar15, &_vt0, 16); }{ V16 _vt1 = vectorMergeLowWord(in_vs32,in_vs45); memcpy(auVar14, &_vt1, 16); }{ V16 _vt2 = vectorMergeHighWord(in_vs43,in_vs44); memcpy(auVar16, &_vt2, 16); }
      uVar3 = (uVar13 & 0xffffffff) >> 2;{ V16 _vt3 = vectorMergeLowWord(in_vs43,in_vs44); memcpy(in_vs44, &_vt3, 16); }{ V16 _vt4 = vectorMergeHighWord(auVar15,auVar16); memcpy(in_vs43, &_vt4, 16); }{ V16 _vt5 = vectorMergeLowWord(auVar15,auVar16); memcpy(in_vs45, &_vt5, 16); }
      vectorMergeHighWord(auVar14,in_vs44);{ V16 _vt6 = vectorMergeLowWord(auVar14,in_vs44); memcpy(in_vs32, &_vt6, 16); }
      puVar7 = (unsigned int *)((unsigned int)(auStack_90 + iVar6) & 0xfffffff0);
      *puVar7 = *puVar5;
      puVar7[1] = uVar21;
      puVar7[2] = uVar22;
      puVar7[3] = uVar23;
      puVar5 = (unsigned int *)((unsigned int)(auStack_80 + iVar6) & 0xfffffff0);
      *puVar5 = uVar24;
      puVar5[1] = uVar25;
      puVar5[2] = uVar26;
      puVar5[3] = uVar27;
      puVar5 = (unsigned int *)((unsigned int)(auStack_70 + iVar6) & 0xfffffff0);
      *puVar5 = in_register_000100a0;
      puVar5[1] = in_register_000100a4;
      puVar5[2] = in_register_000100a8;
      puVar5[3] = in_vr10;
      puVar5 = (unsigned int *)((unsigned int)(auStack_60 + iVar6) & 0xfffffff0);
      *puVar5 = uVar17;
      puVar5[1] = uVar18;
      puVar5[2] = uVar19;
      puVar5[3] = uVar20;
      fn_826310E0(iVar1,uVar13,auStack_90,4,
                   (unsigned __int64)
                   (-0x8000000000000000 >> (((uVar13 + 3 & 0xffffffff) >> 2) - uVar3 & 0x7f)) >>
                   (uVar3 & 0x7f));
      uVar4 = (uVar13 - 3 & 0xffffffff) >> 2;
      fn_826311B8(*param_2,uVar13 - 3,auStack_90,4,
                   (unsigned __int64)(-0x8000000000000000 >> (uVar3 - uVar4 & 0x7f)) >> (uVar4 & 0x7f));
      fVar10 = lbl_821CA460;
      uVar13 = uVar13 + 4;
      piVar12 = piVar12 + 0x10;
    } while ((int)uVar13 < 0x44);
    fVar8 = lbl_831C1E0C;
    if (lbl_831C1E0C <= lbl_831C1E08) {
      fVar8 = lbl_831C1E08 + lbl_821CA460;
    }
    fVar9 = fVar8 - lbl_831C1E08;
    iVar1 = *param_2;
    *(float *)(iVar1 + 0x1a80) = fVar8;
    *(float *)(iVar1 + 0x1a84) = fVar10 / fVar9;
    *(unsigned int *)(iVar1 + 0x1a88) = uStack_98;
    *(unsigned int *)(iVar1 + 0x1a8c) = uStack_94;
    *(unsigned __int64 *)(iVar1 + 8) = *(unsigned __int64 *)(iVar1 + 8) | 0x8000000000000;
    fn_8263CBB0(*param_2,0xd,param_2[0x2a1c],0x40000);
    iVar1 = *param_2;
    *(unsigned int *)(iVar1 + 0x5b8) = *(unsigned int *)(iVar1 + 0x5b8) & 0xffffe3ff | 0x1800;
    *(unsigned __int64 *)(iVar1 + 0x18) = *(unsigned __int64 *)(iVar1 + 0x18) | 0x40000;
    iVar1 = *param_2;
    *(unsigned int *)(iVar1 + 0x5b8) = *(unsigned int *)(iVar1 + 0x5b8) & 0xffff1fff | 0xc000;
    *(unsigned __int64 *)(iVar1 + 0x18) = *(unsigned __int64 *)(iVar1 + 0x18) | 0x40000;
    fn_82639380(*param_2,0xd,0);
    iVar1 = *param_2;
    *(unsigned int *)(iVar1 + 0x5c4) = *(unsigned int *)(iVar1 + 0x5c4) & 0xfe7fffff;
    *(unsigned __int64 *)(iVar1 + 0x18) = *(unsigned __int64 *)(iVar1 + 0x18) | 0x40000;
    fn_82639528(*param_2,0xd);
    iVar1 = *param_2;
    *(unsigned int *)(iVar1 + 0x5cc) = *(unsigned int *)(iVar1 + 0x5cc) & 0xfffffffc | 1;
    *(unsigned __int64 *)(iVar1 + 0x18) = *(unsigned __int64 *)(iVar1 + 0x18) | 0x40000;
    fn_8263CBB0(*param_2,0xc,param_2[0x2a1d],0x80000);
    iVar1 = *param_2;
    *(unsigned int *)(iVar1 + 0x5a0) = *(unsigned int *)(iVar1 + 0x5a0) & 0xffffe3ff | 0x400;
    *(unsigned __int64 *)(iVar1 + 0x18) = *(unsigned __int64 *)(iVar1 + 0x18) | 0x80000;
    iVar1 = *param_2;
    *(unsigned int *)(iVar1 + 0x5a0) = *(unsigned int *)(iVar1 + 0x5a0) & 0xffff1fff | 0x2000;
    *(unsigned __int64 *)(iVar1 + 0x18) = *(unsigned __int64 *)(iVar1 + 0x18) | 0x80000;
    fn_82639380(*param_2,0xc,0);
    iVar1 = *param_2;
    *(unsigned int *)(iVar1 + 0x5ac) = *(unsigned int *)(iVar1 + 0x5ac) & 0xfe7fffff;
    *(unsigned __int64 *)(iVar1 + 0x18) = *(unsigned __int64 *)(iVar1 + 0x18) | 0x80000;
    fn_82639528(*param_2,0xc);
    fn_82639990(*param_2,0xc);
    fn_82639A10(*param_2);
    if (param_3 == 8) {
      if ((param_1 & 0xffffffff) == 0) {
        uVar11 = 0xffffffff8326b090;
      }
      else {
        uVar11 = fn_825444B8(param_1);
      }
      fn_8263CBB0(*param_2,9,uVar11,0x400000);
      iVar1 = *param_2;
      *(unsigned int *)(iVar1 + 0x558) = *(unsigned int *)(iVar1 + 0x558) & 0xffffe3ff | 0x800;
      *(unsigned __int64 *)(iVar1 + 0x18) = *(unsigned __int64 *)(iVar1 + 0x18) | 0x400000;
      iVar1 = *param_2;
      *(unsigned int *)(iVar1 + 0x558) = *(unsigned int *)(iVar1 + 0x558) & 0xffff1fff | 0x4000;
      *(unsigned __int64 *)(iVar1 + 0x18) = *(unsigned __int64 *)(iVar1 + 0x18) | 0x400000;
    }
    iVar1 = param_2[0x2b0c];
    if (iVar1 != 0) {
      fn_8263CBB0(*param_2,0xf,iVar1,0x10000);
      iVar1 = *param_2;
      *(unsigned int *)(iVar1 + 0x5e8) = *(unsigned int *)(iVar1 + 0x5e8) & 0xffffe3ff | 0x800;
      *(unsigned __int64 *)(iVar1 + 0x18) = *(unsigned __int64 *)(iVar1 + 0x18) | 0x10000;
      iVar1 = *param_2;
      *(unsigned int *)(iVar1 + 0x5e8) = *(unsigned int *)(iVar1 + 0x5e8) & 0xffff1fff | 0x4000;
      *(unsigned __int64 *)(iVar1 + 0x18) = *(unsigned __int64 *)(iVar1 + 0x18) | 0x10000;
      fn_8263CBB0(*param_2,0x11,param_2[0x2b0c],0x4000);
      iVar1 = *param_2;
      *(unsigned int *)(iVar1 + 0x618) = *(unsigned int *)(iVar1 + 0x618) & 0xffffe3ff | 0x800;
      *(unsigned __int64 *)(iVar1 + 0x18) = *(unsigned __int64 *)(iVar1 + 0x18) | 0x4000;
      iVar1 = *param_2;
      *(unsigned int *)(iVar1 + 0x618) = *(unsigned int *)(iVar1 + 0x618) & 0xffff1fff | 0x4000;
      *(unsigned __int64 *)(iVar1 + 0x18) = *(unsigned __int64 *)(iVar1 + 0x18) | 0x4000;
    }
    if (param_2[0x2b0d] != 0) {
      fn_8263CBB0(*param_2,7,param_2[0x2b0d],0x1000000);
      iVar1 = *param_2;
      *(unsigned int *)(iVar1 + 0x528) = *(unsigned int *)(iVar1 + 0x528) & 0xffffe3ff | 0x800;
      *(unsigned __int64 *)(iVar1 + 0x18) = *(unsigned __int64 *)(iVar1 + 0x18) | 0x1000000;
      iVar1 = *param_2;
      *(unsigned int *)(iVar1 + 0x528) = *(unsigned int *)(iVar1 + 0x528) & 0xffff1fff | 0x4000;
      *(unsigned __int64 *)(iVar1 + 0x18) = *(unsigned __int64 *)(iVar1 + 0x18) | 0x1000000;
      iVar1 = *param_2;
      *(unsigned int *)(iVar1 + 0x528) = *(unsigned int *)(iVar1 + 0x528) & 0xfff8ffff | 0x20000;
      *(unsigned __int64 *)(iVar1 + 0x18) = *(unsigned __int64 *)(iVar1 + 0x18) | 0x1000000;
    }
    if ((lbl_8326F988 == 0) && (lbl_8326F970 == 0)) {
      auStack_b0[0] = 0;
    }
    else {
      auStack_b0[0] = 1;
    }
    fn_826312F0(*param_2,2,auStack_b0,1);
    uVar18 = lbl_831C1E18;
    uVar17 = ltcg_pool_0_0f;
    iVar1 = *param_2;
    *(unsigned int *)(iVar1 + 0x1c30) = lbl_831C1E14;
    *(unsigned int *)(iVar1 + 0x1c34) = uVar18;
    *(unsigned int *)(iVar1 + 0x1c38) = uVar17;
    *(unsigned int *)(iVar1 + 0x1c3c) = uVar17;
    *(unsigned __int64 *)(iVar1 + 8) = *(unsigned __int64 *)(iVar1 + 8) | 0x200000000000;
  }
  return;
}

