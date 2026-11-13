typedef struct { unsigned __int64 lo, hi; } V16;
#define NAN(x) ((x) != (x))
extern int fn_823133E8();
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern V16 vectorConditionalSelect();
extern V16 vectorSubtractFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


unsigned __int64
fn_82313080(double param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4,int param_5)

{
  float fVar1;
  unsigned int uVar2;
  float *pfVar3;
  float fVar4;
  int in_r0;
  int iVar5;
  unsigned char in_vs32 [16];
  unsigned char auVar6 [16];
  unsigned char auVar7 [16];
  unsigned char in_vs42 [16];
  unsigned char in_vs43 [16];
  unsigned char in_vs44 [16];
  unsigned char in_vs45 [16];
  float fVar8;
  float fVar9;
  float afStack_40 [16];
  
  fVar4 = ltcg_pool_0_0f;
  if (*(int *)(param_2 + 0x24) == 0) {
    iVar5 = fn_823133E8(param_3,param_4,param_5,param_2 + 0x10);
    fVar4 = lbl_821CA460;
    if (iVar5 != 0) {
      uVar2 = in_r0 + param_2 + 0x10 & 0xfffffff0;
      fVar8 = *(float *)(uVar2 + 4);
      fVar9 = *(float *)(uVar2 + 8);{ V16 _vt0 = vectorConditionalSelect(in_vs32,in_vs45,in_vs42); memcpy(auVar7, &_vt0, 16); }{ V16 _vt1 = vectorConditionalSelect(in_vs44,in_vs43,in_vs42); memcpy(auVar6, &_vt1, 16); }
      vectorSubtractFloatingPoint(auVar6,auVar7);
      fVar8 = fVar8 * fVar8 + 0.0 + fVar9 * fVar9;
      pfVar3 = (float *)((int)afStack_40 + in_r0 & 0xfffffff0);
      *pfVar3 = fVar8;
      pfVar3[1] = fVar8;
      pfVar3[2] = fVar8;
      pfVar3[3] = fVar8;
      if ((afStack_40[0] < fVar4) && (*(int *)(param_5 + 0x120) != 0)) {
        *(unsigned int *)(param_2 + 0x24) = 1;
      }
    }
  }
  else {
    if (*(int *)(param_2 + 0x28) != 0) {
      fVar8 = (float)((double)*(float *)(param_2 + 0x28) - param_1);
      fVar1 = -fVar8;
      fVar9 = ltcg_pool_0_0f;
      if (*(float *)(&lbl_821954D8 +
                    ((unsigned int)(unsigned char)((fVar1 < ltcg_pool_0_0f) << 2) |
                    (unsigned int)(NAN(fVar1) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
        fVar9 = fVar8;
      }
      *(float *)(param_2 + 0x28) = fVar9;
    }
    if (*(float *)(param_2 + 0x28) <= fVar4) {
      *(float *)(param_2 + 0x28) = fVar4;
      return 2;
    }
  }
  return 1;
}

