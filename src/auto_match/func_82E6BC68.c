void fn_82E6BC68(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  
  iVar6 = 0;
  if (3 < param_5) {
    pfVar5 = (float *)(param_1 + -0x10);
    pfVar2 = (float *)(param_2 + 0xc);
    pfVar3 = (float *)(param_4 + 8);
    pfVar4 = (float *)(param_3 + 4);
    do {
      iVar6 = iVar6 + 4;
      pfVar5 = pfVar5 + 4;
      *pfVar5 = pfVar4[-1] + pfVar3[-2];
      pfVar2[-3] = pfVar4[-1] - pfVar3[-2];
      *(float *)((param_1 - param_3) + (int)pfVar4) =
           *(float *)((param_4 - param_3) + (int)pfVar4) + *pfVar4;
      *(float *)((param_2 - param_3) + (int)pfVar4) =
           *pfVar4 - *(float *)((param_4 - param_3) + (int)pfVar4);
      *(float *)((param_1 - param_4) + (int)pfVar3) = pfVar4[1] + *pfVar3;
      *(float *)((param_2 - param_4) + (int)pfVar3) = pfVar4[1] - *pfVar3;
      *(float *)((int)pfVar2 + (param_1 - param_2)) = pfVar4[2] + pfVar3[1];
      pfVar1 = pfVar4 + 2;
      pfVar4 = pfVar4 + 4;
      *pfVar2 = *pfVar1 - pfVar3[1];
      pfVar3 = pfVar3 + 4;
      pfVar2 = pfVar2 + 4;
    } while (iVar6 < param_5 + -3);
  }
  if (iVar6 < param_5) {
    param_5 = param_5 - iVar6;
    pfVar5 = (float *)(iVar6 * 4 + param_3);
    do {
      *(float *)((param_1 - param_3) + (int)pfVar5) =
           *pfVar5 + *(float *)((param_4 - param_3) + (int)pfVar5);
      *(float *)((param_2 - param_3) + (int)pfVar5) =
           *pfVar5 - *(float *)((param_4 - param_3) + (int)pfVar5);
      pfVar5 = pfVar5 + 1;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  return;
}

