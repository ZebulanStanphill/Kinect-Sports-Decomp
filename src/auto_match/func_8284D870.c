unsigned int fn_8284D870(int param_1)

{
  if (*(unsigned int *)(param_1 + 0x110) != 0) {
    return *(unsigned int *)(*(int *)(param_1 + 0x110) + 8);
  }
  return 0;
}

