extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005344;
extern unsigned int lbl_821AAD20;


void fn_82CEC3F0(int param_1,float param_2,unsigned __int64 param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  
  param_4[2] = param_2;
  param_4[3] = (float)param_3;
  fVar1 = *(float *)((int)(((param_3 & 0x3fffffff) * 4 + (unsigned __int64)(unsigned int)param_2 & 0xffffffff) << 2
                          ) + param_1);
  if (fVar1 != lbl_821AAD20) {
    fVar1 = (*(float *)((int)((param_3 + (param_3 & 0x3fffffff) * 4 & 0xffffffff) << 2) + param_1) -
            *(float *)((int)param_2 * 0x14 + param_1)) / (fVar1 * lbl_82005344);
    fVar2 = SQRT(fVar1 * fVar1 + lbl_82002AE0);
    if (fVar1 < lbl_821AAD20) {
      fVar1 = fVar1 - fVar2;
    }
    else {
      fVar1 = fVar2 + fVar1;
    }
    fVar1 = lbl_82002AE0 / fVar1;
    fVar2 = lbl_82002AE0 / SQRT(fVar1 * fVar1 + lbl_82002AE0);
    *param_4 = fVar2;
    param_4[1] = fVar2 * fVar1;
    return;
  }
  param_4[1] = lbl_821AAD20;
  *param_4 = lbl_82002AE0;
  return;
}

