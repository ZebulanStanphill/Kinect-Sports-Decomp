extern void fn_8265CA20(void *);
extern void fn_828B3E88(void *);

typedef struct E_828D80D0 { int a; void *p; int pad[5]; } E_828D80D0;
typedef struct Vec_828D80D0 { E_828D80D0 *first; E_828D80D0 *last; E_828D80D0 *end; } Vec_828D80D0;

static void Destroy(E_828D80D0 *f, E_828D80D0 *l)
{
  for (; f != l; f++) {
    fn_828B3E88(&f->p);
    fn_8265CA20(f->p);
    f->p = 0;
  }
}

void fn_828D80D0(Vec_828D80D0 *v)
{
  if (v->first != 0) {
    Destroy(v->first, v->last);
    fn_8265CA20(v->first);
  }
  v->first = 0;
  v->last = 0;
  v->end = 0;
}
