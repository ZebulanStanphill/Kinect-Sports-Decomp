int  fn_82819288(int param_1,int param_2)

{
  if (*(unsigned int *)(param_1 + 0x14) > *(unsigned int *)(param_2 + 0x14)) {
    return -1;
  }
  if (*(unsigned int *)(param_1 + 0x14) < *(unsigned int *)(param_2 + 0x14)) {
    return 1;
  }
  return *(unsigned int *)(param_1+0x10) > *(unsigned int *)(param_2+0x10) ? -1 : 1;
}

