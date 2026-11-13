extern unsigned int lbl_8205751C;
extern unsigned int lbl_821AAD20;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double fn_829DCEC0(int *param_1,int param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  float *pfVar5;
  __int64 lVar6;
  
  pfVar5 = (float *)(param_3 * 0x7d4 + *param_1);
  iVar4 = (param_2 * 0x7d4 + *param_1) - (int)pfVar5;
  lVar6 = 500;
  fVar2 = lbl_821AAD20;
  do {
    pfVar3 = (float *)(iVar4 + (int)pfVar5);
    fVar1 = *pfVar5;
    pfVar5 = pfVar5 + 1;
    fVar2 = ABS(*pfVar3 - fVar1) + fVar2;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  return (double)(fVar2 * lbl_8205751C);
}

