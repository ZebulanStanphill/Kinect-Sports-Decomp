typedef struct { char b[0x20]; } Elem_8265FB98;
typedef struct { Elem_8265FB98 *first, *last, *end; } Vec_8265FB98;
extern void fn_8265D468(Vec_8265FB98 *, Elem_8265FB98 *, Elem_8265FB98 *);
extern Elem_8265FB98 *fn_8265D5A8(Elem_8265FB98 *);
extern void fn_82660140(Vec_8265FB98 *, int);
extern void fn_82661A48(void *, Elem_8265FB98 *, Elem_8265FB98 *);
extern void fn_826631B8(void *, Elem_8265FB98 *, Elem_8265FB98 *);
extern unsigned char fn_82666CE0(Vec_8265FB98 *, Elem_8265FB98 *);

void fn_8265FB98(Vec_8265FB98 *v, Elem_8265FB98 *val)
{
  if (fn_82666CE0(v, fn_8265D5A8(val))) {
    int idx = fn_8265D5A8(val) - v->first;
    if (v->last == v->end)
      fn_82660140(v, 1);
    fn_8265D468(v, v->last, v->last);
    fn_826631B8((char *)v + 0xc, v->last, v->first + idx);
    v->last = v->last + 1;
  } else {
    if (v->last == v->end)
      fn_82660140(v, 1);
    fn_8265D468(v, v->last, v->last);
    fn_82661A48((char *)v + 0xc, v->last, val);
    v->last = v->last + 1;
  }
}
