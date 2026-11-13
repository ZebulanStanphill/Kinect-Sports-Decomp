#define NAN(x) ((x) != (x))
extern unsigned int lbl_821954D8;
extern unsigned int ltcg_pool_0_0f;


void fn_824C5BE0(double param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (*(int *)(param_2 + 8) == 0) {
    return;
  }
  fVar1 = (float)((double)*(float *)(param_2 + 8) - param_1);
  fVar2 = -fVar1;
  fVar3 = ltcg_pool_0_0f;
  if (*(float *)(&lbl_821954D8 +
                ((unsigned int)(unsigned char)((fVar2 < ltcg_pool_0_0f) << 2) |
                (unsigned int)(NAN(fVar2) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
    fVar3 = fVar1;
  }
  *(float *)(param_2 + 8) = fVar3;
  return;
}

