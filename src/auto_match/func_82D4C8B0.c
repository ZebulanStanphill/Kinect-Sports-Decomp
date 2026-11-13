typedef struct { unsigned __int64 lo, hi; } V16;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
#define TBLr 0
extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern unsigned int fStack_48;
extern unsigned int *fStack_4c;
extern unsigned int fStack_50;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82005344;
extern unsigned int lbl_82021540;
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_8323B4A0;
extern unsigned int stack0x00000000;
extern unsigned __int64 storeVectorElementWordIndexed();
extern V16 vectorSubtractFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


__int64 fn_82D4C8B0(unsigned __int64 param_1,int param_2,__int64 param_3,int param_4,int *param_5)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  unsigned __int64 uVar10;
  int iVar11;
  __int64 lVar12;
  unsigned char in_vs32 [16];
  unsigned char in_vs40 [16];
  unsigned char in_vs41 [16];
  unsigned char auVar13 [16];
  unsigned char auVar14 [16];
  unsigned char in_vs44 [16];
  unsigned char in_vs45 [16];
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  
  uVar10 = ZEXT48(&stack0x00000000);
  iVar11 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(unsigned int **)(iVar11 + 4);
  if (puVar1 < *(unsigned int **)(iVar11 + 0xc)) {
    *puVar1 = "TtrcMultiSpher";
    uVar3 = TBLr;
    puVar1[1] = (int)uVar3;
    *(unsigned int **)(iVar11 + 4) = puVar1 + 3;
  }
  fVar9 = lbl_821AAD20;
  fVar8 = lbl_82021540;
  fVar7 = lbl_82005344;
  fVar6 = lbl_82002C5C;
  lVar12 = 0;
  iVar11 = 0;
  if (0 < (int)param_3) {
    param_4 = param_4 - (int)param_5;
    do {{ V16 _vt0 = vectorSubtractFloatingPoint(in_vs45,in_vs32); memcpy(auVar14, &_vt0, 16); }{ V16 _vt1 = vectorSubtractFloatingPoint(in_vs44,in_vs32); memcpy(auVar13, &_vt1, 16); }{ V16 _vt2 = vectorSubtractFloatingPoint(auVar13,auVar14); memcpy(in_vs32, &_vt2, 16); }
      uVar2 = storeVectorElementWordIndexed(in_vs41,0,uVar10 - 0x48);
      *(unsigned int *)(uVar10 - 0x48) = uVar2;
      uVar2 = storeVectorElementWordIndexed(in_vs40,0,uVar10 - 0x50);
      *(unsigned int *)(uVar10 - 0x50) = uVar2;
      fVar4 = fStack_50 * fVar7;
      if (fVar4 < fVar9) {
        uVar2 = storeVectorElementWordIndexed(in_vs32,0,uVar10 - 0x4c);
        *(unsigned int *)(uVar10 - 0x4c) = uVar2;
        fVar5 = fVar4 * fVar4 -
                -(*(float *)(param_2 + 0xc) * *(float *)(param_2 + 0xc) - fStack_48) * fStack_4c *
                fVar8;
        if (((fVar9 < fVar5) && (fVar4 = (-fVar4 - SQRT(fVar5)) * fVar6, fVar4 < fStack_4c)) &&
           (fVar9 <= fVar4)) {
          *(float *)(param_4 + (int)param_5) = fVar4 / fStack_4c;
          *param_5 = iVar11;
          lVar12 = lVar12 + 1;
          param_5 = param_5 + 1;
        }
      }
      iVar11 = iVar11 + 1;
      param_2 = param_2 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  iVar11 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(unsigned int **)(iVar11 + 4);
  if (puVar1 < *(unsigned int **)(iVar11 + 0xc)) {
    *puVar1 = &lbl_82132BC4;
    uVar3 = TBLr;
    puVar1[1] = (int)uVar3;
    *(unsigned int **)(iVar11 + 4) = puVar1 + 3;
  }
  return lVar12;
}

