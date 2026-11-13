unsigned __int64
fn_82862D20(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
             float *param_6,unsigned char *param_7)

{
  float fVar1;
  
  if ((((*param_3 <= *param_2) && (*param_4 >= *param_1)) && (param_3[1] <= param_2[1])) &&
     (param_4[1] >= param_1[1])) {
    *param_7 = 0;
    fVar1 = param_1[1];
    if (param_3[1] > fVar1) {
      *param_7 = 4;
      fVar1 = param_3[1];
    }
    param_5[1] = fVar1;
    fVar1 = param_2[1];
    if (param_4[1] < fVar1) {
      *param_7 = *param_7 | 8;
      fVar1 = param_4[1];
    }
    param_6[1] = fVar1;
    fVar1 = *param_1;
    if (*param_3 > fVar1) {
      *param_7 = *param_7 | 1;
      fVar1 = *param_3;
    }
    *param_5 = fVar1;
    fVar1 = *param_2;
    if (*param_4 < fVar1) {
      *param_7 = *param_7 | 2;
      fVar1 = *param_4;
    }
    *param_6 = fVar1;
    return 1;
  }
  return 0;
}

