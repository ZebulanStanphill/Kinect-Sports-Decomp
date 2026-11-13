extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


unsigned __int64
fn_82784B00(double param_1,double param_2,double param_3,double param_4,double param_5,
             double param_6,double param_7,double param_8,double param_9)

{
  float fVar1;
  unsigned __int64 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar4 = (double)((float)(param_8 - param_6) * (float)(param_3 - param_1) -
                  (float)(param_7 - param_5) * (float)(param_4 - param_2));
  if (ABS(dVar4) < param_9) {
    return 1;
  }
  dVar3 = (double)lbl_82002AE0;
  fVar1 = (float)(dVar3 / dVar4);
  dVar4 = (double)(((float)(param_2 - param_6) * (float)(param_7 - param_5) -
                   (float)(param_1 - param_5) * (float)(param_8 - param_6)) * fVar1);
  dVar5 = (double)(((float)(param_2 - param_6) * (float)(param_3 - param_1) -
                   (float)(param_1 - param_5) * (float)(param_4 - param_2)) * fVar1);
  if ((((dVar4 < (double)lbl_821AAD20) || (dVar3 < dVar4)) || (dVar5 < (double)lbl_821AAD20)) ||
     (uVar2 = 1, dVar3 < dVar5)) {
    uVar2 = 0;
  }
  return uVar2;
}

