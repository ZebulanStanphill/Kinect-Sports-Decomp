extern unsigned int lbl_821AAD20;


unsigned __int64
fn_827EC970(double param_1,float *param_2,unsigned __int64 param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = *param_4;
  fVar2 = *param_2;
  if ((fVar2 < fVar1) || (fVar5 = lbl_821AAD20, fVar1 = *param_5, *param_5 < fVar2)) {
    fVar5 = (fVar2 - fVar1) * (fVar2 - fVar1);
  }
  fVar1 = param_4[1];
  fVar2 = param_2[1];
  if ((fVar2 < fVar1) || (fVar4 = lbl_821AAD20, fVar1 = param_5[1], param_5[1] < fVar2)) {
    fVar4 = (fVar2 - fVar1) * (fVar2 - fVar1);
  }
  fVar1 = param_4[2];
  fVar2 = param_2[2];
  if ((fVar2 < fVar1) || (fVar3 = lbl_821AAD20, fVar1 = param_5[2], param_5[2] < fVar2)) {
    fVar3 = (fVar2 - fVar1) * (fVar2 - fVar1);
  }
  if ((float)(param_1 * param_1) < fVar3 + fVar4 + fVar5) {
    return 0;
  }
  return 1;
}

