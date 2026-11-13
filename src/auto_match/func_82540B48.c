typedef struct { unsigned __int64 lo, hi; } V16;
extern V16 vectorMergeHighWord();
extern V16 vectorMergeLowWord();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82540B48(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  float *pfVar6;
  float *pfVar7;
  int in_r0;
  unsigned char in_vs32 [16];
  unsigned char auVar8 [16];
  unsigned char in_vs33 [16];
  unsigned char in_vs34 [16];
  unsigned char in_vs35 [16];
  unsigned char in_vs36 [16];
  unsigned char auVar9 [16];
  unsigned char auVar10 [16];
  unsigned char in_vs39 [16];
  unsigned char auVar11 [16];
  unsigned char in_vs40 [16];
  unsigned char auVar12 [16];
  unsigned char in_vs42 [16];
  unsigned char in_vs43 [16];
  unsigned char in_vs44 [16];
  unsigned char auVar13 [16];
  unsigned char auVar14 [16];
  unsigned char in_vs61 [16];
  unsigned char in_vs62 [16];
  unsigned char in_vs63 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  unsigned int uVar19;
  unsigned int uVar20;
  unsigned int uVar21;
  unsigned int uVar22;
  unsigned int uVar23;
  unsigned int uVar24;
  unsigned int uVar25;
  unsigned int uVar26;
  unsigned int uVar27;
  unsigned int uVar28;
  unsigned int uVar29;
  
  pfVar3 = (float *)(in_r0 + param_2 & 0xfffffff0);
  fVar15 = *pfVar3;
  fVar16 = pfVar3[1];
  fVar17 = pfVar3[2];
  fVar18 = pfVar3[3];
  puVar4 = (unsigned int *)(param_2 + 0x10U & 0xfffffff0);
  uVar27 = puVar4[1];
  uVar28 = puVar4[2];
  uVar29 = puVar4[3];
  puVar5 = (unsigned int *)(param_2 + 0x30U & 0xfffffff0);
  uVar19 = *puVar5;
  uVar20 = puVar5[1];
  uVar21 = puVar5[2];
  uVar22 = puVar5[3];
  puVar5 = (unsigned int *)(param_2 + 0x20U & 0xfffffff0);
  uVar23 = *puVar5;
  uVar24 = puVar5[1];
  uVar25 = puVar5[2];
  uVar26 = puVar5[3];
  puVar5 = (unsigned int *)(param_1 + 0xa910U & 0xfffffff0);
  *puVar5 = *puVar4;
  puVar5[1] = uVar27;
  puVar5[2] = uVar28;
  puVar5[3] = uVar29;
  pfVar3 = (float *)(in_r0 + param_1 + 0xa900 & 0xfffffff0);
  *pfVar3 = fVar15;
  pfVar3[1] = fVar16;
  pfVar3[2] = fVar17;
  pfVar3[3] = fVar18;
  puVar4 = (unsigned int *)(param_1 + 0xa920U & 0xfffffff0);
  *puVar4 = uVar23;
  puVar4[1] = uVar24;
  puVar4[2] = uVar25;
  puVar4[3] = uVar26;
  puVar4 = (unsigned int *)(param_1 + 0xa930U & 0xfffffff0);
  *puVar4 = uVar19;
  puVar4[1] = uVar20;
  puVar4[2] = uVar21;
  puVar4[3] = uVar22;
  pfVar3 = (float *)(param_1 + 0xa8b0U & 0xfffffff0);{ V16 _vt0 = vectorMergeHighWord(in_vs32,in_vs44); memcpy(auVar9, &_vt0, 16); }{ V16 _vt1 = vectorMergeLowWord(in_vs32,in_vs44); memcpy(auVar8, &_vt1, 16); }
  pfVar6 = (float *)(in_r0 + param_1 + 0xa880 & 0xfffffff0);
  pfVar7 = (float *)(param_1 + 0xa930U & 0xfffffff0);{ V16 _vt2 = vectorMergeHighWord(in_vs39,in_vs40); memcpy(auVar10, &_vt2, 16); }{ V16 _vt3 = vectorMergeLowWord(in_vs39,in_vs40); memcpy(auVar14, &_vt3, 16); }{ V16 _vt4 = vectorMergeHighWord(auVar9,auVar10); memcpy(auVar12, &_vt4, 16); }{ V16 _vt5 = vectorMergeLowWord(auVar9,auVar10); memcpy(auVar11, &_vt5, 16); }{ V16 _vt6 = vectorMergeHighWord(auVar8,auVar14); memcpy(auVar10, &_vt6, 16); }{ V16 _vt7 = vectorMergeLowWord(auVar8,auVar14); memcpy(auVar8, &_vt7, 16); }
  fVar1 = *pfVar3 * *pfVar7 + pfVar3[1] * pfVar7[1] + pfVar3[2] * pfVar7[2] + pfVar3[3] * pfVar7[3];
  fVar2 = *pfVar6 * *pfVar7 + pfVar6[1] * pfVar7[1] + pfVar6[2] * pfVar7[2] + pfVar6[3] * pfVar7[3];
  fVar15 = *pfVar6 * fVar15 + pfVar6[1] * fVar16 + pfVar6[2] * fVar17 + pfVar6[3] * fVar18;{ V16 _vt8 = vectorMergeHighWord(auVar9,auVar14); memcpy(auVar14, &_vt8, 16); }{ V16 _vt9 = vectorMergeHighWord(auVar12,in_vs36); memcpy(auVar9, &_vt9, 16); }{ V16 _vt10 = vectorMergeHighWord(in_vs34,in_vs35); memcpy(auVar12, &_vt10, 16); }
  vectorMergeHighWord(auVar9,auVar14);{ V16 _vt11 = vectorMergeHighWord(in_vs62,in_vs63); memcpy(auVar14, &_vt11, 16); }{ V16 _vt12 = vectorMergeHighWord(in_vs43,in_vs44); memcpy(auVar13, &_vt12, 16); }{ V16 _vt13 = vectorMergeHighWord(auVar8,in_vs42); memcpy(auVar8, &_vt13, 16); }{ V16 _vt14 = vectorMergeHighWord(auVar11,in_vs33); memcpy(auVar11, &_vt14, 16); }
  pfVar3 = (float *)(in_r0 + param_1 + 0xa9c0 & 0xfffffff0);
  *pfVar3 = fVar1;
  pfVar3[1] = fVar1;
  pfVar3[2] = fVar1;
  pfVar3[3] = fVar1;{ V16 _vt15 = vectorMergeHighWord(auVar10,in_vs61); memcpy(auVar9, &_vt15, 16); }
  vectorMergeHighWord(auVar8,auVar13);
  vectorMergeHighWord(auVar11,auVar12);
  vectorMergeHighWord(auVar9,auVar14);
  pfVar3 = (float *)(param_1 + 0xa9f0U & 0xfffffff0);
  *pfVar3 = fVar15;
  pfVar3[1] = fVar15;
  pfVar3[2] = fVar15;
  pfVar3[3] = fVar15;
  pfVar3 = (float *)(param_1 + 0xa9d0U & 0xfffffff0);
  *pfVar3 = fVar2;
  pfVar3[1] = fVar2;
  pfVar3[2] = fVar2;
  pfVar3[3] = fVar2;
  pfVar3 = (float *)(param_1 + 0xa9e0U & 0xfffffff0);
  *pfVar3 = fVar1;
  pfVar3[1] = fVar1;
  pfVar3[2] = fVar1;
  pfVar3[3] = fVar1;
  return;
}

