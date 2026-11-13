extern unsigned int lbl_82195680;
extern unsigned int ltcg_pool_0_0f;


void fn_8262ECD0(double param_1,float *param_2,unsigned char param_3,unsigned char param_4,unsigned char param_5)

{
  float fVar1;
  float fVar2;
  double dVar3;
  
  fVar2 = (float)param_3;
  param_2[6] = (float)param_4;
  fVar1 = ltcg_pool_0_0f;
  dVar3 = (double)lbl_82195680;
  param_2[5] = fVar2;
  param_2[7] = (float)param_5;
  if (param_1 <= dVar3) {
    *param_2 = fVar2;
    param_2[10] = fVar1;
  }
  else {
    param_2[10] = (float)(ABS((double)(fVar2 - *param_2)) / param_1);
  }
  if (param_1 <= dVar3) {
    param_2[1] = param_2[6];
    param_2[0xb] = fVar1;
  }
  else {
    param_2[0xb] = (float)(ABS((double)(param_2[6] - param_2[1])) / param_1);
  }
  if (param_1 <= dVar3) {
    param_2[2] = param_2[7];
    param_2[0xc] = fVar1;
  }
  else {
    param_2[0xc] = (float)(ABS((double)(param_2[7] - param_2[2])) / param_1);
  }
  if (((param_2[10] == fVar1) && (param_2[0xb] == fVar1)) && (param_2[0xc] == fVar1)) {
    fVar2 = (float)((unsigned int)param_2[0xf] & 0xfffffffe);
  }
  else {
    fVar2 = (float)((unsigned int)param_2[0xf] | 1);
  }
  param_2[0xf] = fVar2;
  return;
}

