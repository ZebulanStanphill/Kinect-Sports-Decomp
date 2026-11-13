struct Obj_82E7C288;
typedef struct { char pad[8]; void (*f8)(struct Obj_82E7C288 *); } Vt_82E7C288;
typedef struct Obj_82E7C288 { Vt_82E7C288 *vt; } Obj_82E7C288;
typedef struct { Obj_82E7C288 *a; Obj_82E7C288 *b; } Pair_82E7C288;

void fn_82E7C288(Pair_82E7C288 *p)
{
  if (p->a != 0) {
    p->a->vt->f8(p->a);
    p->a = 0;
  }
  if (p->b != 0) {
    p->b->vt->f8(p->b);
    p->b = 0;
  }
}
