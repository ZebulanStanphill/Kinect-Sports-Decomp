unsigned int fn_82F60638(int param_1,unsigned int param_2)

{
  if (*(char *)(param_1 + 4) == '\0') {
    return 0;
  }
  if (*(unsigned int *)(param_1 + 0xc) <= param_2) {
    return 0;
  }
  return *(unsigned int *)(*(int *)(param_1 + 0x1c) + param_2 * 4);
}

