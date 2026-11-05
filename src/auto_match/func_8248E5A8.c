extern void fn_822315A0(void *);
extern int *fn_82365BD8(void *, void *);
extern void fn_8248D360(void *, void *);
typedef struct { int a; int *rc; float f; } Elem_8248E5A8;
typedef struct { int a; int *rc; } Tmp_8248E5A8;
typedef struct { int p0; Elem_8248E5A8 *end; } Vec_8248E5A8;
static __forceinline void Swp_8248E5A8(int *a, int *b) { int t = *a; *a = *b; *b = t; }
Elem_8248E5A8 **fn_8248E5A8(Elem_8248E5A8 **out, Vec_8248E5A8 *v, Elem_8248E5A8 *first)
{
  Elem_8248E5A8 *end = v->end;
  if (first + 1 != end) {
    Elem_8248E5A8 *d = first;
    do {
      Tmp_8248E5A8 t;
      Tmp_8248E5A8 *r = (Tmp_8248E5A8 *)fn_82365BD8(&t, d + 1);
      Swp_8248E5A8((int *)&r->rc, (int *)&d->rc);
      Swp_8248E5A8(&r->a, &d->a);
      if (t.rc != 0) fn_822315A0(t.rc);
      d->f = d[1].f;
      d++;
    } while (d + 1 != end);
  }
  {
    Elem_8248E5A8 *e1 = v->end;
    Elem_8248E5A8 *e2;
    fn_8248D360(e1 - 1, e1);
    e2 = v->end;
    *out = first;
    v->end = e2 - 1;
  }
  return out;
}
