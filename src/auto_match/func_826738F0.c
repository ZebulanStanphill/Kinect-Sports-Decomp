typedef struct { int a, b; } Elem_826738F0;
typedef struct { Elem_826738F0 *first, *last, *end; } Vec_826738F0;
extern void fn_83062C28(Vec_826738F0 *, int);

static __forceinline unsigned char Inside(Vec_826738F0 *v, Elem_826738F0 *x)
{
  return x < v->last && v->first <= x;
}

static __forceinline void Construct(Elem_826738F0 *p, Elem_826738F0 *x)
{
  if (p != 0) {
    p->a = x->a;
    p->b = x->b;
  }
}

void fn_826738F0(Vec_826738F0 *v, Elem_826738F0 *x)
{
  if (Inside(v, x)) {
    int idx = x - v->first;
    if (v->last == v->end) {
      fn_83062C28(v, 1);
    }
    Construct(v->last, &v->first[idx]);
  } else {
    if (v->last == v->end) {
      fn_83062C28(v, 1);
    }
    Construct(v->last, x);
  }
  v->last = v->last + 1;
}
