#define true 1


unsigned int fn_82536D88(unsigned char *param_1,unsigned char *param_2,unsigned int param_3,unsigned int param_4)

{
  unsigned int uVar1;
  unsigned char *pbVar2;
  __int64 lVar3;
  unsigned char *pbVar4;
  unsigned int uVar5;
  unsigned char *pbVar6;
  
  uVar1 = *(unsigned int *)(param_1 + 0x10);
  if (param_4 == 0) {
    if (param_3 < uVar1) {
      uVar1 = param_3;
    }
  }
  else {
    if (param_4 <= uVar1) {
      uVar5 = uVar1 - param_4;
      if (param_3 < uVar1 - param_4) {
        uVar5 = param_3;
      }
      uVar1 = *(unsigned int *)(param_1 + 0x14);
      pbVar2 = param_1;
      if (0xf < uVar1) {
        pbVar2 = *(unsigned char **)param_1;
      }
      pbVar2 = pbVar2 + uVar5;
      do {
        if (*pbVar2 == *param_2) {
          lVar3 = 0;
          if (param_4 != 0) {
            pbVar4 = param_2;
            pbVar6 = pbVar2;
            do {
              lVar3 = (unsigned __int64)*pbVar6 - (unsigned __int64)*pbVar4;
              if (lVar3 != 0) break;
              pbVar6 = pbVar6 + 1;
              pbVar4 = pbVar4 + 1;
            } while (pbVar6 != pbVar2 + param_4);
          }
          if ((int)lVar3 == 0) {
            if (0xf < uVar1) {
              param_1 = *(unsigned char **)param_1;
            }
            return (int)pbVar2 - (int)param_1;
          }
        }
        pbVar4 = param_1;
        if (0xf < uVar1) {
          pbVar4 = *(unsigned char **)param_1;
        }
        if (pbVar2 == pbVar4) break;
        pbVar2 = pbVar2 + -1;
      } while( true );
    }
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

