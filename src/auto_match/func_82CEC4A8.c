extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern unsigned int lbl_821AAD20;


double fn_82CEC4A8(int param_1)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  __int64 lVar5;
  
  pfVar4 = (float *)(param_1 + 0x1c);
  lVar5 = 3;
  fVar1 = lbl_821AAD20;
  do {
    pfVar2 = pfVar4 + -7;
    pfVar3 = pfVar4 + -3;
    pfVar4 = pfVar4 + 1;
    fVar1 = *pfVar4 * *pfVar4 + *pfVar3 * *pfVar3 + *pfVar2 * *pfVar2 + fVar1;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return (double)SQRT(fVar1);
}

