typedef struct { char b[0x1c]; } Elem_82357460;
typedef struct { Elem_82357460 *first, *last, *end; } Vec_82357460;
extern void fn_822959F8(Elem_82357460 *, Elem_82357460 *);
extern void fn_82357530(Vec_82357460 *);

void fn_82357460(Vec_82357460 *v, Elem_82357460 *val)
{
  Elem_82357460 *l = v->last;
  unsigned char inside;
  if (val < l && v->first <= val)
    inside = 1;
  else
    inside = 0;
  if (inside) {
    int idx = val - v->first;
    if (l == v->end)
      fn_82357530(v);
    if (v->last != 0)
      fn_822959F8(v->last, v->first + idx);
  } else {
    if (l == v->end)
      fn_82357530(v);
    if (v->last != 0)
      fn_822959F8(v->last, val);
  }
  v->last = v->last + 1;
}
