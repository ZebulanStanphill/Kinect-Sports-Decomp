extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern int fn_82F65E18();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005344;
extern unsigned int lbl_8201E038;
extern unsigned int lbl_82022E6C;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_8315983C;


double fn_8287C4A0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  double dVar3;
  
  fVar2 = lbl_821AAD20;
  fVar1 = lbl_82002AE0;
  if (lbl_8201E038 <= ABS(param_1[3])) {
    dVar3 = (double)lbl_821AAD20;
    param_2[1] = lbl_821AAD20;
    param_2[2] = fVar2;
    *param_2 = fVar1;
  }
  else {
    fVar1 = *param_1;
    fVar2 = lbl_82002AE0 / SQRT(param_1[2] * param_1[2] + fVar1 * fVar1 + param_1[1] * param_1[1]);
    *param_2 = fVar1 * fVar2;
    param_2[1] = param_1[1] * fVar2;
    param_2[2] = param_1[2] * fVar2;
    dVar3 = (double)fn_82F65E18((double)param_1[3]);
    dVar3 = (double)((float)dVar3 * lbl_82005344);
    if ((double)lbl_82022E6C < dVar3) {
      return (double)(float)(dVar3 - (double)lbl_8315983C);
    }
  }
  return dVar3;
}

