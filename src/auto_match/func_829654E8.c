unsigned __int64 fn_829654E8(int param_1)

{
  *(unsigned int *)(param_1 + 0x28) = 0x40;
  *(unsigned int *)(param_1 + 0x2c) = 0x40;
  *(unsigned int *)(param_1 + 0x30) = 0;
  *(unsigned int *)(param_1 + 0x38) = 0x2000;
  *(unsigned int *)(param_1 + 0x6c) = *(unsigned int *)(param_1 + 0x6c) & 0x9fffffff;
  *(unsigned int *)(param_1 + 0x70) = *(unsigned int *)(param_1 + 0x70) | 0x200000;
  return 0;
}

