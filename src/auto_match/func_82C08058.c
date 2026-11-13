unsigned __int64 fn_82C08058(int param_1,int param_2,unsigned __int64 param_3,int param_4)

{
  unsigned int *puVar1;
  
  if (((param_1 == 0) || (param_2 == 0)) || (param_4 == 0)) {
    return 0xffffffff80070057;
  }
  if (*(int *)(param_2 + 0x38) == 0) {
    return 0;
  }
  if (*(int *)(param_4 + 0x260) == 0) {
    return 0;
  }
  if (0x7e < *(int *)(param_2 + 0x3c)) {
    return 0xffffffff80070057;
  }
  puVar1 = (unsigned int *)(*(int *)(param_2 + 0x3c) * 0xc + *(int *)(param_4 + 0x260));
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  return 0;
}

