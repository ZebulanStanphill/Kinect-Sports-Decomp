typedef unsigned char bool;


bool fn_8281D638(double param_1,float *param_2,float *param_3)

{
  float fVar1;
  
  fVar1 = (float)(param_1 * param_1);
  return (param_2[8] - param_3[8]) * (param_2[8] - param_3[8]) <= fVar1 &&
         ((param_2[5] - param_3[5]) * (param_2[5] - param_3[5]) <= fVar1 &&
         ((param_2[2] - param_3[2]) * (param_2[2] - param_3[2]) <= fVar1 &&
         ((param_2[7] - param_3[7]) * (param_2[7] - param_3[7]) <= fVar1 &&
         ((param_2[4] - param_3[4]) * (param_2[4] - param_3[4]) <= fVar1 &&
         ((param_2[1] - param_3[1]) * (param_2[1] - param_3[1]) <= fVar1 &&
         ((param_2[6] - param_3[6]) * (param_2[6] - param_3[6]) <= fVar1 &&
         ((param_2[3] - param_3[3]) * (param_2[3] - param_3[3]) <= fVar1 &&
         (*param_2 - *param_3) * (*param_2 - *param_3) <= fVar1)))))));
}

