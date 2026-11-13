void fn_8280E048(float *param_1,int param_2,int param_3,__int64 param_4)

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
  float *pfVar11;
  float *pfVar12;
  
  if ((int)param_4 == 0) {
    return;
  }
  pfVar11 = (float *)(param_3 + -4);
  pfVar12 = (float *)(param_2 + 4);
  do {
    fVar1 = pfVar12[-1];
    fVar2 = param_1[1];
    fVar3 = *pfVar12;
    fVar4 = pfVar12[1];
    fVar5 = param_1[2];
    fVar6 = param_1[3];
    fVar7 = *param_1;
    fVar10 = fVar3 * fVar7 + (fVar4 * fVar6 - fVar1 * fVar2);
    fVar8 = fVar4 * fVar2 + (fVar1 * fVar6 - fVar3 * fVar5);
    fVar9 = fVar3 * fVar2 + fVar1 * fVar7 + fVar4 * fVar5;
    fVar1 = fVar1 * fVar5 + (fVar3 * fVar6 - fVar4 * fVar7);
    pfVar11[1] = -(fVar5 * fVar1 - (fVar6 * fVar8 + fVar7 * fVar9 + fVar2 * fVar10));
    *(float *)((param_3 - param_2) + (int)pfVar12) =
         -(*param_1 * fVar10 - (fVar9 * param_1[1] + param_1[3] * fVar1 + param_1[2] * fVar8));
    pfVar12 = pfVar12 + 3;
    pfVar11 = pfVar11 + 3;
    *pfVar11 = -(fVar8 * param_1[1] - (*param_1 * fVar1 + param_1[2] * fVar9 + param_1[3] * fVar10))
    ;
    param_4 = param_4 + -1;
  } while (param_4 != 0);
  return;
}

