extern int fn_82F68B78();


void fn_83014E90(int param_1,unsigned int param_2,int param_3)

{
  __int64 lVar1;
  
  if ((*(int *)(param_1 + 0x3c) != param_3) && (param_3 != 0)) {
    return;
  }
  if (param_2 == 0) {
    *(unsigned int *)(param_1 + 0x38) = 0;
    *(unsigned int *)(param_1 + 0x6c) = 0;
    *(unsigned int *)(param_1 + 0x78) = 0;
    return;
  }
  if (param_2 == 1) {
    if (*(int *)(param_1 + 0x38) == 0) {
      return;
    }
    *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
    return;
  }
  if (2 < param_2) {
    return;
  }
  if ((unsigned __int64)*(unsigned int *)(param_1 + 0x78) == 0) {
    return;
  }
  lVar1 = (unsigned __int64)*(unsigned int *)(param_1 + 0x78) - 1;
  *(int *)(param_1 + 0x78) = (int)lVar1;
  if (lVar1 != 0) {
    return;
  }
  if (*(int *)(param_1 + 0x38) == 1) {
    return;
  }
  fn_82F68B78();
  return;
}

