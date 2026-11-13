typedef struct { unsigned __int64 lo, hi; } V16;
extern int fn_822ABA88();
extern unsigned int lbl_82195530;
extern V16 vectorSubtractFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


unsigned __int64 fn_8231F730(int param_1,unsigned __int64 param_2)

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
  unsigned __int64 uVar9;
  double dVar10;
  unsigned char in_vs32 [16];
  unsigned char in_vs45 [16];
  float fVar11;
  float fVar12;
  float afStack_30 [6];
  
  uVar9 = (unsigned __int64)*(unsigned int *)(param_1 + 0xc);
  uVar6 = 0;
  uVar5 = 0;
  piVar1 = *(int **)(*(unsigned int *)(param_1 + 0xc) + 0x1c);
  dVar10 = (double)lbl_82195530;
  uVar2 = *(unsigned int *)(piVar1[4] * 4 + *piVar1);
  uVar8 = (unsigned __int64)uVar2;
  uVar7 = (unsigned __int64)*(unsigned int *)(uVar2 + 8);
  if (uVar7 != 0) {
    do {
      uVar4 = fn_822ABA88(uVar8);
      if ((((uVar9 & 0xffffffff) != (uVar4 & 0xffffffff)) &&
          ((param_2 & 0xffffffff) != (uVar4 & 0xffffffff))) &&
         (*(int *)(*(int *)((int)uVar4 + 0x110) + 0x1c) == 2)) {
        uVar2 = (int)uVar9 + 0x80U & 0xfffffff0;
        fVar11 = *(float *)(uVar2 + 4);
        fVar12 = *(float *)(uVar2 + 8);{ V16 _vt0 = vectorSubtractFloatingPoint(in_vs45,in_vs32); memcpy(in_vs32, &_vt0, 16); }
        fVar11 = fVar11 * fVar11 + 0.0 + fVar12 * fVar12;
        pfVar3 = (float *)((int)afStack_30 + (int)in_r0 & 0xfffffff0);
        *pfVar3 = fVar11;
        pfVar3[1] = fVar11;
        pfVar3[2] = fVar11;
        pfVar3[3] = fVar11;
        if ((double)afStack_30[0] < dVar10) {
          uVar6 = uVar4;
          dVar10 = (double)afStack_30[0];
        }
      }
      uVar5 = uVar5 + 1;
    } while ((uVar5 & 0xffffffff) < (uVar7 & 0xffffffff));
  }
  return uVar6;
}

