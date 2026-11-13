__int64 fn_82526AF8(__int64 param_1,int param_2,unsigned char *param_3)

{
  int iVar1;
  __int64 lVar2;
  __int64 lVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned char *pbVar6;
  unsigned __int64 uVar7;
  
  uVar7 = (unsigned __int64)*param_3;
  if (uVar7 != 0) {
    param_1 = param_1 + -1;
    lVar3 = 0;
    if (-1 < param_1) {
      do {
        iVar1 = (int)lVar3 + (int)param_1 >> 1;
        lVar2 = (__int64)iVar1;
        pbVar6 = *(unsigned char **)(iVar1 * 4 + param_2);
        uVar4 = (unsigned __int64)*pbVar6;
        uVar5 = uVar7;
        if (uVar4 == uVar7) {
          iVar1 = (int)param_3 - (int)pbVar6;
          do {
            pbVar6 = pbVar6 + 1;
            if (uVar4 == 0) {
              return lVar2;
            }
            uVar4 = (unsigned __int64)*pbVar6;
            uVar5 = (unsigned __int64)pbVar6[iVar1];
          } while (uVar4 == uVar5);
        }
        if ((__int64)(uVar4 - uVar5) < 0) {
          lVar3 = lVar2 + 1;
        }
        else {
          if ((int)(uVar4 - uVar5) < 1) {
            return lVar2;
          }
          param_1 = lVar2 + -1;
        }
      } while ((int)lVar3 <= (int)param_1);
    }
  }
  return -1;
}

