extern int fn_829E5BC0();
extern unsigned int lbl_82002C2C;
extern unsigned int lbl_821AAD20;


unsigned __int64 fn_829E5D38(unsigned __int64 param_1,unsigned int *param_2,unsigned int *param_3)

{
  float fVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  float *pfVar4;
  __int64 lVar5;
  double dVar6;
  
  if (*(int *)param_1 == 0) {
    uVar2 = 0xffffffff8000ffff;
  }
  else {
    pfVar4 = (float *)(*(int *)(*(int *)param_1 + 4) + -4);
    lVar5 = 5;
    fVar1 = lbl_821AAD20;
    do {
      pfVar4 = pfVar4 + 1;
      fVar1 = *pfVar4 + fVar1;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    dVar6 = (double)(fVar1 * lbl_82002C2C);
    uVar3 = fn_829E5BC0(dVar6,param_1);
    *(float *)((int)param_1 + 0x44) = (float)dVar6;
    uVar2 = 0;
    *param_2 = (unsigned int)LZCOUNT(uVar3 & 0xff) >> 5;
    *param_3 = 4;
  }
  return uVar2;
}

