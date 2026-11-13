extern int fn_828095F8();
extern int fn_82809CB0();
extern int fn_8280A550();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005344;
extern unsigned int lbl_82015468;
extern unsigned int lbl_8201DD74;
extern unsigned int lbl_8201E038;
extern unsigned int lbl_821AAD20;


double fn_8280E960(float *param_1,float *param_2)

{
  float fVar1;
  double dVar2;
  
  dVar2 = (double)fn_82809CB0((double)param_1[3]);
  fVar1 = lbl_821AAD20;
  if ((double)lbl_8201E038 <= dVar2) {
    dVar2 = (double)lbl_821AAD20;
    *param_2 = lbl_82002AE0;
    param_2[1] = fVar1;
    param_2[2] = fVar1;
  }
  else {
    dVar2 = (double)fn_8280A550((double)(param_1[2] * param_1[2] +
                                              *param_1 * *param_1 + param_1[1] * param_1[1]));
    *param_2 = (float)((double)*param_1 * dVar2);
    param_2[1] = (float)(dVar2 * (double)param_1[1]);
    param_2[2] = (float)(dVar2 * (double)param_1[2]);
    dVar2 = (double)fn_828095F8((double)param_1[3]);
    dVar2 = (double)(float)(dVar2 * (double)lbl_82005344);
    if ((double)lbl_8201DD74 < dVar2) {
      dVar2 = (double)(float)(dVar2 - (double)lbl_82015468);
    }
  }
  return dVar2;
}

