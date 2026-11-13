extern unsigned int lbl_82195518;
extern unsigned int lbl_82195590;
extern float lbl_821955A0;


void fn_8257FB80(int param_1,int param_2,float *param_3)

{
  double dVar1;
  
  dVar1 = (double)(__int64)lbl_82195518;
  if ((((float)(((double)(*param_3 * lbl_82195590) - (double)(__int64)(*param_3 * lbl_82195590)) *
               lbl_821955A0) == (float)(-dVar1 * lbl_821955A0)) &&
      ((float)(((double)(param_3[1] * lbl_82195590) - (double)(__int64)(param_3[1] * lbl_82195590))
              * lbl_821955A0) == (float)(-dVar1 * lbl_821955A0))) &&
     ((float)(((double)(param_3[2] * lbl_82195590) - (double)(__int64)(param_3[2] * lbl_82195590))
             * lbl_821955A0) == (float)(-dVar1 * lbl_821955A0))) {
    *(unsigned int *)(param_2 * 0x30 + param_1 + 0x24) = 0;
    return;
  }
  param_1 = param_2 * 0x30 + param_1;
  *(unsigned int *)(param_1 + 0x24) = 1;
  *(float *)(param_1 + 0x18) = *param_3;
  *(float *)(param_1 + 0x1c) = param_3[1];
  *(float *)(param_1 + 0x20) = param_3[2];
  return;
}

