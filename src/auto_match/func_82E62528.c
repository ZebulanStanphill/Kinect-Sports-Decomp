unsigned __int64 fn_82E62528(int param_1,unsigned int *param_2)

{
  if (*(unsigned int *)(param_1 + 0xc) == 0) {
    return 0xffffffffc00d36b6;
  }
  if (param_2 == (unsigned int *)0x0) {
    return 0xffffffff80070057;
  }
  *param_2 = *(unsigned int *)(param_1 + 0x60);
  param_2[1] = *(unsigned int *)(param_1 + 100);
  return 0;
}

