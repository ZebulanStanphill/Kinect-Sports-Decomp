typedef struct Elem_8239DBB0 {
  int value;
} Elem_8239DBB0;

typedef struct Vec_8239DBB0 {
  Elem_8239DBB0 *first;
  Elem_8239DBB0 *last;
  Elem_8239DBB0 *end;
} Vec_8239DBB0;

extern void fn_8239DC80(Vec_8239DBB0 *);

void fn_8239DBB0(Vec_8239DBB0 *v, Elem_8239DBB0 *val)
{
  Elem_8239DBB0 *l = v->last;
  unsigned char inside;
  if (val < l && v->first <= val)
    inside = 1;
  else
    inside = 0;
  if (inside) {
    int idx = val - v->first;
    if (l == v->end)
      fn_8239DC80(v);
    if (v->last != 0)
      *v->last = v->first[idx];
  } else {
    if (l == v->end)
      fn_8239DC80(v);
    if (v->last != 0)
      *v->last = *val;
  }
  v->last = v->last + 1;
}
