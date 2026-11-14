typedef struct { int px; void *rc; } SP_828B74C8;
extern void fn_822315A0(void *);
extern void fn_828B7258(SP_828B74C8 *, int, int, SP_828B74C8 *, int);

static void SwapRc(void **a, void **b) { void *t = *a; *a = *b; *b = t; }
static void SwapPx(int *a, int *b) { int t = *a; *a = *b; *b = t; }
static void Swap(SP_828B74C8 *a, SP_828B74C8 *b)
{
  SwapRc(&a->rc, &b->rc);
  SwapPx(&a->px, &b->px);
}
static void Ctor(SP_828B74C8 *d, SP_828B74C8 *s)
{
  d->px = 0;
  d->rc = 0;
  if (d != s) Swap(d, s);
}
void fn_828B74C8(SP_828B74C8 *first, SP_828B74C8 *last, int pred)
{
  int bottom = last - first;
  int hole;
  for (hole = bottom / 2; 0 < hole;) {
    SP_828B74C8 value;
    --hole;
    Ctor(&value, &first[hole]);
    fn_828B7258(first, hole, bottom, &value, pred);
    if (value.rc != 0) fn_822315A0(value.rc);
  }
}
