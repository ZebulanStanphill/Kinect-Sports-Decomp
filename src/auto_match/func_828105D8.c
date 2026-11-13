double fn_828105D8(float *param_1,float *param_2,float *param_3)

{
  return (double)((param_3[2] * param_2[1] - param_3[1] * param_2[2]) * *param_1 +
                 (*param_3 * param_2[2] - *param_2 * param_3[2]) * param_1[1] +
                 (*param_2 * param_3[1] - *param_3 * param_2[1]) * param_1[2]);
}

