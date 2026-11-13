void fn_82D899A0(unsigned char *param_1,int param_2)

{
  if (*(int *)(param_2 + 0xcc) == 0) {
    *param_1 = 0;
    return;
  }
  *param_1 = *(unsigned char *)(*(int *)(param_2 + 0xcc) + 0x26) >> 4 & 3;
  return;
}

