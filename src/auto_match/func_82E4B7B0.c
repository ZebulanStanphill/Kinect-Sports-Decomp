unsigned __int64 fn_82E4B7B0(int param_1,unsigned int param_2)

{
  if (param_2 == 0x57564331) {
    *(unsigned int *)(param_1 + 0x14) = 1;
    *(unsigned int *)(param_1 + 0x10) = 0x574d5641;
    return 0;
  }
  *(int *)(param_1 + 0x10) = param_2;
  *(unsigned int *)(param_1 + 0x14) = 0;
  return 0;
}

