typedef unsigned char bool;
typedef struct { unsigned __int64 lo, hi; } V16;
extern int fn_822B2EA8();
extern unsigned int ltcg_pool_0_0f;
extern V16 vectorCompareEqualToFloatingPoint();
extern V16 vectorSubtractFloatingPoint();


float * fn_822B2F90(float *param_1,int param_2)

{
  float fVar1;
  unsigned int uVar2;
  float *pfVar3;
  int in_r0;
  unsigned __int64 uVar4;
  unsigned char in_cr6;
  unsigned char in_vs32 [16];
  unsigned char in_vs43 [16];
  unsigned char in_vs44 [16];
  unsigned char in_vs45 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float afStack_40 [10];
  
  fn_822B2EA8(afStack_40);
  uVar4 = (unsigned __int64)(unsigned int)afStack_40[0] + 1;
  uVar2 = (int)(((unsigned __int64)(unsigned int)afStack_40[0] + 1 & 0xffffffff) << 4) + param_2 & 0xfffffff0;
  fVar7 = *(float *)(uVar2 + 4);
  fVar8 = *(float *)(uVar2 + 8);
  uVar2 = (int)((uVar4 + ((__int64)((int)uVar4 >> 2) +
                          (unsigned __int64)((int)uVar4 < 0 && (uVar4 & 3) != 0) & 0x3fffffff) * -4 + 1 &
                0xffffffff) << 4) + param_2 & 0xfffffff0;
  fVar5 = *(float *)(uVar2 + 4);
  fVar6 = *(float *)(uVar2 + 8);
  vectorSubtractFloatingPoint(in_vs32,in_vs45);
  vectorCompareEqualToFloatingPoint(in_vs43,in_vs44);
  fVar1 = ltcg_pool_0_0f;
  if (!(bool)(in_cr6 >> 3 & 1)) {
    fVar1 = fVar5 * fVar5 + 0.0 + fVar6 * fVar6;
    vectorSubtractFloatingPoint(in_vs43,in_vs45);
    pfVar3 = (float *)((int)afStack_40 + in_r0 & 0xfffffff0);
    *pfVar3 = fVar1;
    pfVar3[1] = fVar1;
    pfVar3[2] = fVar1;
    pfVar3[3] = fVar1;
    fVar1 = fVar5 * fVar7 + 0.0 + fVar6 * fVar8;
    pfVar3 = (float *)((int)afStack_40 + in_r0 & 0xfffffff0);
    *pfVar3 = fVar1;
    pfVar3[1] = fVar1;
    pfVar3[2] = fVar1;
    pfVar3[3] = fVar1;
    fVar1 = afStack_40[0] / afStack_40[0];
  }
  param_1[1] = fVar1;
  *param_1 = afStack_40[0];
  return param_1;
}

