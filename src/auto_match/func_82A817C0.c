typedef struct Obj Obj;
typedef void (*Method)(Obj *o, int a, int b);
typedef struct { void *slot[3]; Method f3, f4; } VT;
struct Obj { VT *vt; };
typedef struct { int a, b, c; Obj *obj; } S;

void fn_82A817C0(S *p, int unused, int a, int b)
{
  if (p->obj)
    p->obj->vt->f3(p->obj, a, b);
}
