#define NAN(x) ((x) != (x))
extern unsigned int lbl_8218EC10;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_83296818;


void fn_82530158(double param_1,double param_2,int param_3,unsigned __int64 param_4,unsigned __int64 param_5,
                  int param_6)

{
  float fVar1;
  float fVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  if ((-1 < param_6) && (param_6 < 2)) {
    dVar4 = (double)ltcg_pool_0_0f;
    dVar8 = (double)lbl_821CA460;
    if (*(float *)(&lbl_821954D8 +
                  ((unsigned int)(unsigned char)((param_1 < dVar4) << 2) | (unsigned int)(NAN(param_1) || NAN(dVar4)) << 2))
        < 0.0) {
      param_1 = dVar4;
    }
    dVar7 = (double)lbl_8218EC10;
    dVar5 = (double)(float)(dVar7 - param_2);
    iVar3 = param_6 * 0x2c + param_3;
    fVar1 = *(float *)(&lbl_83296818 + param_6 * 0x68);
    fVar2 = *(float *)((param_6 + 4) * 0x2c + param_3);
    *(unsigned int *)(iVar3 + 0xc0) = 0;
    dVar6 = dVar8;
    if (*(float *)(&lbl_821954D8 +
                  ((unsigned int)(unsigned char)(((double)(float)(param_1 - dVar8) < dVar4) << 2) |
                  (unsigned int)(NAN((double)(float)(param_1 - dVar8)) || NAN(dVar4)) << 2)) < 0.0) {
      dVar6 = param_1;
    }
    *(float *)(iVar3 + 0xb4) = (float)dVar6;
    if (*(float *)(&lbl_821954D8 +
                  ((unsigned int)(unsigned char)((dVar5 < dVar4) << 2) | (unsigned int)(NAN(dVar5) || NAN(dVar4)) << 2)) <
        0.0) {
      dVar7 = param_2;
    }
    *(float *)(iVar3 + 0xa8) = (float)((double)fVar1 * dVar6);
    *(float *)(iVar3 + 0xa0) = (float)(dVar8 / dVar7);
    *(float *)(iVar3 + 0xb8) = (float)(dVar6 - (double)fVar2);
    *(float *)(iVar3 + 0xac) = (float)((double)fVar1 * dVar6) - *(float *)(iVar3 + 0xa4);
  }
  return;
}

