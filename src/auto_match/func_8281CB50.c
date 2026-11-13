void fn_8281CB50(float *param_1,int param_2,int param_3,__int64 param_4)

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
  float *pfVar10;
  float *pfVar11;
  
  if ((int)param_4 == 0) {
    return;
  }
  pfVar10 = (float *)(param_3 + -4);
  pfVar11 = (float *)(param_2 + 4);
  do {
    fVar1 = pfVar11[1];
    fVar2 = *pfVar11;
    fVar3 = param_1[1];
    fVar4 = param_1[7];
    fVar5 = param_1[2];
    fVar6 = param_1[8];
    fVar7 = pfVar11[-1];
    fVar8 = *param_1;
    fVar9 = param_1[6];
    *(float *)((param_3 - param_2) + (int)pfVar11) =
         param_1[3] * fVar7 + param_1[4] * fVar2 + fVar1 * param_1[5];
    pfVar11 = pfVar11 + 3;
    pfVar10[1] = fVar8 * fVar7 + fVar5 * fVar1 + fVar3 * fVar2;
    pfVar10 = pfVar10 + 3;
    *pfVar10 = fVar9 * fVar7 + fVar1 * fVar6 + fVar2 * fVar4;
    param_4 = param_4 + -1;
  } while (param_4 != 0);
  return;
}

