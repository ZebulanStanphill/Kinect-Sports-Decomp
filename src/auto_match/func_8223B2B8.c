typedef struct Str_822340A8 { int pad0, pad4; union { char buf[4]; char *ptr; } u; unsigned cap; } Str_822340A8;
extern void fn_8223C200(void *, int, int);
extern void fn_8223C478(void *, int, int);
extern void fn_828E9DB8(void *, int, int);

void fn_8223B2B8(void *a, void *b, void *w, Str_822340A8 *s)
{
  unsigned char *p;
  unsigned char *q;
  int n;
  unsigned char z;
  unsigned char e;
  unsigned char c;
  int bits;
  unsigned i;

  if (s->cap <= 4) p = (unsigned char *)s->u.buf; else p = (unsigned char *)s->u.ptr;
  q = p;
  n = 0;
  for (; q != p + 0x19; q++) {
    if (*q == '\0') n++;
  }
  z = (n == 0x19);
  fn_8223C200(w, z, 0);
  if (!(z & 1)) {
    i = 0;
    do {
      c = p[i];
      e = (c == '\0');
      fn_8223C200(w, e, 0);
      if (!(e & 1)) {
        if (i == 0x18) bits = 1; else bits = 8;
        fn_8223C478(w, bits, 0);
        fn_828E9DB8(w, c, bits);
      }
      i++;
    } while (i < 0x19);
  }
}
