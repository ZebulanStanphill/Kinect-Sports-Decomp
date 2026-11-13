void fn_826A12A0(int param_1,unsigned char param_2)

{
  *(unsigned int *)(param_1 + 0x8c) = (param_2 & 3) << 0x10 | *(unsigned int *)(param_1 + 0x8c) & 0xfffcffff;
  return;
}
