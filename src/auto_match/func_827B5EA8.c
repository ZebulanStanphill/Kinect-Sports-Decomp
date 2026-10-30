extern void fn_8267BE38(void *);
typedef struct Arr_827B5EA8 { int a; unsigned n; int cap; void **d; } Arr_827B5EA8;
static void Dec(unsigned *np) { *np = *np - 1; }
void fn_827B5EA8(Arr_827B5EA8 *p)
{
  void **d;
  if (p->n != 0) {
    void **e = p->d + p->n;
    do {
      Dec(&p->n);
      e--;
      fn_8267BE38(*e);
    } while (p->n != 0);
    d = p->d; Dec(&p->n); fn_8267BE38(d);
  }
  p->cap = 0;
  p->n = 0;
  p->a = 0;
  p->d = 0;
}
