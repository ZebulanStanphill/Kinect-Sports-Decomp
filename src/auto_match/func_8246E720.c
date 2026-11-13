#define NAN(x) ((x) != (x))
extern int fn_82465328();
extern unsigned int lbl_82193CC0;
extern unsigned int lbl_821954D8;
extern unsigned int ltcg_pool_0_0f;


unsigned __int64 fn_8246E720(double param_1,double param_2,int param_3,unsigned __int64 param_4,int param_5)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar5 = (double)ltcg_pool_0_0f;
  if (((dVar5 < (double)*(float *)(param_3 + 0x18)) && (param_5 != 0)) &&
     (iVar1 = fn_82465328(*(unsigned int *)(param_3 + 0x440)), iVar1 != 0)) {
    dVar3 = (double)(float)(param_2 - (double)*(float *)(param_3 + 0x18));
    if (*(float *)(&lbl_821954D8 +
                  ((unsigned int)(unsigned char)((dVar3 < dVar5) << 2) | (unsigned int)(NAN(dVar3) || NAN(dVar5)) << 2)) <
        0.0) {
      param_2 = (double)*(float *)(param_3 + 0x18);
    }
    dVar3 = (double)(float)(param_2 - (double)(float)(param_1 + (double)lbl_82193CC0));
    if (*(float *)(&lbl_821954D8 +
                  ((unsigned int)(unsigned char)((dVar3 < dVar5) << 2) | (unsigned int)(NAN(dVar3) || NAN(dVar5)) << 2)) <
        0.0) {
      param_2 = (double)(float)(param_1 + (double)lbl_82193CC0);
    }
    *(float *)(param_3 + 0x18) = (float)param_2;
  }
  if (*(int *)(param_3 + 0x18) != 0) {
    dVar2 = (double)(float)((double)*(float *)(param_3 + 0x18) - param_1);
    dVar4 = -dVar2;
    dVar3 = dVar5;
    if (*(float *)(&lbl_821954D8 +
                  ((unsigned int)(unsigned char)((dVar4 < dVar5) << 2) | (unsigned int)(NAN(dVar4) || NAN(dVar5)) << 2)) <
        0.0) {
      dVar3 = dVar2;
    }
    *(float *)(param_3 + 0x18) = (float)dVar3;
    if (dVar3 == dVar5) {
      return 1;
    }
  }
  return 0;
}

