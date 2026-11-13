typedef struct { unsigned __int64 lo, hi; } V16;
#define NAN(x) ((x) != (x))
extern unsigned int fStack_18;
extern unsigned int fStack_1c;
extern unsigned int fStack_20;
extern unsigned int lbl_821954D8;
extern unsigned int ltcg_pool_0_0f;
extern V16 loadVectorLeftIndexed128();
extern V16 vectorSubtractFloatingPoint();


void fn_82563ED0(unsigned __int64 param_1,float *param_2)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  float *pfVar4;
  float fVar5;
  int in_r0;
  unsigned char in_vs32 [16];
  unsigned char in_vs33 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float in_register_000100d0;
  float in_register_000100d4;
  float in_register_000100d8;
  float in_vr13;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  
  fVar5 = ltcg_pool_0_0f;
  iVar3 = (int)param_1;
  pfVar2 = (float *)(in_r0 + iVar3 & 0xfffffff0);
  fVar6 = pfVar2[1];
  fVar7 = pfVar2[2];
  fVar8 = pfVar2[3];
  vectorSubtractFloatingPoint(in_vs32,in_vs33);
  fVar1 = *(float *)(iVar3 + 0x14);
  loadVectorLeftIndexed128(param_1,0x10);
  pfVar4 = (float *)((int)&fStack_20 + in_r0 & 0xfffffff0);
  *pfVar4 = *pfVar2 * in_register_000100d0;
  pfVar4[1] = fVar6 * in_register_000100d4;
  pfVar4[2] = fVar7 * in_register_000100d8;
  pfVar4[3] = fVar8 * in_vr13;
  fVar6 = fStack_20 - -fVar1;
  if (*(float *)(&lbl_821954D8 +
                ((unsigned int)(unsigned char)((fVar6 < fVar5) << 2) | (unsigned int)(NAN(fVar6) || NAN(fVar5)) << 2)) < 0.0)
  {
    fStack_20 = -fVar1;
  }
  if (*(float *)(&lbl_821954D8 +
                ((unsigned int)(unsigned char)((fStack_20 - fVar1 < fVar5) << 2) |
                (unsigned int)(NAN(fStack_20 - fVar1) || NAN(fVar5)) << 2)) < 0.0) {
    fVar1 = fStack_20;
  }
  *param_2 = fVar1;
  fVar1 = *(float *)(iVar3 + 0x14);
  fVar6 = fStack_1c - -fVar1;
  if (*(float *)(&lbl_821954D8 +
                ((unsigned int)(unsigned char)((fVar6 < fVar5) << 2) | (unsigned int)(NAN(fVar6) || NAN(fVar5)) << 2)) < 0.0)
  {
    fStack_1c = -fVar1;
  }
  if (*(float *)(&lbl_821954D8 +
                ((unsigned int)(unsigned char)((fStack_1c - fVar1 < fVar5) << 2) |
                (unsigned int)(NAN(fStack_1c - fVar1) || NAN(fVar5)) << 2)) < 0.0) {
    fVar1 = fStack_1c;
  }
  param_2[1] = fVar1;
  fVar1 = *(float *)(iVar3 + 0x14);
  fVar6 = fStack_18 - -fVar1;
  if (*(float *)(&lbl_821954D8 +
                ((unsigned int)(unsigned char)((fVar6 < fVar5) << 2) | (unsigned int)(NAN(fVar6) || NAN(fVar5)) << 2)) < 0.0)
  {
    fStack_18 = -fVar1;
  }
  if (*(float *)(&lbl_821954D8 +
                ((unsigned int)(unsigned char)((fStack_18 - fVar1 < fVar5) << 2) |
                (unsigned int)(NAN(fStack_18 - fVar1) || NAN(fVar5)) << 2)) < 0.0) {
    fVar1 = fStack_18;
  }
  param_2[2] = fVar1;
  return;
}

