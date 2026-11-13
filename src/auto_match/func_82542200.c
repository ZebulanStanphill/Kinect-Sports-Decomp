typedef struct { unsigned __int64 lo, hi; } V16;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_d0;
extern int fn_826310E0();
extern V16 vectorMergeHighWord();
extern V16 vectorMergeLowWord();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82542200(unsigned int *param_1,int param_2,int param_3)

{
  unsigned int uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  unsigned int *puVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  int in_r0;
  unsigned char in_vs32 [16];
  unsigned char in_vs33 [16];
  unsigned char auVar9 [16];
  unsigned char auVar10 [16];
  unsigned char in_vs36 [16];
  unsigned char in_vs37 [16];
  unsigned char auVar11 [16];
  unsigned char in_vs38 [16];
  unsigned char in_vs39 [16];
  unsigned char auVar12 [16];
  unsigned char in_vs43 [16];
  unsigned char auVar13 [16];
  unsigned char in_vs44 [16];
  unsigned char in_vs45 [16];
  unsigned char in_vs56 [16];
  unsigned char in_vs58 [16];
  unsigned char in_vs60 [16];
  unsigned char in_vs61 [16];
  unsigned char in_vs62 [16];
  unsigned char auVar14 [16];
  float in_register_00010030;
  float in_register_00010034;
  float in_register_00010038;
  float in_vr3;
  unsigned int uVar15;
  unsigned int uVar16;
  unsigned int uVar17;
  unsigned int uVar18;
  unsigned int uVar19;
  unsigned int uVar20;
  unsigned int uVar21;
  unsigned int uVar22;
  unsigned int in_register_00010190;
  unsigned int in_register_00010194;
  unsigned int in_register_00010198;
  unsigned int in_vr25;
  unsigned int in_register_000101b0;
  unsigned int in_register_000101b4;
  unsigned int in_register_000101b8;
  unsigned int in_vr27;
  unsigned char auStack_d0 [16];
  unsigned char auStack_c0 [16];
  unsigned char auStack_b0 [16];
  unsigned char auStack_a0 [16];
  unsigned char auStack_90 [16];
  unsigned char auStack_80 [16];
  unsigned char auStack_70 [16];
  unsigned char auStack_60 [96];
  
  if (param_1[0xc] != param_3) {
    param_1[0xc] = param_3;
    uVar1 = *param_1;
    param_2 = param_3 * 0x40 + param_2;
    puVar5 = (unsigned int *)(param_2 + 0x20U & 0xfffffff0);
    uVar19 = *puVar5;
    uVar20 = puVar5[1];
    uVar21 = puVar5[2];
    uVar22 = puVar5[3];
    pfVar6 = (float *)(param_2 + 0x10U & 0xfffffff0);
    pfVar7 = (float *)(param_2 + 0x30U & 0xfffffff0);
    puVar5 = (unsigned int *)((unsigned int)(param_1 + 0x2a64) & 0xfffffff0);
    uVar15 = *puVar5;
    uVar16 = puVar5[1];
    uVar17 = puVar5[2];
    uVar18 = puVar5[3];
    pfVar8 = (float *)((unsigned int)(param_1 + 0x2a68) & 0xfffffff0);{ V16 _vt0 = vectorMergeHighWord(in_vs45,in_vs43); memcpy(auVar14, &_vt0, 16); }{ V16 _vt1 = vectorMergeHighWord(in_vs38,in_vs39); memcpy(auVar10, &_vt1, 16); }{ V16 _vt2 = vectorMergeHighWord(in_vs36,in_vs37); memcpy(auVar9, &_vt2, 16); }{ V16 _vt3 = vectorMergeLowWord(in_vs36,in_vs37); memcpy(auVar11, &_vt3, 16); }{ V16 _vt4 = vectorMergeLowWord(in_vs38,in_vs39); memcpy(auVar12, &_vt4, 16); }{ V16 _vt5 = vectorMergeLowWord(in_vs45,in_vs43); memcpy(auVar13, &_vt5, 16); }
    vectorMergeHighWord(auVar10,auVar9);{ V16 _vt6 = vectorMergeLowWord(auVar10,auVar9); memcpy(auVar9, &_vt6, 16); }
    vectorMergeHighWord(auVar12,auVar11);
    vectorMergeLowWord(auVar12,auVar11);{ V16 _vt7 = vectorMergeHighWord(in_vs32,in_vs44); memcpy(auVar10, &_vt7, 16); }{ V16 _vt8 = vectorMergeLowWord(in_vs32,in_vs44); memcpy(auVar12, &_vt8, 16); }
    fVar2 = *pfVar6 * in_register_00010030 + pfVar6[1] * in_register_00010034 +
            pfVar6[2] * in_register_00010038 + pfVar6[3] * in_vr3;
    vectorMergeHighWord(auVar14,auVar10);
    vectorMergeHighWord(auVar13,auVar12);
    vectorMergeLowWord(auVar13,auVar12);
    vectorMergeLowWord(auVar14,auVar10);
    fVar3 = *pfVar7 * *pfVar8 + pfVar7[1] * pfVar8[1] + pfVar7[2] * pfVar8[2] +
            pfVar7[3] * pfVar8[3];
    fVar4 = *pfVar6 * *pfVar8 + pfVar6[1] * pfVar8[1] + pfVar6[2] * pfVar8[2] +
            pfVar6[3] * pfVar8[3];
    puVar5 = (unsigned int *)((unsigned int)(auStack_d0 + in_r0) & 0xfffffff0);
    *puVar5 = in_register_000101b0;
    puVar5[1] = in_register_000101b4;
    puVar5[2] = in_register_000101b8;
    puVar5[3] = in_vr27;
    puVar5 = (unsigned int *)((unsigned int)(auStack_b0 + in_r0) & 0xfffffff0);
    *puVar5 = in_register_00010190;
    puVar5[1] = in_register_00010194;
    puVar5[2] = in_register_00010198;
    puVar5[3] = in_vr25;
    puVar5 = (unsigned int *)((unsigned int)(auStack_a0 + in_r0) & 0xfffffff0);
    *puVar5 = uVar19;
    puVar5[1] = uVar20;
    puVar5[2] = uVar21;
    puVar5[3] = uVar22;{ V16 _vt9 = vectorMergeHighWord(in_vs62,in_vs33); memcpy(auVar13, &_vt9, 16); }
    puVar5 = (unsigned int *)((unsigned int)(auStack_c0 + in_r0) & 0xfffffff0);
    *puVar5 = uVar15;
    puVar5[1] = uVar16;
    puVar5[2] = uVar17;
    puVar5[3] = uVar18;{ V16 _vt10 = vectorMergeHighWord(in_vs45,auVar11); memcpy(auVar11, &_vt10, 16); }{ V16 _vt11 = vectorMergeHighWord(in_vs32,in_vs61); memcpy(auVar10, &_vt11, 16); }
    vectorMergeHighWord(auVar11,auVar13);{ V16 _vt12 = vectorMergeHighWord(auVar9,in_vs60); memcpy(auVar9, &_vt12, 16); }{ V16 _vt13 = vectorMergeHighWord(auVar14,in_vs58); memcpy(auVar13, &_vt13, 16); }{ V16 _vt14 = vectorMergeHighWord(auVar12,in_vs56); memcpy(auVar11, &_vt14, 16); }
    vectorMergeHighWord(auVar9,auVar10);{ V16 _vt15 = vectorMergeHighWord(in_vs32,in_vs44); memcpy(auVar9, &_vt15, 16); }{ V16 _vt16 = vectorMergeHighWord(in_vs45,in_vs43); memcpy(auVar10, &_vt16, 16); }
    vectorMergeHighWord(auVar11,auVar13);
    vectorMergeHighWord(auVar10,auVar9);
    puVar5 = (unsigned int *)((unsigned int)(auStack_90 + in_r0) & 0xfffffff0);
    *puVar5 = uVar19;
    puVar5[1] = uVar20;
    puVar5[2] = uVar21;
    puVar5[3] = uVar22;
    pfVar6 = (float *)((unsigned int)(auStack_80 + in_r0) & 0xfffffff0);
    *pfVar6 = fVar2;
    pfVar6[1] = fVar2;
    pfVar6[2] = fVar2;
    pfVar6[3] = fVar2;
    pfVar6 = (float *)((unsigned int)(auStack_70 + in_r0) & 0xfffffff0);
    *pfVar6 = fVar3;
    pfVar6[1] = fVar3;
    pfVar6[2] = fVar3;
    pfVar6[3] = fVar3;
    pfVar6 = (float *)((unsigned int)(auStack_60 + in_r0) & 0xfffffff0);
    *pfVar6 = fVar4;
    pfVar6[1] = fVar4;
    pfVar6[2] = fVar4;
    pfVar6[3] = fVar4;
    fn_826310E0(uVar1,0x78,auStack_d0,4,0x200000000);
    fn_826310E0(*param_1,0,auStack_90,4,0x8000000000000000);
  }
  return;
}

