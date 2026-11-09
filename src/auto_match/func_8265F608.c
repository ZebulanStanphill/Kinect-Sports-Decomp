typedef struct { void *p; } Elem_8265F608;
typedef struct Vec_8265F608 { Elem_8265F608 *first, *last, *end; } Vec_8265F608;

extern void fn_8265D468(Vec_8265F608 *, Elem_8265F608 *, Elem_8265F608 *);
extern Elem_8265F608 *fn_8265D5A8(Elem_8265F608 *);
extern void fn_82666B78(Vec_8265F608 *, int);
extern void fn_8266B060(void *, Elem_8265F608 *, Elem_8265F608 *);
extern unsigned char fn_82666CE0(Vec_8265F608 *, Elem_8265F608 *);

void fn_8265F608(Vec_8265F608 *v, Elem_8265F608 *val)
{
  if (fn_82666CE0(v, fn_8265D5A8(val))) {
    int idx = fn_8265D5A8(val) - v->first;
    if (v->last == v->end)
      fn_82666B78(v, 1);
    fn_8265D468(v, v->last, v->last);
    fn_8266B060((char *)v + 0xc, v->last, fn_8265D5A8(v->first + idx));
    v->last = v->last + 1;
  } else {
    if (v->last == v->end)
      fn_82666B78(v, 1);
    fn_8265D468(v, v->last, v->last);
    fn_8266B060((char *)v + 0xc, v->last, fn_8265D5A8(val));
    v->last = v->last + 1;
  }
}
