typedef struct { int v[9]; } Elem_829EE368;
typedef struct {
  Elem_829EE368 *first;
  Elem_829EE368 *last;
  Elem_829EE368 *end;
} Vec_829EE368;

void *memmove(void *, const void *, unsigned int);
extern void fn_829E9F88(Elem_829EE368 *e, int flags);

Elem_829EE368 *fn_829EE368(Vec_829EE368 *v, Elem_829EE368 *first, Elem_829EE368 *last)
{
  Elem_829EE368 *p = first;
  while (p < last && p < v->end) {
    fn_829E9F88(p, 0);
    p++;
  }
  memmove(first, p, (v->end - p) * sizeof(Elem_829EE368));
  v->end = first + (v->end - p);
  return first;
}
