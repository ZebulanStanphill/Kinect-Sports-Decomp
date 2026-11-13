void fn_82F28610(int param_1,int param_2,unsigned char *param_3,int param_4,int param_5,int param_6,
                  __int64 param_7,__int64 param_8)

{
  unsigned char *pbVar1;
  __int64 lVar2;
  
  if (0 < (int)param_8) {
    do {
      if (0 < (int)param_7) {
        lVar2 = param_7;
        pbVar1 = param_3;
        do {
          pbVar1[param_5 - (int)param_3] =
               (unsigned char)((int)((unsigned int)pbVar1[param_1 - (int)param_3] + (unsigned int)*pbVar1 + 1) >> 1);
          pbVar1 = pbVar1 + 1;
          lVar2 = lVar2 + -1;
        } while (lVar2 != 0);
      }
      param_8 = param_8 + -1;
      param_1 = param_1 + param_2;
      param_3 = param_3 + param_4;
      param_5 = param_5 + param_6;
    } while (param_8 != 0);
  }
  return;
}

