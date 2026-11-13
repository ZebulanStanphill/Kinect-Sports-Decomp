extern int fn_82F655D8();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82155200;


void fn_82FC9D50(double param_1,unsigned int *param_2)

{
  __int64 lVar1;
  float *pfVar2;
  double dVar3;
  double dVar4;
  unsigned __int64 uVar5;
  double dVar6;
  
  pfVar2 = (float *)(param_2 + 0x2b);
  lVar1 = 8;
  dVar6 = (double)lbl_82002AE0;
  dVar4 = (double)(float)(dVar6 / (double)(float)((double)*param_2 * param_1));
  uVar5 = lbl_82155200;
  do {
    dVar3 = (double)fn_82F655D8(uVar5,(double)(float)((double)(unsigned int)pfVar2[-0xf] * dVar4));
    lVar1 = lVar1 + -1;
    pfVar2[-7] = (float)(dVar6 - (double)(float)dVar3);
    pfVar2 = pfVar2 + 1;
    *pfVar2 = (float)dVar3;
  } while (lVar1 != 0);
  return;
}

