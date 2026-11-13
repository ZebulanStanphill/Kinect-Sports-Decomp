typedef unsigned char bool;
typedef struct { unsigned __int64 lo, hi; } V16;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern unsigned int fStack_50;
extern int fn_82CECE68();
extern unsigned int lbl_82057518;
extern unsigned int lbl_82187DF0;
extern unsigned int lbl_82187DF8;
extern unsigned int stack0x00000000;
extern unsigned __int64 storeVectorElementWordIndexed();
extern V16 loadVectorLeftIndexed128();


bool fn_830A0450(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  unsigned char bVar1;
  float fVar2;
  float fVar3;
  unsigned int uVar4;
  float *pfVar5;
  unsigned __int64 in_r0;
  unsigned __int64 uVar6;
  bool bVar7;
  double dVar8;
  unsigned char in_vs32 [16];
  unsigned char in_vs38 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fStack_50;
  
  uVar6 = ZEXT48(&stack0x00000000);
  pfVar5 = (float *)((int)in_r0 + (unsigned int)*(unsigned char *)(param_1 + 3) * 0x10 + param_3 & 0xfffffff0);
  fVar9 = *pfVar5;
  fVar12 = pfVar5[1];
  fVar11 = pfVar5[2];
  pfVar5 = (float *)((int)in_r0 + (unsigned int)*(unsigned char *)(param_1 + 4) * 0x10 + param_4 & 0xfffffff0);
  fVar13 = pfVar5[1];
  fVar15 = pfVar5[2];
  fVar14 = pfVar5[3];
  fVar17 = fVar9 * fVar13 - fVar9 * fVar13;
  fVar18 = fVar9 * fVar14 - fVar9 * fVar14;
  fVar19 = fVar11 * *pfVar5 - fVar9 * fVar15;
  fVar20 = fVar12 * fVar15 - fVar11 * fVar13;
  uVar4 = storeVectorElementWordIndexed(in_vs38,0,uVar6 - 0x50);
  *(unsigned int *)(uVar6 - 0x50) = uVar4;
  bVar7 = lbl_82057518 <= fStack_50;
  if (bVar7) {
    uVar4 = storeVectorElementWordIndexed(in_vs32,0,uVar6 - 0x50);
    *(unsigned int *)(uVar6 - 0x50) = uVar4;
    bVar1 = *(unsigned char *)(param_1 + 5);
    fVar10 = fVar9;
    fVar16 = fVar13;
    dVar8 = (double)fn_82CECE68((double)SQRT(fStack_50),(double)fStack_50);
    loadVectorLeftIndexed128(in_r0,uVar6 - 0x50);
    loadVectorLeftIndexed128(in_r0,uVar6 - 0x50);
    fVar2 = *(float *)(&lbl_82187DF8 + (unsigned int)bVar1 * 4);
    fVar3 = *(float *)(&lbl_82187DF0 + (unsigned int)bVar1 * 4);
    *(float *)(param_5 + 0x1c) = *(float *)(param_2 + 0x40) * *(float *)(param_1 + 0x10);
    *(float *)(param_5 + 0x18) = (float)(dVar8 * (double)fVar2 + (double)fVar3);
    pfVar5 = (float *)((int)in_r0 + param_5 & 0xfffffff0);
    *pfVar5 = fVar17 * fVar13 * fVar9;
    pfVar5[1] = fVar18 * fVar14 * fVar10;
    pfVar5[2] = fVar19 * fVar15 * fVar11;
    pfVar5[3] = fVar20 * fVar16 * fVar12;
    *(unsigned int *)(param_5 + 0x10) = *(unsigned int *)(param_1 + 8);
    *(unsigned int *)(param_5 + 0x14) = *(unsigned int *)(param_1 + 0xc);
  }
  return !bVar7;
}

