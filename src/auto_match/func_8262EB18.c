extern float lbl_8218E8E8;
extern unsigned int lbl_8326F968;
extern unsigned int lbl_8326F96C;


void fn_8262EB18(double param_1,float *param_2)

{
  float fVar1;
  unsigned char bVar2;
  
  param_2[2] = (float)param_1;
  if ((lbl_8326F968 == 0) || (bVar2 = 1, lbl_8326F96C != 0)) {
    bVar2 = 0;
  }
  fVar1 = (float)(__int64)(int)((-(unsigned int)bVar2 & 0xfffffff6) + 0x3c) * lbl_8218E8E8 *
          (param_2[1] - *param_2);
  if (param_1 <= (double)fVar1) {
    return;
  }
  param_2[2] = fVar1;
  return;
}

