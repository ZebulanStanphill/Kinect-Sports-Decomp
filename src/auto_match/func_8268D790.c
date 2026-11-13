extern unsigned int lbl_82005CCC;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_1;
extern unsigned int uStack_9;


void fn_8268D790(unsigned char *param_1,float *param_2,unsigned char *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  unsigned char uVar6;
  unsigned char uStack_9;
  unsigned char uStack_1;
  
  fVar1 = param_2[6] * (float)*param_3 + param_2[7];
  if (lbl_82005CCC <= fVar1) {
    fVar1 = lbl_82005CCC;
  }
  if (fVar1 < 0.0) {
    fVar1 = lbl_821AAD20;
  }
  fVar4 = (float)param_3[3] * param_2[4] + param_2[5];
  if (lbl_82005CCC <= fVar4) {
    fVar4 = lbl_82005CCC;
  }
  if (fVar4 < 0.0) {
    fVar4 = lbl_821AAD20;
  }
  fVar3 = (float)param_3[2] * param_2[2] + param_2[3];
  if (lbl_82005CCC <= fVar3) {
    fVar3 = lbl_82005CCC;
  }
  if (fVar3 < 0.0) {
    fVar3 = lbl_821AAD20;
  }
  fVar5 = (float)param_3[1] * *param_2 + param_2[1];
  fVar2 = lbl_82005CCC;
  if (fVar5 < lbl_82005CCC) {
    fVar2 = fVar5;
  }
  uStack_1 = (unsigned char)(__int64)fVar1;
  uVar6 = uStack_1;
  uStack_1 = (unsigned char)(__int64)fVar3;
  if (fVar2 < 0.0) {
    fVar2 = lbl_821AAD20;
  }
  *param_1 = uVar6;
  uStack_9 = (unsigned char)(__int64)fVar4;
  param_1[2] = uStack_1;
  uStack_1 = (unsigned char)(__int64)fVar2;
  param_1[1] = uStack_1;
  param_1[3] = uStack_9;
  return;
}

