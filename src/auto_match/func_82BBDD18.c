extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


unsigned __int64 fn_82BBDD18(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  __int64 lVar7;
  
  fVar5 = lbl_821AAD20;
  fVar4 = lbl_82002AE0;
  pfVar6 = (float *)(param_1 + 0xc);
  lVar7 = 0x10;
  do {
    fVar1 = *pfVar6;
    if (fVar1 == fVar5) {
      pfVar6[-3] = fVar5;
      pfVar6[-2] = fVar5;
      pfVar6[-1] = fVar5;
    }
    else if (fVar1 < fVar4) {
      fVar2 = fVar4 / fVar1;
      fVar3 = fVar4;
      if (pfVar6[-3] < fVar1) {
        fVar3 = pfVar6[-3] * fVar2;
      }
      pfVar6[-3] = fVar3;
      fVar3 = fVar4;
      if (pfVar6[-2] < fVar1) {
        fVar3 = pfVar6[-2] * fVar2;
      }
      pfVar6[-2] = fVar3;
      fVar3 = fVar4;
      if (pfVar6[-1] < fVar1) {
        fVar3 = pfVar6[-1] * fVar2;
      }
      pfVar6[-1] = fVar3;
    }
    pfVar6 = pfVar6 + 4;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  return 0;
}

