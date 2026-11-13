void fn_82CBA950(int param_1,int param_2,int param_3,int param_4,short *param_5,unsigned int param_6,
                  int param_7)

{
  int iVar1;
  int iVar2;
  unsigned char *pbVar3;
  int iVar4;
  int iVar5;
  __int64 lVar6;
  int iVar7;
  __int64 lVar8;
  
  iVar1 = param_2 * 3;
  iVar7 = param_2 * 2;
  param_1 = param_1 - param_2;
  lVar6 = 8;
  do {
    iVar5 = 0;
    lVar8 = 2;
    do {
      iVar2 = param_1 + iVar5;
      iVar2 = (int)((unsigned int)*(unsigned char *)(iVar7 + iVar2) * (int)param_5[2] +
                    (unsigned int)*(unsigned char *)(iVar1 + iVar2) * (int)param_5[3] +
                    (unsigned int)*(unsigned char *)(iVar2 + param_2) * (int)param_5[1] +
                    (int)*param_5 * (unsigned int)*(unsigned char *)(param_1 + iVar5) + param_7) >> (param_6 & 0x3f);
      if (iVar2 < 0) {
        iVar2 = 0;
      }
      else if (0xff < iVar2) {
        iVar2 = 0xff;
      }
      iVar4 = param_1 + iVar5 + 1;
      *(char *)(param_3 + iVar5) = (char)iVar2;
      iVar2 = (int)((unsigned int)*(unsigned char *)(iVar7 + iVar4) * (int)param_5[2] +
                    (unsigned int)*(unsigned char *)(iVar1 + iVar4) * (int)param_5[3] +
                    (unsigned int)*(unsigned char *)(iVar4 + param_2) * (int)param_5[1] +
                    (int)*param_5 * (unsigned int)*(unsigned char *)(param_1 + iVar5 + 1) + param_7) >>
              (param_6 & 0x3f);
      if (iVar2 < 0) {
        iVar2 = 0;
      }
      else if (0xff < iVar2) {
        iVar2 = 0xff;
      }
      pbVar3 = (unsigned char *)(param_1 + iVar5 + 2);
      *(char *)(param_3 + iVar5 + 1) = (char)iVar2;
      iVar2 = (int)((unsigned int)pbVar3[iVar7] * (int)param_5[2] + (unsigned int)pbVar3[iVar1] * (int)param_5[3] +
                    (unsigned int)pbVar3[param_2] * (int)param_5[1] + (int)*param_5 * (unsigned int)*pbVar3 +
                   param_7) >> (param_6 & 0x3f);
      if (iVar2 < 0) {
        iVar2 = 0;
      }
      else if (0xff < iVar2) {
        iVar2 = 0xff;
      }
      iVar4 = param_1 + 3 + iVar5;
      *(char *)(param_3 + iVar5 + 2) = (char)iVar2;
      iVar2 = (int)((unsigned int)*(unsigned char *)(iVar7 + iVar4) * (int)param_5[2] +
                    (unsigned int)*(unsigned char *)(iVar1 + iVar4) * (int)param_5[3] +
                    (unsigned int)*(unsigned char *)(iVar4 + param_2) * (int)param_5[1] +
                    (int)*param_5 * (unsigned int)*(unsigned char *)(param_1 + 3 + iVar5) + param_7) >>
              (param_6 & 0x3f);
      if (iVar2 < 0) {
        iVar2 = 0;
      }
      else if (0xff < iVar2) {
        iVar2 = 0xff;
      }
      *(char *)(param_3 + 3 + iVar5) = (char)iVar2;
      iVar5 = iVar5 + 4;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    lVar6 = lVar6 + -1;
    param_1 = param_1 + param_2;
    param_3 = param_3 + param_4;
  } while (lVar6 != 0);
  return;
}

