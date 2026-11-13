extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;


unsigned __int64 fn_8232C828(double param_1,unsigned __int64 param_2,unsigned int param_3,float *param_4)

{
  float fVar1;
  
  if (param_3 == 0) {
    return 0;
  }
  if (param_3 == 1) {
    fVar1 = (float)((double)(float)((double)*param_4 - (double)param_4[1]) * param_1 +
                   (double)param_4[1]) * param_4[6];
  }
  else if (param_3 < 3) {
    fVar1 = (float)((double)(float)((double)param_4[2] - (double)param_4[3]) * param_1 +
                   (double)param_4[3]) * param_4[6];
  }
  else {
    if (param_3 != 3) {
      return 0;
    }
    fVar1 = (float)((double)(float)((double)param_4[4] - (double)param_4[5]) * param_1 +
                   (double)param_4[5]) * param_4[6];
  }
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  if (fVar1 < (float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) {
    return 0;
  }
  return 1;
}

