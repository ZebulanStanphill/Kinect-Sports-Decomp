/* vector<Pair>::clear(): erase(begin(), end()) with the copy and the (empty) destroy loop inlined. */
typedef struct Pair_824DF378 { int a; int b; } Pair_824DF378;
typedef struct Vec_824DF378 { Pair_824DF378 *first; Pair_824DF378 *last; } Vec_824DF378;

static __forceinline Pair_824DF378 *copy_824DF378(Pair_824DF378 *s, Pair_824DF378 *e, Pair_824DF378 *d)
{
  for (; s != e; s++, d++) {
    *d = *s;
  }
  return d;
}

static __forceinline void destroy_824DF378(Pair_824DF378 *p, Pair_824DF378 *e)
{
  for (; p != e; p++)
    ;
}

static __forceinline void erase_824DF378(Vec_824DF378 *v, Pair_824DF378 *first, Pair_824DF378 *last)
{
  if (first != last) {
    Pair_824DF378 *p = copy_824DF378(last, v->last, first);
    destroy_824DF378(p, v->last);
    v->last = p;
  }
}

void fn_824DF378(Vec_824DF378 *v)
{
  erase_824DF378(v, v->first, v->last);
}
