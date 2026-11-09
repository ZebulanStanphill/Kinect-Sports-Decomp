/* vector<12-byte element>::push_back (unoptimised: /O1 /Og-): when the value lives inside the vector,
   its index is taken before a possible reallocation and the element re-read afterwards. */
typedef struct { int v[3]; } Elem_82666230;
typedef struct Vec_82666230 { Elem_82666230 *first, *last, *end; } Vec_82666230;

extern void fn_8265D468(Vec_82666230 *, Elem_82666230 *, Elem_82666230 *);
extern Elem_82666230 *fn_8265D5A8(Elem_82666230 *);
extern void fn_82666D30(Vec_82666230 *, int);
extern void fn_82667870(void *, Elem_82666230 *, Elem_82666230 *);
extern unsigned char fn_82666CE0(Vec_82666230 *, Elem_82666230 *);

void fn_82666230(Vec_82666230 *v, Elem_82666230 *val)
{
  if (fn_82666CE0(v, fn_8265D5A8(val))) {
    int idx = fn_8265D5A8(val) - v->first;
    if (v->last == v->end)
      fn_82666D30(v, 1);
    fn_8265D468(v, v->last, v->last);
    fn_82667870((char *)v + 0xc, v->last, fn_8265D5A8(v->first + idx));
    v->last = v->last + 1;
  } else {
    if (v->last == v->end)
      fn_82666D30(v, 1);
    fn_8265D468(v, v->last, v->last);
    fn_82667870((char *)v + 0xc, v->last, fn_8265D5A8(val));
    v->last = v->last + 1;
  }
}
