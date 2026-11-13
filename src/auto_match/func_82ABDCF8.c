unsigned int fn_82ABDCF8(int param_1)

{
  if (*(int *)(param_1 + 0x324) != 0) {
    return *(unsigned int *)(param_1 + 800);
  }
  if ((*(unsigned int *)(param_1 + 0x28) & 0x10000) != 0) {
    return 0;
  }
  return -(unsigned int)(((unsigned __int64)*(unsigned int *)(param_1 + 0x30) & 0xffff0000) != 0xffffffffffff0000) & 0x10;
}

