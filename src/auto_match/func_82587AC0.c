extern unsigned int lbl_831C0BCC;
extern unsigned int lbl_831C0BD0;


unsigned int fn_82587AC0(unsigned char *param_1)

{
  int iVar1;
  int iVar2;
  __int64 lVar3;
  __int64 lVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  unsigned char *pbVar7;
  
  if (lbl_831C0BCC != 0) {
    lVar3 = 0;
    lVar4 = (unsigned __int64)lbl_831C0BD0 - 1;
    if (-1 < lVar4) {
      do {
        iVar1 = (int)lVar3 + (int)lVar4 >> 1;
        pbVar7 = *(unsigned char **)(iVar1 * 0xc + lbl_831C0BCC);
        uVar5 = (unsigned __int64)*pbVar7;
        uVar6 = (unsigned __int64)*param_1;
        if (uVar5 == *param_1) {
          iVar2 = (int)param_1 - (int)pbVar7;
          do {
            pbVar7 = pbVar7 + 1;
            if (uVar5 == 0) goto LAB_82587b60;
            uVar5 = (unsigned __int64)*pbVar7;
            uVar6 = (unsigned __int64)pbVar7[iVar2];
          } while (uVar5 == uVar6);
        }
        if ((__int64)(uVar5 - uVar6) < 0) {
          lVar3 = (__int64)iVar1 + 1;
        }
        else {
          if ((int)(uVar5 - uVar6) < 1) {
LAB_82587b60:
            return *(unsigned int *)(iVar1 * 0xc + lbl_831C0BCC + 4);
          }
          lVar4 = (__int64)iVar1 + -1;
        }
      } while ((int)lVar3 <= (int)lVar4);
    }
  }
  return 0;
}

