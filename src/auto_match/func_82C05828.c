unsigned __int64 fn_82C05828(int param_1,int param_2)

{
  if ((param_2 != 1) && (param_2 == 3)) {
    *(unsigned int *)(param_1 + 0x30) = 1;
    *(__int64 *)(param_1 + 0x58) = *(__int64 *)(param_1 + 0x40) + *(__int64 *)(param_1 + 0x38);
    return 0;
  }
  *(unsigned int *)(param_1 + 0x30) = 0;
  *(unsigned __int64 *)(param_1 + 0x58) = *(unsigned __int64 *)(param_1 + 0x38);
  return 0;
}

