int fn_82784390(int param_1)

{
  return ((*(unsigned int *)(param_1 + 0xc) & 0x7fffff) * 0x200 +
          *(unsigned int *)(param_1 + 0x1c) * 0x180 + *(unsigned int *)(param_1 + 0x20) +
          *(unsigned int *)(param_1 + 0x10) & 0x3fffffff) << 2;
}

