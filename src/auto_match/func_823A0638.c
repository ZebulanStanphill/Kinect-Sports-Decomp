#define NAN(x) ((x) != (x))
extern int fn_8254EEB8();
extern unsigned int lbl_82191FC8;
extern unsigned int lbl_82192D74;
extern unsigned int lbl_821954D8;
extern unsigned int ltcg_pool_0_0f;


void fn_823A0638(double param_1,double param_2,int param_3)

{
  float fVar1;
  float fVar2;
  double dVar3;
  
  fVar2 = ltcg_pool_0_0f;
  if (*(float *)(param_3 + 0x134) <= ltcg_pool_0_0f) {
    fVar1 = (float)(param_1 - (double)*(float *)(param_3 + 300));
    *(float *)(param_3 + 0x134) = (float)param_2;
    dVar3 = (double)lbl_82192D74;
    if (*(float *)(&lbl_821954D8 +
                  ((unsigned int)(unsigned char)((fVar1 < fVar2) << 2) | (unsigned int)(NAN(fVar1) || NAN(fVar2)) << 2)) <
        0.0) {
      param_1 = (double)*(float *)(param_3 + 300);
    }
    *(float *)(param_3 + 300) = (float)param_1;
    if (*(int *)(*(int *)(param_3 + 0x40) + 4) != 0) {
      fVar1 = (float)((double)(float)(param_2 * dVar3) - (double)lbl_82191FC8);
      dVar3 = (double)(float)(param_2 * dVar3);
      if (*(float *)(&lbl_821954D8 +
                    ((unsigned int)(unsigned char)((fVar1 < fVar2) << 2) | (unsigned int)(NAN(fVar1) || NAN(fVar2)) << 2)) <
          0.0) {
        dVar3 = (double)lbl_82191FC8;
      }
      fn_8254EEB8(param_2,dVar3,*(int *)(param_3 + 0x40),(int)param_1);
    }
  }
  return;
}

