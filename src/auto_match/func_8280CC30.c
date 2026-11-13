typedef struct { unsigned __int64 lo, hi; } V16;
extern V16 vectorMergeHighWord();
extern V16 vectorMergeLowWord();
extern void *memcpy(void *, const void *, unsigned int);


void fn_8280CC30(int param_1,int param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  int in_r0;
  unsigned char in_vs32 [16];
  unsigned char auVar5 [16];
  unsigned char in_vs33 [16];
  unsigned char in_vs34 [16];
  unsigned char in_vs35 [16];
  unsigned char in_vs36 [16];
  unsigned char in_vs37 [16];
  unsigned char in_vs38 [16];
  unsigned char auVar6 [16];
  unsigned char in_vs40 [16];
  unsigned char auVar7 [16];
  unsigned char in_vs42 [16];
  unsigned char auVar8 [16];
  unsigned char in_vs43 [16];
  unsigned char in_vs44 [16];
  unsigned char auVar9 [16];
  unsigned char auVar10 [16];
  unsigned char in_vs61 [16];
  unsigned char in_vs62 [16];
  unsigned char in_vs63 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  pfVar3 = (float *)(in_r0 + param_1 & 0xfffffff0);
  pfVar4 = (float *)(in_r0 + param_2 & 0xfffffff0);
  fVar11 = *pfVar4;
  fVar12 = pfVar4[1];
  fVar13 = pfVar4[2];
  fVar14 = pfVar4[3];
  pfVar4 = (float *)(param_1 + 0x30U & 0xfffffff0);{ V16 _vt0 = vectorMergeHighWord(in_vs32,in_vs43); memcpy(auVar7, &_vt0, 16); }{ V16 _vt1 = vectorMergeHighWord(in_vs44,in_vs42); memcpy(auVar6, &_vt1, 16); }{ V16 _vt2 = vectorMergeLowWord(in_vs44,in_vs42); memcpy(auVar9, &_vt2, 16); }{ V16 _vt3 = vectorMergeLowWord(in_vs32,in_vs43); memcpy(auVar5, &_vt3, 16); }{ V16 _vt4 = vectorMergeHighWord(auVar7,auVar6); memcpy(auVar8, &_vt4, 16); }{ V16 _vt5 = vectorMergeLowWord(auVar7,auVar6); memcpy(auVar7, &_vt5, 16); }{ V16 _vt6 = vectorMergeHighWord(auVar5,auVar9); memcpy(auVar6, &_vt6, 16); }{ V16 _vt7 = vectorMergeLowWord(auVar5,auVar9); memcpy(auVar5, &_vt7, 16); }
  fVar1 = fVar11 * *pfVar4 + fVar12 * pfVar4[1] + fVar13 * pfVar4[2] + fVar14 * pfVar4[3];
  fVar2 = fVar11 * *pfVar3 + fVar12 * pfVar3[1] + fVar13 * pfVar3[2] + fVar14 * pfVar3[3];{ V16 _vt8 = vectorMergeHighWord(in_vs37,auVar9); memcpy(auVar10, &_vt8, 16); }{ V16 _vt9 = vectorMergeHighWord(auVar8,in_vs36); memcpy(auVar9, &_vt9, 16); }{ V16 _vt10 = vectorMergeHighWord(in_vs34,in_vs35); memcpy(auVar8, &_vt10, 16); }
  vectorMergeHighWord(auVar9,auVar10);{ V16 _vt11 = vectorMergeHighWord(in_vs62,in_vs63); memcpy(auVar10, &_vt11, 16); }{ V16 _vt12 = vectorMergeHighWord(in_vs40,in_vs43); memcpy(auVar9, &_vt12, 16); }{ V16 _vt13 = vectorMergeHighWord(auVar5,in_vs38); memcpy(auVar5, &_vt13, 16); }{ V16 _vt14 = vectorMergeHighWord(auVar7,in_vs33); memcpy(auVar7, &_vt14, 16); }
  pfVar3 = (float *)(in_r0 + param_3 & 0xfffffff0);
  *pfVar3 = fVar11;
  pfVar3[1] = fVar12;
  pfVar3[2] = fVar13;
  pfVar3[3] = fVar14;{ V16 _vt15 = vectorMergeHighWord(auVar6,in_vs61); memcpy(auVar6, &_vt15, 16); }
  vectorMergeHighWord(auVar5,auVar9);
  vectorMergeHighWord(auVar7,auVar8);
  vectorMergeHighWord(auVar6,auVar10);
  pfVar3 = (float *)(param_3 + 0x30U & 0xfffffff0);
  *pfVar3 = fVar2;
  pfVar3[1] = fVar2;
  pfVar3[2] = fVar2;
  pfVar3[3] = fVar2;
  pfVar3 = (float *)(param_3 + 0x10U & 0xfffffff0);
  *pfVar3 = fVar1;
  pfVar3[1] = fVar1;
  pfVar3[2] = fVar1;
  pfVar3[3] = fVar1;
  pfVar3 = (float *)(param_3 + 0x20U & 0xfffffff0);
  *pfVar3 = fVar11;
  pfVar3[1] = fVar12;
  pfVar3[2] = fVar13;
  pfVar3[3] = fVar14;
  return;
}

