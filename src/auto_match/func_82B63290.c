extern unsigned int lbl_8200DD28;


__int64 fn_82B63290(double param_1,unsigned short *param_2)

{
  float fVar1;
  float fVar2;
  __int64 lVar3;
  __int64 lVar4;
  __int64 lVar5;
  
  lVar3 = 0;
  lVar4 = 1;
  lVar5 = 7;
  fVar1 = -(float)((double)*param_2 * (double)lbl_8200DD28 - param_1);
  fVar1 = fVar1 * fVar1;
  do {
    param_2 = param_2 + 1;
    fVar2 = -(float)((double)*param_2 * (double)lbl_8200DD28 - param_1);
    fVar2 = fVar2 * fVar2;
    if (fVar2 < fVar1) {
      lVar3 = lVar4;
      fVar1 = fVar2;
    }
    lVar4 = lVar4 + 1;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return lVar3;
}

