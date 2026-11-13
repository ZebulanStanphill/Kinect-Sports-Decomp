extern int fn_82587C30();
extern unsigned int lbl_821954B0;
extern unsigned int lbl_82195590;
extern unsigned int lbl_821955AC;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


double fn_82621870(double param_1,double param_2,double param_3,double param_4)

{
  unsigned __int64 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  if (param_3 != (double)ltcg_pool_0_0f) {
    puVar1 = &lbl_821954B0;
    dVar5 = (double)lbl_821CA460;
    dVar4 = (double)lbl_82195590;
    dVar3 = (double)(float)((double)(float)(param_2 - param_1) * dVar4);
    dVar2 = (double)fn_82587C30((double)(float)(dVar5 - param_3),
                                 (double)(float)(param_4 * (double)lbl_821955AC),dVar3);
    dVar4 = (double)(float)((double)(float)(dVar5 - dVar2) *
                            (double)(float)((dVar3 - (double)(__int64)dVar3) * (double)puVar1[0x1e]
                                           ) + param_1) * dVar4;
    param_1 = (double)(float)(((double)(float)dVar4 - (double)(__int64)dVar4) *
                             (double)puVar1[0x1e]);
  }
  return param_1;
}

