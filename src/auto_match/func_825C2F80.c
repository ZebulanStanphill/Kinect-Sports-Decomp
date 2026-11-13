extern unsigned int lbl_82193E2C;
extern float lbl_82195590;
extern float lbl_821955A0;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;


double fn_825C2F80(double param_1,double param_2)

{
  float fVar1;
  
  if (param_2 < param_1) {
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    fVar1 = (float)((double)(float)(param_2 - (double)(float)(param_1 - (double)lbl_82193E2C)) *
                    (double)((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) +
                   (double)(float)(param_1 - (double)lbl_82193E2C)) * lbl_82195590;
    return (double)(float)(((double)fVar1 - (double)(__int64)fVar1) * lbl_821955A0);
  }
  if (param_2 <= param_1) {
    return param_1;
  }
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  return (double)(float)((double)(float)(param_2 - param_1) *
                         (double)((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) +
                        param_1);
}

