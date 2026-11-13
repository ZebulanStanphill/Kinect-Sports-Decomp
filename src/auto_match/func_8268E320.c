#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))


int * fn_8268E320(int *param_1,int *param_2)

{
  unsigned __int64 uVar1;
  int iVar2;
  int *piVar3;
  unsigned __int64 uVar4;
  
  param_2[7] = 0;
  param_2[6] = 0;
  param_2[5] = 0;
  if ((int *)*param_1 == (int *)0x0) {
    *param_1 = (int)param_2;
  }
  else {
    uVar4 = ZEXT48(param_2);
    piVar3 = (int *)*param_1;
    do {
      param_1 = piVar3;
      if (param_1 == param_2) {
        return param_1;
      }
      uVar1 = uVar4 >> 0x1f;
      uVar4 = (uVar4 & 0x7fffffff) << 1;
      iVar2 = (int)uVar1 + 6;
      piVar3 = (int *)param_1[iVar2];
    } while ((int *)param_1[iVar2] != (int *)0x0);
    param_1[iVar2] = (int)param_2;
  }
  param_2[5] = (int)param_1;
  return (int *)0x0;
}

