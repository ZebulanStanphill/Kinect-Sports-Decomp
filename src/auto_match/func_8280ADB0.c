extern unsigned int lbl_82002AE0;


void fn_8280ADB0(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = *param_2;
  fVar4 = param_1[5];
  fVar5 = param_1[6];
  fVar6 = param_1[1];
  fVar7 = param_1[2];
  fVar8 = param_1[9];
  fVar9 = param_1[10];
  fVar10 = param_1[0xe];
  fVar11 = param_1[0xd];
  fVar12 = lbl_82002AE0 /
           (param_1[0xb] * fVar2 + param_1[3] * fVar3 + param_1[7] * fVar1 + param_1[0xf]);
  *param_3 = (*param_1 * fVar3 + param_1[4] * fVar1 + param_1[8] * fVar2 + param_1[0xc]) * fVar12;
  param_3[1] = fVar12 * (fVar8 * fVar2 + fVar6 * fVar3 + fVar4 * fVar1 + fVar11);
  param_3[2] = fVar12 * (fVar9 * fVar2 + fVar7 * fVar3 + fVar5 * fVar1 + fVar10);
  return;
}

