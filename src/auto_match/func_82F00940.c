void fn_82F00940(int param_1,__int64 param_2,__int64 param_3)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned char *pbVar4;
  unsigned char *pbVar5;
  int iVar6;
  __int64 lVar7;
  
  pbVar5 = *(unsigned char **)(param_1 + 0x1a90);
  pbVar4 = *(unsigned char **)(param_1 + 0x5308);
  iVar2 = (int)param_2 * 2;
  iVar6 = 0;
  if (0 < (int)param_3) {
    do {
      if (0 < (int)param_2) {
        lVar7 = param_2;
        do {
          uVar3 = ((((((unsigned int)pbVar5[iVar2] - (unsigned int)pbVar4[iVar2]) - (unsigned int)pbVar4[iVar2 + 1]) +
                    (unsigned int)pbVar5[iVar2 + 1]) - (unsigned int)*pbVar4) - (unsigned int)pbVar4[1]) + (unsigned int)*pbVar5 +
                  (unsigned int)pbVar5[1];
          uVar1 = (int)uVar3 >> 0x1f;
          if ((int)((uVar3 ^ uVar1) - uVar1) < 8) {
            *(unsigned char *)(*(int *)(param_1 + 0x52e8) + iVar6) = 1;
          }
          else {
            *(unsigned char *)(*(int *)(param_1 + 0x52e8) + iVar6) = 0;
          }
          pbVar5 = pbVar5 + 2;
          pbVar4 = pbVar4 + 2;
          iVar6 = iVar6 + 1;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      param_3 = param_3 + -1;
      pbVar5 = pbVar5 + iVar2;
      pbVar4 = pbVar4 + iVar2;
    } while (param_3 != 0);
  }
  return;
}

