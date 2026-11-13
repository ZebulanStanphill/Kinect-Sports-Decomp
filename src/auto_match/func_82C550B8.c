__int64 fn_82C550B8(int param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  return ((unsigned __int64)*(unsigned int *)(param_1 + 0x14) + (unsigned __int64)*(unsigned int *)(param_1 + 8) + 10 & 0x3fffffff
         ) * 4 + (__int64)*(int *)(param_1 + 0x20) * (__int64)*(int *)(param_1 + 0xc);
}

