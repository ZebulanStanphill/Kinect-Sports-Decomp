extern void fn_82838B88(void *buf, unsigned int p, int q, unsigned short a, unsigned short b);

void fn_82852070(int param_1, int param_2, int param_3)
{
  unsigned char buf[512];

  fn_82838B88(buf, *(unsigned int *)(param_2 + 0x14) + param_3, param_1 + 0xa4,
              *(unsigned short *)(param_2 + 0x1a), *(unsigned short *)(param_2 + 0x1c));
}
