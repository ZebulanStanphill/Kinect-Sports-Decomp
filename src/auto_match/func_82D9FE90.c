void fn_82D9FE90(int param_1,int param_2)

{
  if (param_2 == 0) {
    return;
  }
  *(unsigned char *)(param_1 + 10) = (*(char *)(param_1 + 9) + *(char *)(param_1 + 8) + '\x05') * '\x04';
  return;
}

