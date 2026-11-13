extern double sqrt(double);
#define SQRT(x) sqrt(x)


double fn_8268D0C8(float *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *param_1 * *param_1 + param_1[3] * param_1[3];
  fVar2 = param_1[1] * param_1[1] + param_1[4] * param_1[4];
  if (fVar2 >= fVar1) {
    fVar1 = fVar2;
  }
  return (double)SQRT(fVar1);
}

