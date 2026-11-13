typedef struct { unsigned __int64 lo, hi; } V16;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int fStack_10;
extern unsigned int fStack_20;
extern unsigned int fStack_8;
extern unsigned int fStack_c;
extern unsigned int lbl_821AAD20;
extern unsigned int stack0x00000000;
extern unsigned __int64 storeVectorElementWordIndexed();
extern V16 vectorAddFloatingPoint();
extern V16 vectorMergeHighWord();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82D526C0(int param_1,int param_2,int param_3)

{
  float fVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  float *pfVar6;
  int in_r0;
  unsigned int uVar7;
  unsigned char in_vs32 [16];
  unsigned char auVar8 [16];
  unsigned char auVar9 [16];
  unsigned char in_vs40 [16];
  unsigned char in_vs41 [16];
  unsigned char in_vs44 [16];
  unsigned char in_vs45 [16];
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  unsigned int in_register_00010050;
  unsigned int in_register_00010054;
  unsigned int in_register_00010058;
  unsigned int in_vr5;
  float fStack_20;
  float fStack_10;
  float fStack_c;
  float fStack_8;{ V16 _vt0 = vectorMergeHighWord(in_vs41,in_vs32); memcpy(auVar9, &_vt0, 16); }{ V16 _vt1 = vectorMergeHighWord(in_vs44,in_vs40); memcpy(auVar8, &_vt1, 16); }
  vectorMergeHighWord(auVar8,auVar9);
  puVar2 = (unsigned int *)((int)&fStack_10 + in_r0 & 0xfffffff0);
  *puVar2 = in_register_00010050;
  puVar2[1] = in_register_00010054;
  puVar2[2] = in_register_00010058;
  puVar2[3] = in_vr5;
  if (fStack_8 <= fStack_c) {
    uVar7 = 1;
    fStack_8 = fStack_c;
  }
  else {
    uVar7 = 2;
  }
  if (fStack_8 < fStack_10) {
    uVar7 = 0;
  }
  puVar2 = (unsigned int *)((uVar7 + 2) * 0x10 + param_1 & 0xfffffff0);
  uVar10 = puVar2[1];
  uVar11 = puVar2[2];
  uVar12 = puVar2[3];
  puVar3 = (unsigned int *)(in_r0 + param_3 & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar10;
  puVar3[2] = uVar11;
  puVar3[3] = uVar12;
  uVar4 = param_1 + 0x50U & 0xfffffff0;
  uVar5 = in_r0 + param_2 & 0xfffffff0;
  fVar1 = *(float *)(uVar5 + 4) * *(float *)(uVar4 + 4) + 0.0 +
          *(float *)(uVar5 + 8) * *(float *)(uVar4 + 8);
  uVar10 = storeVectorElementWordIndexed(in_vs44,0,ZEXT48(&stack0x00000000) - 0x20);
  *(unsigned int *)(ZEXT48(&stack0x00000000) - 0x20) = uVar10;
  if (lbl_821AAD20 < fStack_20) {
    uVar7 = uVar7 + 3;
    vectorAddFloatingPoint(in_vs45,in_vs32);
    pfVar6 = (float *)(in_r0 + param_3 & 0xfffffff0);
    *pfVar6 = fVar1;
    pfVar6[1] = fVar1;
    pfVar6[2] = fVar1;
    pfVar6[3] = fVar1;
  }
  *(unsigned int *)(param_3 + 0xc) = uVar7 | 0x3f000000;
  return;
}

