void fn_827B5C58(int param_1,short *param_2)

{
  unsigned __int64 uVar1;
  
  uVar1 = (__int64)param_2[1] - (__int64)*(short *)(param_1 + 0x5a);
  if ((-1 < (__int64)uVar1) && ((int)uVar1 < *(int *)(param_1 + 0x50))) {
    param_2[1] = *(short *)(*(int *)(param_1 + 0x4c) + (int)((uVar1 & 0xffffffff) << 1)) +
                 *(short *)(param_1 + 0x5a);
  }
  uVar1 = (__int64)*param_2 - (__int64)*(short *)(param_1 + 0x58);
  if ((__int64)uVar1 < 0) {
    return;
  }
  if (*(int *)(param_1 + 0x44) <= (int)uVar1) {
    return;
  }
  *param_2 = *(short *)(*(int *)(param_1 + 0x40) + (int)((uVar1 & 0xffffffff) << 1)) +
             *(short *)(param_1 + 0x58);
  return;
}

