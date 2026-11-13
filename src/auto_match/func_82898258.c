void fn_82898258(int param_1)

{
  if (*(int *)(param_1 + 0x30) != 0) {
    *(unsigned int *)(*(int *)(param_1 + 0x30) + 0x34) = *(unsigned int *)(param_1 + 0x34);
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    *(unsigned int *)(*(int *)(param_1 + 0x34) + 0x30) = *(unsigned int *)(param_1 + 0x30);
  }
  *(unsigned int *)(param_1 + 0x30) = 0;
  *(unsigned int *)(param_1 + 0x34) = 0;
  return;
}

