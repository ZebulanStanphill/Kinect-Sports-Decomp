unsigned int fn_8300BCF0(int param_1)

{
  return *(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0x48) >> 3 & 0xffff;
}

