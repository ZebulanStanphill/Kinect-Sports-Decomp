void fn_8260FB30(unsigned __int64 param_1,int param_2,int param_3)

{
  if (*(unsigned int *)(param_3 + 0x10) != *(int *)(param_2 + 0x10)) {
    return;
  }
  *(unsigned int *)(param_2 + 0x10) = 0;
  return;
}

