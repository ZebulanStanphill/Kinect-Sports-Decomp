extern int fn_82F65350();


unsigned __int64 fn_82FAE648(int param_1,int param_2,int param_3,int *param_4)

{
  unsigned int uVar1;
  unsigned short uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  
  uVar2 = *(unsigned short *)(param_2 + 0x14) >> 0xd;
  if (uVar2 < 4) {
    if (uVar2 != 0) {
      if (uVar2 == 1) {
        if (param_3 < *(int *)(*(int *)(param_1 + 0xa4) + -4) -
                      *(int *)(*(int *)(param_1 + 0xa0) + 4)) {
          *param_4 = param_3;
          return 1;
        }
        goto LAB_82fae770;
      }
      if (uVar2 == 2) {
        uVar5 = (__int64)(*(int *)(param_1 + 0xa4) - *(int *)(param_1 + 0xa0) >> 3) - 1;
        uVar3 = fn_82F65350();
        trapWord(6,uVar5,0);
        *param_4 = *(int *)((int)((uVar3 - (__int64)
                                           (int)((uVar3 & 0xffffffff) / (uVar5 & 0xffffffff)) *
                                           (__int64)(int)uVar5 & 0xffffffff) << 3) +
                            *(int *)(param_1 + 0xa0) + 4) - *(int *)(*(int *)(param_1 + 0xa0) + 4);
        return 1;
      }
      uVar1 = *(int *)(param_1 + 0xa4) - *(int *)(param_1 + 0xa0) >> 3;
      if (2 < uVar1) {
        uVar3 = fn_82F65350();
        uVar5 = (__int64)(int)uVar1 - 2;
        trapWord(6,uVar5,0);
        *param_4 = *(int *)((int)(((uVar3 - (__int64)
                                            (int)((uVar3 & 0xffffffff) / (uVar5 & 0xffffffff)) *
                                            (__int64)(int)uVar5) + 1 & 0xffffffff) << 3) +
                            *(int *)(param_1 + 0xa0) + 4) - *(int *)(*(int *)(param_1 + 0xa0) + 4);
        return 1;
      }
    }
    uVar4 = 1;
    *param_4 = 0;
  }
  else {
LAB_82fae770:
    uVar4 = 2;
  }
  return uVar4;
}

