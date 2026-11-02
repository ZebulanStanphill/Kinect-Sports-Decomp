typedef struct { char b[0x24]; } Elem_822A9E20;
typedef struct { Elem_822A9E20 *first, *last, *end; } Vec_822A9E20;
extern void fn_82292780(Elem_822A9E20 *, Elem_822A9E20 *);
extern void fn_822A9EF0(Vec_822A9E20 *);

void fn_822A9E20(Vec_822A9E20 *v, Elem_822A9E20 *val)
{
  Elem_822A9E20 *l = v->last;
  unsigned char inside;
  if (val < l && v->first <= val)
    inside = 1;
  else
    inside = 0;
  if (inside) {
    int idx = val - v->first;
    if (l == v->end)
      fn_822A9EF0(v);
    if (v->last != 0)
      fn_82292780(v->last, v->first + idx);
  } else {
    if (l == v->end)
      fn_822A9EF0(v);
    if (v->last != 0)
      fn_82292780(v->last, val);
  }
  v->last = v->last + 1;
}
