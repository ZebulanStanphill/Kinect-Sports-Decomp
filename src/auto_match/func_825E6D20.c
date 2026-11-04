extern void fn_82522ED8(void *);
typedef struct Vec_825E6D20 { void *first; void *last; int pad[2]; unsigned n; } Vec_825E6D20;
typedef struct O_825E6D20 { Vec_825E6D20 a; Vec_825E6D20 b; } O_825E6D20;
static __forceinline void clr(Vec_825E6D20 *v) {
  unsigned i;
  if (v->first != 0) {
    for (i = 0; i < v->n; i++) ;
    v->last = v->first; v->n = 0;
    fn_82522ED8(v->first);
  }
}
void fn_825E6D20(O_825E6D20 *o) { clr(&o->b); clr(&o->a); }
