extern unsigned int fn_82BD07B8(void *);
typedef struct { int a, b; unsigned int w[1]; } Bits;

void fn_82BD0998(Bits **p)
{
  unsigned int i = fn_82BD07B8(p);
  Bits *b = *p;
  b->w[i >> 5] |= 1 << (i & 31);
}
