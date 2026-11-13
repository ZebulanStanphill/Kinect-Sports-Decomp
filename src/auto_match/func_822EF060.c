typedef struct Buf_822EF060 {
  int (**vt)(struct Buf_822EF060 *);
  char pad0[0x1c];
  unsigned char **gfirst;
  char pad1[0xc];
  int *gcount;
} Buf_822EF060;

typedef struct Iter_822EF060 {
  Buf_822EF060 *buf;
  unsigned char got;
  unsigned char ch;
} Iter_822EF060;

unsigned char fn_822EF060(Iter_822EF060 *param_1)

{
  Buf_822EF060 *b;
  int n;
  int c;

  b = param_1->buf;
  if (b != 0) {
    if (*b->gfirst != 0) {
      n = *b->gcount;
    }
    else {
      n = 0;
    }
    if (n > 0) {
      c = **b->gfirst;
    }
    else {
      c = b->vt[6](b);
    }
    if (c != -1) {
      param_1->ch = (unsigned char)c;
      goto done;
    }
  }
  param_1->buf = 0;
done:
  param_1->got = 1;
  return param_1->ch;
}
