extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;


void fn_82563D30(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  
  fVar1 = lbl_821CA460;
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  *param_1 = (*param_3 - *param_2) * ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460)
             + *param_2;
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  param_1[1] = (param_3[1] - param_2[1]) * ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - fVar1) +
               param_2[1];
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  param_1[2] = (param_3[2] - param_2[2]) * ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - fVar1) +
               param_2[2];
  return;
}

