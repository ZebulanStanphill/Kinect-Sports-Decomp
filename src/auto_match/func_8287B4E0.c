/* std::vector<T>::push_back (VC10) for a 24-byte element: the element is constructed through
   the allocator's construct (null test inside, source address computed first). */
typedef struct { unsigned char b[0x18]; } T_8287B4E0;
typedef struct { T_8287B4E0 *first, *last, *end; } V_8287B4E0;
extern void fn_8287B210(V_8287B4E0 *, int);

static unsigned char Inside(V_8287B4E0 *v, T_8287B4E0 *x)
{
  return x < v->last && v->first <= x;
}

static __forceinline void Construct(T_8287B4E0 *p, T_8287B4E0 *x)
{
  if (p != 0) {
    *p = *x;
  }
}

void fn_8287B4E0(V_8287B4E0 *v, T_8287B4E0 *x)
{
  if (Inside(v, x)) {
    int idx = x - v->first;
    if (v->last == v->end) {
      fn_8287B210(v, 1);
    }
    Construct(v->last, &v->first[idx]);
  } else {
    if (v->last == v->end) {
      fn_8287B210(v, 1);
    }
    Construct(v->last, x);
  }
  v->last = v->last + 1;
}
