unsigned __int64 fn_82E815A0(int param_1,unsigned int *param_2,unsigned int *param_3,unsigned int *param_4,unsigned int *param_5)

{
  unsigned int uVar1;
  
  *param_5 = 0;
  *param_4 = 0;
  *param_3 = 0;
  *param_2 = 0;
  if (((*(int *)(param_1 + 0x1ff0) != 0) && (*(int *)(*(int *)(param_1 + 0x1ff4) + 0xa0) != 0)) &&
     (uVar1 = *(unsigned int *)(*(int *)(param_1 + 0x1ff4) + 0x30), uVar1 != 0xffffffff)) {
    *param_2 = (int)uVar1 >> 0x18 & 0xf;
    *param_3 = (int)uVar1 >> 0x10 & 0xf;
    *param_4 = (int)uVar1 >> 8 & 0xf;
    *param_5 = uVar1 & 0xf;
    uVar1 = *param_2;
    if (8 < (int)uVar1) {
      uVar1 = 8;
    }
    *param_2 = uVar1;
    uVar1 = *param_3;
    if (8 < (int)uVar1) {
      uVar1 = 8;
    }
    *param_3 = uVar1;
    uVar1 = *param_4;
    if (8 < (int)uVar1) {
      uVar1 = 8;
    }
    *param_4 = uVar1;
    uVar1 = *param_5;
    if (8 < (int)uVar1) {
      uVar1 = 8;
    }
    *param_5 = uVar1;
    return 1;
  }
  return 0;
}

