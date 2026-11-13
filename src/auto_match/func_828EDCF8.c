unsigned __int64 fn_828EDCF8(int param_1,unsigned int param_2,unsigned int param_3)

{
  if (*(int *)(param_1 + 0x434) < 0x20) {
    *(unsigned int *)(*(int *)(param_1 + 0x434) * 8 + param_1 + 0x334) = param_2;
    *(unsigned int *)((*(int *)(param_1 + 0x434) + 0x67) * 8 + param_1) = param_3;
    *(int *)(param_1 + 0x434) = *(int *)(param_1 + 0x434) + 1;
    return 1;
  }
  return 0;
}

