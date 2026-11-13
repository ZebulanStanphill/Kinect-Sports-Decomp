extern int fn_82C4E5E8();


void fn_82C57AF0(unsigned int *param_1,unsigned int param_2,unsigned __int64 *param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  
  uVar2 = param_2 & 1;
  if (uVar2 != 0) {
    uVar3 = *param_3;
    uVar1 = *(unsigned int *)(param_3 + 1);
    *param_3 = uVar3 << 1;
    *(int *)(param_3 + 1) = (int)((unsigned __int64)uVar1 - 1);
    if ((__int64)((unsigned __int64)uVar1 - 1) < 0) {
      fn_82C4E5E8(param_3);
    }
    *param_1 = (unsigned int)((uVar3 >> 0x3f) << 0x1f) | *param_1 & 0x7fffffff;
    param_1 = param_1 + 6;
  }
  if ((int)uVar2 < (int)param_2) {
    lVar4 = (unsigned __int64)((param_2 - uVar2) - 1 >> 1) + 1;
    do {
      uVar3 = *param_3;
      uVar2 = *(unsigned int *)(param_3 + 1);
      *param_3 = uVar3 << 1;
      *(int *)(param_3 + 1) = (int)((unsigned __int64)uVar2 - 1);
      if ((__int64)((unsigned __int64)uVar2 - 1) < 0) {
        fn_82C4E5E8(param_3);
      }
      if ((__int64)uVar3 < 0) {
        uVar3 = *param_3;
        uVar2 = *(unsigned int *)(param_3 + 1);
        *param_3 = uVar3 << 1;
        *(int *)(param_3 + 1) = (int)((unsigned __int64)uVar2 - 1);
        if ((__int64)((unsigned __int64)uVar2 - 1) < 0) {
          fn_82C4E5E8(param_3);
        }
        if ((__int64)uVar3 < 0) {
          uVar2 = *param_1 | 0x80000000;
          uVar1 = param_1[6] | 0x80000000;
        }
        else {
          uVar3 = *param_3;
          uVar2 = *(unsigned int *)(param_3 + 1);
          *param_3 = uVar3 << 1;
          *(int *)(param_3 + 1) = (int)((unsigned __int64)uVar2 - 1);
          if ((__int64)((unsigned __int64)uVar2 - 1) < 0) {
            fn_82C4E5E8(param_3);
          }
          uVar2 = *param_1;
          if ((__int64)uVar3 < 0) {
            uVar1 = param_1[6] | 0x80000000;
            goto LAB_82c57c30;
          }
          uVar2 = uVar2 | 0x80000000;
          uVar1 = param_1[6] & 0x7fffffff;
        }
      }
      else {
        uVar2 = *param_1;
        uVar1 = param_1[6] & 0x7fffffff;
LAB_82c57c30:
        uVar2 = uVar2 & 0x7fffffff;
      }
      param_1[6] = uVar1;
      lVar4 = lVar4 + -1;
      *param_1 = uVar2;
      param_1 = param_1 + 0xc;
    } while (lVar4 != 0);
  }
  return;
}

