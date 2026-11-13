unsigned __int64 fn_82FA8588(int param_1,unsigned int param_2)

{
  if ((*(unsigned int *)(param_1 + 0x194) == 0xffffffff) || (*(unsigned int *)(param_1 + 0x194) > param_2)) {
    *(unsigned int *)(param_1 + 0x194) = param_2;
  }
  *(unsigned char *)(param_1 + 0x19c) = 1;
  return 1;
}

