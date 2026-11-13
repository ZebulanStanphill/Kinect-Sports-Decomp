extern int fn_8239C3B8();


void fn_82492F40(int param_1)

{
  fn_8239C3B8(*(unsigned int *)(param_1 + 0x40),1);
  if (*(int *)(*(int *)(param_1 + 0x40) + 0x860) != 0) {
    *(unsigned int *)(*(int *)(param_1 + 0x40) + 0x860) = 0;
  }
  return;
}

