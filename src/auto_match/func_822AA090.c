extern void fn_822315A0(void *);
extern unsigned char fn_8223AAC0(void *);

typedef struct { int a; void *p; int c; int d; } S;

S *fn_822AA090(S *dst, S *src)
{
  void *p;
  int a;

  dst->a = 0;
  dst->p = 0;
  p = src->p;
  a = src->a;
  if (p != 0 && fn_8223AAC0(p)) {
    if (dst->p != 0) {
      fn_822315A0(dst->p);
    }
    dst->p = p;
    dst->a = a;
  }
  dst->c = src->c;
  dst->d = src->d;
  return dst;
}
