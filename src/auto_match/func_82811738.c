typedef unsigned char bool;


bool fn_82811738(double param_1,float *param_2,float *param_3)

{
  return (param_2[1] - param_3[1]) * (param_2[1] - param_3[1]) <= (float)(param_1 * param_1) &&
         (*param_2 - *param_3) * (*param_2 - *param_3) <= (float)(param_1 * param_1);
}

