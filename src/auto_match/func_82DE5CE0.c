void fn_82DE5CE0(double param_1,double param_2,int param_3,unsigned __int64 param_4,unsigned __int64 param_5,
                  float *param_6,float *param_7)

{
  float fVar1;
  
  *param_6 = *(float *)(param_3 + 0x68) / *(float *)(param_3 + 100);
  param_6[1] = *(float *)(param_3 + 0x6c) / *(float *)(param_3 + 100);
  param_6[2] = *(float *)(param_3 + 0x70) / *(float *)(param_3 + 100);
  *param_7 = (float)((double)(*(float *)(param_3 + 0x78) + *(float *)(param_3 + 0x7c)) * param_2);
  param_7[5] = (float)((double)(*(float *)(param_3 + 0x74) + *(float *)(param_3 + 0x7c)) * param_2);
  param_7[10] = (float)((double)(*(float *)(param_3 + 0x74) + *(float *)(param_3 + 0x78)) * param_2)
  ;
  fVar1 = -(float)((double)*(float *)(param_3 + 0x80) * param_2);
  param_7[1] = fVar1;
  param_7[4] = fVar1;
  fVar1 = -(float)((double)*(float *)(param_3 + 0x84) * param_2);
  param_7[6] = fVar1;
  param_7[9] = fVar1;
  fVar1 = -(float)((double)*(float *)(param_3 + 0x88) * param_2);
  param_7[8] = fVar1;
  param_7[2] = fVar1;
  *param_7 = -(float)((double)(param_6[1] * param_6[1] + param_6[2] * param_6[2]) * param_1 -
                     (double)*param_7);
  param_7[5] = -(float)((double)(*param_6 * *param_6 + param_6[2] * param_6[2]) * param_1 -
                       (double)param_7[5]);
  param_7[10] = -(float)((double)(*param_6 * *param_6 + param_6[1] * param_6[1]) * param_1 -
                        (double)param_7[10]);
  fVar1 = (float)((double)(*param_6 * param_6[1]) * param_1 + (double)param_7[1]);
  param_7[1] = fVar1;
  param_7[4] = fVar1;
  fVar1 = (float)((double)(param_6[2] * param_6[1]) * param_1 + (double)param_7[6]);
  param_7[6] = fVar1;
  param_7[9] = fVar1;
  fVar1 = (float)((double)(param_6[2] * *param_6) * param_1 + (double)param_7[8]);
  param_7[8] = fVar1;
  param_7[2] = fVar1;
  return;
}

