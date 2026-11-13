#define NAN(x) ((x) != (x))
extern unsigned int lbl_821954D8;
extern unsigned int lbl_82195644;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


unsigned __int64 fn_8254A748(double param_1,double param_2,double param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)((double)(float)((double)lbl_821CA460 - param_3) * param_2 +
                 (double)(float)(param_1 * param_3));
  if (*(float *)(&lbl_821954D8 +
                ((unsigned int)(unsigned char)((fVar1 < ltcg_pool_0_0f) << 2) |
                (unsigned int)(NAN(fVar1) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
    fVar1 = ltcg_pool_0_0f;
  }
  fVar2 = lbl_82195644;
  if (*(float *)(&lbl_821954D8 +
                ((unsigned int)(unsigned char)((fVar1 - lbl_82195644 < ltcg_pool_0_0f) << 2) |
                (unsigned int)(NAN(fVar1 - lbl_82195644) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
    fVar2 = fVar1;
  }
  return (__int64)fVar2 & 0xff;
}

