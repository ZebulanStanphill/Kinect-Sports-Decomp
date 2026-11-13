void fn_8303A888(float *param_1,float *param_2,unsigned int *param_3,__int64 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  
  fVar1 = *param_1;
  fVar2 = *param_2;
  fVar3 = param_2[1];
  fVar4 = param_2[2];
  fVar5 = param_1[1];
  fVar6 = param_1[2];
  fVar7 = param_1[3];
  fVar9 = fVar5;
  fVar10 = fVar7;
  if ((int)param_4 != 0) {
    do {
      fVar7 = fVar6;
      fVar5 = fVar1;
      pfVar8 = (float *)*param_3;
      fVar6 = param_2[3];
      *param_3 = pfVar8 + 1;
      fVar1 = *pfVar8;
      fVar6 = fVar4 * fVar7 + fVar10 * fVar6 + (fVar1 + fVar9) * fVar2 + fVar3 * fVar5;
      *pfVar8 = fVar6;
      param_4 = param_4 + -1;
      fVar9 = fVar5;
      fVar10 = fVar7;
    } while (param_4 != 0);
  }
  *param_1 = fVar1;
  param_1[1] = fVar5;
  param_1[2] = fVar6;
  param_1[3] = fVar7;
  return;
}

