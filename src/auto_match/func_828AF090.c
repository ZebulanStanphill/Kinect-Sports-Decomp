typedef struct { int pad; unsigned **end; } V;
extern void *memmove(void *, const void *, unsigned);

unsigned ***fn_828AF090(unsigned ***out, V *v, unsigned **where)
{
  unsigned **e = v->end;
  unsigned **src = where + 1;
  memmove(where, src, (e - src) * sizeof(unsigned *));
  e = v->end;
  *out = where;
  v->end = e - 1;
  return out;
}
