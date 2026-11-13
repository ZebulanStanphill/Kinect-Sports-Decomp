extern int fn_829B2110();
extern unsigned int lbl_8202706C;


unsigned __int64 fn_829B2420(int param_1,unsigned int *param_2)

{
  unsigned __int64 uVar1;
  float fVar2;
  unsigned __int64 uVar3;
  float *pfVar4;
  unsigned __int64 uVar5;
  __int64 lVar6;
  
  uVar3 = fn_829B2110(param_1,param_2 + 2);
  fVar2 = lbl_8202706C;
  if (-1 < (int)uVar3) {
    pfVar4 = (float *)(param_1 + -4);
    uVar5 = ((unsigned __int64)*param_2 & 0xffff) << 0x10 | (unsigned __int64)(*param_2 >> 0x10);
    lVar6 = 8;
    do {
      uVar1 = uVar5 & 0xf;
      uVar5 = uVar5 >> 4;
      pfVar4 = pfVar4 + 4;
      *pfVar4 = (float)uVar1 * fVar2;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    pfVar4 = (float *)(param_1 + 0x7c);
    uVar5 = ((unsigned __int64)param_2[1] & 0xffff) << 0x10 | (unsigned __int64)(param_2[1] >> 0x10);
    lVar6 = 8;
    do {
      uVar1 = uVar5 & 0xf;
      uVar5 = uVar5 >> 4;
      pfVar4 = pfVar4 + 4;
      *pfVar4 = (float)uVar1 * fVar2;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    uVar3 = 0;
  }
  return uVar3;
}

