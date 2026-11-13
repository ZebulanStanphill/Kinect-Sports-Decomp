void fn_824DC998(double param_1,int *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  float *pfVar7;
  
  pfVar1 = (float *)*param_2;
  param_2[7] = (int)(float)(param_1 + (double)(float)param_2[7]);
  while ((pfVar1 != (float *)param_2[1] && ((float)param_2[6] <= (float)param_2[7] - *pfVar1))) {
    pfVar2 = (float *)param_2[1];
    pfVar7 = pfVar1 + 2;
    param_2[4] = (int)((float)param_2[4] - pfVar1[1]);
    if (pfVar1 + 2 != pfVar2) {
      pfVar5 = pfVar1 + -2;
      do {
        pfVar5[2] = *pfVar7;
        pfVar3 = pfVar7 + 1;
        pfVar7 = pfVar7 + 2;
        pfVar5[3] = *pfVar3;
        pfVar5 = pfVar5 + 2;
      } while (pfVar7 != pfVar2);
    }
    iVar6 = param_2[1] + -8;
    for (iVar4 = iVar6; iVar4 != param_2[1]; iVar4 = iVar4 + 8) {
    }
    param_2[1] = iVar6;
  }
  param_2[5] = (int)((float)param_2[4] / (float)(unsigned int)(param_2[1] - *param_2 >> 3));
  return;
}

