#define NAN(x) ((x) != (x))
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


void fn_825CEA70(double param_1,int param_2)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (double)ltcg_pool_0_0f;
  dVar2 = (double)lbl_821CA460;
  if (*(int *)(param_2 + 0x2c) != 0) {
    if (*(float *)(&lbl_821954D8 +
                  ((unsigned int)(unsigned char)((param_1 < dVar1) << 2) | (unsigned int)(NAN(param_1) || NAN(dVar1)) << 2))
        < 0.0) {
      param_1 = dVar1;
    }
    if (*(float *)(&lbl_821954D8 +
                  ((unsigned int)(unsigned char)(((double)(float)(param_1 - dVar2) < dVar1) << 2) |
                  (unsigned int)(NAN((double)(float)(param_1 - dVar2)) || NAN(dVar1)) << 2)) < 0.0) {
      dVar2 = param_1;
    }
    *(float *)(param_2 + 0x24) = (float)dVar2;
    return;
  }
  if (*(float *)(&lbl_821954D8 +
                ((unsigned int)(unsigned char)((param_1 < dVar1) << 2) | (unsigned int)(NAN(param_1) || NAN(dVar1)) << 2)) <
      0.0) {
    param_1 = dVar1;
  }
  if (*(float *)(&lbl_821954D8 +
                ((unsigned int)(unsigned char)(((double)(float)(param_1 - dVar2) < dVar1) << 2) |
                (unsigned int)(NAN((double)(float)(param_1 - dVar2)) || NAN(dVar1)) << 2)) < 0.0) {
    dVar2 = param_1;
  }
  *(float *)(param_2 + 0x28) = (float)dVar2;
  return;
}

