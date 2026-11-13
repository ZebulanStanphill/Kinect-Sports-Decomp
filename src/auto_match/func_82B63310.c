extern unsigned int lbl_8200DD28;


__int64 fn_82B63310(double param_1,double param_2,unsigned short *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  __int64 lVar4;
  __int64 lVar5;
  __int64 lVar6;
  double dVar7;
  
  dVar7 = (double)lbl_8200DD28;
  lVar4 = 0;
  lVar5 = 1;
  lVar6 = 3;
  fVar1 = -(float)((double)param_3[1] * dVar7 - param_2);
  fVar2 = -(float)((double)*param_3 * dVar7 - param_1);
  fVar1 = fVar1 * fVar1 + fVar2 * fVar2;
  do {
    fVar2 = -(float)((double)param_3[2] * dVar7 - param_1);
    fVar3 = -(float)((double)param_3[3] * dVar7 - param_2);
    fVar2 = fVar3 * fVar3 + fVar2 * fVar2;
    if (fVar2 < fVar1) {
      lVar4 = lVar5;
      fVar1 = fVar2;
    }
    lVar5 = lVar5 + 1;
    lVar6 = lVar6 + -1;
    param_3 = param_3 + 2;
  } while (lVar6 != 0);
  return lVar4;
}

