#define NAN(x) ((x) != (x))
extern unsigned int lbl_821954D8;
extern unsigned int ltcg_pool_0_0f;


double fn_8253FEF8(double param_1,double param_2,double param_3)

{
  if (param_3 < param_2) {
    param_3 = param_2;
  }
  if (*(float *)(&lbl_821954D8 +
                ((unsigned int)(unsigned char)(((float)(param_1 - param_2) < ltcg_pool_0_0f) << 2) |
                (unsigned int)(NAN((float)(param_1 - param_2)) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
    param_1 = param_2;
  }
  if (*(float *)(&lbl_821954D8 +
                ((unsigned int)(unsigned char)(((float)(param_1 - param_3) < ltcg_pool_0_0f) << 2) |
                (unsigned int)(NAN((float)(param_1 - param_3)) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
    param_3 = param_1;
  }
  return param_3;
}

