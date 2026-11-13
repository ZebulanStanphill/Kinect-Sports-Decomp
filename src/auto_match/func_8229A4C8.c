#define NAN(x) ((x) != (x))
extern int fn_8229A000();
extern unsigned int lbl_821954D8;
extern unsigned int ltcg_pool_0_0f;


unsigned __int64 fn_8229A4C8(double param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = ltcg_pool_0_0f;
  if ((*(int *)(param_2 + 0x120c) == 4) && (*(int *)(param_2 + 0x121c) != 0)) {
    fVar1 = (float)((double)*(float *)(param_2 + 0x121c) - param_1);
    fVar2 = -fVar1;
    fVar3 = ltcg_pool_0_0f;
    if (*(float *)(&lbl_821954D8 +
                  ((unsigned int)(unsigned char)((fVar2 < ltcg_pool_0_0f) << 2) |
                  (unsigned int)(NAN(fVar2) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
      fVar3 = fVar1;
    }
    *(float *)(param_2 + 0x121c) = fVar3;
    if (fVar3 == fVar4) {
      fn_8229A000();
      *(unsigned int *)(param_2 + 0x120c) = 0;
    }
  }
  return 0;
}

