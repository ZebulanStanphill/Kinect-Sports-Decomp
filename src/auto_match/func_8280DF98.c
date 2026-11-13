void fn_8280DF98(float *param_1,float *param_2,float *param_3)

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
  
  fVar1 = *param_2;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  fVar4 = param_2[1];
  fVar5 = param_1[3];
  fVar6 = param_2[2];
  fVar7 = *param_1;
  fVar9 = fVar7 * fVar4 + (fVar6 * fVar5 - fVar2 * fVar1);
  fVar8 = fVar6 * fVar2 + (fVar1 * fVar5 - fVar4 * fVar3);
  fVar10 = fVar7 * fVar1 + fVar2 * fVar4 + fVar6 * fVar3;
  fVar1 = fVar3 * fVar1 + (fVar4 * fVar5 - fVar7 * fVar6);
  *param_3 = -(fVar3 * fVar1 - (fVar5 * fVar8 + fVar7 * fVar10 + fVar2 * fVar9));
  param_3[1] = -(*param_1 * fVar9 - (fVar1 * param_1[3] + param_1[2] * fVar8 + fVar10 * param_1[1]))
  ;
  param_3[2] = -(fVar8 * param_1[1] - (fVar9 * param_1[3] + param_1[2] * fVar10 + *param_1 * fVar1))
  ;
  return;
}

