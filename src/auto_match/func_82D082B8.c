typedef unsigned char bool;
extern unsigned int lbl_82002AE0;


bool fn_82D082B8(double param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = ABS(*param_2);
  if (ABS(*param_2) - ABS(param_2[1]) < 0.0) {
    fVar1 = ABS(param_2[1]);
  }
  fVar2 = ABS(param_2[2]);
  if (ABS(param_2[2]) - fVar1 < 0.0) {
    fVar2 = fVar1;
  }
  return ABS((double)(fVar2 - lbl_82002AE0)) < param_1;
}

