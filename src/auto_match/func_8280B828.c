extern int fn_828094D0();
extern unsigned int lbl_8200133C;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C5C;
extern float lbl_8201DFF0;
extern unsigned int lbl_821AAD20;


void fn_8280B828(double param_1,double param_2,double param_3,double param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  
  dVar4 = (double)fn_828094D0((double)((float)(param_1 * (double)lbl_82002C5C) * lbl_8201DFF0));
  fVar2 = lbl_821AAD20;
  fVar1 = lbl_8200133C;
  dVar3 = (double)lbl_82002AE0;
  param_5[4] = lbl_821AAD20;
  param_5[8] = fVar2;
  param_5[0xc] = fVar2;
  param_5[1] = fVar2;
  param_5[5] = (float)(dVar3 / dVar4);
  param_5[9] = fVar2;
  param_5[0xd] = fVar2;
  param_5[2] = fVar2;
  param_5[6] = fVar2;
  param_5[3] = fVar2;
  *param_5 = (float)((double)(float)(dVar3 / dVar4) / param_2);
  param_5[10] = (float)(param_4 / (double)(float)(param_3 - param_4));
  param_5[0xe] = (float)((double)(float)(param_3 * param_4) / (double)(float)(param_3 - param_4));
  param_5[7] = fVar2;
  param_5[0xb] = fVar1;
  param_5[0xf] = fVar2;
  return;
}

