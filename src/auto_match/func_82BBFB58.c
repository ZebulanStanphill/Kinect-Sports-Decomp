extern unsigned int *auStack_120;
extern int fn_82BBE320();
extern int fn_82BBF428();


unsigned int fn_82BBFB58(__int64 param_1,int param_2,unsigned __int64 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  unsigned int uVar4;
  float *pfVar5;
  float *pfVar6;
  __int64 lVar7;
  unsigned char auStack_120 [8];
  float afStack_118 [60];
  
  pfVar5 = (float *)(param_2 + 0xc);
  pfVar6 = afStack_118;
  lVar7 = 0x10;
  do {
    fVar1 = *pfVar5;
    fVar2 = pfVar5[-2];
    fVar3 = pfVar5[-1];
    pfVar6[-2] = *(float *)((param_2 - (int)afStack_118) + (int)pfVar6) * fVar1;
    pfVar6[-1] = fVar2 * fVar1;
    pfVar5 = pfVar5 + 4;
    *pfVar6 = fVar1 * fVar3;
    pfVar6[1] = fVar1;
    pfVar6 = pfVar6 + 4;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  uVar4 = fn_82BBE320(param_1 + 8,auStack_120,0,param_3);
  if (-1 < (int)uVar4) {
    uVar4 = fn_82BBF428(param_1,auStack_120,param_3);
  }
  return (int)uVar4 >> 0x1f & uVar4;
}

