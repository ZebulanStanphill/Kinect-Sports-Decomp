unsigned __int64 fn_82E6E210(int param_1,unsigned __int64 param_2)

{
  if (param_2 > *(unsigned __int64 *)(param_1 + 0x20)) {
    return 0xffffffff80070057;
  }
  *(unsigned __int64 *)(param_1 + 0x18) = param_2;
  return 0;
}

