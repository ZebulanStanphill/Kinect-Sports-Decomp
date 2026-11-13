unsigned __int64 fn_82EEF590(int param_1,unsigned int *param_2,unsigned int *param_3)

{
  if (*(unsigned int *)(param_1 + 0xc) == 0) {
    return 0xffffffffc00d36b6;
  }
  if ((param_2 != (unsigned int *)0x0) && (param_3 != (unsigned int *)0x0)) {
    *param_2 = *(unsigned int *)(param_1 + 0x4c);
    *param_3 = *(unsigned int *)(param_1 + 0x48);
    return 0;
  }
  return 0xffffffff80070057;
}

