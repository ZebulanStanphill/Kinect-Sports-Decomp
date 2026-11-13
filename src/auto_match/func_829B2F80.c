extern unsigned int *auStack_110;
extern int fn_829B2858();


unsigned int fn_829B2F80(unsigned __int64 param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  unsigned int uVar4;
  float *pfVar5;
  float *pfVar6;
  __int64 lVar7;
  unsigned char auStack_110 [8];
  float afStack_108 [62];
  
  pfVar5 = (float *)(param_2 + 0xc);
  pfVar6 = afStack_108;
  lVar7 = 0x10;
  do {
    fVar1 = *pfVar5;
    fVar2 = pfVar5[-2];
    fVar3 = pfVar5[-1];
    pfVar6[-2] = *(float *)((param_2 - (int)afStack_108) + (int)pfVar6) * fVar1;
    pfVar6[-1] = fVar2 * fVar1;
    pfVar5 = pfVar5 + 4;
    *pfVar6 = fVar1 * fVar3;
    pfVar6[1] = fVar1;
    pfVar6 = pfVar6 + 4;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  uVar4 = fn_829B2858(param_1,auStack_110);
  return (int)uVar4 >> 0x1f & uVar4;
}

