void fn_82DE35A0(int param_1)
{
  int i;
  for (i = 0; i < *(int *)(param_1 + 0x10); i++) {
    *(int *)(param_1 + 0xfb4 + i * 0x50) = 0;
  }
  for (i = 0; i < *(int *)(param_1 + 8); i++) {
    *(int *)(param_1 + 0x50 + i * 0x40) = 0;
  }
}
