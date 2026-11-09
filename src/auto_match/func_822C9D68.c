typedef struct Elem_822C9D68 { int w[2]; } Elem_822C9D68;
typedef struct Vec_822C9D68 {
  Elem_822C9D68 *first;
  Elem_822C9D68 *last;
  Elem_822C9D68 *end;
} Vec_822C9D68;

extern void fn_82365BD8(Elem_822C9D68 *, Elem_822C9D68 *);
extern void fn_822C9E38(Vec_822C9D68 *);

void fn_822C9D68(Vec_822C9D68 *v, Elem_822C9D68 *val)
{
  Elem_822C9D68 *l = v->last;
  unsigned char inside;
  if (val < l && v->first <= val)
    inside = 1;
  else
    inside = 0;
  if (inside) {
    int idx = val - v->first;
    if (l == v->end)
      fn_822C9E38(v);
    if (v->last != 0)
      fn_82365BD8(v->last, v->first + idx);
  } else {
    if (l == v->end)
      fn_822C9E38(v);
    if (v->last != 0)
      fn_82365BD8(v->last, val);
  }
  v->last = v->last + 1;
}
