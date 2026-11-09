/* std::vector<T>::push_back (VC10) for a 16-byte element made of two 8-byte halves: the element
   is constructed through the allocator's construct (null test inside, source address computed
   first), which passes both halves of the source to fn_82517608. */
typedef struct { unsigned char b[8]; } Half_82516FD8;
typedef struct { Half_82516FD8 first, second; } T_82516FD8;
typedef struct { T_82516FD8 *first, *last, *end; } V_82516FD8;
extern void fn_82517340(V_82516FD8 *, int);
extern void fn_82517608(T_82516FD8 *, Half_82516FD8 *, Half_82516FD8 *);
static unsigned char Inside(V_82516FD8 *v, T_82516FD8 *x)
{
  return x < v->last && v->first <= x;
}
static __forceinline void Construct(T_82516FD8 *p, T_82516FD8 *x)
{
  if (p != 0) {
    fn_82517608(p, &x->first, &x->second);
  }
}
void fn_82516FD8(V_82516FD8 *v, T_82516FD8 *x)
{
  if (Inside(v, x)) {
    int idx = x - v->first;
    if (v->last == v->end) {
      fn_82517340(v, 1);
    }
    Construct(v->last, &v->first[idx]);
  } else {
    if (v->last == v->end) {
      fn_82517340(v, 1);
    }
    Construct(v->last, x);
  }
  v->last = v->last + 1;
}
