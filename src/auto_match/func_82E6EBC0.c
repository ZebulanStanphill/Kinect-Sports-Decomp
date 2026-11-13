unsigned __int64 fn_82E6EBC0(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  if (((*(unsigned int *)(param_1 + 0x38) != 0) && (param_2 >= *(unsigned __int64 *)(param_1 + 0x30))) &&
     ((param_3 & 0xffffffff) + param_2 <=
      (unsigned __int64)*(unsigned int *)(param_1 + 0x28) + *(unsigned __int64 *)(param_1 + 0x30))) {
    return 1;
  }
  return 0;
}

