extern unsigned int lbl_820520F4;


__int64 fn_829AB1D8(int param_1,unsigned int param_2,unsigned int param_3)

{
  unsigned char *pbVar1;
  unsigned char *pbVar2;
  unsigned char *pbVar3;
  
  if (param_3 < 9) {
    if (param_3 == 0) {
      return 0;
    }
  }
  else {
    param_3 = 8;
  }
  if (7 < param_2) {
    return 0;
  }
  if (8 < param_2 + param_3) {
    param_3 = 8 - param_2;
  }
  pbVar3 = (unsigned char *)(param_1 + param_2);
  pbVar2 = &lbl_820520F4 + param_2;
  if (param_3 != 0) {
    pbVar1 = pbVar3 + param_3;
    do {
      if ((unsigned __int64)*pbVar3 - (unsigned __int64)*pbVar2 != 0) {
        return (unsigned __int64)*pbVar3 - (unsigned __int64)*pbVar2;
      }
      pbVar3 = pbVar3 + 1;
      pbVar2 = pbVar2 + 1;
    } while (pbVar3 != pbVar1);
    return 0;
  }
  return 0;
}

