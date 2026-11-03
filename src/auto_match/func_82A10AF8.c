extern int fn_8262FEC8(unsigned int);
extern int fn_8265C990(unsigned int, unsigned int);

void fn_82A10AF8(int param_1)
{
  unsigned int *p;
  unsigned int i;
  int off;
  unsigned int e;

  p = (unsigned int *)(param_1 + 0x1db0);
  for (i = 4; i != 0; i--) {
    if (*p != 0) {
      fn_8265C990(*p, 0xac9c0000u | ((~(p[-0xd] >> 21) & 1u) << 28));
      *p = 0;
    }
    if (p[1] != 0) {
      fn_8262FEC8(p[1]);
      p[1] = 0;
    }
    p = p + 0xf;
  }
  if (*(unsigned int *)(param_1 + 0x1d30) != 0) {
    i = 0;
    if (*(unsigned int *)(param_1 + 0x1d34) > 0) {
      off = 0;
      do {
        e = *(unsigned int *)(off + *(int *)(param_1 + 0x1d30));
        if (e != 0) {
          fn_8265C990(*(unsigned int *)(e - 4), 0x249c0000);
        }
        i = i + 1;
        off = off + 8;
      } while (i < *(unsigned int *)(param_1 + 0x1d34));
    }
    if (*(unsigned int *)(param_1 + 0x1d30) != 0) {
      fn_8265C990(*(unsigned int *)(*(int *)(param_1 + 0x1d30) - 4), 0x249c0000);
    }
    *(unsigned int *)(param_1 + 0x1d30) = 0;
  }
  if (*(unsigned int *)(param_1 + 0x1d2c) != 0) {
    fn_8265C990(*(unsigned int *)(param_1 + 0x1d2c), 0xbc9c0000);
    *(unsigned int *)(param_1 + 0x1d2c) = 0;
  }
}
