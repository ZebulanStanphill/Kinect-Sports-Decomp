typedef unsigned char bool;
typedef struct { unsigned __int64 lo, hi; } V16;
extern unsigned int *auStack_20;
extern int fn_822CDCF8();
extern V16 vectorSubtractFloatingPoint();


bool fn_822CF008(unsigned __int64 param_1)

{
  unsigned int uVar1;
  float *pfVar2;
  int in_r0;
  double dVar3;
  unsigned char in_vs32 [16];
  unsigned char in_vs45 [16];
  float fVar4;
  float fVar5;
  float afStack_30 [4];
  unsigned char auStack_20 [16];
  
  dVar3 = (double)fn_822CDCF8(param_1,afStack_30,auStack_20);
  uVar1 = (int)param_1 + 0x80U & 0xfffffff0;
  fVar4 = *(float *)(uVar1 + 4);
  fVar5 = *(float *)(uVar1 + 8);
  vectorSubtractFloatingPoint(in_vs45,in_vs32);
  fVar4 = fVar4 * fVar4 + 0.0 + fVar5 * fVar5;
  pfVar2 = (float *)((int)afStack_30 + in_r0 & 0xfffffff0);
  *pfVar2 = fVar4;
  pfVar2[1] = fVar4;
  pfVar2[2] = fVar4;
  pfVar2[3] = fVar4;
  return afStack_30[0] <= (float)(dVar3 * dVar3);
}

