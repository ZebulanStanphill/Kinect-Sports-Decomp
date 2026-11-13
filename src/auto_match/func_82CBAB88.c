void fn_82CBAB88(int param_1,int param_2,int param_3,int param_4,short *param_5,unsigned int param_6,
                  int param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  __int64 lVar4;
  __int64 lVar5;
  
  lVar4 = 8;
  do {
    iVar3 = 0;
    lVar5 = 2;
    do {
      iVar1 = param_1 + iVar3;
      iVar1 = (int)((unsigned int)*(unsigned char *)(iVar1 + 1) * (int)param_5[2] +
                    (unsigned int)*(unsigned char *)(param_1 + iVar3) * (int)param_5[1] +
                    (unsigned int)*(unsigned char *)(iVar1 + 2) * (int)param_5[3] +
                    (int)*param_5 * (unsigned int)*(unsigned char *)(iVar1 + -1) + param_7) >> (param_6 & 0x3f);
      if (iVar1 < 0) {
        iVar1 = 0;
      }
      else if (0xff < iVar1) {
        iVar1 = 0xff;
      }
      iVar2 = param_1 + iVar3;
      *(char *)(param_3 + iVar3) = (char)iVar1;
      iVar1 = (int)((unsigned int)*(unsigned char *)(iVar2 + 2) * (int)param_5[2] +
                    (unsigned int)*(unsigned char *)(iVar2 + 1) * (int)param_5[1] +
                    (unsigned int)*(unsigned char *)(iVar2 + 3) * (int)param_5[3] +
                    (int)*param_5 * (unsigned int)*(unsigned char *)(param_1 + iVar3) + param_7) >> (param_6 & 0x3f);
      if (iVar1 < 0) {
        iVar1 = 0;
      }
      else if (0xff < iVar1) {
        iVar1 = 0xff;
      }
      iVar2 = param_1 + iVar3;
      *(char *)(param_3 + iVar3 + 1) = (char)iVar1;
      iVar1 = (int)((unsigned int)*(unsigned char *)(iVar2 + 3) * (int)param_5[2] +
                    (unsigned int)*(unsigned char *)(iVar2 + 2) * (int)param_5[1] +
                    (unsigned int)*(unsigned char *)(iVar2 + 4) * (int)param_5[3] +
                    (int)*param_5 * (unsigned int)*(unsigned char *)(iVar2 + 1) + param_7) >> (param_6 & 0x3f);
      if (iVar1 < 0) {
        iVar1 = 0;
      }
      else if (0xff < iVar1) {
        iVar1 = 0xff;
      }
      iVar2 = param_1 + 2 + iVar3;
      *(char *)(param_3 + iVar3 + 2) = (char)iVar1;
      iVar1 = (int)((unsigned int)*(unsigned char *)(iVar2 + 2) * (int)param_5[2] +
                    (unsigned int)*(unsigned char *)(iVar2 + 1) * (int)param_5[1] +
                    (unsigned int)*(unsigned char *)(iVar2 + 3) * (int)param_5[3] +
                    (int)*param_5 * (unsigned int)*(unsigned char *)(param_1 + 2 + iVar3) + param_7) >>
              (param_6 & 0x3f);
      if (iVar1 < 0) {
        iVar1 = 0;
      }
      else if (0xff < iVar1) {
        iVar1 = 0xff;
      }
      *(char *)(param_3 + 3 + iVar3) = (char)iVar1;
      iVar3 = iVar3 + 4;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    lVar4 = lVar4 + -1;
    param_1 = param_1 + param_2;
    param_3 = param_3 + param_4;
  } while (lVar4 != 0);
  return;
}

