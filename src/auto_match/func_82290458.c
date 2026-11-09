typedef struct Elem_82290458 { int w[4]; } Elem_82290458;
typedef struct Vec_82290458 {
  Elem_82290458 *first;
  Elem_82290458 *last;
  Elem_82290458 *end;
} Vec_82290458;

extern void fn_8228E780(Elem_82290458 *, Elem_82290458 *);
extern void fn_822906A0(Vec_82290458 *);

void fn_82290458(Vec_82290458 *v, Elem_82290458 *val)
{
  Elem_82290458 *l = v->last;
  unsigned char inside;
  if (val < l && v->first <= val)
    inside = 1;
  else
    inside = 0;
  if (inside) {
    int idx = val - v->first;
    if (l == v->end)
      fn_822906A0(v);
    if (v->last != 0)
      fn_8228E780(v->last, v->first + idx);
  } else {
    if (l == v->end)
      fn_822906A0(v);
    if (v->last != 0)
      fn_8228E780(v->last, val);
  }
  v->last = v->last + 1;
}
