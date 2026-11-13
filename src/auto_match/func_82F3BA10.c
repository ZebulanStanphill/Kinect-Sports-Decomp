extern int fn_82E4FE40();


unsigned __int64 fn_82F3BA10(int param_1,unsigned int param_2)

{
  *(unsigned int *)(param_1 + 0x4c) = param_2;
  if ((param_2 & 1) == 0) {
    if (*(unsigned int *)(param_1 + 0x70) != 0) {
      fn_82E4FE40(*(unsigned int *)(param_1 + 0x70));
    }
    *(unsigned int *)(param_1 + 0x70) = 0;
  }
  return 0;
}

