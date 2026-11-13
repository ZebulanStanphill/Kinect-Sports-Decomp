unsigned __int64 fn_82C0A230(int param_1,unsigned int param_2)

{
  if (param_2 != 0) {
    *(int *)(param_1 + 0x250) = param_2;
    *(unsigned int *)(param_1 + 0x228) = 1;
    return 0;
  }
  *(unsigned int *)(param_1 + 0x228) = 0;
  return 0;
}

