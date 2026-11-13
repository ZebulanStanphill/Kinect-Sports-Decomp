extern int fn_83014BF8();


void fn_83014E38(int param_1)

{
  int lVar1;
  
  if (*(unsigned int *)(param_1 + 0x78) == 0) {
    return;
  }
  lVar1 = *(unsigned int *)(param_1 + 0x78) - 1;
  *(int *)(param_1 + 0x78) = lVar1;
  if (lVar1 != 0) {
    return;
  }
  if (*(int *)(param_1 + 0x38) == 1) {
    return;
  }
  fn_83014BF8();
  return;
}

