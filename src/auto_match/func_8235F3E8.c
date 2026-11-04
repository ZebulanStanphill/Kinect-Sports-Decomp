extern int fn_82547C80();

void fn_8235F3E8(int param_1, unsigned param_2)
{
  unsigned i;
  unsigned n;

  for (i = *(unsigned *)(param_1 + 0x640); i < *(unsigned *)(param_1 + 0x644); i = i + 1) {
    n = *(unsigned *)(param_1 + 0x648);
    fn_82547C80(**(int **)((i / n + 0xafb) * 4 + param_1) + 0xd0, (unsigned char)(i % n), (i < param_2) ? 1 : 0);
  }
}
