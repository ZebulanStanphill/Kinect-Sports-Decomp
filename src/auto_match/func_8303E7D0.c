typedef struct Vec_8303E7D0 { void *beg; void *end; void *cap; } Vec_8303E7D0;
typedef struct VtOb_8303E7D0 { void (*dtor)(void *, int); } VtOb_8303E7D0;
typedef struct Obj_8303E7D0 { VtOb_8303E7D0 *vt; Vec_8303E7D0 v; } Obj_8303E7D0;
extern void fn_82FA5190(void *, void *);
extern void *lbl_831BC768;

void fn_8303E7D0(Obj_8303E7D0 *o)
{
  Vec_8303E7D0 *v = &o->v;
  void *heap;

  if (v->beg != 0) {
    v->end = v->beg;
    fn_82FA5190(lbl_831BC768, v->beg);
    v->beg = 0;
    v->end = 0;
    v->cap = 0;
  }
  heap = lbl_831BC768;
  if (o != 0) {
    o->vt->dtor(o, 0);
    fn_82FA5190(heap, o);
  }
}
