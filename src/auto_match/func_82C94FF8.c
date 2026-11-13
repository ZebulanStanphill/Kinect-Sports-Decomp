unsigned __int64 fn_82C94FF8(int param_1,int param_2,int param_3)

{
  unsigned __int64 uVar1;
  
  uVar1 = 0;
  if (((param_3 != 0) && (*(int *)(*(int *)(param_1 + 0x55d0) + param_3 * 4) == 0)) &&
     (*(short *)((*(int *)(param_1 + 0x88) * (param_3 + -1) + param_2) * 2 +
                *(int *)(param_1 + 0x6f8)) == 0x4000)) {
    uVar1 = 1;
  }
  if (param_2 == 0) {
    return uVar1;
  }
  if (*(short *)((*(int *)(param_1 + 0x88) * param_3 + param_2) * 2 + *(int *)(param_1 + 0x6f8) + -2
                ) != 0x4000) {
    return uVar1;
  }
  return 1;
}

