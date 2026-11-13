extern void fn_8227DE10(unsigned);
extern void fn_8265CA20(void *);
extern void *memmove(void *, const void *, unsigned);
extern unsigned int lbl_821A87A4;

typedef struct Pair_8227DCF8 { int a; unsigned b; } Pair_8227DCF8;
typedef struct Vec1_8227DCF8 { unsigned *begin; unsigned *end; unsigned *cap; } Vec1_8227DCF8;
typedef struct Vec2_8227DCF8 { Pair_8227DCF8 *begin; Pair_8227DCF8 *end; Pair_8227DCF8 *cap; } Vec2_8227DCF8;
typedef struct Self_8227DCF8 { void *vt; int pad[2]; Vec1_8227DCF8 v1; int pad18; Vec2_8227DCF8 v2; } Self_8227DCF8;

void fn_8227DCF8(Self_8227DCF8 *self)
{
  Vec1_8227DCF8 *v;
  Vec2_8227DCF8 *w;
  unsigned *p;
  unsigned *e;
  unsigned *first;
  unsigned *last;
  int cnt;
  Pair_8227DCF8 *q;
  Pair_8227DCF8 *r;

  e = self->v1.end;
  p = self->v1.begin;
  v = &self->v1;
  self->vt = &lbl_821A87A4;
  for (; p != e; p++) {
    if (*p != 0) {
      fn_8227DE10(*p);
    }
  }
  first = v->begin;
  last = v->end;
  if (first != last) {
    cnt = v->end - last;
    memmove(first, last, cnt * 4);
    v->end = first + cnt;
  }
  for (q = self->v2.begin; q != self->v2.end; q++) {
    if (q->a == 0 && q->b != 0) {
      fn_8227DE10(q->b);
    }
  }
  w = &self->v2;
  if (w->begin != 0) {
    for (r = w->begin; r != w->end; r++) {
    }
    fn_8265CA20(w->begin);
  }
  w->begin = 0;
  w->end = 0;
  w->cap = 0;
  if (v->begin != 0) {
    fn_8265CA20(v->begin);
  }
  v->begin = 0;
  v->end = 0;
  v->cap = 0;
}
