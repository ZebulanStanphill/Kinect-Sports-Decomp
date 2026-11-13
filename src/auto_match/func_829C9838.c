extern unsigned int lbl_8201435C;
extern unsigned int lbl_82057270;


double fn_829C9838(float *param_1,short param_2,short param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)(__int64)param_2 - lbl_82057270;
  fVar2 = (float)(__int64)param_3 - lbl_8201435C;
  return (double)((param_1[5] * fVar2 +
                   (param_1[1] * fVar2 + param_1[3] * fVar1) * fVar2 + param_1[2] * fVar1 * fVar1 +
                  param_1[8]) * fVar2 +
                  ((*param_1 * fVar1 + param_1[4]) * fVar1 + param_1[6] * fVar2 + param_1[7]) *
                  fVar1 + param_1[9]);
}

