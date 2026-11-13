#define NAN(x) ((x) != (x))
extern unsigned int lbl_8218E8FC;
extern unsigned int lbl_8219131C;
extern unsigned int lbl_821916FC;
extern unsigned int lbl_82192488;
extern unsigned int lbl_82192734;
extern unsigned int lbl_821954D8;
extern unsigned int ltcg_pool_0_0f;


void fn_8254A870(double param_1,double param_2,double param_3)

{
  float fVar1;
  float *in_r6;
  float *in_r7;
  float *in_r8;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  fVar1 = ltcg_pool_0_0f;
  dVar3 = (double)(float)(param_1 - param_2);
  dVar2 = (double)ltcg_pool_0_0f;
  dVar6 = param_1;
  if (*(float *)(&lbl_821954D8 +
                ((unsigned int)(unsigned char)((dVar3 < dVar2) << 2) | (unsigned int)(NAN(dVar3) || NAN(dVar2)) << 2)) < 0.0)
  {
    dVar6 = param_2;
  }
  dVar5 = param_2;
  if (*(float *)(&lbl_821954D8 +
                ((unsigned int)(unsigned char)((dVar3 < dVar2) << 2) | (unsigned int)(NAN(dVar3) || NAN(dVar2)) << 2)) < 0.0)
  {
    dVar5 = param_1;
  }
  if (*(float *)(&lbl_821954D8 +
                ((unsigned int)(unsigned char)(((double)(float)(dVar6 - param_3) < dVar2) << 2) |
                (unsigned int)(NAN((double)(float)(dVar6 - param_3)) || NAN(dVar2)) << 2)) < 0.0) {
    dVar6 = param_3;
  }
  dVar4 = param_3;
  if (*(float *)(&lbl_821954D8 +
                ((unsigned int)(unsigned char)(((double)(float)(dVar5 - param_3) < dVar2) << 2) |
                (unsigned int)(NAN((double)(float)(dVar5 - param_3)) || NAN(dVar2)) << 2)) < 0.0) {
    dVar4 = dVar5;
  }
  *in_r8 = (float)dVar6;
  dVar5 = (double)(float)(dVar6 - dVar4);
  if (dVar6 == dVar2) {
    *in_r7 = fVar1;
    dVar2 = (double)lbl_82192734;
  }
  else {
    *in_r7 = (float)(dVar5 / dVar6);
    if (dVar5 != dVar2) {
      if (param_1 == dVar6) {
        fVar1 = (float)((double)(float)(param_2 - param_3) / dVar5);
      }
      else {
        fVar1 = lbl_8218E8FC;
        if (param_2 == dVar6) {
          dVar3 = (double)(float)(param_3 - param_1);
          fVar1 = lbl_821916FC;
        }
        fVar1 = (float)(dVar3 / dVar5) + fVar1;
      }
      *in_r6 = fVar1;
      dVar6 = (double)(fVar1 * lbl_82192488);
      *in_r6 = fVar1 * lbl_82192488;
      if (dVar2 <= dVar6) {
        return;
      }
      dVar2 = (double)(float)(dVar6 + (double)lbl_8219131C);
    }
  }
  *in_r6 = (float)dVar2;
  return;
}

