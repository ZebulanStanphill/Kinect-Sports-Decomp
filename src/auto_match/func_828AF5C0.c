/* vector<Triple>::clear(): erase(begin(), end()) with the copy inlined (no destroy loop survives). */
typedef struct Pair_828AF5C0 { int a; int b; int c; } Pair_828AF5C0;
typedef struct Vec_828AF5C0 { Pair_828AF5C0 *first; Pair_828AF5C0 *last; } Vec_828AF5C0;

static __forceinline Pair_828AF5C0 *copy_828AF5C0(Pair_828AF5C0 *s, Pair_828AF5C0 *e, Pair_828AF5C0 *d)
{
  for (; s != e; s++, d++) {
    *d = *s;
  }
  return d;
}

static __forceinline void erase_828AF5C0(Vec_828AF5C0 *v, Pair_828AF5C0 *first, Pair_828AF5C0 *last)
{
  if (first != last) {
    Pair_828AF5C0 *p = copy_828AF5C0(last, v->last, first);
    v->last = p;
  }
}

void fn_828AF5C0(Vec_828AF5C0 *v)
{
  erase_828AF5C0(v, v->first, v->last);
}
