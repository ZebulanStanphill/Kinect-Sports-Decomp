void fn_82BEEC68(int param_1,int param_2,int param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  __int64 lVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  __int64 lVar8;
  
  pfVar5 = (float *)(param_1 + -4);
  pfVar7 = (float *)(param_2 + 8);
  lVar4 = 4;
  do {
    pfVar6 = (float *)(param_3 + -4);
    lVar8 = 4;
    do {
      pfVar1 = pfVar6 + 0xd;
      pfVar2 = pfVar6 + 9;
      pfVar3 = pfVar6 + 5;
      pfVar6 = pfVar6 + 1;
      pfVar5 = pfVar5 + 1;
      *pfVar5 = *pfVar6 * pfVar7[-2] +
                *pfVar3 * pfVar7[-1] + *pfVar2 * *pfVar7 + *pfVar1 * pfVar7[1];
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    lVar4 = lVar4 + -1;
    pfVar7 = pfVar7 + 4;
  } while (lVar4 != 0);
  return;
}

