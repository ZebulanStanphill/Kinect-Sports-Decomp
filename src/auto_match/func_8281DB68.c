extern unsigned int *auStack_40;
extern int fn_8280E168();
extern int fn_8281DA78();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


void fn_8281DB68(unsigned __int64 param_1,double param_2,double param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6,double param_7)

{
  float fVar1;
  float *pfVar2;
  double extraout_f1;
  double dVar3;
  double dVar4;
  unsigned char auStack_40 [48];
  
  pfVar2 = (float *)fn_82F6A548();
  fVar1 = lbl_82002AE0;
  dVar4 = (double)lbl_82002AE0;
  dVar3 = extraout_f1;
  if (param_7 == dVar4) {
    *pfVar2 = lbl_82002AE0;
    pfVar2[4] = fVar1;
    pfVar2[8] = fVar1;
    fVar1 = lbl_821AAD20;
    pfVar2[3] = lbl_821AAD20;
    pfVar2[6] = fVar1;
    pfVar2[1] = fVar1;
    pfVar2[7] = fVar1;
    pfVar2[2] = fVar1;
    pfVar2[5] = fVar1;
  }
  else {
    fn_8280E168(param_4,param_5,param_6,param_7,auStack_40);
    fn_8281DA78(pfVar2,auStack_40);
  }
  if (dVar3 != dVar4) {
    *pfVar2 = (float)(dVar3 * (double)*pfVar2);
    pfVar2[1] = (float)((double)pfVar2[1] * dVar3);
    pfVar2[2] = (float)(dVar3 * (double)pfVar2[2]);
  }
  if (param_2 != dVar4) {
    pfVar2[3] = (float)((double)pfVar2[3] * param_2);
    pfVar2[4] = (float)(param_2 * (double)pfVar2[4]);
    pfVar2[5] = (float)((double)pfVar2[5] * param_2);
  }
  if (param_3 != dVar4) {
    pfVar2[6] = (float)(param_3 * (double)pfVar2[6]);
    pfVar2[7] = (float)((double)pfVar2[7] * param_3);
    pfVar2[8] = (float)(param_3 * (double)pfVar2[8]);
  }
  fn_82F6A594();
  return;
}

