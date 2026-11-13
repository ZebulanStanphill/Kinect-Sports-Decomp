__int64 fn_83055A00(int param_1)

{
  if ((*(unsigned char *)(param_1 + 0xb8) & 0x80) != 0) {
    return *(__int64 *)(param_1 + 0xb0);
  }
  if (*(unsigned int *)(param_1 + 0xa4) > (unsigned int)*(unsigned char *)(param_1 + 0xa8)) {
    return (unsigned __int64)*(unsigned int *)((int)*(__int64 **)(param_1 + 0xa0) + 0xc) +
           **(__int64 **)(param_1 + 0xa0);
  }
  return *(__int64 *)(param_1 + 0x80);
}

