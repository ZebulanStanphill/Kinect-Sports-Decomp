typedef struct { char b[0x1c]; } T;
typedef struct { T *first, *last, *end; } V;
extern void fn_822DD2E8(V *, int);
extern void fn_8223B688(T *, T *);

static unsigned char Inside(V *v, T *x)
{
  return x < v->last && v->first <= x;
}

void fn_822EC698(V *v, T *x)
{
  if (Inside(v, x)) {
    int idx = x - v->first;
    if (v->last == v->end) {
      fn_822DD2E8(v, 1);
    }
    if (v->last != 0) {
      fn_8223B688(v->last, v->first + idx);
    }
  } else {
    if (v->last == v->end) {
      fn_822DD2E8(v, 1);
    }
    if (v->last != 0) {
      fn_8223B688(v->last, x);
    }
  }
  v->last = v->last + 1;
}
