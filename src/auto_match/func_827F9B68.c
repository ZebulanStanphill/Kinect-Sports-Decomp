unsigned char fn_827F9B68(int param_1,unsigned int param_2)

{
  if (*(unsigned int *)(param_1 + 0x8c) != 0) {
    return *(unsigned char *)((param_2 & 0xffff) + *(int *)(param_1 + 0x8c));
  }
  return 1;
}

