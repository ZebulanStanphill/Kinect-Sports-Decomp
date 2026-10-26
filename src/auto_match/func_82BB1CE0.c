extern unsigned int fn_82BC7368(void *);
typedef struct { int a, b; unsigned int w[1]; } Bits;

void fn_82BB1CE0(char *p)
{
  unsigned int i = fn_82BC7368(p);
  Bits *b = *(Bits **)(p + 0x10);
  b->w[i >> 5] &= ~(1 << (i & 31));
}
