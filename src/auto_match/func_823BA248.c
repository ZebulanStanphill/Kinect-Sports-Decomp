typedef struct { int first; int second; int third; int pad; } Pair_823BA248;
typedef struct { int **p; int pad; int c; } Src_823BA248;
extern void fn_823BA308(int, Pair_823BA248 *, Pair_823BA248 *, Pair_823BA248 *);

static void Make(Pair_823BA248 *d, Src_823BA248 *s)
{
  int *q;
  d->first = 0;
  d->second = 0;
  if (s->p != 0 && (q = *s->p) != 0)
    d->first = *q;
  d->third = s->c;
}

void fn_823BA248(int p1, Src_823BA248 *a, Src_823BA248 *b, Src_823BA248 *c)
{
  Pair_823BA248 ta, tb, tc;
  Make(&tc, c);
  Make(&tb, b);
  Make(&ta, a);
  fn_823BA308(p1, &ta, &tb, &tc);
}
