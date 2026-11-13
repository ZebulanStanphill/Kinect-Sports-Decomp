extern int fn_82FEC850();


void fn_8304C038(int param_1)

{
  if (*(unsigned int *)(param_1 + 0x60) != 0) {
    fn_82FEC850((*(unsigned int *)(*(int *)(*(int *)(param_1 + 8) + 0x6c) + 0x24) & 0xf8) << 7, *(unsigned int *)(param_1 + 0x60));
    *(unsigned int *)(param_1 + 0x60) = 0;
  }
  return;
}

