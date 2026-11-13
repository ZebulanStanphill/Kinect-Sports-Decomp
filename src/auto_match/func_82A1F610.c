unsigned __int64 fn_82A1F610(__int64 *param_1,int param_2)

{
  if (((*(unsigned int *)(param_2 + 0x1c) & 0x80) == 0) && ((*(unsigned int *)(param_2 + 0x1c) & 0x40) != 0)) {
    *param_1 = ((unsigned __int64)*(unsigned int *)(param_2 + 8) + 0x7fff & 0xffff8000) + *param_1;
  }
  return 0;
}

