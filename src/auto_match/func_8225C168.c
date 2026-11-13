typedef struct Elem_8225C168 {
  int value;
} Elem_8225C168;

typedef struct Vec_8225C168 {
  Elem_8225C168 *first;
  Elem_8225C168 *last;
  Elem_8225C168 *end;
} Vec_8225C168;

extern void fn_8225C238(Vec_8225C168 *);

void fn_8225C168(Vec_8225C168 *v, Elem_8225C168 *val)
{
  Elem_8225C168 *l = v->last;
  unsigned char inside;
  if (val < l && v->first <= val)
    inside = 1;
  else
    inside = 0;
  if (inside) {
    int idx = val - v->first;
    if (l == v->end)
      fn_8225C238(v);
    if (v->last != 0)
      *v->last = v->first[idx];
  } else {
    if (l == v->end)
      fn_8225C238(v);
    if (v->last != 0)
      *v->last = *val;
  }
  v->last = v->last + 1;
}
