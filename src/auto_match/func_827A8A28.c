extern unsigned int fStack_2c;
extern unsigned int fStack_30;
extern unsigned int fStack_34;
extern unsigned int fStack_38;
extern unsigned int fStack_3c;
extern unsigned int fStack_40;
extern int fn_8268CEC0();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8200D8A0;
extern unsigned int lbl_82015CF0;
extern unsigned int lbl_821AAD20;


void fn_827A8A28(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  
  fStack_30 = lbl_82002AE0;
  fVar1 = *param_2;
  fVar2 = param_2[1];
  dVar3 = (double)lbl_8200D8A0;
  dVar4 = (double)lbl_82015CF0;
  param_1[2] = param_1[1] * fVar2 + *param_1 * fVar1 + param_1[2];
  param_1[5] = param_1[3] * fVar1 + param_1[4] * fVar2 + param_1[5];
  dVar5 = (double)(param_2[2] - *param_2);
  fStack_40 = fStack_30;
  if (dVar3 < dVar5) {
    fStack_40 = (float)(dVar5 * dVar4);
    dVar5 = dVar3;
  }
  dVar6 = (double)(param_2[3] - param_2[1]);
  if (dVar3 < dVar6) {
    fStack_30 = (float)(dVar6 * dVar4);
    dVar6 = dVar3;
  }
  dVar3 = (double)lbl_821AAD20;
  fStack_3c = lbl_821AAD20;
  fStack_38 = lbl_821AAD20;
  fStack_34 = lbl_821AAD20;
  fStack_2c = lbl_821AAD20;
  fn_8268CEC0(param_1,&fStack_40);
  *param_3 = (float)dVar3;
  param_3[1] = (float)dVar3;
  param_3[2] = (float)dVar5;
  param_3[3] = (float)dVar6;
  return;
}

