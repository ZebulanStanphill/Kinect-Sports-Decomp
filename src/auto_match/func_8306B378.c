typedef unsigned char bool;


bool fn_8306B378(double param_1,float *param_2,float *param_3)

{
  float fVar1;
  
  fVar1 = (float)(param_1 * param_1);
  return (param_2[3] - param_3[3]) * (param_2[3] - param_3[3]) <= fVar1 &&
         ((param_2[2] - param_3[2]) * (param_2[2] - param_3[2]) <= fVar1 &&
         ((param_2[1] - param_3[1]) * (param_2[1] - param_3[1]) <= fVar1 &&
         (*param_2 - *param_3) * (*param_2 - *param_3) <= fVar1));
}

