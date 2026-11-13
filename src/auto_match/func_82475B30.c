#define NAN(x) ((x) != (x))
extern float fRam831c6680;
extern float fRam831c6684;
extern float fRam831c6688;
extern int fn_8252AFE0();
extern unsigned int lbl_821954D8;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_8327F894;


void fn_82475B30(int *param_1)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  fVar1 = *(float *)(*param_1 + 0x1fc);
  dVar3 = (double)(float)param_1[1];
  if ((dVar3 < (double)(fVar1 - fRam831c6688)) || ((double)(fRam831c6688 + fVar1) < dVar3)) {
    dVar5 = (double)fRam831c6680;
    fVar2 = lbl_8327F894 / fRam831c6684;
    if (dVar3 != dVar5) {
      fVar2 = -fVar2;
    }
    dVar3 = (double)(fVar2 + fVar1);
    dVar4 = (double)ltcg_pool_0_0f;
    if (*(float *)(&lbl_821954D8 +
                  ((unsigned int)(unsigned char)((dVar3 < dVar4) << 2) | (unsigned int)(NAN(dVar3) || NAN(dVar4)) << 2)) <
        0.0) {
      dVar3 = dVar4;
    }
    if (*(float *)(&lbl_821954D8 +
                  ((unsigned int)(unsigned char)(((double)(float)(dVar3 - dVar5) < dVar4) << 2) |
                  (unsigned int)(NAN((double)(float)(dVar3 - dVar5)) || NAN(dVar4)) << 2)) < 0.0) {
      dVar5 = dVar3;
    }
  }
  else {
    dVar5 = (double)fRam831c6680;
    if (dVar3 != (double)fRam831c6680) {
      fn_8252AFE0((double)ltcg_pool_0_0f);
      *(unsigned int *)(*param_1 + 0x1d0) = 1;
      return;
    }
  }
  fn_8252AFE0(dVar5);
  return;
}

