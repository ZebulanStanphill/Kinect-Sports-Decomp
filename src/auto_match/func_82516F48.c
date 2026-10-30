typedef struct { unsigned char b[16]; } E;
typedef struct { E *first, *last, *end; } V;
extern unsigned char fn_82517298(V *, unsigned int);
extern void fn_825179F8(E *, E *);
V *fn_82516F48(V *v, V *src)
{
  E *s, *e, *d, *p;
  v->first = 0; v->end = 0; v->last = 0;
  if (fn_82517298(v, src->last - src->first)) {
    s = src->first; e = src->last; d = v->first;
    p = s;
    if (s != e) {
    do {
      if (d != 0) fn_825179F8(d, p);
      ++p; ++d;
    } while (p != e);
    }
    v->last = d;
  }
  return v;
}
