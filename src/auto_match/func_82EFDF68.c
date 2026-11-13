void fn_82EFDF68(int param_1,int param_2,unsigned char *param_3,int param_4,int param_5,__int64 param_6,
                  __int64 param_7)

{
  unsigned char bVar1;
  unsigned char *pbVar2;
  short *psVar3;
  unsigned char *pbVar4;
  __int64 lVar5;
  
  if (0 < (int)param_7) {
    psVar3 = (short *)(param_5 + -2);
    do {
      if (0 < (int)param_6) {
        lVar5 = param_6;
        pbVar4 = param_3;
        do {
          pbVar2 = pbVar4 + (param_1 - (int)param_3);
          bVar1 = *pbVar4;
          pbVar4 = pbVar4 + 1;
          psVar3 = psVar3 + 1;
          *psVar3 = (unsigned short)*pbVar2 - (unsigned short)bVar1;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
      param_7 = param_7 + -1;
      param_1 = param_1 + param_2;
      param_3 = param_3 + param_4;
    } while (param_7 != 0);
  }
  return;
}

