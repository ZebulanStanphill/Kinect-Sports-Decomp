#define true 1


void fn_8233FD78(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  
  pfVar4 = param_1;
  if (param_1 == param_2) {
    return;
  }
  while (pfVar5 = pfVar4 + 2, pfVar5 != param_2) {
    fVar1 = *pfVar5;
    fVar3 = pfVar4[3];
    pfVar6 = pfVar4 + 3;
    pfVar4 = pfVar5;
    if (fVar1 <= *param_1) {
      while( true ) {
        fVar2 = pfVar5[-2];
        if (fVar1 <= fVar2) break;
        *pfVar5 = fVar2;
        pfVar5[1] = pfVar5[-1];
        pfVar5 = pfVar5 + -2;
      }
      *pfVar5 = fVar1;
      pfVar5[1] = fVar3;
    }
    else {
      while (param_1 != pfVar5) {
        pfVar6[-1] = pfVar6[-3];
        *pfVar6 = pfVar6[-2];
        pfVar5 = pfVar6 + -3;
        pfVar6 = pfVar6 + -2;
      }
      *param_1 = fVar1;
      param_1[1] = fVar3;
    }
  }
  return;
}

