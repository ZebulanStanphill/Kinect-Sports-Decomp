extern unsigned int fStack_1c;
extern unsigned int fStack_20;
extern int fn_8280A668();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


void fn_8280FAD0(float *param_1,unsigned __int64 param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fStack_20;
  float fStack_1c;
  
  fn_8280A668(param_1,&fStack_1c,&fStack_20);
  fVar8 = lbl_821AAD20;
  fVar7 = lbl_82002AE0;
  fVar1 = *param_1;
  fVar6 = -(fVar1 * fStack_20 - fVar1);
  fVar2 = param_1[2];
  fVar3 = param_1[1];
  fVar5 = -(fVar3 * fStack_20 - fVar3);
  fVar4 = -(fVar2 * fStack_20 - fVar2);
  *param_3 = fVar1 * fVar6 + fStack_20;
  param_3[4] = fVar6 * param_1[1] - fVar2 * fStack_1c;
  param_3[8] = param_1[2] * fVar6 + fVar3 * fStack_1c;
  param_3[0xc] = fVar8;
  param_3[1] = *param_1 * fVar5 + fVar2 * fStack_1c;
  param_3[5] = fVar5 * param_1[1] + fStack_20;
  param_3[9] = param_1[2] * fVar5 - fVar1 * fStack_1c;
  param_3[0xd] = fVar8;
  param_3[2] = *param_1 * fVar4 - fVar3 * fStack_1c;
  param_3[6] = fVar4 * param_1[1] + fVar1 * fStack_1c;
  param_3[10] = param_1[2] * fVar4 + fStack_20;
  param_3[0xe] = fVar8;
  param_3[3] = fVar8;
  param_3[7] = fVar8;
  param_3[0xb] = fVar8;
  param_3[0xf] = fVar7;
  return;
}

