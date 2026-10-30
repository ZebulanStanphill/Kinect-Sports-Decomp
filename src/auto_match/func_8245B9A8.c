typedef struct { void *p; int b; int c; } Vec_8245B9A8;
typedef struct {
  char pad[0x560];
  Vec_8245B9A8 *v560;
  Vec_8245B9A8 *v564;
  void *h[2];
} Obj_8245B9A8;
extern void fn_8265CA20(void *);
extern void fn_8265CAA0(void *);

void fn_8245B9A8(Obj_8245B9A8 *o)
{
  int i;
  Vec_8245B9A8 *v = o->v564;
  if (v != 0) {
    if (v->p != 0) {
      fn_8265CAA0(v->p);
      v->p = 0;
    }
    v->b = 0;
    v->c = 0;
    fn_8265CA20(v);
    o->v564 = 0;
  }
  for (i = 0; i < 2; i++) {
    if (o->h[i] != 0) {
      fn_8265CA20(o->h[i]);
      o->h[i] = 0;
    }
  }
  v = o->v560;
  if (v != 0) {
    if (v->p != 0) {
      fn_8265CAA0(v->p);
      v->p = 0;
    }
    v->b = 0;
    v->c = 0;
    fn_8265CA20(v);
    o->v560 = 0;
  }
}
