typedef struct Sub_82FB9630 { short a; unsigned char top : 2; unsigned char rest : 6; int c; } Sub_82FB9630;
typedef struct Elem_82FB9630 { int pad; Sub_82FB9630 s; } Elem_82FB9630;
typedef struct Vec_82FB9630 { Elem_82FB9630 *begin; Elem_82FB9630 *end; unsigned int cap; } Vec_82FB9630;
extern unsigned char fn_82FB9430(Vec_82FB9630 *, int);

Elem_82FB9630 *fn_82FB9630(Vec_82FB9630 *v)
{
  unsigned int n;
  unsigned char ok;
  Elem_82FB9630 *e;
  Sub_82FB9630 *s;

  n = v->end - v->begin;
  if ((n < v->cap || (ok = fn_82FB9430(v, 5)) != 0) && n < v->cap) {
    e = v->end;
    if (e != 0) {
      s = &e->s;
      s->a = 0;
      s->top = 0;
      e->s.c = 0;
    }
    e = v->end;
    v->end = e + 1;
    return e;
  }
  return 0;
}
