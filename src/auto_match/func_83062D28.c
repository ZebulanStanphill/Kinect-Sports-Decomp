typedef struct { int a, b; } Elem_83062D28;
typedef struct { Elem_83062D28 *first, *last, *end; } Vec_83062D28;
extern void fn_83062C28(Vec_83062D28 *, int);

static __forceinline unsigned char Inside(Vec_83062D28 *v, Elem_83062D28 *x)
{
  return x < v->last && v->first <= x;
}

void fn_83062D28(Vec_83062D28 *v, Elem_83062D28 *x)
{
  if (Inside(v, x)) {
    int idx = x - v->first;
    if (v->last == v->end) {
      fn_83062C28(v, 1);
    }
    if (v->last != 0) {
      *v->last = v->first[idx];
    }
  } else {
    if (v->last == v->end) {
      fn_83062C28(v, 1);
    }
    if (v->last != 0) {
      *v->last = *x;
    }
  }
  v->last = v->last + 1;
}
