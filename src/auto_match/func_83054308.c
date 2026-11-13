int fn_83054308(int param_1)

{
  if ((*(unsigned int *)(param_1 + 0xb8) > 0) &&
     ((*(unsigned int *)(*(int *)(param_1 + 0xb0) + 0x30) & 0xe0000000) == 0x20000000)) {
    return *(int *)(param_1 + 0xb0);
  }
  return 0;
}

