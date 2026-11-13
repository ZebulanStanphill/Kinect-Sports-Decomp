/* vector<Elem>::clear() with the 20-byte element copy and the (empty) destroy loop inlined. */
typedef struct Elem_82458598 { int v[5]; } Elem_82458598;
typedef struct Vec_82458598 { Elem_82458598 *first; Elem_82458598 *last; } Vec_82458598;

static __forceinline Elem_82458598 *copy_82458598(Elem_82458598 *s, Elem_82458598 *e, Elem_82458598 *d)
{
  for (; s != e; s++, d++) {
    *d = *s;
  }
  return d;
}

static __forceinline void destroy_82458598(Elem_82458598 *p, Elem_82458598 *e)
{
  for (; p != e; p++)
    ;
}

static __forceinline void erase_82458598(Vec_82458598 *v, Elem_82458598 *first, Elem_82458598 *last)
{
  if (first != last) {
    Elem_82458598 *p = copy_82458598(last, v->last, first);
    destroy_82458598(p, v->last);
    v->last = p;
  }
}

void fn_82458598(Vec_82458598 *v)
{
  erase_82458598(v, v->first, v->last);
}
