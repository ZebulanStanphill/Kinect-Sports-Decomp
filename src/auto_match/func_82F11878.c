short fn_82F11878(unsigned __int64 param_1,unsigned short *param_2,unsigned short *param_3,int *param_4,
                   __int64 param_5)

{
  unsigned short uVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  
  uVar1 = *param_3;
  sVar2 = 2;
  sVar4 = 0;
  param_2[1] = 0;
  *param_2 = uVar1;
  if (1 < (int)param_5) {
    param_5 = param_5 + -1;
    do {
      param_4 = param_4 + 1;
      if (param_3[*param_4] == 0) {
        sVar4 = sVar4 + 1;
      }
      else {
        sVar3 = sVar2 + 1;
        param_2[sVar2] = param_3[*param_4];
        sVar2 = sVar2 + 2;
        param_2[sVar3] = sVar4;
        sVar4 = 0;
      }
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  return sVar2;
}

