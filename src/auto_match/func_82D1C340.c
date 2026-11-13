#define true 1
typedef struct { unsigned __int64 lo, hi; } V16;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int fStack_2c;
extern unsigned int fStack_30;
extern int fn_82CE5410();
extern int fn_82CE6310();
extern unsigned int lbl_82021544;
extern unsigned int stack0x00000000;
extern unsigned __int64 storeVectorElementWordIndexed();
extern V16 vectorSubtractFloatingPoint();


void fn_82D1C340(double param_1,unsigned __int64 param_2,int *param_3,int *param_4)

{
  float fVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  float fVar5;
  int in_r0;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  __int64 lVar9;
  __int64 lVar10;
  float *pfVar11;
  float *pfVar12;
  __int64 lVar13;
  unsigned char in_vs32 [16];
  unsigned char in_vs43 [16];
  unsigned char in_vs45 [16];
  unsigned int uVar14;
  unsigned int uVar15;
  unsigned int uVar16;
  float fStack_30;
  float fStack_2c;
  
  fVar5 = lbl_82021544;
  pfVar11 = (float *)*param_3;
  lVar10 = (unsigned __int64)(unsigned int)param_3[1] - 1;
  pfVar8 = pfVar11;
  if (lVar10 < 0) {
LAB_82d1c3ec:
    iVar2 = (int)pfVar8 - *param_3 >> 4;
    *param_4 = iVar2;
    iVar6 = fn_82CE5410();
    if ((int)(param_3[2] & 0x3fffffffU) < iVar2) {
      lVar10 = ((unsigned __int64)(unsigned int)param_3[2] & 0x3fffffff) << 1;
      if ((int)lVar10 <= iVar2) {
        lVar10 = (__int64)iVar2;
      }
      fn_82CE6310(*(unsigned int *)(iVar6 + 0x10),param_3,lVar10,0x10);
    }
    param_3[1] = iVar2;
    return;
  }
  pfVar7 = pfVar11 + -4;
LAB_82d1c374:
  if ((float *)*param_3 <= pfVar7) {
    fVar1 = *pfVar11;
    pfVar12 = pfVar7;
    do {
      if (*pfVar12 < fVar1 - fVar5) break;
      lVar13 = ZEXT48(&stack0x00000000) - 0x30;
      vectorSubtractFloatingPoint(in_vs32,in_vs45);
      uVar14 = storeVectorElementWordIndexed(in_vs43,0,lVar13);
      *(unsigned int *)lVar13 = uVar14;
      if ((double)fStack_30 < param_1) {
        lVar13 = lVar10 + -1;
        if (lVar13 < 0) goto LAB_82d1c3e0;
        lVar9 = ZEXT48(&stack0x00000000) - 0x2c;
        pfVar12 = pfVar11;
        goto LAB_82d1c448;
      }
      pfVar12 = pfVar12 + -4;
    } while ((float *)*param_3 <= pfVar12);
  }
  puVar3 = (unsigned int *)(in_r0 + (int)pfVar11 & 0xfffffff0);
  uVar14 = puVar3[1];
  uVar15 = puVar3[2];
  uVar16 = puVar3[3];
  pfVar7 = pfVar7 + 4;
  puVar4 = (unsigned int *)(in_r0 + (int)pfVar8 & 0xfffffff0);
  *puVar4 = *puVar3;
  puVar4[1] = uVar14;
  puVar4[2] = uVar15;
  puVar4[3] = uVar16;
  pfVar8 = pfVar8 + 4;
  goto LAB_82d1c3e0;
  while( true ) {
    lVar13 = lVar13 + -1;
    lVar10 = lVar10 + -1;
    pfVar11 = pfVar12 + 4;
    pfVar12 = pfVar12 + 4;
    if (lVar13 < 0) break;
LAB_82d1c448:
    vectorSubtractFloatingPoint(in_vs32,in_vs45);
    uVar14 = storeVectorElementWordIndexed(in_vs43,0,lVar9);
    *(unsigned int *)lVar9 = uVar14;
    pfVar11 = pfVar12;
    if (param_1 <= (double)fStack_2c) break;
  }
LAB_82d1c3e0:
  lVar10 = lVar10 + -1;
  pfVar11 = pfVar11 + 4;
  if (lVar10 < 0) goto LAB_82d1c3ec;
  goto LAB_82d1c374;
}

