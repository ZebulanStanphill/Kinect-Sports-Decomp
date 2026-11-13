typedef struct { void *ptr; void *rc; } SP_82359BB0;
typedef struct { SP_82359BB0 *first; SP_82359BB0 *last; SP_82359BB0 *end; } Vec_82359BB0;
extern void fn_822315A0(void *);
extern void fn_8265CA20(void *);

void fn_82359BB0(Vec_82359BB0 *v)
{
  SP_82359BB0 *p, *last;
  if (v->first != 0) {
    last = v->last;
    for (p = v->first; p != last; p++) {
      if (p->rc != 0) fn_822315A0(p->rc);
    }
    fn_8265CA20(v->first);
  }
  v->first = 0;
  v->last = 0;
  v->end = 0;
}
