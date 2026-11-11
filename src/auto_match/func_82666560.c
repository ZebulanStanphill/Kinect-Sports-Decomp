typedef struct { char b[0x4]; } Elem_82666560;
typedef struct { Elem_82666560 *first, *last, *end; } Vec_82666560;
extern void fn_8265D468(Vec_82666560 *, Elem_82666560 *, Elem_82666560 *);
extern Elem_82666560 *fn_8265D5A8(Elem_82666560 *);
extern void fn_82666B78(Vec_82666560 *, int);
extern void fn_8266ADE0(void *, Elem_82666560 *, Elem_82666560 *);
extern unsigned char fn_82666CE0(Vec_82666560 *, Elem_82666560 *);

void fn_82666560(Vec_82666560 *v, Elem_82666560 *val)
{
  if (fn_82666CE0(v, fn_8265D5A8(val))) {
    int idx = fn_8265D5A8(val) - v->first;
    if (v->last == v->end)
      fn_82666B78(v, 1);
    fn_8265D468(v, v->last, v->last);
    fn_8266ADE0((char *)v + 0xc, v->last, v->first + idx);
    v->last = v->last + 1;
  } else {
    if (v->last == v->end)
      fn_82666B78(v, 1);
    fn_8265D468(v, v->last, v->last);
    fn_8266ADE0((char *)v + 0xc, v->last, val);
    v->last = v->last + 1;
  }
}
