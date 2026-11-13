extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern unsigned int lbl_82002AE0;


void fn_82BEEC00(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = param_1[1];
  fVar2 = *param_1;
  fVar3 = param_1[2];
  fVar4 = lbl_82002AE0 / SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  *param_1 = fVar4 * fVar2;
  param_1[1] = fVar4 * fVar1;
  param_1[2] = fVar4 * fVar3;
  return;
}

