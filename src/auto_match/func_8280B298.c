void fn_8280B298(double param_1,double param_2,double param_3,float *param_4,float *param_5)

{
  if (param_4 != param_5) {
    *param_5 = *param_4;
    param_5[4] = param_4[4];
    param_5[8] = param_4[8];
    param_5[1] = param_4[1];
    param_5[5] = param_4[5];
    param_5[9] = param_4[9];
    param_5[2] = param_4[2];
    param_5[6] = param_4[6];
    param_5[10] = param_4[10];
    param_5[3] = param_4[3];
    param_5[7] = param_4[7];
    param_5[0xb] = param_4[0xb];
  }
  param_5[0xc] = (float)((double)*param_4 * param_1 +
                        (double)(float)((double)param_4[4] * param_2 +
                                       (double)(float)((double)param_4[8] * param_3))) +
                 param_4[0xc];
  param_5[0xd] = (float)((double)param_4[9] * param_3 +
                        (double)(float)((double)param_4[1] * param_1 +
                                       (double)(float)((double)param_4[5] * param_2))) +
                 param_4[0xd];
  param_5[0xe] = (float)((double)param_4[10] * param_3 +
                        (double)(float)((double)param_4[2] * param_1 +
                                       (double)(float)((double)param_4[6] * param_2))) +
                 param_4[0xe];
  param_5[0xf] = (float)((double)param_4[0xb] * param_3 +
                        (double)(float)((double)param_4[3] * param_1 +
                                       (double)(float)((double)param_4[7] * param_2))) +
                 param_4[0xf];
  return;
}

