unsigned short fn_829EC5E8(int param_1)

{
  if (*(int *)(param_1 + 8) == 0) {
    return 0;
  }
  if (*(short *)(param_1 + 0x14) == 0) {
    return 0;
  }
  return **(unsigned short **)(param_1 + 0x2c);
}

