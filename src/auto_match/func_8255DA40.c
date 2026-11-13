#define NAN(x) ((x) != (x))
extern unsigned int lbl_821954D8;
extern unsigned int ltcg_pool_0_0f;


double fn_8255DA40(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *(float *)(param_1 + 0xa4) - *(float *)(param_1 + 0xa8);
  fVar2 = *(float *)(param_1 + 0xa4);
  if (*(float *)(&lbl_821954D8 +
                ((unsigned int)(unsigned char)((fVar1 < ltcg_pool_0_0f) << 2) |
                (unsigned int)(NAN(fVar1) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
    fVar2 = *(float *)(param_1 + 0xa8);
  }
  fVar1 = *(float *)(param_1 + 0xa0) - fVar2;
  fVar3 = *(float *)(param_1 + 0xa0);
  if (*(float *)(&lbl_821954D8 +
                ((unsigned int)(unsigned char)((fVar1 < ltcg_pool_0_0f) << 2) |
                (unsigned int)(NAN(fVar1) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
    fVar3 = fVar2;
  }
  return (double)(fVar3 * *(float *)(param_1 + 0x8bc) * *(float *)(param_1 + 0x2b0));
}

