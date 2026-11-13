int fn_82689010(int param_1)

{
  if (*(unsigned int *)(param_1 + 0x1c) != 0) {
    return *(int *)(param_1 + 0x1c);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    return *(int *)(*(int *)(param_1 + 0x14) + 0x10);
  }
  return 0;
}

