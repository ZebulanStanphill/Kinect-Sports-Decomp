#define NAN(x) ((x) != (x))
extern unsigned int lbl_821954D8;
extern unsigned int ltcg_pool_0_0f;


double fn_82380CE0(int param_1)

{
  float fVar1;
  double dVar2;
  double dVar3;
  
  if (*(int *)(param_1 + 0xa0) + *(int *)(param_1 + 0x9c) < *(int *)(param_1 + 0x20c)) {
    dVar2 = (double)*(float *)(param_1 + 0x84);
  }
  else if (*(int *)(param_1 + 0x9c) < *(int *)(param_1 + 0x20c)) {
    dVar2 = (double)*(float *)(param_1 + 0x80);
  }
  else {
    dVar2 = (double)*(float *)(param_1 + 0x7c);
  }
  fVar1 = (float)((double)*(float *)(param_1 + 0x208) - dVar2);
  dVar3 = (double)*(float *)(param_1 + 0x208);
  if (*(float *)(&lbl_821954D8 +
                ((unsigned int)(unsigned char)((fVar1 < ltcg_pool_0_0f) << 2) |
                (unsigned int)(NAN(fVar1) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
    dVar3 = dVar2;
  }
  return dVar3;
}

