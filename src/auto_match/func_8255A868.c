extern float lbl_82195590;
extern float lbl_821955A0;


void fn_8255A868(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  double dVar3;
  
  dVar3 = lbl_821955A0;
  fVar2 = lbl_82195590;
  fVar1 = (*param_2 - *param_3) * lbl_82195590;
  *param_1 = (float)(((double)fVar1 - (double)(__int64)fVar1) * lbl_821955A0);
  fVar1 = (param_2[1] - param_3[1]) * fVar2;
  param_1[1] = (float)(((double)fVar1 - (double)(__int64)fVar1) * dVar3);
  fVar2 = (param_2[2] - param_3[2]) * fVar2;
  param_1[2] = (float)(((double)fVar2 - (double)(__int64)fVar2) * dVar3);
  return;
}

