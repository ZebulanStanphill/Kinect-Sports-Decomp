typedef struct { int px; void *rc; } SP_828B76C8;
extern void fn_822315A0(void *);
extern void fn_828B7258(SP_828B76C8 *, int, int, SP_828B76C8 *, int);

static void SwapRc(void **a, void **b) { void *t = *a; *a = *b; *b = t; }
static void SwapPx(int *a, int *b) { int t = *a; *a = *b; *b = t; }
static void Swap(SP_828B76C8 *a, SP_828B76C8 *b)
{
  SwapRc(&a->rc, &b->rc);
  SwapPx(&a->px, &b->px);
}
static void Ctor(SP_828B76C8 *d, SP_828B76C8 *s)
{
  d->px = 0;
  d->rc = 0;
  if (d != s) Swap(d, s);
}
void fn_828B76C8(SP_828B76C8 *p, SP_828B76C8 *end, int p3)
{
  SP_828B76C8 t1;
  SP_828B76C8 t2;
  SP_828B76C8 *e = end - 1;
  Ctor(&t1, e);
  Ctor(&t2, p);
  Swap(e, &t2);
  if (t2.rc != 0) fn_822315A0(t2.rc);
  fn_828B7258(p, 0, (int)((char *)end - (char *)p - 8) >> 3, &t1, p3);
  if (t1.rc != 0) fn_822315A0(t1.rc);
}
