unsigned int fn_82C45138(unsigned int param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  if ((*(int *)(param_1 + 0x3c04) == 0) && (*(int *)(param_1 + 0x3c48) == 0)) {
    return 0;
  }
  return 1;
}

