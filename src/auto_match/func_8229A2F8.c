extern int fn_82299AC8();
extern int fn_82299BF0();
extern int fn_82299D40();
extern int fn_82299E90();
extern int fn_8229A230();
extern unsigned int iStack_c;
extern unsigned int ltcg_pool_0_0f;


void fn_8229A2F8(int param_1,unsigned char *param_2,unsigned int param_3,int param_4,unsigned int param_5)

{
  unsigned int uVar1;
  unsigned char *pbVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  int iStack_c;
  
  if (((param_4 != 0) && ((*(unsigned int *)(param_3 + 4) & 0x8f) == 3)) &&
     (iStack_c = (int)(__int64)*(double *)(param_3 + 8), iStack_c == *(int *)(param_1 + 8))) {
    uVar1 = (unsigned int)*param_2;
    uVar4 = uVar1;
    uVar3 = 0x6f;
    if (uVar1 == 0x6f) {
      param_5 = (int)"onCaptionReady" - (int)param_2;
      uVar4 = 0x6f;
      pbVar2 = param_2;
      do {
        pbVar2 = pbVar2 + 1;
        if (uVar4 == 0) goto LAB_8229a38c;
        param_3 = (unsigned int)pbVar2[param_5];
        uVar4 = (unsigned int)*pbVar2;
        uVar3 = param_3;
      } while (uVar4 == param_3);
    }
    if (uVar4 == uVar3) {
LAB_8229a38c:
      if (*(int *)(param_1 + 0x120c) != 2) {
        uVar4 = *(unsigned int *)(param_1 + 0x1214);
        *(unsigned int *)(param_1 + 0x122c) = 1;
        if (uVar4 == 0) {
          fn_82299AC8(param_1,param_1 + 0x20c);
          return;
        }
        if (uVar4 == 1) {
          fn_82299E90(param_1,param_1 + 0xc,param_1 + 0x20c,param_1 + 0xa0c);
          return;
        }
        if (uVar4 < 3) {
          fn_82299BF0(param_1,param_1 + 0xc,param_1 + 0x20c);
          return;
        }
        if (uVar4 != 3) {
          return;
        }
        fn_82299D40(param_1,param_1 + 0x20c,param_1 + 0xa0c);
        return;
      }
    }
    else {
      uVar3 = 0x68;
      uVar4 = uVar1;
      if (uVar1 == 0x68) {
        param_5 = (int)"hasReachedHoldPosition" - (int)param_2;
        uVar4 = 0x68;
        pbVar2 = param_2;
        do {
          pbVar2 = pbVar2 + 1;
          if (uVar4 == 0) goto LAB_8229a448;
          param_3 = (unsigned int)pbVar2[param_5];
          uVar4 = (unsigned int)*pbVar2;
          uVar3 = param_3;
        } while (uVar4 == param_3);
      }
      if (uVar4 == uVar3) {
LAB_8229a448:
        uVar5 = 4;
        if (*(float *)(param_1 + 0x121c) <= ltcg_pool_0_0f) {
          uVar5 = 0;
        }
        *(unsigned int *)(param_1 + 0x120c) = uVar5;
        return;
      }
      uVar3 = 0x68;
      uVar4 = uVar1;
      if (uVar1 == 0x68) {
        uVar4 = 0x68;
        uVar3 = param_5;
        pbVar2 = param_2;
        do {
          pbVar2 = pbVar2 + 1;
          param_5 = uVar3;
          if (uVar4 == 0) goto LAB_8229a4b4;
          uVar3 = (unsigned int)pbVar2[(int)"hasReachedEnd" - (int)param_2];
          uVar4 = (unsigned int)*pbVar2;
          param_5 = uVar3;
        } while (uVar4 == uVar3);
      }
      if (uVar4 != uVar3) {
        return;
      }
    }
LAB_8229a4b4:
    fn_8229A230(param_1,param_2,param_3,uVar1,param_5);
  }
  return;
}

