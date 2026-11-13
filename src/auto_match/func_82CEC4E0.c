extern double sqrt(double);
#define SQRT(x) sqrt(x)


double fn_82CEC4E0(int param_1)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  __int64 lVar4;
  
  iVar3 = 0;
  pfVar2 = (float *)(param_1 + 0x20);
  lVar4 = 3;
  fVar1 = 0.0f;
  do {
    if (iVar3 != 0) {
      fVar1 = pfVar2[-8] * pfVar2[-8] + fVar1;
    }
    if (iVar3 != 1) {
      fVar1 = pfVar2[-4] * pfVar2[-4] + fVar1;
    }
    if (iVar3 != 2) {
      fVar1 = *pfVar2 * *pfVar2 + fVar1;
    }
    iVar3 = iVar3 + 1;
    pfVar2 = pfVar2 + 1;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  return (double)SQRT(fVar1);
}

