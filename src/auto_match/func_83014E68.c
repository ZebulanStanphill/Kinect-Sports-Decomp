extern void fn_83014BF8(int);


void fn_83014E68(int param_1)

{
  if (*(int *)(param_1 + 0x38) != 2) {
    return;
  }
  if (*(unsigned int *)(param_1 + 0x14) == *(int *)(param_1 + 0x10)) {
    return;
  }
  fn_83014BF8(param_1);
  return;
}

