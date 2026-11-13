typedef struct { unsigned __int64 lo, hi; } V16;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int fStack_1c;
extern unsigned int fStack_20;
extern int fn_82CECE68();
extern unsigned int lbl_8200133C;
extern unsigned int lbl_82015468;
extern unsigned int lbl_8201DD74;
extern unsigned int stack0x00000000;
extern unsigned __int64 storeVectorElementWordIndexed();
extern V16 vectorSubtractFloatingPoint();


unsigned __int64 fn_830A0158(int param_1,int param_2,int param_3,unsigned __int64 param_4,int param_5)

{
  unsigned char bVar1;
  float fVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  float fVar5;
  float fVar6;
  int in_r0;
  unsigned __int64 uVar7;
  __int64 lVar8;
  __int64 lVar9;
  double dVar10;
  double dVar11;
  unsigned char in_vs34 [16];
  unsigned char in_vs36 [16];
  unsigned char in_vs37 [16];
  unsigned char in_vs40 [16];
  unsigned int uVar12;
  unsigned int uVar13;
  unsigned int uVar14;
  float fStack_20;
  float fStack_1c;
  
  if (*(char *)(param_1 + 2) == '\0') {
    uVar7 = 1;
  }
  else {
    bVar1 = *(unsigned char *)(param_1 + 3);
    lVar8 = ZEXT48(&stack0x00000000) - 0x1c;
    lVar9 = ZEXT48(&stack0x00000000) - 0x20;
    *(float *)(param_5 + 0x1c) = *(float *)(param_2 + 0x40) * *(float *)(param_1 + 0xc);
    puVar3 = (unsigned int *)((unsigned int)bVar1 * 0x10 + param_3 & 0xfffffff0);
    uVar12 = puVar3[1];
    uVar13 = puVar3[2];
    uVar14 = puVar3[3];
    puVar4 = (unsigned int *)(in_r0 + param_5 & 0xfffffff0);
    *puVar4 = *puVar3;
    puVar4[1] = uVar12;
    puVar4[2] = uVar13;
    puVar4[3] = uVar14;
    *(unsigned int *)(param_5 + 0x10) = *(unsigned int *)(param_1 + 4);
    *(unsigned int *)(param_5 + 0x14) = *(unsigned int *)(param_1 + 8);
    vectorSubtractFloatingPoint(in_vs36,in_vs40);
    uVar12 = storeVectorElementWordIndexed(in_vs37,0,lVar8);
    *(unsigned int *)lVar8 = uVar12;
    uVar12 = storeVectorElementWordIndexed(in_vs34,0,lVar9);
    *(unsigned int *)lVar9 = uVar12;
    dVar11 = (double)fn_82CECE68((double)fStack_1c,(double)fStack_20);
    *(float *)(param_5 + 0x18) = (float)dVar11;
    fVar6 = lbl_8201DD74;
    fVar5 = lbl_82015468;
    dVar10 = (double)(*(float *)(*(int *)(param_2 + 0x4c) + 4) * lbl_8200133C);
    while (fVar6 < (float)(dVar10 - dVar11)) {
      fVar2 = *(float *)(param_5 + 0x18) + fVar5;
      *(float *)(param_5 + 0x18) = fVar2;
      dVar11 = (double)fVar2;
    }
    fVar2 = *(float *)(param_5 + 0x18);
    while (fVar6 < (float)((double)fVar2 - dVar10)) {
      fVar2 = *(float *)(param_5 + 0x18) - fVar5;
      *(float *)(param_5 + 0x18) = fVar2;
    }
    uVar7 = 0;
  }
  return uVar7;
}

