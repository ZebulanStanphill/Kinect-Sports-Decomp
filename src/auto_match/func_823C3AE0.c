typedef struct { unsigned __int64 lo, hi; } V16;
extern int fn_822ABA88();
extern int fn_823693A0();
extern unsigned int ltcg_pool_0_0f;
extern V16 vectorSubtractFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_823C3AE0(unsigned __int64 param_1)

{
  int *piVar1;
  unsigned int uVar2;
  float *pfVar3;
  unsigned __int64 in_r0;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  double dVar9;
  unsigned char in_vs32 [16];
  unsigned char in_vs45 [16];
  float fVar10;
  float fVar11;
  float afStack_20 [8];
  
  uVar8 = 0;
  dVar9 = (double)ltcg_pool_0_0f;
  uVar5 = 0;
  piVar1 = *(int **)(*(int *)((int)param_1 + 0xe24) * 4 + **(int **)((int)param_1 + 8));
  uVar2 = *(unsigned int *)(piVar1[4] * 4 + *piVar1);
  uVar7 = (unsigned __int64)uVar2;
  uVar6 = (unsigned __int64)*(unsigned int *)(uVar2 + 8);
  if (uVar6 != 0) {
    do {
      uVar4 = fn_822ABA88(uVar7);
      uVar2 = (int)uVar4 + 0x80U & 0xfffffff0;
      fVar10 = *(float *)(uVar2 + 4);
      fVar11 = *(float *)(uVar2 + 8);{ V16 _vt0 = vectorSubtractFloatingPoint(in_vs45,in_vs32); memcpy(in_vs45, &_vt0, 16); }
      fVar10 = fVar10 * fVar10 + 0.0 + fVar11 * fVar11;
      pfVar3 = (float *)((int)afStack_20 + (int)in_r0 & 0xfffffff0);
      *pfVar3 = fVar10;
      pfVar3[1] = fVar10;
      pfVar3[2] = fVar10;
      pfVar3[3] = fVar10;
      if (((uVar8 & 0xffffffff) == 0) || ((double)afStack_20[0] < dVar9)) {
        uVar8 = uVar4;
        dVar9 = (double)afStack_20[0];
      }
      uVar5 = uVar5 + 1;
    } while ((uVar5 & 0xffffffff) < (uVar6 & 0xffffffff));
  }
  fn_823693A0(param_1,uVar8);
  return;
}

