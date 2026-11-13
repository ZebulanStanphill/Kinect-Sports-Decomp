int fn_830542D8(int param_1)

{
  if ((*(unsigned int *)(param_1 + 0xa8) > 0) &&
     ((*(unsigned int *)(*(int *)(param_1 + 0xa0) + 0x30) & 0xe0000000) == 0x20000000)) {
    return *(int *)(param_1 + 0xa0);
  }
  return 0;
}

