typedef unsigned char bool;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82186E18;
extern unsigned int lbl_821AAD20;
extern unsigned int uRam83218b98;


bool fn_829EE690(int param_1)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  __int64 lVar4;
  
  fVar1 = lbl_82002AE0;
  if (uRam83218b98 != 0) {
    fVar1 = lbl_82186E18;
  }
  pfVar3 = (float *)(param_1 + 8);
  lVar4 = 0x14;
  fVar2 = lbl_821AAD20;
  do {
    if (fVar2 < *pfVar3) {
      fVar2 = *pfVar3;
    }
    pfVar3 = pfVar3 + 4;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  uRam83218b98 = (unsigned int)(fVar2 < fVar1);
  return fVar2 < fVar1 == 0;
}

