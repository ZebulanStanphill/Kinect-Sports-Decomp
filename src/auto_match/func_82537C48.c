typedef struct { char b[0x38]; } Elem_82537C48;
typedef struct { Elem_82537C48 *first, *last, *end; } Vec_82537C48;
extern void fn_82268D78(Elem_82537C48 *, Elem_82537C48 *);
extern void fn_82268BD0(Vec_82537C48 *);

void fn_82537C48(Vec_82537C48 *v, Elem_82537C48 *val)
{
  Elem_82537C48 *l = v->last;
  unsigned char inside;
  if (val < l && v->first <= val)
    inside = 1;
  else
    inside = 0;
  if (inside) {
    int idx = val - v->first;
    if (l == v->end)
      fn_82268BD0(v);
    if (v->last != 0)
      fn_82268D78(v->last, v->first + idx);
  } else {
    if (l == v->end)
      fn_82268BD0(v);
    if (v->last != 0)
      fn_82268D78(v->last, val);
  }
  v->last = v->last + 1;
}
