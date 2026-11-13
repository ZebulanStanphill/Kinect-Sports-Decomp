typedef unsigned char bool;
typedef struct { unsigned __int64 lo, hi; } V16;
extern unsigned int fStack_8;
extern unsigned int ltcg_pool_0_0f;
extern V16 vectorSubtractFloatingPoint();


unsigned int fn_8249E7A0(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  int in_r0;
  bool bVar5;
  unsigned char in_vs32 [16];
  unsigned char in_vs45 [16];
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  float afStack_10 [2];
  float fStack_8;
  
  fVar1 = ltcg_pool_0_0f;
  if (param_2 == 1) {
    puVar3 = (unsigned int *)(param_1 + 0x70U & 0xfffffff0);
    uVar6 = puVar3[1];
    uVar7 = puVar3[2];
    uVar8 = puVar3[3];
    vectorSubtractFloatingPoint(in_vs45,in_vs32);
    puVar4 = (unsigned int *)((int)afStack_10 + in_r0 & 0xfffffff0);
    *puVar4 = *puVar3;
    puVar4[1] = uVar6;
    puVar4[2] = uVar7;
    puVar4[3] = uVar8;
    if (afStack_10[0] < fVar1) {
      return 0;
    }
    if (fVar1 < afStack_10[0]) {
      return 1;
    }
    bVar5 = fVar1 < fStack_8;
  }
  else {
    if (param_2 == 2) {
      fVar1 = *(float *)(param_1 + 0xb0);
      fVar2 = *(float *)(param_1 + 0xb4);
    }
    else {
      if (param_2 == 3) {
        return *(unsigned int *)(param_1 + 0xd0);
      }
      if (param_2 != 4) {
        if (param_2 != 5) {
          return 0;
        }
        if (*(float *)(param_1 + 0xb8) < *(float *)(param_1 + 0xbc)) {
          return 1;
        }
        return 0;
      }
      fVar1 = *(float *)(param_1 + 0xb8);
      fVar2 = *(float *)(param_1 + 0xbc);
    }
    bVar5 = fVar2 < fVar1;
  }
  if (bVar5) {
    return 1;
  }
  return 0;
}

