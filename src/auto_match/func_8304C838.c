extern int fn_82FEC850();
extern int fn_83037590();


void fn_8304C838(int param_1)

{
  if (*(unsigned int *)(param_1 + 0x14) != 0) {
    if ((*(unsigned int *)(param_1 + 0x44) & 1) == 1) {
      fn_83037590((unsigned int *)(param_1 + 0x14));
      return;
    }
    fn_82FEC850((*(unsigned int *)(param_1 + 0x44) & 0xf8) << 7, *(unsigned int *)(param_1 + 0x14));
    *(unsigned int *)(param_1 + 0x14) = 0;
  }
  return;
}

