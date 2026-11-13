extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern unsigned int lbl_821AAD20;


double fn_829DD910(double param_1,unsigned int *param_2)

{
  float fVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  int iVar4;
  
  uVar3 = (unsigned __int64)*param_2;
  iVar4 = 0;
  fVar1 = lbl_821AAD20;
  if (uVar3 != 0) {
    do {
      uVar2 = param_2[0x97] + iVar4;
      iVar4 = iVar4 + 1;
      fVar1 = (float)((double)(float)param_2[uVar2 % 0x96 + 1] - param_1) *
              (float)((double)(float)param_2[uVar2 % 0x96 + 1] - param_1) + fVar1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return (double)SQRT(fVar1 / (float)*param_2);
}

