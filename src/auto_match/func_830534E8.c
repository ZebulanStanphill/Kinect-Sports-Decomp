__int64 fn_830534E8(int param_1)
{
  int p = *(int *)(param_1 + 0xb4);
  if (p != 0) {
    return *(__int64 *)p;
  }
  if (*(unsigned int *)(param_1 + 0xa4) > (unsigned int)*(unsigned char *)(param_1 + 0xa8)) {
    return (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0xa0) + 0xc) +
           **(__int64 **)(param_1 + 0xa0);
  }
  return *(__int64 *)(param_1 + 0x80);
}
