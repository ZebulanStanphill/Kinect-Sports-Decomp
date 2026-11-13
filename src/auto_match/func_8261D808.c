#define NAN(x) ((x) != (x))
extern int fn_82529320();
extern unsigned int lbl_821954D8;
extern unsigned int ltcg_pool_0_0f;


unsigned __int64 fn_8261D808(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = ltcg_pool_0_0f;
  if ((ltcg_pool_0_0f < (float)param_1[5]) || (param_1[8] != 0)) {
    if ((param_1[8] == 0) && (param_1[5] != 0)) {
      fVar2 = (float)param_1[5] - *(float *)(*param_1 + 0xb3c);
      fVar3 = -fVar2;
      fVar1 = ltcg_pool_0_0f;
      if (*(float *)(&lbl_821954D8 +
                    ((unsigned int)(unsigned char)((fVar3 < ltcg_pool_0_0f) << 2) |
                    (unsigned int)(NAN(fVar3) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
        fVar1 = fVar2;
      }
      param_1[5] = (int)fVar1;
    }
  }
  else if (param_1[6] != 0) {
    fVar1 = (float)param_1[6] - *(float *)(*param_1 + 0xb3c);
    fVar4 = -fVar1;
    fVar3 = ltcg_pool_0_0f;
    if (*(float *)(&lbl_821954D8 +
                  ((unsigned int)(unsigned char)((fVar4 < ltcg_pool_0_0f) << 2) |
                  (unsigned int)(NAN(fVar4) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
      fVar3 = fVar1;
    }
    param_1[6] = (int)fVar3;
    if (fVar3 == fVar2) {
      fn_82529320(*param_1,0);
      return 1;
    }
  }
  return 0;
}

