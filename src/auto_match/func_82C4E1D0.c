typedef struct Bits_82C4E1D0 {
  unsigned __int64 acc;
  int nbits;
  unsigned char *cur;
  unsigned char *end;
  int f14;
  int f18;
  int f1c;
  int pad20;
  int f24;
} Bits_82C4E1D0;
extern Bits_82C4E1D0 *fn_82C4DE40(Bits_82C4E1D0 *, unsigned char *, int *);
void fn_82C4E1D0(Bits_82C4E1D0 *b, unsigned char *p, int n, int v18, int v1c)
{
  b->f1c = v1c;
  b->acc = 0;
  b->nbits = -16;
  b->f14 = 0;
  b->end = p + n - 1;
  if (0 != v1c) {
    b->f24 = 0;
    b = fn_82C4DE40(b, p, &n);
    p = b->cur;
  }
  while (p <= b->end) {
    int c;
    unsigned char v;
    c = b->nbits;
    if (0x28 < c) break;
    v = *p;
    b->acc = b->acc + ((unsigned __int64)v << (0x28 - c));
    p++;
    b->nbits = 8 + c;
  }
  b->cur = p;
  b->f18 = v18;
}
